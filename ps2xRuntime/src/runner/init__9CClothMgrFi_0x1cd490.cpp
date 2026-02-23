#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__9CClothMgrFi
// Address: 0x1cd490 - 0x1cda24
void init__9CClothMgrFi_0x1cd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__9CClothMgrFi");


    ctx->pc = 0x1cd490u;

    // 0x1cd490: 0x27bdffb0
    ctx->pc = 0x1cd490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cd494: 0x7fbf0040
    ctx->pc = 0x1cd494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1cd498: 0x7fb20030
    ctx->pc = 0x1cd498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cd49c: 0x7fb10020
    ctx->pc = 0x1cd49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cd4a0: 0x7fb00010
    ctx->pc = 0x1cd4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd4a4: 0x240a0014
    ctx->pc = 0x1cd4a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cd4a8: 0xac850000
    ctx->pc = 0x1cd4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cd4ac: 0x10aa012a
    ctx->pc = 0x1CD4ACu;
    {
        const bool branch_taken_0x1cd4ac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 10));
        ctx->pc = 0x1CD4B0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cd4ac) {
            ctx->pc = 0x1CD958u;
            goto label_1cd958;
        }
    }
    ctx->pc = 0x1CD4B4u;
    // 0x1cd4b4: 0x24030022
    ctx->pc = 0x1cd4b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1cd4b8: 0x10a30113
    ctx->pc = 0x1CD4B8u;
    {
        const bool branch_taken_0x1cd4b8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CD4BCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cd4b8) {
            ctx->pc = 0x1CD908u;
            goto label_1cd908;
        }
    }
    ctx->pc = 0x1CD4C0u;
    // 0x1cd4c0: 0x24030021
    ctx->pc = 0x1cd4c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cd4c4: 0x10a300a2
    ctx->pc = 0x1CD4C4u;
    {
        const bool branch_taken_0x1cd4c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CD4C8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cd4c4) {
            ctx->pc = 0x1CD750u;
            goto label_1cd750;
        }
    }
    ctx->pc = 0x1CD4CCu;
    // 0x1cd4cc: 0x24030020
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cd4d0: 0x10a3008a
    ctx->pc = 0x1CD4D0u;
    {
        const bool branch_taken_0x1cd4d0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CD4D4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cd4d0) {
            ctx->pc = 0x1CD6FCu;
            goto label_1cd6fc;
        }
    }
    ctx->pc = 0x1CD4D8u;
    // 0x1cd4d8: 0x24030047
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1cd4dc: 0x50a3007b
    ctx->pc = 0x1CD4DCu;
    {
        const bool branch_taken_0x1cd4dc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cd4dc) {
            ctx->pc = 0x1CD4E0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2188));
            ctx->pc = 0x1CD6CCu;
            goto label_1cd6cc;
        }
    }
    ctx->pc = 0x1CD4E4u;
    // 0x1cd4e4: 0x24030012
    ctx->pc = 0x1cd4e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cd4e8: 0x10a3001b
    ctx->pc = 0x1CD4E8u;
    {
        const bool branch_taken_0x1cd4e8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CD4ECu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cd4e8) {
            ctx->pc = 0x1CD558u;
            goto label_1cd558;
        }
    }
    ctx->pc = 0x1CD4F0u;
    // 0x1cd4f0: 0x24030043
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 67));
    // 0x1cd4f4: 0x10a30003
    ctx->pc = 0x1CD4F4u;
    {
        const bool branch_taken_0x1cd4f4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CD4F8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cd4f4) {
            ctx->pc = 0x1CD504u;
            goto label_1cd504;
        }
    }
    ctx->pc = 0x1CD4FCu;
    // 0x1cd4fc: 0x10000144
    ctx->pc = 0x1CD4FCu;
    {
        const bool branch_taken_0x1cd4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD500u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1cd4fc) {
            ctx->pc = 0x1CDA10u;
            goto label_1cda10;
        }
    }
    ctx->pc = 0x1CD504u;
label_1cd504:
    // 0x1cd504: 0x8c25f4b0
    ctx->pc = 0x1cd504u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294964400)));
    // 0x1cd508: 0x3c038000
    ctx->pc = 0x1cd508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd50c: 0xa31824
    ctx->pc = 0x1cd50cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cd510: 0x1060013e
    ctx->pc = 0x1CD510u;
    {
        const bool branch_taken_0x1cd510 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd510) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD518u;
    // 0x1cd518: 0x3c0200a9
    ctx->pc = 0x1cd518u;
    SET_GPR_U32(ctx, 2, ((uint32_t)169 << 16));
    // 0x1cd51c: 0x34450023
    ctx->pc = 0x1cd51cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 35));
    // 0x1cd520: 0x70003628
    ctx->pc = 0x1cd520u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd524: 0x2407000a
    ctx->pc = 0x1cd524u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd528: 0x24080013
    ctx->pc = 0x1cd528u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1cd52c: 0x24090178
    ctx->pc = 0x1cd52cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 376));
    // 0x1cd530: 0x240a0005
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd534: 0xc073438
    ctx->pc = 0x1CD534u;
    SET_GPR_U32(ctx, 31, 0x1CD53Cu);
    ctx->pc = 0x1CD538u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CD0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSub__9CClothMgrFiiiiiii_0x1cd0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD53Cu; }
        else if (ctx->pc != 0x1CD53Cu) { ctx->pc = 0x1CD53Cu; }
    }
    if (ctx->pc != 0x1CD53Cu) { return; }
    ctx->pc = 0x1CD53Cu;
    // 0x1cd53c: 0x8e040008
    ctx->pc = 0x1cd53cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd540: 0x10800132
    ctx->pc = 0x1CD540u;
    {
        const bool branch_taken_0x1cd540 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd540) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD548u;
    // 0x1cd548: 0xc074948
    ctx->pc = 0x1CD548u;
    SET_GPR_U32(ctx, 31, 0x1CD550u);
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD550u; }
        else if (ctx->pc != 0x1CD550u) { ctx->pc = 0x1CD550u; }
    }
    if (ctx->pc != 0x1CD550u) { return; }
    ctx->pc = 0x1CD550u;
    // 0x1cd550: 0x1000012e
    ctx->pc = 0x1CD550u;
    {
        const bool branch_taken_0x1cd550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd550) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD558u;
