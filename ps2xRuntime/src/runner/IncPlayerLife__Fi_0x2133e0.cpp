#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IncPlayerLife__Fi
// Address: 0x2133e0 - 0x213450
void IncPlayerLife__Fi_0x2133e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IncPlayerLife__Fi");


    ctx->pc = 0x2133e0u;

    // 0x2133e0: 0x41100
    ctx->pc = 0x2133e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2133e4: 0x441823
    ctx->pc = 0x2133e4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2133e8: 0x310c0
    ctx->pc = 0x2133e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x2133ec: 0x431023
    ctx->pc = 0x2133ecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2133f0: 0x218c0
    ctx->pc = 0x2133f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2133f4: 0x3c020050
    ctx->pc = 0x2133f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2133f8: 0x2442dd30
    ctx->pc = 0x2133f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958384));
    // 0x2133fc: 0x432821
    ctx->pc = 0x2133fcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213400: 0x3c020050
    ctx->pc = 0x213400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x213404: 0x27bdfff0
    ctx->pc = 0x213404u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213408: 0x2442dd60
    ctx->pc = 0x213408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x21340c: 0x7fbf0000
    ctx->pc = 0x21340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x213410: 0x431021
    ctx->pc = 0x213410u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213414: 0x8c420000
    ctx->pc = 0x213414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213418: 0x8ca30000
    ctx->pc = 0x213418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21341c: 0x62102a
    ctx->pc = 0x21341cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x213420: 0x38420001
    ctx->pc = 0x213420u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x213424: 0x10400005
    ctx->pc = 0x213424u;
    {
        const bool branch_taken_0x213424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213428u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x213424) {
            ctx->pc = 0x21343Cu;
            goto label_21343c;
        }
    }
    ctx->pc = 0x21342Cu;
    // 0x21342c: 0xc084d14
    ctx->pc = 0x21342Cu;
    SET_GPR_U32(ctx, 31, 0x213434u);
    ctx->pc = 0x213430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213434u; }
        else if (ctx->pc != 0x213434u) { ctx->pc = 0x213434u; }
    }
    if (ctx->pc != 0x213434u) { return; }
    ctx->pc = 0x213434u;
    // 0x213434: 0x10000003
    ctx->pc = 0x213434u;
    {
        const bool branch_taken_0x213434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213438u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x213434) {
            ctx->pc = 0x213444u;
            goto label_213444;
        }
    }
    ctx->pc = 0x21343Cu;
label_21343c:
    // 0x21343c: 0xaca20000
    ctx->pc = 0x21343cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x213440: 0x24020001
    ctx->pc = 0x213440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_213444:
    // 0x213444: 0x7bbf0000
    ctx->pc = 0x213444u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213448: 0x3e00008
    ctx->pc = 0x213448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21344Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21343Cu: goto label_21343c;
            case 0x213444u: goto label_213444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213450u;
}
