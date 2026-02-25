#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StageEnemyUnInit
// Address: 0x16dc20 - 0x16dd04
void StageEnemyUnInit_0x16dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StageEnemyUnInit_0x16dc20");
#endif

    ctx->pc = 0x16dc20u;

    // 0x16dc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dc28: 0xc05b968  jal         func_16E5A0
    ctx->pc = 0x16DC28u;
    SET_GPR_U32(ctx, 31, 0x16DC30u);
    ctx->pc = 0x16E5A0u;
    if (runtime->hasFunction(0x16E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC30u; }
        if (ctx->pc != 0x16DC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemCareerUnInit_0x16e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC30u; }
        if (ctx->pc != 0x16DC30u) { return; }
    }
    ctx->pc = 0x16DC30u;
    // 0x16dc30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16dc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16dc34: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x16dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x16dc38: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x16dc38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x16dc3c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x16DC3Cu;
    {
        const bool branch_taken_0x16dc3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC3Cu;
            // 0x16dc40: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc3c) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DC44u;
    // 0x16dc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16dc48: 0x24841110  addiu       $a0, $a0, 0x1110
    ctx->pc = 0x16dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4368));
    // 0x16dc4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16dc50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dc54: 0x600008  jr          $v1
    ctx->pc = 0x16DC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DC60u: goto label_16dc60;
            case 0x16DC70u: goto label_16dc70;
            case 0x16DC80u: goto label_16dc80;
            case 0x16DC90u: goto label_16dc90;
            case 0x16DCA0u: goto label_16dca0;
            case 0x16DCB0u: goto label_16dcb0;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCD0u: goto label_16dcd0;
            case 0x16DCE0u: goto label_16dce0;
            case 0x16DCF0u: goto label_16dcf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DC5Cu;
    // 0x16dc5c: 0x0  nop
    ctx->pc = 0x16dc5cu;
    // NOP
label_16dc60:
    // 0x16dc60: 0xc05b93c  jal         func_16E4F0
    ctx->pc = 0x16DC60u;
    SET_GPR_U32(ctx, 31, 0x16DC68u);
    ctx->pc = 0x16E4F0u;
    if (runtime->hasFunction(0x16E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x16E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC68u; }
        if (ctx->pc != 0x16DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage1EnemyUnInit_0x16e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC68u; }
        if (ctx->pc != 0x16DC68u) { return; }
    }
    ctx->pc = 0x16DC68u;
    // 0x16dc68: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16DC68u;
    {
        const bool branch_taken_0x16dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc68) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DC70u;
label_16dc70:
    // 0x16dc70: 0xc05b910  jal         func_16E440
    ctx->pc = 0x16DC70u;
    SET_GPR_U32(ctx, 31, 0x16DC78u);
    ctx->pc = 0x16E440u;
    if (runtime->hasFunction(0x16E440u)) {
        auto targetFn = runtime->lookupFunction(0x16E440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC78u; }
        if (ctx->pc != 0x16DC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage2EnemyUnInit_0x16e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC78u; }
        if (ctx->pc != 0x16DC78u) { return; }
    }
    ctx->pc = 0x16DC78u;
    // 0x16dc78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16DC78u;
    {
        const bool branch_taken_0x16dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc78) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DC80u;
label_16dc80:
    // 0x16dc80: 0xc05b8dc  jal         func_16E370
    ctx->pc = 0x16DC80u;
    SET_GPR_U32(ctx, 31, 0x16DC88u);
    ctx->pc = 0x16E370u;
    if (runtime->hasFunction(0x16E370u)) {
        auto targetFn = runtime->lookupFunction(0x16E370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC88u; }
        if (ctx->pc != 0x16DC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage3EnemyUnInit_0x16e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC88u; }
        if (ctx->pc != 0x16DC88u) { return; }
    }
    ctx->pc = 0x16DC88u;
    // 0x16dc88: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16DC88u;
    {
        const bool branch_taken_0x16dc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc88) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DC90u;
label_16dc90:
    // 0x16dc90: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16DC90u;
    SET_GPR_U32(ctx, 31, 0x16DC98u);
    ctx->pc = 0x16E2C0u;
    if (runtime->hasFunction(0x16E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC98u; }
        if (ctx->pc != 0x16DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage4EnemyUnInit_0x16e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DC98u; }
        if (ctx->pc != 0x16DC98u) { return; }
    }
    ctx->pc = 0x16DC98u;
    // 0x16dc98: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16DC98u;
    {
        const bool branch_taken_0x16dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dc98) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCA0u;
