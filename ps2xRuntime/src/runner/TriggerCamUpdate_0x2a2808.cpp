#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TriggerCamUpdate
// Address: 0x2a2808 - 0x2a2a78
void TriggerCamUpdate_0x2a2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2808u;

    // 0x2a2808: 0x27bdffd0
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a280c: 0xffbf0020
    ctx->pc = 0x2a280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2810: 0xffb10010
    ctx->pc = 0x2a2810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2814: 0xffb00000
    ctx->pc = 0x2a2814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2818: 0x3c020036
    ctx->pc = 0x2a2818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a281c: 0x8c42dbac
    ctx->pc = 0x2a281cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x2a2820: 0x14400003
    ctx->pc = 0x2A2820u;
    {
        const bool branch_taken_0x2a2820 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A2824u;
        SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
        if (branch_taken_0x2a2820) {
            ctx->pc = 0x2A2830u;
            goto label_2a2830;
        }
    }
    ctx->pc = 0x2A2828u;
    // 0x2a2828: 0x1000008e
    ctx->pc = 0x2A2828u;
    {
        const bool branch_taken_0x2a2828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A282Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a2828) {
            ctx->pc = 0x2A2A64u;
            goto label_2a2a64;
        }
    }
    ctx->pc = 0x2A2830u;
label_2a2830:
    // 0x2a2830: 0x8c83dbb0
    ctx->pc = 0x2a2830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294958000)));
    // 0x2a2834: 0x18600006
    ctx->pc = 0x2A2834u;
    {
        const bool branch_taken_0x2a2834 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A2838u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2a2834) {
            ctx->pc = 0x2A2850u;
            goto label_2a2850;
        }
    }
    ctx->pc = 0x2A283Cu;
    // 0x2a283c: 0x8c42ffbc
    ctx->pc = 0x2a283cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2a2840: 0x621023
    ctx->pc = 0x2a2840u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a2844: 0xac82dbb0
    ctx->pc = 0x2a2844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958000), GPR_U32(ctx, 2));
    // 0x2a2848: 0x10000086
    ctx->pc = 0x2A2848u;
    {
        const bool branch_taken_0x2a2848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A284Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a2848) {
            ctx->pc = 0x2A2A64u;
            goto label_2a2a64;
        }
    }
    ctx->pc = 0x2A2850u;
