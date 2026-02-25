#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iEnableIntc
// Address: 0x12f8e0 - 0x12f900
void iEnableIntc_0x12f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iEnableIntc_0x12f8e0");
#endif

    ctx->pc = 0x12f8e0u;

    // 0x12f8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f8e8: 0xc04ba80  jal         func_12EA00
    ctx->pc = 0x12F8E8u;
    SET_GPR_U32(ctx, 31, 0x12F8F0u);
    ctx->pc = 0x12EA00u;
    if (runtime->hasFunction(0x12EA00u)) {
        auto targetFn = runtime->lookupFunction(0x12EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8F0u; }
        if (ctx->pc != 0x12F8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iEnableIntc_0x12ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8F0u; }
        if (ctx->pc != 0x12F8F0u) { return; }
    }
    ctx->pc = 0x12F8F0u;
    // 0x12f8f0: 0xf  sync
    ctx->pc = 0x12f8f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8F8u;
            // 0x12f8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F900u;
}
