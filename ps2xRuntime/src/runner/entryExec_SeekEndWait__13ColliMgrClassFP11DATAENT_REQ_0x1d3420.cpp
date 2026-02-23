#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_SeekEndWait__13ColliMgrClassFP11DATAENT_REQ
// Address: 0x1d3420 - 0x1d3478
void entryExec_SeekEndWait__13ColliMgrClassFP11DATAENT_REQ_0x1d3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_SeekEndWait__13ColliMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1d3420u;

    // 0x1d3420: 0x27bdffe0
    ctx->pc = 0x1d3420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3424: 0x7fbf0010
    ctx->pc = 0x1d3424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d3428: 0x7fb00000
    ctx->pc = 0x1d3428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d342c: 0x3c010030
    ctx->pc = 0x1d342cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d3430: 0x8c227c90
    ctx->pc = 0x1d3430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31888)));
    // 0x1d3434: 0x70a08628
    ctx->pc = 0x1d3434u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d3438: 0x4410003
    ctx->pc = 0x1D3438u;
    {
        const bool branch_taken_0x1d3438 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D343Cu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1d3438) {
            ctx->pc = 0x1D3448u;
            goto label_1d3448;
        }
    }
    ctx->pc = 0x1D3440u;
    // 0x1d3440: 0x244207ff
    ctx->pc = 0x1d3440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1d3444: 0x22ac3
    ctx->pc = 0x1d3444u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_1d3448:
    // 0x1d3448: 0x3c010030
    ctx->pc = 0x1d3448u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d344c: 0x8c267c88
    ctx->pc = 0x1d344cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31880)));
    // 0x1d3450: 0x3c010050
    ctx->pc = 0x1d3450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3454: 0xc05aeba
    ctx->pc = 0x1D3454u;
    SET_GPR_U32(ctx, 31, 0x1D345Cu);
    ctx->pc = 0x1D3458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3212)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D345Cu; }
        else if (ctx->pc != 0x1D345Cu) { ctx->pc = 0x1D345Cu; }
    }
    if (ctx->pc != 0x1D345Cu) { return; }
    ctx->pc = 0x1D345Cu;
    // 0x1d345c: 0x24020002
    ctx->pc = 0x1d345cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3460: 0xae02000c
    ctx->pc = 0x1d3460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d3464: 0x7bbf0010
    ctx->pc = 0x1d3464u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3468: 0x7bb00000
    ctx->pc = 0x1d3468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d346c: 0x24020001
    ctx->pc = 0x1d346cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3470: 0x3e00008
    ctx->pc = 0x1D3470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3474u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3448u: goto label_1d3448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3478u;
}
