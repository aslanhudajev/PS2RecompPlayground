#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_players_sub
// Address: 0x22e860 - 0x22eecc
void reset_players_sub_0x22e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22e860u;

    // 0x22e860: 0x27bdff60
    ctx->pc = 0x22e860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22e864: 0xffbf0090
    ctx->pc = 0x22e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22e868: 0xffbe0080
    ctx->pc = 0x22e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x22e86c: 0xffb70070
    ctx->pc = 0x22e86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22e870: 0xffb60060
    ctx->pc = 0x22e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22e874: 0xffb50050
    ctx->pc = 0x22e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22e878: 0xffb40040
    ctx->pc = 0x22e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22e87c: 0xffb30030
    ctx->pc = 0x22e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22e880: 0xffb20020
    ctx->pc = 0x22e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22e884: 0xffb10010
    ctx->pc = 0x22e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22e888: 0xffb00000
    ctx->pc = 0x22e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e88c: 0x80a02d
    ctx->pc = 0x22e88cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e890: 0x3c020032
    ctx->pc = 0x22e890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22e894: 0x244215d0
    ctx->pc = 0x22e894u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
    // 0x22e898: 0x149040
    ctx->pc = 0x22e898u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 20), 1));
    // 0x22e89c: 0x2429021
    ctx->pc = 0x22e89cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22e8a0: 0x202d
    ctx->pc = 0x22e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8a4: 0x282d
    ctx->pc = 0x22e8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8a8: 0x96460000
    ctx->pc = 0x22e8a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e8ac: 0x24070130
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 304));
    // 0x22e8b0: 0x24080080
    ctx->pc = 0x22e8b0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e8b4: 0xc0b0b54
    ctx->pc = 0x22E8B4u;
    SET_GPR_U32(ctx, 31, 0x22E8BCu);
    ctx->pc = 0x22E8B8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8BCu; }
    }
    if (ctx->pc != 0x22E8BCu) { return; }
    ctx->pc = 0x22E8BCu;
    // 0x22e8bc: 0x3c100033
    ctx->pc = 0x22e8bcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x22e8c0: 0x2610c908
    ctx->pc = 0x22e8c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953224));
    // 0x22e8c4: 0x24110018
    ctx->pc = 0x22e8c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22e8c8: 0x2918818
    ctx->pc = 0x22e8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e8cc: 0x2301821
    ctx->pc = 0x22e8ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22e8d0: 0xac620000
    ctx->pc = 0x22e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22e8d4: 0x202d
    ctx->pc = 0x22e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8d8: 0x282d
    ctx->pc = 0x22e8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8dc: 0x96460000
    ctx->pc = 0x22e8dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e8e0: 0x24070140
    ctx->pc = 0x22e8e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 320));
    // 0x22e8e4: 0x24080080
    ctx->pc = 0x22e8e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e8e8: 0xc0b0b54
    ctx->pc = 0x22E8E8u;
    SET_GPR_U32(ctx, 31, 0x22E8F0u);
    ctx->pc = 0x22E8ECu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E8F0u; }
    }
    if (ctx->pc != 0x22E8F0u) { return; }
    ctx->pc = 0x22E8F0u;
    // 0x22e8f0: 0x2111821
    ctx->pc = 0x22e8f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e8f4: 0xac620004
    ctx->pc = 0x22e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22e8f8: 0x202d
    ctx->pc = 0x22e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8fc: 0x282d
    ctx->pc = 0x22e8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e900: 0x96460000
    ctx->pc = 0x22e900u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e904: 0x24070140
    ctx->pc = 0x22e904u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 320));
    // 0x22e908: 0x24080080
    ctx->pc = 0x22e908u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e90c: 0xc0b0b54
    ctx->pc = 0x22E90Cu;
    SET_GPR_U32(ctx, 31, 0x22E914u);
    ctx->pc = 0x22E910u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E914u; }
    }
    if (ctx->pc != 0x22E914u) { return; }
    ctx->pc = 0x22E914u;
    // 0x22e914: 0x2111821
    ctx->pc = 0x22e914u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e918: 0xac620008
    ctx->pc = 0x22e918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x22e91c: 0x202d
    ctx->pc = 0x22e91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e920: 0x282d
    ctx->pc = 0x22e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e924: 0x96460000
    ctx->pc = 0x22e924u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e928: 0x24070158
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 344));
    // 0x22e92c: 0x24080094
    ctx->pc = 0x22e92cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 148));
    // 0x22e930: 0xc0b0b54
    ctx->pc = 0x22E930u;
    SET_GPR_U32(ctx, 31, 0x22E938u);
    ctx->pc = 0x22E934u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E938u; }
    }
    if (ctx->pc != 0x22E938u) { return; }
    ctx->pc = 0x22E938u;
    // 0x22e938: 0x2111821
    ctx->pc = 0x22e938u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e93c: 0xac62000c
    ctx->pc = 0x22e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x22e940: 0x96460000
    ctx->pc = 0x22e940u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e944: 0x202d
    ctx->pc = 0x22e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e948: 0x282d
    ctx->pc = 0x22e948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e94c: 0x24c60008
    ctx->pc = 0x22e94cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x22e950: 0x24070148
    ctx->pc = 0x22e950u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 328));
    // 0x22e954: 0x24080014
    ctx->pc = 0x22e954u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x22e958: 0xc0b0b54
    ctx->pc = 0x22E958u;
    SET_GPR_U32(ctx, 31, 0x22E960u);
    ctx->pc = 0x22E95Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E960u; }
    }
    if (ctx->pc != 0x22E960u) { return; }
    ctx->pc = 0x22E960u;
    // 0x22e960: 0x2111821
    ctx->pc = 0x22e960u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e964: 0xac620010
    ctx->pc = 0x22e964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x22e968: 0x202d
    ctx->pc = 0x22e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e96c: 0x282d
    ctx->pc = 0x22e96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e970: 0x96460000
    ctx->pc = 0x22e970u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e974: 0x24070148
    ctx->pc = 0x22e974u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 328));
    // 0x22e978: 0x24080014
    ctx->pc = 0x22e978u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x22e97c: 0xc0b0b54
    ctx->pc = 0x22E97Cu;
    SET_GPR_U32(ctx, 31, 0x22E984u);
    ctx->pc = 0x22E980u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E984u; }
    }
    if (ctx->pc != 0x22E984u) { return; }
    ctx->pc = 0x22E984u;
    // 0x22e984: 0x2118021
    ctx->pc = 0x22e984u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e988: 0xae020014
    ctx->pc = 0x22e988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x22e98c: 0x902d
    ctx->pc = 0x22e98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e990: 0x3c020033
    ctx->pc = 0x22e990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e994: 0x2453c908
    ctx->pc = 0x22e994u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953224));
    // 0x22e998: 0x24020018
    ctx->pc = 0x22e998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22e99c: 0x2828818
    ctx->pc = 0x22e99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e9a0: 0x128080
    ctx->pc = 0x22e9a0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x22e9a4: 0x0
    ctx->pc = 0x22e9a4u;
    // NOP