label_2a2850:
    // 0x2a2850: 0xc0855e2
    ctx->pc = 0x2A2850u;
    SET_GPR_U32(ctx, 31, 0x2A2858u);
    ctx->pc = 0x2A2854u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    ctx->pc = 0x215788u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamFreeze_0x215788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2858u; }
    }
    if (ctx->pc != 0x2A2858u) { return; }
    ctx->pc = 0x2A2858u;
    // 0x2a2858: 0x3c040036
    ctx->pc = 0x2a2858u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x2a285c: 0x2484de40
    ctx->pc = 0x2a285cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958656));
    // 0x2a2860: 0xc0b0f84
    ctx->pc = 0x2A2860u;
    SET_GPR_U32(ctx, 31, 0x2A2868u);
    ctx->pc = 0x2A2864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2868u; }
    }
    if (ctx->pc != 0x2A2868u) { return; }
    ctx->pc = 0x2A2868u;
    // 0x2a2868: 0x3c020034
    ctx->pc = 0x2a2868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a286c: 0x2442eb60
    ctx->pc = 0x2a286cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2a2870: 0x2610de10
    ctx->pc = 0x2a2870u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294958608));
    // 0x2a2874: 0xc6020030
    ctx->pc = 0x2a2874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a2878: 0xe4420140
    ctx->pc = 0x2a2878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x2a287c: 0xc6010034
    ctx->pc = 0x2a287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2880: 0xe4410144
    ctx->pc = 0x2a2880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x2a2884: 0xc6000038
    ctx->pc = 0x2a2884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2888: 0xe4400148
    ctx->pc = 0x2a2888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x2a288c: 0xe4420040
    ctx->pc = 0x2a288cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2a2890: 0xe4410044
    ctx->pc = 0x2a2890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2a2894: 0xe4400048
    ctx->pc = 0x2a2894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2a2898: 0x3c100034
    ctx->pc = 0x2a2898u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2a289c: 0x3c020036
    ctx->pc = 0x2a289cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a28a0: 0x8e0454f0
    ctx->pc = 0x2a28a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 21744)));
    // 0x2a28a4: 0x282d
    ctx->pc = 0x2a28a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28a8: 0x302d
    ctx->pc = 0x2a28a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28ac: 0x24070200
    ctx->pc = 0x2a28acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a28b0: 0xc0b0c6a
    ctx->pc = 0x2A28B0u;
    SET_GPR_U32(ctx, 31, 0x2A28B8u);
    ctx->pc = 0x2A28B4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294958012)));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28B8u; }
    }
    if (ctx->pc != 0x2A28B8u) { return; }
    ctx->pc = 0x2A28B8u;
    // 0x2a28b8: 0x40882d
    ctx->pc = 0x2a28b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28bc: 0x220202d
    ctx->pc = 0x2a28bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28c0: 0xc0b0f40
    ctx->pc = 0x2A28C0u;
    SET_GPR_U32(ctx, 31, 0x2A28C8u);
    ctx->pc = 0x2A28C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28C8u; }
    }
    if (ctx->pc != 0x2A28C8u) { return; }
    ctx->pc = 0x2A28C8u;
    // 0x2a28c8: 0x3c013f00
    ctx->pc = 0x2a28c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2a28cc: 0x44816000
    ctx->pc = 0x2a28ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2a28d0: 0xc0b0dd6
    ctx->pc = 0x2A28D0u;
    SET_GPR_U32(ctx, 31, 0x2A28D8u);
    ctx->pc = 0x2A28D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28D8u; }
    }
    if (ctx->pc != 0x2A28D8u) { return; }
    ctx->pc = 0x2A28D8u;
    // 0x2a28d8: 0x8e0454f0
    ctx->pc = 0x2a28d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 21744)));
    // 0x2a28dc: 0x282d
    ctx->pc = 0x2a28dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28e0: 0x24060130
    ctx->pc = 0x2a28e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 304));
    // 0x2a28e4: 0x24070200
    ctx->pc = 0x2a28e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a28e8: 0xc0b0c6a
    ctx->pc = 0x2A28E8u;
    SET_GPR_U32(ctx, 31, 0x2A28F0u);
    ctx->pc = 0x2A28ECu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 80));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28F0u; }
    }
    if (ctx->pc != 0x2A28F0u) { return; }
    ctx->pc = 0x2A28F0u;
    // 0x2a28f0: 0x40882d
    ctx->pc = 0x2a28f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28f4: 0x220202d
    ctx->pc = 0x2a28f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28f8: 0xc0b0f40
    ctx->pc = 0x2A28F8u;
    SET_GPR_U32(ctx, 31, 0x2A2900u);
    ctx->pc = 0x2A28FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2900u; }
    }
    if (ctx->pc != 0x2A2900u) { return; }
    ctx->pc = 0x2A2900u;
    // 0x2a2900: 0x3c013f00
    ctx->pc = 0x2a2900u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2a2904: 0x44816000
    ctx->pc = 0x2a2904u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2a2908: 0xc0b0dd6
    ctx->pc = 0x2A2908u;
    SET_GPR_U32(ctx, 31, 0x2A2910u);
    ctx->pc = 0x2A290Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2910u; }
    }
    if (ctx->pc != 0x2A2910u) { return; }
    ctx->pc = 0x2A2910u;
    // 0x2a2910: 0x3c020032
    ctx->pc = 0x2a2910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a2914: 0x8c4207f8
    ctx->pc = 0x2a2914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x2a2918: 0x1040000d
    ctx->pc = 0x2A2918u;
    {
        const bool branch_taken_0x2a2918 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A291Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2a2918) {
            ctx->pc = 0x2A2950u;
            goto label_2a2950;
        }
    }
    ctx->pc = 0x2A2920u;
    // 0x2a2920: 0x802d
    ctx->pc = 0x2a2920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2924: 0x24510898
    ctx->pc = 0x2a2924u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2200));
    // 0x2a2928: 0x101080
    ctx->pc = 0x2a2928u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a292c: 0x0
    ctx->pc = 0x2a292cu;
    // NOP
label_2a2930:
    // 0x2a2930: 0x511021
    ctx->pc = 0x2a2930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a2934: 0x8c440000
    ctx->pc = 0x2a2934u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2938: 0xc0b0ce8
    ctx->pc = 0x2A2938u;
    SET_GPR_U32(ctx, 31, 0x2A2940u);
    ctx->pc = 0x2A293Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2940u; }
    }
    if (ctx->pc != 0x2A2940u) { return; }
    ctx->pc = 0x2A2940u;
    // 0x2a2940: 0x26100001
    ctx->pc = 0x2a2940u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a2944: 0x2a020004
    ctx->pc = 0x2a2944u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2a2948: 0x1440fff9
    ctx->pc = 0x2A2948u;
    {
        const bool branch_taken_0x2a2948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A294Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2a2948) {
            ctx->pc = 0x2A2930u;
            goto label_2a2930;
        }
    }
    ctx->pc = 0x2A2950u;
