#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Tell
// Address: 0x16bf58 - 0x16bf88
void ADXF_Tell_0x16bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Tell");


    ctx->pc = 0x16bf58u;

    // 0x16bf58: 0x27bdfff0
    ctx->pc = 0x16bf58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bf5c: 0x14800006
    ctx->pc = 0x16BF5Cu;
    {
        const bool branch_taken_0x16bf5c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BF60u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16bf5c) {
            ctx->pc = 0x16BF78u;
            goto label_16bf78;
        }
    }
    ctx->pc = 0x16BF64u;
    // 0x16bf64: 0x3c04002c
    ctx->pc = 0x16bf64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16bf68: 0xc05a854
    ctx->pc = 0x16BF68u;
    SET_GPR_U32(ctx, 31, 0x16BF70u);
    ctx->pc = 0x16BF6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940272));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF70u; }
        else if (ctx->pc != 0x16BF70u) { ctx->pc = 0x16BF70u; }
    }
    if (ctx->pc != 0x16BF70u) { return; }
    ctx->pc = 0x16BF70u;
    // 0x16bf70: 0x10000002
    ctx->pc = 0x16BF70u;
    {
        const bool branch_taken_0x16bf70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BF74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16bf70) {
            ctx->pc = 0x16BF7Cu;
            goto label_16bf7c;
        }
    }
    ctx->pc = 0x16BF78u;
label_16bf78:
    // 0x16bf78: 0x8c820014
    ctx->pc = 0x16bf78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_16bf7c:
    // 0x16bf7c: 0xdfbf0000
    ctx->pc = 0x16bf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf80: 0x3e00008
    ctx->pc = 0x16BF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BF78u: goto label_16bf78;
            case 0x16BF7Cu: goto label_16bf7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BF88u;
}
