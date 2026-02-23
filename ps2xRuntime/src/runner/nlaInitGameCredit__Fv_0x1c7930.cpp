#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlaInitGameCredit__Fv
// Address: 0x1c7930 - 0x1c797c
void nlaInitGameCredit__Fv_0x1c7930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlaInitGameCredit__Fv");


    ctx->pc = 0x1c7930u;

    // 0x1c7930: 0x27bdfff0
    ctx->pc = 0x1c7930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7934: 0x7fbf0000
    ctx->pc = 0x1c7934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c7938: 0x3c010050
    ctx->pc = 0x1c7938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1c793c: 0xa020dacb
    ctx->pc = 0x1c793cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957771), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7940: 0x3c010050
    ctx->pc = 0x1c7940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1c7944: 0x8023fec4
    ctx->pc = 0x1c7944u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966980)));
    // 0x1c7948: 0x3c020030
    ctx->pc = 0x1c7948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c794c: 0x24455bc0
    ctx->pc = 0x1c794cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 23488));
    // 0x1c7950: 0x3c020030
    ctx->pc = 0x1c7950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7954: 0x70002628
    ctx->pc = 0x1c7954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7958: 0x24465c18
    ctx->pc = 0x1c7958u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 23576));
    // 0x1c795c: 0x3c010030
    ctx->pc = 0x1c795cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c7960: 0xac235bc8
    ctx->pc = 0x1c7960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23496), GPR_U32(ctx, 3));
    // 0x1c7964: 0x3c010030
    ctx->pc = 0x1c7964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c7968: 0xc071ec4
    ctx->pc = 0x1C7968u;
    SET_GPR_U32(ctx, 31, 0x1C7970u);
    ctx->pc = 0x1C796Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23500), GPR_U32(ctx, 3));
    ctx->pc = 0x1C7B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc_0x1c7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7970u; }
        else if (ctx->pc != 0x1C7970u) { ctx->pc = 0x1C7970u; }
    }
    if (ctx->pc != 0x1C7970u) { return; }
    ctx->pc = 0x1C7970u;
    // 0x1c7970: 0x7bbf0000
    ctx->pc = 0x1c7970u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7974: 0x3e00008
    ctx->pc = 0x1C7974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7978u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C797Cu;
}
