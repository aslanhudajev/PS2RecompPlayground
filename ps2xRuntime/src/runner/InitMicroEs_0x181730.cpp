#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitMicroEs
// Address: 0x181730 - 0x18176c
void InitMicroEs_0x181730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitMicroEs_0x181730");
#endif

    ctx->pc = 0x181730u;

    // 0x181730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18173c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18173cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181740: 0xc0471e8  jal         func_11C7A0
    ctx->pc = 0x181740u;
    SET_GPR_U32(ctx, 31, 0x181748u);
    ctx->pc = 0x181744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181740u;
            // 0x181744: 0x8c840174  lw          $a0, 0x174($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C7A0u;
    if (runtime->hasFunction(0x11C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x11C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181748u; }
        if (ctx->pc != 0x181748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugMicroGetData_0x11c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181748u; }
        if (ctx->pc != 0x181748u) { return; }
    }
    ctx->pc = 0x181748u;
    // 0x181748: 0xae0201b0  sw          $v0, 0x1B0($s0)
    ctx->pc = 0x181748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 2));
    // 0x18174c: 0xc059f20  jal         func_167C80
    ctx->pc = 0x18174Cu;
    SET_GPR_U32(ctx, 31, 0x181754u);
    ctx->pc = 0x181750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18174Cu;
            // 0x181750: 0x8e0401b0  lw          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167C80u;
    if (runtime->hasFunction(0x167C80u)) {
        auto targetFn = runtime->lookupFunction(0x167C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181754u; }
        if (ctx->pc != 0x181754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        camerainit_0x167c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181754u; }
        if (ctx->pc != 0x181754u) { return; }
    }
    ctx->pc = 0x181754u;
    // 0x181754: 0xc059fd8  jal         func_167F60
    ctx->pc = 0x181754u;
    SET_GPR_U32(ctx, 31, 0x18175Cu);
    ctx->pc = 0x181758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181754u;
            // 0x181758: 0x8e0401b0  lw          $a0, 0x1B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167F60u;
    if (runtime->hasFunction(0x167F60u)) {
        auto targetFn = runtime->lookupFunction(0x167F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18175Cu; }
        if (ctx->pc != 0x18175Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        lightinit_0x167f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18175Cu; }
        if (ctx->pc != 0x18175Cu) { return; }
    }
    ctx->pc = 0x18175Cu;
    // 0x18175c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181764: 0x3e00008  jr          $ra
    ctx->pc = 0x181764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181764u;
            // 0x181768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18176Cu;
}
