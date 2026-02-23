#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_IsSeekAble
// Address: 0x19c970 - 0x19c9d4
void sfsee_IsSeekAble_0x19c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_IsSeekAble");


    ctx->pc = 0x19c970u;

    // 0x19c970: 0x27bdffc0
    ctx->pc = 0x19c970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19c974: 0xffb10020
    ctx->pc = 0x19c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19c978: 0xffb00010
    ctx->pc = 0x19c978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19c97c: 0xa0882d
    ctx->pc = 0x19c97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c980: 0xffbf0030
    ctx->pc = 0x19c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c984: 0x80802d
    ctx->pc = 0x19c984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c988: 0x1200000d
    ctx->pc = 0x19C988u;
    {
        const bool branch_taken_0x19c988 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C98Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x19c988) {
            ctx->pc = 0x19C9C0u;
            goto label_19c9c0;
        }
    }
    ctx->pc = 0x19C990u;
    // 0x19c990: 0xc06717e
    ctx->pc = 0x19C990u;
    SET_GPR_U32(ctx, 31, 0x19C998u);
    ctx->pc = 0x19C994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsHeadAnalyEnd_0x19c5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C998u; }
        else if (ctx->pc != 0x19C998u) { ctx->pc = 0x19C998u; }
    }
    if (ctx->pc != 0x19C998u) { return; }
    ctx->pc = 0x19C998u;
    // 0x19c998: 0x8fa20000
    ctx->pc = 0x19c998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c99c: 0x10400009
    ctx->pc = 0x19C99Cu;
    {
        const bool branch_taken_0x19c99c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C9A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19c99c) {
            ctx->pc = 0x19C9C4u;
            goto label_19c9c4;
        }
    }
    ctx->pc = 0x19C9A4u;
    // 0x19c9a4: 0x8e020dac
    ctx->pc = 0x19c9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3500)));
    // 0x19c9a8: 0x14400004
    ctx->pc = 0x19C9A8u;
    {
        const bool branch_taken_0x19c9a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C9ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19c9a8) {
            ctx->pc = 0x19C9BCu;
            goto label_19c9bc;
        }
    }
    ctx->pc = 0x19C9B0u;
    // 0x19c9b0: 0x8e020d94
    ctx->pc = 0x19c9b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3476)));
    // 0x19c9b4: 0x18400003
    ctx->pc = 0x19C9B4u;
    {
        const bool branch_taken_0x19c9b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19C9B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19c9b4) {
            ctx->pc = 0x19C9C4u;
            goto label_19c9c4;
        }
    }
    ctx->pc = 0x19C9BCu;
label_19c9bc:
    // 0x19c9bc: 0xae220000
    ctx->pc = 0x19c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19c9c0:
    // 0x19c9c0: 0xdfbf0030
    ctx->pc = 0x19c9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19c9c4:
    // 0x19c9c4: 0xdfb10020
    ctx->pc = 0x19c9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c9c8: 0xdfb00010
    ctx->pc = 0x19c9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c9cc: 0x3e00008
    ctx->pc = 0x19C9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C9D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C9BCu: goto label_19c9bc;
            case 0x19C9C0u: goto label_19c9c0;
            case 0x19C9C4u: goto label_19c9c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C9D4u;
}
