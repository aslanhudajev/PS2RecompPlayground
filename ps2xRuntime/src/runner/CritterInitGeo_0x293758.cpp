#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitGeo
// Address: 0x293758 - 0x293a60
void CritterInitGeo_0x293758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293758u;

    // 0x293758: 0x27bdff90
    ctx->pc = 0x293758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29375c: 0xffbf0060
    ctx->pc = 0x29375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x293760: 0xffb50050
    ctx->pc = 0x293760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x293764: 0xffb40040
    ctx->pc = 0x293764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x293768: 0xffb30030
    ctx->pc = 0x293768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29376c: 0xffb20020
    ctx->pc = 0x29376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x293770: 0xffb10010
    ctx->pc = 0x293770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293774: 0xffb00000
    ctx->pc = 0x293774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293778: 0x80982d
    ctx->pc = 0x293778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29377c: 0xa0802d
    ctx->pc = 0x29377cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293780: 0xc0a82d
    ctx->pc = 0x293780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293784: 0x8e740004
    ctx->pc = 0x293784u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x293788: 0x3c020033
    ctx->pc = 0x293788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x29378c: 0x8c44463c
    ctx->pc = 0x29378cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 17980)));
    // 0x293790: 0x3c12003a
    ctx->pc = 0x293790u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x293794: 0x26452550
    ctx->pc = 0x293794u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 9552));
    // 0x293798: 0xc0b3ec0
    ctx->pc = 0x293798u;
    SET_GPR_U32(ctx, 31, 0x2937A0u);
    ctx->pc = 0x29379Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937A0u; }
    }
    if (ctx->pc != 0x2937A0u) { return; }
    ctx->pc = 0x2937A0u;
    // 0x2937a0: 0xae620070
    ctx->pc = 0x2937a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
    // 0x2937a4: 0xc60c0020
    ctx->pc = 0x2937a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2937a8: 0xc0ba04a
    ctx->pc = 0x2937A8u;
    SET_GPR_U32(ctx, 31, 0x2937B0u);
    ctx->pc = 0x2937ACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937B0u; }
    }
    if (ctx->pc != 0x2937B0u) { return; }
    ctx->pc = 0x2937B0u;
    // 0x2937b0: 0xe6600104
    ctx->pc = 0x2937b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    // 0x2937b4: 0xe6600108
    ctx->pc = 0x2937b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 264), bits); }
    // 0x2937b8: 0x26710010
    ctx->pc = 0x2937b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 16));
    // 0x2937bc: 0x26442550
    ctx->pc = 0x2937bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 9552));
    // 0x2937c0: 0xc0b549e
    ctx->pc = 0x2937C0u;
    SET_GPR_U32(ctx, 31, 0x2937C8u);
    ctx->pc = 0x2937C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937C8u; }
    }
    if (ctx->pc != 0x2937C8u) { return; }
    ctx->pc = 0x2937C8u;
    // 0x2937c8: 0xc6000030
    ctx->pc = 0x2937c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2937cc: 0xe6600040
    ctx->pc = 0x2937ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x2937d0: 0xc6000034
    ctx->pc = 0x2937d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2937d4: 0xe6600044
    ctx->pc = 0x2937d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x2937d8: 0xc6000038
    ctx->pc = 0x2937d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2937dc: 0xe6600048
    ctx->pc = 0x2937dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x2937e0: 0xc66c0108
    ctx->pc = 0x2937e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2937e4: 0xc0b5632
    ctx->pc = 0x2937E4u;
    SET_GPR_U32(ctx, 31, 0x2937ECu);
    ctx->pc = 0x2937E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2937ECu; }
    }
    if (ctx->pc != 0x2937ECu) { return; }
    ctx->pc = 0x2937ECu;
    // 0x2937ec: 0x8e82005c
    ctx->pc = 0x2937ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x2937f0: 0x30421000
    ctx->pc = 0x2937f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2937f4: 0x24070800
    ctx->pc = 0x2937f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2937f8: 0x8e840138
    ctx->pc = 0x2937f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 312)));
    // 0x2937fc: 0x26650080
    ctx->pc = 0x2937fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 128));
    // 0x293800: 0x302d
    ctx->pc = 0x293800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293804: 0xc08476a
    ctx->pc = 0x293804u;
    SET_GPR_U32(ctx, 31, 0x29380Cu);
    ctx->pc = 0x293808u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29380Cu; }
    }
    if (ctx->pc != 0x29380Cu) { return; }
    ctx->pc = 0x29380Cu;
    // 0x29380c: 0xae620080
    ctx->pc = 0x29380cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x293810: 0x8c430000
    ctx->pc = 0x293810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293814: 0xae6300cc
    ctx->pc = 0x293814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 3));
    // 0x293818: 0x8c440000
    ctx->pc = 0x293818u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29381c: 0xc0b3f94
    ctx->pc = 0x29381Cu;
    SET_GPR_U32(ctx, 31, 0x293824u);
    ctx->pc = 0x293820u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293824u; }
    }
    if (ctx->pc != 0x293824u) { return; }
    ctx->pc = 0x293824u;
    // 0x293824: 0x8e82005c
    ctx->pc = 0x293824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x293828: 0x30420001
    ctx->pc = 0x293828u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x29382c: 0x10400003
    ctx->pc = 0x29382Cu;
    {
        const bool branch_taken_0x29382c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293830u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29382c) {
            ctx->pc = 0x29383Cu;
            goto label_29383c;
        }
    }
    ctx->pc = 0x293834u;
    // 0x293834: 0xc0a4d58
    ctx->pc = 0x293834u;
    SET_GPR_U32(ctx, 31, 0x29383Cu);
    ctx->pc = 0x293838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAddShadow_0x293560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29383Cu; }
    }
    if (ctx->pc != 0x29383Cu) { return; }
    ctx->pc = 0x29383Cu;
