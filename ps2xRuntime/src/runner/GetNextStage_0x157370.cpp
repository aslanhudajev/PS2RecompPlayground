#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetNextStage
// Address: 0x157370 - 0x1575e8
void GetNextStage_0x157370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetNextStage_0x157370");
#endif

    ctx->pc = 0x157370u;

    // 0x157370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157374: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15737c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157380: 0x8c253514  lw          $a1, 0x3514($at)
    ctx->pc = 0x157380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x157384: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x157384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x157388: 0x1020008b  beqz        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x157388u;
    {
        const bool branch_taken_0x157388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157388u;
            // 0x15738c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157388) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x157390u;
    // 0x157390: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x157390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x157394: 0x24840e50  addiu       $a0, $a0, 0xE50
    ctx->pc = 0x157394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3664));
    // 0x157398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15739c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1573a0: 0x600008  jr          $v1
    ctx->pc = 0x1573A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1573A8u: goto label_1573a8;
            case 0x1573B0u: goto label_1573b0;
            case 0x1574A0u: goto label_1574a0;
            case 0x1574A8u: goto label_1574a8;
            case 0x157598u: goto label_157598;
            case 0x1575A0u: goto label_1575a0;
            case 0x1575A8u: goto label_1575a8;
            case 0x1575B0u: goto label_1575b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1573A8u;
label_1573a8:
    // 0x1573a8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1573A8u;
    {
        const bool branch_taken_0x1573a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573A8u;
            // 0x1573ac: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573a8) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1573B0u;
label_1573b0:
    // 0x1573b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1573b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1573b4: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x1573b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x1573b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1573B8u;
    {
        const bool branch_taken_0x1573b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1573B8u;
            // 0x1573bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573b8) {
            ctx->pc = 0x157408u;
            goto label_157408;
        }
    }
    ctx->pc = 0x1573C0u;
    // 0x1573c0: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1573C0u;
    SET_GPR_U32(ctx, 31, 0x1573C8u);
    ctx->pc = 0x1573C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1573C0u;
            // 0x1573c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573C8u; }
        if (ctx->pc != 0x1573C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1573C8u; }
        if (ctx->pc != 0x1573C8u) { return; }
    }
    ctx->pc = 0x1573C8u;
    // 0x1573c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1573c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573cc: 0x0  nop
    ctx->pc = 0x1573ccu;
    // NOP
label_1573d0:
    // 0x1573d0: 0x8c4800e4  lw          $t0, 0xE4($v0)
    ctx->pc = 0x1573d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1573d4: 0x8c4700e8  lw          $a3, 0xE8($v0)
    ctx->pc = 0x1573d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1573d8: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x1573d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x1573dc: 0x8c4600ec  lw          $a2, 0xEC($v0)
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1573e0: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x1573e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1573e4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1573e8: 0x8c4400f4  lw          $a0, 0xF4($v0)
    ctx->pc = 0x1573e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1573ec: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x1573ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1573f0: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x1573f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1573f4: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x1573f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1573f8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1573fc: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1573fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x157400: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x157400u;
    {
        const bool branch_taken_0x157400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157400u;
            // 0x157404: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157400) {
            ctx->pc = 0x1573D0u;
            goto label_1573d0;
        }
    }
    ctx->pc = 0x157408u;
label_157408:
    // 0x157408: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15740c: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x15740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157410: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x157410u;
    {
        const bool branch_taken_0x157410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157410u;
            // 0x157414: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157410) {
            ctx->pc = 0x157460u;
            goto label_157460;
        }
    }
    ctx->pc = 0x157418u;
    // 0x157418: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x157418u;
    SET_GPR_U32(ctx, 31, 0x157420u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157420u; }
        if (ctx->pc != 0x157420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157420u; }
        if (ctx->pc != 0x157420u) { return; }
    }
    ctx->pc = 0x157420u;
    // 0x157420: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x157420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157424: 0x0  nop
    ctx->pc = 0x157424u;
    // NOP
label_157428:
    // 0x157428: 0x8c4800e4  lw          $t0, 0xE4($v0)
    ctx->pc = 0x157428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x15742c: 0x8c4700e8  lw          $a3, 0xE8($v0)
    ctx->pc = 0x15742cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x157430: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x157430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x157434: 0x8c4600ec  lw          $a2, 0xEC($v0)
    ctx->pc = 0x157434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x157438: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x157438u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15743c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x15743cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x157440: 0x8c4400f4  lw          $a0, 0xF4($v0)
    ctx->pc = 0x157440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x157444: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x157444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x157448: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x157448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x15744c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x15744cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x157450: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x157450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x157454: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x157454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x157458: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x157458u;
    {
        const bool branch_taken_0x157458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15745Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157458u;
            // 0x15745c: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157458) {
            ctx->pc = 0x157428u;
            goto label_157428;
        }
    }
    ctx->pc = 0x157460u;
