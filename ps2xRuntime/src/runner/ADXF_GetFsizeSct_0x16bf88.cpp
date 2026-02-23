#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetFsizeSct
// Address: 0x16bf88 - 0x16bfb8
void ADXF_GetFsizeSct_0x16bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetFsizeSct");


    ctx->pc = 0x16bf88u;

    // 0x16bf88: 0x27bdfff0
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bf8c: 0x14800006
    ctx->pc = 0x16BF8Cu;
    {
        const bool branch_taken_0x16bf8c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BF90u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16bf8c) {
            ctx->pc = 0x16BFA8u;
            goto label_16bfa8;
        }
    }
    ctx->pc = 0x16BF94u;
    // 0x16bf94: 0x3c04002c
    ctx->pc = 0x16bf94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16bf98: 0xc05a854
    ctx->pc = 0x16BF98u;
    SET_GPR_U32(ctx, 31, 0x16BFA0u);
    ctx->pc = 0x16BF9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940312));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFA0u; }
        else if (ctx->pc != 0x16BFA0u) { ctx->pc = 0x16BFA0u; }
    }
    if (ctx->pc != 0x16BFA0u) { return; }
    ctx->pc = 0x16BFA0u;
    // 0x16bfa0: 0x10000002
    ctx->pc = 0x16BFA0u;
    {
        const bool branch_taken_0x16bfa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BFA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16bfa0) {
            ctx->pc = 0x16BFACu;
            goto label_16bfac;
        }
    }
    ctx->pc = 0x16BFA8u;
label_16bfa8:
    // 0x16bfa8: 0x8c82000c
    ctx->pc = 0x16bfa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16bfac:
    // 0x16bfac: 0xdfbf0000
    ctx->pc = 0x16bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bfb0: 0x3e00008
    ctx->pc = 0x16BFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BFA8u: goto label_16bfa8;
            case 0x16BFACu: goto label_16bfac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BFB8u;
}