label_2a2950:
    // 0x2a2950: 0x3c040036
    ctx->pc = 0x2a2950u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x2a2954: 0x3c030031
    ctx->pc = 0x2a2954u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2a2958: 0x8c82dbb4
    ctx->pc = 0x2a2958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294958004)));
    // 0x2a295c: 0x8c63ffbc
    ctx->pc = 0x2a295cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x2a2960: 0x431023
    ctx->pc = 0x2a2960u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2964: 0x1c40003d
    ctx->pc = 0x2A2964u;
    {
        const bool branch_taken_0x2a2964 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A2968u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294958004), GPR_U32(ctx, 2));
        if (branch_taken_0x2a2964) {
            ctx->pc = 0x2A2A5Cu;
            goto label_2a2a5c;
        }
    }
    ctx->pc = 0x2A296Cu;
    // 0x2a296c: 0x3c040036
    ctx->pc = 0x2a296cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x2a2970: 0x8c82dbb8
    ctx->pc = 0x2a2970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294958008)));
    // 0x2a2974: 0x18400003
    ctx->pc = 0x2A2974u;
    {
        const bool branch_taken_0x2a2974 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A2978u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x2a2974) {
            ctx->pc = 0x2A2984u;
            goto label_2a2984;
        }
    }
    ctx->pc = 0x2A297Cu;
    // 0x2a297c: 0x10000037
    ctx->pc = 0x2A297Cu;
    {
        const bool branch_taken_0x2a297c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2980u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294958008), GPR_U32(ctx, 2));
        if (branch_taken_0x2a297c) {
            ctx->pc = 0x2A2A5Cu;
            goto label_2a2a5c;
        }
    }
    ctx->pc = 0x2A2984u;
label_2a2984:
    // 0x2a2984: 0x3c020036
    ctx->pc = 0x2a2984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2988: 0x8c42de04
    ctx->pc = 0x2a2988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958596)));
    // 0x2a298c: 0x10400005
    ctx->pc = 0x2A298Cu;
    {
        const bool branch_taken_0x2a298c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2990u;
        SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
        if (branch_taken_0x2a298c) {
            ctx->pc = 0x2A29A4u;
            goto label_2a29a4;
        }
    }
    ctx->pc = 0x2A2994u;
    // 0x2a2994: 0x8c420010
    ctx->pc = 0x2a2994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a2998: 0x431024
    ctx->pc = 0x2a2998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a299c: 0x14400030
    ctx->pc = 0x2A299Cu;
    {
        const bool branch_taken_0x2a299c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A29A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a299c) {
            ctx->pc = 0x2A2A60u;
            goto label_2a2a60;
        }
    }
    ctx->pc = 0x2A29A4u;
label_2a29a4:
    // 0x2a29a4: 0x3c020036
    ctx->pc = 0x2a29a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a29a8: 0x8c43dbac
    ctx->pc = 0x2a29a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x2a29ac: 0x24020002
    ctx->pc = 0x2a29acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a29b0: 0x14620004
    ctx->pc = 0x2A29B0u;
    {
        const bool branch_taken_0x2a29b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2A29B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a29b0) {
            ctx->pc = 0x2A29C4u;
            goto label_2a29c4;
        }
    }
    ctx->pc = 0x2A29B8u;
    // 0x2a29b8: 0xc081782
    ctx->pc = 0x2A29B8u;
    SET_GPR_U32(ctx, 31, 0x2A29C0u);
    ctx->pc = 0x205E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnablePlayerControls_0x205e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A29C0u; }
    }
    if (ctx->pc != 0x2A29C0u) { return; }
    ctx->pc = 0x2A29C0u;
    // 0x2a29c0: 0x3c020036
    ctx->pc = 0x2a29c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a29c4:
    // 0x2a29c4: 0xac40dbac
    ctx->pc = 0x2a29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957996), GPR_U32(ctx, 0));
    // 0x2a29c8: 0x3c020032
    ctx->pc = 0x2a29c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a29cc: 0x8c4207f8
    ctx->pc = 0x2a29ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x2a29d0: 0x1040000d
    ctx->pc = 0x2A29D0u;
    {
        const bool branch_taken_0x2a29d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A29D4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a29d0) {
            ctx->pc = 0x2A2A08u;
            goto label_2a2a08;
        }
    }
    ctx->pc = 0x2A29D8u;
    // 0x2a29d8: 0x3c020032
    ctx->pc = 0x2a29d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a29dc: 0x24510898
    ctx->pc = 0x2a29dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2200));
    // 0x2a29e0: 0x101080
    ctx->pc = 0x2a29e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a29e4: 0x0
    ctx->pc = 0x2a29e4u;
    // NOP