label_157460:
    // 0x157460: 0x2a0203e8  slti        $v0, $s0, 0x3E8
    ctx->pc = 0x157460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x157464: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157464u;
    {
        const bool branch_taken_0x157464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157464u;
            // 0x157468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157464) {
            ctx->pc = 0x157478u;
            goto label_157478;
        }
    }
    ctx->pc = 0x15746Cu;
    // 0x15746c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157470: 0xac222c70  sw          $v0, 0x2C70($at)
    ctx->pc = 0x157470u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11376), GPR_U32(ctx, 2));
    // 0x157474: 0x0  nop
    ctx->pc = 0x157474u;
    // NOP
label_157478:
    // 0x157478: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15747c: 0x8c222c70  lw          $v0, 0x2C70($at)
    ctx->pc = 0x15747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11376)));
    // 0x157480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157480u;
    {
        const bool branch_taken_0x157480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157480u;
            // 0x157484: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157480) {
            ctx->pc = 0x157490u;
            goto label_157490;
        }
    }
    ctx->pc = 0x157488u;
    // 0x157488: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x157488u;
    {
        const bool branch_taken_0x157488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157488) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x157490u;
label_157490:
    // 0x157490: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157494: 0x8c223514  lw          $v0, 0x3514($at)
    ctx->pc = 0x157494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x157498: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x157498u;
    {
        const bool branch_taken_0x157498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157498u;
            // 0x15749c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157498) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1574A0u;
label_1574a0:
    // 0x1574a0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1574A0u;
    {
        const bool branch_taken_0x1574a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1574A0u;
            // 0x1574a4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574a0) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1574A8u;
label_1574a8:
    // 0x1574a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1574a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1574ac: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x1574acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x1574b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1574B0u;
    {
        const bool branch_taken_0x1574b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1574B0u;
            // 0x1574b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574b0) {
            ctx->pc = 0x157500u;
            goto label_157500;
        }
    }
    ctx->pc = 0x1574B8u;
    // 0x1574b8: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1574B8u;
    SET_GPR_U32(ctx, 31, 0x1574C0u);
    ctx->pc = 0x1574BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1574B8u;
            // 0x1574bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574C0u; }
        if (ctx->pc != 0x1574C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1574C0u; }
        if (ctx->pc != 0x1574C0u) { return; }
    }
    ctx->pc = 0x1574C0u;
    // 0x1574c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1574c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574c4: 0x0  nop
    ctx->pc = 0x1574c4u;
    // NOP
label_1574c8:
    // 0x1574c8: 0x8c4800e4  lw          $t0, 0xE4($v0)
    ctx->pc = 0x1574c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1574cc: 0x8c4700e8  lw          $a3, 0xE8($v0)
    ctx->pc = 0x1574ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1574d0: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x1574d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x1574d4: 0x8c4600ec  lw          $a2, 0xEC($v0)
    ctx->pc = 0x1574d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1574d8: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x1574d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1574dc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1574dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1574e0: 0x8c4400f4  lw          $a0, 0xF4($v0)
    ctx->pc = 0x1574e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1574e4: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1574e8: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x1574e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1574ec: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x1574ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1574f0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1574f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1574f4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1574f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1574f8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1574F8u;
    {
        const bool branch_taken_0x1574f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1574FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1574F8u;
            // 0x1574fc: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574f8) {
            ctx->pc = 0x1574C8u;
            goto label_1574c8;
        }
    }
    ctx->pc = 0x157500u;
label_157500:
    // 0x157500: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157504: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x157504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x157508: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x157508u;
    {
        const bool branch_taken_0x157508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157508u;
            // 0x15750c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157508) {
            ctx->pc = 0x157558u;
            goto label_157558;
        }
    }
    ctx->pc = 0x157510u;
    // 0x157510: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x157510u;
    SET_GPR_U32(ctx, 31, 0x157518u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157518u; }
        if (ctx->pc != 0x157518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157518u; }
        if (ctx->pc != 0x157518u) { return; }
    }
    ctx->pc = 0x157518u;
    // 0x157518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x157518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15751c: 0x0  nop
    ctx->pc = 0x15751cu;
    // NOP