label_1cd558:
    // 0x1cd558: 0x8c24f2e0
    ctx->pc = 0x1cd558u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294963936)));
    // 0x1cd55c: 0x3c038000
    ctx->pc = 0x1cd55cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd560: 0x831824
    ctx->pc = 0x1cd560u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cd564: 0x10600129
    ctx->pc = 0x1CD564u;
    {
        const bool branch_taken_0x1cd564 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD568u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
        if (branch_taken_0x1cd564) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD56Cu;
    // 0x1cd56c: 0xc074b6c
    ctx->pc = 0x1CD56Cu;
    SET_GPR_U32(ctx, 31, 0x1CD574u);
    ctx->pc = 0x1CD570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D2DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getAdr__13ClVtxMgrClassFi_0x1d2db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD574u; }
        else if (ctx->pc != 0x1CD574u) { ctx->pc = 0x1CD574u; }
    }
    if (ctx->pc != 0x1CD574u) { return; }
    ctx->pc = 0x1CD574u;
    // 0x1cd574: 0x70408e28
    ctx->pc = 0x1cd574u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd578: 0x12200124
    ctx->pc = 0x1CD578u;
    {
        const bool branch_taken_0x1cd578 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd578) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD580u;
    // 0x1cd580: 0x24020001
    ctx->pc = 0x1cd580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd584: 0xae020004
    ctx->pc = 0x1cd584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cd588: 0xc06878c
    ctx->pc = 0x1CD588u;
    SET_GPR_U32(ctx, 31, 0x1CD590u);
    ctx->pc = 0x1CD58Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1424));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD590u; }
        else if (ctx->pc != 0x1CD590u) { ctx->pc = 0x1CD590u; }
    }
    if (ctx->pc != 0x1CD590u) { return; }
    ctx->pc = 0x1CD590u;
    // 0x1cd590: 0x10400008
    ctx->pc = 0x1CD590u;
    {
        const bool branch_taken_0x1cd590 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD594u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cd590) {
            ctx->pc = 0x1CD5B4u;
            goto label_1cd5b4;
        }
    }
    ctx->pc = 0x1CD598u;
    // 0x1cd598: 0x70402628
    ctx->pc = 0x1cd598u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd59c: 0x70002e28
    ctx->pc = 0x1cd59cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd5a0: 0x70003628
    ctx->pc = 0x1cd5a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd5a4: 0x24070040
    ctx->pc = 0x1cd5a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cd5a8: 0xc071b84
    ctx->pc = 0x1CD5A8u;
    SET_GPR_U32(ctx, 31, 0x1CD5B0u);
    ctx->pc = 0x1CD5ACu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x1C6E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1c6e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5B0u; }
        else if (ctx->pc != 0x1CD5B0u) { ctx->pc = 0x1CD5B0u; }
    }
    if (ctx->pc != 0x1CD5B0u) { return; }
    ctx->pc = 0x1CD5B0u;
    // 0x1cd5b0: 0x70409628
    ctx->pc = 0x1cd5b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cd5b4:
    // 0x1cd5b4: 0x24040070
    ctx->pc = 0x1cd5b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 112));
    // 0x1cd5b8: 0xc06878c
    ctx->pc = 0x1CD5B8u;
    SET_GPR_U32(ctx, 31, 0x1CD5C0u);
    ctx->pc = 0x1CD5BCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5C0u; }
        else if (ctx->pc != 0x1CD5C0u) { ctx->pc = 0x1CD5C0u; }
    }
    if (ctx->pc != 0x1CD5C0u) { return; }
    ctx->pc = 0x1CD5C0u;
    // 0x1cd5c0: 0x70409628
    ctx->pc = 0x1cd5c0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd5c4: 0x12400003
    ctx->pc = 0x1CD5C4u;
    {
        const bool branch_taken_0x1cd5c4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD5C8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cd5c4) {
            ctx->pc = 0x1CD5D4u;
            goto label_1cd5d4;
        }
    }
    ctx->pc = 0x1CD5CCu;
    // 0x1cd5cc: 0xc073aac
    ctx->pc = 0x1CD5CCu;
    SET_GPR_U32(ctx, 31, 0x1CD5D4u);
    ctx->pc = 0x1CEAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6CClothFv_0x1ceab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5D4u; }
        else if (ctx->pc != 0x1CD5D4u) { ctx->pc = 0x1CD5D4u; }
    }
    if (ctx->pc != 0x1CD5D4u) { return; }
    ctx->pc = 0x1CD5D4u;