label_22e9a8:
    // 0x22e9a8: 0x2118021
    ctx->pc = 0x22e9a8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22e9ac: 0x2138021
    ctx->pc = 0x22e9acu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x22e9b0: 0x8e040000
    ctx->pc = 0x22e9b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e9b4: 0xc0b0ce8
    ctx->pc = 0x22E9B4u;
    SET_GPR_U32(ctx, 31, 0x22E9BCu);
    ctx->pc = 0x22E9B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9BCu; }
    }
    if (ctx->pc != 0x22E9BCu) { return; }
    ctx->pc = 0x22E9BCu;
    // 0x22e9bc: 0x3c01477a
    ctx->pc = 0x22e9bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x22e9c0: 0x44816000
    ctx->pc = 0x22e9c0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22e9c4: 0xc0b0dd6
    ctx->pc = 0x22E9C4u;
    SET_GPR_U32(ctx, 31, 0x22E9CCu);
    ctx->pc = 0x22E9C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E9CCu; }
    }
    if (ctx->pc != 0x22E9CCu) { return; }
    ctx->pc = 0x22E9CCu;
    // 0x22e9cc: 0x26520001
    ctx->pc = 0x22e9ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x22e9d0: 0x2a420006
    ctx->pc = 0x22e9d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 6));
    // 0x22e9d4: 0x1440fff4
    ctx->pc = 0x22E9D4u;
    {
        const bool branch_taken_0x22e9d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22E9D8u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x22e9d4) {
            ctx->pc = 0x22E9A8u;
            goto label_22e9a8;
        }
    }
    ctx->pc = 0x22E9DCu;
    // 0x22e9dc: 0x902d
    ctx->pc = 0x22e9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9e0: 0x3c02003c
    ctx->pc = 0x22e9e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22e9e4: 0x24531b48
    ctx->pc = 0x22e9e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 6984));
    // 0x22e9e8: 0x24110003
    ctx->pc = 0x22e9e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e9ec: 0x3c020032
    ctx->pc = 0x22e9ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22e9f0: 0x245e1658
    ctx->pc = 0x22e9f0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 5720));
    // 0x22e9f4: 0x3c020032
    ctx->pc = 0x22e9f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22e9f8: 0x244215d0
    ctx->pc = 0x22e9f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
    // 0x22e9fc: 0x141840
    ctx->pc = 0x22e9fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 1));
    // 0x22ea00: 0x62b021
    ctx->pc = 0x22ea00u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ea04: 0x3c020033
    ctx->pc = 0x22ea04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22ea08: 0x2457c968
    ctx->pc = 0x22ea08u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294953320));
    // 0x22ea0c: 0x24020030
    ctx->pc = 0x22ea0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x22ea10: 0x282a818
    ctx->pc = 0x22ea10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ea14: 0x3c05003a
    ctx->pc = 0x22ea14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_22ea18:
    // 0x22ea18: 0x251001a
    ctx->pc = 0x22ea18u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x22ea1c: 0x8012
    ctx->pc = 0x22ea1cu;
    SET_GPR_U32(ctx, 16, ctx->lo);
    // 0x22ea20: 0x3810
    ctx->pc = 0x22ea20u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x22ea24: 0x52200001
    ctx->pc = 0x22EA24u;
    {
        const bool branch_taken_0x22ea24 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x22ea24) {
            ctx->pc = 0x22EA28u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x22EA2Cu;
            goto label_22ea2c;
        }
    }
    ctx->pc = 0x22EA2Cu;
