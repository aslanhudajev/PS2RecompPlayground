# Add $gp (r28) preservation around lookupFunction callback invocations.
# Run from repo root: .\scripts\add-gp-preservation.ps1

$runnerDir = Join-Path $PSScriptRoot "..\ps2xRuntime\src\runner"
$files = Get-ChildItem -Path $runnerDir -Filter "*.cpp" -File

# Pattern: block that invokes lookupFunction but does NOT already preserve gp
# Negative lookbehind: must NOT be preceded by saved_gp line (already fixed)
$pattern = '(?m)^(?<!const uint32_t saved_gp = GPR_U32\(ctx, 28\);\r?\n)(\s+)auto targetFn = runtime->lookupFunction\(jumpTarget\);\r?\n\1const uint32_t __entryPc = ctx->pc;\r?\n\1targetFn\(rdram, ctx, runtime\);\r?\n'

$totalFixed = 0
$fixedFiles = @()

foreach ($file in $files) {
    $content = [System.IO.File]::ReadAllText($file.FullName)
    $originalContent = $content

    $content = [regex]::Replace($content, $pattern, {
        param($m)
        $indent = $m.Groups[1].Value
        $nl = "`n"
        "${indent}const uint32_t saved_gp = GPR_U32(ctx, 28);${nl}" +
        "${indent}auto targetFn = runtime->lookupFunction(jumpTarget);${nl}" +
        "${indent}const uint32_t __entryPc = ctx->pc;${nl}" +
        "${indent}targetFn(rdram, ctx, runtime);${nl}" +
        "${indent}SET_GPR_U32(ctx, 28, saved_gp);${nl}"
    })

    if ($content -ne $originalContent) {
        $count = ([regex]::Matches($originalContent, $pattern)).Count
        $totalFixed += $count
        $fixedFiles += [PSCustomObject]@{ File = $file.Name; Count = $count }
        [System.IO.File]::WriteAllText($file.FullName, $content)
    }
}

if ($fixedFiles.Count -gt 0) {
    Write-Host "Fixed $totalFixed lookupFunction block(s) in $($fixedFiles.Count) file(s):" -ForegroundColor Green
    $fixedFiles | ForEach-Object { Write-Host "  $($_.File): $($_.Count) block(s)" }
} else {
    Write-Host "No blocks to fix (all already have gp preservation or pattern not found)." -ForegroundColor Yellow
}
