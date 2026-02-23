#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dpmul
// Address: 0x14b2e0 - 0x14b588
void dpmul_0x14b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dpmul");


    ctx->pc = 0x14b2e0u;

    // 0x14b2e0: 0x27bdff00
    ctx->pc = 0x14b2e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x14b2e4: 0xffa40060
    ctx->pc = 0x14b2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x14b2e8: 0xffa50068
    ctx->pc = 0x14b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x14b2ec: 0x27a40060
    ctx->pc = 0x14b2ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b2f0: 0xffb700e0
    ctx->pc = 0x14b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x14b2f4: 0x3a0282d
    ctx->pc = 0x14b2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2f8: 0xffb00070
    ctx->pc = 0x14b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x14b2fc: 0xffbf00f0
    ctx->pc = 0x14b2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x14b300: 0xffb600d0
    ctx->pc = 0x14b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x14b304: 0xffb500c0
    ctx->pc = 0x14b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x14b308: 0xffb400b0
    ctx->pc = 0x14b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x14b30c: 0xffb300a0
    ctx->pc = 0x14b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x14b310: 0xffb20090
    ctx->pc = 0x14b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x14b314: 0xc052bd0
    ctx->pc = 0x14B314u;
    SET_GPR_U32(ctx, 31, 0x14B31Cu);
    ctx->pc = 0x14B318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B31Cu; }
        else if (ctx->pc != 0x14B31Cu) { ctx->pc = 0x14B31Cu; }
    }
    if (ctx->pc != 0x14B31Cu) { return; }
    ctx->pc = 0x14B31Cu;
    // 0x14b31c: 0x27b00020
    ctx->pc = 0x14b31cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b320: 0x27a40068
    ctx->pc = 0x14b320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x14b324: 0xc052bd0
    ctx->pc = 0x14B324u;
    SET_GPR_U32(ctx, 31, 0x14B32Cu);
    ctx->pc = 0x14B328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B32Cu; }
        else if (ctx->pc != 0x14B32Cu) { ctx->pc = 0x14B32Cu; }
    }
    if (ctx->pc != 0x14B32Cu) { return; }
    ctx->pc = 0x14B32Cu;
    // 0x14b32c: 0x8fa40000
    ctx->pc = 0x14b32cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b330: 0x2c820002
    ctx->pc = 0x14b330u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 2));
    // 0x14b334: 0x14400016
    ctx->pc = 0x14B334u;
    {
        const bool branch_taken_0x14b334 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B338u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x14b334) {
            ctx->pc = 0x14B390u;
            goto label_14b390;
        }
    }
    ctx->pc = 0x14B33Cu;
    // 0x14b33c: 0x8fa30020
    ctx->pc = 0x14b33cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b340: 0x2c620002
    ctx->pc = 0x14b340u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
    // 0x14b344: 0x5440001c
    ctx->pc = 0x14B344u;
    {
        const bool branch_taken_0x14b344 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14b344) {
            ctx->pc = 0x14B348u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->pc = 0x14B3B8u;
            goto label_14b3b8;
        }
    }
    ctx->pc = 0x14B34Cu;
    // 0x14b34c: 0x38820004
    ctx->pc = 0x14b34cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 4));
    // 0x14b350: 0x14400006
    ctx->pc = 0x14B350u;
    {
        const bool branch_taken_0x14b350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B354u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x14b350) {
            ctx->pc = 0x14B36Cu;
            goto label_14b36c;
        }
    }
    ctx->pc = 0x14B358u;
    // 0x14b358: 0x38620002
    ctx->pc = 0x14b358u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x14b35c: 0x10400007
    ctx->pc = 0x14B35Cu;
    {
        const bool branch_taken_0x14b35c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B360u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x14b35c) {
            ctx->pc = 0x14B37Cu;
            goto label_14b37c;
        }
    }
    ctx->pc = 0x14B364u;
    // 0x14b364: 0x1000000c
    ctx->pc = 0x14B364u;
    {
        const bool branch_taken_0x14b364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B368u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14b364) {
            ctx->pc = 0x14B398u;
            goto label_14b398;
        }
    }
    ctx->pc = 0x14B36Cu;
label_14b36c:
    // 0x14b36c: 0x14400006
    ctx->pc = 0x14B36Cu;
    {
        const bool branch_taken_0x14b36c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B370u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x14b36c) {
            ctx->pc = 0x14B388u;
            goto label_14b388;
        }
    }
    ctx->pc = 0x14B374u;
    // 0x14b374: 0x14400010
    ctx->pc = 0x14B374u;
    {
        const bool branch_taken_0x14b374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B378u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x14b374) {
            ctx->pc = 0x14B3B8u;
            goto label_14b3b8;
        }
    }
    ctx->pc = 0x14B37Cu;