label_29383c:
    // 0x29383c: 0x260202d
    ctx->pc = 0x29383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293840: 0x86850056
    ctx->pc = 0x293840u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 86)));
    // 0x293844: 0xc0a47e0
    ctx->pc = 0x293844u;
    SET_GPR_U32(ctx, 31, 0x29384Cu);
    ctx->pc = 0x293848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29384Cu; }
    }
    if (ctx->pc != 0x29384Cu) { return; }
    ctx->pc = 0x29384Cu;
    // 0x29384c: 0x40182d
    ctx->pc = 0x29384cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293850: 0xae6300d4
    ctx->pc = 0x293850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 3));
    // 0x293854: 0x8e82005c
    ctx->pc = 0x293854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x293858: 0x30420010
    ctx->pc = 0x293858u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x29385c: 0x10400007
    ctx->pc = 0x29385Cu;
    {
        const bool branch_taken_0x29385c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293860u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29385c) {
            ctx->pc = 0x29387Cu;
            goto label_29387c;
        }
    }
    ctx->pc = 0x293864u;
    // 0x293864: 0x50600006
    ctx->pc = 0x293864u;
    {
        const bool branch_taken_0x293864 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x293864) {
            ctx->pc = 0x293868u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 88)));
            ctx->pc = 0x293880u;
            goto label_293880;
        }
    }
    ctx->pc = 0x29386Cu;
    // 0x29386c: 0x8c620074
    ctx->pc = 0x29386cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x293870: 0x54400002
    ctx->pc = 0x293870u;
    {
        const bool branch_taken_0x293870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x293870) {
            ctx->pc = 0x293874u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
            ctx->pc = 0x29387Cu;
            goto label_29387c;
        }
    }
    ctx->pc = 0x293878u;
    // 0x293878: 0x260202d
    ctx->pc = 0x293878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29387c:
    // 0x29387c: 0x86850058
    ctx->pc = 0x29387cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 88)));
