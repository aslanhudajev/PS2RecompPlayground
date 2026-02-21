#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldCollide
// Address: 0x21e198 - 0x21ec90
void WorldCollide_0x21e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21e198u;

    // 0x21e198: 0x27bdfeb0
    ctx->pc = 0x21e198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x21e19c: 0xffbf0110
    ctx->pc = 0x21e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x21e1a0: 0xffbe0100
    ctx->pc = 0x21e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x21e1a4: 0xffb700f0
    ctx->pc = 0x21e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x21e1a8: 0xffb600e0
    ctx->pc = 0x21e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x21e1ac: 0xffb500d0
    ctx->pc = 0x21e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x21e1b0: 0xffb400c0
    ctx->pc = 0x21e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x21e1b4: 0xffb300b0
    ctx->pc = 0x21e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x21e1b8: 0xffb200a0
    ctx->pc = 0x21e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x21e1bc: 0xffb10090
    ctx->pc = 0x21e1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x21e1c0: 0xffb00080
    ctx->pc = 0x21e1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x21e1c4: 0xe7b80140
    ctx->pc = 0x21e1c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x21e1c8: 0xe7b70138
    ctx->pc = 0x21e1c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x21e1cc: 0xe7b60130
    ctx->pc = 0x21e1ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x21e1d0: 0xe7b50128
    ctx->pc = 0x21e1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x21e1d4: 0xe7b40120
    ctx->pc = 0x21e1d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x21e1d8: 0x80882d
    ctx->pc = 0x21e1d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1dc: 0xa0802d
    ctx->pc = 0x21e1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1e0: 0xc0a82d
    ctx->pc = 0x21e1e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1e4: 0xafa70068
    ctx->pc = 0x21e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x21e1e8: 0x46006506
    ctx->pc = 0x21e1e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21e1ec: 0xafa8006c
    ctx->pc = 0x21e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 8));
    // 0x21e1f0: 0x902d
    ctx->pc = 0x21e1f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1f4: 0x40044800
    ctx->pc = 0x21e1f4u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
    // 0x21e1f8: 0x3c02003a
    ctx->pc = 0x21e1f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21e1fc: 0x8c4321d0
    ctx->pc = 0x21e1fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21e200: 0xac640068
    ctx->pc = 0x21e200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x21e204: 0x40024800
    ctx->pc = 0x21e204u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x21e208: 0xac620078
    ctx->pc = 0x21e208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x21e20c: 0x3c020032
    ctx->pc = 0x21e20cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e210: 0x2443fcf0
    ctx->pc = 0x21e210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966512));
    // 0x21e214: 0xc6200000
    ctx->pc = 0x21e214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e218: 0xe440fcf0
    ctx->pc = 0x21e218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966512), bits); }
    // 0x21e21c: 0xc6200004
    ctx->pc = 0x21e21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e220: 0xe4600004
    ctx->pc = 0x21e220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21e224: 0xc6200008
    ctx->pc = 0x21e224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e228: 0xe4600008
    ctx->pc = 0x21e228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21e22c: 0x3c020032
    ctx->pc = 0x21e22cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e230: 0x2443fd00
    ctx->pc = 0x21e230u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x21e234: 0xc6000000
    ctx->pc = 0x21e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e238: 0xe440fd00
    ctx->pc = 0x21e238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966528), bits); }
    // 0x21e23c: 0xc6000004
    ctx->pc = 0x21e23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e240: 0xe4600004
    ctx->pc = 0x21e240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21e244: 0xc6000008
    ctx->pc = 0x21e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e248: 0xe4600008
    ctx->pc = 0x21e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21e24c: 0x3c020032
    ctx->pc = 0x21e24cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e250: 0x2444fd10
    ctx->pc = 0x21e250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966544));
    // 0x21e254: 0xc6000000
    ctx->pc = 0x21e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e258: 0xc6210000
    ctx->pc = 0x21e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e25c: 0x46010001
    ctx->pc = 0x21e25cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e260: 0xe440fd10
    ctx->pc = 0x21e260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966544), bits); }
    // 0x21e264: 0xc6000004
    ctx->pc = 0x21e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e268: 0xc6210004
    ctx->pc = 0x21e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e26c: 0x46010001
    ctx->pc = 0x21e26cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e270: 0xe4800004
    ctx->pc = 0x21e270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x21e274: 0xc6000008
    ctx->pc = 0x21e274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e278: 0xc6210008
    ctx->pc = 0x21e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e27c: 0x46010001
    ctx->pc = 0x21e27cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e280: 0xc0b58a4
    ctx->pc = 0x21E280u;
    SET_GPR_U32(ctx, 31, 0x21E288u);
    ctx->pc = 0x21E284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E288u; }
    }
    if (ctx->pc != 0x21E288u) { return; }
    ctx->pc = 0x21E288u;
    // 0x21e288: 0x3c020032
    ctx->pc = 0x21e288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e28c: 0xe440fd20
    ctx->pc = 0x21e28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966560), bits); }
    // 0x21e290: 0xc6210000
    ctx->pc = 0x21e290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e294: 0xc6000000
    ctx->pc = 0x21e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e298: 0x46000836
    ctx->pc = 0x21e298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e29c: 0x0
    ctx->pc = 0x21e29cu;
    // NOP
    // 0x21e2a0: 0x4500000c
    ctx->pc = 0x21E2A0u;
    {
        const bool branch_taken_0x21e2a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E2A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e2a0) {
            ctx->pc = 0x21E2D4u;
            goto label_21e2d4;
        }
    }
    ctx->pc = 0x21E2A8u;
    // 0x21e2a8: 0xe441d5c0
    ctx->pc = 0x21e2a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956480), bits); }
    // 0x21e2ac: 0x3c02003c
    ctx->pc = 0x21e2acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e2b0: 0xc6200008
    ctx->pc = 0x21e2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2b4: 0xe440d5c4
    ctx->pc = 0x21e2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956484), bits); }
    // 0x21e2b8: 0x3c02003c
    ctx->pc = 0x21e2b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e2bc: 0xc6000000
    ctx->pc = 0x21e2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2c0: 0xe440d5c8
    ctx->pc = 0x21e2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956488), bits); }
    // 0x21e2c4: 0x3c02003c
    ctx->pc = 0x21e2c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e2c8: 0xc6000008
    ctx->pc = 0x21e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2cc: 0x1000000d
    ctx->pc = 0x21E2CCu;
    {
        const bool branch_taken_0x21e2cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E2D0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956492), bits); }
        if (branch_taken_0x21e2cc) {
            ctx->pc = 0x21E304u;
            goto label_21e304;
        }
    }
    ctx->pc = 0x21E2D4u;
label_21e2d4:
    // 0x21e2d4: 0x3c02003c
    ctx->pc = 0x21e2d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e2d8: 0xc6200000
    ctx->pc = 0x21e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2dc: 0xe440d5c8
    ctx->pc = 0x21e2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956488), bits); }
    // 0x21e2e0: 0x3c02003c
    ctx->pc = 0x21e2e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e2e4: 0xc6200008
    ctx->pc = 0x21e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2e8: 0xe440d5cc
    ctx->pc = 0x21e2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956492), bits); }
    // 0x21e2ec: 0x3c02003c
    ctx->pc = 0x21e2ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e2f0: 0xc6000000
    ctx->pc = 0x21e2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e2f4: 0xe440d5c0
    ctx->pc = 0x21e2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956480), bits); }
    // 0x21e2f8: 0x3c02003c
    ctx->pc = 0x21e2f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e2fc: 0xc6000008
    ctx->pc = 0x21e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e300: 0xe440d5c4
    ctx->pc = 0x21e300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956484), bits); }
label_21e304:
    // 0x21e304: 0xc6200004
    ctx->pc = 0x21e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e308: 0xc6010004
    ctx->pc = 0x21e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e30c: 0x46010034
    ctx->pc = 0x21e30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e310: 0x0
    ctx->pc = 0x21e310u;
    // NOP
    // 0x21e314: 0x45000006
    ctx->pc = 0x21E314u;
    {
        const bool branch_taken_0x21e314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E318u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21e314) {
            ctx->pc = 0x21E330u;
            goto label_21e330;
        }
    }
    ctx->pc = 0x21E31Cu;
    // 0x21e31c: 0x46140001
    ctx->pc = 0x21e31cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x21e320: 0xe440fd24
    ctx->pc = 0x21e320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966564), bits); }
    // 0x21e324: 0x3c020032
    ctx->pc = 0x21e324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e328: 0x10000007
    ctx->pc = 0x21E328u;
    {
        const bool branch_taken_0x21e328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E32Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        if (branch_taken_0x21e328) {
            ctx->pc = 0x21E348u;
            goto label_21e348;
        }
    }
    ctx->pc = 0x21E330u;
