#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPointOnScreen
// Address: 0x2d1940 - 0x2d1aa0
void MBPointOnScreen_0x2d1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d1940u;

    // 0x2d1940: 0x27bdffa0
    ctx->pc = 0x2d1940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d1944: 0xffbf0040
    ctx->pc = 0x2d1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d1948: 0xffb00030
    ctx->pc = 0x2d1948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d194c: 0xe7b40050
    ctx->pc = 0x2d194cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d1950: 0xa0302d
    ctx->pc = 0x2d1950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1954: 0x46006506
    ctx->pc = 0x2d1954u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d1958: 0x3c02003a
    ctx->pc = 0x2d1958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d195c: 0x8c501bd0
    ctx->pc = 0x2d195cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2d1960: 0xc4800000
    ctx->pc = 0x2d1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1964: 0xc4c10030
    ctx->pc = 0x2d1964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1968: 0x46010001
    ctx->pc = 0x2d1968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d196c: 0xe7a00000
    ctx->pc = 0x2d196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d1970: 0xc4800004
    ctx->pc = 0x2d1970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1974: 0xc4c10034
    ctx->pc = 0x2d1974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1978: 0x46010001
    ctx->pc = 0x2d1978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d197c: 0xe7a00004
    ctx->pc = 0x2d197cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d1980: 0xc4800008
    ctx->pc = 0x2d1980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1984: 0xc4c10038
    ctx->pc = 0x2d1984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1988: 0x46010001
    ctx->pc = 0x2d1988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d198c: 0xe7a00008
    ctx->pc = 0x2d198cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d1990: 0x3a0202d
    ctx->pc = 0x2d1990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1994: 0xc0b575e
    ctx->pc = 0x2D1994u;
    SET_GPR_U32(ctx, 31, 0x2D199Cu);
    ctx->pc = 0x2D1998u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D5D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        BodyVector_0x2d5d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D199Cu; }
    }
    if (ctx->pc != 0x2D199Cu) { return; }
    ctx->pc = 0x2D199Cu;
    // 0x2d199c: 0xc7a00028
    ctx->pc = 0x2d199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d19a0: 0x3c014040
    ctx->pc = 0x2d19a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2d19a4: 0x44810800
    ctx->pc = 0x2d19a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d19a8: 0x46010034
    ctx->pc = 0x2d19a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d19ac: 0x0
    ctx->pc = 0x2d19acu;
    // NOP
    // 0x2d19b0: 0x45030001
    ctx->pc = 0x2D19B0u;
    {
        const bool branch_taken_0x2d19b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d19b0) {
            ctx->pc = 0x2D19B4u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
            ctx->pc = 0x2D19B8u;
            goto label_2d19b8;
        }
    }
    ctx->pc = 0x2D19B8u;
