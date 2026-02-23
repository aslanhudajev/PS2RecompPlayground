#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSubX__9CClothMgrFiiiiiiii
// Address: 0x1cd2f0 - 0x1cd48c
void initSubX__9CClothMgrFiiiiiiii_0x1cd2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSubX__9CClothMgrFiiiiiiii");


    ctx->pc = 0x1cd2f0u;

    // 0x1cd2f0: 0x27bdff50
    ctx->pc = 0x1cd2f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cd2f4: 0x7fbf0090
    ctx->pc = 0x1cd2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1cd2f8: 0x7fbe0080
    ctx->pc = 0x1cd2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1cd2fc: 0x7fb70070
    ctx->pc = 0x1cd2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1cd300: 0x7fb60060
    ctx->pc = 0x1cd300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cd304: 0x7fb50050
    ctx->pc = 0x1cd304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cd308: 0x7fb40040
    ctx->pc = 0x1cd308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cd30c: 0x7fb30030
    ctx->pc = 0x1cd30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cd310: 0x7fb20020
    ctx->pc = 0x1cd310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cd314: 0x7fb10010
    ctx->pc = 0x1cd314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd318: 0x7fb00000
    ctx->pc = 0x1cd318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd31c: 0x70809628
    ctx->pc = 0x1cd31cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cd320: 0x70e08628
    ctx->pc = 0x1cd320u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cd324: 0x70a0a628
    ctx->pc = 0x1cd324u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cd328: 0x70c08e28
    ctx->pc = 0x1cd328u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cd32c: 0x7100b628
    ctx->pc = 0x1cd32cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cd330: 0x7120be28
    ctx->pc = 0x1cd330u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1cd334: 0x7140f628
    ctx->pc = 0x1cd334u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1cd338: 0xafab00ac
    ctx->pc = 0x1cd338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
    // 0x1cd33c: 0x27848c78
    ctx->pc = 0x1cd33cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
    // 0x1cd340: 0xc074b6c
    ctx->pc = 0x1CD340u;
    SET_GPR_U32(ctx, 31, 0x1CD348u);
    ctx->pc = 0x1CD344u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D2DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getAdr__13ClVtxMgrClassFi_0x1d2db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD348u; }
        else if (ctx->pc != 0x1CD348u) { ctx->pc = 0x1CD348u; }
    }
    if (ctx->pc != 0x1CD348u) { return; }
    ctx->pc = 0x1CD348u;
    // 0x1cd348: 0x70409e28
    ctx->pc = 0x1cd348u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd34c: 0x12600043
    ctx->pc = 0x1CD34Cu;
    {
        const bool branch_taken_0x1cd34c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD350u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x1cd34c) {
            ctx->pc = 0x1CD45Cu;
            goto label_1cd45c;
        }
    }
    ctx->pc = 0x1CD354u;
    // 0x1cd354: 0x24030001
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd358: 0x2b21021
    ctx->pc = 0x1cd358u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1cd35c: 0xac430050
    ctx->pc = 0x1cd35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x1cd360: 0xc06878c
    ctx->pc = 0x1CD360u;
    SET_GPR_U32(ctx, 31, 0x1CD368u);
    ctx->pc = 0x1CD364u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1424));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD368u; }
        else if (ctx->pc != 0x1CD368u) { ctx->pc = 0x1CD368u; }
    }
    if (ctx->pc != 0x1CD368u) { return; }
    ctx->pc = 0x1CD368u;
    // 0x1cd368: 0x10400008
    ctx->pc = 0x1CD368u;
    {
        const bool branch_taken_0x1cd368 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD36Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cd368) {
            ctx->pc = 0x1CD38Cu;
            goto label_1cd38c;
        }
    }
    ctx->pc = 0x1CD370u;
    // 0x1cd370: 0x70402628
    ctx->pc = 0x1cd370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd374: 0x70002e28
    ctx->pc = 0x1cd374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd378: 0x70003628
    ctx->pc = 0x1cd378u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd37c: 0x24070040
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cd380: 0xc071b84
    ctx->pc = 0x1CD380u;
    SET_GPR_U32(ctx, 31, 0x1CD388u);
    ctx->pc = 0x1CD384u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x1C6E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1c6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD388u; }
        else if (ctx->pc != 0x1CD388u) { ctx->pc = 0x1CD388u; }
    }
    if (ctx->pc != 0x1CD388u) { return; }
    ctx->pc = 0x1CD388u;
    // 0x1cd388: 0x7040a628
    ctx->pc = 0x1cd388u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cd38c:
    // 0x1cd38c: 0x2b21021
    ctx->pc = 0x1cd38cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1cd390: 0xac540070
    ctx->pc = 0x1cd390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 20));
    // 0x1cd394: 0xc06878c
    ctx->pc = 0x1CD394u;
    SET_GPR_U32(ctx, 31, 0x1CD39Cu);
    ctx->pc = 0x1CD398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD39Cu; }
        else if (ctx->pc != 0x1CD39Cu) { ctx->pc = 0x1CD39Cu; }
    }
    if (ctx->pc != 0x1CD39Cu) { return; }
    ctx->pc = 0x1CD39Cu;
    // 0x1cd39c: 0x7040a628
    ctx->pc = 0x1cd39cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd3a0: 0x12800004
    ctx->pc = 0x1CD3A0u;
    {
        const bool branch_taken_0x1cd3a0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD3A4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        if (branch_taken_0x1cd3a0) {
            ctx->pc = 0x1CD3B4u;
            goto label_1cd3b4;
        }
    }
    ctx->pc = 0x1CD3A8u;
    // 0x1cd3a8: 0xc073aac
    ctx->pc = 0x1CD3A8u;
    SET_GPR_U32(ctx, 31, 0x1CD3B0u);
    ctx->pc = 0x1CD3ACu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CEAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6CClothFv_0x1ceab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3B0u; }
        else if (ctx->pc != 0x1CD3B0u) { ctx->pc = 0x1CD3B0u; }
    }
    if (ctx->pc != 0x1CD3B0u) { return; }
    ctx->pc = 0x1CD3B0u;
    // 0x1cd3b0: 0x2b21021
    ctx->pc = 0x1cd3b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1cd3b4:
    // 0x1cd3b4: 0xac540060
    ctx->pc = 0x1cd3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 20));
    // 0x1cd3b8: 0x8c440060
    ctx->pc = 0x1cd3b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cd3bc: 0x72c02e28
    ctx->pc = 0x1cd3bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1cd3c0: 0x72e03628
    ctx->pc = 0x1cd3c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1cd3c4: 0x73c03e28
    ctx->pc = 0x1cd3c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1cd3c8: 0xc073afc
    ctx->pc = 0x1CD3C8u;
    SET_GPR_U32(ctx, 31, 0x1CD3D0u);
    ctx->pc = 0x1CD3CCu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 96));
    ctx->pc = 0x1CEBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init0__6CClothFiii_0x1cebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3D0u; }
        else if (ctx->pc != 0x1CD3D0u) { ctx->pc = 0x1CD3D0u; }
    }
    if (ctx->pc != 0x1CD3D0u) { return; }
    ctx->pc = 0x1CD3D0u;
    // 0x1cd3d0: 0x87a200ac
    ctx->pc = 0x1cd3d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1cd3d4: 0x8e440000
    ctx->pc = 0x1cd3d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd3d8: 0xc073b28
    ctx->pc = 0x1CD3D8u;
    SET_GPR_U32(ctx, 31, 0x1CD3E0u);
    ctx->pc = 0x1CD3DCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CECA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setType__6CClothFs_0x1ceca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3E0u; }
        else if (ctx->pc != 0x1CD3E0u) { ctx->pc = 0x1CD3E0u; }
    }
    if (ctx->pc != 0x1CD3E0u) { return; }
    ctx->pc = 0x1CD3E0u;
    // 0x1cd3e0: 0x8e440000
    ctx->pc = 0x1cd3e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd3e4: 0x8fa700b0
    ctx->pc = 0x1cd3e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cd3e8: 0x72602e28
    ctx->pc = 0x1cd3e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1cd3ec: 0xc073b30
    ctx->pc = 0x1CD3ECu;
    SET_GPR_U32(ctx, 31, 0x1CD3F4u);
    ctx->pc = 0x1CD3F0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CECC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setWeightTbl2__6CClothFPcii_0x1cecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3F4u; }
        else if (ctx->pc != 0x1CD3F4u) { ctx->pc = 0x1CD3F4u; }
    }
    if (ctx->pc != 0x1CD3F4u) { return; }
    ctx->pc = 0x1CD3F4u;
    // 0x1cd3f4: 0x8e440000
    ctx->pc = 0x1cd3f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd3f8: 0x72602e28
    ctx->pc = 0x1cd3f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1cd3fc: 0xc073b40
    ctx->pc = 0x1CD3FCu;
    SET_GPR_U32(ctx, 31, 0x1CD404u);
    ctx->pc = 0x1CD400u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CED00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTbl2__6CClothFPci_0x1ced00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD404u; }
        else if (ctx->pc != 0x1CD404u) { ctx->pc = 0x1CD404u; }
    }
    if (ctx->pc != 0x1CD404u) { return; }
    ctx->pc = 0x1CD404u;
    // 0x1cd404: 0x8e440000
    ctx->pc = 0x1cd404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cd408: 0x70002e28
    ctx->pc = 0x1cd408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd40c: 0x70003628
    ctx->pc = 0x1cd40cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd410: 0x70003e28
    ctx->pc = 0x1cd410u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd414: 0x70004628
    ctx->pc = 0x1cd414u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd418: 0xc073b50
    ctx->pc = 0x1CD418u;
    SET_GPR_U32(ctx, 31, 0x1CD420u);
    ctx->pc = 0x1CD41Cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CED40u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTunagimeTbl__6CClothFPiiPiiPi_0x1ced40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD420u; }
        else if (ctx->pc != 0x1CD420u) { ctx->pc = 0x1CD420u; }
    }
    if (ctx->pc != 0x1CD420u) { return; }
    ctx->pc = 0x1CD420u;
    // 0x1cd420: 0x111403
    ctx->pc = 0x1cd420u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x1cd424: 0x3042ffff
    ctx->pc = 0x1cd424u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1cd428: 0x21900
    ctx->pc = 0x1cd428u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cd42c: 0x3c020050
    ctx->pc = 0x1cd42cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cd430: 0x2442ea24
    ctx->pc = 0x1cd430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1cd434: 0x431021
    ctx->pc = 0x1cd434u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd438: 0x8c420000
    ctx->pc = 0x1cd438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd43c: 0x3225ffff
    ctx->pc = 0x1cd43cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 17), 65535));
    // 0x1cd440: 0x51840
    ctx->pc = 0x1cd440u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cd444: 0x651821
    ctx->pc = 0x1cd444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cd448: 0x31880
    ctx->pc = 0x1cd448u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd44c: 0x431021
    ctx->pc = 0x1cd44cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd450: 0x8c450000
    ctx->pc = 0x1cd450u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd454: 0xc0749e0
    ctx->pc = 0x1CD454u;
    SET_GPR_U32(ctx, 31, 0x1CD45Cu);
    ctx->pc = 0x1CD458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1D2780u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPol__6CClothFPi_0x1d2780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD45Cu; }
        else if (ctx->pc != 0x1CD45Cu) { ctx->pc = 0x1CD45Cu; }
    }
    if (ctx->pc != 0x1CD45Cu) { return; }
    ctx->pc = 0x1CD45Cu;
label_1cd45c:
    // 0x1cd45c: 0x7bbf0090
    ctx->pc = 0x1cd45cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd460: 0x7bbe0080
    ctx->pc = 0x1cd460u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd464: 0x7bb70070
    ctx->pc = 0x1cd464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd468: 0x7bb60060
    ctx->pc = 0x1cd468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cd46c: 0x7bb50050
    ctx->pc = 0x1cd46cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd470: 0x7bb40040
    ctx->pc = 0x1cd470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd474: 0x7bb30030
    ctx->pc = 0x1cd474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd478: 0x7bb20020
    ctx->pc = 0x1cd478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd47c: 0x7bb10010
    ctx->pc = 0x1cd47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd480: 0x7bb00000
    ctx->pc = 0x1cd480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd484: 0x3e00008
    ctx->pc = 0x1CD484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD488u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD38Cu: goto label_1cd38c;
            case 0x1CD3B4u: goto label_1cd3b4;
            case 0x1CD45Cu: goto label_1cd45c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD48Cu;
}
