# Replace _mm_blendv_ps (SSE4.1) with ps2_blendv_ps (SSE2) in runner files
$runnerDir = Join-Path $PSScriptRoot "ps2xRuntime\src\runner"
$count = 0

Get-ChildItem -Path $runnerDir -Filter "*.cpp" | ForEach-Object {
    $content = Get-Content $_.FullName -Raw -ErrorAction SilentlyContinue
    if ($content -and $content -match '_mm_blendv_ps') {
        $newContent = $content -replace '_mm_blendv_ps', 'ps2_blendv_ps'
        Set-Content -Path $_.FullName -Value $newContent -NoNewline
        Write-Host "Fixed: $($_.Name)"
        $count++
    }
}

Write-Host "`nDone. Fixed $count file(s)."