label_14b37c:
    // 0x14b37c: 0x3c02002d
    ctx->pc = 0x14b37cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x14b380: 0x10000074
    ctx->pc = 0x14B380u;
    {
        const bool branch_taken_0x14b380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B384u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26856));
        if (branch_taken_0x14b380) {
            ctx->pc = 0x14B554u;
            goto label_14b554;
        }
    }
    ctx->pc = 0x14B388u;
label_14b388:
    // 0x14b388: 0x14400008
    ctx->pc = 0x14B388u;
    {
        const bool branch_taken_0x14b388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B38Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x14b388) {
            ctx->pc = 0x14B3ACu;
            goto label_14b3ac;
        }
    }
    ctx->pc = 0x14B390u;
label_14b390:
    // 0x14b390: 0x8fa20004
    ctx->pc = 0x14b390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b394: 0x3a0202d
    ctx->pc = 0x14b394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14b398:
    // 0x14b398: 0x8fa30024
    ctx->pc = 0x14b398u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x14b39c: 0x431026
    ctx->pc = 0x14b39cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b3a0: 0x2102b
    ctx->pc = 0x14b3a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b3a4: 0x1000006b
    ctx->pc = 0x14B3A4u;
    {
        const bool branch_taken_0x14b3a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B3A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x14b3a4) {
            ctx->pc = 0x14B554u;
            goto label_14b554;
        }
    }
    ctx->pc = 0x14B3ACu;
label_14b3ac:
    // 0x14b3ac: 0x14400008
    ctx->pc = 0x14B3ACu;
    {
        const bool branch_taken_0x14b3ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B3B0u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x14b3ac) {
            ctx->pc = 0x14B3D0u;
            goto label_14b3d0;
        }
    }
    ctx->pc = 0x14B3B4u;
    // 0x14b3b4: 0x8fa30024
    ctx->pc = 0x14b3b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_14b3b8:
    // 0x14b3b8: 0x200202d
    ctx->pc = 0x14b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3bc: 0x8fa20004
    ctx->pc = 0x14b3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b3c0: 0x431026
    ctx->pc = 0x14b3c0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b3c4: 0x2102b
    ctx->pc = 0x14b3c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b3c8: 0x10000062
    ctx->pc = 0x14B3C8u;
    {
        const bool branch_taken_0x14b3c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B3CCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x14b3c8) {
            ctx->pc = 0x14B554u;
            goto label_14b554;
        }
    }
    ctx->pc = 0x14B3D0u;
