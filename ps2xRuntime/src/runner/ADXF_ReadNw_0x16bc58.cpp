#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_ReadNw
// Address: 0x16bc58 - 0x16bc90
void ADXF_ReadNw_0x16bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_ReadNw");


    ctx->pc = 0x16bc58u;

    // 0x16bc58: 0x27bdfff0
    ctx->pc = 0x16bc58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bc5c: 0x30c2003f
    ctx->pc = 0x16bc5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 63));
    // 0x16bc60: 0x10400006
    ctx->pc = 0x16BC60u;
    {
        const bool branch_taken_0x16bc60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BC64u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16bc60) {
            ctx->pc = 0x16BC7Cu;
            goto label_16bc7c;
        }
    }
    ctx->pc = 0x16BC68u;
    // 0x16bc68: 0x3c04002c
    ctx->pc = 0x16bc68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16bc6c: 0xc05a854
    ctx->pc = 0x16BC6Cu;
    SET_GPR_U32(ctx, 31, 0x16BC74u);
    ctx->pc = 0x16BC70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940048));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC74u; }
        else if (ctx->pc != 0x16BC74u) { ctx->pc = 0x16BC74u; }
    }
    if (ctx->pc != 0x16BC74u) { return; }
    ctx->pc = 0x16BC74u;
    // 0x16bc74: 0x10000003
    ctx->pc = 0x16BC74u;
    {
        const bool branch_taken_0x16bc74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BC78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16bc74) {
            ctx->pc = 0x16BC84u;
            goto label_16bc84;
        }
    }
    ctx->pc = 0x16BC7Cu;
label_16bc7c:
    // 0x16bc7c: 0xc05aeba
    ctx->pc = 0x16BC7Cu;
    SET_GPR_U32(ctx, 31, 0x16BC84u);
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC84u; }
        else if (ctx->pc != 0x16BC84u) { ctx->pc = 0x16BC84u; }
    }
    if (ctx->pc != 0x16BC84u) { return; }
    ctx->pc = 0x16BC84u;
label_16bc84:
    // 0x16bc84: 0xdfbf0000
    ctx->pc = 0x16bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc88: 0x3e00008
    ctx->pc = 0x16BC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BC7Cu: goto label_16bc7c;
            case 0x16BC84u: goto label_16bc84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BC90u;
}