label_293880:
    // 0x293880: 0xc0a47e0
    ctx->pc = 0x293880u;
    SET_GPR_U32(ctx, 31, 0x293888u);
    ctx->pc = 0x293884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293888u; }
    }
    if (ctx->pc != 0x293888u) { return; }
    ctx->pc = 0x293888u;
    // 0x293888: 0xae6200d8
    ctx->pc = 0x293888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 2));
    // 0x29388c: 0x260202d
    ctx->pc = 0x29388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293890: 0x8685005a
    ctx->pc = 0x293890u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x293894: 0xc0a47e0
    ctx->pc = 0x293894u;
    SET_GPR_U32(ctx, 31, 0x29389Cu);
    ctx->pc = 0x293898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29389Cu; }
    }
    if (ctx->pc != 0x29389Cu) { return; }
    ctx->pc = 0x29389Cu;
    // 0x29389c: 0xae6200e8
    ctx->pc = 0x29389cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 2));
    // 0x2938a0: 0x26640040
    ctx->pc = 0x2938a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 64));
    // 0x2938a4: 0x282d
    ctx->pc = 0x2938a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2938a8: 0x3c0140a0
    ctx->pc = 0x2938a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2938ac: 0x44816000
    ctx->pc = 0x2938acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2938b0: 0x3c014080
    ctx->pc = 0x2938b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2938b4: 0x44816800
    ctx->pc = 0x2938b4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2938b8: 0x3c01c47a
    ctx->pc = 0x2938b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50298 << 16));
    // 0x2938bc: 0x44817000
    ctx->pc = 0x2938bcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2938c0: 0x302d
    ctx->pc = 0x2938c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2938c4: 0xc087b24
    ctx->pc = 0x2938C4u;
    SET_GPR_U32(ctx, 31, 0x2938CCu);
    ctx->pc = 0x2938C8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2938CCu; }
    }
    if (ctx->pc != 0x2938CCu) { return; }
    ctx->pc = 0x2938CCu;
    // 0x2938cc: 0x10400018
    ctx->pc = 0x2938CCu;
    {
        const bool branch_taken_0x2938cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2938D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2938cc) {
            ctx->pc = 0x293930u;
            goto label_293930;
        }
    }
    ctx->pc = 0x2938D4u;
    // 0x2938d4: 0x2450fbb0
    ctx->pc = 0x2938d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x2938d8: 0xc6000034
    ctx->pc = 0x2938d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2938dc: 0xc68100b0
    ctx->pc = 0x2938dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2938e0: 0x46010000
    ctx->pc = 0x2938e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2938e4: 0xe6600044
    ctx->pc = 0x2938e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x2938e8: 0x8e6500d0
    ctx->pc = 0x2938e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x2938ec: 0x50a00015
    ctx->pc = 0x2938ECu;
    {
        const bool branch_taken_0x2938ec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2938ec) {
            ctx->pc = 0x2938F0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 16));
            ctx->pc = 0x293944u;
            goto label_293944;
        }
    }
    ctx->pc = 0x2938F4u;
    // 0x2938f4: 0xc0b549e
    ctx->pc = 0x2938F4u;
    SET_GPR_U32(ctx, 31, 0x2938FCu);
    ctx->pc = 0x2938F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2938FCu; }
    }
    if (ctx->pc != 0x2938FCu) { return; }
    ctx->pc = 0x2938FCu;
    // 0x2938fc: 0x8e6200d0
    ctx->pc = 0x2938fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x293900: 0xc6600040
    ctx->pc = 0x293900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293904: 0xe4400030
    ctx->pc = 0x293904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x293908: 0x8e6200d0
    ctx->pc = 0x293908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x29390c: 0xc6600044
    ctx->pc = 0x29390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293910: 0xe4400034
    ctx->pc = 0x293910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x293914: 0x8e6200d0
    ctx->pc = 0x293914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x293918: 0xc6600048
    ctx->pc = 0x293918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29391c: 0xe4400038
    ctx->pc = 0x29391cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x293920: 0x8e6200d0
    ctx->pc = 0x293920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x293924: 0xc6000034
    ctx->pc = 0x293924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293928: 0x10000005
    ctx->pc = 0x293928u;
    {
        const bool branch_taken_0x293928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29392Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        if (branch_taken_0x293928) {
            ctx->pc = 0x293940u;
            goto label_293940;
        }
    }
    ctx->pc = 0x293930u;
