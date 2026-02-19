#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerWorldDamage
// Address: 0x247968 - 0x247b28
void PlayerWorldDamage_0x247968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247968u;

    // 0x247968: 0x27bdffa0
    ctx->pc = 0x247968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24796c: 0xffbf0050
    ctx->pc = 0x24796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x247970: 0xffb30040
    ctx->pc = 0x247970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x247974: 0xffb20030
    ctx->pc = 0x247974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x247978: 0xffb10020
    ctx->pc = 0x247978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24797c: 0xffb00010
    ctx->pc = 0x24797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x247980: 0x80802d
    ctx->pc = 0x247980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247984: 0xc0882d
    ctx->pc = 0x247984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247988: 0xe0902d
    ctx->pc = 0x247988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24798c: 0xc086fa0
    ctx->pc = 0x24798Cu;
    SET_GPR_U32(ctx, 31, 0x247994u);
    ctx->pc = 0x247990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjGetAllFlags_0x21be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247994u; }
    }
    if (ctx->pc != 0x247994u) { return; }
    ctx->pc = 0x247994u;
    // 0x247994: 0x40182d
    ctx->pc = 0x247994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247998: 0x3c02000f
    ctx->pc = 0x247998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x24799c: 0x629824
    ctx->pc = 0x24799cu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2479a0: 0x1260005a
    ctx->pc = 0x2479A0u;
    {
        const bool branch_taken_0x2479a0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2479A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2560 << 16));
        if (branch_taken_0x2479a0) {
            ctx->pc = 0x247B0Cu;
            goto label_247b0c;
        }
    }
    ctx->pc = 0x2479A8u;
    // 0x2479a8: 0x621024
    ctx->pc = 0x2479a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2479ac: 0x3c030200
    ctx->pc = 0x2479acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x2479b0: 0x10430057
    ctx->pc = 0x2479B0u;
    {
        const bool branch_taken_0x2479b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2479B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2479b0) {
            ctx->pc = 0x247B10u;
            goto label_247b10;
        }
    }
    ctx->pc = 0x2479B8u;
    // 0x2479b8: 0x8e0201dc
    ctx->pc = 0x2479b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x2479bc: 0x2c42001f
    ctx->pc = 0x2479bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 31));
    // 0x2479c0: 0x10400053
    ctx->pc = 0x2479C0u;
    {
        const bool branch_taken_0x2479c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2479C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2479c0) {
            ctx->pc = 0x247B10u;
            goto label_247b10;
        }
    }
    ctx->pc = 0x2479C8u;
    // 0x2479c8: 0xc441ffa4
    ctx->pc = 0x2479c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2479cc: 0xc60008c4
    ctx->pc = 0x2479ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2479d0: 0x46000834
    ctx->pc = 0x2479d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2479d4: 0x0
    ctx->pc = 0x2479d4u;
    // NOP
    // 0x2479d8: 0x4503004e
    ctx->pc = 0x2479D8u;
    {
        const bool branch_taken_0x2479d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2479d8) {
            ctx->pc = 0x2479DCu;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x247B14u;
            goto label_247b14;
        }
    }
    ctx->pc = 0x2479E0u;
    // 0x2479e0: 0xc6200000
    ctx->pc = 0x2479e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2479e4: 0xc6410000
    ctx->pc = 0x2479e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2479e8: 0x46010001
    ctx->pc = 0x2479e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2479ec: 0xe7a00000
    ctx->pc = 0x2479ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2479f0: 0xafa00004
    ctx->pc = 0x2479f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2479f4: 0xc6200008
    ctx->pc = 0x2479f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2479f8: 0xc6410008
    ctx->pc = 0x2479f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2479fc: 0x46010001
    ctx->pc = 0x2479fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x247a00: 0xe7a00008
    ctx->pc = 0x247a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x247a04: 0xc0b58fc
    ctx->pc = 0x247A04u;
    SET_GPR_U32(ctx, 31, 0x247A0Cu);
    ctx->pc = 0x247A08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A0Cu; }
    }
    if (ctx->pc != 0x247A0Cu) { return; }
    ctx->pc = 0x247A0Cu;
    // 0x247a0c: 0x260182d
    ctx->pc = 0x247a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a10: 0x3c020003
    ctx->pc = 0x247a10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x247a14: 0x1062002e
    ctx->pc = 0x247A14u;
    {
        const bool branch_taken_0x247a14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x247A18u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        if (branch_taken_0x247a14) {
            ctx->pc = 0x247AD0u;
            goto label_247ad0;
        }
    }
    ctx->pc = 0x247A1Cu;
    // 0x247a1c: 0x14400008
    ctx->pc = 0x247A1Cu;
    {
        const bool branch_taken_0x247a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x247A20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
        if (branch_taken_0x247a1c) {
            ctx->pc = 0x247A40u;
            goto label_247a40;
        }
    }
    ctx->pc = 0x247A24u;
    // 0x247a24: 0x3c020001
    ctx->pc = 0x247a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x247a28: 0x1062000c
    ctx->pc = 0x247A28u;
    {
        const bool branch_taken_0x247a28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x247A2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x247a28) {
            ctx->pc = 0x247A5Cu;
            goto label_247a5c;
        }
    }
    ctx->pc = 0x247A30u;
    // 0x247a30: 0x10620019
    ctx->pc = 0x247A30u;
    {
        const bool branch_taken_0x247a30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x247A34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x247a30) {
            ctx->pc = 0x247A98u;
            goto label_247a98;
        }
    }
    ctx->pc = 0x247A38u;
    // 0x247a38: 0x10000009
    ctx->pc = 0x247A38u;
    {
        const bool branch_taken_0x247a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x247a38) {
            ctx->pc = 0x247A60u;
            goto label_247a60;
        }
    }
    ctx->pc = 0x247A40u;