label_21e330:
    // 0x21e330: 0xc6000004
    ctx->pc = 0x21e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e334: 0x46140001
    ctx->pc = 0x21e334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x21e338: 0xe440fd24
    ctx->pc = 0x21e338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966564), bits); }
    // 0x21e33c: 0x3c020032
    ctx->pc = 0x21e33cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e340: 0xc6200004
    ctx->pc = 0x21e340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e344: 0x4600a000
    ctx->pc = 0x21e344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_21e348:
    // 0x21e348: 0xe440fd28
    ctx->pc = 0x21e348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966568), bits); }
    // 0x21e34c: 0x3c02003c
    ctx->pc = 0x21e34cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e350: 0x3c03003c
    ctx->pc = 0x21e350u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e354: 0xc441d5c8
    ctx->pc = 0x21e354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e358: 0xc460d5c0
    ctx->pc = 0x21e358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e35c: 0x46000dc1
    ctx->pc = 0x21e35cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e360: 0x3c02003c
    ctx->pc = 0x21e360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e364: 0x3c03003c
    ctx->pc = 0x21e364u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e368: 0xc441d5cc
    ctx->pc = 0x21e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e36c: 0xc460d5c4
    ctx->pc = 0x21e36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e370: 0x46000d41
    ctx->pc = 0x21e370u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e374: 0x44800000
    ctx->pc = 0x21e374u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e378: 0x4600b832
    ctx->pc = 0x21e378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e37c: 0x0
    ctx->pc = 0x21e37cu;
    // NOP
    // 0x21e380: 0x45010004
    ctx->pc = 0x21E380u;
    {
        const bool branch_taken_0x21e380 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E384u;
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x21e380) {
            ctx->pc = 0x21E394u;
            goto label_21e394;
        }
    }
    ctx->pc = 0x21E388u;
    // 0x21e388: 0x0
    ctx->pc = 0x21e388u;
    // NOP
    // 0x21e38c: 0x0
    ctx->pc = 0x21e38cu;
    // NOP
    // 0x21e390: 0x4617ae03
    ctx->pc = 0x21e390u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[24] = ctx->f[21] / ctx->f[23];
label_21e394:
    // 0x21e394: 0x3c02003c
    ctx->pc = 0x21e394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e398: 0xc440d5c0
    ctx->pc = 0x21e398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e39c: 0x46140001
    ctx->pc = 0x21e39cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x21e3a0: 0xe440d5c0
    ctx->pc = 0x21e3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956480), bits); }
    // 0x21e3a4: 0x3c02003c
    ctx->pc = 0x21e3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e3a8: 0xc440d5c8
    ctx->pc = 0x21e3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e3ac: 0x4600a000
    ctx->pc = 0x21e3acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x21e3b0: 0xe440d5c8
    ctx->pc = 0x21e3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956488), bits); }
    // 0x21e3b4: 0x44800000
    ctx->pc = 0x21e3b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e3b8: 0x46150036
    ctx->pc = 0x21e3b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e3bc: 0x0
    ctx->pc = 0x21e3bcu;
    // NOP
    // 0x21e3c0: 0x45000008
    ctx->pc = 0x21E3C0u;
    {
        const bool branch_taken_0x21e3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E3C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e3c0) {
            ctx->pc = 0x21E3E4u;
            goto label_21e3e4;
        }
    }
    ctx->pc = 0x21E3C8u;
    // 0x21e3c8: 0xc440d5c4
    ctx->pc = 0x21e3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e3cc: 0x46140001
    ctx->pc = 0x21e3ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x21e3d0: 0xe440d5c4
    ctx->pc = 0x21e3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956484), bits); }
    // 0x21e3d4: 0x3c02003c
    ctx->pc = 0x21e3d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e3d8: 0xc440d5cc
    ctx->pc = 0x21e3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e3dc: 0x10000007
    ctx->pc = 0x21E3DCu;
    {
        const bool branch_taken_0x21e3dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E3E0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x21e3dc) {
            ctx->pc = 0x21E3FCu;
            goto label_21e3fc;
        }
    }
    ctx->pc = 0x21E3E4u;
label_21e3e4:
    // 0x21e3e4: 0xc440d5c4
    ctx->pc = 0x21e3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e3e8: 0x4600a000
    ctx->pc = 0x21e3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x21e3ec: 0xe440d5c4
    ctx->pc = 0x21e3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956484), bits); }
    // 0x21e3f0: 0x3c02003c
    ctx->pc = 0x21e3f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e3f4: 0xc440d5cc
    ctx->pc = 0x21e3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e3f8: 0x46140001
    ctx->pc = 0x21e3f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_21e3fc:
    // 0x21e3fc: 0xe440d5cc
    ctx->pc = 0x21e3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956492), bits); }
    // 0x21e400: 0x3c03003c
    ctx->pc = 0x21e400u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e404: 0x3c020032
    ctx->pc = 0x21e404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e408: 0x2442f9f8
    ctx->pc = 0x21e408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21e40c: 0xc4410018
    ctx->pc = 0x21e40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e410: 0xe461d5d0
    ctx->pc = 0x21e410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956496), bits); }
    // 0x21e414: 0x3c03003c
    ctx->pc = 0x21e414u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e418: 0xc4400020
    ctx->pc = 0x21e418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e41c: 0xe460d5d4
    ctx->pc = 0x21e41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956500), bits); }
    // 0x21e420: 0x3c02003c
    ctx->pc = 0x21e420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e424: 0xc440d5c8
    ctx->pc = 0x21e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e428: 0x46010034
    ctx->pc = 0x21e428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e42c: 0x0
    ctx->pc = 0x21e42cu;
    // NOP
    // 0x21e430: 0x45030001
    ctx->pc = 0x21E430u;
    {
        const bool branch_taken_0x21e430 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e430) {
            ctx->pc = 0x21E434u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x21E438u;
            goto label_21e438;
        }
    }
    ctx->pc = 0x21E438u;
label_21e438:
    // 0x21e438: 0x3c02003c
    ctx->pc = 0x21e438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e43c: 0x3c03003c
    ctx->pc = 0x21e43cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e440: 0xc441d5c0
    ctx->pc = 0x21e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e444: 0xc460d5d0
    ctx->pc = 0x21e444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e448: 0x46000834
    ctx->pc = 0x21e448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e44c: 0x0
    ctx->pc = 0x21e44cu;
    // NOP
    // 0x21e450: 0x4500001e
    ctx->pc = 0x21E450u;
    {
        const bool branch_taken_0x21e450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E454u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e450) {
            ctx->pc = 0x21E4CCu;
            goto label_21e4cc;
        }
    }
    ctx->pc = 0x21E458u;
    // 0x21e458: 0x44801000
    ctx->pc = 0x21e458u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x21e45c: 0x4602b832
    ctx->pc = 0x21e45cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e460: 0x0
    ctx->pc = 0x21e460u;
    // NOP
    // 0x21e464: 0x45010017
    ctx->pc = 0x21E464u;
    {
        const bool branch_taken_0x21e464 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E468u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e464) {
            ctx->pc = 0x21E4C4u;
            goto label_21e4c4;
        }
    }
    ctx->pc = 0x21E46Cu;
    // 0x21e46c: 0x46010041
    ctx->pc = 0x21e46cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e470: 0x0
    ctx->pc = 0x21e470u;
    // NOP
    // 0x21e474: 0x0
    ctx->pc = 0x21e474u;
    // NOP
    // 0x21e478: 0x46170843
    ctx->pc = 0x21e478u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[23];
    // 0x21e47c: 0x3c02003c
    ctx->pc = 0x21e47cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e480: 0x46020834
    ctx->pc = 0x21e480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e484: 0x0
    ctx->pc = 0x21e484u;
    // NOP
    // 0x21e488: 0x45000007
    ctx->pc = 0x21E488u;
    {
        const bool branch_taken_0x21e488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E48Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956484));
        if (branch_taken_0x21e488) {
            ctx->pc = 0x21E4A8u;
            goto label_21e4a8;
        }
    }
    ctx->pc = 0x21E490u;
    // 0x21e490: 0x46000807
    ctx->pc = 0x21e490u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x21e494: 0x46150002
    ctx->pc = 0x21e494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x21e498: 0xc441d5c4
    ctx->pc = 0x21e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e49c: 0x46010000
    ctx->pc = 0x21e49cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21e4a0: 0x10000005
    ctx->pc = 0x21E4A0u;
    {
        const bool branch_taken_0x21e4a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E4A4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956484), bits); }
        if (branch_taken_0x21e4a0) {
            ctx->pc = 0x21E4B8u;
            goto label_21e4b8;
        }
    }
    ctx->pc = 0x21E4A8u;
