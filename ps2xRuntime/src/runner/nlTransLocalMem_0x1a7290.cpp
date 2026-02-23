#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlTransLocalMem
// Address: 0x1a7290 - 0x1a7448
void nlTransLocalMem_0x1a7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlTransLocalMem");


    ctx->pc = 0x1a7290u;

    // 0x1a7290: 0x27bdff40
    ctx->pc = 0x1a7290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a7294: 0x7fbf0040
    ctx->pc = 0x1a7294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1a7298: 0x7fb30030
    ctx->pc = 0x1a7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a729c: 0x7fb20020
    ctx->pc = 0x1a729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a72a0: 0x7fb10010
    ctx->pc = 0x1a72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a72a4: 0x70809e28
    ctx->pc = 0x1a72a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a72a8: 0x70a09628
    ctx->pc = 0x1a72a8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a72ac: 0x70c08e28
    ctx->pc = 0x1a72acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a72b0: 0xc069558
    ctx->pc = 0x1A72B0u;
    SET_GPR_U32(ctx, 31, 0x1A72B8u);
    ctx->pc = 0x1A72B4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72B8u; }
        else if (ctx->pc != 0x1A72B8u) { ctx->pc = 0x1A72B8u; }
    }
    if (ctx->pc != 0x1A72B8u) { return; }
    ctx->pc = 0x1A72B8u;
    // 0x1a72b8: 0x70408628
    ctx->pc = 0x1a72b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a72bc: 0x1200000e
    ctx->pc = 0x1A72BCu;
    {
        const bool branch_taken_0x1a72bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A72C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
        if (branch_taken_0x1a72bc) {
            ctx->pc = 0x1A72F8u;
            goto label_1a72f8;
        }
    }
    ctx->pc = 0x1A72C4u;
    // 0x1a72c4: 0xc069528
    ctx->pc = 0x1A72C4u;
    SET_GPR_U32(ctx, 31, 0x1A72CCu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A72CCu; }
        else if (ctx->pc != 0x1A72CCu) { ctx->pc = 0x1A72CCu; }
    }
    if (ctx->pc != 0x1A72CCu) { return; }
    ctx->pc = 0x1A72CCu;
label_1a72cc:
    // 0x1a72cc: 0x3c011001
    ctx->pc = 0x1a72ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a72d0: 0x8c23d000
    ctx->pc = 0x1a72d0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1a72d4: 0x30630100
    ctx->pc = 0x1a72d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a72d8: 0x0
    ctx->pc = 0x1a72d8u;
    // NOP
    // 0x1a72dc: 0x0
    ctx->pc = 0x1a72dcu;
    // NOP
    // 0x1a72e0: 0x1460fffa
    ctx->pc = 0x1A72E0u;
    {
        const bool branch_taken_0x1a72e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a72e0) {
            ctx->pc = 0x1A72CCu;
            goto label_1a72cc;
        }
    }
    ctx->pc = 0x1A72E8u;
    // 0x1a72e8: 0x3c031000
    ctx->pc = 0x1a72e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1a72ec: 0x34630006
    ctx->pc = 0x1a72ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x1a72f0: 0x10000004
    ctx->pc = 0x1A72F0u;
    {
        const bool branch_taken_0x1a72f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A72F4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a72f0) {
            ctx->pc = 0x1A7304u;
            goto label_1a7304;
        }
    }
    ctx->pc = 0x1A72F8u;
