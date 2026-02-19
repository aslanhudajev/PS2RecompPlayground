#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_codes_free
// Address: 0x2daec8 - 0x2daef0
void inflate_codes_free_0x2daec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2daec8u;

label_2daec8:
    // 0x2daec8: 0x27bdfff0
    ctx->pc = 0x2daec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_2daecc:
    // 0x2daecc: 0xffbf0000
    ctx->pc = 0x2daeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2daed0:
    // 0x2daed0: 0x80102d
    ctx->pc = 0x2daed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2daed4:
    // 0x2daed4: 0x8ca30024
    ctx->pc = 0x2daed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2daed8:
    // 0x2daed8: 0x8ca40028
    ctx->pc = 0x2daed8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_2daedc:
    // 0x2daedc: 0x60f809
label_2daee0:
    if (ctx->pc == 0x2DAEE0u) {
        ctx->pc = 0x2DAEE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEE4u;
        goto label_2daee4;
    }
    ctx->pc = 0x2DAEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DAEE4u);
        ctx->pc = 0x2DAEE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DAEC8u: goto label_2daec8;
            case 0x2DAECCu: goto label_2daecc;
            case 0x2DAED0u: goto label_2daed0;
            case 0x2DAED4u: goto label_2daed4;
            case 0x2DAED8u: goto label_2daed8;
            case 0x2DAEDCu: goto label_2daedc;
            case 0x2DAEE0u: goto label_2daee0;
            case 0x2DAEE4u: goto label_2daee4;
            case 0x2DAEE8u: goto label_2daee8;
            case 0x2DAEECu: goto label_2daeec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEE4u; }
            if (ctx->pc != 0x2DAEE4u) { return; }
        }
    }
    ctx->pc = 0x2DAEE4u;
label_2daee4:
    // 0x2daee4: 0xdfbf0000
    ctx->pc = 0x2daee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2daee8:
    // 0x2daee8: 0x3e00008
label_2daeec:
    if (ctx->pc == 0x2DAEECu) {
        ctx->pc = 0x2DAEECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2DAEF0u;
        goto label_fallthrough_0x2daee8;
    }
    ctx->pc = 0x2DAEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAEECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DAEC8u: goto label_2daec8;
            case 0x2DAECCu: goto label_2daecc;
            case 0x2DAED0u: goto label_2daed0;
            case 0x2DAED4u: goto label_2daed4;
            case 0x2DAED8u: goto label_2daed8;
            case 0x2DAEDCu: goto label_2daedc;
            case 0x2DAEE0u: goto label_2daee0;
            case 0x2DAEE4u: goto label_2daee4;
            case 0x2DAEE8u: goto label_2daee8;
            case 0x2DAEECu: goto label_2daeec;
            default: break;
        }
        return;
    }
label_fallthrough_0x2daee8:
    ctx->pc = 0x2DAEF0u;
}