label_21e4a8:
    // 0x21e4a8: 0x46150802
    ctx->pc = 0x21e4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x21e4ac: 0xc441d5c4
    ctx->pc = 0x21e4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e4b0: 0x46010000
    ctx->pc = 0x21e4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21e4b4: 0xe4600000
    ctx->pc = 0x21e4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_21e4b8:
    // 0x21e4b8: 0x3c02003c
    ctx->pc = 0x21e4b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e4bc: 0x3c03003c
    ctx->pc = 0x21e4bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e4c0: 0xc460d5d0
    ctx->pc = 0x21e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21e4c4:
    // 0x21e4c4: 0xe440d5c0
    ctx->pc = 0x21e4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956480), bits); }
    // 0x21e4c8: 0x3c02003c
    ctx->pc = 0x21e4c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21e4cc:
    // 0x21e4cc: 0x3c03003c
    ctx->pc = 0x21e4ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e4d0: 0xc441d5cc
    ctx->pc = 0x21e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e4d4: 0xc460d5d4
    ctx->pc = 0x21e4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e4d8: 0x46000834
    ctx->pc = 0x21e4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e4dc: 0x0
    ctx->pc = 0x21e4dcu;
    // NOP
    // 0x21e4e0: 0x45000029
    ctx->pc = 0x21E4E0u;
    {
        const bool branch_taken_0x21e4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E4E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e4e0) {
            ctx->pc = 0x21E588u;
            goto label_21e588;
        }
    }
    ctx->pc = 0x21E4E8u;
    // 0x21e4e8: 0x44800000
    ctx->pc = 0x21e4e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e4ec: 0x4600a832
    ctx->pc = 0x21e4ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e4f0: 0x0
    ctx->pc = 0x21e4f0u;
    // NOP
    // 0x21e4f4: 0x45000003
    ctx->pc = 0x21E4F4u;
    {
        const bool branch_taken_0x21e4f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E4F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e4f4) {
            ctx->pc = 0x21E504u;
            goto label_21e504;
        }
    }
    ctx->pc = 0x21E4FCu;
    // 0x21e4fc: 0x10000020
    ctx->pc = 0x21E4FCu;
    {
        const bool branch_taken_0x21e4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E500u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21e4fc) {
            ctx->pc = 0x21E580u;
            goto label_21e580;
        }
    }
    ctx->pc = 0x21E504u;
label_21e504:
    // 0x21e504: 0x3c03003c
    ctx->pc = 0x21e504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e508: 0xc441d5d4
    ctx->pc = 0x21e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e50c: 0xc460d5cc
    ctx->pc = 0x21e50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e510: 0x46000841
    ctx->pc = 0x21e510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e514: 0x0
    ctx->pc = 0x21e514u;
    // NOP
    // 0x21e518: 0x0
    ctx->pc = 0x21e518u;
    // NOP
    // 0x21e51c: 0x46150843
    ctx->pc = 0x21e51cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x21e520: 0x3c02003c
    ctx->pc = 0x21e520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e524: 0x44800000
    ctx->pc = 0x21e524u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e528: 0x46000834
    ctx->pc = 0x21e528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e52c: 0x0
    ctx->pc = 0x21e52cu;
    // NOP
    // 0x21e530: 0x45000007
    ctx->pc = 0x21E530u;
    {
        const bool branch_taken_0x21e530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E534u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956488));
        if (branch_taken_0x21e530) {
            ctx->pc = 0x21E550u;
            goto label_21e550;
        }
    }
    ctx->pc = 0x21E538u;
    // 0x21e538: 0x46000847
    ctx->pc = 0x21e538u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x21e53c: 0x46170842
    ctx->pc = 0x21e53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x21e540: 0xc440d5c8
    ctx->pc = 0x21e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e544: 0x46010001
    ctx->pc = 0x21e544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e548: 0x10000005
    ctx->pc = 0x21E548u;
    {
        const bool branch_taken_0x21e548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E54Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956488), bits); }
        if (branch_taken_0x21e548) {
            ctx->pc = 0x21E560u;
            goto label_21e560;
        }
    }
    ctx->pc = 0x21E550u;
label_21e550:
    // 0x21e550: 0x46170842
    ctx->pc = 0x21e550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x21e554: 0xc440d5c8
    ctx->pc = 0x21e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e558: 0x46010001
    ctx->pc = 0x21e558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e55c: 0xe4600000
    ctx->pc = 0x21e55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_21e560:
    // 0x21e560: 0x3c03003c
    ctx->pc = 0x21e560u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e564: 0x3c02003c
    ctx->pc = 0x21e564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e568: 0xc440d5d4
    ctx->pc = 0x21e568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e56c: 0x3c013c23
    ctx->pc = 0x21e56cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x21e570: 0x3421d70a
    ctx->pc = 0x21e570u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x21e574: 0x44810800
    ctx->pc = 0x21e574u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x21e578: 0x46010000
    ctx->pc = 0x21e578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21e57c: 0xe460d5cc
    ctx->pc = 0x21e57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956492), bits); }
label_21e580:
    // 0x21e580: 0x3c02003c
    ctx->pc = 0x21e580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e584: 0x3c03003c
    ctx->pc = 0x21e584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21e588:
    // 0x21e588: 0xc441d5c4
    ctx->pc = 0x21e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e58c: 0xc460d5d4
    ctx->pc = 0x21e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e590: 0x46000834
    ctx->pc = 0x21e590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e594: 0x0
    ctx->pc = 0x21e594u;
    // NOP
    // 0x21e598: 0x4500001e
    ctx->pc = 0x21E598u;
    {
        const bool branch_taken_0x21e598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E59Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21e598) {
            ctx->pc = 0x21E614u;
            goto label_21e614;
        }
    }
    ctx->pc = 0x21E5A0u;
    // 0x21e5a0: 0x44801000
    ctx->pc = 0x21e5a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x21e5a4: 0x4602a832
    ctx->pc = 0x21e5a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e5a8: 0x0
    ctx->pc = 0x21e5a8u;
    // NOP
    // 0x21e5ac: 0x45010015
    ctx->pc = 0x21E5ACu;
    {
        const bool branch_taken_0x21e5ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E5B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e5ac) {
            ctx->pc = 0x21E604u;
            goto label_21e604;
        }
    }
    ctx->pc = 0x21E5B4u;
    // 0x21e5b4: 0x46010041
    ctx->pc = 0x21e5b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e5b8: 0x0
    ctx->pc = 0x21e5b8u;
    // NOP
    // 0x21e5bc: 0x0
    ctx->pc = 0x21e5bcu;
    // NOP
    // 0x21e5c0: 0x46150843
    ctx->pc = 0x21e5c0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[21];
    // 0x21e5c4: 0x3c02003c
    ctx->pc = 0x21e5c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e5c8: 0x46020834
    ctx->pc = 0x21e5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e5cc: 0x0
    ctx->pc = 0x21e5ccu;
    // NOP
    // 0x21e5d0: 0x45000007
    ctx->pc = 0x21E5D0u;
    {
        const bool branch_taken_0x21e5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E5D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956480));
        if (branch_taken_0x21e5d0) {
            ctx->pc = 0x21E5F0u;
            goto label_21e5f0;
        }
    }
    ctx->pc = 0x21E5D8u;
    // 0x21e5d8: 0x46000807
    ctx->pc = 0x21e5d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x21e5dc: 0x46170002
    ctx->pc = 0x21e5dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x21e5e0: 0xc441d5c0
    ctx->pc = 0x21e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e5e4: 0x46010000
    ctx->pc = 0x21e5e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21e5e8: 0x10000005
    ctx->pc = 0x21E5E8u;
    {
        const bool branch_taken_0x21e5e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E5ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956480), bits); }
        if (branch_taken_0x21e5e8) {
            ctx->pc = 0x21E600u;
            goto label_21e600;
        }
    }
    ctx->pc = 0x21E5F0u;