label_293930:
    // 0x293930: 0xc6600044
    ctx->pc = 0x293930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293934: 0xc68100b0
    ctx->pc = 0x293934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293938: 0x46010000
    ctx->pc = 0x293938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29393c: 0xe6600044
    ctx->pc = 0x29393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_293940:
    // 0x293940: 0x26700010
    ctx->pc = 0x293940u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 16));
label_293944:
    // 0x293944: 0x200202d
    ctx->pc = 0x293944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293948: 0xc0b5494
    ctx->pc = 0x293948u;
    SET_GPR_U32(ctx, 31, 0x293950u);
    ctx->pc = 0x29394Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293950u; }
    }
    if (ctx->pc != 0x293950u) { return; }
    ctx->pc = 0x293950u;
    // 0x293950: 0x8e620070
    ctx->pc = 0x293950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x293954: 0x40202d
    ctx->pc = 0x293954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293958: 0xc0b42dc
    ctx->pc = 0x293958u;
    SET_GPR_U32(ctx, 31, 0x293960u);
    ctx->pc = 0x29395Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->pc = 0x2D0B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UnparentMatrix_0x2d0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293960u; }
    }
    if (ctx->pc != 0x293960u) { return; }
    ctx->pc = 0x293960u;
    // 0x293960: 0x200202d
    ctx->pc = 0x293960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293964: 0xc0b549e
    ctx->pc = 0x293964u;
    SET_GPR_U32(ctx, 31, 0x29396Cu);
    ctx->pc = 0x293968u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 1056));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29396Cu; }
    }
    if (ctx->pc != 0x29396Cu) { return; }
    ctx->pc = 0x29396Cu;
    // 0x29396c: 0xc6600040
    ctx->pc = 0x29396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293970: 0xe6600460
    ctx->pc = 0x293970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1120), bits); }
    // 0x293974: 0xc6600044
    ctx->pc = 0x293974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293978: 0xe6600464
    ctx->pc = 0x293978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1124), bits); }
    // 0x29397c: 0xc6600048
    ctx->pc = 0x29397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293980: 0xe6600468
    ctx->pc = 0x293980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1128), bits); }
    // 0x293984: 0x268400c0
    ctx->pc = 0x293984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 192));
    // 0x293988: 0x26650060
    ctx->pc = 0x293988u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 96));
    // 0x29398c: 0xc0b5874
    ctx->pc = 0x29398Cu;
    SET_GPR_U32(ctx, 31, 0x293994u);
    ctx->pc = 0x293990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat3_0x2d61d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293994u; }
    }
    if (ctx->pc != 0x293994u) { return; }
    ctx->pc = 0x293994u;
    // 0x293994: 0xc6630040
    ctx->pc = 0x293994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x293998: 0xc6600060
    ctx->pc = 0x293998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29399c: 0x46001800
    ctx->pc = 0x29399cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2939a0: 0xe6600060
    ctx->pc = 0x2939a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x2939a4: 0xc6610044
    ctx->pc = 0x2939a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2939a8: 0xc6600064
    ctx->pc = 0x2939a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2939ac: 0x46000800
    ctx->pc = 0x2939acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2939b0: 0xe6600064
    ctx->pc = 0x2939b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x2939b4: 0xc6620048
    ctx->pc = 0x2939b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2939b8: 0xc6600068
    ctx->pc = 0x2939b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2939bc: 0x46001000
    ctx->pc = 0x2939bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2939c0: 0xe6600068
    ctx->pc = 0x2939c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x2939c4: 0xe6630050
    ctx->pc = 0x2939c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2939c8: 0xc68000b4
    ctx->pc = 0x2939c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2939cc: 0x46000840
    ctx->pc = 0x2939ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2939d0: 0xe6610054
    ctx->pc = 0x2939d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x2939d4: 0xe6620058
    ctx->pc = 0x2939d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x2939d8: 0x8e6400cc
    ctx->pc = 0x2939d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x2939dc: 0xae6400dc
    ctx->pc = 0x2939dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 4));
    // 0x2939e0: 0x266503e0
    ctx->pc = 0x2939e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 992));
    // 0x2939e4: 0xc0b4302
    ctx->pc = 0x2939E4u;
    SET_GPR_U32(ctx, 31, 0x2939ECu);
    ctx->pc = 0x2939E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2939ECu; }
    }
    if (ctx->pc != 0x2939ECu) { return; }
    ctx->pc = 0x2939ECu;
    // 0x2939ec: 0x8e620004
    ctx->pc = 0x2939ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2939f0: 0xc44100a4
    ctx->pc = 0x2939f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2939f4: 0x3c014479
    ctx->pc = 0x2939f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x2939f8: 0x3421c000
    ctx->pc = 0x2939f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x2939fc: 0x44810000
    ctx->pc = 0x2939fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x293a00: 0x46000834
    ctx->pc = 0x293a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293a04: 0x0
    ctx->pc = 0x293a04u;
    // NOP
    // 0x293a08: 0x45020007
    ctx->pc = 0x293A08u;
    {
        const bool branch_taken_0x293a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x293a08) {
            ctx->pc = 0x293A0Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x293A28u;
            goto label_293a28;
        }
    }
    ctx->pc = 0x293A10u;
    // 0x293a10: 0xc44000a0
    ctx->pc = 0x293a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a14: 0xe66004e0
    ctx->pc = 0x293a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1248), bits); }
    // 0x293a18: 0xc44000a4
    ctx->pc = 0x293a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a1c: 0xe66004e4
    ctx->pc = 0x293a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1252), bits); }
    // 0x293a20: 0x10000005
    ctx->pc = 0x293A20u;
    {
        const bool branch_taken_0x293a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x293A24u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x293a20) {
            ctx->pc = 0x293A38u;
            goto label_293a38;
        }
    }
    ctx->pc = 0x293A28u;
