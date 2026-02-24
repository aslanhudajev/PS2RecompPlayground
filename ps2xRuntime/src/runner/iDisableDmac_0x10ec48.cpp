#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iDisableDmac
// Address: 0x10ec48 - 0x10ec68
void iDisableDmac_0x10ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iDisableDmac_0x10ec48");
#endif

    ctx->pc = 0x10ec48u;

    // 0x10ec48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ec4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ec50: 0xc04381c  jal         func_10E070
    ctx->pc = 0x10EC50u;
    SET_GPR_U32(ctx, 31, 0x10EC58u);
    ctx->pc = 0x10E070u;
    if (runtime->hasFunction(0x10E070u)) {
        auto targetFn = runtime->lookupFunction(0x10E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC58u; }
        if (ctx->pc != 0x10EC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iDisableDmac_0x10e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EC58u; }
        if (ctx->pc != 0x10EC58u) { return; }
    }
    ctx->pc = 0x10EC58u;
    // 0x10ec58: 0xf  sync
    ctx->pc = 0x10ec58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ec5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ec5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec60: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC60u;
            // 0x10ec64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC68u;
}
