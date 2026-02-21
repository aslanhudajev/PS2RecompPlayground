#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadAllRecords
// Address: 0x2913c0 - 0x291614
void LoadAllRecords_0x2913c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2913c0u;

    // 0x2913c0: 0x27bdff80
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2913c4: 0xffbf0070
    ctx->pc = 0x2913c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2913c8: 0xffb60060
    ctx->pc = 0x2913c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2913cc: 0xffb50050
    ctx->pc = 0x2913ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2913d0: 0xffb40040
    ctx->pc = 0x2913d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2913d4: 0xffb30030
    ctx->pc = 0x2913d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2913d8: 0xffb20020
    ctx->pc = 0x2913d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2913dc: 0xffb10010
    ctx->pc = 0x2913dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2913e0: 0xffb00000
    ctx->pc = 0x2913e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2913e4: 0x24120001
    ctx->pc = 0x2913e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2913e8: 0x802d
    ctx->pc = 0x2913e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2913ec: 0x3c020032
    ctx->pc = 0x2913ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2913f0: 0x24541bc0
    ctx->pc = 0x2913f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2913f4: 0x24132b00
    ctx->pc = 0x2913f4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2913f8: 0x24160001
    ctx->pc = 0x2913f8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2913fc: 0x3c150035
    ctx->pc = 0x2913fcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)53 << 16));
    // 0x291400: 0x2a0102d
    ctx->pc = 0x291400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291404: 0x2451f848
    ctx->pc = 0x291404u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294965320));
    // 0x291408: 0x2131018
    ctx->pc = 0x291408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29140c: 0x0
    ctx->pc = 0x29140cu;
    // NOP
label_291410:
    // 0x291410: 0x541821
    ctx->pc = 0x291410u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x291414: 0x8c6200fc
    ctx->pc = 0x291414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x291418: 0x1456000e
    ctx->pc = 0x291418u;
    {
        const bool branch_taken_0x291418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        ctx->pc = 0x29141Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x291418) {
            ctx->pc = 0x291454u;
            goto label_291454;
        }
    }
    ctx->pc = 0x291420u;
    // 0x291420: 0x12400008
    ctx->pc = 0x291420u;
    {
        const bool branch_taken_0x291420 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x291424u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294965320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x291420) {
            ctx->pc = 0x291444u;
            goto label_291444;
        }
    }
    ctx->pc = 0x291428u;
    // 0x291428: 0xe4600050
    ctx->pc = 0x291428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x29142c: 0xc6200004
    ctx->pc = 0x29142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291430: 0xe4600054
    ctx->pc = 0x291430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x291434: 0xc6200008
    ctx->pc = 0x291434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291438: 0xe4600058
    ctx->pc = 0x291438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x29143c: 0x10000005
    ctx->pc = 0x29143Cu;
    {
        const bool branch_taken_0x29143c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291440u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29143c) {
            ctx->pc = 0x291454u;
            goto label_291454;
        }
    }
    ctx->pc = 0x291444u;