label_1cd5d4:
    // 0x1cd5d4: 0xae120008
    ctx->pc = 0x1cd5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1cd5d8: 0x8e040008
    ctx->pc = 0x1cd5d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd5dc: 0x24050010
    ctx->pc = 0x1cd5dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cd5e0: 0x2406000f
    ctx->pc = 0x1cd5e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cd5e4: 0xc073afc
    ctx->pc = 0x1CD5E4u;
    SET_GPR_U32(ctx, 31, 0x1CD5ECu);
    ctx->pc = 0x1CD5E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 480));
    ctx->pc = 0x1CEBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init0__6CClothFiii_0x1cebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5ECu; }
        else if (ctx->pc != 0x1CD5ECu) { ctx->pc = 0x1CD5ECu; }
    }
    if (ctx->pc != 0x1CD5ECu) { return; }
    ctx->pc = 0x1CD5ECu;
    // 0x1cd5ec: 0x8e040008
    ctx->pc = 0x1cd5ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd5f0: 0xc073b28
    ctx->pc = 0x1CD5F0u;
    SET_GPR_U32(ctx, 31, 0x1CD5F8u);
    ctx->pc = 0x1CD5F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x1CECA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setType__6CClothFs_0x1ceca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5F8u; }
        else if (ctx->pc != 0x1CD5F8u) { ctx->pc = 0x1CD5F8u; }
    }
    if (ctx->pc != 0x1CD5F8u) { return; }
    ctx->pc = 0x1CD5F8u;
    // 0x1cd5f8: 0x8e040008
    ctx->pc = 0x1cd5f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd5fc: 0x24060001
    ctx->pc = 0x1cd5fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd600: 0x72202e28
    ctx->pc = 0x1cd600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1cd604: 0xc073b30
    ctx->pc = 0x1CD604u;
    SET_GPR_U32(ctx, 31, 0x1CD60Cu);
    ctx->pc = 0x1CD608u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CECC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setWeightTbl2__6CClothFPcii_0x1cecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD60Cu; }
        else if (ctx->pc != 0x1CD60Cu) { ctx->pc = 0x1CD60Cu; }
    }
    if (ctx->pc != 0x1CD60Cu) { return; }
    ctx->pc = 0x1CD60Cu;
    // 0x1cd60c: 0x8e040008
    ctx->pc = 0x1cd60cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd610: 0x72202e28
    ctx->pc = 0x1cd610u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1cd614: 0xc073b40
    ctx->pc = 0x1CD614u;
    SET_GPR_U32(ctx, 31, 0x1CD61Cu);
    ctx->pc = 0x1CD618u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CED00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTbl2__6CClothFPci_0x1ced00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD61Cu; }
        else if (ctx->pc != 0x1CD61Cu) { ctx->pc = 0x1CD61Cu; }
    }
    if (ctx->pc != 0x1CD61Cu) { return; }
    ctx->pc = 0x1CD61Cu;
    // 0x1cd61c: 0x8e040008
    ctx->pc = 0x1cd61cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd620: 0x70002e28
    ctx->pc = 0x1cd620u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd624: 0x70003628
    ctx->pc = 0x1cd624u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd628: 0x70003e28
    ctx->pc = 0x1cd628u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd62c: 0x70004628
    ctx->pc = 0x1cd62cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd630: 0xc073b50
    ctx->pc = 0x1CD630u;
    SET_GPR_U32(ctx, 31, 0x1CD638u);
    ctx->pc = 0x1CD634u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CED40u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTunagimeTbl__6CClothFPiiPiiPi_0x1ced40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD638u; }
        else if (ctx->pc != 0x1CD638u) { ctx->pc = 0x1CD638u; }
    }
    if (ctx->pc != 0x1CD638u) { return; }
    ctx->pc = 0x1CD638u;
    // 0x1cd638: 0x3c010050
    ctx->pc = 0x1cd638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cd63c: 0x8c22f2e4
    ctx->pc = 0x1cd63cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294963940)));
    // 0x1cd640: 0x8c4500cc
    ctx->pc = 0x1cd640u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1cd644: 0xc0749e0
    ctx->pc = 0x1CD644u;
    SET_GPR_U32(ctx, 31, 0x1CD64Cu);
    ctx->pc = 0x1CD648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1D2780u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPol__6CClothFPi_0x1d2780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD64Cu; }
        else if (ctx->pc != 0x1CD64Cu) { ctx->pc = 0x1CD64Cu; }
    }
    if (ctx->pc != 0x1CD64Cu) { return; }
    ctx->pc = 0x1CD64Cu;
    // 0x1cd64c: 0x3c023e99
    ctx->pc = 0x1cd64cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
    // 0x1cd650: 0x3442999a
    ctx->pc = 0x1cd650u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1cd654: 0x44826000
    ctx->pc = 0x1cd654u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1cd658: 0xc073b20
    ctx->pc = 0x1CD658u;
    SET_GPR_U32(ctx, 31, 0x1CD660u);
    ctx->pc = 0x1CD65Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1CEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVelMax__6CClothFf_0x1cec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD660u; }
        else if (ctx->pc != 0x1CD660u) { ctx->pc = 0x1CD660u; }
    }
    if (ctx->pc != 0x1CD660u) { return; }
    ctx->pc = 0x1CD660u;
    // 0x1cd660: 0xc074948
    ctx->pc = 0x1CD660u;
    SET_GPR_U32(ctx, 31, 0x1CD668u);
    ctx->pc = 0x1CD664u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD668u; }
        else if (ctx->pc != 0x1CD668u) { ctx->pc = 0x1CD668u; }
    }
    if (ctx->pc != 0x1CD668u) { return; }
    ctx->pc = 0x1CD668u;
    // 0x1cd668: 0x3c010050
    ctx->pc = 0x1cd668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cd66c: 0x8c23f2e4
    ctx->pc = 0x1cd66cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294963940)));
    // 0x1cd670: 0x3c023f80
    ctx->pc = 0x1cd670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1cd674: 0x44826000
    ctx->pc = 0x1cd674u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1cd678: 0xc06a450
    ctx->pc = 0x1CD678u;
    SET_GPR_U32(ctx, 31, 0x1CD680u);
    ctx->pc = 0x1CD67Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 204)));
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD680u; }
        else if (ctx->pc != 0x1CD680u) { ctx->pc = 0x1CD680u; }
    }
    if (ctx->pc != 0x1CD680u) { return; }
    ctx->pc = 0x1CD680u;
    // 0x1cd680: 0x8f848c48
    ctx->pc = 0x1cd680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cd684: 0x24030123
    ctx->pc = 0x1cd684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 291));
    // 0x1cd688: 0x848400d0
    ctx->pc = 0x1cd688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1cd68c: 0x50830005
    ctx->pc = 0x1CD68Cu;
    {
        const bool branch_taken_0x1cd68c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cd68c) {
            ctx->pc = 0x1CD690u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
            ctx->pc = 0x1CD6A4u;
            goto label_1cd6a4;
        }
    }
    ctx->pc = 0x1CD694u;
    // 0x1cd694: 0x24030122
    ctx->pc = 0x1cd694u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 290));
    // 0x1cd698: 0x14830009
    ctx->pc = 0x1CD698u;
    {
        const bool branch_taken_0x1cd698 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cd698) {
            ctx->pc = 0x1CD6C0u;
            goto label_1cd6c0;
        }
    }
    ctx->pc = 0x1CD6A0u;
    // 0x1cd6a0: 0x27848d4c
    ctx->pc = 0x1cd6a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_1cd6a4:
    // 0x1cd6a4: 0xc07f208
    ctx->pc = 0x1CD6A4u;
    SET_GPR_U32(ctx, 31, 0x1CD6ACu);
    ctx->pc = 0x1CD6A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 295));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6ACu; }
        else if (ctx->pc != 0x1CD6ACu) { ctx->pc = 0x1CD6ACu; }
    }
    if (ctx->pc != 0x1CD6ACu) { return; }
    ctx->pc = 0x1CD6ACu;
    // 0x1cd6ac: 0x8e030008
    ctx->pc = 0x1cd6acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd6b0: 0xac620064
    ctx->pc = 0x1cd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x1cd6b4: 0x8e030008
    ctx->pc = 0x1cd6b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd6b8: 0x100000d4
    ctx->pc = 0x1CD6B8u;
    {
        const bool branch_taken_0x1cd6b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD6BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
        if (branch_taken_0x1cd6b8) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD6C0u;
label_1cd6c0:
    // 0x1cd6c0: 0x8e030008
    ctx->pc = 0x1cd6c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd6c4: 0x100000d1
    ctx->pc = 0x1CD6C4u;
    {
        const bool branch_taken_0x1cd6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD6C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
        if (branch_taken_0x1cd6c4) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD6CCu;
label_1cd6cc:
    // 0x1cd6cc: 0xc06878c
    ctx->pc = 0x1CD6CCu;
    SET_GPR_U32(ctx, 31, 0x1CD6D4u);
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6D4u; }
        else if (ctx->pc != 0x1CD6D4u) { ctx->pc = 0x1CD6D4u; }
    }
    if (ctx->pc != 0x1CD6D4u) { return; }
    ctx->pc = 0x1CD6D4u;
    // 0x1cd6d4: 0x70408e28
    ctx->pc = 0x1cd6d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cd6d8: 0x12200003
    ctx->pc = 0x1CD6D8u;
    {
        const bool branch_taken_0x1cd6d8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD6DCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cd6d8) {
            ctx->pc = 0x1CD6E8u;
            goto label_1cd6e8;
        }
    }
    ctx->pc = 0x1CD6E0u;
    // 0x1cd6e0: 0xc0802d4
    ctx->pc = 0x1CD6E0u;
    SET_GPR_U32(ctx, 31, 0x1CD6E8u);
    ctx->pc = 0x200B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6COsageFv_0x200b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6E8u; }
        else if (ctx->pc != 0x1CD6E8u) { ctx->pc = 0x1CD6E8u; }
    }
    if (ctx->pc != 0x1CD6E8u) { return; }
    ctx->pc = 0x1CD6E8u;