label_14b3d0:
    // 0x14b3d0: 0x3c16ffff
    ctx->pc = 0x14b3d0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)65535 << 16));
    // 0x14b3d4: 0x16b03e
    ctx->pc = 0x14b3d4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x14b3d8: 0xdfb20030
    ctx->pc = 0x14b3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b3dc: 0x2768024
    ctx->pc = 0x14b3dcu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x14b3e0: 0x256a824
    ctx->pc = 0x14b3e0u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x14b3e4: 0x13983e
    ctx->pc = 0x14b3e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x14b3e8: 0x12903e
    ctx->pc = 0x14b3e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x14b3ec: 0x200282d
    ctx->pc = 0x14b3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3f0: 0xc0528a8
    ctx->pc = 0x14B3F0u;
    SET_GPR_U32(ctx, 31, 0x14B3F8u);
    ctx->pc = 0x14B3F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3F8u; }
        else if (ctx->pc != 0x14B3F8u) { ctx->pc = 0x14B3F8u; }
    }
    if (ctx->pc != 0x14B3F8u) { return; }
    ctx->pc = 0x14B3F8u;
    // 0x14b3f8: 0x40a02d
    ctx->pc = 0x14b3f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3fc: 0x200282d
    ctx->pc = 0x14b3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b400: 0xc0528a8
    ctx->pc = 0x14B400u;
    SET_GPR_U32(ctx, 31, 0x14B408u);
    ctx->pc = 0x14B404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B408u; }
        else if (ctx->pc != 0x14B408u) { ctx->pc = 0x14B408u; }
    }
    if (ctx->pc != 0x14B408u) { return; }
    ctx->pc = 0x14B408u;
    // 0x14b408: 0x40882d
    ctx->pc = 0x14b408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b40c: 0x2a0202d
    ctx->pc = 0x14b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b410: 0xc0528a8
    ctx->pc = 0x14B410u;
    SET_GPR_U32(ctx, 31, 0x14B418u);
    ctx->pc = 0x14B414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B418u; }
        else if (ctx->pc != 0x14B418u) { ctx->pc = 0x14B418u; }
    }
    if (ctx->pc != 0x14B418u) { return; }
    ctx->pc = 0x14B418u;
    // 0x14b418: 0x40802d
    ctx->pc = 0x14b418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b41c: 0x240202d
    ctx->pc = 0x14b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b420: 0xc0528a8
    ctx->pc = 0x14B420u;
    SET_GPR_U32(ctx, 31, 0x14B428u);
    ctx->pc = 0x14B424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14A2A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___muldi3_0x14a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B428u; }
        else if (ctx->pc != 0x14B428u) { ctx->pc = 0x14B428u; }
    }
    if (ctx->pc != 0x14B428u) { return; }
    ctx->pc = 0x14B428u;
    // 0x14b428: 0x230802d
    ctx->pc = 0x14b428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x14b42c: 0x8fa50008
    ctx->pc = 0x14b42cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b430: 0x10203c
    ctx->pc = 0x14b430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x14b434: 0x211882b
    ctx->pc = 0x14b434u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x14b438: 0x284202d
    ctx->pc = 0x14b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x14b43c: 0x10803e
    ctx->pc = 0x14b43cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x14b440: 0x8fa70028
    ctx->pc = 0x14b440u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b444: 0x2168024
    ctx->pc = 0x14b444u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x14b448: 0x8fa30004
    ctx->pc = 0x14b448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14b44c: 0x11883c
    ctx->pc = 0x14b44cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x14b450: 0x8fa60024
    ctx->pc = 0x14b450u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x14b454: 0x94a02b
    ctx->pc = 0x14b454u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x14b458: 0x202802d
    ctx->pc = 0x14b458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x14b45c: 0xa72821
    ctx->pc = 0x14b45cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x14b460: 0x661826
    ctx->pc = 0x14b460u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14b464: 0x2348825
    ctx->pc = 0x14b464u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14b468: 0x24a50004
    ctx->pc = 0x14b468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x14b46c: 0x230882d
    ctx->pc = 0x14b46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x14b470: 0x3182b
    ctx->pc = 0x14b470u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x14b474: 0x2402ffff
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b478: 0x210fa
    ctx->pc = 0x14b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x14b47c: 0xafa30044
    ctx->pc = 0x14b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x14b480: 0x51102b
    ctx->pc = 0x14b480u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14b484: 0x10400011
    ctx->pc = 0x14B484u;
    {
        const bool branch_taken_0x14b484 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B488u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        if (branch_taken_0x14b484) {
            ctx->pc = 0x14B4CCu;
            goto label_14b4cc;
        }
    }
    ctx->pc = 0x14B48Cu;
    // 0x14b48c: 0x34068000
    ctx->pc = 0x14b48cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    // 0x14b490: 0x6343c
    ctx->pc = 0x14b490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x14b494: 0x2403ffff
    ctx->pc = 0x14b494u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b498: 0x318fa
    ctx->pc = 0x14b498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x14b49c: 0x32220001
    ctx->pc = 0x14b49cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_14b4a0:
    // 0x14b4a0: 0x2103c
    ctx->pc = 0x14b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14b4a4: 0x2103f
    ctx->pc = 0x14b4a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x14b4a8: 0x10400003
    ctx->pc = 0x14B4A8u;
    {
        const bool branch_taken_0x14b4a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B4ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x14b4a8) {
            ctx->pc = 0x14B4B8u;
            goto label_14b4b8;
        }
    }
    ctx->pc = 0x14B4B0u;
    // 0x14b4b0: 0x4207a
    ctx->pc = 0x14b4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x14b4b4: 0x862025
    ctx->pc = 0x14b4b4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_14b4b8:
    // 0x14b4b8: 0x11887a
    ctx->pc = 0x14b4b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x14b4bc: 0x71102b
    ctx->pc = 0x14b4bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x14b4c0: 0x1440fff7
    ctx->pc = 0x14B4C0u;
    {
        const bool branch_taken_0x14b4c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B4C4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x14b4c0) {
            ctx->pc = 0x14B4A0u;
            goto label_14b4a0;
        }
    }
    ctx->pc = 0x14B4C8u;
    // 0x14b4c8: 0xafa50048
    ctx->pc = 0x14b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_14b4cc:
    // 0x14b4cc: 0x2402ffff
    ctx->pc = 0x14b4ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b4d0: 0x2113a
    ctx->pc = 0x14b4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x14b4d4: 0x51102b
    ctx->pc = 0x14b4d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14b4d8: 0x14400011
    ctx->pc = 0x14B4D8u;
    {
        const bool branch_taken_0x14b4d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14B4DCu;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
        if (branch_taken_0x14b4d8) {
            ctx->pc = 0x14B520u;
            goto label_14b520;
        }
    }
    ctx->pc = 0x14B4E0u;
    // 0x14b4e0: 0x8fa50048
    ctx->pc = 0x14b4e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14b4e4: 0x34088000
    ctx->pc = 0x14b4e4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 0), 32768));
    // 0x14b4e8: 0x8443c
    ctx->pc = 0x14b4e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x14b4ec: 0x24070001
    ctx->pc = 0x14b4ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b4f0: 0x2406ffff
    ctx->pc = 0x14b4f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b4f4: 0x6313a
    ctx->pc = 0x14b4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_14b4f8:
    // 0x14b4f8: 0x118878
    ctx->pc = 0x14b4f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x14b4fc: 0x881824
    ctx->pc = 0x14b4fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x14b500: 0x2271025
    ctx->pc = 0x14b500u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x14b504: 0x24a5ffff
    ctx->pc = 0x14b504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14b508: 0x43880b
    ctx->pc = 0x14b508u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
    // 0x14b50c: 0xd1102b
    ctx->pc = 0x14b50cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x14b510: 0x1040fff9
    ctx->pc = 0x14B510u;
    {
        const bool branch_taken_0x14b510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B514u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        if (branch_taken_0x14b510) {
            ctx->pc = 0x14B4F8u;
            goto label_14b4f8;
        }
    }
    ctx->pc = 0x14B518u;
    // 0x14b518: 0xafa50048
    ctx->pc = 0x14b518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x14b51c: 0x322300ff
    ctx->pc = 0x14b51cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 255));
