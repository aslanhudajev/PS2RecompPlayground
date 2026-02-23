#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPut
// Address: 0x1a8200 - 0x1a826c
void nlObjPut_0x1a8200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPut");


    ctx->pc = 0x1a8200u;

    // 0x1a8200: 0x27bdfff0
    ctx->pc = 0x1a8200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8204: 0x7fbf0000
    ctx->pc = 0x1a8204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a8208: 0x8c850000
    ctx->pc = 0x1a8208u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a820c: 0x24031000
    ctx->pc = 0x1a820cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a8210: 0x14a30013
    ctx->pc = 0x1A8210u;
    {
        const bool branch_taken_0x1a8210 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a8210) {
            ctx->pc = 0x1A8260u;
            goto label_1a8260;
        }
    }
    ctx->pc = 0x1A8218u;
    // 0x1a8218: 0x8c83002c
    ctx->pc = 0x1a8218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a821c: 0x3c020020
    ctx->pc = 0x1a821cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x1a8220: 0x31880
    ctx->pc = 0x1a8220u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8224: 0x2463000c
    ctx->pc = 0x1a8224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1a8228: 0x31880
    ctx->pc = 0x1a8228u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a822c: 0x831821
    ctx->pc = 0x1a822cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a8230: 0x8c63011c
    ctx->pc = 0x1a8230u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1a8234: 0x621024
    ctx->pc = 0x1a8234u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a8238: 0x10400007
    ctx->pc = 0x1A8238u;
    {
        const bool branch_taken_0x1a8238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8238) {
            ctx->pc = 0x1A8258u;
            goto label_1a8258;
        }
    }
    ctx->pc = 0x1A8240u;
    // 0x1a8240: 0x44806000
    ctx->pc = 0x1a8240u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1a8244: 0x70002e28
    ctx->pc = 0x1a8244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8248: 0xc06a1d8
    ctx->pc = 0x1A8248u;
    SET_GPR_U32(ctx, 31, 0x1A8250u);
    ctx->pc = 0x1A824Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A8760u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutEntry_0x1a8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8250u; }
        else if (ctx->pc != 0x1A8250u) { ctx->pc = 0x1A8250u; }
    }
    if (ctx->pc != 0x1A8250u) { return; }
    ctx->pc = 0x1A8250u;
    // 0x1a8250: 0x10000004
    ctx->pc = 0x1A8250u;
    {
        const bool branch_taken_0x1a8250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8254u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a8250) {
            ctx->pc = 0x1A8264u;
            goto label_1a8264;
        }
    }
    ctx->pc = 0x1A8258u;
label_1a8258:
    // 0x1a8258: 0xc06a0d4
    ctx->pc = 0x1A8258u;
    SET_GPR_U32(ctx, 31, 0x1A8260u);
    ctx->pc = 0x1A8350u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPut_i_0x1a8350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8260u; }
        else if (ctx->pc != 0x1A8260u) { ctx->pc = 0x1A8260u; }
    }
    if (ctx->pc != 0x1A8260u) { return; }
    ctx->pc = 0x1A8260u;
label_1a8260:
    // 0x1a8260: 0x7bbf0000
    ctx->pc = 0x1a8260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8264:
    // 0x1a8264: 0x3e00008
    ctx->pc = 0x1A8264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8258u: goto label_1a8258;
            case 0x1A8260u: goto label_1a8260;
            case 0x1A8264u: goto label_1a8264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A826Cu;
}