label_1cd6e8:
    // 0x1cd6e8: 0xae110180
    ctx->pc = 0x1cd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 17));
    // 0x1cd6ec: 0xc0802fc
    ctx->pc = 0x1CD6ECu;
    SET_GPR_U32(ctx, 31, 0x1CD6F4u);
    ctx->pc = 0x1CD6F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->pc = 0x200BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6COsageFv_0x200bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6F4u; }
        else if (ctx->pc != 0x1CD6F4u) { ctx->pc = 0x1CD6F4u; }
    }
    if (ctx->pc != 0x1CD6F4u) { return; }
    ctx->pc = 0x1CD6F4u;
    // 0x1cd6f4: 0x100000c5
    ctx->pc = 0x1CD6F4u;
    {
        const bool branch_taken_0x1cd6f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd6f4) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD6FCu;
label_1cd6fc:
    // 0x1cd6fc: 0x8c25f360
    ctx->pc = 0x1cd6fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294964064)));
    // 0x1cd700: 0x3c038000
    ctx->pc = 0x1cd700u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd704: 0xa31824
    ctx->pc = 0x1cd704u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cd708: 0x106000c0
    ctx->pc = 0x1CD708u;
    {
        const bool branch_taken_0x1cd708 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd708) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD710u;
    // 0x1cd710: 0x3c020094
    ctx->pc = 0x1cd710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)148 << 16));
    // 0x1cd714: 0x34450012
    ctx->pc = 0x1cd714u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 18));
    // 0x1cd718: 0x24060005
    ctx->pc = 0x1cd718u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd71c: 0x24070007
    ctx->pc = 0x1cd71cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cd720: 0x24080015
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cd724: 0x24090108
    ctx->pc = 0x1cd724u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 264));
    // 0x1cd728: 0x240a0010
    ctx->pc = 0x1cd728u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cd72c: 0xc073438
    ctx->pc = 0x1CD72Cu;
    SET_GPR_U32(ctx, 31, 0x1CD734u);
    ctx->pc = 0x1CD730u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CD0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSub__9CClothMgrFiiiiiii_0x1cd0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD734u; }
        else if (ctx->pc != 0x1CD734u) { ctx->pc = 0x1CD734u; }
    }
    if (ctx->pc != 0x1CD734u) { return; }
    ctx->pc = 0x1CD734u;
    // 0x1cd734: 0x8e040008
    ctx->pc = 0x1cd734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd738: 0x108000b4
    ctx->pc = 0x1CD738u;
    {
        const bool branch_taken_0x1cd738 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd738) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD740u;
    // 0x1cd740: 0xc074948
    ctx->pc = 0x1CD740u;
    SET_GPR_U32(ctx, 31, 0x1CD748u);
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD748u; }
        else if (ctx->pc != 0x1CD748u) { ctx->pc = 0x1CD748u; }
    }
    if (ctx->pc != 0x1CD748u) { return; }
    ctx->pc = 0x1CD748u;
    // 0x1cd748: 0x100000b0
    ctx->pc = 0x1CD748u;
    {
        const bool branch_taken_0x1cd748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd748) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD750u;
