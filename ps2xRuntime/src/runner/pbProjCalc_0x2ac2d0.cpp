#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbProjCalc
// Address: 0x2ac2d0 - 0x2aca44
void pbProjCalc_0x2ac2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ac2d0u;

    // 0x2ac2d0: 0x27bdfef0
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2ac2d4: 0xffbf00f0
    ctx->pc = 0x2ac2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2ac2d8: 0xffb100e0
    ctx->pc = 0x2ac2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 17));
    // 0x2ac2dc: 0xffb000d0
    ctx->pc = 0x2ac2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2ac2e0: 0xe7b40100
    ctx->pc = 0x2ac2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2ac2e4: 0x3c020036
    ctx->pc = 0x2ac2e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ac2e8: 0x8c51dee0
    ctx->pc = 0x2ac2e8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ac2ec: 0x8e220010
    ctx->pc = 0x2ac2ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ac2f0: 0xc4420020
    ctx->pc = 0x2ac2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac2f4: 0x468010a0
    ctx->pc = 0x2ac2f4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2ac2f8: 0xe7a20084
    ctx->pc = 0x2ac2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ac2fc: 0x8e220010
    ctx->pc = 0x2ac2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ac300: 0xc4400024
    ctx->pc = 0x2ac300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac304: 0x46800020
    ctx->pc = 0x2ac304u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ac308: 0xe7a00088
    ctx->pc = 0x2ac308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ac30c: 0x8e220004
    ctx->pc = 0x2ac30cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac310: 0xc4410078
    ctx->pc = 0x2ac310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac314: 0x44800000
    ctx->pc = 0x2ac314u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ac318: 0x46000834
    ctx->pc = 0x2ac318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac31c: 0x0
    ctx->pc = 0x2ac31cu;
    // NOP
    // 0x2ac320: 0x45020002
    ctx->pc = 0x2AC320u;
    {
        const bool branch_taken_0x2ac320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac320) {
            ctx->pc = 0x2AC324u;
            ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->pc = 0x2AC32Cu;
            goto label_2ac32c;
        }
    }
    ctx->pc = 0x2AC328u;
    // 0x2ac328: 0x46020800
    ctx->pc = 0x2ac328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2ac32c:
    // 0x2ac32c: 0xe7a0008c
    ctx->pc = 0x2ac32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2ac330: 0x8e220004
    ctx->pc = 0x2ac330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac334: 0xc441007c
    ctx->pc = 0x2ac334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac338: 0x44800000
    ctx->pc = 0x2ac338u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ac33c: 0x46000834
    ctx->pc = 0x2ac33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac340: 0x0
    ctx->pc = 0x2ac340u;
    // NOP
    // 0x2ac344: 0x45020001
    ctx->pc = 0x2AC344u;
    {
        const bool branch_taken_0x2ac344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac344) {
            ctx->pc = 0x2AC348u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2AC34Cu;
            goto label_2ac34c;
        }
    }
    ctx->pc = 0x2AC34Cu;
label_2ac34c:
    // 0x2ac34c: 0x46010001
    ctx->pc = 0x2ac34cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac350: 0xe7a00090
    ctx->pc = 0x2ac350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ac354: 0x8e220004
    ctx->pc = 0x2ac354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac358: 0xc4410080
    ctx->pc = 0x2ac358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac35c: 0x44800000
    ctx->pc = 0x2ac35cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ac360: 0x46000834
    ctx->pc = 0x2ac360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac364: 0x44800000
    ctx->pc = 0x2ac364u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ac368: 0x45030001
    ctx->pc = 0x2AC368u;
    {
        const bool branch_taken_0x2ac368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac368) {
            ctx->pc = 0x2AC36Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2AC370u;
            goto label_2ac370;
        }
    }
    ctx->pc = 0x2AC370u;
label_2ac370:
    // 0x2ac370: 0x46000800
    ctx->pc = 0x2ac370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ac374: 0xe7a00094
    ctx->pc = 0x2ac374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ac378: 0x8e220004
    ctx->pc = 0x2ac378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac37c: 0xc4410084
    ctx->pc = 0x2ac37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac380: 0x44800000
    ctx->pc = 0x2ac380u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ac384: 0x46000834
    ctx->pc = 0x2ac384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac388: 0x0
    ctx->pc = 0x2ac388u;
    // NOP
    // 0x2ac38c: 0x45020001
    ctx->pc = 0x2AC38Cu;
    {
        const bool branch_taken_0x2ac38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac38c) {
            ctx->pc = 0x2AC390u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2AC394u;
            goto label_2ac394;
        }
    }
    ctx->pc = 0x2AC394u;