label_293a28:
    // 0x293a28: 0xe66004e0
    ctx->pc = 0x293a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1248), bits); }
    // 0x293a2c: 0xc6600464
    ctx->pc = 0x293a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293a30: 0xe66004e4
    ctx->pc = 0x293a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1252), bits); }
    // 0x293a34: 0xc6600468
    ctx->pc = 0x293a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293a38:
    // 0x293a38: 0xe66004e8
    ctx->pc = 0x293a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1256), bits); }
    // 0x293a3c: 0xdfbf0060
    ctx->pc = 0x293a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293a40: 0xdfb50050
    ctx->pc = 0x293a40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293a44: 0xdfb40040
    ctx->pc = 0x293a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293a48: 0xdfb30030
    ctx->pc = 0x293a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293a4c: 0xdfb20020
    ctx->pc = 0x293a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293a50: 0xdfb10010
    ctx->pc = 0x293a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293a54: 0xdfb00000
    ctx->pc = 0x293a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293a58: 0x3e00008
    ctx->pc = 0x293A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293A5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29383Cu: goto label_29383c;
            case 0x29387Cu: goto label_29387c;
            case 0x293880u: goto label_293880;
            case 0x293930u: goto label_293930;
            case 0x293940u: goto label_293940;
            case 0x293944u: goto label_293944;
            case 0x293A28u: goto label_293a28;
            case 0x293A38u: goto label_293a38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293A60u;
}