label_21e5f0:
    // 0x21e5f0: 0x46170802
    ctx->pc = 0x21e5f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x21e5f4: 0xc441d5c0
    ctx->pc = 0x21e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e5f8: 0x46010000
    ctx->pc = 0x21e5f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21e5fc: 0xe4600000
    ctx->pc = 0x21e5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_21e600:
    // 0x21e600: 0x3c02003c
    ctx->pc = 0x21e600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21e604:
    // 0x21e604: 0x3c03003c
    ctx->pc = 0x21e604u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e608: 0xc460d5d4
    ctx->pc = 0x21e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e60c: 0xe440d5c4
    ctx->pc = 0x21e60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956484), bits); }
    // 0x21e610: 0x3c020032
    ctx->pc = 0x21e610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21e614:
    // 0x21e614: 0x2443f9f8
    ctx->pc = 0x21e614u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21e618: 0x8c620058
    ctx->pc = 0x21e618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x21e61c: 0x24420001
    ctx->pc = 0x21e61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e620: 0xac620058
    ctx->pc = 0x21e620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x21e624: 0x28420100
    ctx->pc = 0x21e624u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x21e628: 0x54400004
    ctx->pc = 0x21E628u;
    {
        const bool branch_taken_0x21e628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21e628) {
            ctx->pc = 0x21E62Cu;
            SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
            ctx->pc = 0x21E63Cu;
            goto label_21e63c;
        }
    }
    ctx->pc = 0x21E630u;
    // 0x21e630: 0x24020001
    ctx->pc = 0x21e630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e634: 0xac620058
    ctx->pc = 0x21e634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x21e638: 0x3c030032
    ctx->pc = 0x21e638u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_21e63c:
    // 0x21e63c: 0x3c020032
    ctx->pc = 0x21e63cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e640: 0x2445f9f8
    ctx->pc = 0x21e640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21e644: 0x90a20058
    ctx->pc = 0x21e644u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x21e648: 0xa062fd38
    ctx->pc = 0x21e648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966584), (uint8_t)GPR_U32(ctx, 2));
    // 0x21e64c: 0x3c02003c
    ctx->pc = 0x21e64cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e650: 0xac40d5a0
    ctx->pc = 0x21e650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956448), GPR_U32(ctx, 0));
    // 0x21e654: 0x3c02003c
    ctx->pc = 0x21e654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e658: 0x3c016258
    ctx->pc = 0x21e658u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x21e65c: 0x3421d727
    ctx->pc = 0x21e65cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x21e660: 0x44810000
    ctx->pc = 0x21e660u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21e664: 0xe440d5a4
    ctx->pc = 0x21e664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956452), bits); }
    // 0x21e668: 0x3c020032
    ctx->pc = 0x21e668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e66c: 0x2442fca0
    ctx->pc = 0x21e66cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966432));
    // 0x21e670: 0xac400044
    ctx->pc = 0x21e670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x21e674: 0xe4400040
    ctx->pc = 0x21e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x21e678: 0x40034800
    ctx->pc = 0x21e678u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21e67c: 0x3c02003a
    ctx->pc = 0x21e67cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21e680: 0x8c4421d0
    ctx->pc = 0x21e680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21e684: 0x8c820078
    ctx->pc = 0x21e684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x21e688: 0x621823
    ctx->pc = 0x21e688u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e68c: 0x8c820070
    ctx->pc = 0x21e68cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x21e690: 0x621821
    ctx->pc = 0x21e690u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e694: 0xac830070
    ctx->pc = 0x21e694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x21e698: 0x8c820074
    ctx->pc = 0x21e698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x21e69c: 0x24420001
    ctx->pc = 0x21e69cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e6a0: 0xac820074
    ctx->pc = 0x21e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x21e6a4: 0x40024800
    ctx->pc = 0x21e6a4u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x21e6a8: 0x1640009f
    ctx->pc = 0x21E6A8u;
    {
        const bool branch_taken_0x21e6a8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x21E6ACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
        if (branch_taken_0x21e6a8) {
            ctx->pc = 0x21E928u;
            goto label_21e928;
        }
    }
    ctx->pc = 0x21E6B0u;
    // 0x21e6b0: 0x3c02003c
    ctx->pc = 0x21e6b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e6b4: 0x3c03003c
    ctx->pc = 0x21e6b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e6b8: 0xc440d5c0
    ctx->pc = 0x21e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e6bc: 0xc461d5d0
    ctx->pc = 0x21e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e6c0: 0x46010001
    ctx->pc = 0x21e6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e6c4: 0xc4a1004c
    ctx->pc = 0x21e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e6c8: 0x46010002
    ctx->pc = 0x21e6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21e6cc: 0x46000064
    ctx->pc = 0x21e6ccu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21e6d0: 0xe7a10060
    ctx->pc = 0x21e6d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21e6d4: 0x3c02003c
    ctx->pc = 0x21e6d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e6d8: 0x3c03003c
    ctx->pc = 0x21e6d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e6dc: 0xc440d5c4
    ctx->pc = 0x21e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e6e0: 0xc461d5d4
    ctx->pc = 0x21e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e6e4: 0x46010001
    ctx->pc = 0x21e6e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e6e8: 0xc4a1004c
    ctx->pc = 0x21e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e6ec: 0x46010002
    ctx->pc = 0x21e6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21e6f0: 0x46000064
    ctx->pc = 0x21e6f0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21e6f4: 0xe7a10064
    ctx->pc = 0x21e6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x21e6f8: 0x8fa30060
    ctx->pc = 0x21e6f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e6fc: 0x4600006
    ctx->pc = 0x21E6FCu;
    {
        const bool branch_taken_0x21e6fc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21E700u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21e6fc) {
            ctx->pc = 0x21E718u;
            goto label_21e718;
        }
    }
    ctx->pc = 0x21E704u;
    // 0x21e704: 0x8ca20050
    ctx->pc = 0x21e704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x21e708: 0x2442ffff
    ctx->pc = 0x21e708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21e70c: 0x44182a
    ctx->pc = 0x21e70cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x21e710: 0x10000002
    ctx->pc = 0x21E710u;
    {
        const bool branch_taken_0x21e710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E714u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x21e710) {
            ctx->pc = 0x21E71Cu;
            goto label_21e71c;
        }
    }
    ctx->pc = 0x21E718u;
label_21e718:
    // 0x21e718: 0x202d
    ctx->pc = 0x21e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e71c:
    // 0x21e71c: 0xafa40060
    ctx->pc = 0x21e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x21e720: 0x8fa30064
    ctx->pc = 0x21e720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x21e724: 0x4600007
    ctx->pc = 0x21E724u;
    {
        const bool branch_taken_0x21e724 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21E728u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21e724) {
            ctx->pc = 0x21E744u;
            goto label_21e744;
        }
    }
    ctx->pc = 0x21E72Cu;
    // 0x21e72c: 0x8c42fa4c
    ctx->pc = 0x21e72cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965836)));
    // 0x21e730: 0x2442ffff
    ctx->pc = 0x21e730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21e734: 0x60202d
    ctx->pc = 0x21e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e738: 0x44182a
    ctx->pc = 0x21e738u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x21e73c: 0x10000002
    ctx->pc = 0x21E73Cu;
    {
        const bool branch_taken_0x21e73c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E740u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x21e73c) {
            ctx->pc = 0x21E748u;
            goto label_21e748;
        }
    }
    ctx->pc = 0x21E744u;
label_21e744:
    // 0x21e744: 0x202d
    ctx->pc = 0x21e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e748:
    // 0x21e748: 0xafa40064
    ctx->pc = 0x21e748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x21e74c: 0x40024800
    ctx->pc = 0x21e74cu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x21e750: 0xafa20070
    ctx->pc = 0x21e750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x21e754: 0x0
    ctx->pc = 0x21e754u;
    // NOP
label_21e758:
    // 0x21e758: 0x8fa20064
    ctx->pc = 0x21e758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x21e75c: 0x210c0
    ctx->pc = 0x21e75cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x21e760: 0x3c040032
    ctx->pc = 0x21e760u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21e764: 0x2484f9f8
    ctx->pc = 0x21e764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965752));
    // 0x21e768: 0x8c83000c
    ctx->pc = 0x21e768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21e76c: 0x432021
    ctx->pc = 0x21e76cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e770: 0x94850000
    ctx->pc = 0x21e770u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e774: 0x8fa30060
    ctx->pc = 0x21e774u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e778: 0x65102a
    ctx->pc = 0x21e778u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x21e77c: 0x14400049
    ctx->pc = 0x21E77Cu;
    {
        const bool branch_taken_0x21e77c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21E780u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21e77c) {
            ctx->pc = 0x21E8A4u;
            goto label_21e8a4;
        }
    }
    ctx->pc = 0x21E784u;
    // 0x21e784: 0x94820002
    ctx->pc = 0x21e784u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x21e788: 0x43102a
    ctx->pc = 0x21e788u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x21e78c: 0x14400045
    ctx->pc = 0x21E78Cu;
    {
        const bool branch_taken_0x21e78c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21E790u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21e78c) {
            ctx->pc = 0x21E8A4u;
            goto label_21e8a4;
        }
    }
    ctx->pc = 0x21E794u;
    // 0x21e794: 0x651023
    ctx->pc = 0x21e794u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21e798: 0x8c830004
    ctx->pc = 0x21e798u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21e79c: 0x431021
    ctx->pc = 0x21e79cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e7a0: 0x21080
    ctx->pc = 0x21e7a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e7a4: 0x3c050032
    ctx->pc = 0x21e7a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x21e7a8: 0x24a5f9f8
    ctx->pc = 0x21e7a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965752));
    // 0x21e7ac: 0x8ca30010
    ctx->pc = 0x21e7acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21e7b0: 0x431021
    ctx->pc = 0x21e7b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e7b4: 0x8c430000
    ctx->pc = 0x21e7b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e7b8: 0x3c02003f
    ctx->pc = 0x21e7b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)63 << 16));
    // 0x21e7bc: 0x3442ffff
    ctx->pc = 0x21e7bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x21e7c0: 0x628824
    ctx->pc = 0x21e7c0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e7c4: 0x39d82
    ctx->pc = 0x21e7c4u;
    SET_GPR_U32(ctx, 19, SRL32(GPR_U32(ctx, 3), 22));
    // 0x21e7c8: 0x12600035
    ctx->pc = 0x21E7C8u;
    {
        const bool branch_taken_0x21e7c8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E7CCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21e7c8) {
            ctx->pc = 0x21E8A0u;
            goto label_21e8a0;
        }
    }
    ctx->pc = 0x21E7D0u;
    // 0x21e7d0: 0x3c020032
    ctx->pc = 0x21e7d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e7d4: 0x2454f9f8
    ctx->pc = 0x21e7d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21e7d8: 0x241e003c
    ctx->pc = 0x21e7d8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21e7dc: 0x3c170032
    ctx->pc = 0x21e7dcu;
    SET_GPR_U32(ctx, 23, ((uint32_t)50 << 16));
    // 0x21e7e0: 0x3c16003c
    ctx->pc = 0x21e7e0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
    // 0x21e7e4: 0x4480b000
    ctx->pc = 0x21e7e4u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x21e7e8: 0x8e820014
    ctx->pc = 0x21e7e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x21e7ec: 0x0
    ctx->pc = 0x21e7ecu;
    // NOP