label_1cd750:
    // 0x1cd750: 0x8c25f370
    ctx->pc = 0x1cd750u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294964080)));
    // 0x1cd754: 0x3c038000
    ctx->pc = 0x1cd754u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd758: 0xa31824
    ctx->pc = 0x1cd758u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cd75c: 0x10600015
    ctx->pc = 0x1CD75Cu;
    {
        const bool branch_taken_0x1cd75c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd75c) {
            ctx->pc = 0x1CD7B4u;
            goto label_1cd7b4;
        }
    }
    ctx->pc = 0x1CD764u;
    // 0x1cd764: 0x24020001
    ctx->pc = 0x1cd764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd768: 0x24070006
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cd76c: 0xffa20000
    ctx->pc = 0x1cd76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1cd770: 0x70002e28
    ctx->pc = 0x1cd770u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd774: 0x3c060095
    ctx->pc = 0x1cd774u;
    SET_GPR_U32(ctx, 6, ((uint32_t)149 << 16));
    // 0x1cd778: 0x70e04628
    ctx->pc = 0x1cd778u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cd77c: 0x24090007
    ctx->pc = 0x1cd77cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cd780: 0x240a004e
    ctx->pc = 0x1cd780u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 78));
    // 0x1cd784: 0xc0734bc
    ctx->pc = 0x1CD784u;
    SET_GPR_U32(ctx, 31, 0x1CD78Cu);
    ctx->pc = 0x1CD788u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x1CD2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSubX__9CClothMgrFiiiiiiii_0x1cd2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD78Cu; }
        else if (ctx->pc != 0x1CD78Cu) { ctx->pc = 0x1CD78Cu; }
    }
    if (ctx->pc != 0x1CD78Cu) { return; }
    ctx->pc = 0x1CD78Cu;
    // 0x1cd78c: 0x8e040060
    ctx->pc = 0x1cd78cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd790: 0x1080009e
    ctx->pc = 0x1CD790u;
    {
        const bool branch_taken_0x1cd790 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd790) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD798u;
    // 0x1cd798: 0x3c023fcc
    ctx->pc = 0x1cd798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16332 << 16));
    // 0x1cd79c: 0x3442cccd
    ctx->pc = 0x1cd79cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1cd7a0: 0x44826000
    ctx->pc = 0x1cd7a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1cd7a4: 0xc073b24
    ctx->pc = 0x1CD7A4u;
    SET_GPR_U32(ctx, 31, 0x1CD7ACu);
    ctx->pc = 0x1CEC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVtxDistRate__6CClothFf_0x1cec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7ACu; }
        else if (ctx->pc != 0x1CD7ACu) { ctx->pc = 0x1CD7ACu; }
    }
    if (ctx->pc != 0x1CD7ACu) { return; }
    ctx->pc = 0x1CD7ACu;
    // 0x1cd7ac: 0xc074948
    ctx->pc = 0x1CD7ACu;
    SET_GPR_U32(ctx, 31, 0x1CD7B4u);
    ctx->pc = 0x1CD7B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7B4u; }
        else if (ctx->pc != 0x1CD7B4u) { ctx->pc = 0x1CD7B4u; }
    }
    if (ctx->pc != 0x1CD7B4u) { return; }
    ctx->pc = 0x1CD7B4u;
