#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setInitTbl__15RankingMgrClassFv
// Address: 0x216350 - 0x216408
void setInitTbl__15RankingMgrClassFv_0x216350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setInitTbl__15RankingMgrClassFv");


    ctx->pc = 0x216350u;

    // 0x216350: 0x3c030029
    ctx->pc = 0x216350u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x216354: 0x2468a8b0
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x216358: 0x3c030029
    ctx->pc = 0x216358u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x21635c: 0x2469a930
    ctx->pc = 0x21635cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 4294945072));
    // 0x216360: 0x3c030050
    ctx->pc = 0x216360u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x216364: 0x246a00bc
    ctx->pc = 0x216364u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 3), 188));
    // 0x216368: 0x3c030050
    ctx->pc = 0x216368u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x21636c: 0x246b0134
    ctx->pc = 0x21636cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 3), 308));
    // 0x216370: 0x70006628
    ctx->pc = 0x216370u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_216374:
    // 0x216374: 0x71006e28
    ctx->pc = 0x216374u;
    SET_GPR_VEC(ctx, 13, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x216378: 0x91a60000
    ctx->pc = 0x216378u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x21637c: 0x91a50001
    ctx->pc = 0x21637cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x216380: 0x91a40002
    ctx->pc = 0x216380u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x216384: 0x91a30003
    ctx->pc = 0x216384u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x216388: 0x71403e28
    ctx->pc = 0x216388u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x21638c: 0x71207e28
    ctx->pc = 0x21638cu;
    SET_GPR_VEC(ctx, 15, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x216390: 0x71607628
    ctx->pc = 0x216390u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x216394: 0x258c0001
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
    // 0x216398: 0x2508000c
    ctx->pc = 0x216398u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 12));
    // 0x21639c: 0xa0e60000
    ctx->pc = 0x21639cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2163a0: 0xa0e50001
    ctx->pc = 0x2163a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2163a4: 0xa0e40002
    ctx->pc = 0x2163a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2163a8: 0xa0e30003
    ctx->pc = 0x2163a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2163ac: 0x8da40004
    ctx->pc = 0x2163acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2163b0: 0x2983000a
    ctx->pc = 0x2163b0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 12), 10));
    // 0x2163b4: 0x254a000c
    ctx->pc = 0x2163b4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 12));
    // 0x2163b8: 0x2529000c
    ctx->pc = 0x2163b8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 12));
    // 0x2163bc: 0x256b000c
    ctx->pc = 0x2163bcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 12));
    // 0x2163c0: 0xace40004
    ctx->pc = 0x2163c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x2163c4: 0x8da40008
    ctx->pc = 0x2163c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2163c8: 0xace40008
    ctx->pc = 0x2163c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x2163cc: 0x91e70000
    ctx->pc = 0x2163ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2163d0: 0x91e60001
    ctx->pc = 0x2163d0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x2163d4: 0x91e50002
    ctx->pc = 0x2163d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x2163d8: 0x91e40003
    ctx->pc = 0x2163d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x2163dc: 0xa1c70000
    ctx->pc = 0x2163dcu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2163e0: 0xa1c60001
    ctx->pc = 0x2163e0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2163e4: 0xa1c50002
    ctx->pc = 0x2163e4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2163e8: 0xa1c40003
    ctx->pc = 0x2163e8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2163ec: 0x8de40004
    ctx->pc = 0x2163ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x2163f0: 0xadc40004
    ctx->pc = 0x2163f0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 4));
    // 0x2163f4: 0x8de40008
    ctx->pc = 0x2163f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x2163f8: 0x1460ffde
    ctx->pc = 0x2163F8u;
    {
        const bool branch_taken_0x2163f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2163FCu;
        WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x2163f8) {
            ctx->pc = 0x216374u;
            goto label_216374;
        }
    }
    ctx->pc = 0x216400u;
    // 0x216400: 0x3e00008
    ctx->pc = 0x216400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216374u: goto label_216374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216408u;
}