label_2ac394:
    // 0x2ac394: 0x46010001
    ctx->pc = 0x2ac394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac398: 0xe7a00098
    ctx->pc = 0x2ac398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ac39c: 0x8e220004
    ctx->pc = 0x2ac39cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac3a0: 0xc4400058
    ctx->pc = 0x2ac3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3a4: 0xe7a00000
    ctx->pc = 0x2ac3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ac3a8: 0x8e220004
    ctx->pc = 0x2ac3a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac3ac: 0xc4400008
    ctx->pc = 0x2ac3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3b0: 0xe7a000a4
    ctx->pc = 0x2ac3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ac3b4: 0x8e220004
    ctx->pc = 0x2ac3b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac3b8: 0xc440000c
    ctx->pc = 0x2ac3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3bc: 0xe7a000a8
    ctx->pc = 0x2ac3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ac3c0: 0x8e220010
    ctx->pc = 0x2ac3c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ac3c4: 0xc4400030
    ctx->pc = 0x2ac3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3c8: 0x46800020
    ctx->pc = 0x2ac3c8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ac3cc: 0xe7a000b8
    ctx->pc = 0x2ac3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2ac3d0: 0x8e220010
    ctx->pc = 0x2ac3d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ac3d4: 0xc4400034
    ctx->pc = 0x2ac3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3d8: 0x46800020
    ctx->pc = 0x2ac3d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2ac3dc: 0xe7a000bc
    ctx->pc = 0x2ac3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ac3e0: 0x8e220004
    ctx->pc = 0x2ac3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac3e4: 0xc4400064
    ctx->pc = 0x2ac3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3e8: 0xe7a000c0
    ctx->pc = 0x2ac3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ac3ec: 0x8e220004
    ctx->pc = 0x2ac3ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac3f0: 0xc4400060
    ctx->pc = 0x2ac3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac3f4: 0xe7a000c4
    ctx->pc = 0x2ac3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2ac3f8: 0x8e300004
    ctx->pc = 0x2ac3f8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac3fc: 0xc0bdefe
    ctx->pc = 0x2AC3FCu;
    SET_GPR_U32(ctx, 31, 0x2AC404u);
    ctx->pc = 0x2AC400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC404u; }
    }
    if (ctx->pc != 0x2AC404u) { return; }
    ctx->pc = 0x2AC404u;
    // 0x2ac404: 0x304207ff
    ctx->pc = 0x2ac404u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2ac408: 0xde030010
    ctx->pc = 0x2ac408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac40c: 0x2404f800
    ctx->pc = 0x2ac40cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x2ac410: 0x641824
    ctx->pc = 0x2ac410u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac414: 0x621825
    ctx->pc = 0x2ac414u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac418: 0xfe030010
    ctx->pc = 0x2ac418u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2ac41c: 0x8e300004
    ctx->pc = 0x2ac41cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac420: 0xc0bdefe
    ctx->pc = 0x2AC420u;
    SET_GPR_U32(ctx, 31, 0x2AC428u);
    ctx->pc = 0x2AC424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC428u; }
    }
    if (ctx->pc != 0x2AC428u) { return; }
    ctx->pc = 0x2AC428u;
    // 0x2ac428: 0x304207ff
    ctx->pc = 0x2ac428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2ac42c: 0x21438
    ctx->pc = 0x2ac42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ac430: 0xde030010
    ctx->pc = 0x2ac430u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac434: 0x3c04f800
    ctx->pc = 0x2ac434u;
    SET_GPR_U32(ctx, 4, ((uint32_t)63488 << 16));
    // 0x2ac438: 0x3484ffff
    ctx->pc = 0x2ac438u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ac43c: 0x641824
    ctx->pc = 0x2ac43cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac440: 0x621825
    ctx->pc = 0x2ac440u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac444: 0xfe030010
    ctx->pc = 0x2ac444u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2ac448: 0x8e300004
    ctx->pc = 0x2ac448u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac44c: 0xc0bdefe
    ctx->pc = 0x2AC44Cu;
    SET_GPR_U32(ctx, 31, 0x2AC454u);
    ctx->pc = 0x2AC450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC454u; }
    }
    if (ctx->pc != 0x2AC454u) { return; }
    ctx->pc = 0x2AC454u;
    // 0x2ac454: 0x304207ff
    ctx->pc = 0x2ac454u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2ac458: 0x2103c
    ctx->pc = 0x2ac458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ac45c: 0xde030010
    ctx->pc = 0x2ac45cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac460: 0x2404f800
    ctx->pc = 0x2ac460u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x2ac464: 0x42438
    ctx->pc = 0x2ac464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ac468: 0x3484ffff
    ctx->pc = 0x2ac468u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ac46c: 0x42438
    ctx->pc = 0x2ac46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ac470: 0x3484ffff
    ctx->pc = 0x2ac470u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ac474: 0x641824
    ctx->pc = 0x2ac474u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac478: 0x621825
    ctx->pc = 0x2ac478u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac47c: 0xfe030010
    ctx->pc = 0x2ac47cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2ac480: 0x8e300004
    ctx->pc = 0x2ac480u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac484: 0xc0bdefe
    ctx->pc = 0x2AC484u;
    SET_GPR_U32(ctx, 31, 0x2AC48Cu);
    ctx->pc = 0x2AC488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC48Cu; }
    }
    if (ctx->pc != 0x2AC48Cu) { return; }
    ctx->pc = 0x2AC48Cu;
    // 0x2ac48c: 0x304207ff
    ctx->pc = 0x2ac48cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x2ac490: 0x2143c
    ctx->pc = 0x2ac490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ac494: 0xde030010
    ctx->pc = 0x2ac494u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac498: 0x3c04f800
    ctx->pc = 0x2ac498u;
    SET_GPR_U32(ctx, 4, ((uint32_t)63488 << 16));
    // 0x2ac49c: 0x3484ffff
    ctx->pc = 0x2ac49cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ac4a0: 0x42438
    ctx->pc = 0x2ac4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ac4a4: 0x3484ffff
    ctx->pc = 0x2ac4a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ac4a8: 0x42438
    ctx->pc = 0x2ac4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ac4ac: 0x3484ffff
    ctx->pc = 0x2ac4acu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ac4b0: 0x641824
    ctx->pc = 0x2ac4b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac4b4: 0x621825
    ctx->pc = 0x2ac4b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ac4b8: 0xfe030010
    ctx->pc = 0x2ac4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2ac4bc: 0x3c020037
    ctx->pc = 0x2ac4bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ac4c0: 0x8c428400
    ctx->pc = 0x2ac4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2ac4c4: 0x8c420000
    ctx->pc = 0x2ac4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac4c8: 0x10400007
    ctx->pc = 0x2AC4C8u;
    {
        const bool branch_taken_0x2ac4c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AC4CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 140));
        if (branch_taken_0x2ac4c8) {
            ctx->pc = 0x2AC4E8u;
            goto label_2ac4e8;
        }
    }
    ctx->pc = 0x2AC4D0u;
    // 0x2ac4d0: 0x27a50090
    ctx->pc = 0x2ac4d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ac4d4: 0x27a60094
    ctx->pc = 0x2ac4d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 148));
    // 0x2ac4d8: 0x27a70098
    ctx->pc = 0x2ac4d8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 152));
    // 0x2ac4dc: 0x27a800a4
    ctx->pc = 0x2ac4dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 164));
    // 0x2ac4e0: 0xc0ab364
    ctx->pc = 0x2AC4E0u;
    SET_GPR_U32(ctx, 31, 0x2AC4E8u);
    ctx->pc = 0x2AC4E4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 168));
    ctx->pc = 0x2ACD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        debugShrink_0x2acd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC4E8u; }
    }
    if (ctx->pc != 0x2AC4E8u) { return; }
    ctx->pc = 0x2AC4E8u;