label_157520:
    // 0x157520: 0x8c4800e4  lw          $t0, 0xE4($v0)
    ctx->pc = 0x157520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x157524: 0x8c4700e8  lw          $a3, 0xE8($v0)
    ctx->pc = 0x157524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x157528: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x157528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x15752c: 0x8c4600ec  lw          $a2, 0xEC($v0)
    ctx->pc = 0x15752cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x157530: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x157530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x157534: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x157534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x157538: 0x8c4400f4  lw          $a0, 0xF4($v0)
    ctx->pc = 0x157538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x15753c: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x15753cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x157540: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x157540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x157544: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x157544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x157548: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x157548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x15754c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x15754cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x157550: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x157550u;
    {
        const bool branch_taken_0x157550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157550u;
            // 0x157554: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157550) {
            ctx->pc = 0x157520u;
            goto label_157520;
        }
    }
    ctx->pc = 0x157558u;
label_157558:
    // 0x157558: 0x2a0207d0  slti        $v0, $s0, 0x7D0
    ctx->pc = 0x157558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x15755c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15755Cu;
    {
        const bool branch_taken_0x15755c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15755Cu;
            // 0x157560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15755c) {
            ctx->pc = 0x157570u;
            goto label_157570;
        }
    }
    ctx->pc = 0x157564u;
    // 0x157564: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157568: 0xac222c74  sw          $v0, 0x2C74($at)
    ctx->pc = 0x157568u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11380), GPR_U32(ctx, 2));
    // 0x15756c: 0x0  nop
    ctx->pc = 0x15756cu;
    // NOP
label_157570:
    // 0x157570: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157574: 0x8c222c74  lw          $v0, 0x2C74($at)
    ctx->pc = 0x157574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11380)));
    // 0x157578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157578u;
    {
        const bool branch_taken_0x157578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157578u;
            // 0x15757c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157578) {
            ctx->pc = 0x157588u;
            goto label_157588;
        }
    }
    ctx->pc = 0x157580u;
    // 0x157580: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x157580u;
    {
        const bool branch_taken_0x157580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157580) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x157588u;
label_157588:
    // 0x157588: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15758c: 0x8c223514  lw          $v0, 0x3514($at)
    ctx->pc = 0x15758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x157590: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x157590u;
    {
        const bool branch_taken_0x157590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157590u;
            // 0x157594: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157590) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x157598u;
label_157598:
    // 0x157598: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157598u;
    {
        const bool branch_taken_0x157598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157598u;
            // 0x15759c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157598) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1575A0u;
label_1575a0:
    // 0x1575a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1575A0u;
    {
        const bool branch_taken_0x1575a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575A0u;
            // 0x1575a4: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575a0) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1575A8u;
label_1575a8:
    // 0x1575a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1575A8u;
    {
        const bool branch_taken_0x1575a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575A8u;
            // 0x1575ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575a8) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1575B0u;
label_1575b0:
    // 0x1575b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1575b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1575b4: 0x0  nop
    ctx->pc = 0x1575b4u;
    // NOP
label_1575b8:
    // 0x1575b8: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1575bc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1575BCu;
    {
        const bool branch_taken_0x1575bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1575C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575BCu;
            // 0x1575c0: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575bc) {
            ctx->pc = 0x1575D8u;
            goto label_1575d8;
        }
    }
    ctx->pc = 0x1575C4u;
    // 0x1575c4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1575c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1575c8: 0x24631834  addiu       $v1, $v1, 0x1834
    ctx->pc = 0x1575c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6196));
    // 0x1575cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1575ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1575d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1575d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1575d4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1575d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1575d8:
    // 0x1575d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1575d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1575dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1575dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1575e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1575E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1575E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1575E0u;
            // 0x1575e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1573A8u: goto label_1573a8;
            case 0x1573B0u: goto label_1573b0;
            case 0x1573D0u: goto label_1573d0;
            case 0x157408u: goto label_157408;
            case 0x157428u: goto label_157428;
            case 0x157460u: goto label_157460;
            case 0x157478u: goto label_157478;
            case 0x157490u: goto label_157490;
            case 0x1574A0u: goto label_1574a0;
            case 0x1574A8u: goto label_1574a8;
            case 0x1574C8u: goto label_1574c8;
            case 0x157500u: goto label_157500;
            case 0x157520u: goto label_157520;
            case 0x157558u: goto label_157558;
            case 0x157570u: goto label_157570;
            case 0x157588u: goto label_157588;
            case 0x157598u: goto label_157598;
            case 0x1575A0u: goto label_1575a0;
            case 0x1575A8u: goto label_1575a8;
            case 0x1575B0u: goto label_1575b0;
            case 0x1575B8u: goto label_1575b8;
            case 0x1575D8u: goto label_1575d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1575E8u;
}
