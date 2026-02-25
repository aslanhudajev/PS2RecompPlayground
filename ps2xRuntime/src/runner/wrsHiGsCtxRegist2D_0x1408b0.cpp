#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsHiGsCtxRegist2D
// Address: 0x1408b0 - 0x1408e4
void wrsHiGsCtxRegist2D_0x1408b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsHiGsCtxRegist2D_0x1408b0");
#endif

    ctx->pc = 0x1408b0u;

    // 0x1408b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1408b4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1408b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1408b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1408b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1408bc: 0x8c2476c0  lw          $a0, 0x76C0($at)
    ctx->pc = 0x1408bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30400)));
    // 0x1408c0: 0xc044c02  jal         func_113008
    ctx->pc = 0x1408C0u;
    SET_GPR_U32(ctx, 31, 0x1408C8u);
    ctx->pc = 0x1408C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408C0u;
            // 0x1408c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113008u;
    if (runtime->hasFunction(0x113008u)) {
        auto targetFn = runtime->lookupFunction(0x113008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408C8u; }
        if (ctx->pc != 0x1408C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxFcache_0x113008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408C8u; }
        if (ctx->pc != 0x1408C8u) { return; }
    }
    ctx->pc = 0x1408C8u;
    // 0x1408c8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1408c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1408cc: 0x8c2476c0  lw          $a0, 0x76C0($at)
    ctx->pc = 0x1408ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30400)));
    // 0x1408d0: 0xc044b88  jal         func_112E20
    ctx->pc = 0x1408D0u;
    SET_GPR_U32(ctx, 31, 0x1408D8u);
    ctx->pc = 0x1408D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1408D0u;
            // 0x1408d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112E20u;
    if (runtime->hasFunction(0x112E20u)) {
        auto targetFn = runtime->lookupFunction(0x112E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408D8u; }
        if (ctx->pc != 0x1408D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsCtxSend_0x112e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1408D8u; }
        if (ctx->pc != 0x1408D8u) { return; }
    }
    ctx->pc = 0x1408D8u;
    // 0x1408d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1408d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1408dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1408DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1408E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1408DCu;
            // 0x1408e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1408E4u;
}
