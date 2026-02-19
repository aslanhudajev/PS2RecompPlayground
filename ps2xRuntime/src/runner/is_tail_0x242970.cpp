#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: is_tail
// Address: 0x242970 - 0x2429c0
void is_tail_0x242970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x242970u;

    // 0x242970: 0x240203b0
    ctx->pc = 0x242970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x242974: 0x822018
    ctx->pc = 0x242974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242978: 0x3c020033
    ctx->pc = 0x242978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24297c: 0x2442dfd0
    ctx->pc = 0x24297cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x242980: 0x822021
    ctx->pc = 0x242980u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x242984: 0x8c84034c
    ctx->pc = 0x242984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 844)));
    // 0x242988: 0x480000b
    ctx->pc = 0x242988u;
    {
        const bool branch_taken_0x242988 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24298Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x242988) {
            ctx->pc = 0x2429B8u;
            goto label_2429b8;
        }
    }
    ctx->pc = 0x242990u;
    // 0x242990: 0x3c020033
    ctx->pc = 0x242990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x242994: 0x2446dfd0
    ctx->pc = 0x242994u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294959056));
label_242998:
    // 0x242998: 0x14850003
    ctx->pc = 0x242998u;
    {
        const bool branch_taken_0x242998 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x24299Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x242998) {
            ctx->pc = 0x2429A8u;
            goto label_2429a8;
        }
    }
    ctx->pc = 0x2429A0u;
    // 0x2429a0: 0x3e00008
    ctx->pc = 0x2429A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242998u: goto label_242998;
            case 0x2429A8u: goto label_2429a8;
            case 0x2429B8u: goto label_2429b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2429A8u;
label_2429a8:
    // 0x2429a8: 0x462021
    ctx->pc = 0x2429a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2429ac: 0x8c84034c
    ctx->pc = 0x2429acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 844)));
    // 0x2429b0: 0x481fff9
    ctx->pc = 0x2429B0u;
    {
        const bool branch_taken_0x2429b0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2429b0) {
            ctx->pc = 0x242998u;
            goto label_242998;
        }
    }
    ctx->pc = 0x2429B8u;
label_2429b8:
    // 0x2429b8: 0x3e00008
    ctx->pc = 0x2429B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242998u: goto label_242998;
            case 0x2429A8u: goto label_2429a8;
            case 0x2429B8u: goto label_2429b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2429C0u;
}