label_21e7f0:
    // 0x21e7f0: 0x2223021
    ctx->pc = 0x21e7f0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21e7f4: 0x84d00002
    ctx->pc = 0x21e7f4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x21e7f8: 0x52000026
    ctx->pc = 0x21E7F8u;
    {
        const bool branch_taken_0x21e7f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e7f8) {
            ctx->pc = 0x21E7FCu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x21E894u;
            goto label_21e894;
        }
    }
    ctx->pc = 0x21E800u;
    // 0x21e800: 0x84c20000
    ctx->pc = 0x21e800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21e804: 0x5e1018
    ctx->pc = 0x21e804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21e808: 0x8e830004
    ctx->pc = 0x21e808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x21e80c: 0x432021
    ctx->pc = 0x21e80cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e810: 0x8c820018
    ctx->pc = 0x21e810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21e814: 0x10400003
    ctx->pc = 0x21E814u;
    {
        const bool branch_taken_0x21e814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E818u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
        if (branch_taken_0x21e814) {
            ctx->pc = 0x21E824u;
            goto label_21e824;
        }
    }
    ctx->pc = 0x21E81Cu;
    // 0x21e81c: 0x80420035
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 53)));
    // 0x21e820: 0x621825
    ctx->pc = 0x21e820u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21e824:
    // 0x21e824: 0x8c820010
    ctx->pc = 0x21e824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21e828: 0x8fa50068
    ctx->pc = 0x21e828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21e82c: 0xa21024
    ctx->pc = 0x21e82cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21e830: 0x1040000b
    ctx->pc = 0x21E830u;
    {
        const bool branch_taken_0x21e830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E834u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 108)));
        if (branch_taken_0x21e830) {
            ctx->pc = 0x21E860u;
            goto label_21e860;
        }
    }
    ctx->pc = 0x21E838u;
    // 0x21e838: 0x651024
    ctx->pc = 0x21e838u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21e83c: 0x14400009
    ctx->pc = 0x21E83Cu;
    {
        const bool branch_taken_0x21e83c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21E840u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294966588)));
        if (branch_taken_0x21e83c) {
            ctx->pc = 0x21E864u;
            goto label_21e864;
        }
    }
    ctx->pc = 0x21E844u;
    // 0x21e844: 0x8c820038
    ctx->pc = 0x21e844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x21e848: 0x4400005
    ctx->pc = 0x21E848u;
    {
        const bool branch_taken_0x21e848 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21E84Cu;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x21e848) {
            ctx->pc = 0x21E860u;
            goto label_21e860;
        }
    }
    ctx->pc = 0x21E850u;
    // 0x21e850: 0x200282d
    ctx->pc = 0x21e850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e854: 0x24c60004
    ctx->pc = 0x21e854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x21e858: 0xc087690
    ctx->pc = 0x21E858u;
    SET_GPR_U32(ctx, 31, 0x21E860u);
    ctx->pc = 0x21E85Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjCollide_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E860u; }
    }
    if (ctx->pc != 0x21E860u) { return; }
    ctx->pc = 0x21E860u;
label_21e860:
    // 0x21e860: 0x8ee2fd3c
    ctx->pc = 0x21e860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294966588)));
label_21e864:
    // 0x21e864: 0x30420020
    ctx->pc = 0x21e864u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x21e868: 0x10400005
    ctx->pc = 0x21E868u;
    {
        const bool branch_taken_0x21e868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E86Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294956452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21e868) {
            ctx->pc = 0x21E880u;
            goto label_21e880;
        }
    }
    ctx->pc = 0x21E870u;
    // 0x21e870: 0x46160032
    ctx->pc = 0x21e870u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e874: 0x0
    ctx->pc = 0x21e874u;
    // NOP
    // 0x21e878: 0x4501000a
    ctx->pc = 0x21E878u;
    {
        const bool branch_taken_0x21e878 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21E87Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21e878) {
            ctx->pc = 0x21E8A4u;
            goto label_21e8a4;
        }
    }
    ctx->pc = 0x21E880u;
label_21e880:
    // 0x21e880: 0x26230006
    ctx->pc = 0x21e880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 6));
    // 0x21e884: 0x2602ffff
    ctx->pc = 0x21e884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21e888: 0x21040
    ctx->pc = 0x21e888u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x21e88c: 0x628821
    ctx->pc = 0x21e88cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e890: 0x26520001
    ctx->pc = 0x21e890u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_21e894:
    // 0x21e894: 0x253102a
    ctx->pc = 0x21e894u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x21e898: 0x5440ffd5
    ctx->pc = 0x21E898u;
    {
        const bool branch_taken_0x21e898 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21e898) {
            ctx->pc = 0x21E89Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->pc = 0x21E7F0u;
            goto label_21e7f0;
        }
    }
    ctx->pc = 0x21E8A0u;
label_21e8a0:
    // 0x21e8a0: 0x3c020032
    ctx->pc = 0x21e8a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21e8a4:
    // 0x21e8a4: 0x8c42fd3c
    ctx->pc = 0x21e8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966588)));
    // 0x21e8a8: 0x30420020
    ctx->pc = 0x21e8a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x21e8ac: 0x10400006
    ctx->pc = 0x21E8ACu;
    {
        const bool branch_taken_0x21e8ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E8B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e8ac) {
            ctx->pc = 0x21E8C8u;
            goto label_21e8c8;
        }
    }
    ctx->pc = 0x21E8B4u;
    // 0x21e8b4: 0xc441d5a4
    ctx->pc = 0x21e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e8b8: 0x44800000
    ctx->pc = 0x21e8b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e8bc: 0x46000832
    ctx->pc = 0x21e8bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e8c0: 0x45010019
    ctx->pc = 0x21E8C0u;
    {
        const bool branch_taken_0x21e8c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e8c0) {
            ctx->pc = 0x21E928u;
            goto label_21e928;
        }
    }
    ctx->pc = 0x21E8C8u;
label_21e8c8:
    // 0x21e8c8: 0x3c10003a
    ctx->pc = 0x21e8c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x21e8cc: 0x8e0221d0
    ctx->pc = 0x21e8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
    // 0x21e8d0: 0x8fa30070
    ctx->pc = 0x21e8d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e8d4: 0xac4300c8
    ctx->pc = 0x21e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
    // 0x21e8d8: 0x27a40060
    ctx->pc = 0x21e8d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x21e8dc: 0x27a50064
    ctx->pc = 0x21e8dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 100));
    // 0x21e8e0: 0x4600bb06
    ctx->pc = 0x21e8e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x21e8e4: 0x4600ab46
    ctx->pc = 0x21e8e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x21e8e8: 0x4600c386
    ctx->pc = 0x21e8e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x21e8ec: 0xc0877a0
    ctx->pc = 0x21E8ECu;
    SET_GPR_U32(ctx, 31, 0x21E8F4u);
    ctx->pc = 0x21E8F0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21DE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGrid_0x21de80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E8F4u; }
    }
    if (ctx->pc != 0x21E8F4u) { return; }
    ctx->pc = 0x21E8F4u;
    // 0x21e8f4: 0x1040000c
    ctx->pc = 0x21E8F4u;
    {
        const bool branch_taken_0x21e8f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21e8f4) {
            ctx->pc = 0x21E928u;
            goto label_21e928;
        }
    }
    ctx->pc = 0x21E8FCu;
    // 0x21e8fc: 0x40034800
    ctx->pc = 0x21e8fcu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21e900: 0x8e0421d0
    ctx->pc = 0x21e900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
    // 0x21e904: 0x8c8200c8
    ctx->pc = 0x21e904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x21e908: 0x621823
    ctx->pc = 0x21e908u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e90c: 0x8c8200c0
    ctx->pc = 0x21e90cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x21e910: 0x621821
    ctx->pc = 0x21e910u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e914: 0xac8300c0
    ctx->pc = 0x21e914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 3));
    // 0x21e918: 0x8c8200c4
    ctx->pc = 0x21e918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x21e91c: 0x24420001
    ctx->pc = 0x21e91cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e920: 0x1000ff8d
    ctx->pc = 0x21E920u;
    {
        const bool branch_taken_0x21e920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E924u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
        if (branch_taken_0x21e920) {
            ctx->pc = 0x21E758u;
            goto label_21e758;
        }
    }
    ctx->pc = 0x21E928u;