label_1a72f8:
    // 0x1a72f8: 0x34630006
    ctx->pc = 0x1a72f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x1a72fc: 0x27a20050
    ctx->pc = 0x1a72fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7300: 0xafa30050
    ctx->pc = 0x1a7300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1a7304:
    // 0x1a7304: 0x11183c
    ctx->pc = 0x1a7304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1a7308: 0x3183f
    ctx->pc = 0x1a7308u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1a730c: 0x336fc
    ctx->pc = 0x1a730cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 27));
    // 0x1a7310: 0x3c031000
    ctx->pc = 0x1a7310u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1a7314: 0xac400004
    ctx->pc = 0x1a7314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a7318: 0xac430008
    ctx->pc = 0x1a7318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a731c: 0x3203c
    ctx->pc = 0x1a731cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a7320: 0x3c035100
    ctx->pc = 0x1a7320u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1a7324: 0x34630006
    ctx->pc = 0x1a7324u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 6));
    // 0x1a7328: 0xac43000c
    ctx->pc = 0x1a7328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a732c: 0x34038005
    ctx->pc = 0x1a732cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32773));
    // 0x1a7330: 0x641825
    ctx->pc = 0x1a7330u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7334: 0xfc430010
    ctx->pc = 0x1a7334u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1a7338: 0x2403000e
    ctx->pc = 0x1a7338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a733c: 0xfc430018
    ctx->pc = 0x1a733cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x1a7340: 0xfc400020
    ctx->pc = 0x1a7340u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    // 0x1a7344: 0x2403003f
    ctx->pc = 0x1a7344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a7348: 0xfc430028
    ctx->pc = 0x1a7348u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1a734c: 0x86690006
    ctx->pc = 0x1a734cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1a7350: 0x86680008
    ctx->pc = 0x1a7350u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a7354: 0x86470004
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a7358: 0x86450006
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1a735c: 0x86440008
    ctx->pc = 0x1a735cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a7360: 0x866a0004
    ctx->pc = 0x1a7360u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1a7364: 0x94c38
    ctx->pc = 0x1a7364u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1a7368: 0x84638
    ctx->pc = 0x1a7368u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x1a736c: 0x7383c
    ctx->pc = 0x1a736cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1a7370: 0x52c3c
    ctx->pc = 0x1a7370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1a7374: 0x4263c
    ctx->pc = 0x1a7374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x1a7378: 0x1494825
    ctx->pc = 0x1a7378u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1a737c: 0x1094025
    ctx->pc = 0x1a737cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1a7380: 0xe83825
    ctx->pc = 0x1a7380u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a7384: 0xa72825
    ctx->pc = 0x1a7384u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1a7388: 0x852025
    ctx->pc = 0x1a7388u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a738c: 0xfc440030
    ctx->pc = 0x1a738cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 4));
    // 0x1a7390: 0x24030050
    ctx->pc = 0x1a7390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a7394: 0xfc430038
    ctx->pc = 0x1a7394u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1a7398: 0x8669000c
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1a739c: 0x8648000a
    ctx->pc = 0x1a739cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1a73a0: 0x8647000c
    ctx->pc = 0x1a73a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a73a4: 0x866a000a
    ctx->pc = 0x1a73a4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1a73a8: 0x24030051
    ctx->pc = 0x1a73a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 81));
    // 0x1a73ac: 0x24050052
    ctx->pc = 0x1a73acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 82));
    // 0x1a73b0: 0x94c38
    ctx->pc = 0x1a73b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1a73b4: 0x8403c
    ctx->pc = 0x1a73b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1a73b8: 0x73c3c
    ctx->pc = 0x1a73b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1a73bc: 0x1494825
    ctx->pc = 0x1a73bcu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1a73c0: 0x1094025
    ctx->pc = 0x1a73c0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1a73c4: 0xe83825
    ctx->pc = 0x1a73c4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a73c8: 0xc73025
    ctx->pc = 0x1a73c8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a73cc: 0xfc460040
    ctx->pc = 0x1a73ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 6));
    // 0x1a73d0: 0xfc430048
    ctx->pc = 0x1a73d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x1a73d4: 0x86460010
    ctx->pc = 0x1a73d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a73d8: 0x8647000e
    ctx->pc = 0x1a73d8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1a73dc: 0x24040002
    ctx->pc = 0x1a73dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a73e0: 0x24030053
    ctx->pc = 0x1a73e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 83));
    // 0x1a73e4: 0x6303c
    ctx->pc = 0x1a73e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a73e8: 0xe63025
    ctx->pc = 0x1a73e8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a73ec: 0xfc460050
    ctx->pc = 0x1a73ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 6));
    // 0x1a73f0: 0xfc450058
    ctx->pc = 0x1a73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 5));
    // 0x1a73f4: 0xfc440060
    ctx->pc = 0x1a73f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 4));
    // 0x1a73f8: 0x12000005
    ctx->pc = 0x1A73F8u;
    {
        const bool branch_taken_0x1a73f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A73FCu;
        WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 3));
        if (branch_taken_0x1a73f8) {
            ctx->pc = 0x1A7410u;
            goto label_1a7410;
        }
    }
    ctx->pc = 0x1A7400u;
    // 0x1a7400: 0xc06952c
    ctx->pc = 0x1A7400u;
    SET_GPR_U32(ctx, 31, 0x1A7408u);
    ctx->pc = 0x1A7404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7408u; }
        else if (ctx->pc != 0x1A7408u) { ctx->pc = 0x1A7408u; }
    }
    if (ctx->pc != 0x1A7408u) { return; }
    ctx->pc = 0x1A7408u;
    // 0x1a7408: 0x10000009
    ctx->pc = 0x1A7408u;
    {
        const bool branch_taken_0x1a7408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A740Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1a7408) {
            ctx->pc = 0x1A7430u;
            goto label_1a7430;
        }
    }
    ctx->pc = 0x1A7410u;
label_1a7410:
    // 0x1a7410: 0xc0552d8
    ctx->pc = 0x1A7410u;
    SET_GPR_U32(ctx, 31, 0x1A7418u);
    ctx->pc = 0x1A7414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7418u; }
        else if (ctx->pc != 0x1A7418u) { ctx->pc = 0x1A7418u; }
    }
    if (ctx->pc != 0x1A7418u) { return; }
    ctx->pc = 0x1A7418u;
    // 0x1a7418: 0xc0547e4
    ctx->pc = 0x1A7418u;
    SET_GPR_U32(ctx, 31, 0x1A7420u);
    ctx->pc = 0x1A741Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7420u; }
        else if (ctx->pc != 0x1A7420u) { ctx->pc = 0x1A7420u; }
    }
    if (ctx->pc != 0x1A7420u) { return; }
    ctx->pc = 0x1A7420u;
    // 0x1a7420: 0x27a50050
    ctx->pc = 0x1a7420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a7424: 0xc0548b8
    ctx->pc = 0x1A7424u;
    SET_GPR_U32(ctx, 31, 0x1A742Cu);
    ctx->pc = 0x1A7428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1522E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x1522e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A742Cu; }
        else if (ctx->pc != 0x1A742Cu) { ctx->pc = 0x1A742Cu; }
    }
    if (ctx->pc != 0x1A742Cu) { return; }
    ctx->pc = 0x1A742Cu;
    // 0x1a742c: 0x7bbf0040
    ctx->pc = 0x1a742cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7430:
    // 0x1a7430: 0x7bb30030
    ctx->pc = 0x1a7430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7434: 0x7bb20020
    ctx->pc = 0x1a7434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7438: 0x7bb10010
    ctx->pc = 0x1a7438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a743c: 0x7bb00000
    ctx->pc = 0x1a743cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7440: 0x3e00008
    ctx->pc = 0x1A7440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A72CCu: goto label_1a72cc;
            case 0x1A72F8u: goto label_1a72f8;
            case 0x1A7304u: goto label_1a7304;
            case 0x1A7410u: goto label_1a7410;
            case 0x1A7430u: goto label_1a7430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7448u;
}