label_291444:
    // 0x291444: 0x200202d
    ctx->pc = 0x291444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291448: 0xc0933d4
    ctx->pc = 0x291448u;
    SET_GPR_U32(ctx, 31, 0x291450u);
    ctx->pc = 0x29144Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x24CF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_player_pos_0x24cf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291450u; }
    }
    if (ctx->pc != 0x291450u) { return; }
    ctx->pc = 0x291450u;
    // 0x291450: 0x2131018
    ctx->pc = 0x291450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_291454:
    // 0x291454: 0x542021
    ctx->pc = 0x291454u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x291458: 0xc08ac14
    ctx->pc = 0x291458u;
    SET_GPR_U32(ctx, 31, 0x291460u);
    ctx->pc = 0x29145Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291460u; }
    }
    if (ctx->pc != 0x291460u) { return; }
    ctx->pc = 0x291460u;
    // 0x291460: 0x26100001
    ctx->pc = 0x291460u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x291464: 0x2a020004
    ctx->pc = 0x291464u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x291468: 0x1440ffe9
    ctx->pc = 0x291468u;
    {
        const bool branch_taken_0x291468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29146Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x291468) {
            ctx->pc = 0x291410u;
            goto label_291410;
        }
    }
    ctx->pc = 0x291470u;
    // 0x291470: 0xc09bf82
    ctx->pc = 0x291470u;
    SET_GPR_U32(ctx, 31, 0x291478u);
    ctx->pc = 0x291474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x26FE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_game_cam_0x26fe08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291478u; }
    }
    if (ctx->pc != 0x291478u) { return; }
    ctx->pc = 0x291478u;
    // 0x291478: 0x3c020032
    ctx->pc = 0x291478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29147c: 0xc08dc66
    ctx->pc = 0x29147Cu;
    SET_GPR_U32(ctx, 31, 0x291484u);
    ctx->pc = 0x291480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 0));
    ctx->pc = 0x237198u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRightPath_0x237198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291484u; }
    }
    if (ctx->pc != 0x291484u) { return; }
    ctx->pc = 0x291484u;
    // 0x291484: 0x3c04003c
    ctx->pc = 0x291484u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x291488: 0x24843f10
    ctx->pc = 0x291488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16144));
    // 0x29148c: 0x3c050034
    ctx->pc = 0x29148cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x291490: 0xc099ca8
    ctx->pc = 0x291490u;
    SET_GPR_U32(ctx, 31, 0x291498u);
    ctx->pc = 0x291494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962016));
    ctx->pc = 0x2672A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyCam_0x2672a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291498u; }
    }
    if (ctx->pc != 0x291498u) { return; }
    ctx->pc = 0x291498u;
    // 0x291498: 0x802d
    ctx->pc = 0x291498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29149c: 0x3c020034
    ctx->pc = 0x29149cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2914a0: 0x244df958
    ctx->pc = 0x2914a0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 4294965592));
    // 0x2914a4: 0x240c000c
    ctx->pc = 0x2914a4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2914a8: 0x3c02003c
    ctx->pc = 0x2914a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2914ac: 0x244b40e0
    ctx->pc = 0x2914acu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 16608));
    // 0x2914b0: 0x3c020034
    ctx->pc = 0x2914b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2914b4: 0x244af95c
    ctx->pc = 0x2914b4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294965596));
    // 0x2914b8: 0x3c02003c
    ctx->pc = 0x2914b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2914bc: 0x244940e4
    ctx->pc = 0x2914bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 16612));
    // 0x2914c0: 0x3c020034
    ctx->pc = 0x2914c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2914c4: 0x2448f960
    ctx->pc = 0x2914c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294965600));
    // 0x2914c8: 0x3c02003c
    ctx->pc = 0x2914c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2914cc: 0x244740e8
    ctx->pc = 0x2914ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2914d0: 0x3c020034
    ctx->pc = 0x2914d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2914d4: 0x2446f9b0
    ctx->pc = 0x2914d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294965680));
    // 0x2914d8: 0x3c02003c
    ctx->pc = 0x2914d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2914dc: 0x24454138
    ctx->pc = 0x2914dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16696));