label_21e928:
    // 0x21e928: 0x40034800
    ctx->pc = 0x21e928u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21e92c: 0x3c02003a
    ctx->pc = 0x21e92cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21e930: 0x8c4221d0
    ctx->pc = 0x21e930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21e934: 0xac4300d8
    ctx->pc = 0x21e934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 3));
    // 0x21e938: 0x3c020032
    ctx->pc = 0x21e938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e93c: 0x8c42fd3c
    ctx->pc = 0x21e93cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966588)));
    // 0x21e940: 0x30420020
    ctx->pc = 0x21e940u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x21e944: 0x10400006
    ctx->pc = 0x21E944u;
    {
        const bool branch_taken_0x21e944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E948u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21e944) {
            ctx->pc = 0x21E960u;
            goto label_21e960;
        }
    }
    ctx->pc = 0x21E94Cu;
    // 0x21e94c: 0xc441d5a4
    ctx->pc = 0x21e94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e950: 0x44800000
    ctx->pc = 0x21e950u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e954: 0x46000832
    ctx->pc = 0x21e954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e958: 0x45010010
    ctx->pc = 0x21E958u;
    {
        const bool branch_taken_0x21e958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e958) {
            ctx->pc = 0x21E99Cu;
            goto label_21e99c;
        }
    }
    ctx->pc = 0x21E960u;
label_21e960:
    // 0x21e960: 0x3c02003c
    ctx->pc = 0x21e960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e964: 0x3c03003c
    ctx->pc = 0x21e964u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21e968: 0x3c04003c
    ctx->pc = 0x21e968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x21e96c: 0x3c05003c
    ctx->pc = 0x21e96cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x21e970: 0xc44cd5c0
    ctx->pc = 0x21e970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21e974: 0xc46dd5c8
    ctx->pc = 0x21e974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21e978: 0xc48ed5c4
    ctx->pc = 0x21e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21e97c: 0xc4afd5cc
    ctx->pc = 0x21e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294956492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x21e980: 0x4600bc06
    ctx->pc = 0x21e980u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x21e984: 0x4600ac46
    ctx->pc = 0x21e984u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x21e988: 0x4600c486
    ctx->pc = 0x21e988u;
    ctx->f[18] = FPU_MOV_S(ctx->f[24]);
    // 0x21e98c: 0x8fa40068
    ctx->pc = 0x21e98cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21e990: 0x4600a4c6
    ctx->pc = 0x21e990u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
    // 0x21e994: 0xc087f08
    ctx->pc = 0x21E994u;
    SET_GPR_U32(ctx, 31, 0x21E99Cu);
    ctx->pc = 0x21E998u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 108)));
    ctx->pc = 0x21FC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldDynCollide_0x21fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E99Cu; }
    }
    if (ctx->pc != 0x21E99Cu) { return; }
    ctx->pc = 0x21E99Cu;
label_21e99c:
    // 0x21e99c: 0x40034800
    ctx->pc = 0x21e99cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21e9a0: 0x3c02003a
    ctx->pc = 0x21e9a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21e9a4: 0x8c4421d0
    ctx->pc = 0x21e9a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21e9a8: 0x8c8200d8
    ctx->pc = 0x21e9a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x21e9ac: 0x621823
    ctx->pc = 0x21e9acu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e9b0: 0x8c8200d0
    ctx->pc = 0x21e9b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x21e9b4: 0x621821
    ctx->pc = 0x21e9b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e9b8: 0xac8300d0
    ctx->pc = 0x21e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
    // 0x21e9bc: 0x8c8200d4
    ctx->pc = 0x21e9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x21e9c0: 0x24420001
    ctx->pc = 0x21e9c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e9c4: 0x12a0008b
    ctx->pc = 0x21E9C4u;
    {
        const bool branch_taken_0x21e9c4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E9C8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 2));
        if (branch_taken_0x21e9c4) {
            ctx->pc = 0x21EBF4u;
            goto label_21ebf4;
        }
    }
    ctx->pc = 0x21E9CCu;
    // 0x21e9cc: 0x3c02003c
    ctx->pc = 0x21e9ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e9d0: 0x8c44d5a0
    ctx->pc = 0x21e9d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21e9d4: 0x10800087
    ctx->pc = 0x21E9D4u;
    {
        const bool branch_taken_0x21e9d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E9D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
        if (branch_taken_0x21e9d4) {
            ctx->pc = 0x21EBF4u;
            goto label_21ebf4;
        }
    }
    ctx->pc = 0x21E9DCu;
    // 0x21e9dc: 0x8c820010
    ctx->pc = 0x21e9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21e9e0: 0x431024
    ctx->pc = 0x21e9e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e9e4: 0x10400008
    ctx->pc = 0x21E9E4u;
    {
        const bool branch_taken_0x21e9e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E9E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21e9e4) {
            ctx->pc = 0x21EA08u;
            goto label_21ea08;
        }
    }
    ctx->pc = 0x21E9ECu;
    // 0x21e9ec: 0x8c42fd3c
    ctx->pc = 0x21e9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966588)));
    // 0x21e9f0: 0x30420006
    ctx->pc = 0x21e9f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 6));
    // 0x21e9f4: 0x10400004
    ctx->pc = 0x21E9F4u;
    {
        const bool branch_taken_0x21e9f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E9F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x21e9f4) {
            ctx->pc = 0x21EA08u;
            goto label_21ea08;
        }
    }
    ctx->pc = 0x21E9FCu;
    // 0x21e9fc: 0x8c840028
    ctx->pc = 0x21e9fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x21ea00: 0xc0b4302
    ctx->pc = 0x21EA00u;
    SET_GPR_U32(ctx, 31, 0x21EA08u);
    ctx->pc = 0x21EA04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA08u; }
    }
    if (ctx->pc != 0x21EA08u) { return; }
    ctx->pc = 0x21EA08u;
label_21ea08:
    // 0x21ea08: 0x3c020032
    ctx->pc = 0x21ea08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ea0c: 0x8c42fd3c
    ctx->pc = 0x21ea0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966588)));
    // 0x21ea10: 0x30420004
    ctx->pc = 0x21ea10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x21ea14: 0x10400035
    ctx->pc = 0x21EA14u;
    {
        const bool branch_taken_0x21ea14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EA18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21ea14) {
            ctx->pc = 0x21EAECu;
            goto label_21eaec;
        }
    }
    ctx->pc = 0x21EA1Cu;
    // 0x21ea1c: 0x8c42d5a0
    ctx->pc = 0x21ea1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21ea20: 0x8c420010
    ctx->pc = 0x21ea20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21ea24: 0x3c030100
    ctx->pc = 0x21ea24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x21ea28: 0x431024
    ctx->pc = 0x21ea28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ea2c: 0x10400007
    ctx->pc = 0x21EA2Cu;
    {
        const bool branch_taken_0x21ea2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EA30u;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x21ea2c) {
            ctx->pc = 0x21EA4Cu;
            goto label_21ea4c;
        }
    }
    ctx->pc = 0x21EA34u;
    // 0x21ea34: 0x8e04fd40
    ctx->pc = 0x21ea34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294966592)));
    // 0x21ea38: 0x27b10010
    ctx->pc = 0x21ea38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ea3c: 0x24840008
    ctx->pc = 0x21ea3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x21ea40: 0x220282d
    ctx->pc = 0x21ea40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea44: 0x1000000f
    ctx->pc = 0x21EA44u;
    {
        const bool branch_taken_0x21ea44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EA48u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x21ea44) {
            ctx->pc = 0x21EA84u;
            goto label_21ea84;
        }
    }
    ctx->pc = 0x21EA4Cu;