label_247a40:
    // 0x247a40: 0x10620023
    ctx->pc = 0x247A40u;
    {
        const bool branch_taken_0x247a40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x247A44u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        if (branch_taken_0x247a40) {
            ctx->pc = 0x247AD0u;
            goto label_247ad0;
        }
    }
    ctx->pc = 0x247A48u;
    // 0x247a48: 0x14400005
    ctx->pc = 0x247A48u;
    {
        const bool branch_taken_0x247a48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x247A4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x247a48) {
            ctx->pc = 0x247A60u;
            goto label_247a60;
        }
    }
    ctx->pc = 0x247A50u;
    // 0x247a50: 0x3c020004
    ctx->pc = 0x247a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x247a54: 0x1062001f
    ctx->pc = 0x247A54u;
    {
        const bool branch_taken_0x247a54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x247A58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x247a54) {
            ctx->pc = 0x247AD4u;
            goto label_247ad4;
        }
    }
    ctx->pc = 0x247A5Cu;
label_247a5c:
    // 0x247a5c: 0x3c020031
    ctx->pc = 0x247a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_247a60:
    // 0x247a60: 0xc440ffa4
    ctx->pc = 0x247a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247a64: 0x3c013f80
    ctx->pc = 0x247a64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x247a68: 0x44810800
    ctx->pc = 0x247a68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247a6c: 0x46010000
    ctx->pc = 0x247a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247a70: 0xe60008c4
    ctx->pc = 0x247a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2244), bits); }
    // 0x247a74: 0x8e040000
    ctx->pc = 0x247a74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247a78: 0x3c0140a0
    ctx->pc = 0x247a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x247a7c: 0x44816000
    ctx->pc = 0x247a7cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x247a80: 0x24050001
    ctx->pc = 0x247a80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x247a84: 0x302d
    ctx->pc = 0x247a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a88: 0xc08c73c
    ctx->pc = 0x247A88u;
    SET_GPR_U32(ctx, 31, 0x247A90u);
    ctx->pc = 0x247A8Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A90u; }
    }
    if (ctx->pc != 0x247A90u) { return; }
    ctx->pc = 0x247A90u;
    // 0x247a90: 0x1000001f
    ctx->pc = 0x247A90u;
    {
        const bool branch_taken_0x247a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247A94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x247a90) {
            ctx->pc = 0x247B10u;
            goto label_247b10;
        }
    }
    ctx->pc = 0x247A98u;
