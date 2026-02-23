#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlaInitGameCreditDummy__Fv
// Address: 0x1c7980 - 0x1c79c8
void nlaInitGameCreditDummy__Fv_0x1c7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlaInitGameCreditDummy__Fv");


    ctx->pc = 0x1c7980u;

    // 0x1c7980: 0x27bdfff0
    ctx->pc = 0x1c7980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7984: 0x7fbf0000
    ctx->pc = 0x1c7984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c7988: 0x3c010050
    ctx->pc = 0x1c7988u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1c798c: 0xa020dacb
    ctx->pc = 0x1c798cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957771), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7990: 0x24020005
    ctx->pc = 0x1c7990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7994: 0x3c010030
    ctx->pc = 0x1c7994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c7998: 0xac225bc8
    ctx->pc = 0x1c7998u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23496), GPR_U32(ctx, 2));
    // 0x1c799c: 0x3c010030
    ctx->pc = 0x1c799cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c79a0: 0xac225bcc
    ctx->pc = 0x1c79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23500), GPR_U32(ctx, 2));
    // 0x1c79a4: 0x3c020030
    ctx->pc = 0x1c79a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c79a8: 0x24455bc0
    ctx->pc = 0x1c79a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 23488));
    // 0x1c79ac: 0x3c020030
    ctx->pc = 0x1c79acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c79b0: 0x70002628
    ctx->pc = 0x1c79b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c79b4: 0xc071ec4
    ctx->pc = 0x1C79B4u;
    SET_GPR_U32(ctx, 31, 0x1C79BCu);
    ctx->pc = 0x1C79B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 23576));
    ctx->pc = 0x1C7B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc_0x1c7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C79BCu; }
        else if (ctx->pc != 0x1C79BCu) { ctx->pc = 0x1C79BCu; }
    }
    if (ctx->pc != 0x1C79BCu) { return; }
    ctx->pc = 0x1C79BCu;
    // 0x1c79bc: 0x7bbf0000
    ctx->pc = 0x1c79bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c79c0: 0x3e00008
    ctx->pc = 0x1C79C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C79C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C79C8u;
}