label_2914e0:
    // 0x2914e0: 0x20c1818
    ctx->pc = 0x2914e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2914e4: 0x6d2021
    ctx->pc = 0x2914e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2914e8: 0x6b1021
    ctx->pc = 0x2914e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2914ec: 0xc4400000
    ctx->pc = 0x2914ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914f0: 0xe4800000
    ctx->pc = 0x2914f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2914f4: 0x6a2021
    ctx->pc = 0x2914f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2914f8: 0x691021
    ctx->pc = 0x2914f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2914fc: 0xc4400000
    ctx->pc = 0x2914fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291500: 0xe4800000
    ctx->pc = 0x291500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x291504: 0x681021
    ctx->pc = 0x291504u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x291508: 0x671821
    ctx->pc = 0x291508u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29150c: 0xc4600000
    ctx->pc = 0x29150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291510: 0xe4400000
    ctx->pc = 0x291510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x291514: 0x101080
    ctx->pc = 0x291514u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x291518: 0x461821
    ctx->pc = 0x291518u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29151c: 0x451021
    ctx->pc = 0x29151cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x291520: 0xc4400000
    ctx->pc = 0x291520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291524: 0x26100001
    ctx->pc = 0x291524u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x291528: 0x2a020007
    ctx->pc = 0x291528u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
    // 0x29152c: 0x1440ffec
    ctx->pc = 0x29152Cu;
    {
        const bool branch_taken_0x29152c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291530u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x29152c) {
            ctx->pc = 0x2914E0u;
            goto label_2914e0;
        }
    }
    ctx->pc = 0x291534u;
    // 0x291534: 0x3c030034
    ctx->pc = 0x291534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x291538: 0x3c02003c
    ctx->pc = 0x291538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29153c: 0x8c424154
    ctx->pc = 0x29153cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16724)));
    // 0x291540: 0xac62f90c
    ctx->pc = 0x291540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965516), GPR_U32(ctx, 2));
    // 0x291544: 0x3c030034
    ctx->pc = 0x291544u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x291548: 0x3c02003c
    ctx->pc = 0x291548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29154c: 0x8c4240b0
    ctx->pc = 0x29154cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16560)));
    // 0x291550: 0xac62f928
    ctx->pc = 0x291550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965544), GPR_U32(ctx, 2));
    // 0x291554: 0x3c030034
    ctx->pc = 0x291554u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x291558: 0x3c02003c
    ctx->pc = 0x291558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29155c: 0x8c4240b4
    ctx->pc = 0x29155cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16564)));
    // 0x291560: 0xac62f92c
    ctx->pc = 0x291560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965548), GPR_U32(ctx, 2));
    // 0x291564: 0x3c030034
    ctx->pc = 0x291564u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x291568: 0x3c02003c
    ctx->pc = 0x291568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29156c: 0x8c4240b8
    ctx->pc = 0x29156cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16568)));
    // 0x291570: 0xac62f930
    ctx->pc = 0x291570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
    // 0x291574: 0x3c030034
    ctx->pc = 0x291574u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x291578: 0x3c02003c
    ctx->pc = 0x291578u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29157c: 0xc44040bc
    ctx->pc = 0x29157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291580: 0xe460f8f4
    ctx->pc = 0x291580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965492), bits); }
    // 0x291584: 0x3c030034
    ctx->pc = 0x291584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x291588: 0x3c02003c
    ctx->pc = 0x291588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29158c: 0xc44040c0
    ctx->pc = 0x29158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291590: 0xe460f8f8
    ctx->pc = 0x291590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965496), bits); }
    // 0x291594: 0x3c030034
    ctx->pc = 0x291594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x291598: 0x2465fa08
    ctx->pc = 0x291598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965768));
    // 0x29159c: 0x3c02003c
    ctx->pc = 0x29159cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2915a0: 0x244440c8
    ctx->pc = 0x2915a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16584));
    // 0x2915a4: 0xc44040c8
    ctx->pc = 0x2915a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915a8: 0xe460fa08
    ctx->pc = 0x2915a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965768), bits); }
    // 0x2915ac: 0xc4800004
    ctx->pc = 0x2915acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915b0: 0xe4a00004
    ctx->pc = 0x2915b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2915b4: 0xc4800008
    ctx->pc = 0x2915b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915b8: 0xe4a00008
    ctx->pc = 0x2915b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2915bc: 0x3c030034
    ctx->pc = 0x2915bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2915c0: 0x3c02003c
    ctx->pc = 0x2915c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2915c4: 0x8c4240d4
    ctx->pc = 0x2915c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16596)));
    // 0x2915c8: 0xac62fa04
    ctx->pc = 0x2915c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965764), GPR_U32(ctx, 2));
    // 0x2915cc: 0x3c030034
    ctx->pc = 0x2915ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2915d0: 0x3c02003c
    ctx->pc = 0x2915d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2915d4: 0xc44040d8
    ctx->pc = 0x2915d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915d8: 0xe460fa14
    ctx->pc = 0x2915d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965780), bits); }
    // 0x2915dc: 0x3c030034
    ctx->pc = 0x2915dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2915e0: 0x3c02003c
    ctx->pc = 0x2915e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2915e4: 0xc44040dc
    ctx->pc = 0x2915e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915e8: 0xe460fa18
    ctx->pc = 0x2915e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965784), bits); }
    // 0x2915ec: 0xdfbf0070
    ctx->pc = 0x2915ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2915f0: 0xdfb60060
    ctx->pc = 0x2915f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2915f4: 0xdfb50050
    ctx->pc = 0x2915f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2915f8: 0xdfb40040
    ctx->pc = 0x2915f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2915fc: 0xdfb30030
    ctx->pc = 0x2915fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291600: 0xdfb20020
    ctx->pc = 0x291600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291604: 0xdfb10010
    ctx->pc = 0x291604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291608: 0xdfb00000
    ctx->pc = 0x291608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29160c: 0x3e00008
    ctx->pc = 0x29160Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291410u: goto label_291410;
            case 0x291444u: goto label_291444;
            case 0x291454u: goto label_291454;
            case 0x2914E0u: goto label_2914e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291614u;
}