label_14b520:
    // 0x14b520: 0x24020080
    ctx->pc = 0x14b520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x14b524: 0x54620008
    ctx->pc = 0x14B524u;
    {
        const bool branch_taken_0x14b524 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x14b524) {
            ctx->pc = 0x14B528u;
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->pc = 0x14B548u;
            goto label_14b548;
        }
    }
    ctx->pc = 0x14B52Cu;
    // 0x14b52c: 0x32220100
    ctx->pc = 0x14b52cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 256));
    // 0x14b530: 0x10400003
    ctx->pc = 0x14B530u;
    {
        const bool branch_taken_0x14b530 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B534u;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)128);
        if (branch_taken_0x14b530) {
            ctx->pc = 0x14B540u;
            goto label_14b540;
        }
    }
    ctx->pc = 0x14B538u;
    // 0x14b538: 0x10000002
    ctx->pc = 0x14B538u;
    {
        const bool branch_taken_0x14b538 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14B53Cu;
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)128);
        if (branch_taken_0x14b538) {
            ctx->pc = 0x14B544u;
            goto label_14b544;
        }
    }
    ctx->pc = 0x14B540u;
label_14b540:
    // 0x14b540: 0x44880b
    ctx->pc = 0x14b540u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 2));
label_14b544:
    // 0x14b544: 0xffb10050
    ctx->pc = 0x14b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_14b548:
    // 0x14b548: 0x24020003
    ctx->pc = 0x14b548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x14b54c: 0xaee20000
    ctx->pc = 0x14b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x14b550: 0x2e0202d
    ctx->pc = 0x14b550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_14b554:
    // 0x14b554: 0xc052b84
    ctx->pc = 0x14B554u;
    SET_GPR_U32(ctx, 31, 0x14B55Cu);
    ctx->pc = 0x14AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x14ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B55Cu; }
        else if (ctx->pc != 0x14B55Cu) { ctx->pc = 0x14B55Cu; }
    }
    if (ctx->pc != 0x14B55Cu) { return; }
    ctx->pc = 0x14B55Cu;
    // 0x14b55c: 0xdfbf00f0
    ctx->pc = 0x14b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14b560: 0xdfb700e0
    ctx->pc = 0x14b560u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14b564: 0xdfb600d0
    ctx->pc = 0x14b564u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14b568: 0xdfb500c0
    ctx->pc = 0x14b568u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14b56c: 0xdfb400b0
    ctx->pc = 0x14b56cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14b570: 0xdfb300a0
    ctx->pc = 0x14b570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14b574: 0xdfb20090
    ctx->pc = 0x14b574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14b578: 0xdfb10080
    ctx->pc = 0x14b578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14b57c: 0xdfb00070
    ctx->pc = 0x14b57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b580: 0x3e00008
    ctx->pc = 0x14B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14B36Cu: goto label_14b36c;
            case 0x14B37Cu: goto label_14b37c;
            case 0x14B388u: goto label_14b388;
            case 0x14B390u: goto label_14b390;
            case 0x14B398u: goto label_14b398;
            case 0x14B3ACu: goto label_14b3ac;
            case 0x14B3B8u: goto label_14b3b8;
            case 0x14B3D0u: goto label_14b3d0;
            case 0x14B4A0u: goto label_14b4a0;
            case 0x14B4B8u: goto label_14b4b8;
            case 0x14B4CCu: goto label_14b4cc;
            case 0x14B4F8u: goto label_14b4f8;
            case 0x14B520u: goto label_14b520;
            case 0x14B540u: goto label_14b540;
            case 0x14B544u: goto label_14b544;
            case 0x14B548u: goto label_14b548;
            case 0x14B554u: goto label_14b554;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B588u;
}
