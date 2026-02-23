# Fix systemic ctx->pc return-address bug across all runner files.
# Problem: Recompiled callees sometimes return with wrong ctx->pc (epilogue $ra restore bug).
# Fix: Add "else if (ctx->pc != 0xNNu) { ctx->pc = 0xNNu; }" before the guard check.
# This coerces unexpected return PCs to the expected one when the callee completed normally.

$runnerDir = Join-Path $PSScriptRoot "..\ps2xRuntime\src\runner"
$files = Get-ChildItem -Path $runnerDir -Filter "*.cpp" -File
$totalReplacements = 0

foreach ($file in $files) {
    $content = Get-Content $file.FullName -Raw -Encoding UTF8
    if (-not $content) { continue }

    # Match: "if (ctx->pc == __entryPc) { ctx->pc = 0xADDRu; }\n    }\n    if (ctx->pc != 0xADDRu)"
    # where there is NO "else if (ctx->pc !=" between the first line and the closing brace.
    # Use [\s\S] to match across lines; ? prevents matching "else if" variant.
    $pattern = '(?m)^(\s+if \(ctx->pc == __entryPc\) \{ ctx->pc = (0x[0-9A-Fa-f]+u); \})\r?\n(\s+\})\r?\n(\s+if \(ctx->pc != \2\))'
    
    $matches = [regex]::Matches($content, $pattern)
    $modified = $false
    
    foreach ($match in $matches) {
        $fullMatch = $match.Value
        # Only add if "else if" is NOT already present (avoid double-adding)
        if ($fullMatch -notmatch 'else if \(ctx->pc !=') {
            $indent = $match.Groups[1].Value -replace '^(\s+).*','$1'
            $addr = $match.Groups[2].Value
            $replacement = $match.Groups[1].Value + "`n" + $indent + "else if (ctx->pc != $addr) { ctx->pc = $addr; }" + "`n" + $match.Groups[3].Value + "`n" + $match.Groups[4].Value
            $content = $content.Replace($fullMatch, $replacement)
            $modified = $true
            $totalReplacements++
        }
    }

    if ($modified) {
        Set-Content -Path $file.FullName -Value $content -NoNewline -Encoding UTF8
        Write-Host "Fixed: $($file.Name)"
    }
}

Write-Host "`nTotal replacements: $totalReplacements"