label_22ea2c:
    // 0x22ea2c: 0x103080
    ctx->pc = 0x22ea2cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 16), 2));
    // 0x22ea30: 0x52200001
    ctx->pc = 0x22EA30u;
    {
        const bool branch_taken_0x22ea30 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x22ea30) {
            ctx->pc = 0x22EA34u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x22EA38u;
            goto label_22ea38;
        }
    }
    ctx->pc = 0x22EA38u;
label_22ea38:
    // 0x22ea38: 0x260202d
    ctx->pc = 0x22ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea3c: 0x24a57648
    ctx->pc = 0x22ea3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30280));
    // 0x22ea40: 0xde3021
    ctx->pc = 0x22ea40u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x22ea44: 0xc0b6252
    ctx->pc = 0x22EA44u;
    SET_GPR_U32(ctx, 31, 0x22EA4Cu);
    ctx->pc = 0x22EA48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA4Cu; }
    }
    if (ctx->pc != 0x22EA4Cu) { return; }
    ctx->pc = 0x22EA4Cu;
    // 0x22ea4c: 0x260202d
    ctx->pc = 0x22ea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea50: 0x282d
    ctx->pc = 0x22ea50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea54: 0xc0b1ba8
    ctx->pc = 0x22EA54u;
    SET_GPR_U32(ctx, 31, 0x22EA5Cu);
    ctx->pc = 0x22EA58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA5Cu; }
    }
    if (ctx->pc != 0x22EA5Cu) { return; }
    ctx->pc = 0x22EA5Cu;
    // 0x22ea5c: 0x96c60000
    ctx->pc = 0x22ea5cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22ea60: 0x1218c0
    ctx->pc = 0x22ea60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 3));
    // 0x22ea64: 0x2463000f
    ctx->pc = 0x22ea64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x22ea68: 0xc33021
    ctx->pc = 0x22ea68u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22ea6c: 0x52200001
    ctx->pc = 0x22EA6Cu;
    {
        const bool branch_taken_0x22ea6c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x22ea6c) {
            ctx->pc = 0x22EA70u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x22EA74u;
            goto label_22ea74;
        }
    }
    ctx->pc = 0x22EA74u;
label_22ea74:
    // 0x22ea74: 0x202d
    ctx->pc = 0x22ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea78: 0x40282d
    ctx->pc = 0x22ea78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea7c: 0xd03021
    ctx->pc = 0x22ea7cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x22ea80: 0x24020130
    ctx->pc = 0x22ea80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
    // 0x22ea84: 0x24470002
    ctx->pc = 0x22ea84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 2));
    // 0x22ea88: 0x2408ffff
    ctx->pc = 0x22ea88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ea8c: 0xc0b0b54
    ctx->pc = 0x22EA8Cu;
    SET_GPR_U32(ctx, 31, 0x22EA94u);
    ctx->pc = 0x22EA90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA94u; }
    }
    if (ctx->pc != 0x22EA94u) { return; }
    ctx->pc = 0x22EA94u;
    // 0x22ea94: 0x128080
    ctx->pc = 0x22ea94u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x22ea98: 0x2158021
    ctx->pc = 0x22ea98u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x22ea9c: 0x2178021
    ctx->pc = 0x22ea9cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x22eaa0: 0xae020000
    ctx->pc = 0x22eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22eaa4: 0x40202d
    ctx->pc = 0x22eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eaa8: 0xc0b0ce8
    ctx->pc = 0x22EAA8u;
    SET_GPR_U32(ctx, 31, 0x22EAB0u);
    ctx->pc = 0x22EAACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EAB0u; }
    }
    if (ctx->pc != 0x22EAB0u) { return; }
    ctx->pc = 0x22EAB0u;
    // 0x22eab0: 0x3c01477a
    ctx->pc = 0x22eab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x22eab4: 0x44816000
    ctx->pc = 0x22eab4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22eab8: 0xc0b0dd6
    ctx->pc = 0x22EAB8u;
    SET_GPR_U32(ctx, 31, 0x22EAC0u);
    ctx->pc = 0x22EABCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EAC0u; }
    }
    if (ctx->pc != 0x22EAC0u) { return; }
    ctx->pc = 0x22EAC0u;
    // 0x22eac0: 0x26520001
    ctx->pc = 0x22eac0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x22eac4: 0x2a42000c
    ctx->pc = 0x22eac4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 12));
    // 0x22eac8: 0x5440ffd3
    ctx->pc = 0x22EAC8u;
    {
        const bool branch_taken_0x22eac8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22eac8) {
            ctx->pc = 0x22EACCu;
            SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
            ctx->pc = 0x22EA18u;
            goto label_22ea18;
        }
    }
    ctx->pc = 0x22EAD0u;
    // 0x22ead0: 0x902d
    ctx->pc = 0x22ead0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ead4: 0x3c02003c
    ctx->pc = 0x22ead4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x22ead8: 0x24511b48
    ctx->pc = 0x22ead8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 6984));
    // 0x22eadc: 0x3c17003a
    ctx->pc = 0x22eadcu;
    SET_GPR_U32(ctx, 23, ((uint32_t)58 << 16));
    // 0x22eae0: 0x3c020032
    ctx->pc = 0x22eae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22eae4: 0x24561678
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 5752));
    // 0x22eae8: 0x3c020032
    ctx->pc = 0x22eae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22eaec: 0x244215d0
    ctx->pc = 0x22eaecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
    // 0x22eaf0: 0x141840
    ctx->pc = 0x22eaf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 1));
    // 0x22eaf4: 0x629821
    ctx->pc = 0x22eaf4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22eaf8: 0x3c020033
    ctx->pc = 0x22eaf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22eafc: 0x2455ca28
    ctx->pc = 0x22eafcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294953512));
    // 0x22eb00: 0x128080
    ctx->pc = 0x22eb00u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x22eb04: 0x0
    ctx->pc = 0x22eb04u;
    // NOP
