#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetFsizeByte
// Address: 0x16bfb8 - 0x16bfe8
void ADXF_GetFsizeByte_0x16bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetFsizeByte");


    ctx->pc = 0x16bfb8u;

    // 0x16bfb8: 0x27bdfff0
    ctx->pc = 0x16bfb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bfbc: 0x14800006
    ctx->pc = 0x16BFBCu;
    {
        const bool branch_taken_0x16bfbc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BFC0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16bfbc) {
            ctx->pc = 0x16BFD8u;
            goto label_16bfd8;
        }
    }
    ctx->pc = 0x16BFC4u;
    // 0x16bfc4: 0x3c04002c
    ctx->pc = 0x16bfc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16bfc8: 0xc05a854
    ctx->pc = 0x16BFC8u;
    SET_GPR_U32(ctx, 31, 0x16BFD0u);
    ctx->pc = 0x16BFCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940360));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BFD0u; }
        else if (ctx->pc != 0x16BFD0u) { ctx->pc = 0x16BFD0u; }
    }
    if (ctx->pc != 0x16BFD0u) { return; }
    ctx->pc = 0x16BFD0u;
    // 0x16bfd0: 0x10000002
    ctx->pc = 0x16BFD0u;
    {
        const bool branch_taken_0x16bfd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BFD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16bfd0) {
            ctx->pc = 0x16BFDCu;
            goto label_16bfdc;
        }
    }
    ctx->pc = 0x16BFD8u;
label_16bfd8:
    // 0x16bfd8: 0x8c820010
    ctx->pc = 0x16bfd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_16bfdc:
    // 0x16bfdc: 0xdfbf0000
    ctx->pc = 0x16bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bfe0: 0x3e00008
    ctx->pc = 0x16BFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BFE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BFD8u: goto label_16bfd8;
            case 0x16BFDCu: goto label_16bfdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BFE8u;
}
