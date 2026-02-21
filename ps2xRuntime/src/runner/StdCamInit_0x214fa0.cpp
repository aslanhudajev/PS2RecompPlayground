#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamInit
// Address: 0x214fa0 - 0x215128
void StdCamInit_0x214fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214fa0u;

    // 0x214fa0: 0x27bdffd0
    ctx->pc = 0x214fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214fa4: 0xffbf0020
    ctx->pc = 0x214fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214fa8: 0xffb00010
    ctx->pc = 0x214fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x214fac: 0x3c100032
    ctx->pc = 0x214facu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x214fb0: 0x3c02003c
    ctx->pc = 0x214fb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x214fb4: 0x2442cd40
    ctx->pc = 0x214fb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x214fb8: 0x10800051
    ctx->pc = 0x214FB8u;
    {
        const bool branch_taken_0x214fb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x214FBCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294965116), GPR_U32(ctx, 2));
        if (branch_taken_0x214fb8) {
            ctx->pc = 0x215100u;
            goto label_215100;
        }
    }
    ctx->pc = 0x214FC0u;
    // 0x214fc0: 0xc084ce4
    ctx->pc = 0x214FC0u;
    SET_GPR_U32(ctx, 31, 0x214FC8u);
    ctx->pc = 0x214FC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamReset_0x213390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FC8u; }
    }
    if (ctx->pc != 0x214FC8u) { return; }
    ctx->pc = 0x214FC8u;
    // 0x214fc8: 0x3a0202d
    ctx->pc = 0x214fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fcc: 0xc085216
    ctx->pc = 0x214FCCu;
    SET_GPR_U32(ctx, 31, 0x214FD4u);
    ctx->pc = 0x214FD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x214858u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamGetPlayerAvgPos_0x214858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FD4u; }
    }
    if (ctx->pc != 0x214FD4u) { return; }
    ctx->pc = 0x214FD4u;
    // 0x214fd4: 0xc0850f8
    ctx->pc = 0x214FD4u;
    SET_GPR_U32(ctx, 31, 0x214FDCu);
    ctx->pc = 0x214FD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2143E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetTransmitter3D_0x2143e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FDCu; }
    }
    if (ctx->pc != 0x214FDCu) { return; }
    ctx->pc = 0x214FDCu;
    // 0x214fdc: 0x8e06f77c
    ctx->pc = 0x214fdcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x214fe0: 0x40202d
    ctx->pc = 0x214fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fe4: 0x24c500ec
    ctx->pc = 0x214fe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 236));
    // 0x214fe8: 0xc0858a8
    ctx->pc = 0x214FE8u;
    SET_GPR_U32(ctx, 31, 0x214FF0u);
    ctx->pc = 0x214FECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 260));
    ctx->pc = 0x2162A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransGetYawPitch_0x2162a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FF0u; }
    }
    if (ctx->pc != 0x214FF0u) { return; }
    ctx->pc = 0x214FF0u;
    // 0x214ff0: 0x8e02f77c
    ctx->pc = 0x214ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x214ff4: 0x244400e0
    ctx->pc = 0x214ff4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 224));
    // 0x214ff8: 0xc44c00ec
    ctx->pc = 0x214ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x214ffc: 0xc084f14
    ctx->pc = 0x214FFCu;
    SET_GPR_U32(ctx, 31, 0x215004u);
    ctx->pc = 0x215000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x213C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcLookdir_0x213c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215004u; }
    }
    if (ctx->pc != 0x215004u) { return; }
    ctx->pc = 0x215004u;
    // 0x215004: 0x8e05f77c
    ctx->pc = 0x215004u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x215008: 0xc7a20000
    ctx->pc = 0x215008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21500c: 0xe4a200a4
    ctx->pc = 0x21500cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x215010: 0xc7a30004
    ctx->pc = 0x215010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215014: 0xe4a300a8
    ctx->pc = 0x215014u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
    // 0x215018: 0xc7a40008
    ctx->pc = 0x215018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21501c: 0xe4a400ac
    ctx->pc = 0x21501cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 172), bits); }
    // 0x215020: 0x3c020034
    ctx->pc = 0x215020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x215024: 0x8c43e7c8
    ctx->pc = 0x215024u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x215028: 0x8c620060
    ctx->pc = 0x215028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x21502c: 0xc441002c
    ctx->pc = 0x21502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215030: 0xe4a100f4
    ctx->pc = 0x215030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 244), bits); }
    // 0x215034: 0x8c620060
    ctx->pc = 0x215034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x215038: 0xc4400030
    ctx->pc = 0x215038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21503c: 0xe4a000dc
    ctx->pc = 0x21503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 220), bits); }
    // 0x215040: 0x46000847
    ctx->pc = 0x215040u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x215044: 0xc4a000e0
    ctx->pc = 0x215044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215048: 0x46000802
    ctx->pc = 0x215048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21504c: 0x46020000
    ctx->pc = 0x21504cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x215050: 0xe4a00030
    ctx->pc = 0x215050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x215054: 0xc4a000e4
    ctx->pc = 0x215054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215058: 0x46000802
    ctx->pc = 0x215058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21505c: 0x46030000
    ctx->pc = 0x21505cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x215060: 0xe4a00034
    ctx->pc = 0x215060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x215064: 0xc4a000e8
    ctx->pc = 0x215064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215068: 0x46000842
    ctx->pc = 0x215068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21506c: 0x46040840
    ctx->pc = 0x21506cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x215070: 0xe4a10038
    ctx->pc = 0x215070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x215074: 0xc084e9c
    ctx->pc = 0x215074u;
    SET_GPR_U32(ctx, 31, 0x21507Cu);
    ctx->pc = 0x215078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 224));
    ctx->pc = 0x213A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamLookInDir_0x213a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21507Cu; }
    }
    if (ctx->pc != 0x21507Cu) { return; }
    ctx->pc = 0x21507Cu;
    // 0x21507c: 0x8e05f77c
    ctx->pc = 0x21507cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x215080: 0xc0b0f84
    ctx->pc = 0x215080u;
    SET_GPR_U32(ctx, 31, 0x215088u);
    ctx->pc = 0x215084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215088u; }
    }
    if (ctx->pc != 0x215088u) { return; }
    ctx->pc = 0x215088u;
    // 0x215088: 0x8e02f77c
    ctx->pc = 0x215088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x21508c: 0xc0b4502
    ctx->pc = 0x21508Cu;
    SET_GPR_U32(ctx, 31, 0x215094u);
    ctx->pc = 0x215090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D1408u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetHang_0x2d1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215094u; }
    }
    if (ctx->pc != 0x215094u) { return; }
    ctx->pc = 0x215094u;
    // 0x215094: 0x8e02f77c
    ctx->pc = 0x215094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x215098: 0xc4410110
    ctx->pc = 0x215098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21509c: 0x44800000
    ctx->pc = 0x21509cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2150a0: 0x46010034
    ctx->pc = 0x2150a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2150a4: 0x4500000f
    ctx->pc = 0x2150A4u;
    {
        const bool branch_taken_0x2150a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2150a4) {
            ctx->pc = 0x2150E4u;
            goto label_2150e4;
        }
    }
    ctx->pc = 0x2150ACu;
    // 0x2150ac: 0xc44c010c
    ctx->pc = 0x2150acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2150b0: 0x3c014334
    ctx->pc = 0x2150b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x2150b4: 0x44810000
    ctx->pc = 0x2150b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2150b8: 0x46006302
    ctx->pc = 0x2150b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2150bc: 0x3c013ea2
    ctx->pc = 0x2150bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2150c0: 0x3421f983
    ctx->pc = 0x2150c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2150c4: 0x44810000
    ctx->pc = 0x2150c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2150c8: 0x3c013f80
    ctx->pc = 0x2150c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2150cc: 0x44816800
    ctx->pc = 0x2150ccu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2150d0: 0x0
    ctx->pc = 0x2150d0u;
    // NOP
    // 0x2150d4: 0x0
    ctx->pc = 0x2150d4u;
    // NOP
    // 0x2150d8: 0x46016b43
    ctx->pc = 0x2150d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x2150dc: 0xc0aae0e
    ctx->pc = 0x2150DCu;
    SET_GPR_U32(ctx, 31, 0x2150E4u);
    ctx->pc = 0x2150E0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2AB838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowProjection_0x2ab838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2150E4u; }
    }
    if (ctx->pc != 0x2150E4u) { return; }
    ctx->pc = 0x2150E4u;