label_247a98:
    // 0x247a98: 0x8e040000
    ctx->pc = 0x247a98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247a9c: 0x3c014120
    ctx->pc = 0x247a9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x247aa0: 0x44816000
    ctx->pc = 0x247aa0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x247aa4: 0x24050001
    ctx->pc = 0x247aa4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x247aa8: 0x24060010
    ctx->pc = 0x247aa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x247aac: 0xc08c73c
    ctx->pc = 0x247AACu;
    SET_GPR_U32(ctx, 31, 0x247AB4u);
    ctx->pc = 0x247AB0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AB4u; }
    }
    if (ctx->pc != 0x247AB4u) { return; }
    ctx->pc = 0x247AB4u;
    // 0x247ab4: 0x3c020031
    ctx->pc = 0x247ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x247ab8: 0xc440ffa4
    ctx->pc = 0x247ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247abc: 0x3c013f80
    ctx->pc = 0x247abcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x247ac0: 0x44810800
    ctx->pc = 0x247ac0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247ac4: 0x46010000
    ctx->pc = 0x247ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247ac8: 0x10000010
    ctx->pc = 0x247AC8u;
    {
        const bool branch_taken_0x247ac8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247ACCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2244), bits); }
        if (branch_taken_0x247ac8) {
            ctx->pc = 0x247B0Cu;
            goto label_247b0c;
        }
    }
    ctx->pc = 0x247AD0u;
label_247ad0:
    // 0x247ad0: 0x3c020031
    ctx->pc = 0x247ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_247ad4:
    // 0x247ad4: 0xc440ffa4
    ctx->pc = 0x247ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ad8: 0x3c013f80
    ctx->pc = 0x247ad8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x247adc: 0x44810800
    ctx->pc = 0x247adcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247ae0: 0x46010000
    ctx->pc = 0x247ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247ae4: 0xe60008c4
    ctx->pc = 0x247ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2244), bits); }
    // 0x247ae8: 0x8e040000
    ctx->pc = 0x247ae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247aec: 0x3c014170
    ctx->pc = 0x247aecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x247af0: 0x44816000
    ctx->pc = 0x247af0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x247af4: 0x24050001
    ctx->pc = 0x247af4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x247af8: 0x24060020
    ctx->pc = 0x247af8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x247afc: 0xc08c73c
    ctx->pc = 0x247AFCu;
    SET_GPR_U32(ctx, 31, 0x247B04u);
    ctx->pc = 0x247B00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B04u; }
    }
    if (ctx->pc != 0x247B04u) { return; }
    ctx->pc = 0x247B04u;
    // 0x247b04: 0xc098404
    ctx->pc = 0x247B04u;
    SET_GPR_U32(ctx, 31, 0x247B0Cu);
    ctx->pc = 0x247B08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    ctx->pc = 0x261010u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWorldHitPlyr_0x261010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B0Cu; }
    }
    if (ctx->pc != 0x247B0Cu) { return; }
    ctx->pc = 0x247B0Cu;
label_247b0c:
    // 0x247b0c: 0xdfbf0050
    ctx->pc = 0x247b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_247b10:
    // 0x247b10: 0xdfb30040
    ctx->pc = 0x247b10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_247b14:
    // 0x247b14: 0xdfb20030
    ctx->pc = 0x247b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247b18: 0xdfb10020
    ctx->pc = 0x247b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b1c: 0xdfb00010
    ctx->pc = 0x247b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247b20: 0x3e00008
    ctx->pc = 0x247B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247A40u: goto label_247a40;
            case 0x247A5Cu: goto label_247a5c;
            case 0x247A60u: goto label_247a60;
            case 0x247A98u: goto label_247a98;
            case 0x247AD0u: goto label_247ad0;
            case 0x247AD4u: goto label_247ad4;
            case 0x247B0Cu: goto label_247b0c;
            case 0x247B10u: goto label_247b10;
            case 0x247B14u: goto label_247b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247B28u;
}
