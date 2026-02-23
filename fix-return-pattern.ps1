# Fix "callee(); return;" bug: add return-address check before continuing
# Pattern: callee(rdram, ctx, runtime); return;
#          ctx->pc = 0xNNNNNNu;
# Becomes: callee(rdram, ctx, runtime);
#          if (ctx->pc != 0xNNNNNNu) { return; }
#          ctx->pc = 0xNNNNNNu;

$runnerDir = Join-Path $PSScriptRoot "ps2xRuntime\src\runner"
$files = Get-ChildItem -Path $runnerDir -Filter "*.cpp" -Recurse

$pattern = '(?m)^(\s+)(.+\(rdram,\s*ctx,\s*runtime\))\s*;\s*return;\s*\r?\n\1(ctx->pc\s*=\s*(0x[0-9A-Fa-f]+u);)\s*$'
$replacement = "`$1`$2;`r`n`$1if (ctx->pc != `$4) { return; }`r`n`$1ctx->pc = `$4;"

$totalFixed = 0
foreach ($file in $files) {
    $content = Get-Content -Path $file.FullName -Raw
    if ($content -match $pattern) {
        $newContent = $content -replace $pattern, $replacement
        if ($newContent -ne $content) {
            $count = ([regex]::Matches($content, $pattern)).Count
            Set-Content -Path $file.FullName -Value $newContent -NoNewline
            $totalFixed += $count
            Write-Host "Fixed $count in $($file.Name)"
        }
    }
}
Write-Host "Total replacements: $totalFixed"
