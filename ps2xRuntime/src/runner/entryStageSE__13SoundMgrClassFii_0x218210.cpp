#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryStageSE__13SoundMgrClassFii
// Address: 0x218210 - 0x218254
void entryStageSE__13SoundMgrClassFii_0x218210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryStageSE__13SoundMgrClassFii");


    ctx->pc = 0x218210u;

    // 0x218210: 0x27bdfff0
    ctx->pc = 0x218210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218214: 0x2402ffff
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218218: 0x14c20002
    ctx->pc = 0x218218u;
    {
        const bool branch_taken_0x218218 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x21821Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x218218) {
            ctx->pc = 0x218224u;
            goto label_218224;
        }
    }
    ctx->pc = 0x218220u;
    // 0x218220: 0x70003628
    ctx->pc = 0x218220u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_218224:
    // 0x218224: 0x3c020029
    ctx->pc = 0x218224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x218228: 0x61880
    ctx->pc = 0x218228u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x21822c: 0x2442b3b0
    ctx->pc = 0x21822cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947760));
    // 0x218230: 0x431021
    ctx->pc = 0x218230u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218234: 0x8c420000
    ctx->pc = 0x218234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218238: 0x51880
    ctx->pc = 0x218238u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x21823c: 0x431021
    ctx->pc = 0x21823cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218240: 0xc086098
    ctx->pc = 0x218240u;
    SET_GPR_U32(ctx, 31, 0x218248u);
    ctx->pc = 0x218244u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x218260u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryGrpSE__13SoundMgrClassFPSc_0x218260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218248u; }
        else if (ctx->pc != 0x218248u) { ctx->pc = 0x218248u; }
    }
    if (ctx->pc != 0x218248u) { return; }
    ctx->pc = 0x218248u;
    // 0x218248: 0x7bbf0000
    ctx->pc = 0x218248u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21824c: 0x3e00008
    ctx->pc = 0x21824Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218224u: goto label_218224;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218254u;
}
