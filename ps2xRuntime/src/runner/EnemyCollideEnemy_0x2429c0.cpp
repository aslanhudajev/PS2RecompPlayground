#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyCollideEnemy
// Address: 0x2429c0 - 0x242c6c
void EnemyCollideEnemy_0x2429c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2429c0u;

    // 0x2429c0: 0x27bdfef0
    ctx->pc = 0x2429c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2429c4: 0xffbf00d0
    ctx->pc = 0x2429c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2429c8: 0xffbe00c0
    ctx->pc = 0x2429c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2429cc: 0xffb700b0
    ctx->pc = 0x2429ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2429d0: 0xffb600a0
    ctx->pc = 0x2429d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2429d4: 0xffb50090
    ctx->pc = 0x2429d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2429d8: 0xffb40080
    ctx->pc = 0x2429d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2429dc: 0xffb30070
    ctx->pc = 0x2429dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2429e0: 0xffb20060
    ctx->pc = 0x2429e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2429e4: 0xffb10050
    ctx->pc = 0x2429e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2429e8: 0xffb00040
    ctx->pc = 0x2429e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2429ec: 0xe7b80100
    ctx->pc = 0x2429ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2429f0: 0xe7b700f8
    ctx->pc = 0x2429f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2429f4: 0xe7b600f0
    ctx->pc = 0x2429f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2429f8: 0xe7b500e8
    ctx->pc = 0x2429f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2429fc: 0xe7b400e0
    ctx->pc = 0x2429fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x242a00: 0x80982d
    ctx->pc = 0x242a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a04: 0xa0f02d
    ctx->pc = 0x242a04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a08: 0xc0902d
    ctx->pc = 0x242a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a0c: 0x46006546
    ctx->pc = 0x242a0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x242a10: 0x46006dc6
    ctx->pc = 0x242a10u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x242a14: 0x100b82d
    ctx->pc = 0x242a14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a18: 0x3c0147c3
    ctx->pc = 0x242a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x242a1c: 0x34215000
    ctx->pc = 0x242a1cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x242a20: 0x4481b000
    ctx->pc = 0x242a20u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x242a24: 0x2415ffff
    ctx->pc = 0x242a24u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242a28: 0x2414ffff
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242a2c: 0x3c030033
    ctx->pc = 0x242a2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x242a30: 0x2463dfd0
    ctx->pc = 0x242a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x242a34: 0x240203b0
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x242a38: 0x2621018
    ctx->pc = 0x242a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242a3c: 0x431021
    ctx->pc = 0x242a3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242a40: 0x8c56029c
    ctx->pc = 0x242a40u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x242a44: 0x40034800
    ctx->pc = 0x242a44u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242a48: 0x3c02003a
    ctx->pc = 0x242a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x242a4c: 0x8c4221d0
    ctx->pc = 0x242a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x242a50: 0x16e00004
    ctx->pc = 0x242A50u;
    {
        const bool branch_taken_0x242a50 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x242A54u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 3));
        if (branch_taken_0x242a50) {
            ctx->pc = 0x242A64u;
            goto label_242a64;
        }
    }
    ctx->pc = 0x242A58u;
    // 0x242a58: 0x3402ffff
    ctx->pc = 0x242a58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x242a5c: 0x56102a
    ctx->pc = 0x242a5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 22)));
    // 0x242a60: 0x2c2a00a
    ctx->pc = 0x242a60u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 22));
