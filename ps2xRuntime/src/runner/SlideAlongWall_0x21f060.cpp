#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SlideAlongWall
// Address: 0x21f060 - 0x21f2a4
void SlideAlongWall_0x21f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f060u;

    // 0x21f060: 0xc4820000
    ctx->pc = 0x21f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f064: 0xc4a30000
    ctx->pc = 0x21f064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21f068: 0x46031080
    ctx->pc = 0x21f068u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x21f06c: 0xc4810008
    ctx->pc = 0x21f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f070: 0xc4a00008
    ctx->pc = 0x21f070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f074: 0x46000840
    ctx->pc = 0x21f074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21f078: 0xc4c00000
    ctx->pc = 0x21f078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f07c: 0x46001081
    ctx->pc = 0x21f07cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21f080: 0xc4c00008
    ctx->pc = 0x21f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f084: 0x46000841
    ctx->pc = 0x21f084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21f088: 0xc4e00000
    ctx->pc = 0x21f088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f08c: 0x46001102
    ctx->pc = 0x21f08cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21f090: 0xc4e00008
    ctx->pc = 0x21f090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f094: 0x46000802
    ctx->pc = 0x21f094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f098: 0x46002100
    ctx->pc = 0x21f098u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x21f09c: 0x44800000
    ctx->pc = 0x21f09cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21f0a0: 0x46001834
    ctx->pc = 0x21f0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f0a4: 0x0
    ctx->pc = 0x21f0a4u;
    // NOP
    // 0x21f0a8: 0x45000002
    ctx->pc = 0x21F0A8u;
    {
        const bool branch_taken_0x21f0a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F0ACu;
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
        if (branch_taken_0x21f0a8) {
            ctx->pc = 0x21F0B4u;
            goto label_21f0b4;
        }
    }
    ctx->pc = 0x21F0B0u;
    // 0x21f0b0: 0x460018c7
    ctx->pc = 0x21f0b0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_21f0b4:
    // 0x21f0b4: 0xc4a10008
    ctx->pc = 0x21f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f0b8: 0x44800000
    ctx->pc = 0x21f0b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21f0bc: 0x46000834
    ctx->pc = 0x21f0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f0c0: 0x0
    ctx->pc = 0x21f0c0u;
    // NOP
    // 0x21f0c4: 0x45000003
    ctx->pc = 0x21F0C4u;
    {
        const bool branch_taken_0x21f0c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F0C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21f0c4) {
            ctx->pc = 0x21F0D4u;
            goto label_21f0d4;
        }
    }
    ctx->pc = 0x21F0CCu;
    // 0x21f0cc: 0x10000002
    ctx->pc = 0x21F0CCu;
    {
        const bool branch_taken_0x21f0cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F0D0u;
        ctx->f[0] = FPU_NEG_S(ctx->f[1]);
        if (branch_taken_0x21f0cc) {
            ctx->pc = 0x21F0D8u;
            goto label_21f0d8;
        }
    }
    ctx->pc = 0x21F0D4u;
label_21f0d4:
    // 0x21f0d4: 0xc4a00008
    ctx->pc = 0x21f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f0d8:
    // 0x21f0d8: 0x46001834
    ctx->pc = 0x21f0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f0dc: 0x0
    ctx->pc = 0x21f0dcu;
    // NOP
    // 0x21f0e0: 0x45020001
    ctx->pc = 0x21F0E0u;
    {
        const bool branch_taken_0x21f0e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f0e0) {
            ctx->pc = 0x21F0E4u;
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x21F0E8u;
            goto label_21f0e8;
        }
    }
    ctx->pc = 0x21F0E8u;
label_21f0e8:
    // 0x21f0e8: 0x44800800
    ctx->pc = 0x21f0e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x21f0ec: 0x46012034
    ctx->pc = 0x21f0ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f0f0: 0x0
    ctx->pc = 0x21f0f0u;
    // NOP
    // 0x21f0f4: 0x45000068
    ctx->pc = 0x21F0F4u;
    {
        const bool branch_taken_0x21f0f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21F0F8u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        if (branch_taken_0x21f0f4) {
            ctx->pc = 0x21F298u;
            goto label_21f298;
        }
    }
    ctx->pc = 0x21F0FCu;
    // 0x21f0fc: 0x24020001
    ctx->pc = 0x21f0fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f100: 0xc4e00000
    ctx->pc = 0x21f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f104: 0x14600010
    ctx->pc = 0x21F104u;
    {
        const bool branch_taken_0x21f104 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F108u;
        ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        if (branch_taken_0x21f104) {
            ctx->pc = 0x21F148u;
            goto label_21f148;
        }
    }
    ctx->pc = 0x21F10Cu;
    // 0x21f10c: 0xc4a00000
    ctx->pc = 0x21f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f110: 0x46000834
    ctx->pc = 0x21f110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f114: 0x45000004
    ctx->pc = 0x21F114u;
    {
        const bool branch_taken_0x21f114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f114) {
            ctx->pc = 0x21F128u;
            goto label_21f128;
        }
    }
    ctx->pc = 0x21F11Cu;
    // 0x21f11c: 0x46020834
    ctx->pc = 0x21f11cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f120: 0x45010009
    ctx->pc = 0x21F120u;
    {
        const bool branch_taken_0x21f120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f120) {
            ctx->pc = 0x21F148u;
            goto label_21f148;
        }
    }
    ctx->pc = 0x21F128u;