label_2150e4:
    // 0x2150e4: 0xc0ab452
    ctx->pc = 0x2150E4u;
    SET_GPR_U32(ctx, 31, 0x2150ECu);
    ctx->pc = 0x2AD148u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbUpdateMatricies_0x2ad148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2150ECu; }
    }
    if (ctx->pc != 0x2150ECu) { return; }
    ctx->pc = 0x2150ECu;
    // 0x2150ec: 0x3c020032
    ctx->pc = 0x2150ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2150f0: 0xc0853c4
    ctx->pc = 0x2150F0u;
    SET_GPR_U32(ctx, 31, 0x2150F8u);
    ctx->pc = 0x2150F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    ctx->pc = 0x214F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcDestination_0x214f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2150F8u; }
    }
    if (ctx->pc != 0x2150F8u) { return; }
    ctx->pc = 0x2150F8u;
    // 0x2150f8: 0x10000008
    ctx->pc = 0x2150F8u;
    {
        const bool branch_taken_0x2150f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2150FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2150f8) {
            ctx->pc = 0x21511Cu;
            goto label_21511c;
        }
    }
    ctx->pc = 0x215100u;
label_215100:
    // 0x215100: 0xc084ce4
    ctx->pc = 0x215100u;
    SET_GPR_U32(ctx, 31, 0x215108u);
    ctx->pc = 0x215104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    ctx->pc = 0x213390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamReset_0x213390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215108u; }
    }
    if (ctx->pc != 0x215108u) { return; }
    ctx->pc = 0x215108u;
    // 0x215108: 0x3c020034
    ctx->pc = 0x215108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x21510c: 0x8e04f77c
    ctx->pc = 0x21510cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294965116)));
    // 0x215110: 0xc085354
    ctx->pc = 0x215110u;
    SET_GPR_U32(ctx, 31, 0x215118u);
    ctx->pc = 0x215114u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
    ctx->pc = 0x214D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamInit_0x214d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215118u; }
    }
    if (ctx->pc != 0x215118u) { return; }
    ctx->pc = 0x215118u;
    // 0x215118: 0xdfbf0020
    ctx->pc = 0x215118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21511c:
    // 0x21511c: 0xdfb00010
    ctx->pc = 0x21511cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215120: 0x3e00008
    ctx->pc = 0x215120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215124u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2150E4u: goto label_2150e4;
            case 0x215100u: goto label_215100;
            case 0x21511Cu: goto label_21511c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215128u;
}