label_242a64:
    // 0x242a64: 0x3c030033
    ctx->pc = 0x242a64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x242a68: 0x2463dfd0
    ctx->pc = 0x242a68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x242a6c: 0x240203b0
    ctx->pc = 0x242a6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x242a70: 0x2621018
    ctx->pc = 0x242a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242a74: 0x431021
    ctx->pc = 0x242a74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242a78: 0xc4400030
    ctx->pc = 0x242a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242a7c: 0xe7a00030
    ctx->pc = 0x242a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x242a80: 0xc4400034
    ctx->pc = 0x242a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242a84: 0xe7a00034
    ctx->pc = 0x242a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x242a88: 0xc4400038
    ctx->pc = 0x242a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242a8c: 0xe7a00038
    ctx->pc = 0x242a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x242a90: 0x240202d
    ctx->pc = 0x242a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a94: 0x4600ab06
    ctx->pc = 0x242a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x242a98: 0xc0a684c
    ctx->pc = 0x242A98u;
    SET_GPR_U32(ctx, 31, 0x242AA0u);
    ctx->pc = 0x242A9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A130u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideStart_0x29a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AA0u; }
    }
    if (ctx->pc != 0x242AA0u) { return; }
    ctx->pc = 0x242AA0u;
    // 0x242aa0: 0x3c0202d
    ctx->pc = 0x242aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aa4: 0x240282d
    ctx->pc = 0x242aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aa8: 0x3a0302d
    ctx->pc = 0x242aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242aac: 0x4600ab06
    ctx->pc = 0x242aacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x242ab0: 0x2407ffff
    ctx->pc = 0x242ab0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242ab4: 0x44806800
    ctx->pc = 0x242ab4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x242ab8: 0xc0a6a5c
    ctx->pc = 0x242AB8u;
    SET_GPR_U32(ctx, 31, 0x242AC0u);
    ctx->pc = 0x242ABCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x29A970u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLineCollide_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AC0u; }
    }
    if (ctx->pc != 0x242AC0u) { return; }
    ctx->pc = 0x242AC0u;
    // 0x242ac0: 0x10400005
    ctx->pc = 0x242AC0u;
    {
        const bool branch_taken_0x242ac0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x242AC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242ac0) {
            ctx->pc = 0x242AD8u;
            goto label_242ad8;
        }
    }
    ctx->pc = 0x242AC8u;
    // 0x242ac8: 0x84550000
    ctx->pc = 0x242ac8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242acc: 0x3c020001
    ctx->pc = 0x242accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x242ad0: 0x10000055
    ctx->pc = 0x242AD0u;
    {
        const bool branch_taken_0x242ad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242AD4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x242ad0) {
            ctx->pc = 0x242C28u;
            goto label_242c28;
        }
    }
    ctx->pc = 0x242AD8u;
label_242ad8:
    // 0x242ad8: 0xc0a00b0
    ctx->pc = 0x242AD8u;
    SET_GPR_U32(ctx, 31, 0x242AE0u);
    ctx->pc = 0x242ADCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2802C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyGrid_0x2802c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AE0u; }
    }
    if (ctx->pc != 0x242AE0u) { return; }
    ctx->pc = 0x242AE0u;
    // 0x242ae0: 0x3c014000
    ctx->pc = 0x242ae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x242ae4: 0x4481c000
    ctx->pc = 0x242ae4u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
    // 0x242ae8: 0x1000003a
    ctx->pc = 0x242AE8u;
    {
        const bool branch_taken_0x242ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x242ae8) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242AF0u;
label_242af0:
    // 0x242af0: 0x3c030033
    ctx->pc = 0x242af0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x242af4: 0x2463dfd0
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x242af8: 0x600013
    ctx->pc = 0x242af8u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x242afc: 0x12330035
    ctx->pc = 0x242AFCu;
    {
        const bool branch_taken_0x242afc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 19));
        ctx->pc = 0x242B00u;
        { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x242afc) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242B04u;
    // 0x242b04: 0x8e0300c8
    ctx->pc = 0x242b04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x242b08: 0x10600032
    ctx->pc = 0x242B08u;
    {
        const bool branch_taken_0x242b08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x242B0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x242b08) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242B10u;
    // 0x242b10: 0x10620030
    ctx->pc = 0x242B10u;
    {
        const bool branch_taken_0x242b10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x242B14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242b10) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242B18u;
    // 0x242b18: 0xc090a5c
    ctx->pc = 0x242B18u;
    SET_GPR_U32(ctx, 31, 0x242B20u);
    ctx->pc = 0x242B1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242970u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_tail_0x242970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B20u; }
    }
    if (ctx->pc != 0x242B20u) { return; }
    ctx->pc = 0x242B20u;
    // 0x242b20: 0x1440002c
    ctx->pc = 0x242B20u;
    {
        const bool branch_taken_0x242b20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x242b20) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242B28u;
    // 0x242b28: 0xc6000250
    ctx->pc = 0x242b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242b2c: 0x46180036
    ctx->pc = 0x242b2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242b30: 0x0
    ctx->pc = 0x242b30u;
    // NOP
    // 0x242b34: 0x45000004
    ctx->pc = 0x242B34u;
    {
        const bool branch_taken_0x242b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242B38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x242b34) {
            ctx->pc = 0x242B48u;
            goto label_242b48;
        }
    }
    ctx->pc = 0x242B3Cu;
    // 0x242b3c: 0x8e030000
    ctx->pc = 0x242b3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x242b40: 0x10620024
    ctx->pc = 0x242B40u;
    {
        const bool branch_taken_0x242b40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x242b40) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242B48u;
