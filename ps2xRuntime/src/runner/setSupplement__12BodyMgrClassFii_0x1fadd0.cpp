#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setSupplement__12BodyMgrClassFii
// Address: 0x1fadd0 - 0x1fae08
void setSupplement__12BodyMgrClassFii_0x1fadd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setSupplement__12BodyMgrClassFii");


    ctx->pc = 0x1fadd0u;

    // 0x1fadd0: 0x27bdfff0
    ctx->pc = 0x1fadd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fadd4: 0x7fbf0000
    ctx->pc = 0x1fadd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1fadd8: 0x8c820004
    ctx->pc = 0x1fadd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1faddc: 0x70c03e28
    ctx->pc = 0x1faddcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1fade0: 0x3c0101f3
    ctx->pc = 0x1fade0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fade4: 0x70a03628
    ctx->pc = 0x1fade4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fade8: 0x8442002c
    ctx->pc = 0x1fade8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1fadec: 0x21080
    ctx->pc = 0x1fadecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fadf0: 0x410821
    ctx->pc = 0x1fadf0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fadf4: 0xc07eb84
    ctx->pc = 0x1FADF4u;
    SET_GPR_U32(ctx, 31, 0x1FADFCu);
    ctx->pc = 0x1FADF8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
    ctx->pc = 0x1FAE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        setSupplementSub__12BodyMgrClassFP7_BODYPTii_0x1fae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADFCu; }
        else if (ctx->pc != 0x1FADFCu) { ctx->pc = 0x1FADFCu; }
    }
    if (ctx->pc != 0x1FADFCu) { return; }
    ctx->pc = 0x1FADFCu;
    // 0x1fadfc: 0x7bbf0000
    ctx->pc = 0x1fadfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fae00: 0x3e00008
    ctx->pc = 0x1FAE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAE04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAE08u;
}