label_1cd7b4:
    // 0x1cd7b4: 0x3c010050
    ctx->pc = 0x1cd7b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cd7b8: 0x8c24f370
    ctx->pc = 0x1cd7b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294964080)));
    // 0x1cd7bc: 0x3c038000
    ctx->pc = 0x1cd7bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd7c0: 0x831824
    ctx->pc = 0x1cd7c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cd7c4: 0x10600016
    ctx->pc = 0x1CD7C4u;
    {
        const bool branch_taken_0x1cd7c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd7c4) {
            ctx->pc = 0x1CD820u;
            goto label_1cd820;
        }
    }
    ctx->pc = 0x1CD7CCu;
    // 0x1cd7cc: 0x24050001
    ctx->pc = 0x1cd7ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd7d0: 0x3c020095
    ctx->pc = 0x1cd7d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)149 << 16));
    // 0x1cd7d4: 0xffa50000
    ctx->pc = 0x1cd7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x1cd7d8: 0x72002628
    ctx->pc = 0x1cd7d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cd7dc: 0x34460005
    ctx->pc = 0x1cd7dcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 5));
    // 0x1cd7e0: 0x24070008
    ctx->pc = 0x1cd7e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cd7e4: 0x24080006
    ctx->pc = 0x1cd7e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cd7e8: 0x24090003
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd7ec: 0x240a0026
    ctx->pc = 0x1cd7ecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 38));
    // 0x1cd7f0: 0xc0734bc
    ctx->pc = 0x1CD7F0u;
    SET_GPR_U32(ctx, 31, 0x1CD7F8u);
    ctx->pc = 0x1CD7F4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x1CD2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSubX__9CClothMgrFiiiiiiii_0x1cd2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7F8u; }
        else if (ctx->pc != 0x1CD7F8u) { ctx->pc = 0x1CD7F8u; }
    }
    if (ctx->pc != 0x1CD7F8u) { return; }
    ctx->pc = 0x1CD7F8u;
    // 0x1cd7f8: 0x8e040064
    ctx->pc = 0x1cd7f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cd7fc: 0x10800083
    ctx->pc = 0x1CD7FCu;
    {
        const bool branch_taken_0x1cd7fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd7fc) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD804u;
    // 0x1cd804: 0x3c023fcc
    ctx->pc = 0x1cd804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16332 << 16));
    // 0x1cd808: 0x3442cccd
    ctx->pc = 0x1cd808u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1cd80c: 0x44826000
    ctx->pc = 0x1cd80cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1cd810: 0xc073b24
    ctx->pc = 0x1CD810u;
    SET_GPR_U32(ctx, 31, 0x1CD818u);
    ctx->pc = 0x1CEC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVtxDistRate__6CClothFf_0x1cec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD818u; }
        else if (ctx->pc != 0x1CD818u) { ctx->pc = 0x1CD818u; }
    }
    if (ctx->pc != 0x1CD818u) { return; }
    ctx->pc = 0x1CD818u;
    // 0x1cd818: 0xc074948
    ctx->pc = 0x1CD818u;
    SET_GPR_U32(ctx, 31, 0x1CD820u);
    ctx->pc = 0x1CD81Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD820u; }
        else if (ctx->pc != 0x1CD820u) { ctx->pc = 0x1CD820u; }
    }
    if (ctx->pc != 0x1CD820u) { return; }
    ctx->pc = 0x1CD820u;
label_1cd820:
    // 0x1cd820: 0x3c010050
    ctx->pc = 0x1cd820u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cd824: 0x8c24f370
    ctx->pc = 0x1cd824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294964080)));
    // 0x1cd828: 0x3c038000
    ctx->pc = 0x1cd828u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd82c: 0x831824
    ctx->pc = 0x1cd82cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cd830: 0x10600017
    ctx->pc = 0x1CD830u;
    {
        const bool branch_taken_0x1cd830 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd830) {
            ctx->pc = 0x1CD890u;
            goto label_1cd890;
        }
    }
    ctx->pc = 0x1CD838u;
    // 0x1cd838: 0x24020001
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd83c: 0xffa20000
    ctx->pc = 0x1cd83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1cd840: 0x3c020095
    ctx->pc = 0x1cd840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)149 << 16));
    // 0x1cd844: 0x72002628
    ctx->pc = 0x1cd844u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cd848: 0x24050002
    ctx->pc = 0x1cd848u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd84c: 0x3446000a
    ctx->pc = 0x1cd84cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 10));
    // 0x1cd850: 0x24070009
    ctx->pc = 0x1cd850u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd854: 0x24080006
    ctx->pc = 0x1cd854u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cd858: 0x24090003
    ctx->pc = 0x1cd858u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd85c: 0x240a0024
    ctx->pc = 0x1cd85cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 36));
    // 0x1cd860: 0xc0734bc
    ctx->pc = 0x1CD860u;
    SET_GPR_U32(ctx, 31, 0x1CD868u);
    ctx->pc = 0x1CD864u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x1CD2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSubX__9CClothMgrFiiiiiiii_0x1cd2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD868u; }
        else if (ctx->pc != 0x1CD868u) { ctx->pc = 0x1CD868u; }
    }
    if (ctx->pc != 0x1CD868u) { return; }
    ctx->pc = 0x1CD868u;
    // 0x1cd868: 0x8e040068
    ctx->pc = 0x1cd868u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cd86c: 0x10800067
    ctx->pc = 0x1CD86Cu;
    {
        const bool branch_taken_0x1cd86c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd86c) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD874u;
    // 0x1cd874: 0x3c023fcc
    ctx->pc = 0x1cd874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16332 << 16));
    // 0x1cd878: 0x3442cccd
    ctx->pc = 0x1cd878u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1cd87c: 0x44826000
    ctx->pc = 0x1cd87cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1cd880: 0xc073b24
    ctx->pc = 0x1CD880u;
    SET_GPR_U32(ctx, 31, 0x1CD888u);
    ctx->pc = 0x1CEC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVtxDistRate__6CClothFf_0x1cec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD888u; }
        else if (ctx->pc != 0x1CD888u) { ctx->pc = 0x1CD888u; }
    }
    if (ctx->pc != 0x1CD888u) { return; }
    ctx->pc = 0x1CD888u;
    // 0x1cd888: 0xc074948
    ctx->pc = 0x1CD888u;
    SET_GPR_U32(ctx, 31, 0x1CD890u);
    ctx->pc = 0x1CD88Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD890u; }
        else if (ctx->pc != 0x1CD890u) { ctx->pc = 0x1CD890u; }
    }
    if (ctx->pc != 0x1CD890u) { return; }
    ctx->pc = 0x1CD890u;