label_16dca0:
    // 0x16dca0: 0xc05b884  jal         func_16E210
    ctx->pc = 0x16DCA0u;
    SET_GPR_U32(ctx, 31, 0x16DCA8u);
    ctx->pc = 0x16E210u;
    if (runtime->hasFunction(0x16E210u)) {
        auto targetFn = runtime->lookupFunction(0x16E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCA8u; }
        if (ctx->pc != 0x16DCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage5EnemyUnInit_0x16e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCA8u; }
        if (ctx->pc != 0x16DCA8u) { return; }
    }
    ctx->pc = 0x16DCA8u;
    // 0x16dca8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16DCA8u;
    {
        const bool branch_taken_0x16dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dca8) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCB0u;
label_16dcb0:
    // 0x16dcb0: 0xc05b840  jal         func_16E100
    ctx->pc = 0x16DCB0u;
    SET_GPR_U32(ctx, 31, 0x16DCB8u);
    ctx->pc = 0x16E100u;
    if (runtime->hasFunction(0x16E100u)) {
        auto targetFn = runtime->lookupFunction(0x16E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCB8u; }
        if (ctx->pc != 0x16DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage6EnemyUnInit_0x16e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCB8u; }
        if (ctx->pc != 0x16DCB8u) { return; }
    }
    ctx->pc = 0x16DCB8u;
    // 0x16dcb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16DCB8u;
    {
        const bool branch_taken_0x16dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dcb8) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCC0u;
label_16dcc0:
    // 0x16dcc0: 0xc05b818  jal         func_16E060
    ctx->pc = 0x16DCC0u;
    SET_GPR_U32(ctx, 31, 0x16DCC8u);
    ctx->pc = 0x16E060u;
    if (runtime->hasFunction(0x16E060u)) {
        auto targetFn = runtime->lookupFunction(0x16E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCC8u; }
        if (ctx->pc != 0x16DCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage7EnemyUnInit_0x16e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCC8u; }
        if (ctx->pc != 0x16DCC8u) { return; }
    }
    ctx->pc = 0x16DCC8u;
    // 0x16dcc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16DCC8u;
    {
        const bool branch_taken_0x16dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dcc8) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCD0u;
label_16dcd0:
    // 0x16dcd0: 0xc05b7ec  jal         func_16DFB0
    ctx->pc = 0x16DCD0u;
    SET_GPR_U32(ctx, 31, 0x16DCD8u);
    ctx->pc = 0x16DFB0u;
    if (runtime->hasFunction(0x16DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x16DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCD8u; }
        if (ctx->pc != 0x16DCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stage8EnemyUnInit_0x16dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCD8u; }
        if (ctx->pc != 0x16DCD8u) { return; }
    }
    ctx->pc = 0x16DCD8u;
    // 0x16dcd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16DCD8u;
    {
        const bool branch_taken_0x16dcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dcd8) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCE0u;
label_16dce0:
    // 0x16dce0: 0xc05b7b8  jal         func_16DEE0
    ctx->pc = 0x16DCE0u;
    SET_GPR_U32(ctx, 31, 0x16DCE8u);
    ctx->pc = 0x16DEE0u;
    if (runtime->hasFunction(0x16DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x16DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCE8u; }
        if (ctx->pc != 0x16DCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX1EnemyUnInit_0x16dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCE8u; }
        if (ctx->pc != 0x16DCE8u) { return; }
    }
    ctx->pc = 0x16DCE8u;
    // 0x16dce8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16DCE8u;
    {
        const bool branch_taken_0x16dce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dce8) {
            ctx->pc = 0x16DCF8u;
            goto label_16dcf8;
        }
    }
    ctx->pc = 0x16DCF0u;
label_16dcf0:
    // 0x16dcf0: 0xc05b780  jal         func_16DE00
    ctx->pc = 0x16DCF0u;
    SET_GPR_U32(ctx, 31, 0x16DCF8u);
    ctx->pc = 0x16DE00u;
    if (runtime->hasFunction(0x16DE00u)) {
        auto targetFn = runtime->lookupFunction(0x16DE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCF8u; }
        if (ctx->pc != 0x16DCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stageEX2EnemyUnInit_0x16de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DCF8u; }
        if (ctx->pc != 0x16DCF8u) { return; }
    }
    ctx->pc = 0x16DCF8u;
label_16dcf8:
    // 0x16dcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x16DCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCFCu;
            // 0x16dd00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DC60u: goto label_16dc60;
            case 0x16DC70u: goto label_16dc70;
            case 0x16DC80u: goto label_16dc80;
            case 0x16DC90u: goto label_16dc90;
            case 0x16DCA0u: goto label_16dca0;
            case 0x16DCB0u: goto label_16dcb0;
            case 0x16DCC0u: goto label_16dcc0;
            case 0x16DCD0u: goto label_16dcd0;
            case 0x16DCE0u: goto label_16dce0;
            case 0x16DCF0u: goto label_16dcf0;
            case 0x16DCF8u: goto label_16dcf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DD04u;
}
