#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WeaponWallCollide
// Address: 0x21f2a8 - 0x21f388
void WeaponWallCollide_0x21f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f2a8u;

    // 0x21f2a8: 0x27bdffd0
    ctx->pc = 0x21f2a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f2ac: 0xffbf0020
    ctx->pc = 0x21f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21f2b0: 0xffb10010
    ctx->pc = 0x21f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21f2b4: 0xffb00000
    ctx->pc = 0x21f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f2b8: 0xc0802d
    ctx->pc = 0x21f2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2bc: 0x40034800
    ctx->pc = 0x21f2bcu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21f2c0: 0x3c02003a
    ctx->pc = 0x21f2c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21f2c4: 0x8c4221d0
    ctx->pc = 0x21f2c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21f2c8: 0xac4300e8
    ctx->pc = 0x21f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 3));
    // 0x21f2cc: 0x3c030032
    ctx->pc = 0x21f2ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21f2d0: 0x24020007
    ctx->pc = 0x21f2d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x21f2d4: 0xac62fd3c
    ctx->pc = 0x21f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
    // 0x21f2d8: 0x3c020032
    ctx->pc = 0x21f2d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f2dc: 0x3c01c000
    ctx->pc = 0x21f2dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x21f2e0: 0x44810000
    ctx->pc = 0x21f2e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21f2e4: 0xe440fd2c
    ctx->pc = 0x21f2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966572), bits); }
    // 0x21f2e8: 0x3c020032
    ctx->pc = 0x21f2e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f2ec: 0x3c014000
    ctx->pc = 0x21f2ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x21f2f0: 0x44810000
    ctx->pc = 0x21f2f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21f2f4: 0xe440fd30
    ctx->pc = 0x21f2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966576), bits); }
    // 0x21f2f8: 0x3c110032
    ctx->pc = 0x21f2f8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21f2fc: 0x2626fc00
    ctx->pc = 0x21f2fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294966272));
    // 0x21f300: 0x2407023e
    ctx->pc = 0x21f300u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 574));
    // 0x21f304: 0xc087866
    ctx->pc = 0x21F304u;
    SET_GPR_U32(ctx, 31, 0x21F30Cu);
    ctx->pc = 0x21F308u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x21E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldCollide_0x21e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F30Cu; }
    }
    if (ctx->pc != 0x21F30Cu) { return; }
    ctx->pc = 0x21F30Cu;
    // 0x21f30c: 0x1200000d
    ctx->pc = 0x21F30Cu;
    {
        const bool branch_taken_0x21f30c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F310u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21f30c) {
            ctx->pc = 0x21F344u;
            goto label_21f344;
        }
    }
    ctx->pc = 0x21F314u;
    // 0x21f314: 0x10a00008
    ctx->pc = 0x21F314u;
    {
        const bool branch_taken_0x21f314 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F318u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294966272));
        if (branch_taken_0x21f314) {
            ctx->pc = 0x21F338u;
            goto label_21f338;
        }
    }
    ctx->pc = 0x21F31Cu;
    // 0x21f31c: 0xc4400030
    ctx->pc = 0x21f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f320: 0xe6000000
    ctx->pc = 0x21f320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21f324: 0xc4400034
    ctx->pc = 0x21f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f328: 0xe6000004
    ctx->pc = 0x21f328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21f32c: 0xc4400038
    ctx->pc = 0x21f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f330: 0x10000004
    ctx->pc = 0x21F330u;
    {
        const bool branch_taken_0x21f330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F334u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x21f330) {
            ctx->pc = 0x21F344u;
            goto label_21f344;
        }
    }
    ctx->pc = 0x21F338u;
label_21f338:
    // 0x21f338: 0xae000000
    ctx->pc = 0x21f338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21f33c: 0xae000004
    ctx->pc = 0x21f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21f340: 0xae000008
    ctx->pc = 0x21f340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_21f344:
    // 0x21f344: 0x40034800
    ctx->pc = 0x21f344u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21f348: 0x3c02003a
    ctx->pc = 0x21f348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21f34c: 0x8c4421d0
    ctx->pc = 0x21f34cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21f350: 0x8c8200e8
    ctx->pc = 0x21f350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x21f354: 0x621823
    ctx->pc = 0x21f354u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f358: 0x8c8200e0
    ctx->pc = 0x21f358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x21f35c: 0x621821
    ctx->pc = 0x21f35cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21f360: 0xac8300e0
    ctx->pc = 0x21f360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x21f364: 0x8c8200e4
    ctx->pc = 0x21f364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x21f368: 0x24420001
    ctx->pc = 0x21f368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f36c: 0xac8200e4
    ctx->pc = 0x21f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
    // 0x21f370: 0xa0102d
    ctx->pc = 0x21f370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f374: 0xdfbf0020
    ctx->pc = 0x21f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f378: 0xdfb10010
    ctx->pc = 0x21f378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f37c: 0xdfb00000
    ctx->pc = 0x21f37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f380: 0x3e00008
    ctx->pc = 0x21F380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F384u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F338u: goto label_21f338;
            case 0x21F344u: goto label_21f344;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F388u;
}