label_2ac4e8:
    // 0x2ac4e8: 0xc7a00090
    ctx->pc = 0x2ac4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac4ec: 0xc7a1008c
    ctx->pc = 0x2ac4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac4f0: 0x46010181
    ctx->pc = 0x2ac4f0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2ac4f4: 0xe7a6009c
    ctx->pc = 0x2ac4f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2ac4f8: 0xc7a40098
    ctx->pc = 0x2ac4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ac4fc: 0xc7a20094
    ctx->pc = 0x2ac4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac500: 0x46022141
    ctx->pc = 0x2ac500u;
    ctx->f[5] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2ac504: 0xe7a500a0
    ctx->pc = 0x2ac504u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ac508: 0x46000840
    ctx->pc = 0x2ac508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ac50c: 0xc7a00084
    ctx->pc = 0x2ac50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac510: 0x46000841
    ctx->pc = 0x2ac510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ac514: 0x3c013f00
    ctx->pc = 0x2ac514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2ac518: 0x44811800
    ctx->pc = 0x2ac518u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2ac51c: 0x46030842
    ctx->pc = 0x2ac51cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ac520: 0xe7a100ac
    ctx->pc = 0x2ac520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2ac524: 0x46041080
    ctx->pc = 0x2ac524u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2ac528: 0xc7a00088
    ctx->pc = 0x2ac528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac52c: 0x46001081
    ctx->pc = 0x2ac52cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ac530: 0x46031082
    ctx->pc = 0x2ac530u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ac534: 0xe7a200b0
    ctx->pc = 0x2ac534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2ac538: 0x8e220010
    ctx->pc = 0x2ac538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ac53c: 0xc4400038
    ctx->pc = 0x2ac53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac540: 0x46000840
    ctx->pc = 0x2ac540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ac544: 0xe7a100ac
    ctx->pc = 0x2ac544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2ac548: 0x8e220010
    ctx->pc = 0x2ac548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ac54c: 0xc440003c
    ctx->pc = 0x2ac54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac550: 0x46001080
    ctx->pc = 0x2ac550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ac554: 0xe7a200b0
    ctx->pc = 0x2ac554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2ac558: 0x8e220004
    ctx->pc = 0x2ac558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac55c: 0xc440005c
    ctx->pc = 0x2ac55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac560: 0x46060002
    ctx->pc = 0x2ac560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2ac564: 0x0
    ctx->pc = 0x2ac564u;
    // NOP
    // 0x2ac568: 0x0
    ctx->pc = 0x2ac568u;
    // NOP
    // 0x2ac56c: 0x46050003
    ctx->pc = 0x2ac56cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2ac570: 0xe7a000b4
    ctx->pc = 0x2ac570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2ac574: 0x8e220010
    ctx->pc = 0x2ac574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ac578: 0x8c420000
    ctx->pc = 0x2ac578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac57c: 0x30420002
    ctx->pc = 0x2ac57cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2ac580: 0x50400004
    ctx->pc = 0x2AC580u;
    {
        const bool branch_taken_0x2ac580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ac580) {
            ctx->pc = 0x2AC584u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x2AC594u;
            goto label_2ac594;
        }
    }
    ctx->pc = 0x2AC588u;
    // 0x2ac588: 0x46000000
    ctx->pc = 0x2ac588u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2ac58c: 0xe7a000b4
    ctx->pc = 0x2ac58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2ac590: 0xc7ac0000
    ctx->pc = 0x2ac590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ac594:
    // 0x2ac594: 0x3c013c0e
    ctx->pc = 0x2ac594u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15374 << 16));
    // 0x2ac598: 0x3421fa35
    ctx->pc = 0x2ac598u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64053));
    // 0x2ac59c: 0x44810000
    ctx->pc = 0x2ac59cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ac5a0: 0x46006302
    ctx->pc = 0x2ac5a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2ac5a4: 0xc0b9e4a
    ctx->pc = 0x2AC5A4u;
    SET_GPR_U32(ctx, 31, 0x2AC5ACu);
    ctx->pc = 0x2AC5A8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5ACu; }
    }
    if (ctx->pc != 0x2AC5ACu) { return; }
    ctx->pc = 0x2AC5ACu;
    // 0x2ac5ac: 0xe7a00008
    ctx->pc = 0x2ac5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ac5b0: 0xc0b9dce
    ctx->pc = 0x2AC5B0u;
    SET_GPR_U32(ctx, 31, 0x2AC5B8u);
    ctx->pc = 0x2AC5B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5B8u; }
    }
    if (ctx->pc != 0x2AC5B8u) { return; }
    ctx->pc = 0x2AC5B8u;
    // 0x2ac5b8: 0xe7a0000c
    ctx->pc = 0x2ac5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ac5bc: 0xc7ac0008
    ctx->pc = 0x2ac5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ac5c0: 0x0
    ctx->pc = 0x2ac5c0u;
    // NOP
    // 0x2ac5c4: 0x0
    ctx->pc = 0x2ac5c4u;
    // NOP
    // 0x2ac5c8: 0x46006303
    ctx->pc = 0x2ac5c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ac5cc: 0xe7ac0010
    ctx->pc = 0x2ac5ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ac5d0: 0xc7a000b4
    ctx->pc = 0x2ac5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac5d4: 0x0
    ctx->pc = 0x2ac5d4u;
    // NOP
    // 0x2ac5d8: 0x0
    ctx->pc = 0x2ac5d8u;
    // NOP
    // 0x2ac5dc: 0x46006303
    ctx->pc = 0x2ac5dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2ac5e0: 0xc0b9d24
    ctx->pc = 0x2AC5E0u;
    SET_GPR_U32(ctx, 31, 0x2AC5E8u);
    ctx->pc = 0x2AC5E4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x2E7490u;
    {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x2e7490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5E8u; }
    }
    if (ctx->pc != 0x2AC5E8u) { return; }
    ctx->pc = 0x2AC5E8u;
    // 0x2ac5e8: 0xe7a00018
    ctx->pc = 0x2ac5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ac5ec: 0xc0b9e4a
    ctx->pc = 0x2AC5ECu;
    SET_GPR_U32(ctx, 31, 0x2AC5F4u);
    ctx->pc = 0x2AC5F0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC5F4u; }
    }
    if (ctx->pc != 0x2AC5F4u) { return; }
    ctx->pc = 0x2AC5F4u;
    // 0x2ac5f4: 0xe7a0001c
    ctx->pc = 0x2ac5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ac5f8: 0xc0b9dce
    ctx->pc = 0x2AC5F8u;
    SET_GPR_U32(ctx, 31, 0x2AC600u);
    ctx->pc = 0x2AC5FCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC600u; }
    }
    if (ctx->pc != 0x2AC600u) { return; }
    ctx->pc = 0x2AC600u;
    // 0x2ac600: 0xe7a00020
    ctx->pc = 0x2ac600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ac604: 0x3c013f80
    ctx->pc = 0x2ac604u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ac608: 0x4481a000
    ctx->pc = 0x2ac608u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2ac60c: 0xc7a10010
    ctx->pc = 0x2ac60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac610: 0x0
    ctx->pc = 0x2ac610u;
    // NOP
    // 0x2ac614: 0x0
    ctx->pc = 0x2ac614u;
    // NOP
    // 0x2ac618: 0x4601a043
    ctx->pc = 0x2ac618u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[1];
    // 0x2ac61c: 0xe7a10014
    ctx->pc = 0x2ac61cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ac620: 0xc7a00024
    ctx->pc = 0x2ac620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac624: 0x0
    ctx->pc = 0x2ac624u;
    // NOP
    // 0x2ac628: 0x0
    ctx->pc = 0x2ac628u;
    // NOP
    // 0x2ac62c: 0x4600a003
    ctx->pc = 0x2ac62cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2ac630: 0xe7a00028
    ctx->pc = 0x2ac630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ac634: 0xe7a1002c
    ctx->pc = 0x2ac634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ac638: 0xe7a00030
    ctx->pc = 0x2ac638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ac63c: 0xc7a100c4
    ctx->pc = 0x2ac63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac640: 0x3c01c000
    ctx->pc = 0x2ac640u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x2ac644: 0x44810000
    ctx->pc = 0x2ac644u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ac648: 0x46000802
    ctx->pc = 0x2ac648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac64c: 0xc7a200c0
    ctx->pc = 0x2ac64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ac650: 0x46020002
    ctx->pc = 0x2ac650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac654: 0x460110c1
    ctx->pc = 0x2ac654u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ac658: 0x0
    ctx->pc = 0x2ac658u;
    // NOP
    // 0x2ac65c: 0x0
    ctx->pc = 0x2ac65cu;
    // NOP
    // 0x2ac660: 0x46030003
    ctx->pc = 0x2ac660u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x2ac664: 0xe7a00034
    ctx->pc = 0x2ac664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ac668: 0x46020840
    ctx->pc = 0x2ac668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ac66c: 0x0
    ctx->pc = 0x2ac66cu;
    // NOP
    // 0x2ac670: 0x0
    ctx->pc = 0x2ac670u;
    // NOP
    // 0x2ac674: 0x46030843
    ctx->pc = 0x2ac674u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2ac678: 0xe7a10038
    ctx->pc = 0x2ac678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ac67c: 0x8e220004
    ctx->pc = 0x2ac67cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac680: 0xc7a00008
    ctx->pc = 0x2ac680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac684: 0xe4400068
    ctx->pc = 0x2ac684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ac688: 0x8e220004
    ctx->pc = 0x2ac688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac68c: 0xc7a0000c
    ctx->pc = 0x2ac68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac690: 0xe440006c
    ctx->pc = 0x2ac690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2ac694: 0x8e220004
    ctx->pc = 0x2ac694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac698: 0xc7a0001c
    ctx->pc = 0x2ac698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac69c: 0xe4400070
    ctx->pc = 0x2ac69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2ac6a0: 0x8e220004
    ctx->pc = 0x2ac6a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6a4: 0xc7a00020
    ctx->pc = 0x2ac6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac6a8: 0xe4400074
    ctx->pc = 0x2ac6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2ac6ac: 0x8e240004
    ctx->pc = 0x2ac6acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6b0: 0xc0b95ac
    ctx->pc = 0x2AC6B0u;
    SET_GPR_U32(ctx, 31, 0x2AC6B8u);
    ctx->pc = 0x2AC6B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 144));
    ctx->pc = 0x2E56B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x2e56b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC6B8u; }
    }
    if (ctx->pc != 0x2AC6B8u) { return; }
    ctx->pc = 0x2AC6B8u;
    // 0x2ac6b8: 0x8e220004
    ctx->pc = 0x2ac6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6bc: 0xc7a0002c
    ctx->pc = 0x2ac6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac6c0: 0xe4400090
    ctx->pc = 0x2ac6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ac6c4: 0x8e220004
    ctx->pc = 0x2ac6c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6c8: 0xc7a00030
    ctx->pc = 0x2ac6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac6cc: 0x46000007
    ctx->pc = 0x2ac6ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ac6d0: 0xe44000a4
    ctx->pc = 0x2ac6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ac6d4: 0x8e220004
    ctx->pc = 0x2ac6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6d8: 0xc7a00038
    ctx->pc = 0x2ac6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac6dc: 0xe44000b8
    ctx->pc = 0x2ac6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2ac6e0: 0x8e220004
    ctx->pc = 0x2ac6e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6e4: 0xe45400bc
    ctx->pc = 0x2ac6e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2ac6e8: 0x8e220004
    ctx->pc = 0x2ac6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6ec: 0xc7a00034
    ctx->pc = 0x2ac6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac6f0: 0xe44000c8
    ctx->pc = 0x2ac6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x2ac6f4: 0x8e220004
    ctx->pc = 0x2ac6f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac6f8: 0xac4000cc
    ctx->pc = 0x2ac6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x2ac6fc: 0xc7a0009c
    ctx->pc = 0x2ac6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac700: 0x3c013f00
    ctx->pc = 0x2ac700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2ac704: 0x44811000
    ctx->pc = 0x2ac704u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2ac708: 0x46020002
    ctx->pc = 0x2ac708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac70c: 0xe7a0003c
    ctx->pc = 0x2ac70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2ac710: 0xc7a000a0
    ctx->pc = 0x2ac710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac714: 0x46020002
    ctx->pc = 0x2ac714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac718: 0xe7a00040
    ctx->pc = 0x2ac718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ac71c: 0xc7a100b8
    ctx->pc = 0x2ac71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac720: 0xc7a300bc
    ctx->pc = 0x2ac720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ac724: 0x46030801
    ctx->pc = 0x2ac724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2ac728: 0x46020002
    ctx->pc = 0x2ac728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ac72c: 0xe7a00044
    ctx->pc = 0x2ac72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ac730: 0xc7a000ac
    ctx->pc = 0x2ac730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac734: 0xe7a00048
    ctx->pc = 0x2ac734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ac738: 0xc7a000b0
    ctx->pc = 0x2ac738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac73c: 0xe7a0004c
    ctx->pc = 0x2ac73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2ac740: 0x46030840
    ctx->pc = 0x2ac740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2ac744: 0x46020842
    ctx->pc = 0x2ac744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ac748: 0xe7a10050
    ctx->pc = 0x2ac748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ac74c: 0x3c020037
    ctx->pc = 0x2ac74cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ac750: 0x8c428400
    ctx->pc = 0x2ac750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2ac754: 0x8c420000
    ctx->pc = 0x2ac754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ac758: 0x50400004
    ctx->pc = 0x2AC758u;
    {
        const bool branch_taken_0x2ac758 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ac758) {
            ctx->pc = 0x2AC75Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2AC76Cu;
            goto label_2ac76c;
        }
    }
    ctx->pc = 0x2AC760u;
    // 0x2ac760: 0xc0ab340
    ctx->pc = 0x2AC760u;
    SET_GPR_U32(ctx, 31, 0x2AC768u);
    ctx->pc = 0x2AC764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ACD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcZoom_0x2acd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC768u; }
    }
    if (ctx->pc != 0x2AC768u) { return; }
    ctx->pc = 0x2AC768u;
    // 0x2ac768: 0x8e240004
    ctx->pc = 0x2ac768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ac76c:
    // 0x2ac76c: 0xc0b95ac
    ctx->pc = 0x2AC76Cu;
    SET_GPR_U32(ctx, 31, 0x2AC774u);
    ctx->pc = 0x2AC770u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 208));
    ctx->pc = 0x2E56B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x2e56b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC774u; }
    }
    if (ctx->pc != 0x2AC774u) { return; }
    ctx->pc = 0x2AC774u;
    // 0x2ac774: 0x8e220004
    ctx->pc = 0x2ac774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac778: 0xc7a0003c
    ctx->pc = 0x2ac778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac77c: 0xe44000d0
    ctx->pc = 0x2ac77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2ac780: 0x8e220004
    ctx->pc = 0x2ac780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac784: 0xc7a00040
    ctx->pc = 0x2ac784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac788: 0xe44000e4
    ctx->pc = 0x2ac788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x2ac78c: 0x8e220004
    ctx->pc = 0x2ac78cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac790: 0xc7a00044
    ctx->pc = 0x2ac790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac794: 0xe44000f8
    ctx->pc = 0x2ac794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x2ac798: 0x8e220004
    ctx->pc = 0x2ac798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac79c: 0xc7a00048
    ctx->pc = 0x2ac79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7a0: 0xe4400100
    ctx->pc = 0x2ac7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x2ac7a4: 0x8e220004
    ctx->pc = 0x2ac7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac7a8: 0xc7a0004c
    ctx->pc = 0x2ac7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7ac: 0xe4400104
    ctx->pc = 0x2ac7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2ac7b0: 0x8e220004
    ctx->pc = 0x2ac7b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac7b4: 0xc7a00050
    ctx->pc = 0x2ac7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7b8: 0xe4400108
    ctx->pc = 0x2ac7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x2ac7bc: 0x8e220004
    ctx->pc = 0x2ac7bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac7c0: 0xc7a0003c
    ctx->pc = 0x2ac7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7c4: 0xe4400370
    ctx->pc = 0x2ac7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 880), bits); }
    // 0x2ac7c8: 0x8e220004
    ctx->pc = 0x2ac7c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac7cc: 0xc7a00040
    ctx->pc = 0x2ac7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7d0: 0xe4400374
    ctx->pc = 0x2ac7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 884), bits); }
    // 0x2ac7d4: 0x8e220004
    ctx->pc = 0x2ac7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac7d8: 0xc7a00044
    ctx->pc = 0x2ac7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7dc: 0xe4400378
    ctx->pc = 0x2ac7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 888), bits); }
    // 0x2ac7e0: 0x8e220004
    ctx->pc = 0x2ac7e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac7e4: 0x3c013f80
    ctx->pc = 0x2ac7e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ac7e8: 0x4481a000
    ctx->pc = 0x2ac7e8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2ac7ec: 0xe454037c
    ctx->pc = 0x2ac7ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 892), bits); }
    // 0x2ac7f0: 0x8e220004
    ctx->pc = 0x2ac7f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac7f4: 0xc7a00048
    ctx->pc = 0x2ac7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac7f8: 0xe4400380
    ctx->pc = 0x2ac7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
    // 0x2ac7fc: 0x8e220004
    ctx->pc = 0x2ac7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac800: 0xc7a0004c
    ctx->pc = 0x2ac800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac804: 0xe4400384
    ctx->pc = 0x2ac804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 900), bits); }
    // 0x2ac808: 0x8e220004
    ctx->pc = 0x2ac808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac80c: 0xc7a00050
    ctx->pc = 0x2ac80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac810: 0xe4400388
    ctx->pc = 0x2ac810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
    // 0x2ac814: 0x8e220004
    ctx->pc = 0x2ac814u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac818: 0xac40038c
    ctx->pc = 0x2ac818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 908), GPR_U32(ctx, 0));
    // 0x2ac81c: 0xc7a0009c
    ctx->pc = 0x2ac81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac820: 0xc7a100a4
    ctx->pc = 0x2ac820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac824: 0x0
    ctx->pc = 0x2ac824u;
    // NOP
    // 0x2ac828: 0x0
    ctx->pc = 0x2ac828u;
    // NOP
    // 0x2ac82c: 0x46010003
    ctx->pc = 0x2ac82cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac830: 0xe7a0006c
    ctx->pc = 0x2ac830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ac834: 0xc7a000a0
    ctx->pc = 0x2ac834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac838: 0xc7a100a8
    ctx->pc = 0x2ac838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac83c: 0x0
    ctx->pc = 0x2ac83cu;
    // NOP
    // 0x2ac840: 0x0
    ctx->pc = 0x2ac840u;
    // NOP
    // 0x2ac844: 0x46010003
    ctx->pc = 0x2ac844u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac848: 0xe7a00070
    ctx->pc = 0x2ac848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ac84c: 0xe7b40074
    ctx->pc = 0x2ac84cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2ac850: 0x8e240004
    ctx->pc = 0x2ac850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac854: 0xc0b95ac
    ctx->pc = 0x2AC854u;
    SET_GPR_U32(ctx, 31, 0x2AC85Cu);
    ctx->pc = 0x2AC858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 336));
    ctx->pc = 0x2E56B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x2e56b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC85Cu; }
    }
    if (ctx->pc != 0x2AC85Cu) { return; }
    ctx->pc = 0x2AC85Cu;
    // 0x2ac85c: 0x8e220004
    ctx->pc = 0x2ac85cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac860: 0xc7a0006c
    ctx->pc = 0x2ac860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac864: 0xe4400150
    ctx->pc = 0x2ac864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x2ac868: 0x8e220004
    ctx->pc = 0x2ac868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac86c: 0xc7a00070
    ctx->pc = 0x2ac86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac870: 0xe4400164
    ctx->pc = 0x2ac870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    // 0x2ac874: 0x8e220004
    ctx->pc = 0x2ac874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac878: 0xc7a00074
    ctx->pc = 0x2ac878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac87c: 0xe4400178
    ctx->pc = 0x2ac87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    // 0x2ac880: 0x8e220004
    ctx->pc = 0x2ac880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac884: 0xc7a0006c
    ctx->pc = 0x2ac884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac888: 0xe4400350
    ctx->pc = 0x2ac888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 848), bits); }
    // 0x2ac88c: 0x8e220004
    ctx->pc = 0x2ac88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac890: 0xc7a00070
    ctx->pc = 0x2ac890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac894: 0xe4400354
    ctx->pc = 0x2ac894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 852), bits); }
    // 0x2ac898: 0x8e220004
    ctx->pc = 0x2ac898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac89c: 0xc7a00074
    ctx->pc = 0x2ac89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac8a0: 0xe4400358
    ctx->pc = 0x2ac8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 856), bits); }
    // 0x2ac8a4: 0x8e220004
    ctx->pc = 0x2ac8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac8a8: 0xe454035c
    ctx->pc = 0x2ac8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 860), bits); }
    // 0x2ac8ac: 0x8e220004
    ctx->pc = 0x2ac8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac8b0: 0xc7a0006c
    ctx->pc = 0x2ac8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac8b4: 0x0
    ctx->pc = 0x2ac8b4u;
    // NOP
    // 0x2ac8b8: 0x0
    ctx->pc = 0x2ac8b8u;
    // NOP
    // 0x2ac8bc: 0x4600a003
    ctx->pc = 0x2ac8bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2ac8c0: 0xe4400360
    ctx->pc = 0x2ac8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 864), bits); }
    // 0x2ac8c4: 0x8e220004
    ctx->pc = 0x2ac8c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac8c8: 0xc7a00070
    ctx->pc = 0x2ac8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac8cc: 0x0
    ctx->pc = 0x2ac8ccu;
    // NOP
    // 0x2ac8d0: 0x0
    ctx->pc = 0x2ac8d0u;
    // NOP
    // 0x2ac8d4: 0x4600a003
    ctx->pc = 0x2ac8d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2ac8d8: 0xe4400364
    ctx->pc = 0x2ac8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 868), bits); }
    // 0x2ac8dc: 0x8e220004
    ctx->pc = 0x2ac8dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac8e0: 0xc7a00074
    ctx->pc = 0x2ac8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac8e4: 0x0
    ctx->pc = 0x2ac8e4u;
    // NOP
    // 0x2ac8e8: 0x0
    ctx->pc = 0x2ac8e8u;
    // NOP
    // 0x2ac8ec: 0x4600a003
    ctx->pc = 0x2ac8ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2ac8f0: 0xe4400368
    ctx->pc = 0x2ac8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 872), bits); }
    // 0x2ac8f4: 0x8e220004
    ctx->pc = 0x2ac8f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac8f8: 0xe454036c
    ctx->pc = 0x2ac8f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 876), bits); }
    // 0x2ac8fc: 0xc7a0003c
    ctx->pc = 0x2ac8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac900: 0xc7a1006c
    ctx->pc = 0x2ac900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac904: 0x0
    ctx->pc = 0x2ac904u;
    // NOP
    // 0x2ac908: 0x0
    ctx->pc = 0x2ac908u;
    // NOP
    // 0x2ac90c: 0x46010003
    ctx->pc = 0x2ac90cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac910: 0xe7a00054
    ctx->pc = 0x2ac910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ac914: 0xc7a00040
    ctx->pc = 0x2ac914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac918: 0xc7a10070
    ctx->pc = 0x2ac918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac91c: 0x0
    ctx->pc = 0x2ac91cu;
    // NOP
    // 0x2ac920: 0x0
    ctx->pc = 0x2ac920u;
    // NOP
    // 0x2ac924: 0x46010003
    ctx->pc = 0x2ac924u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac928: 0xe7a00058
    ctx->pc = 0x2ac928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ac92c: 0xc7a00044
    ctx->pc = 0x2ac92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac930: 0xc7a10074
    ctx->pc = 0x2ac930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac934: 0x0
    ctx->pc = 0x2ac934u;
    // NOP
    // 0x2ac938: 0x0
    ctx->pc = 0x2ac938u;
    // NOP
    // 0x2ac93c: 0x46010003
    ctx->pc = 0x2ac93cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2ac940: 0xe7a0005c
    ctx->pc = 0x2ac940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ac944: 0xc7a00048
    ctx->pc = 0x2ac944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac948: 0xe7a00060
    ctx->pc = 0x2ac948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ac94c: 0xc7a0004c
    ctx->pc = 0x2ac94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac950: 0xe7a00064
    ctx->pc = 0x2ac950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ac954: 0xc7a00050
    ctx->pc = 0x2ac954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac958: 0xe7a00068
    ctx->pc = 0x2ac958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ac95c: 0x8e240004
    ctx->pc = 0x2ac95cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac960: 0xc0b95ac
    ctx->pc = 0x2AC960u;
    SET_GPR_U32(ctx, 31, 0x2AC968u);
    ctx->pc = 0x2AC964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 464));
    ctx->pc = 0x2E56B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x2e56b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC968u; }
    }
    if (ctx->pc != 0x2AC968u) { return; }
    ctx->pc = 0x2AC968u;
    // 0x2ac968: 0x8e220004
    ctx->pc = 0x2ac968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac96c: 0xc7a00054
    ctx->pc = 0x2ac96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac970: 0xe44001d0
    ctx->pc = 0x2ac970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 464), bits); }
    // 0x2ac974: 0x8e220004
    ctx->pc = 0x2ac974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac978: 0xc7a00058
    ctx->pc = 0x2ac978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac97c: 0xe44001e4
    ctx->pc = 0x2ac97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 484), bits); }
    // 0x2ac980: 0x8e220004
    ctx->pc = 0x2ac980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac984: 0xc7a0005c
    ctx->pc = 0x2ac984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac988: 0xe44001f8
    ctx->pc = 0x2ac988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 504), bits); }
    // 0x2ac98c: 0x8e220004
    ctx->pc = 0x2ac98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac990: 0xc7a00060
    ctx->pc = 0x2ac990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac994: 0xe4400200
    ctx->pc = 0x2ac994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 512), bits); }
    // 0x2ac998: 0x8e220004
    ctx->pc = 0x2ac998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac99c: 0xc7a00064
    ctx->pc = 0x2ac99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9a0: 0xe4400204
    ctx->pc = 0x2ac9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 516), bits); }
    // 0x2ac9a4: 0x8e220004
    ctx->pc = 0x2ac9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9a8: 0xc7a00068
    ctx->pc = 0x2ac9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9ac: 0xe4400208
    ctx->pc = 0x2ac9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 520), bits); }
    // 0x2ac9b0: 0x8e220004
    ctx->pc = 0x2ac9b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9b4: 0xc7a00054
    ctx->pc = 0x2ac9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9b8: 0xe4400390
    ctx->pc = 0x2ac9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 912), bits); }
    // 0x2ac9bc: 0x8e220004
    ctx->pc = 0x2ac9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9c0: 0xc7a00058
    ctx->pc = 0x2ac9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9c4: 0xe4400394
    ctx->pc = 0x2ac9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 916), bits); }
    // 0x2ac9c8: 0x8e220004
    ctx->pc = 0x2ac9c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9cc: 0xc7a0005c
    ctx->pc = 0x2ac9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9d0: 0xe4400398
    ctx->pc = 0x2ac9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 920), bits); }
    // 0x2ac9d4: 0x8e220004
    ctx->pc = 0x2ac9d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9d8: 0xe454039c
    ctx->pc = 0x2ac9d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 924), bits); }
    // 0x2ac9dc: 0x8e220004
    ctx->pc = 0x2ac9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9e0: 0xc7a00060
    ctx->pc = 0x2ac9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9e4: 0xe44003a0
    ctx->pc = 0x2ac9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 928), bits); }
    // 0x2ac9e8: 0x8e220004
    ctx->pc = 0x2ac9e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9ec: 0xc7a00064
    ctx->pc = 0x2ac9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9f0: 0xe44003a4
    ctx->pc = 0x2ac9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 932), bits); }
    // 0x2ac9f4: 0x8e220004
    ctx->pc = 0x2ac9f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac9f8: 0xc7a00068
    ctx->pc = 0x2ac9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac9fc: 0xe44003a8
    ctx->pc = 0x2ac9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 936), bits); }
    // 0x2aca00: 0x8e220004
    ctx->pc = 0x2aca00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2aca04: 0xac4003ac
    ctx->pc = 0x2aca04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 940), GPR_U32(ctx, 0));
    // 0x2aca08: 0x8e260004
    ctx->pc = 0x2aca08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2aca0c: 0x24c40110
    ctx->pc = 0x2aca0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 272));
    // 0x2aca10: 0x24c500d0
    ctx->pc = 0x2aca10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 208));
    // 0x2aca14: 0xc0b94f0
    ctx->pc = 0x2ACA14u;
    SET_GPR_U32(ctx, 31, 0x2ACA1Cu);
    ctx->pc = 0x2ACA18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 144));
    ctx->pc = 0x2E53C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x2e53c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACA1Cu; }
    }
    if (ctx->pc != 0x2ACA1Cu) { return; }
    ctx->pc = 0x2ACA1Cu;
    // 0x2aca1c: 0x8e220004
    ctx->pc = 0x2aca1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2aca20: 0xa0400003
    ctx->pc = 0x2aca20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aca24: 0x8e220010
    ctx->pc = 0x2aca24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2aca28: 0xac400040
    ctx->pc = 0x2aca28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2aca2c: 0xdfbf00f0
    ctx->pc = 0x2aca2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2aca30: 0xdfb100e0
    ctx->pc = 0x2aca30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2aca34: 0xdfb000d0
    ctx->pc = 0x2aca34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2aca38: 0xc7b40100
    ctx->pc = 0x2aca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aca3c: 0x3e00008
    ctx->pc = 0x2ACA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACA40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AC32Cu: goto label_2ac32c;
            case 0x2AC34Cu: goto label_2ac34c;
            case 0x2AC370u: goto label_2ac370;
            case 0x2AC394u: goto label_2ac394;
            case 0x2AC4E8u: goto label_2ac4e8;
            case 0x2AC594u: goto label_2ac594;
            case 0x2AC76Cu: goto label_2ac76c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ACA44u;
}
