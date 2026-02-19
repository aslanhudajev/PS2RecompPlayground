#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterAllocType
// Address: 0x2924c0 - 0x2925d0
void CritterAllocType_0x2924c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2924c0u;

    // 0x2924c0: 0x27bdffa0
    ctx->pc = 0x2924c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2924c4: 0xffbf0050
    ctx->pc = 0x2924c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2924c8: 0xffb20040
    ctx->pc = 0x2924c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2924cc: 0xffb10030
    ctx->pc = 0x2924ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2924d0: 0xffb00020
    ctx->pc = 0x2924d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2924d4: 0xa0882d
    ctx->pc = 0x2924d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924d8: 0xae240130
    ctx->pc = 0x2924d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 4));
    // 0x2924dc: 0x86220050
    ctx->pc = 0x2924dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2924e0: 0x24030030
    ctx->pc = 0x2924e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2924e4: 0x431018
    ctx->pc = 0x2924e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2924e8: 0x8c83001c
    ctx->pc = 0x2924e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2924ec: 0x438021
    ctx->pc = 0x2924ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2924f0: 0xae300120
    ctx->pc = 0x2924f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 16));
    // 0x2924f4: 0x86020022
    ctx->pc = 0x2924f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x2924f8: 0x441001e
    ctx->pc = 0x2924F8u;
    {
        const bool branch_taken_0x2924f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2924FCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2924f8) {
            ctx->pc = 0x292574u;
            goto label_292574;
        }
    }
    ctx->pc = 0x292500u;
    // 0x292500: 0x3a0202d
    ctx->pc = 0x292500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292504: 0xc0a48b2
    ctx->pc = 0x292504u;
    SET_GPR_U32(ctx, 31, 0x29250Cu);
    ctx->pc = 0x292508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2922C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetCritterDesc_0x2922c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29250Cu; }
    }
    if (ctx->pc != 0x29250Cu) { return; }
    ctx->pc = 0x29250Cu;
    // 0x29250c: 0x12400011
    ctx->pc = 0x29250Cu;
    {
        const bool branch_taken_0x29250c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x292510u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29250c) {
            ctx->pc = 0x292554u;
            goto label_292554;
        }
    }
    ctx->pc = 0x292514u;
    // 0x292514: 0x26050028
    ctx->pc = 0x292514u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 40));
    // 0x292518: 0x302d
    ctx->pc = 0x292518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29251c: 0xc080d22
    ctx->pc = 0x29251Cu;
    SET_GPR_U32(ctx, 31, 0x292524u);
    ctx->pc = 0x292520u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292524u; }
    }
    if (ctx->pc != 0x292524u) { return; }
    ctx->pc = 0x292524u;
    // 0x292524: 0x40282d
    ctx->pc = 0x292524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292528: 0xa6050022
    ctx->pc = 0x292528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 5));
    // 0x29252c: 0x24020002
    ctx->pc = 0x29252cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x292530: 0xa6020024
    ctx->pc = 0x292530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x292534: 0x8e040028
    ctx->pc = 0x292534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x292538: 0x1080000c
    ctx->pc = 0x292538u;
    {
        const bool branch_taken_0x292538 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29253Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x292538) {
            ctx->pc = 0x29256Cu;
            goto label_29256c;
        }
    }
    ctx->pc = 0x292540u;
    // 0x292540: 0x52c00
    ctx->pc = 0x292540u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x292544: 0xc084c42
    ctx->pc = 0x292544u;
    SET_GPR_U32(ctx, 31, 0x29254Cu);
    ctx->pc = 0x292548u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29254Cu; }
    }
    if (ctx->pc != 0x29254Cu) { return; }
    ctx->pc = 0x29254Cu;
    // 0x29254c: 0x10000005
    ctx->pc = 0x29254Cu;
    {
        const bool branch_taken_0x29254c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292550u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x29254c) {
            ctx->pc = 0x292564u;
            goto label_292564;
        }
    }
    ctx->pc = 0x292554u;
label_292554:
    // 0x292554: 0xc080d52
    ctx->pc = 0x292554u;
    SET_GPR_U32(ctx, 31, 0x29255Cu);
    ctx->pc = 0x292558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 40));
    ctx->pc = 0x203548u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocModel_0x203548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29255Cu; }
    }
    if (ctx->pc != 0x29255Cu) { return; }
    ctx->pc = 0x29255Cu;
    // 0x29255c: 0xa6020022
    ctx->pc = 0x29255cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x292560: 0x24020001
    ctx->pc = 0x292560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_292564:
    // 0x292564: 0xa6020024
    ctx->pc = 0x292564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x292568: 0x3c020036
    ctx->pc = 0x292568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_29256c:
    // 0x29256c: 0x9442d5f8
    ctx->pc = 0x29256cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956536)));
    // 0x292570: 0xa6020026
    ctx->pc = 0x292570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
label_292574:
    // 0x292574: 0x52400005
    ctx->pc = 0x292574u;
    {
        const bool branch_taken_0x292574 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x292574) {
            ctx->pc = 0x292578u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
            ctx->pc = 0x29258Cu;
            goto label_29258c;
        }
    }
    ctx->pc = 0x29257Cu;
    // 0x29257c: 0xc0a48e4
    ctx->pc = 0x29257Cu;
    SET_GPR_U32(ctx, 31, 0x292584u);
    ctx->pc = 0x292580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFinish_0x292390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292584u; }
    }
    if (ctx->pc != 0x292584u) { return; }
    ctx->pc = 0x292584u;
    // 0x292584: 0x10000002
    ctx->pc = 0x292584u;
    {
        const bool branch_taken_0x292584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292588u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
        if (branch_taken_0x292584) {
            ctx->pc = 0x292590u;
            goto label_292590;
        }
    }
    ctx->pc = 0x29258Cu;
label_29258c:
    // 0x29258c: 0x86230052
    ctx->pc = 0x29258cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_292590:
    // 0x292590: 0x4600009
    ctx->pc = 0x292590u;
    {
        const bool branch_taken_0x292590 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x292594u;
        SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
        if (branch_taken_0x292590) {
            ctx->pc = 0x2925B8u;
            goto label_2925b8;
        }
    }
    ctx->pc = 0x292598u;
    // 0x292598: 0x24a5d4c8
    ctx->pc = 0x292598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956232));
    // 0x29259c: 0x31880
    ctx->pc = 0x29259cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2925a0: 0x86020020
    ctx->pc = 0x2925a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2925a4: 0x24040018
    ctx->pc = 0x2925a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2925a8: 0x441018
    ctx->pc = 0x2925a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2925ac: 0x621821
    ctx->pc = 0x2925acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2925b0: 0x651821
    ctx->pc = 0x2925b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2925b4: 0xac710000
    ctx->pc = 0x2925b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_2925b8:
    // 0x2925b8: 0xdfbf0050
    ctx->pc = 0x2925b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2925bc: 0xdfb20040
    ctx->pc = 0x2925bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2925c0: 0xdfb10030
    ctx->pc = 0x2925c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2925c4: 0xdfb00020
    ctx->pc = 0x2925c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2925c8: 0x3e00008
    ctx->pc = 0x2925C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2925CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292554u: goto label_292554;
            case 0x292564u: goto label_292564;
            case 0x29256Cu: goto label_29256c;
            case 0x292574u: goto label_292574;
            case 0x29258Cu: goto label_29258c;
            case 0x292590u: goto label_292590;
            case 0x2925B8u: goto label_2925b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2925D0u;
}