label_21f128:
    // 0x21f128: 0x46010034
    ctx->pc = 0x21f128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f12c: 0x0
    ctx->pc = 0x21f12cu;
    // NOP
    // 0x21f130: 0x45020027
    ctx->pc = 0x21F130u;
    {
        const bool branch_taken_0x21f130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f130) {
            ctx->pc = 0x21F134u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21F1D0u;
            goto label_21f1d0;
        }
    }
    ctx->pc = 0x21F138u;
    // 0x21f138: 0x46011034
    ctx->pc = 0x21f138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f13c: 0x0
    ctx->pc = 0x21f13cu;
    // NOP
    // 0x21f140: 0x45020023
    ctx->pc = 0x21F140u;
    {
        const bool branch_taken_0x21f140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f140) {
            ctx->pc = 0x21F144u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21F1D0u;
            goto label_21f1d0;
        }
    }
    ctx->pc = 0x21F148u;
label_21f148:
    // 0x21f148: 0x3c013f00
    ctx->pc = 0x21f148u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x21f14c: 0x44810000
    ctx->pc = 0x21f14cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21f150: 0x460060c2
    ctx->pc = 0x21f150u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x21f154: 0xc4a10000
    ctx->pc = 0x21f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f158: 0x44800000
    ctx->pc = 0x21f158u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21f15c: 0x46000834
    ctx->pc = 0x21f15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f160: 0x0
    ctx->pc = 0x21f160u;
    // NOP
    // 0x21f164: 0x45020004
    ctx->pc = 0x21F164u;
    {
        const bool branch_taken_0x21f164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f164) {
            ctx->pc = 0x21F168u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21F178u;
            goto label_21f178;
        }
    }
    ctx->pc = 0x21F16Cu;
    // 0x21f16c: 0x46000847
    ctx->pc = 0x21f16cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21f170: 0x10000003
    ctx->pc = 0x21F170u;
    {
        const bool branch_taken_0x21f170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F174u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        if (branch_taken_0x21f170) {
            ctx->pc = 0x21F180u;
            goto label_21f180;
        }
    }
    ctx->pc = 0x21F178u;
label_21f178:
    // 0x21f178: 0x46001840
    ctx->pc = 0x21f178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x21f17c: 0x44800000
    ctx->pc = 0x21f17cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_21f180:
    // 0x21f180: 0x46001034
    ctx->pc = 0x21f180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f184: 0x45000008
    ctx->pc = 0x21F184u;
    {
        const bool branch_taken_0x21f184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f184) {
            ctx->pc = 0x21F1A8u;
            goto label_21f1a8;
        }
    }
    ctx->pc = 0x21F18Cu;
    // 0x21f18c: 0x46001007
    ctx->pc = 0x21f18cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x21f190: 0x46010034
    ctx->pc = 0x21f190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f194: 0x0
    ctx->pc = 0x21f194u;
    // NOP
    // 0x21f198: 0x45030008
    ctx->pc = 0x21F198u;
    {
        const bool branch_taken_0x21f198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f198) {
            ctx->pc = 0x21F19Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21F1BCu;
            goto label_21f1bc;
        }
    }
    ctx->pc = 0x21F1A0u;
    // 0x21f1a0: 0x10000009
    ctx->pc = 0x21F1A0u;
    {
        const bool branch_taken_0x21f1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F1A4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x21f1a0) {
            ctx->pc = 0x21F1C8u;
            goto label_21f1c8;
        }
    }
    ctx->pc = 0x21F1A8u;
label_21f1a8:
    // 0x21f1a8: 0x46011034
    ctx->pc = 0x21f1a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f1ac: 0x0
    ctx->pc = 0x21f1acu;
    // NOP
    // 0x21f1b0: 0x45020005
    ctx->pc = 0x21F1B0u;
    {
        const bool branch_taken_0x21f1b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f1b0) {
            ctx->pc = 0x21F1B4u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x21F1C8u;
            goto label_21f1c8;
        }
    }
    ctx->pc = 0x21F1B8u;
    // 0x21f1b8: 0xc4a00000
    ctx->pc = 0x21f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f1bc:
    // 0x21f1bc: 0x46020001
    ctx->pc = 0x21f1bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21f1c0: 0x10000002
    ctx->pc = 0x21F1C0u;
    {
        const bool branch_taken_0x21f1c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F1C4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        if (branch_taken_0x21f1c0) {
            ctx->pc = 0x21F1CCu;
            goto label_21f1cc;
        }
    }
    ctx->pc = 0x21F1C8u;