label_1cd890:
    // 0x1cd890: 0x3c010050
    ctx->pc = 0x1cd890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cd894: 0x8c24f370
    ctx->pc = 0x1cd894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294964080)));
    // 0x1cd898: 0x3c038000
    ctx->pc = 0x1cd898u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd89c: 0x831824
    ctx->pc = 0x1cd89cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cd8a0: 0x1060005a
    ctx->pc = 0x1CD8A0u;
    {
        const bool branch_taken_0x1cd8a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd8a0) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD8A8u;
    // 0x1cd8a8: 0x2402000f
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cd8ac: 0xffa20000
    ctx->pc = 0x1cd8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1cd8b0: 0x3c020095
    ctx->pc = 0x1cd8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)149 << 16));
    // 0x1cd8b4: 0x24080007
    ctx->pc = 0x1cd8b4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cd8b8: 0x72002628
    ctx->pc = 0x1cd8b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cd8bc: 0x24050003
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd8c0: 0x3446001d
    ctx->pc = 0x1cd8c0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 29));
    // 0x1cd8c4: 0x2407000a
    ctx->pc = 0x1cd8c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd8c8: 0x71004e28
    ctx->pc = 0x1cd8c8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cd8cc: 0x240a0062
    ctx->pc = 0x1cd8ccu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 98));
    // 0x1cd8d0: 0xc0734bc
    ctx->pc = 0x1CD8D0u;
    SET_GPR_U32(ctx, 31, 0x1CD8D8u);
    ctx->pc = 0x1CD8D4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 18));
    ctx->pc = 0x1CD2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSubX__9CClothMgrFiiiiiiii_0x1cd2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D8u; }
        else if (ctx->pc != 0x1CD8D8u) { ctx->pc = 0x1CD8D8u; }
    }
    if (ctx->pc != 0x1CD8D8u) { return; }
    ctx->pc = 0x1CD8D8u;
    // 0x1cd8d8: 0x8e04006c
    ctx->pc = 0x1cd8d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cd8dc: 0x1080004b
    ctx->pc = 0x1CD8DCu;
    {
        const bool branch_taken_0x1cd8dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd8dc) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD8E4u;
    // 0x1cd8e4: 0x3c023fcc
    ctx->pc = 0x1cd8e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16332 << 16));
    // 0x1cd8e8: 0x3442cccd
    ctx->pc = 0x1cd8e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1cd8ec: 0x44826000
    ctx->pc = 0x1cd8ecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1cd8f0: 0xc073b24
    ctx->pc = 0x1CD8F0u;
    SET_GPR_U32(ctx, 31, 0x1CD8F8u);
    ctx->pc = 0x1CEC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVtxDistRate__6CClothFf_0x1cec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8F8u; }
        else if (ctx->pc != 0x1CD8F8u) { ctx->pc = 0x1CD8F8u; }
    }
    if (ctx->pc != 0x1CD8F8u) { return; }
    ctx->pc = 0x1CD8F8u;
    // 0x1cd8f8: 0xc074948
    ctx->pc = 0x1CD8F8u;
    SET_GPR_U32(ctx, 31, 0x1CD900u);
    ctx->pc = 0x1CD8FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD900u; }
        else if (ctx->pc != 0x1CD900u) { ctx->pc = 0x1CD900u; }
    }
    if (ctx->pc != 0x1CD900u) { return; }
    ctx->pc = 0x1CD900u;
    // 0x1cd900: 0x10000042
    ctx->pc = 0x1CD900u;
    {
        const bool branch_taken_0x1cd900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd900) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD908u;
label_1cd908:
    // 0x1cd908: 0x8c25f380
    ctx->pc = 0x1cd908u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294964096)));
    // 0x1cd90c: 0x3c038000
    ctx->pc = 0x1cd90cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd910: 0xa31824
    ctx->pc = 0x1cd910u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cd914: 0x1060003d
    ctx->pc = 0x1CD914u;
    {
        const bool branch_taken_0x1cd914 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd914) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD91Cu;
    // 0x1cd91c: 0x3c020096
    ctx->pc = 0x1cd91cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)150 << 16));
    // 0x1cd920: 0x3445000f
    ctx->pc = 0x1cd920u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 15));
    // 0x1cd924: 0x2406000c
    ctx->pc = 0x1cd924u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd928: 0x2407000b
    ctx->pc = 0x1cd928u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd92c: 0x2408000f
    ctx->pc = 0x1cd92cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cd930: 0x2409014c
    ctx->pc = 0x1cd930u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 332));
    // 0x1cd934: 0xc073438
    ctx->pc = 0x1CD934u;
    SET_GPR_U32(ctx, 31, 0x1CD93Cu);
    ctx->pc = 0x1CD938u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CD0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSub__9CClothMgrFiiiiiii_0x1cd0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD93Cu; }
        else if (ctx->pc != 0x1CD93Cu) { ctx->pc = 0x1CD93Cu; }
    }
    if (ctx->pc != 0x1CD93Cu) { return; }
    ctx->pc = 0x1CD93Cu;
    // 0x1cd93c: 0x8e040008
    ctx->pc = 0x1cd93cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cd940: 0x10800032
    ctx->pc = 0x1CD940u;
    {
        const bool branch_taken_0x1cd940 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd940) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD948u;
    // 0x1cd948: 0xc074948
    ctx->pc = 0x1CD948u;
    SET_GPR_U32(ctx, 31, 0x1CD950u);
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD950u; }
        else if (ctx->pc != 0x1CD950u) { ctx->pc = 0x1CD950u; }
    }
    if (ctx->pc != 0x1CD950u) { return; }
    ctx->pc = 0x1CD950u;
    // 0x1cd950: 0x1000002e
    ctx->pc = 0x1CD950u;
    {
        const bool branch_taken_0x1cd950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd950) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD958u;