label_22eb08:
    // 0x22eb08: 0x220202d
    ctx->pc = 0x22eb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb0c: 0x26e57658
    ctx->pc = 0x22eb0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 30296));
    // 0x22eb10: 0xc0b6252
    ctx->pc = 0x22EB10u;
    SET_GPR_U32(ctx, 31, 0x22EB18u);
    ctx->pc = 0x22EB14u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB18u; }
    }
    if (ctx->pc != 0x22EB18u) { return; }
    ctx->pc = 0x22EB18u;
    // 0x22eb18: 0x220202d
    ctx->pc = 0x22eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb1c: 0x282d
    ctx->pc = 0x22eb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb20: 0xc0b1ba8
    ctx->pc = 0x22EB20u;
    SET_GPR_U32(ctx, 31, 0x22EB28u);
    ctx->pc = 0x22EB24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB28u; }
    }
    if (ctx->pc != 0x22EB28u) { return; }
    ctx->pc = 0x22EB28u;
    // 0x22eb28: 0x96630000
    ctx->pc = 0x22eb28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22eb2c: 0x2406000c
    ctx->pc = 0x22eb2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22eb30: 0x2463018
    ctx->pc = 0x22eb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22eb34: 0x24c6000c
    ctx->pc = 0x22eb34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12));
    // 0x22eb38: 0x202d
    ctx->pc = 0x22eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb3c: 0x40282d
    ctx->pc = 0x22eb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb40: 0x663021
    ctx->pc = 0x22eb40u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22eb44: 0x24020130
    ctx->pc = 0x22eb44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
    // 0x22eb48: 0x2447fffc
    ctx->pc = 0x22eb48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x22eb4c: 0x2408ffff
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22eb50: 0xc0b0b54
    ctx->pc = 0x22EB50u;
    SET_GPR_U32(ctx, 31, 0x22EB58u);
    ctx->pc = 0x22EB54u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB58u; }
    }
    if (ctx->pc != 0x22EB58u) { return; }
    ctx->pc = 0x22EB58u;
    // 0x22eb58: 0x141940
    ctx->pc = 0x22eb58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 5));
    // 0x22eb5c: 0x2038021
    ctx->pc = 0x22eb5cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x22eb60: 0x2158021
    ctx->pc = 0x22eb60u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x22eb64: 0xae020000
    ctx->pc = 0x22eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22eb68: 0x40202d
    ctx->pc = 0x22eb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb6c: 0xc0b0ce8
    ctx->pc = 0x22EB6Cu;
    SET_GPR_U32(ctx, 31, 0x22EB74u);
    ctx->pc = 0x22EB70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB74u; }
    }
    if (ctx->pc != 0x22EB74u) { return; }
    ctx->pc = 0x22EB74u;
    // 0x22eb74: 0x3c01477a
    ctx->pc = 0x22eb74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x22eb78: 0x44816000
    ctx->pc = 0x22eb78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22eb7c: 0xc0b0dd6
    ctx->pc = 0x22EB7Cu;
    SET_GPR_U32(ctx, 31, 0x22EB84u);
    ctx->pc = 0x22EB80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB84u; }
    }
    if (ctx->pc != 0x22EB84u) { return; }
    ctx->pc = 0x22EB84u;
    // 0x22eb84: 0x26520001
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x22eb88: 0x2a420008
    ctx->pc = 0x22eb88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 8));
    // 0x22eb8c: 0x1440ffde
    ctx->pc = 0x22EB8Cu;
    {
        const bool branch_taken_0x22eb8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22EB90u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x22eb8c) {
            ctx->pc = 0x22EB08u;
            goto label_22eb08;
        }
    }
    ctx->pc = 0x22EB94u;
    // 0x22eb94: 0x902d
    ctx->pc = 0x22eb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb98: 0x3c020032
    ctx->pc = 0x22eb98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22eb9c: 0x244215d0
    ctx->pc = 0x22eb9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
    // 0x22eba0: 0x141840
    ctx->pc = 0x22eba0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 1));
    // 0x22eba4: 0x62a821
    ctx->pc = 0x22eba4u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22eba8: 0x24040130
    ctx->pc = 0x22eba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 304));
    // 0x22ebac: 0x24930012
    ctx->pc = 0x22ebacu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 18));
    // 0x22ebb0: 0x3c020033
    ctx->pc = 0x22ebb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22ebb4: 0x2456caa8
    ctx->pc = 0x22ebb4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294953640));
    // 0x22ebb8: 0x148900
    ctx->pc = 0x22ebb8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 20), 4));
    // 0x22ebbc: 0x96a60000
    ctx->pc = 0x22ebbcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_22ebc0:
    // 0x22ebc0: 0x123840
    ctx->pc = 0x22ebc0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 18), 1));
    // 0x22ebc4: 0xf23821
    ctx->pc = 0x22ebc4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x22ebc8: 0x202d
    ctx->pc = 0x22ebc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebcc: 0x282d
    ctx->pc = 0x22ebccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebd0: 0x24c6001a
    ctx->pc = 0x22ebd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 26));
    // 0x22ebd4: 0x2673821
    ctx->pc = 0x22ebd4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x22ebd8: 0x2408ffff
    ctx->pc = 0x22ebd8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ebdc: 0xc0b0b54
    ctx->pc = 0x22EBDCu;
    SET_GPR_U32(ctx, 31, 0x22EBE4u);
    ctx->pc = 0x22EBE0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EBE4u; }
    }
    if (ctx->pc != 0x22EBE4u) { return; }
    ctx->pc = 0x22EBE4u;
    // 0x22ebe4: 0x128080
    ctx->pc = 0x22ebe4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x22ebe8: 0x2118021
    ctx->pc = 0x22ebe8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x22ebec: 0x2168021
    ctx->pc = 0x22ebecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x22ebf0: 0xae020000
    ctx->pc = 0x22ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22ebf4: 0x40202d
    ctx->pc = 0x22ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ebf8: 0xc0b0ce8
    ctx->pc = 0x22EBF8u;
    SET_GPR_U32(ctx, 31, 0x22EC00u);
    ctx->pc = 0x22EBFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC00u; }
    }
    if (ctx->pc != 0x22EC00u) { return; }
    ctx->pc = 0x22EC00u;
    // 0x22ec00: 0x3c01477a
    ctx->pc = 0x22ec00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x22ec04: 0x44816000
    ctx->pc = 0x22ec04u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22ec08: 0xc0b0dd6
    ctx->pc = 0x22EC08u;
    SET_GPR_U32(ctx, 31, 0x22EC10u);
    ctx->pc = 0x22EC0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC10u; }
    }
    if (ctx->pc != 0x22EC10u) { return; }
    ctx->pc = 0x22EC10u;
    // 0x22ec10: 0x26520001
    ctx->pc = 0x22ec10u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x22ec14: 0x2a420004
    ctx->pc = 0x22ec14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x22ec18: 0x5440ffe9
    ctx->pc = 0x22EC18u;
    {
        const bool branch_taken_0x22ec18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22ec18) {
            ctx->pc = 0x22EC1Cu;
            SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x22EBC0u;
            goto label_22ebc0;
        }
    }
    ctx->pc = 0x22EC20u;
    // 0x22ec20: 0x902d
    ctx->pc = 0x22ec20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec24: 0x14a9c0
    ctx->pc = 0x22ec24u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 7));
    // 0x22ec28: 0x3c020032
    ctx->pc = 0x22ec28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22ec2c: 0x245e1344
    ctx->pc = 0x22ec2cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4932));
    // 0x22ec30: 0x3c020033
    ctx->pc = 0x22ec30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22ec34: 0x2457cae8
    ctx->pc = 0x22ec34u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294953704));
    // 0x22ec38: 0x2402001c
    ctx->pc = 0x22ec38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
    // 0x22ec3c: 0x2829818
    ctx->pc = 0x22ec3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ec40: 0x3c020032
    ctx->pc = 0x22ec40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22ec44: 0x24561348
    ctx->pc = 0x22ec44u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4936));
    // 0x22ec48: 0x24020014
    ctx->pc = 0x22ec48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x22ec4c: 0x0
    ctx->pc = 0x22ec4cu;
    // NOP
