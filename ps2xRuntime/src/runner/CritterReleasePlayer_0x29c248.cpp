#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterReleasePlayer
// Address: 0x29c248 - 0x29c334
void CritterReleasePlayer_0x29c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29c248u;

    // 0x29c248: 0x27bdffa0
    ctx->pc = 0x29c248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29c24c: 0xffbf0050
    ctx->pc = 0x29c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29c250: 0xffb30040
    ctx->pc = 0x29c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29c254: 0xffb20030
    ctx->pc = 0x29c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29c258: 0xffb10020
    ctx->pc = 0x29c258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29c25c: 0xffb00010
    ctx->pc = 0x29c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29c260: 0x80902d
    ctx->pc = 0x29c260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c264: 0x86510134
    ctx->pc = 0x29c264u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x29c268: 0x620002a
    ctx->pc = 0x29C268u;
    {
        const bool branch_taken_0x29c268 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x29C26Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29c268) {
            ctx->pc = 0x29C314u;
            goto label_29c314;
        }
    }
    ctx->pc = 0x29C270u;
    // 0x29c270: 0x24102b00
    ctx->pc = 0x29c270u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29c274: 0x2308018
    ctx->pc = 0x29c274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29c278: 0x3c020032
    ctx->pc = 0x29c278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29c27c: 0x24421bc0
    ctx->pc = 0x29c27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29c280: 0x2028021
    ctx->pc = 0x29c280u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29c284: 0xc08db9a
    ctx->pc = 0x29C284u;
    SET_GPR_U32(ctx, 31, 0x29C28Cu);
    ctx->pc = 0x29C288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUnsetGrabbed_0x236e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C28Cu; }
    }
    if (ctx->pc != 0x29C28Cu) { return; }
    ctx->pc = 0x29C28Cu;
    // 0x29c28c: 0x8e420070
    ctx->pc = 0x29c28cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x29c290: 0xc4400020
    ctx->pc = 0x29c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c294: 0xe7a00000
    ctx->pc = 0x29c294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c298: 0xc4400024
    ctx->pc = 0x29c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c29c: 0xe7a00004
    ctx->pc = 0x29c29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29c2a0: 0xc4400028
    ctx->pc = 0x29c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2a4: 0xe7a00008
    ctx->pc = 0x29c2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29c2a8: 0x3c01bdcc
    ctx->pc = 0x29c2a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48588 << 16));
    // 0x29c2ac: 0x3421cccd
    ctx->pc = 0x29c2acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x29c2b0: 0x44810000
    ctx->pc = 0x29c2b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29c2b4: 0xe7a00004
    ctx->pc = 0x29c2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29c2b8: 0xc0b58a4
    ctx->pc = 0x29C2B8u;
    SET_GPR_U32(ctx, 31, 0x29C2C0u);
    ctx->pc = 0x29C2BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2C0u; }
    }
    if (ctx->pc != 0x29C2C0u) { return; }
    ctx->pc = 0x29C2C0u;
    // 0x29c2c0: 0xc7a00000
    ctx->pc = 0x29c2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2c4: 0xc6610030
    ctx->pc = 0x29c2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c2c8: 0x46010002
    ctx->pc = 0x29c2c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c2cc: 0xe7a00000
    ctx->pc = 0x29c2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c2d0: 0xc7a00004
    ctx->pc = 0x29c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2d4: 0x46010002
    ctx->pc = 0x29c2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c2d8: 0xe7a00004
    ctx->pc = 0x29c2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29c2dc: 0xc7a00008
    ctx->pc = 0x29c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2e0: 0x46010002
    ctx->pc = 0x29c2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c2e4: 0xe7a00008
    ctx->pc = 0x29c2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29c2e8: 0x200202d
    ctx->pc = 0x29c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2ec: 0x240282d
    ctx->pc = 0x29c2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2f0: 0x260302d
    ctx->pc = 0x29c2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2f4: 0x34078050
    ctx->pc = 0x29c2f4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 32848));
    // 0x29c2f8: 0x3a0402d
    ctx->pc = 0x29c2f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2fc: 0x3c013f00
    ctx->pc = 0x29c2fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29c300: 0x44816000
    ctx->pc = 0x29c300u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29c304: 0xc0a6e9c
    ctx->pc = 0x29C304u;
    SET_GPR_U32(ctx, 31, 0x29C30Cu);
    ctx->pc = 0x29C308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29BA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamagePlayer_0x29ba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C30Cu; }
    }
    if (ctx->pc != 0x29C30Cu) { return; }
    ctx->pc = 0x29C30Cu;
    // 0x29c30c: 0x2402ffff
    ctx->pc = 0x29c30cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29c310: 0xa6420134
    ctx->pc = 0x29c310u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 308), (uint16_t)GPR_U32(ctx, 2));
label_29c314:
    // 0x29c314: 0x220102d
    ctx->pc = 0x29c314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c318: 0xdfbf0050
    ctx->pc = 0x29c318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c31c: 0xdfb30040
    ctx->pc = 0x29c31cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c320: 0xdfb20030
    ctx->pc = 0x29c320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c324: 0xdfb10020
    ctx->pc = 0x29c324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c328: 0xdfb00010
    ctx->pc = 0x29c328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c32c: 0x3e00008
    ctx->pc = 0x29C32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29C314u: goto label_29c314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29C334u;
}