label_21f1c8:
    // 0x21f1c8: 0x2402ffff
    ctx->pc = 0x21f1c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21f1cc:
    // 0x21f1cc: 0xc4e00008
    ctx->pc = 0x21f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f1d0:
    // 0x21f1d0: 0x1060000f
    ctx->pc = 0x21F1D0u;
    {
        const bool branch_taken_0x21f1d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F1D4u;
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        if (branch_taken_0x21f1d0) {
            ctx->pc = 0x21F210u;
            goto label_21f210;
        }
    }
    ctx->pc = 0x21F1D8u;
    // 0x21f1d8: 0xc4a00008
    ctx->pc = 0x21f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f1dc: 0x44801000
    ctx->pc = 0x21f1dcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x21f1e0: 0x46001034
    ctx->pc = 0x21f1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f1e4: 0x45000004
    ctx->pc = 0x21F1E4u;
    {
        const bool branch_taken_0x21f1e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f1e4) {
            ctx->pc = 0x21F1F8u;
            goto label_21f1f8;
        }
    }
    ctx->pc = 0x21F1ECu;
    // 0x21f1ec: 0x46011034
    ctx->pc = 0x21f1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f1f0: 0x45010007
    ctx->pc = 0x21F1F0u;
    {
        const bool branch_taken_0x21f1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f1f0) {
            ctx->pc = 0x21F210u;
            goto label_21f210;
        }
    }
    ctx->pc = 0x21F1F8u;
label_21f1f8:
    // 0x21f1f8: 0x46020034
    ctx->pc = 0x21f1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f1fc: 0x45000027
    ctx->pc = 0x21F1FCu;
    {
        const bool branch_taken_0x21f1fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f1fc) {
            ctx->pc = 0x21F29Cu;
            goto label_21f29c;
        }
    }
    ctx->pc = 0x21F204u;
    // 0x21f204: 0x46020834
    ctx->pc = 0x21f204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f208: 0x45000024
    ctx->pc = 0x21F208u;
    {
        const bool branch_taken_0x21f208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f208) {
            ctx->pc = 0x21F29Cu;
            goto label_21f29c;
        }
    }
    ctx->pc = 0x21F210u;
label_21f210:
    // 0x21f210: 0x3c013f00
    ctx->pc = 0x21f210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x21f214: 0x44810000
    ctx->pc = 0x21f214u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21f218: 0x46006302
    ctx->pc = 0x21f218u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x21f21c: 0xc4a20008
    ctx->pc = 0x21f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f220: 0x44800000
    ctx->pc = 0x21f220u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21f224: 0x46001034
    ctx->pc = 0x21f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f228: 0x0
    ctx->pc = 0x21f228u;
    // NOP
    // 0x21f22c: 0x45020004
    ctx->pc = 0x21F22Cu;
    {
        const bool branch_taken_0x21f22c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f22c) {
            ctx->pc = 0x21F230u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21F240u;
            goto label_21f240;
        }
    }
    ctx->pc = 0x21F234u;
    // 0x21f234: 0x46001087
    ctx->pc = 0x21f234u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x21f238: 0x10000003
    ctx->pc = 0x21F238u;
    {
        const bool branch_taken_0x21f238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F23Cu;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
        if (branch_taken_0x21f238) {
            ctx->pc = 0x21F248u;
            goto label_21f248;
        }
    }
    ctx->pc = 0x21F240u;
label_21f240:
    // 0x21f240: 0x46006080
    ctx->pc = 0x21f240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x21f244: 0x44800000
    ctx->pc = 0x21f244u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_21f248:
    // 0x21f248: 0x46000834
    ctx->pc = 0x21f248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f24c: 0x45000008
    ctx->pc = 0x21F24Cu;
    {
        const bool branch_taken_0x21f24c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f24c) {
            ctx->pc = 0x21F270u;
            goto label_21f270;
        }
    }
    ctx->pc = 0x21F254u;
    // 0x21f254: 0x46000807
    ctx->pc = 0x21f254u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x21f258: 0x46020034
    ctx->pc = 0x21f258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f25c: 0x0
    ctx->pc = 0x21f25cu;
    // NOP
    // 0x21f260: 0x45030008
    ctx->pc = 0x21F260u;
    {
        const bool branch_taken_0x21f260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f260) {
            ctx->pc = 0x21F264u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21F284u;
            goto label_21f284;
        }
    }
    ctx->pc = 0x21F268u;
    // 0x21f268: 0x10000009
    ctx->pc = 0x21F268u;
    {
        const bool branch_taken_0x21f268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F26Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x21f268) {
            ctx->pc = 0x21F290u;
            goto label_21f290;
        }
    }
    ctx->pc = 0x21F270u;