label_2a29e8:
    // 0x2a29e8: 0x511021
    ctx->pc = 0x2a29e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a29ec: 0x8c440000
    ctx->pc = 0x2a29ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a29f0: 0xc0b0ce8
    ctx->pc = 0x2A29F0u;
    SET_GPR_U32(ctx, 31, 0x2A29F8u);
    ctx->pc = 0x2A29F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A29F8u; }
    }
    if (ctx->pc != 0x2A29F8u) { return; }
    ctx->pc = 0x2A29F8u;
    // 0x2a29f8: 0x26100001
    ctx->pc = 0x2a29f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a29fc: 0x2a020004
    ctx->pc = 0x2a29fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2a2a00: 0x1440fff9
    ctx->pc = 0x2A2A00u;
    {
        const bool branch_taken_0x2a2a00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A2A04u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2a2a00) {
            ctx->pc = 0x2A29E8u;
            goto label_2a29e8;
        }
    }
    ctx->pc = 0x2A2A08u;
label_2a2a08:
    // 0x2a2a08: 0x3c020031
    ctx->pc = 0x2a2a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a2a0c: 0xdc420e28
    ctx->pc = 0x2a2a0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2a2a10: 0x30420002
    ctx->pc = 0x2a2a10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2a2a14: 0x10400005
    ctx->pc = 0x2A2A14u;
    {
        const bool branch_taken_0x2a2a14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a2a14) {
            ctx->pc = 0x2A2A2Cu;
            goto label_2a2a2c;
        }
    }
    ctx->pc = 0x2A2A1Cu;
    // 0x2a2a1c: 0xc0855e6
    ctx->pc = 0x2A2A1Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A24u);
    ctx->pc = 0x215798u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamReturn_0x215798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A24u; }
    }
    if (ctx->pc != 0x2A2A24u) { return; }
    ctx->pc = 0x2A2A24u;
    // 0x2a2a24: 0x10000004
    ctx->pc = 0x2A2A24u;
    {
        const bool branch_taken_0x2a2a24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A2A28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2a2a24) {
            ctx->pc = 0x2A2A38u;
            goto label_2a2a38;
        }
    }
    ctx->pc = 0x2A2A2Cu;
label_2a2a2c:
    // 0x2a2a2c: 0xc09ce0a
    ctx->pc = 0x2A2A2Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A34u);
    ctx->pc = 0x273828u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_camera_0x273828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A34u; }
    }
    if (ctx->pc != 0x2A2A34u) { return; }
    ctx->pc = 0x2A2A34u;
    // 0x2a2a34: 0x3c020034
    ctx->pc = 0x2a2a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2a2a38:
    // 0x2a2a38: 0x2442eb60
    ctx->pc = 0x2a2a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2a2a3c: 0xc4400170
    ctx->pc = 0x2a2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2a40: 0xe4400140
    ctx->pc = 0x2a2a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x2a2a44: 0xc4400174
    ctx->pc = 0x2a2a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2a48: 0xe4400144
    ctx->pc = 0x2a2a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x2a2a4c: 0xc4400178
    ctx->pc = 0x2a2a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2a50: 0xe4400148
    ctx->pc = 0x2a2a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x2a2a54: 0xc09aba6
    ctx->pc = 0x2A2A54u;
    SET_GPR_U32(ctx, 31, 0x2A2A5Cu);
    ctx->pc = 0x2A2A58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x26AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraNewPos_0x26ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2A5Cu; }
    }
    if (ctx->pc != 0x2A2A5Cu) { return; }
    ctx->pc = 0x2A2A5Cu;
label_2a2a5c:
    // 0x2a2a5c: 0x3c020036
    ctx->pc = 0x2a2a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a2a60:
    // 0x2a2a60: 0x8c42dbac
    ctx->pc = 0x2a2a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
label_2a2a64:
    // 0x2a2a64: 0xdfbf0020
    ctx->pc = 0x2a2a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2a68: 0xdfb10010
    ctx->pc = 0x2a2a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2a6c: 0xdfb00000
    ctx->pc = 0x2a2a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2a70: 0x3e00008
    ctx->pc = 0x2A2A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2A74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2830u: goto label_2a2830;
            case 0x2A2850u: goto label_2a2850;
            case 0x2A2930u: goto label_2a2930;
            case 0x2A2950u: goto label_2a2950;
            case 0x2A2984u: goto label_2a2984;
            case 0x2A29A4u: goto label_2a29a4;
            case 0x2A29C4u: goto label_2a29c4;
            case 0x2A29E8u: goto label_2a29e8;
            case 0x2A2A08u: goto label_2a2a08;
            case 0x2A2A2Cu: goto label_2a2a2c;
            case 0x2A2A38u: goto label_2a2a38;
            case 0x2A2A5Cu: goto label_2a2a5c;
            case 0x2A2A60u: goto label_2a2a60;
            case 0x2A2A64u: goto label_2a2a64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A2A78u;
}
