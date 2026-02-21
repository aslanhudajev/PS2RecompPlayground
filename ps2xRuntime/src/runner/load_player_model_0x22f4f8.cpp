#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_player_model
// Address: 0x22f4f8 - 0x22f680
void load_player_model_0x22f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f4f8u;

    // 0x22f4f8: 0x27bdff70
    ctx->pc = 0x22f4f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22f4fc: 0xffbf0080
    ctx->pc = 0x22f4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x22f500: 0xffb70070
    ctx->pc = 0x22f500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22f504: 0xffb60060
    ctx->pc = 0x22f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22f508: 0xffb50050
    ctx->pc = 0x22f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22f50c: 0xffb40040
    ctx->pc = 0x22f50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22f510: 0xffb30030
    ctx->pc = 0x22f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22f514: 0xffb20020
    ctx->pc = 0x22f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22f518: 0xffb10010
    ctx->pc = 0x22f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22f51c: 0xffb00000
    ctx->pc = 0x22f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f520: 0x80982d
    ctx->pc = 0x22f520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f524: 0xa0a02d
    ctx->pc = 0x22f524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f528: 0x2412004c
    ctx->pc = 0x22f528u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22f52c: 0x2729018
    ctx->pc = 0x22f52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f530: 0x3c110033
    ctx->pc = 0x22f530u;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
    // 0x22f534: 0x2631c7d8
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294952920));
    // 0x22f538: 0x3c030032
    ctx->pc = 0x22f538u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22f53c: 0x24631bc0
    ctx->pc = 0x22f53cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x22f540: 0x24022b00
    ctx->pc = 0x22f540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x22f544: 0x2621018
    ctx->pc = 0x22f544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22f548: 0x431021
    ctx->pc = 0x22f548u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22f54c: 0x8c500004
    ctx->pc = 0x22f54cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22f550: 0x200302d
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f554: 0xc08bca8
    ctx->pc = 0x22F554u;
    SET_GPR_U32(ctx, 31, 0x22F55Cu);
    ctx->pc = 0x22F558u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->pc = 0x22F2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_player_model_sub_0x22f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F55Cu; }
    }
    if (ctx->pc != 0x22F55Cu) { return; }
    ctx->pc = 0x22F55Cu;
    // 0x22f55c: 0x40b82d
    ctx->pc = 0x22f55cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f560: 0x8e86000c
    ctx->pc = 0x22f560u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x22f564: 0x28c30008
    ctx->pc = 0x22f564u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 8));
    // 0x22f568: 0x24c2fff8
    ctx->pc = 0x22f568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x22f56c: 0x43300a
    ctx->pc = 0x22f56cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    // 0x22f570: 0x2e020004
    ctx->pc = 0x22f570u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 4));
    // 0x22f574: 0x262800a
    ctx->pc = 0x22f574u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 19));
    // 0x22f578: 0x63080
    ctx->pc = 0x22f578u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x22f57c: 0x3c030032
    ctx->pc = 0x22f57cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22f580: 0x246313e0
    ctx->pc = 0x22f580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5088));
    // 0x22f584: 0x3c020032
    ctx->pc = 0x22f584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22f588: 0x24421470
    ctx->pc = 0x22f588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5232));
    // 0x22f58c: 0x108080
    ctx->pc = 0x22f58cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x22f590: 0x2028021
    ctx->pc = 0x22f590u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22f594: 0x3c14003c
    ctx->pc = 0x22f594u;
    SET_GPR_U32(ctx, 20, ((uint32_t)60 << 16));
    // 0x22f598: 0x26841b48
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 6984));
    // 0x22f59c: 0x3c05003a
    ctx->pc = 0x22f59cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f5a0: 0x24a576d0
    ctx->pc = 0x22f5a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30416));
    // 0x22f5a4: 0xc33021
    ctx->pc = 0x22f5a4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22f5a8: 0xc0b6252
    ctx->pc = 0x22F5A8u;
    SET_GPR_U32(ctx, 31, 0x22F5B0u);
    ctx->pc = 0x22F5ACu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5B0u; }
    }
    if (ctx->pc != 0x22F5B0u) { return; }
    ctx->pc = 0x22F5B0u;
    // 0x22f5b0: 0x2321021
    ctx->pc = 0x22f5b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x22f5b4: 0x26350034
    ctx->pc = 0x22f5b4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 52));
    // 0x22f5b8: 0x255a821
    ctx->pc = 0x22f5b8u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x22f5bc: 0x26841b48
    ctx->pc = 0x22f5bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 6984));
    // 0x22f5c0: 0x8c45003c
    ctx->pc = 0x22f5c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x22f5c4: 0x302d
    ctx->pc = 0x22f5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5c8: 0x382d
    ctx->pc = 0x22f5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5cc: 0xc0b1d78
    ctx->pc = 0x22F5CCu;
    SET_GPR_U32(ctx, 31, 0x22F5D4u);
    ctx->pc = 0x22F5D0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x2C75E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_LoadModelFixed_0x2c75e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5D4u; }
    }
    if (ctx->pc != 0x22F5D4u) { return; }
    ctx->pc = 0x22F5D4u;
    // 0x22f5d4: 0x40b02d
    ctx->pc = 0x22f5d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5d8: 0xaeb60000
    ctx->pc = 0x22f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
    // 0x22f5dc: 0x2321021
    ctx->pc = 0x22f5dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x22f5e0: 0x26330048
    ctx->pc = 0x22f5e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 72));
    // 0x22f5e4: 0x2539821
    ctx->pc = 0x22f5e4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x22f5e8: 0x26841b48
    ctx->pc = 0x22f5e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 6984));
    // 0x22f5ec: 0x3c05003a
    ctx->pc = 0x22f5ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x22f5f0: 0x24a576b8
    ctx->pc = 0x22f5f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30392));
    // 0x22f5f4: 0x8c460040
    ctx->pc = 0x22f5f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x22f5f8: 0xc0b4e7c
    ctx->pc = 0x22F5F8u;
    SET_GPR_U32(ctx, 31, 0x22F600u);
    ctx->pc = 0x22F5FCu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F600u; }
    }
    if (ctx->pc != 0x22F600u) { return; }
    ctx->pc = 0x22F600u;
    // 0x22f600: 0x26300038
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 56));
    // 0x22f604: 0x2508021
    ctx->pc = 0x22f604u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x22f608: 0x8e640000
    ctx->pc = 0x22f608u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22f60c: 0x2c0282d
    ctx->pc = 0x22f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f610: 0xc084784
    ctx->pc = 0x22F610u;
    SET_GPR_U32(ctx, 31, 0x22F618u);
    ctx->pc = 0x22F614u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x211E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAtreeList_0x211e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F618u; }
    }
    if (ctx->pc != 0x22F618u) { return; }
    ctx->pc = 0x22F618u;
    // 0x22f618: 0xae020000
    ctx->pc = 0x22f618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22f61c: 0x2321021
    ctx->pc = 0x22f61cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x22f620: 0x26300010
    ctx->pc = 0x22f620u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
    // 0x22f624: 0x2508021
    ctx->pc = 0x22f624u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x22f628: 0x8c440024
    ctx->pc = 0x22f628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22f62c: 0xc084c42
    ctx->pc = 0x22F62Cu;
    SET_GPR_U32(ctx, 31, 0x22F634u);
    ctx->pc = 0x22F630u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F634u; }
    }
    if (ctx->pc != 0x22F634u) { return; }
    ctx->pc = 0x22F634u;
    // 0x22f634: 0x2328821
    ctx->pc = 0x22f634u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x22f638: 0x8e240030
    ctx->pc = 0x22f638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x22f63c: 0xc084c42
    ctx->pc = 0x22F63Cu;
    SET_GPR_U32(ctx, 31, 0x22F644u);
    ctx->pc = 0x22F640u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F644u; }
    }
    if (ctx->pc != 0x22F644u) { return; }
    ctx->pc = 0x22F644u;
    // 0x22f644: 0x8e640000
    ctx->pc = 0x22f644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22f648: 0xc084c42
    ctx->pc = 0x22F648u;
    SET_GPR_U32(ctx, 31, 0x22F650u);
    ctx->pc = 0x22F64Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F650u; }
    }
    if (ctx->pc != 0x22F650u) { return; }
    ctx->pc = 0x22F650u;
    // 0x22f650: 0x2e0102d
    ctx->pc = 0x22f650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f654: 0xdfbf0080
    ctx->pc = 0x22f654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22f658: 0xdfb70070
    ctx->pc = 0x22f658u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f65c: 0xdfb60060
    ctx->pc = 0x22f65cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f660: 0xdfb50050
    ctx->pc = 0x22f660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f664: 0xdfb40040
    ctx->pc = 0x22f664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f668: 0xdfb30030
    ctx->pc = 0x22f668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f66c: 0xdfb20020
    ctx->pc = 0x22f66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f670: 0xdfb10010
    ctx->pc = 0x22f670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f674: 0xdfb00000
    ctx->pc = 0x22f674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f678: 0x3e00008
    ctx->pc = 0x22F678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F67Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F680u;
}
