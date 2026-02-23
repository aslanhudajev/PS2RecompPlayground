# Adds PS2_INIT_LOG_ENTRY/exit logging to all runner .cpp files.
# Run from repo root: .\ps2xRuntime\scripts\add_init_logs.ps1
# Usage: .\add_init_logs.ps1 [-WhatIf] [-DryRun]

param(
    [switch]$WhatIf,
    [switch]$DryRun
)

$ErrorActionPreference = 'Stop'
$RunnerDir = Join-Path $PSScriptRoot '..' 'src' 'runner'
$RunnerDir = [System.IO.Path]::GetFullPath($RunnerDir)

if (-not (Test-Path $RunnerDir)) {
    Write-Error "Runner directory not found: $RunnerDir"
}

$CppFiles = Get-ChildItem -Path $RunnerDir -Filter '*.cpp' -File
$Total = $CppFiles.Count
$Modified = 0
$Skipped = 0

# Pattern: void FuncName_0xADDR(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
$FuncPattern = [regex]'void\s+(\w+)_0x[0-9a-fA-F]+\s*\([^)]*\)\s*\{'

foreach ($File in $CppFiles) {
    $Content = Get-Content -Path $File.FullName -Raw -ErrorAction SilentlyContinue
    if (-not $Content) { $Skipped++; continue }

    if ($Content -match 'PS2_INIT_LOG_ENTRY') {
        $Skipped++
        continue
    }

    $Match = $FuncPattern.Match($Content)
    if (-not $Match.Success) {
        $Skipped++
        continue
    }

    $LogName = $Match.Groups[1].Value

    # Add include if missing (after last #include)
    if ($Content -notmatch 'ps2_init_log\.h') {
        if ($Content -match '#include\s+"ps2_stubs\.h"') {
            $Content = $Content -replace '(#include\s+"ps2_stubs\.h")', '$1
#include "ps2_init_log.h"'
        } else {
            # After last #include
            $LastInclude = [regex]::Matches($Content, '#include\s+[^\r\n]+') | Select-Object -Last 1
            if ($LastInclude) {
                $Content = $Content -replace [regex]::Escape($LastInclude.Value), "$($LastInclude.Value)`n#include `"ps2_init_log.h`""
            }
        }
    }

    # Insert PS2_INIT_LOG_ENTRY after ") {"
    $FuncStart = $Match.Value
    $InsertText = "    PS2_INIT_LOG_ENTRY(`"$LogName`");`n"
    $Replacement = $FuncStart + "`n" + $InsertText
    $NewContent = $Content -replace [regex]::Escape($FuncStart), $Replacement

    if ($NewContent -ne $Content) {
        if (-not $DryRun -and -not $WhatIf) {
            [System.IO.File]::WriteAllText($File.FullName, $NewContent)
        }
        $Modified++
        if ($Modified -le 20) { Write-Host "[OK] $($File.Name) -> $LogName" }
    } else {
        $Skipped++
    }
}

if ($Modified -gt 20) { Write-Host "[OK] ... and $($Modified - 20) more" }
Write-Host "`nDone: $Modified modified, $Skipped skipped, $Total total"
if ($DryRun -or $WhatIf) { Write-Host "(Dry run - no files changed)" }