label_21ea4c:
    // 0x21ea4c: 0x3c02003c
    ctx->pc = 0x21ea4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21ea50: 0x8c46d5a0
    ctx->pc = 0x21ea50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21ea54: 0x8cc30010
    ctx->pc = 0x21ea54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21ea58: 0x30621000
    ctx->pc = 0x21ea58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4096));
    // 0x21ea5c: 0x1040001d
    ctx->pc = 0x21EA5Cu;
    {
        const bool branch_taken_0x21ea5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EA60u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x21ea5c) {
            ctx->pc = 0x21EAD4u;
            goto label_21ead4;
        }
    }
    ctx->pc = 0x21EA64u;
    // 0x21ea64: 0x14400014
    ctx->pc = 0x21EA64u;
    {
        const bool branch_taken_0x21ea64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21EA68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21ea64) {
            ctx->pc = 0x21EAB8u;
            goto label_21eab8;
        }
    }
    ctx->pc = 0x21EA6Cu;
    // 0x21ea6c: 0x3c100032
    ctx->pc = 0x21ea6cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x21ea70: 0x8e04fd40
    ctx->pc = 0x21ea70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294966592)));
    // 0x21ea74: 0x27b10010
    ctx->pc = 0x21ea74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ea78: 0x24840008
    ctx->pc = 0x21ea78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x21ea7c: 0x220282d
    ctx->pc = 0x21ea7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea80: 0x8cc60028
    ctx->pc = 0x21ea80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_21ea84:
    // 0x21ea84: 0xc0b57a2
    ctx->pc = 0x21EA84u;
    SET_GPR_U32(ctx, 31, 0x21EA8Cu);
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA8Cu; }
    }
    if (ctx->pc != 0x21EA8Cu) { return; }
    ctx->pc = 0x21EA8Cu;
    // 0x21ea8c: 0x8e02fd40
    ctx->pc = 0x21ea8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966592)));
    // 0x21ea90: 0x2a0202d
    ctx->pc = 0x21ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea94: 0x220282d
    ctx->pc = 0x21ea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea98: 0xc08755c
    ctx->pc = 0x21EA98u;
    SET_GPR_U32(ctx, 31, 0x21EAA0u);
    ctx->pc = 0x21EA9Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21D570u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateMat3Norm_0x21d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAA0u; }
    }
    if (ctx->pc != 0x21EAA0u) { return; }
    ctx->pc = 0x21EAA0u;
    // 0x21eaa0: 0xc0b58a4
    ctx->pc = 0x21EAA0u;
    SET_GPR_U32(ctx, 31, 0x21EAA8u);
    ctx->pc = 0x21EAA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAA8u; }
    }
    if (ctx->pc != 0x21EAA8u) { return; }
    ctx->pc = 0x21EAA8u;
    // 0x21eaa8: 0xc0b58a4
    ctx->pc = 0x21EAA8u;
    SET_GPR_U32(ctx, 31, 0x21EAB0u);
    ctx->pc = 0x21EAACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 32));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAB0u; }
    }
    if (ctx->pc != 0x21EAB0u) { return; }
    ctx->pc = 0x21EAB0u;
    // 0x21eab0: 0x1000000f
    ctx->pc = 0x21EAB0u;
    {
        const bool branch_taken_0x21eab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EAB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21eab0) {
            ctx->pc = 0x21EAF0u;
            goto label_21eaf0;
        }
    }
    ctx->pc = 0x21EAB8u;
label_21eab8:
    // 0x21eab8: 0x8c42fd40
    ctx->pc = 0x21eab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966592)));
    // 0x21eabc: 0x2a0202d
    ctx->pc = 0x21eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eac0: 0x24450008
    ctx->pc = 0x21eac0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    // 0x21eac4: 0xc08755c
    ctx->pc = 0x21EAC4u;
    SET_GPR_U32(ctx, 31, 0x21EACCu);
    ctx->pc = 0x21EAC8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21D570u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateMat3Norm_0x21d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EACCu; }
    }
    if (ctx->pc != 0x21EACCu) { return; }
    ctx->pc = 0x21EACCu;
    // 0x21eacc: 0x10000008
    ctx->pc = 0x21EACCu;
    {
        const bool branch_taken_0x21eacc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EAD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21eacc) {
            ctx->pc = 0x21EAF0u;
            goto label_21eaf0;
        }
    }
    ctx->pc = 0x21EAD4u;
label_21ead4:
    // 0x21ead4: 0x3c020032
    ctx->pc = 0x21ead4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ead8: 0x8c42fd40
    ctx->pc = 0x21ead8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966592)));
    // 0x21eadc: 0x2a0202d
    ctx->pc = 0x21eadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eae0: 0x24450008
    ctx->pc = 0x21eae0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    // 0x21eae4: 0xc08755c
    ctx->pc = 0x21EAE4u;
    SET_GPR_U32(ctx, 31, 0x21EAECu);
    ctx->pc = 0x21EAE8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x21D570u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateMat3Norm_0x21d570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EAECu; }
    }
    if (ctx->pc != 0x21EAECu) { return; }
    ctx->pc = 0x21EAECu;
label_21eaec:
    // 0x21eaec: 0x3c020032
    ctx->pc = 0x21eaecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21eaf0:
    // 0x21eaf0: 0x8c42fd3c
    ctx->pc = 0x21eaf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966588)));
    // 0x21eaf4: 0x30420002
    ctx->pc = 0x21eaf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x21eaf8: 0x10400038
    ctx->pc = 0x21EAF8u;
    {
        const bool branch_taken_0x21eaf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EAFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21eaf8) {
            ctx->pc = 0x21EBDCu;
            goto label_21ebdc;
        }
    }
    ctx->pc = 0x21EB00u;
    // 0x21eb00: 0x8c42d5a0
    ctx->pc = 0x21eb00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21eb04: 0x8c420010
    ctx->pc = 0x21eb04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21eb08: 0x3c030100
    ctx->pc = 0x21eb08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x21eb0c: 0x431024
    ctx->pc = 0x21eb0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21eb10: 0x10400007
    ctx->pc = 0x21EB10u;
    {
        const bool branch_taken_0x21eb10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EB14u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x21eb10) {
            ctx->pc = 0x21EB30u;
            goto label_21eb30;
        }
    }
    ctx->pc = 0x21EB18u;
    // 0x21eb18: 0x2484d5b0
    ctx->pc = 0x21eb18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956464));
    // 0x21eb1c: 0x26a50030
    ctx->pc = 0x21eb1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 48));
    // 0x21eb20: 0xc0b5850
    ctx->pc = 0x21EB20u;
    SET_GPR_U32(ctx, 31, 0x21EB28u);
    ctx->pc = 0x21EB24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D6140u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat4_0x2d6140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB28u; }
    }
    if (ctx->pc != 0x21EB28u) { return; }
    ctx->pc = 0x21EB28u;
    // 0x21eb28: 0x1000002d
    ctx->pc = 0x21EB28u;
    {
        const bool branch_taken_0x21eb28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EB2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21eb28) {
            ctx->pc = 0x21EBE0u;
            goto label_21ebe0;
        }
    }
    ctx->pc = 0x21EB30u;
label_21eb30:
    // 0x21eb30: 0x3c02003c
    ctx->pc = 0x21eb30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21eb34: 0x8c46d5a0
    ctx->pc = 0x21eb34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21eb38: 0x8cc30010
    ctx->pc = 0x21eb38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21eb3c: 0x30621000
    ctx->pc = 0x21eb3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4096));
    // 0x21eb40: 0x1040001b
    ctx->pc = 0x21EB40u;
    {
        const bool branch_taken_0x21eb40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EB44u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x21eb40) {
            ctx->pc = 0x21EBB0u;
            goto label_21ebb0;
        }
    }
    ctx->pc = 0x21EB48u;
    // 0x21eb48: 0x14400007
    ctx->pc = 0x21EB48u;
    {
        const bool branch_taken_0x21eb48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21EB4Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x21eb48) {
            ctx->pc = 0x21EB68u;
            goto label_21eb68;
        }
    }
    ctx->pc = 0x21EB50u;
    // 0x21eb50: 0x2484d5b0
    ctx->pc = 0x21eb50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956464));
    // 0x21eb54: 0x26a50030
    ctx->pc = 0x21eb54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 48));
    // 0x21eb58: 0xc0b5850
    ctx->pc = 0x21EB58u;
    SET_GPR_U32(ctx, 31, 0x21EB60u);
    ctx->pc = 0x21EB5Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 40)));
    ctx->pc = 0x2D6140u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat4_0x2d6140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EB60u; }
    }
    if (ctx->pc != 0x21EB60u) { return; }
    ctx->pc = 0x21EB60u;
    // 0x21eb60: 0x1000001f
    ctx->pc = 0x21EB60u;
    {
        const bool branch_taken_0x21eb60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EB64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21eb60) {
            ctx->pc = 0x21EBE0u;
            goto label_21ebe0;
        }
    }
    ctx->pc = 0x21EB68u;