label_242b48:
    // 0x242b48: 0xc6000060
    ctx->pc = 0x242b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242b4c: 0xc6410000
    ctx->pc = 0x242b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242b50: 0x46010001
    ctx->pc = 0x242b50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x242b54: 0xe7a00020
    ctx->pc = 0x242b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x242b58: 0xc6000064
    ctx->pc = 0x242b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242b5c: 0xc6410004
    ctx->pc = 0x242b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242b60: 0x46010001
    ctx->pc = 0x242b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x242b64: 0xe7a00024
    ctx->pc = 0x242b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x242b68: 0xc6000068
    ctx->pc = 0x242b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242b6c: 0xc6410008
    ctx->pc = 0x242b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242b70: 0x46010001
    ctx->pc = 0x242b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x242b74: 0xe7a00028
    ctx->pc = 0x242b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x242b78: 0xc0b58fc
    ctx->pc = 0x242B78u;
    SET_GPR_U32(ctx, 31, 0x242B80u);
    ctx->pc = 0x242B7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B80u; }
    }
    if (ctx->pc != 0x242B80u) { return; }
    ctx->pc = 0x242B80u;
    // 0x242b80: 0x46000506
    ctx->pc = 0x242b80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x242b84: 0x4614b036
    ctx->pc = 0x242b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242b88: 0x0
    ctx->pc = 0x242b88u;
    // NOP
    // 0x242b8c: 0x45010011
    ctx->pc = 0x242B8Cu;
    {
        const bool branch_taken_0x242b8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x242B90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
        if (branch_taken_0x242b8c) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242B94u;
    // 0x242b94: 0xc60c024c
    ctx->pc = 0x242b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242b98: 0xc60d0250
    ctx->pc = 0x242b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x242b9c: 0x3c0282d
    ctx->pc = 0x242b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ba0: 0x240302d
    ctx->pc = 0x242ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ba4: 0x3a0382d
    ctx->pc = 0x242ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ba8: 0x460cab00
    ctx->pc = 0x242ba8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    // 0x242bac: 0x460dbb40
    ctx->pc = 0x242bacu;
    ctx->f[13] = FPU_ADD_S(ctx->f[23], ctx->f[13]);
    // 0x242bb0: 0xc0a4202
    ctx->pc = 0x242BB0u;
    SET_GPR_U32(ctx, 31, 0x242BB8u);
    ctx->pc = 0x242BB4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BB8u; }
    }
    if (ctx->pc != 0x242BB8u) { return; }
    ctx->pc = 0x242BB8u;
    // 0x242bb8: 0x10400006
    ctx->pc = 0x242BB8u;
    {
        const bool branch_taken_0x242bb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x242bb8) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242BC0u;
    // 0x242bc0: 0x4600a586
    ctx->pc = 0x242bc0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x242bc4: 0x16e00003
    ctx->pc = 0x242BC4u;
    {
        const bool branch_taken_0x242bc4 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        ctx->pc = 0x242BC8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242bc4) {
            ctx->pc = 0x242BD4u;
            goto label_242bd4;
        }
    }
    ctx->pc = 0x242BCCu;
    // 0x242bcc: 0x12b6000a
    ctx->pc = 0x242BCCu;
    {
        const bool branch_taken_0x242bcc = (GPR_U32(ctx, 21) == GPR_U32(ctx, 22));
        if (branch_taken_0x242bcc) {
            ctx->pc = 0x242BF8u;
            goto label_242bf8;
        }
    }
    ctx->pc = 0x242BD4u;
