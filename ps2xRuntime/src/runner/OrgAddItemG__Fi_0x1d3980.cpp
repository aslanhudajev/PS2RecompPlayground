#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: OrgAddItemG__Fi
// Address: 0x1d3980 - 0x1d39d4
void OrgAddItemG__Fi_0x1d3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("OrgAddItemG__Fi");


    ctx->pc = 0x1d3980u;

    // 0x1d3980: 0x27bdfff0
    ctx->pc = 0x1d3980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3984: 0x70802e28
    ctx->pc = 0x1d3984u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d3988: 0x18a0000f
    ctx->pc = 0x1D3988u;
    {
        const bool branch_taken_0x1d3988 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D398Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1d3988) {
            ctx->pc = 0x1D39C8u;
            goto label_1d39c8;
        }
    }
    ctx->pc = 0x1D3990u;
    // 0x1d3990: 0x28a10035
    ctx->pc = 0x1d3990u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 53));
    // 0x1d3994: 0x1020000c
    ctx->pc = 0x1D3994u;
    {
        const bool branch_taken_0x1d3994 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d3994) {
            ctx->pc = 0x1D39C8u;
            goto label_1d39c8;
        }
    }
    ctx->pc = 0x1D399Cu;
    // 0x1d399c: 0x3c020050
    ctx->pc = 0x1d399cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d39a0: 0x2442fcbe
    ctx->pc = 0x1d39a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966462));
    // 0x1d39a4: 0x451821
    ctx->pc = 0x1d39a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d39a8: 0x80620000
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d39ac: 0x24420001
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d39b0: 0x28410064
    ctx->pc = 0x1d39b0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 100));
    // 0x1d39b4: 0x10200002
    ctx->pc = 0x1D39B4u;
    {
        const bool branch_taken_0x1d39b4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D39B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1d39b4) {
            ctx->pc = 0x1D39C0u;
            goto label_1d39c0;
        }
    }
    ctx->pc = 0x1D39BCu;
    // 0x1d39bc: 0xa0620000
    ctx->pc = 0x1d39bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d39c0:
    // 0x1d39c0: 0xc074e84
    ctx->pc = 0x1D39C0u;
    SET_GPR_U32(ctx, 31, 0x1D39C8u);
    ctx->pc = 0x1D3A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        HFileAddPageG__Fii_0x1d3a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39C8u; }
        else if (ctx->pc != 0x1D39C8u) { ctx->pc = 0x1D39C8u; }
    }
    if (ctx->pc != 0x1D39C8u) { return; }
    ctx->pc = 0x1D39C8u;
label_1d39c8:
    // 0x1d39c8: 0x7bbf0000
    ctx->pc = 0x1d39c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d39cc: 0x3e00008
    ctx->pc = 0x1D39CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D39D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D39C0u: goto label_1d39c0;
            case 0x1D39C8u: goto label_1d39c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D39D4u;
}