label_21eb68:
    // 0x21eb68: 0x2485d5b0
    ctx->pc = 0x21eb68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 4294956464));
    // 0x21eb6c: 0x3c02003c
    ctx->pc = 0x21eb6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21eb70: 0x8c43d5a0
    ctx->pc = 0x21eb70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21eb74: 0x8c620028
    ctx->pc = 0x21eb74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x21eb78: 0xc480d5b0
    ctx->pc = 0x21eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eb7c: 0xc4410030
    ctx->pc = 0x21eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eb80: 0x46010000
    ctx->pc = 0x21eb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21eb84: 0xe6a00030
    ctx->pc = 0x21eb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x21eb88: 0x8c620028
    ctx->pc = 0x21eb88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x21eb8c: 0xc4a00004
    ctx->pc = 0x21eb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eb90: 0xc4410034
    ctx->pc = 0x21eb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eb94: 0x46010000
    ctx->pc = 0x21eb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21eb98: 0xe6a00034
    ctx->pc = 0x21eb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x21eb9c: 0x8c620028
    ctx->pc = 0x21eb9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x21eba0: 0xc4a00008
    ctx->pc = 0x21eba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eba4: 0xc4410038
    ctx->pc = 0x21eba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eba8: 0x10000008
    ctx->pc = 0x21EBA8u;
    {
        const bool branch_taken_0x21eba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EBACu;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x21eba8) {
            ctx->pc = 0x21EBCCu;
            goto label_21ebcc;
        }
    }
    ctx->pc = 0x21EBB0u;
label_21ebb0:
    // 0x21ebb0: 0x3c02003c
    ctx->pc = 0x21ebb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21ebb4: 0x2443d5b0
    ctx->pc = 0x21ebb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956464));
    // 0x21ebb8: 0xc440d5b0
    ctx->pc = 0x21ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ebbc: 0xe6a00030
    ctx->pc = 0x21ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x21ebc0: 0xc4600004
    ctx->pc = 0x21ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ebc4: 0xe6a00034
    ctx->pc = 0x21ebc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x21ebc8: 0xc4600008
    ctx->pc = 0x21ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21ebcc:
    // 0x21ebcc: 0xe6a00038
    ctx->pc = 0x21ebccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x21ebd0: 0x3c013f80
    ctx->pc = 0x21ebd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21ebd4: 0x44810000
    ctx->pc = 0x21ebd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ebd8: 0xe6a0003c
    ctx->pc = 0x21ebd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
label_21ebdc:
    // 0x21ebdc: 0x3c02003c
    ctx->pc = 0x21ebdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21ebe0:
    // 0x21ebe0: 0x8c42d5a0
    ctx->pc = 0x21ebe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21ebe4: 0xaea20044
    ctx->pc = 0x21ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
    // 0x21ebe8: 0x3c02003c
    ctx->pc = 0x21ebe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21ebec: 0xc440d5a4
    ctx->pc = 0x21ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ebf0: 0xe6a00040
    ctx->pc = 0x21ebf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
label_21ebf4:
    // 0x21ebf4: 0x40034800
    ctx->pc = 0x21ebf4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21ebf8: 0x3c02003a
    ctx->pc = 0x21ebf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21ebfc: 0x8c4421d0
    ctx->pc = 0x21ebfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21ec00: 0x8c820088
    ctx->pc = 0x21ec00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x21ec04: 0x621823
    ctx->pc = 0x21ec04u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ec08: 0x8c820080
    ctx->pc = 0x21ec08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x21ec0c: 0x621821
    ctx->pc = 0x21ec0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ec10: 0xac830080
    ctx->pc = 0x21ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x21ec14: 0x8c820084
    ctx->pc = 0x21ec14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x21ec18: 0x24420001
    ctx->pc = 0x21ec18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ec1c: 0xac820084
    ctx->pc = 0x21ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x21ec20: 0x40024800
    ctx->pc = 0x21ec20u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x21ec24: 0x8c830068
    ctx->pc = 0x21ec24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x21ec28: 0x431023
    ctx->pc = 0x21ec28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ec2c: 0x8c830060
    ctx->pc = 0x21ec2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x21ec30: 0x431021
    ctx->pc = 0x21ec30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ec34: 0xac820060
    ctx->pc = 0x21ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x21ec38: 0x8c820064
    ctx->pc = 0x21ec38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x21ec3c: 0x24420001
    ctx->pc = 0x21ec3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ec40: 0xac820064
    ctx->pc = 0x21ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x21ec44: 0x3c02003c
    ctx->pc = 0x21ec44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21ec48: 0x8c42d5a0
    ctx->pc = 0x21ec48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956448)));
    // 0x21ec4c: 0xdfbf0110
    ctx->pc = 0x21ec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x21ec50: 0xdfbe0100
    ctx->pc = 0x21ec50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x21ec54: 0xdfb700f0
    ctx->pc = 0x21ec54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x21ec58: 0xdfb600e0
    ctx->pc = 0x21ec58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x21ec5c: 0xdfb500d0
    ctx->pc = 0x21ec5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21ec60: 0xdfb400c0
    ctx->pc = 0x21ec60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21ec64: 0xdfb300b0
    ctx->pc = 0x21ec64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21ec68: 0xdfb200a0
    ctx->pc = 0x21ec68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21ec6c: 0xdfb10090
    ctx->pc = 0x21ec6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21ec70: 0xdfb00080
    ctx->pc = 0x21ec70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ec74: 0xc7b80140
    ctx->pc = 0x21ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x21ec78: 0xc7b70138
    ctx->pc = 0x21ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21ec7c: 0xc7b60130
    ctx->pc = 0x21ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21ec80: 0xc7b50128
    ctx->pc = 0x21ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21ec84: 0xc7b40120
    ctx->pc = 0x21ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21ec88: 0x3e00008
    ctx->pc = 0x21EC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EC8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E2D4u: goto label_21e2d4;
            case 0x21E304u: goto label_21e304;
            case 0x21E330u: goto label_21e330;
            case 0x21E348u: goto label_21e348;
            case 0x21E394u: goto label_21e394;
            case 0x21E3E4u: goto label_21e3e4;
            case 0x21E3FCu: goto label_21e3fc;
            case 0x21E438u: goto label_21e438;
            case 0x21E4A8u: goto label_21e4a8;
            case 0x21E4B8u: goto label_21e4b8;
            case 0x21E4C4u: goto label_21e4c4;
            case 0x21E4CCu: goto label_21e4cc;
            case 0x21E504u: goto label_21e504;
            case 0x21E550u: goto label_21e550;
            case 0x21E560u: goto label_21e560;
            case 0x21E580u: goto label_21e580;
            case 0x21E588u: goto label_21e588;
            case 0x21E5F0u: goto label_21e5f0;
            case 0x21E600u: goto label_21e600;
            case 0x21E604u: goto label_21e604;
            case 0x21E614u: goto label_21e614;
            case 0x21E63Cu: goto label_21e63c;
            case 0x21E718u: goto label_21e718;
            case 0x21E71Cu: goto label_21e71c;
            case 0x21E744u: goto label_21e744;
            case 0x21E748u: goto label_21e748;
            case 0x21E758u: goto label_21e758;
            case 0x21E7F0u: goto label_21e7f0;
            case 0x21E824u: goto label_21e824;
            case 0x21E860u: goto label_21e860;
            case 0x21E864u: goto label_21e864;
            case 0x21E880u: goto label_21e880;
            case 0x21E894u: goto label_21e894;
            case 0x21E8A0u: goto label_21e8a0;
            case 0x21E8A4u: goto label_21e8a4;
            case 0x21E8C8u: goto label_21e8c8;
            case 0x21E928u: goto label_21e928;
            case 0x21E960u: goto label_21e960;
            case 0x21E99Cu: goto label_21e99c;
            case 0x21EA08u: goto label_21ea08;
            case 0x21EA4Cu: goto label_21ea4c;
            case 0x21EA84u: goto label_21ea84;
            case 0x21EAB8u: goto label_21eab8;
            case 0x21EAD4u: goto label_21ead4;
            case 0x21EAECu: goto label_21eaec;
            case 0x21EAF0u: goto label_21eaf0;
            case 0x21EB30u: goto label_21eb30;
            case 0x21EB68u: goto label_21eb68;
            case 0x21EBB0u: goto label_21ebb0;
            case 0x21EBCCu: goto label_21ebcc;
            case 0x21EBDCu: goto label_21ebdc;
            case 0x21EBE0u: goto label_21ebe0;
            case 0x21EBF4u: goto label_21ebf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EC90u;
}
