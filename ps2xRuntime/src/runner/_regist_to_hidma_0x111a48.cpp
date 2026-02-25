#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _regist_to_hidma
// Address: 0x111a48 - 0x111ab8
void _regist_to_hidma_0x111a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_regist_to_hidma_0x111a48");
#endif

    ctx->pc = 0x111a48u;

    // 0x111a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111a4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111a54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x111a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x111a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x111a5c: 0xc043b36  jal         func_10ECD8
    ctx->pc = 0x111A5Cu;
    SET_GPR_U32(ctx, 31, 0x111A64u);
    ctx->pc = 0x111A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111A5Cu;
            // 0x111a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ECD8u;
    if (runtime->hasFunction(0x10ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x10ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A64u; }
        if (ctx->pc != 0x111A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_DynamicChainStart_0x10ecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A64u; }
        if (ctx->pc != 0x111A64u) { return; }
    }
    ctx->pc = 0x111A64u;
    // 0x111a64: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x111A64u;
    {
        const bool branch_taken_0x111a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A64u;
            // 0x111a68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a64) {
            ctx->pc = 0x111AA4u;
            goto label_111aa4;
        }
    }
    ctx->pc = 0x111A6Cu;
    // 0x111a6c: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x111A6Cu;
    SET_GPR_U32(ctx, 31, 0x111A74u);
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A74u; }
        if (ctx->pc != 0x111A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A74u; }
        if (ctx->pc != 0x111A74u) { return; }
    }
    ctx->pc = 0x111A74u;
    // 0x111a74: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111A74u;
    {
        const bool branch_taken_0x111a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A74u;
            // 0x111a78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a74) {
            ctx->pc = 0x111AA4u;
            goto label_111aa4;
        }
    }
    ctx->pc = 0x111A7Cu;
    // 0x111a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a80: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x111A80u;
    SET_GPR_U32(ctx, 31, 0x111A88u);
    ctx->pc = 0x111A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111A80u;
            // 0x111a84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A88u; }
        if (ctx->pc != 0x111A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A88u; }
        if (ctx->pc != 0x111A88u) { return; }
    }
    ctx->pc = 0x111A88u;
    // 0x111a88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111A88u;
    {
        const bool branch_taken_0x111a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A88u;
            // 0x111a8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a88) {
            ctx->pc = 0x111AA4u;
            goto label_111aa4;
        }
    }
    ctx->pc = 0x111A90u;
    // 0x111a90: 0xc043b54  jal         func_10ED50
    ctx->pc = 0x111A90u;
    SET_GPR_U32(ctx, 31, 0x111A98u);
    ctx->pc = 0x10ED50u;
    if (runtime->hasFunction(0x10ED50u)) {
        auto targetFn = runtime->lookupFunction(0x10ED50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A98u; }
        if (ctx->pc != 0x111A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_DynamicChainEnd_0x10ed50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A98u; }
        if (ctx->pc != 0x111A98u) { return; }
    }
    ctx->pc = 0x111A98u;
    // 0x111a98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x111a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111a9c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x111a9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x111aa0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x111aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_111aa4:
    // 0x111aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x111aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111aa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x111AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111AB0u;
            // 0x111ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111AA4u: goto label_111aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111AB8u;
}