label_2d19b8:
    // 0x2d19b8: 0x3c013f80
    ctx->pc = 0x2d19b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d19bc: 0x44811000
    ctx->pc = 0x2d19bcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2d19c0: 0xc7a00028
    ctx->pc = 0x2d19c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d19c4: 0x0
    ctx->pc = 0x2d19c4u;
    // NOP
    // 0x2d19c8: 0x0
    ctx->pc = 0x2d19c8u;
    // NOP
    // 0x2d19cc: 0x46001083
    ctx->pc = 0x2d19ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x2d19d0: 0xc7a00020
    ctx->pc = 0x2d19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d19d4: 0x46001002
    ctx->pc = 0x2d19d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d19d8: 0xc6010000
    ctx->pc = 0x2d19d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d19dc: 0x46010002
    ctx->pc = 0x2d19dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d19e0: 0xc6010008
    ctx->pc = 0x2d19e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d19e4: 0x460100c0
    ctx->pc = 0x2d19e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d19e8: 0xe7a30010
    ctx->pc = 0x2d19e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d19ec: 0xc7a00024
    ctx->pc = 0x2d19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d19f0: 0x46001002
    ctx->pc = 0x2d19f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d19f4: 0xc6010004
    ctx->pc = 0x2d19f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d19f8: 0x46010002
    ctx->pc = 0x2d19f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d19fc: 0xc601000c
    ctx->pc = 0x2d19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1a00: 0x46010000
    ctx->pc = 0x2d1a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d1a04: 0xe7a00014
    ctx->pc = 0x2d1a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d1a08: 0x4602a082
    ctx->pc = 0x2d1a08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2d1a0c: 0xc6000000
    ctx->pc = 0x2d1a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a10: 0x46001002
    ctx->pc = 0x2d1a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d1a14: 0xc6010008
    ctx->pc = 0x2d1a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1a18: 0x46010040
    ctx->pc = 0x2d1a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d1a1c: 0xc6000004
    ctx->pc = 0x2d1a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a20: 0x46001082
    ctx->pc = 0x2d1a20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d1a24: 0xc600000c
    ctx->pc = 0x2d1a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a28: 0x46001080
    ctx->pc = 0x2d1a28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d1a2c: 0xc600004c
    ctx->pc = 0x2d1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a30: 0x46010001
    ctx->pc = 0x2d1a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d1a34: 0x46001834
    ctx->pc = 0x2d1a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1a38: 0x0
    ctx->pc = 0x2d1a38u;
    // NOP
    // 0x2d1a3c: 0x45010013
    ctx->pc = 0x2D1A3Cu;
    {
        const bool branch_taken_0x2d1a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1A40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a3c) {
            ctx->pc = 0x2D1A8Cu;
            goto label_2d1a8c;
        }
    }
    ctx->pc = 0x2D1A44u;
    // 0x2d1a44: 0xc6000050
    ctx->pc = 0x2d1a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a48: 0x46000800
    ctx->pc = 0x2d1a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d1a4c: 0x46030034
    ctx->pc = 0x2d1a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1a50: 0x0
    ctx->pc = 0x2d1a50u;
    // NOP
    // 0x2d1a54: 0x4501000d
    ctx->pc = 0x2D1A54u;
    {
        const bool branch_taken_0x2d1a54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1A58u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2d1a54) {
            ctx->pc = 0x2D1A8Cu;
            goto label_2d1a8c;
        }
    }
    ctx->pc = 0x2D1A5Cu;
    // 0x2d1a5c: 0xc6000058
    ctx->pc = 0x2d1a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a60: 0x46020001
    ctx->pc = 0x2d1a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2d1a64: 0x46000834
    ctx->pc = 0x2d1a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1a68: 0x0
    ctx->pc = 0x2d1a68u;
    // NOP
    // 0x2d1a6c: 0x45010008
    ctx->pc = 0x2D1A6Cu;
    {
        const bool branch_taken_0x2d1a6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D1A70u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d1a6c) {
            ctx->pc = 0x2D1A90u;
            goto label_2d1a90;
        }
    }
    ctx->pc = 0x2D1A74u;
    // 0x2d1a74: 0xc6000054
    ctx->pc = 0x2d1a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1a78: 0x46001000
    ctx->pc = 0x2d1a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d1a7c: 0x46010034
    ctx->pc = 0x2d1a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1a80: 0x0
    ctx->pc = 0x2d1a80u;
    // NOP
    // 0x2d1a84: 0x45020002
    ctx->pc = 0x2D1A84u;
    {
        const bool branch_taken_0x2d1a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1a84) {
            ctx->pc = 0x2D1A88u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2D1A90u;
            goto label_2d1a90;
        }
    }
    ctx->pc = 0x2D1A8Cu;
label_2d1a8c:
    // 0x2d1a8c: 0xdfbf0040
    ctx->pc = 0x2d1a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d1a90:
    // 0x2d1a90: 0xdfb00030
    ctx->pc = 0x2d1a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1a94: 0xc7b40050
    ctx->pc = 0x2d1a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d1a98: 0x3e00008
    ctx->pc = 0x2D1A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1A9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D19B8u: goto label_2d19b8;
            case 0x2D1A8Cu: goto label_2d1a8c;
            case 0x2D1A90u: goto label_2d1a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D1AA0u;
}
