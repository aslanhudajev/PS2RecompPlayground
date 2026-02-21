#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_blit_fx
// Address: 0x284810 - 0x284884
void init_blit_fx_0x284810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x284810u;

    // 0x284810: 0x27bdffe0
    ctx->pc = 0x284810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284814: 0xffbf0010
    ctx->pc = 0x284814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x284818: 0xffb00000
    ctx->pc = 0x284818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28481c: 0x3c02003c
    ctx->pc = 0x28481cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x284820: 0x24503b88
    ctx->pc = 0x284820u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 15240));
    // 0x284824: 0x2402000c
    ctx->pc = 0x284824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x284828: 0xa22818
    ctx->pc = 0x284828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28482c: 0x24020084
    ctx->pc = 0x28482cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
    // 0x284830: 0x822018
    ctx->pc = 0x284830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x284834: 0xa42821
    ctx->pc = 0x284834u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x284838: 0x2051021
    ctx->pc = 0x284838u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x28483c: 0xac460004
    ctx->pc = 0x28483cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x284840: 0xac400008
    ctx->pc = 0x284840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x284844: 0x24020005
    ctx->pc = 0x284844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x284848: 0x14c2000b
    ctx->pc = 0x284848u;
    {
        const bool branch_taken_0x284848 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x28484Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x284848) {
            ctx->pc = 0x284878u;
            goto label_284878;
        }
    }
    ctx->pc = 0x284850u;
    // 0x284850: 0xb08021
    ctx->pc = 0x284850u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x284854: 0x8e040000
    ctx->pc = 0x284854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284858: 0xc0b0ce8
    ctx->pc = 0x284858u;
    SET_GPR_U32(ctx, 31, 0x284860u);
    ctx->pc = 0x28485Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284860u; }
    }
    if (ctx->pc != 0x284860u) { return; }
    ctx->pc = 0x284860u;
    // 0x284860: 0x8e040000
    ctx->pc = 0x284860u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x284864: 0x240500ff
    ctx->pc = 0x284864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x284868: 0xdfbf0010
    ctx->pc = 0x284868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28486c: 0xdfb00000
    ctx->pc = 0x28486cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284870: 0x80b0f52
    ctx->pc = 0x284870u;
    ctx->pc = 0x284874u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C3D48u;
    MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime); return;
    ctx->pc = 0x284878u;
label_284878:
    // 0x284878: 0xdfb00000
    ctx->pc = 0x284878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28487c: 0x3e00008
    ctx->pc = 0x28487Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284880u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284878u: goto label_284878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284884u;
}