label_242bd4:
    // 0x242bd4: 0x6810005
    ctx->pc = 0x242BD4u;
    {
        const bool branch_taken_0x242bd4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x242BD8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242bd4) {
            ctx->pc = 0x242BECu;
            goto label_242bec;
        }
    }
    ctx->pc = 0x242BDCu;
    // 0x242bdc: 0xc0a00ea
    ctx->pc = 0x242BDCu;
    SET_GPR_U32(ctx, 31, 0x242BE4u);
    ctx->pc = 0x2803A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridEnemy_0x2803a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BE4u; }
    }
    if (ctx->pc != 0x242BE4u) { return; }
    ctx->pc = 0x242BE4u;
    // 0x242be4: 0x10000002
    ctx->pc = 0x242BE4u;
    {
        const bool branch_taken_0x242be4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242BE8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242be4) {
            ctx->pc = 0x242BF0u;
            goto label_242bf0;
        }
    }
    ctx->pc = 0x242BECu;
label_242bec:
    // 0x242bec: 0x2414ffff
    ctx->pc = 0x242becu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
label_242bf0:
    // 0x242bf0: 0x621ffbf
    ctx->pc = 0x242BF0u;
    {
        const bool branch_taken_0x242bf0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x242BF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x242bf0) {
            ctx->pc = 0x242AF0u;
            goto label_242af0;
        }
    }
    ctx->pc = 0x242BF8u;
label_242bf8:
    // 0x242bf8: 0x40034800
    ctx->pc = 0x242bf8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242bfc: 0x3c02003a
    ctx->pc = 0x242bfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x242c00: 0x8c4421d0
    ctx->pc = 0x242c00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x242c04: 0x8c820388
    ctx->pc = 0x242c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x242c08: 0x621823
    ctx->pc = 0x242c08u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242c0c: 0x8c820380
    ctx->pc = 0x242c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x242c10: 0x621821
    ctx->pc = 0x242c10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242c14: 0xac830380
    ctx->pc = 0x242c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x242c18: 0x8c820384
    ctx->pc = 0x242c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x242c1c: 0x24420001
    ctx->pc = 0x242c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x242c20: 0xac820384
    ctx->pc = 0x242c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 900), GPR_U32(ctx, 2));
    // 0x242c24: 0x2a0102d
    ctx->pc = 0x242c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_242c28:
    // 0x242c28: 0xdfbf00d0
    ctx->pc = 0x242c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x242c2c: 0xdfbe00c0
    ctx->pc = 0x242c2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x242c30: 0xdfb700b0
    ctx->pc = 0x242c30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x242c34: 0xdfb600a0
    ctx->pc = 0x242c34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x242c38: 0xdfb50090
    ctx->pc = 0x242c38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x242c3c: 0xdfb40080
    ctx->pc = 0x242c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x242c40: 0xdfb30070
    ctx->pc = 0x242c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x242c44: 0xdfb20060
    ctx->pc = 0x242c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242c48: 0xdfb10050
    ctx->pc = 0x242c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242c4c: 0xdfb00040
    ctx->pc = 0x242c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242c50: 0xc7b80100
    ctx->pc = 0x242c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x242c54: 0xc7b700f8
    ctx->pc = 0x242c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x242c58: 0xc7b600f0
    ctx->pc = 0x242c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x242c5c: 0xc7b500e8
    ctx->pc = 0x242c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x242c60: 0xc7b400e0
    ctx->pc = 0x242c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x242c64: 0x3e00008
    ctx->pc = 0x242C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242A64u: goto label_242a64;
            case 0x242AD8u: goto label_242ad8;
            case 0x242AF0u: goto label_242af0;
            case 0x242B48u: goto label_242b48;
            case 0x242BD4u: goto label_242bd4;
            case 0x242BECu: goto label_242bec;
            case 0x242BF0u: goto label_242bf0;
            case 0x242BF8u: goto label_242bf8;
            case 0x242C28u: goto label_242c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242C6Cu;
}
