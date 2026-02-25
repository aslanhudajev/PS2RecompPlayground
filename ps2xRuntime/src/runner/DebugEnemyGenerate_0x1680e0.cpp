#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DebugEnemyGenerate
// Address: 0x1680e0 - 0x1681c4
void DebugEnemyGenerate_0x1680e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DebugEnemyGenerate_0x1680e0");
#endif

    ctx->pc = 0x1680e0u;

    // 0x1680e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1680e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1680e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1680e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1680e8: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1680E8u;
    SET_GPR_U32(ctx, 31, 0x1680F0u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680F0u; }
        if (ctx->pc != 0x1680F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680F0u; }
        if (ctx->pc != 0x1680F0u) { return; }
    }
    ctx->pc = 0x1680F0u;
    // 0x1680f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1680f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1680f4: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x1680f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x1680f8: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x1680f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1680fc: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1680FCu;
    {
        const bool branch_taken_0x1680fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1680FCu;
            // 0x168100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680fc) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168104u;
    // 0x168104: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x168104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x168108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x168108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16810c: 0x24a510e0  addiu       $a1, $a1, 0x10E0
    ctx->pc = 0x16810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4320));
    // 0x168110: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168114: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x168114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168118: 0x600008  jr          $v1
    ctx->pc = 0x168118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168120u: goto label_168120;
            case 0x168130u: goto label_168130;
            case 0x168140u: goto label_168140;
            case 0x168150u: goto label_168150;
            case 0x168160u: goto label_168160;
            case 0x168170u: goto label_168170;
            case 0x168180u: goto label_168180;
            case 0x168190u: goto label_168190;
            case 0x1681A0u: goto label_1681a0;
            case 0x1681B0u: goto label_1681b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168120u;
label_168120:
    // 0x168120: 0xc05b4fc  jal         func_16D3F0
    ctx->pc = 0x168120u;
    SET_GPR_U32(ctx, 31, 0x168128u);
    ctx->pc = 0x16D3F0u;
    if (runtime->hasFunction(0x16D3F0u)) {
        auto targetFn = runtime->lookupFunction(0x16D3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168128u; }
        if (ctx->pc != 0x168128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage1EnemyGenerate_0x16d3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168128u; }
        if (ctx->pc != 0x168128u) { return; }
    }
    ctx->pc = 0x168128u;
    // 0x168128: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x168128u;
    {
        const bool branch_taken_0x168128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168128) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168130u;
label_168130:
    // 0x168130: 0xc05b24c  jal         func_16C930
    ctx->pc = 0x168130u;
    SET_GPR_U32(ctx, 31, 0x168138u);
    ctx->pc = 0x16C930u;
    if (runtime->hasFunction(0x16C930u)) {
        auto targetFn = runtime->lookupFunction(0x16C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168138u; }
        if (ctx->pc != 0x168138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage2EnemyGenerate_0x16c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168138u; }
        if (ctx->pc != 0x168138u) { return; }
    }
    ctx->pc = 0x168138u;
    // 0x168138: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x168138u;
    {
        const bool branch_taken_0x168138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168138) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168140u;
label_168140:
    // 0x168140: 0xc05b0d0  jal         func_16C340
    ctx->pc = 0x168140u;
    SET_GPR_U32(ctx, 31, 0x168148u);
    ctx->pc = 0x16C340u;
    if (runtime->hasFunction(0x16C340u)) {
        auto targetFn = runtime->lookupFunction(0x16C340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168148u; }
        if (ctx->pc != 0x168148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage3EnemyGenerate_0x16c340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168148u; }
        if (ctx->pc != 0x168148u) { return; }
    }
    ctx->pc = 0x168148u;
    // 0x168148: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x168148u;
    {
        const bool branch_taken_0x168148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168148) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168150u;
label_168150:
    // 0x168150: 0xc05ae98  jal         func_16BA60
    ctx->pc = 0x168150u;
    SET_GPR_U32(ctx, 31, 0x168158u);
    ctx->pc = 0x16BA60u;
    if (runtime->hasFunction(0x16BA60u)) {
        auto targetFn = runtime->lookupFunction(0x16BA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168158u; }
        if (ctx->pc != 0x168158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage4EnemyGenerate_0x16ba60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168158u; }
        if (ctx->pc != 0x168158u) { return; }
    }
    ctx->pc = 0x168158u;
    // 0x168158: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x168158u;
    {
        const bool branch_taken_0x168158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168158) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168160u;