label_22ec50:
    // 0x22ec50: 0x2428818
    ctx->pc = 0x22ec50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ec54: 0x3c040032
    ctx->pc = 0x22ec54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x22ec58: 0x2484133c
    ctx->pc = 0x22ec58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4924));
    // 0x22ec5c: 0x2241821
    ctx->pc = 0x22ec5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x22ec60: 0x3c040032
    ctx->pc = 0x22ec60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x22ec64: 0x24841340
    ctx->pc = 0x22ec64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4928));
    // 0x22ec68: 0x2241021
    ctx->pc = 0x22ec68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x22ec6c: 0x8c450000
    ctx->pc = 0x22ec6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ec70: 0x23e1021
    ctx->pc = 0x22ec70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x22ec74: 0x8c640000
    ctx->pc = 0x22ec74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ec78: 0x2a52821
    ctx->pc = 0x22ec78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x22ec7c: 0xc0b0c08
    ctx->pc = 0x22EC7Cu;
    SET_GPR_U32(ctx, 31, 0x22EC84u);
    ctx->pc = 0x22EC80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC84u; }
    }
    if (ctx->pc != 0x22EC84u) { return; }
    ctx->pc = 0x22EC84u;
    // 0x22ec84: 0x128080
    ctx->pc = 0x22ec84u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x22ec88: 0x2138021
    ctx->pc = 0x22ec88u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x22ec8c: 0x2178021
    ctx->pc = 0x22ec8cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x22ec90: 0xae020000
    ctx->pc = 0x22ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22ec94: 0xc0b0f3e
    ctx->pc = 0x22EC94u;
    SET_GPR_U32(ctx, 31, 0x22EC9Cu);
    ctx->pc = 0x22EC98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetTex_0x2c3cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EC9Cu; }
    }
    if (ctx->pc != 0x22EC9Cu) { return; }
    ctx->pc = 0x22EC9Cu;
    // 0x22ec9c: 0x3c040032
    ctx->pc = 0x22ec9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x22eca0: 0x24841338
    ctx->pc = 0x22eca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4920));
    // 0x22eca4: 0x2241821
    ctx->pc = 0x22eca4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x22eca8: 0xac620000
    ctx->pc = 0x22eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22ecac: 0x8e040000
    ctx->pc = 0x22ecacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ecb0: 0xc0b0ce8
    ctx->pc = 0x22ECB0u;
    SET_GPR_U32(ctx, 31, 0x22ECB8u);
    ctx->pc = 0x22ECB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECB8u; }
    }
    if (ctx->pc != 0x22ECB8u) { return; }
    ctx->pc = 0x22ECB8u;
    // 0x22ecb8: 0x2368821
    ctx->pc = 0x22ecb8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x22ecbc: 0xc62c0000
    ctx->pc = 0x22ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ecc0: 0x46806320
    ctx->pc = 0x22ecc0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x22ecc4: 0xc0b0dd6
    ctx->pc = 0x22ECC4u;
    SET_GPR_U32(ctx, 31, 0x22ECCCu);
    ctx->pc = 0x22ECC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ECCCu; }
    }
    if (ctx->pc != 0x22ECCCu) { return; }
    ctx->pc = 0x22ECCCu;
    // 0x22eccc: 0x26520001
    ctx->pc = 0x22ecccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x22ecd0: 0x2a420007
    ctx->pc = 0x22ecd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 7));
    // 0x22ecd4: 0x1440ffde
    ctx->pc = 0x22ECD4u;
    {
        const bool branch_taken_0x22ecd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22ECD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x22ecd4) {
            ctx->pc = 0x22EC50u;
            goto label_22ec50;
        }
    }
    ctx->pc = 0x22ECDCu;
    // 0x22ecdc: 0x3c030032
    ctx->pc = 0x22ecdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22ece0: 0x24631bc0
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x22ece4: 0x24022b00
    ctx->pc = 0x22ece4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x22ece8: 0x2821018
    ctx->pc = 0x22ece8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ecec: 0x431021
    ctx->pc = 0x22ececu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ecf0: 0xac402adc
    ctx->pc = 0x22ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10972), GPR_U32(ctx, 0));
    // 0x22ecf4: 0x3c030032
    ctx->pc = 0x22ecf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22ecf8: 0x246315d8
    ctx->pc = 0x22ecf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5592));
    // 0x22ecfc: 0x141040
    ctx->pc = 0x22ecfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
    // 0x22ed00: 0x431021
    ctx->pc = 0x22ed00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ed04: 0x94460000
    ctx->pc = 0x22ed04u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ed08: 0x24020130
    ctx->pc = 0x22ed08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
    // 0x22ed0c: 0x24470013
    ctx->pc = 0x22ed0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 19));
    // 0x22ed10: 0x202d
    ctx->pc = 0x22ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed14: 0x282d
    ctx->pc = 0x22ed14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed18: 0x24c6fff2
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967282));
    // 0x22ed1c: 0x73823
    ctx->pc = 0x22ed1cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x22ed20: 0x2408ffff
    ctx->pc = 0x22ed20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ed24: 0xc0b0b54
    ctx->pc = 0x22ED24u;
    SET_GPR_U32(ctx, 31, 0x22ED2Cu);
    ctx->pc = 0x22ED28u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED2Cu; }
    }
    if (ctx->pc != 0x22ED2Cu) { return; }
    ctx->pc = 0x22ED2Cu;
    // 0x22ed2c: 0x3c030033
    ctx->pc = 0x22ed2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22ed30: 0x2463cb58
    ctx->pc = 0x22ed30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953816));
    // 0x22ed34: 0x142080
    ctx->pc = 0x22ed34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 20), 2));
    // 0x22ed38: 0x838021
    ctx->pc = 0x22ed38u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22ed3c: 0xae020000
    ctx->pc = 0x22ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22ed40: 0x3c04003a
    ctx->pc = 0x22ed40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22ed44: 0x24847668
    ctx->pc = 0x22ed44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30312));
    // 0x22ed48: 0x282d
    ctx->pc = 0x22ed48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed4c: 0xc0b1ba8
    ctx->pc = 0x22ED4Cu;
    SET_GPR_U32(ctx, 31, 0x22ED54u);
    ctx->pc = 0x22ED50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED54u; }
    }
    if (ctx->pc != 0x22ED54u) { return; }
    ctx->pc = 0x22ED54u;
    // 0x22ed54: 0x8e040000
    ctx->pc = 0x22ed54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ed58: 0x40282d
    ctx->pc = 0x22ed58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed5c: 0xc0b0ed6
    ctx->pc = 0x22ED5Cu;
    SET_GPR_U32(ctx, 31, 0x22ED64u);
    ctx->pc = 0x22ED60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED64u; }
    }
    if (ctx->pc != 0x22ED64u) { return; }
    ctx->pc = 0x22ED64u;
    // 0x22ed64: 0x8e040000
    ctx->pc = 0x22ed64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ed68: 0xc0b0ce8
    ctx->pc = 0x22ED68u;
    SET_GPR_U32(ctx, 31, 0x22ED70u);
    ctx->pc = 0x22ED6Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED70u; }
    }
    if (ctx->pc != 0x22ED70u) { return; }
    ctx->pc = 0x22ED70u;
    // 0x22ed70: 0x3c01477a
    ctx->pc = 0x22ed70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x22ed74: 0x44816000
    ctx->pc = 0x22ed74u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22ed78: 0xc0b0dd6
    ctx->pc = 0x22ED78u;
    SET_GPR_U32(ctx, 31, 0x22ED80u);
    ctx->pc = 0x22ED7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ED80u; }
    }
    if (ctx->pc != 0x22ED80u) { return; }
    ctx->pc = 0x22ED80u;
    // 0x22ed80: 0x3c020032
    ctx->pc = 0x22ed80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22ed84: 0x8c420868
    ctx->pc = 0x22ed84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x22ed88: 0x10400007
    ctx->pc = 0x22ED88u;
    {
        const bool branch_taken_0x22ed88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22ED8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22ed88) {
            ctx->pc = 0x22EDA8u;
            goto label_22eda8;
        }
    }
    ctx->pc = 0x22ED90u;
    // 0x22ed90: 0x8e040000
    ctx->pc = 0x22ed90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ed94: 0x3c05ffff
    ctx->pc = 0x22ed94u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x22ed98: 0x34a5ffff
    ctx->pc = 0x22ed98u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x22ed9c: 0xc0b0caa
    ctx->pc = 0x22ED9Cu;
    SET_GPR_U32(ctx, 31, 0x22EDA4u);
    ctx->pc = 0x22EDA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDA4u; }
    }
    if (ctx->pc != 0x22EDA4u) { return; }
    ctx->pc = 0x22EDA4u;
    // 0x22eda4: 0x3c020032
    ctx->pc = 0x22eda4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22eda8:
    // 0x22eda8: 0x24421bc0
    ctx->pc = 0x22eda8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x22edac: 0x24112b00
    ctx->pc = 0x22edacu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x22edb0: 0x2918818
    ctx->pc = 0x22edb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22edb4: 0x2228821
    ctx->pc = 0x22edb4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22edb8: 0xa620092c
    ctx->pc = 0x22edb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2348), (uint16_t)GPR_U32(ctx, 0));
    // 0x22edbc: 0x3c020032
    ctx->pc = 0x22edbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22edc0: 0x244215d0
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5584));
    // 0x22edc4: 0x149840
    ctx->pc = 0x22edc4u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 20), 1));
    // 0x22edc8: 0x2629821
    ctx->pc = 0x22edc8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x22edcc: 0x96660000
    ctx->pc = 0x22edccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22edd0: 0x202d
    ctx->pc = 0x22edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edd4: 0x282d
    ctx->pc = 0x22edd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edd8: 0x24c60008
    ctx->pc = 0x22edd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x22eddc: 0x24020130
    ctx->pc = 0x22eddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
    // 0x22ede0: 0x24470024
    ctx->pc = 0x22ede0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 36));
    // 0x22ede4: 0x24080010
    ctx->pc = 0x22ede4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x22ede8: 0xc0b0b54
    ctx->pc = 0x22EDE8u;
    SET_GPR_U32(ctx, 31, 0x22EDF0u);
    ctx->pc = 0x22EDECu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EDF0u; }
    }
    if (ctx->pc != 0x22EDF0u) { return; }
    ctx->pc = 0x22EDF0u;
    // 0x22edf0: 0x3c10003c
    ctx->pc = 0x22edf0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x22edf4: 0x26101b20
    ctx->pc = 0x22edf4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 6944));
    // 0x22edf8: 0x149080
    ctx->pc = 0x22edf8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 20), 2));
    // 0x22edfc: 0x2508021
    ctx->pc = 0x22edfcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x22ee00: 0xae020000
    ctx->pc = 0x22ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22ee04: 0x3c04003a
    ctx->pc = 0x22ee04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22ee08: 0x24847678
    ctx->pc = 0x22ee08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30328));
    // 0x22ee0c: 0x282d
    ctx->pc = 0x22ee0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee10: 0xc0b1ba8
    ctx->pc = 0x22EE10u;
    SET_GPR_U32(ctx, 31, 0x22EE18u);
    ctx->pc = 0x22EE14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE18u; }
    }
    if (ctx->pc != 0x22EE18u) { return; }
    ctx->pc = 0x22EE18u;
    // 0x22ee18: 0x8e040000
    ctx->pc = 0x22ee18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ee1c: 0x40282d
    ctx->pc = 0x22ee1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee20: 0xc0b0ed6
    ctx->pc = 0x22EE20u;
    SET_GPR_U32(ctx, 31, 0x22EE28u);
    ctx->pc = 0x22EE24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE28u; }
    }
    if (ctx->pc != 0x22EE28u) { return; }
    ctx->pc = 0x22EE28u;
    // 0x22ee28: 0x8e040000
    ctx->pc = 0x22ee28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ee2c: 0xc0b0ce8
    ctx->pc = 0x22EE2Cu;
    SET_GPR_U32(ctx, 31, 0x22EE34u);
    ctx->pc = 0x22EE30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE34u; }
    }
    if (ctx->pc != 0x22EE34u) { return; }
    ctx->pc = 0x22EE34u;
    // 0x22ee34: 0x3c01477a
    ctx->pc = 0x22ee34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x22ee38: 0x44816000
    ctx->pc = 0x22ee38u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22ee3c: 0xc0b0dd6
    ctx->pc = 0x22EE3Cu;
    SET_GPR_U32(ctx, 31, 0x22EE44u);
    ctx->pc = 0x22EE40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE44u; }
    }
    if (ctx->pc != 0x22EE44u) { return; }
    ctx->pc = 0x22EE44u;
    // 0x22ee44: 0x96660000
    ctx->pc = 0x22ee44u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22ee48: 0x202d
    ctx->pc = 0x22ee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee4c: 0x282d
    ctx->pc = 0x22ee4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee50: 0x24c60068
    ctx->pc = 0x22ee50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 104));
    // 0x22ee54: 0x24020130
    ctx->pc = 0x22ee54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 304));
    // 0x22ee58: 0x24470022
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 34));
    // 0x22ee5c: 0x24080010
    ctx->pc = 0x22ee5cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x22ee60: 0xc0b0b54
    ctx->pc = 0x22EE60u;
    SET_GPR_U32(ctx, 31, 0x22EE68u);
    ctx->pc = 0x22EE64u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE68u; }
    }
    if (ctx->pc != 0x22EE68u) { return; }
    ctx->pc = 0x22EE68u;
    // 0x22ee68: 0x3c03003c
    ctx->pc = 0x22ee68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x22ee6c: 0x24631b30
    ctx->pc = 0x22ee6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6960));
    // 0x22ee70: 0x2439021
    ctx->pc = 0x22ee70u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x22ee74: 0xae420000
    ctx->pc = 0x22ee74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x22ee78: 0x40202d
    ctx->pc = 0x22ee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee7c: 0xc0b0ce8
    ctx->pc = 0x22EE7Cu;
    SET_GPR_U32(ctx, 31, 0x22EE84u);
    ctx->pc = 0x22EE80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE84u; }
    }
    if (ctx->pc != 0x22EE84u) { return; }
    ctx->pc = 0x22EE84u;
    // 0x22ee84: 0x3c01477a
    ctx->pc = 0x22ee84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x22ee88: 0x44816000
    ctx->pc = 0x22ee88u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22ee8c: 0xc0b0dd6
    ctx->pc = 0x22EE8Cu;
    SET_GPR_U32(ctx, 31, 0x22EE94u);
    ctx->pc = 0x22EE90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EE94u; }
    }
    if (ctx->pc != 0x22EE94u) { return; }
    ctx->pc = 0x22EE94u;
    // 0x22ee94: 0xae200080
    ctx->pc = 0x22ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x22ee98: 0xae340000
    ctx->pc = 0x22ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x22ee9c: 0xdfbf0090
    ctx->pc = 0x22ee9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22eea0: 0xdfbe0080
    ctx->pc = 0x22eea0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22eea4: 0xdfb70070
    ctx->pc = 0x22eea4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22eea8: 0xdfb60060
    ctx->pc = 0x22eea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22eeac: 0xdfb50050
    ctx->pc = 0x22eeacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22eeb0: 0xdfb40040
    ctx->pc = 0x22eeb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22eeb4: 0xdfb30030
    ctx->pc = 0x22eeb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eeb8: 0xdfb20020
    ctx->pc = 0x22eeb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eebc: 0xdfb10010
    ctx->pc = 0x22eebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eec0: 0xdfb00000
    ctx->pc = 0x22eec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eec4: 0x3e00008
    ctx->pc = 0x22EEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EEC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E9A8u: goto label_22e9a8;
            case 0x22EA18u: goto label_22ea18;
            case 0x22EA2Cu: goto label_22ea2c;
            case 0x22EA38u: goto label_22ea38;
            case 0x22EA74u: goto label_22ea74;
            case 0x22EB08u: goto label_22eb08;
            case 0x22EBC0u: goto label_22ebc0;
            case 0x22EC50u: goto label_22ec50;
            case 0x22EDA8u: goto label_22eda8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22EECCu;
}
