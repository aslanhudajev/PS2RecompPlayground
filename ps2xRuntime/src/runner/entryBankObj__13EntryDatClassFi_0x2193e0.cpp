#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj__13EntryDatClassFi
// Address: 0x2193e0 - 0x21945c
void entryBankObj__13EntryDatClassFi_0x2193e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj__13EntryDatClassFi");


    ctx->pc = 0x2193e0u;

    // 0x2193e0: 0x27bdffd0
    ctx->pc = 0x2193e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2193e4: 0x7fbf0020
    ctx->pc = 0x2193e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2193e8: 0x7fb10010
    ctx->pc = 0x2193e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2193ec: 0x7fb00000
    ctx->pc = 0x2193ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2193f0: 0x70a08628
    ctx->pc = 0x2193f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2193f4: 0x51080
    ctx->pc = 0x2193f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2193f8: 0x84851002
    ctx->pc = 0x2193f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x2193fc: 0x3c0101fb
    ctx->pc = 0x2193fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x219400: 0x24030009
    ctx->pc = 0x219400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x219404: 0x410821
    ctx->pc = 0x219404u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x219408: 0x70808e28
    ctx->pc = 0x219408u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21940c: 0x52900
    ctx->pc = 0x21940cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x219410: 0x852821
    ctx->pc = 0x219410u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x219414: 0xaca30000
    ctx->pc = 0x219414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x219418: 0x8c221fd8
    ctx->pc = 0x219418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 8152)));
    // 0x21941c: 0xaca20008
    ctx->pc = 0x21941cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x219420: 0xc0864f0
    ctx->pc = 0x219420u;
    SET_GPR_U32(ctx, 31, 0x219428u);
    ctx->pc = 0x219424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219428u; }
        else if (ctx->pc != 0x219428u) { ctx->pc = 0x219428u; }
    }
    if (ctx->pc != 0x219428u) { return; }
    ctx->pc = 0x219428u;
    // 0x219428: 0x86221002
    ctx->pc = 0x219428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4098)));
    // 0x21942c: 0x72202628
    ctx->pc = 0x21942cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x219430: 0x21100
    ctx->pc = 0x219430u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x219434: 0x2221021
    ctx->pc = 0x219434u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x219438: 0xac400000
    ctx->pc = 0x219438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21943c: 0xac500008
    ctx->pc = 0x21943cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x219440: 0xc0864f0
    ctx->pc = 0x219440u;
    SET_GPR_U32(ctx, 31, 0x219448u);
    ctx->pc = 0x219444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219448u; }
        else if (ctx->pc != 0x219448u) { ctx->pc = 0x219448u; }
    }
    if (ctx->pc != 0x219448u) { return; }
    ctx->pc = 0x219448u;
    // 0x219448: 0x7bbf0020
    ctx->pc = 0x219448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21944c: 0x7bb10010
    ctx->pc = 0x21944cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219450: 0x7bb00000
    ctx->pc = 0x219450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219454: 0x3e00008
    ctx->pc = 0x219454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21945Cu;
}
