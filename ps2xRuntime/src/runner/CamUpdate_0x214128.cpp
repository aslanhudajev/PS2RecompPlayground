#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamUpdate
// Address: 0x214128 - 0x2142f0
void CamUpdate_0x214128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214128u;

    // 0x214128: 0x27bdffb0
    ctx->pc = 0x214128u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21412c: 0xffbf0040
    ctx->pc = 0x21412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x214130: 0xffb20030
    ctx->pc = 0x214130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x214134: 0xffb10020
    ctx->pc = 0x214134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x214138: 0xffb00010
    ctx->pc = 0x214138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21413c: 0x80902d
    ctx->pc = 0x21413cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214140: 0x265000e0
    ctx->pc = 0x214140u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 224));
    // 0x214144: 0x200202d
    ctx->pc = 0x214144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214148: 0xc64c00ec
    ctx->pc = 0x214148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21414c: 0xc084f14
    ctx->pc = 0x21414Cu;
    SET_GPR_U32(ctx, 31, 0x214154u);
    ctx->pc = 0x214150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x213C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcLookdir_0x213c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214154u; }
    }
    if (ctx->pc != 0x214154u) { return; }
    ctx->pc = 0x214154u;
    // 0x214154: 0x26510030
    ctx->pc = 0x214154u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 48));
    // 0x214158: 0x220202d
    ctx->pc = 0x214158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21415c: 0xc09bef0
    ctx->pc = 0x21415Cu;
    SET_GPR_U32(ctx, 31, 0x214164u);
    ctx->pc = 0x214160u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 164));
    ctx->pc = 0x26FBC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoShake_0x26fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214164u; }
    }
    if (ctx->pc != 0x214164u) { return; }
    ctx->pc = 0x214164u;
    // 0x214164: 0xc64200f4
    ctx->pc = 0x214164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214168: 0x46001087
    ctx->pc = 0x214168u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x21416c: 0xc64000e0
    ctx->pc = 0x21416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214170: 0x46001002
    ctx->pc = 0x214170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x214174: 0xc64100a4
    ctx->pc = 0x214174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214178: 0x46010000
    ctx->pc = 0x214178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21417c: 0xe6400030
    ctx->pc = 0x21417cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x214180: 0xc64000e4
    ctx->pc = 0x214180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214184: 0x46001002
    ctx->pc = 0x214184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x214188: 0xc64100a8
    ctx->pc = 0x214188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21418c: 0x46010000
    ctx->pc = 0x21418cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214190: 0xe6400034
    ctx->pc = 0x214190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x214194: 0xc64000e8
    ctx->pc = 0x214194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214198: 0x46001082
    ctx->pc = 0x214198u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21419c: 0xc64000ac
    ctx->pc = 0x21419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2141a0: 0x46001080
    ctx->pc = 0x2141a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2141a4: 0xe6420038
    ctx->pc = 0x2141a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x2141a8: 0x200202d
    ctx->pc = 0x2141a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141ac: 0xc084e9c
    ctx->pc = 0x2141ACu;
    SET_GPR_U32(ctx, 31, 0x2141B4u);
    ctx->pc = 0x2141B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamLookInDir_0x213a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141B4u; }
    }
    if (ctx->pc != 0x2141B4u) { return; }
    ctx->pc = 0x2141B4u;
    // 0x2141b4: 0x240202d
    ctx->pc = 0x2141b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141b8: 0x3c050034
    ctx->pc = 0x2141b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x2141bc: 0xc0b5494
    ctx->pc = 0x2141BCu;
    SET_GPR_U32(ctx, 31, 0x2141C4u);
    ctx->pc = 0x2141C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962032));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141C4u; }
    }
    if (ctx->pc != 0x2141C4u) { return; }
    ctx->pc = 0x2141C4u;
    // 0x2141c4: 0x3c020034
    ctx->pc = 0x2141c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2141c8: 0x2442eb60
    ctx->pc = 0x2141c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x2141cc: 0xc6400030
    ctx->pc = 0x2141ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2141d0: 0xe4400070
    ctx->pc = 0x2141d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2141d4: 0xc6400034
    ctx->pc = 0x2141d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2141d8: 0xe4400074
    ctx->pc = 0x2141d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2141dc: 0xc6400038
    ctx->pc = 0x2141dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2141e0: 0xe4400078
    ctx->pc = 0x2141e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2141e4: 0xc64000a4
    ctx->pc = 0x2141e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2141e8: 0xe4400140
    ctx->pc = 0x2141e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x2141ec: 0xc64000a8
    ctx->pc = 0x2141ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2141f0: 0xe4400144
    ctx->pc = 0x2141f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x2141f4: 0xc64000ac
    ctx->pc = 0x2141f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2141f8: 0xe4400148
    ctx->pc = 0x2141f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x2141fc: 0x220202d
    ctx->pc = 0x2141fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214200: 0xc0b0f84
    ctx->pc = 0x214200u;
    SET_GPR_U32(ctx, 31, 0x214208u);
    ctx->pc = 0x214204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214208u; }
    }
    if (ctx->pc != 0x214208u) { return; }
    ctx->pc = 0x214208u;
    // 0x214208: 0xc0b4502
    ctx->pc = 0x214208u;
    SET_GPR_U32(ctx, 31, 0x214210u);
    ctx->pc = 0x21420Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D1408u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetHang_0x2d1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214210u; }
    }
    if (ctx->pc != 0x214210u) { return; }
    ctx->pc = 0x214210u;
    // 0x214210: 0xc6410110
    ctx->pc = 0x214210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214214: 0x44800000
    ctx->pc = 0x214214u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x214218: 0x46010034
    ctx->pc = 0x214218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21421c: 0x0
    ctx->pc = 0x21421cu;
    // NOP
    // 0x214220: 0x45000010
    ctx->pc = 0x214220u;
    {
        const bool branch_taken_0x214220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214224u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x214220) {
            ctx->pc = 0x214264u;
            goto label_214264;
        }
    }
    ctx->pc = 0x214228u;
    // 0x214228: 0xc64c010c
    ctx->pc = 0x214228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21422c: 0x3c014334
    ctx->pc = 0x21422cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x214230: 0x44810000
    ctx->pc = 0x214230u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214234: 0x46006302
    ctx->pc = 0x214234u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x214238: 0x3c013ea2
    ctx->pc = 0x214238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x21423c: 0x3421f983
    ctx->pc = 0x21423cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x214240: 0x44810000
    ctx->pc = 0x214240u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214244: 0x3c013f80
    ctx->pc = 0x214244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x214248: 0x44816800
    ctx->pc = 0x214248u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x21424c: 0x0
    ctx->pc = 0x21424cu;
    // NOP
    // 0x214250: 0x0
    ctx->pc = 0x214250u;
    // NOP
    // 0x214254: 0x46016b43
    ctx->pc = 0x214254u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x214258: 0xc0aae0e
    ctx->pc = 0x214258u;
    SET_GPR_U32(ctx, 31, 0x214260u);
    ctx->pc = 0x21425Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2AB838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowProjection_0x2ab838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214260u; }
    }
    if (ctx->pc != 0x214260u) { return; }
    ctx->pc = 0x214260u;
    // 0x214260: 0x3c020031
    ctx->pc = 0x214260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_214264:
    // 0x214264: 0xdc420e28
    ctx->pc = 0x214264u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x214268: 0x30420001
    ctx->pc = 0x214268u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x21426c: 0x2103c
    ctx->pc = 0x21426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x214270: 0x2103f
    ctx->pc = 0x214270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x214274: 0x10400017
    ctx->pc = 0x214274u;
    {
        const bool branch_taken_0x214274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x214278u;
        SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
        if (branch_taken_0x214274) {
            ctx->pc = 0x2142D4u;
            goto label_2142d4;
        }
    }
    ctx->pc = 0x21427Cu;
    // 0x21427c: 0xc64c00ec
    ctx->pc = 0x21427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x214280: 0x3c014334
    ctx->pc = 0x214280u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x214284: 0x44810000
    ctx->pc = 0x214284u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214288: 0x46006302
    ctx->pc = 0x214288u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x21428c: 0x3c013ea2
    ctx->pc = 0x21428cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x214290: 0x3421f983
    ctx->pc = 0x214290u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x214294: 0x44810800
    ctx->pc = 0x214294u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x214298: 0xc64d0104
    ctx->pc = 0x214298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21429c: 0x46006b42
    ctx->pc = 0x21429cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2142a0: 0x3484ff00
    ctx->pc = 0x2142a0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x2142a4: 0x24050001
    ctx->pc = 0x2142a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2142a8: 0x24060020
    ctx->pc = 0x2142a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2142ac: 0x3c07003a
    ctx->pc = 0x2142acu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2142b0: 0x24e75a68
    ctx->pc = 0x2142b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 23144));
    // 0x2142b4: 0x46016302
    ctx->pc = 0x2142b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2142b8: 0x46016b42
    ctx->pc = 0x2142b8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2142bc: 0xc64e00f4
    ctx->pc = 0x2142bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2142c0: 0xc64f0100
    ctx->pc = 0x2142c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2142c4: 0xc65000a4
    ctx->pc = 0x2142c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2142c8: 0xc65100a8
    ctx->pc = 0x2142c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2142cc: 0xc0b4822
    ctx->pc = 0x2142CCu;
    SET_GPR_U32(ctx, 31, 0x2142D4u);
    ctx->pc = 0x2142D0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142D4u; }
    }
    if (ctx->pc != 0x2142D4u) { return; }
    ctx->pc = 0x2142D4u;
label_2142d4:
    // 0x2142d4: 0x24020001
    ctx->pc = 0x2142d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2142d8: 0xdfbf0040
    ctx->pc = 0x2142d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2142dc: 0xdfb20030
    ctx->pc = 0x2142dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2142e0: 0xdfb10020
    ctx->pc = 0x2142e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2142e4: 0xdfb00010
    ctx->pc = 0x2142e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2142e8: 0x3e00008
    ctx->pc = 0x2142E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2142ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214264u: goto label_214264;
            case 0x2142D4u: goto label_2142d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2142F0u;
}