label_1cd958:
    // 0x1cd958: 0x3c010050
    ctx->pc = 0x1cd958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cd95c: 0x8c25f310
    ctx->pc = 0x1cd95cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294963984)));
    // 0x1cd960: 0x3c038000
    ctx->pc = 0x1cd960u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd964: 0xa31824
    ctx->pc = 0x1cd964u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cd968: 0x10600011
    ctx->pc = 0x1CD968u;
    {
        const bool branch_taken_0x1cd968 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd968) {
            ctx->pc = 0x1CD9B0u;
            goto label_1cd9b0;
        }
    }
    ctx->pc = 0x1CD970u;
    // 0x1cd970: 0x24020002
    ctx->pc = 0x1cd970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd974: 0xffa20000
    ctx->pc = 0x1cd974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1cd978: 0x3c02008f
    ctx->pc = 0x1cd978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)143 << 16));
    // 0x1cd97c: 0x70002e28
    ctx->pc = 0x1cd97cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cd980: 0x34460005
    ctx->pc = 0x1cd980u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 5));
    // 0x1cd984: 0x2407000d
    ctx->pc = 0x1cd984u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cd988: 0x24080008
    ctx->pc = 0x1cd988u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cd98c: 0x24090005
    ctx->pc = 0x1cd98cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd990: 0x240a0048
    ctx->pc = 0x1cd990u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cd994: 0xc0734bc
    ctx->pc = 0x1CD994u;
    SET_GPR_U32(ctx, 31, 0x1CD99Cu);
    ctx->pc = 0x1CD998u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x1CD2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSubX__9CClothMgrFiiiiiiii_0x1cd2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD99Cu; }
        else if (ctx->pc != 0x1CD99Cu) { ctx->pc = 0x1CD99Cu; }
    }
    if (ctx->pc != 0x1CD99Cu) { return; }
    ctx->pc = 0x1CD99Cu;
    // 0x1cd99c: 0x8e040060
    ctx->pc = 0x1cd99cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd9a0: 0x1080001a
    ctx->pc = 0x1CD9A0u;
    {
        const bool branch_taken_0x1cd9a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd9a0) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD9A8u;
    // 0x1cd9a8: 0xc074948
    ctx->pc = 0x1CD9A8u;
    SET_GPR_U32(ctx, 31, 0x1CD9B0u);
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9B0u; }
        else if (ctx->pc != 0x1CD9B0u) { ctx->pc = 0x1CD9B0u; }
    }
    if (ctx->pc != 0x1CD9B0u) { return; }
    ctx->pc = 0x1CD9B0u;
label_1cd9b0:
    // 0x1cd9b0: 0x3c010050
    ctx->pc = 0x1cd9b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cd9b4: 0x8c24f310
    ctx->pc = 0x1cd9b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294963984)));
    // 0x1cd9b8: 0x3c038000
    ctx->pc = 0x1cd9b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cd9bc: 0x831824
    ctx->pc = 0x1cd9bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cd9c0: 0x10600012
    ctx->pc = 0x1CD9C0u;
    {
        const bool branch_taken_0x1cd9c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd9c0) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CD9C8u;
    // 0x1cd9c8: 0x24020002
    ctx->pc = 0x1cd9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd9cc: 0xffa20000
    ctx->pc = 0x1cd9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1cd9d0: 0x3c02008f
    ctx->pc = 0x1cd9d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)143 << 16));
    // 0x1cd9d4: 0x72002628
    ctx->pc = 0x1cd9d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cd9d8: 0x24050001
    ctx->pc = 0x1cd9d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd9dc: 0x34460006
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 6));
    // 0x1cd9e0: 0x2407000e
    ctx->pc = 0x1cd9e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cd9e4: 0x24080008
    ctx->pc = 0x1cd9e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cd9e8: 0x24090005
    ctx->pc = 0x1cd9e8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd9ec: 0x240a0048
    ctx->pc = 0x1cd9ecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cd9f0: 0xc0734bc
    ctx->pc = 0x1CD9F0u;
    SET_GPR_U32(ctx, 31, 0x1CD9F8u);
    ctx->pc = 0x1CD9F4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x1CD2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSubX__9CClothMgrFiiiiiiii_0x1cd2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9F8u; }
        else if (ctx->pc != 0x1CD9F8u) { ctx->pc = 0x1CD9F8u; }
    }
    if (ctx->pc != 0x1CD9F8u) { return; }
    ctx->pc = 0x1CD9F8u;
    // 0x1cd9f8: 0x8e040064
    ctx->pc = 0x1cd9f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cd9fc: 0x10800003
    ctx->pc = 0x1CD9FCu;
    {
        const bool branch_taken_0x1cd9fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cd9fc) {
            ctx->pc = 0x1CDA0Cu;
            goto label_1cda0c;
        }
    }
    ctx->pc = 0x1CDA04u;
    // 0x1cda04: 0xc074948
    ctx->pc = 0x1CDA04u;
    SET_GPR_U32(ctx, 31, 0x1CDA0Cu);
    ctx->pc = 0x1D2520u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__6CClothFv_0x1d2520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA0Cu; }
        else if (ctx->pc != 0x1CDA0Cu) { ctx->pc = 0x1CDA0Cu; }
    }
    if (ctx->pc != 0x1CDA0Cu) { return; }
    ctx->pc = 0x1CDA0Cu;
label_1cda0c:
    // 0x1cda0c: 0x7bbf0040
    ctx->pc = 0x1cda0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cda10:
    // 0x1cda10: 0x7bb20030
    ctx->pc = 0x1cda10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cda14: 0x7bb10020
    ctx->pc = 0x1cda14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cda18: 0x7bb00010
    ctx->pc = 0x1cda18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cda1c: 0x3e00008
    ctx->pc = 0x1CDA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD504u: goto label_1cd504;
            case 0x1CD558u: goto label_1cd558;
            case 0x1CD5B4u: goto label_1cd5b4;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD6A4u: goto label_1cd6a4;
            case 0x1CD6C0u: goto label_1cd6c0;
            case 0x1CD6CCu: goto label_1cd6cc;
            case 0x1CD6E8u: goto label_1cd6e8;
            case 0x1CD6FCu: goto label_1cd6fc;
            case 0x1CD750u: goto label_1cd750;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD820u: goto label_1cd820;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD908u: goto label_1cd908;
            case 0x1CD958u: goto label_1cd958;
            case 0x1CD9B0u: goto label_1cd9b0;
            case 0x1CDA0Cu: goto label_1cda0c;
            case 0x1CDA10u: goto label_1cda10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDA24u;
}
