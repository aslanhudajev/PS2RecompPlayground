#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DIntr
// Address: 0x15c970 - 0x15c9b8
void DIntr_0x15c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DIntr");


    ctx->pc = 0x15c970u;

    // 0x15c970: 0x40036000
    ctx->pc = 0x15c970u;
    SET_GPR_U32(ctx, 3, ctx->cop0_status);
    // 0x15c974: 0x3c020001
    ctx->pc = 0x15c974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x15c978: 0x621824
    ctx->pc = 0x15c978u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15c97c: 0x1060000b
    ctx->pc = 0x15C97Cu;
    {
        const bool branch_taken_0x15c97c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15C980u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        if (branch_taken_0x15c97c) {
            ctx->pc = 0x15C9ACu;
            goto label_15c9ac;
        }
    }
    ctx->pc = 0x15C984u;
    // 0x15c984: 0x0
    ctx->pc = 0x15c984u;
    // NOP
label_15c988:
    // 0x15c988: 0x42000039
    ctx->pc = 0x15c988u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x15c98c: 0x40f
    ctx->pc = 0x15c98cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x15c990: 0x40026000
    ctx->pc = 0x15c990u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x15c994: 0x3c030001
    ctx->pc = 0x15c994u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x15c998: 0x431024
    ctx->pc = 0x15c998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c99c: 0x1440fffa
    ctx->pc = 0x15C99Cu;
    {
        const bool branch_taken_0x15c99c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15c99c) {
            ctx->pc = 0x15C988u;
            goto label_15c988;
        }
    }
    ctx->pc = 0x15C9A4u;
    // 0x15c9a4: 0x3e00008
    ctx->pc = 0x15C9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C9A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C988u: goto label_15c988;
            case 0x15C9ACu: goto label_15c9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C9ACu;
label_15c9ac:
    // 0x15c9ac: 0x202d
    ctx->pc = 0x15c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9b0: 0x3e00008
    ctx->pc = 0x15C9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C9B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C988u: goto label_15c988;
            case 0x15C9ACu: goto label_15c9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C9B8u;
}
