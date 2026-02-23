#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_GetBitRate
// Address: 0x186498 - 0x1864f0
void MPV_GetBitRate_0x186498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_GetBitRate");


    ctx->pc = 0x186498u;

    // 0x186498: 0x27bdffd0
    ctx->pc = 0x186498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18649c: 0xffb00000
    ctx->pc = 0x18649cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1864a0: 0xffb10010
    ctx->pc = 0x1864a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1864a4: 0x80802d
    ctx->pc = 0x1864a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864a8: 0xffbf0020
    ctx->pc = 0x1864a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1864ac: 0xc062142
    ctx->pc = 0x1864ACu;
    SET_GPR_U32(ctx, 31, 0x1864B4u);
    ctx->pc = 0x1864B0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864B4u; }
        else if (ctx->pc != 0x1864B4u) { ctx->pc = 0x1864B4u; }
    }
    if (ctx->pc != 0x1864B4u) { return; }
    ctx->pc = 0x1864B4u;
    // 0x1864b4: 0x10400006
    ctx->pc = 0x1864B4u;
    {
        const bool branch_taken_0x1864b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1864B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1864b4) {
            ctx->pc = 0x1864D0u;
            goto label_1864d0;
        }
    }
    ctx->pc = 0x1864BCu;
    // 0x1864bc: 0x3c05ff03
    ctx->pc = 0x1864bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x1864c0: 0xc061846
    ctx->pc = 0x1864C0u;
    SET_GPR_U32(ctx, 31, 0x1864C8u);
    ctx->pc = 0x1864C4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 525));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1864C8u; }
        else if (ctx->pc != 0x1864C8u) { ctx->pc = 0x1864C8u; }
    }
    if (ctx->pc != 0x1864C8u) { return; }
    ctx->pc = 0x1864C8u;
    // 0x1864c8: 0x10000005
    ctx->pc = 0x1864C8u;
    {
        const bool branch_taken_0x1864c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1864CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1864c8) {
            ctx->pc = 0x1864E0u;
            goto label_1864e0;
        }
    }
    ctx->pc = 0x1864D0u;
label_1864d0:
    // 0x1864d0: 0x8e030214
    ctx->pc = 0x1864d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1864d4: 0x102d
    ctx->pc = 0x1864d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1864d8: 0xae230000
    ctx->pc = 0x1864d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1864dc: 0xdfbf0020
    ctx->pc = 0x1864dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1864e0:
    // 0x1864e0: 0xdfb10010
    ctx->pc = 0x1864e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1864e4: 0xdfb00000
    ctx->pc = 0x1864e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1864e8: 0x3e00008
    ctx->pc = 0x1864E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1864ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1864D0u: goto label_1864d0;
            case 0x1864E0u: goto label_1864e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1864F0u;
}