label_168160:
    // 0x168160: 0xc05abc4  jal         func_16AF10
    ctx->pc = 0x168160u;
    SET_GPR_U32(ctx, 31, 0x168168u);
    ctx->pc = 0x16AF10u;
    if (runtime->hasFunction(0x16AF10u)) {
        auto targetFn = runtime->lookupFunction(0x16AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168168u; }
        if (ctx->pc != 0x168168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage5EnemyGenerate_0x16af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168168u; }
        if (ctx->pc != 0x168168u) { return; }
    }
    ctx->pc = 0x168168u;
    // 0x168168: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x168168u;
    {
        const bool branch_taken_0x168168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168168) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168170u;
label_168170:
    // 0x168170: 0xc05a938  jal         func_16A4E0
    ctx->pc = 0x168170u;
    SET_GPR_U32(ctx, 31, 0x168178u);
    ctx->pc = 0x16A4E0u;
    if (runtime->hasFunction(0x16A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168178u; }
        if (ctx->pc != 0x168178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage6EnemyGenerate_0x16a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168178u; }
        if (ctx->pc != 0x168178u) { return; }
    }
    ctx->pc = 0x168178u;
    // 0x168178: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x168178u;
    {
        const bool branch_taken_0x168178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168178) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168180u;
label_168180:
    // 0x168180: 0xc05a600  jal         func_169800
    ctx->pc = 0x168180u;
    SET_GPR_U32(ctx, 31, 0x168188u);
    ctx->pc = 0x169800u;
    if (runtime->hasFunction(0x169800u)) {
        auto targetFn = runtime->lookupFunction(0x169800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168188u; }
        if (ctx->pc != 0x168188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage7EnemyGenerate_0x169800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168188u; }
        if (ctx->pc != 0x168188u) { return; }
    }
    ctx->pc = 0x168188u;
    // 0x168188: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168188u;
    {
        const bool branch_taken_0x168188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168188) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x168190u;
label_168190:
    // 0x168190: 0xc05a5e8  jal         func_1697A0
    ctx->pc = 0x168190u;
    SET_GPR_U32(ctx, 31, 0x168198u);
    ctx->pc = 0x1697A0u;
    if (runtime->hasFunction(0x1697A0u)) {
        auto targetFn = runtime->lookupFunction(0x1697A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168198u; }
        if (ctx->pc != 0x168198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage8EnemyGenerate_0x1697a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168198u; }
        if (ctx->pc != 0x168198u) { return; }
    }
    ctx->pc = 0x168198u;
    // 0x168198: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x168198u;
    {
        const bool branch_taken_0x168198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168198) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x1681A0u;
label_1681a0:
    // 0x1681a0: 0xc05a414  jal         func_169050
    ctx->pc = 0x1681A0u;
    SET_GPR_U32(ctx, 31, 0x1681A8u);
    ctx->pc = 0x169050u;
    if (runtime->hasFunction(0x169050u)) {
        auto targetFn = runtime->lookupFunction(0x169050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681A8u; }
        if (ctx->pc != 0x1681A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StageEX1EnemyGenerate_0x169050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681A8u; }
        if (ctx->pc != 0x1681A8u) { return; }
    }
    ctx->pc = 0x1681A8u;
    // 0x1681a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1681A8u;
    {
        const bool branch_taken_0x1681a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1681a8) {
            ctx->pc = 0x1681B8u;
            goto label_1681b8;
        }
    }
    ctx->pc = 0x1681B0u;
label_1681b0:
    // 0x1681b0: 0xc05a074  jal         func_1681D0
    ctx->pc = 0x1681B0u;
    SET_GPR_U32(ctx, 31, 0x1681B8u);
    ctx->pc = 0x1681D0u;
    if (runtime->hasFunction(0x1681D0u)) {
        auto targetFn = runtime->lookupFunction(0x1681D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681B8u; }
        if (ctx->pc != 0x1681B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StageEX2EnemyGenerate_0x1681d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681B8u; }
        if (ctx->pc != 0x1681B8u) { return; }
    }
    ctx->pc = 0x1681B8u;
label_1681b8:
    // 0x1681b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1681b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1681BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681BCu;
            // 0x1681c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168120u: goto label_168120;
            case 0x168130u: goto label_168130;
            case 0x168140u: goto label_168140;
            case 0x168150u: goto label_168150;
            case 0x168160u: goto label_168160;
            case 0x168170u: goto label_168170;
            case 0x168180u: goto label_168180;
            case 0x168190u: goto label_168190;
            case 0x1681A0u: goto label_1681a0;
            case 0x1681B0u: goto label_1681b0;
            case 0x1681B8u: goto label_1681b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1681C4u;
}