label_21f270:
    // 0x21f270: 0x46020834
    ctx->pc = 0x21f270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f274: 0x0
    ctx->pc = 0x21f274u;
    // NOP
    // 0x21f278: 0x45020005
    ctx->pc = 0x21F278u;
    {
        const bool branch_taken_0x21f278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f278) {
            ctx->pc = 0x21F27Cu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x21F290u;
            goto label_21f290;
        }
    }
    ctx->pc = 0x21F280u;
    // 0x21f280: 0xc4a00008
    ctx->pc = 0x21f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f284:
    // 0x21f284: 0x46010001
    ctx->pc = 0x21f284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21f288: 0x3e00008
    ctx->pc = 0x21F288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F28Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F0B4u: goto label_21f0b4;
            case 0x21F0D4u: goto label_21f0d4;
            case 0x21F0D8u: goto label_21f0d8;
            case 0x21F0E8u: goto label_21f0e8;
            case 0x21F128u: goto label_21f128;
            case 0x21F148u: goto label_21f148;
            case 0x21F178u: goto label_21f178;
            case 0x21F180u: goto label_21f180;
            case 0x21F1A8u: goto label_21f1a8;
            case 0x21F1BCu: goto label_21f1bc;
            case 0x21F1C8u: goto label_21f1c8;
            case 0x21F1CCu: goto label_21f1cc;
            case 0x21F1D0u: goto label_21f1d0;
            case 0x21F1F8u: goto label_21f1f8;
            case 0x21F210u: goto label_21f210;
            case 0x21F240u: goto label_21f240;
            case 0x21F248u: goto label_21f248;
            case 0x21F270u: goto label_21f270;
            case 0x21F284u: goto label_21f284;
            case 0x21F290u: goto label_21f290;
            case 0x21F298u: goto label_21f298;
            case 0x21F29Cu: goto label_21f29c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F290u;
label_21f290:
    // 0x21f290: 0x3e00008
    ctx->pc = 0x21F290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F294u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F0B4u: goto label_21f0b4;
            case 0x21F0D4u: goto label_21f0d4;
            case 0x21F0D8u: goto label_21f0d8;
            case 0x21F0E8u: goto label_21f0e8;
            case 0x21F128u: goto label_21f128;
            case 0x21F148u: goto label_21f148;
            case 0x21F178u: goto label_21f178;
            case 0x21F180u: goto label_21f180;
            case 0x21F1A8u: goto label_21f1a8;
            case 0x21F1BCu: goto label_21f1bc;
            case 0x21F1C8u: goto label_21f1c8;
            case 0x21F1CCu: goto label_21f1cc;
            case 0x21F1D0u: goto label_21f1d0;
            case 0x21F1F8u: goto label_21f1f8;
            case 0x21F210u: goto label_21f210;
            case 0x21F240u: goto label_21f240;
            case 0x21F248u: goto label_21f248;
            case 0x21F270u: goto label_21f270;
            case 0x21F284u: goto label_21f284;
            case 0x21F290u: goto label_21f290;
            case 0x21F298u: goto label_21f298;
            case 0x21F29Cu: goto label_21f29c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F298u;
label_21f298:
    // 0x21f298: 0x102d
    ctx->pc = 0x21f298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f29c:
    // 0x21f29c: 0x3e00008
    ctx->pc = 0x21F29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F0B4u: goto label_21f0b4;
            case 0x21F0D4u: goto label_21f0d4;
            case 0x21F0D8u: goto label_21f0d8;
            case 0x21F0E8u: goto label_21f0e8;
            case 0x21F128u: goto label_21f128;
            case 0x21F148u: goto label_21f148;
            case 0x21F178u: goto label_21f178;
            case 0x21F180u: goto label_21f180;
            case 0x21F1A8u: goto label_21f1a8;
            case 0x21F1BCu: goto label_21f1bc;
            case 0x21F1C8u: goto label_21f1c8;
            case 0x21F1CCu: goto label_21f1cc;
            case 0x21F1D0u: goto label_21f1d0;
            case 0x21F1F8u: goto label_21f1f8;
            case 0x21F210u: goto label_21f210;
            case 0x21F240u: goto label_21f240;
            case 0x21F248u: goto label_21f248;
            case 0x21F270u: goto label_21f270;
            case 0x21F284u: goto label_21f284;
            case 0x21F290u: goto label_21f290;
            case 0x21F298u: goto label_21f298;
            case 0x21F29Cu: goto label_21f29c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F2A4u;
}
