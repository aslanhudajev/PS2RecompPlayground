#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutCategoryEntry
// Address: 0x1a82e0 - 0x1a8318
void nlObjPutCategoryEntry_0x1a82e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutCategoryEntry");


    ctx->pc = 0x1a82e0u;

    // 0x1a82e0: 0x27bdfff0
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a82e4: 0x7fbf0000
    ctx->pc = 0x1a82e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a82e8: 0x70a03628
    ctx->pc = 0x1a82e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a82ec: 0x8c850000
    ctx->pc = 0x1a82ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a82f0: 0x24031000
    ctx->pc = 0x1a82f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a82f4: 0x14a30005
    ctx->pc = 0x1A82F4u;
    {
        const bool branch_taken_0x1a82f4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a82f4) {
            ctx->pc = 0x1A830Cu;
            goto label_1a830c;
        }
    }
    ctx->pc = 0x1A82FCu;
    // 0x1a82fc: 0x3c023f80
    ctx->pc = 0x1a82fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a8300: 0x44826000
    ctx->pc = 0x1a8300u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1a8304: 0xc06a1d8
    ctx->pc = 0x1A8304u;
    SET_GPR_U32(ctx, 31, 0x1A830Cu);
    ctx->pc = 0x1A8308u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A8760u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutEntry_0x1a8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A830Cu; }
        else if (ctx->pc != 0x1A830Cu) { ctx->pc = 0x1A830Cu; }
    }
    if (ctx->pc != 0x1A830Cu) { return; }
    ctx->pc = 0x1A830Cu;
label_1a830c:
    // 0x1a830c: 0x7bbf0000
    ctx->pc = 0x1a830cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8310: 0x3e00008
    ctx->pc = 0x1A8310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A830Cu: goto label_1a830c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8318u;
}
