#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcAnimInfo
// Address: 0x2100e8 - 0x21033c
void CalcAnimInfo_0x2100e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2100e8u;

    // 0x2100e8: 0x27bdffc0
    ctx->pc = 0x2100e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2100ec: 0xffbf0020
    ctx->pc = 0x2100ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2100f0: 0xffb10010
    ctx->pc = 0x2100f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2100f4: 0xffb00000
    ctx->pc = 0x2100f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2100f8: 0xe7b50038
    ctx->pc = 0x2100f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2100fc: 0xe7b40030
    ctx->pc = 0x2100fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x210100: 0x80802d
    ctx->pc = 0x210100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210104: 0x12000086
    ctx->pc = 0x210104u;
    {
        const bool branch_taken_0x210104 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x210108u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210104) {
            ctx->pc = 0x210320u;
            goto label_210320;
        }
    }
    ctx->pc = 0x21010Cu;
    // 0x21010c: 0x3c020031
    ctx->pc = 0x21010cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x210110: 0xc440ffb4
    ctx->pc = 0x210110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210114: 0xe6000030
    ctx->pc = 0x210114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x210118: 0x82030012
    ctx->pc = 0x210118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x21011c: 0x24020002
    ctx->pc = 0x21011cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x210120: 0x50620001
    ctx->pc = 0x210120u;
    {
        const bool branch_taken_0x210120 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x210120) {
            ctx->pc = 0x210124u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x210128u;
            goto label_210128;
        }
    }
    ctx->pc = 0x210128u;
label_210128:
    // 0x210128: 0x96040036
    ctx->pc = 0x210128u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x21012c: 0x308300ff
    ctx->pc = 0x21012cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x210130: 0x240200ff
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x210134: 0x54620008
    ctx->pc = 0x210134u;
    {
        const bool branch_taken_0x210134 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x210134) {
            ctx->pc = 0x210138u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
            ctx->pc = 0x210158u;
            goto label_210158;
        }
    }
    ctx->pc = 0x21013Cu;
    // 0x21013c: 0x30820100
    ctx->pc = 0x21013cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 256));
    // 0x210140: 0x10400077
    ctx->pc = 0x210140u;
    {
        const bool branch_taken_0x210140 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x210144u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210140) {
            ctx->pc = 0x210320u;
            goto label_210320;
        }
    }
    ctx->pc = 0x210148u;
    // 0x210148: 0x96020036
    ctx->pc = 0x210148u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x21014c: 0x3042ff00
    ctx->pc = 0x21014cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
    // 0x210150: 0xa6020036
    ctx->pc = 0x210150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x210154: 0x8602001e
    ctx->pc = 0x210154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_210158:
    // 0x210158: 0x1040000e
    ctx->pc = 0x210158u;
    {
        const bool branch_taken_0x210158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21015Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x210158) {
            ctx->pc = 0x210194u;
            goto label_210194;
        }
    }
    ctx->pc = 0x210160u;
    // 0x210160: 0x8602000e
    ctx->pc = 0x210160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x210164: 0x431018
    ctx->pc = 0x210164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x210168: 0x8e030000
    ctx->pc = 0x210168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21016c: 0x431021
    ctx->pc = 0x21016cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210170: 0x84510020
    ctx->pc = 0x210170u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x210174: 0x56200009
    ctx->pc = 0x210174u;
    {
        const bool branch_taken_0x210174 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x210174) {
            ctx->pc = 0x210178u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x21019Cu;
            goto label_21019c;
        }
    }
    ctx->pc = 0x21017Cu;
    // 0x21017c: 0xa600001e
    ctx->pc = 0x21017cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x210180: 0x96020036
    ctx->pc = 0x210180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x210184: 0x344200ff
    ctx->pc = 0x210184u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 255));
    // 0x210188: 0xa6020036
    ctx->pc = 0x210188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x21018c: 0xc6000030
    ctx->pc = 0x21018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210190: 0xe6000020
    ctx->pc = 0x210190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_210194:
    // 0x210194: 0x10000062
    ctx->pc = 0x210194u;
    {
        const bool branch_taken_0x210194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210198u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210194) {
            ctx->pc = 0x210320u;
            goto label_210320;
        }
    }
    ctx->pc = 0x21019Cu;
label_21019c:
    // 0x21019c: 0xc601002c
    ctx->pc = 0x21019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2101a0: 0xc440c9a0
    ctx->pc = 0x2101a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2101a4: 0x46000d42
    ctx->pc = 0x2101a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2101a8: 0x3c013f80
    ctx->pc = 0x2101a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2101ac: 0x44810000
    ctx->pc = 0x2101acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2101b0: 0x0
    ctx->pc = 0x2101b0u;
    // NOP
    // 0x2101b4: 0x0
    ctx->pc = 0x2101b4u;
    // NOP
    // 0x2101b8: 0x46150303
    ctx->pc = 0x2101b8u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
    // 0x2101bc: 0xc6020024
    ctx->pc = 0x2101bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2101c0: 0xc6010030
    ctx->pc = 0x2101c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2101c4: 0x46020834
    ctx->pc = 0x2101c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2101c8: 0x0
    ctx->pc = 0x2101c8u;
    // NOP
    // 0x2101cc: 0x45020009
    ctx->pc = 0x2101CCu;
    {
        const bool branch_taken_0x2101cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2101cc) {
            ctx->pc = 0x2101D0u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x2101F4u;
            goto label_2101f4;
        }
    }
    ctx->pc = 0x2101D4u;
    // 0x2101d4: 0xc6000020
    ctx->pc = 0x2101d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2101d8: 0x46000841
    ctx->pc = 0x2101d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2101dc: 0x46001001
    ctx->pc = 0x2101dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2101e0: 0x0
    ctx->pc = 0x2101e0u;
    // NOP
    // 0x2101e4: 0x0
    ctx->pc = 0x2101e4u;
    // NOP
    // 0x2101e8: 0x46000803
    ctx->pc = 0x2101e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2101ec: 0x1000004b
    ctx->pc = 0x2101ECu;
    {
        const bool branch_taken_0x2101ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2101F0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        if (branch_taken_0x2101ec) {
            ctx->pc = 0x21031Cu;
            goto label_21031c;
        }
    }
    ctx->pc = 0x2101F4u;
label_2101f4:
    // 0x2101f4: 0x8602000e
    ctx->pc = 0x2101f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2101f8: 0x1062000b
    ctx->pc = 0x2101F8u;
    {
        const bool branch_taken_0x2101f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2101FCu;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x2101f8) {
            ctx->pc = 0x210228u;
            goto label_210228;
        }
    }
    ctx->pc = 0x210200u;
    // 0x210200: 0xc6000018
    ctx->pc = 0x210200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210204: 0x4600a802
    ctx->pc = 0x210204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x210208: 0xc6010030
    ctx->pc = 0x210208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21020c: 0x46000841
    ctx->pc = 0x21020cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x210210: 0xe6010020
    ctx->pc = 0x210210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x210214: 0xae000024
    ctx->pc = 0x210214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x210218: 0xae000014
    ctx->pc = 0x210218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x21021c: 0xa604001c
    ctx->pc = 0x21021cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 4));
    // 0x210220: 0x24020001
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210224: 0xa2020012
    ctx->pc = 0x210224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_210228:
    // 0x210228: 0xc6010030
    ctx->pc = 0x210228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21022c: 0xc6000020
    ctx->pc = 0x21022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210230: 0x46000841
    ctx->pc = 0x210230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x210234: 0x460c0d02
    ctx->pc = 0x210234u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x210238: 0x3c013f00
    ctx->pc = 0x210238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x21023c: 0x44816000
    ctx->pc = 0x21023cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x210240: 0xc0b9e10
    ctx->pc = 0x210240u;
    SET_GPR_U32(ctx, 31, 0x210248u);
    ctx->pc = 0x210244u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x2E7840u;
    {
        const uint32_t __entryPc = ctx->pc;
        floorf_0x2e7840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210248u; }
    }
    if (ctx->pc != 0x210248u) { return; }
    ctx->pc = 0x210248u;
    // 0x210248: 0x92020013
    ctx->pc = 0x210248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x21024c: 0x30420002
    ctx->pc = 0x21024cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x210250: 0x1040000f
    ctx->pc = 0x210250u;
    {
        const bool branch_taken_0x210250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x210254u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x210250) {
            ctx->pc = 0x210290u;
            goto label_210290;
        }
    }
    ctx->pc = 0x210258u;
    // 0x210258: 0x4602a001
    ctx->pc = 0x210258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x21025c: 0x46000005
    ctx->pc = 0x21025cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x210260: 0x3c013e00
    ctx->pc = 0x210260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15872 << 16));
    // 0x210264: 0x44810800
    ctx->pc = 0x210264u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x210268: 0x46010034
    ctx->pc = 0x210268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21026c: 0x0
    ctx->pc = 0x21026cu;
    // NOP
    // 0x210270: 0x45030008
    ctx->pc = 0x210270u;
    {
        const bool branch_taken_0x210270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210270) {
            ctx->pc = 0x210274u;
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x210294u;
            goto label_210294;
        }
    }
    ctx->pc = 0x210278u;
    // 0x210278: 0x3c02003c
    ctx->pc = 0x210278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21027c: 0xc440c9a0
    ctx->pc = 0x21027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210280: 0x4600a834
    ctx->pc = 0x210280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210284: 0x0
    ctx->pc = 0x210284u;
    // NOP
    // 0x210288: 0x45000003
    ctx->pc = 0x210288u;
    {
        const bool branch_taken_0x210288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21028Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x210288) {
            ctx->pc = 0x210298u;
            goto label_210298;
        }
    }
    ctx->pc = 0x210290u;
label_210290:
    // 0x210290: 0x46001506
    ctx->pc = 0x210290u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_210294:
    // 0x210294: 0x2622ffff
    ctx->pc = 0x210294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
label_210298:
    // 0x210298: 0x44820800
    ctx->pc = 0x210298u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21029c: 0x46800860
    ctx->pc = 0x21029cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2102a0: 0x3c013f00
    ctx->pc = 0x2102a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2102a4: 0x44810000
    ctx->pc = 0x2102a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2102a8: 0x46000800
    ctx->pc = 0x2102a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2102ac: 0x46140036
    ctx->pc = 0x2102acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2102b0: 0x45000014
    ctx->pc = 0x2102B0u;
    {
        const bool branch_taken_0x2102b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2102b0) {
            ctx->pc = 0x210304u;
            goto label_210304;
        }
    }
    ctx->pc = 0x2102B8u;
    // 0x2102b8: 0x96020036
    ctx->pc = 0x2102b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x2102bc: 0x344300ff
    ctx->pc = 0x2102bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 255));
    // 0x2102c0: 0xa6030036
    ctx->pc = 0x2102c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x2102c4: 0xe6010018
    ctx->pc = 0x2102c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2102c8: 0x86020034
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2102cc: 0x10400008
    ctx->pc = 0x2102CCu;
    {
        const bool branch_taken_0x2102cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2102D0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x2102cc) {
            ctx->pc = 0x2102F0u;
            goto label_2102f0;
        }
    }
    ctx->pc = 0x2102D4u;
    // 0x2102d4: 0xc6000030
    ctx->pc = 0x2102d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2102d8: 0xe6000020
    ctx->pc = 0x2102d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2102dc: 0xa6020036
    ctx->pc = 0x2102dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2102e0: 0x24020001
    ctx->pc = 0x2102e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2102e4: 0xa2020012
    ctx->pc = 0x2102e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2102e8: 0x1000000d
    ctx->pc = 0x2102E8u;
    {
        const bool branch_taken_0x2102e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2102ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x2102e8) {
            ctx->pc = 0x210320u;
            goto label_210320;
        }
    }
    ctx->pc = 0x2102F0u;
label_2102f0:
    // 0x2102f0: 0x96020036
    ctx->pc = 0x2102f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x2102f4: 0x3042feff
    ctx->pc = 0x2102f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65279));
    // 0x2102f8: 0xa6020036
    ctx->pc = 0x2102f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x2102fc: 0x1000ffa5
    ctx->pc = 0x2102FCu;
    {
        const bool branch_taken_0x2102fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210300u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x2102fc) {
            ctx->pc = 0x210194u;
            goto label_210194;
        }
    }
    ctx->pc = 0x210304u;
label_210304:
    // 0x210304: 0x44800000
    ctx->pc = 0x210304u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x210308: 0x4600a034
    ctx->pc = 0x210308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21030c: 0x0
    ctx->pc = 0x21030cu;
    // NOP
    // 0x210310: 0x45030001
    ctx->pc = 0x210310u;
    {
        const bool branch_taken_0x210310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210310) {
            ctx->pc = 0x210314u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x210318u;
            goto label_210318;
        }
    }
    ctx->pc = 0x210318u;
label_210318:
    // 0x210318: 0xe6140018
    ctx->pc = 0x210318u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_21031c:
    // 0x21031c: 0x24020001
    ctx->pc = 0x21031cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_210320:
    // 0x210320: 0xdfbf0020
    ctx->pc = 0x210320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210324: 0xdfb10010
    ctx->pc = 0x210324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210328: 0xdfb00000
    ctx->pc = 0x210328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21032c: 0xc7b50038
    ctx->pc = 0x21032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x210330: 0xc7b40030
    ctx->pc = 0x210330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210334: 0x3e00008
    ctx->pc = 0x210334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210128u: goto label_210128;
            case 0x210158u: goto label_210158;
            case 0x210194u: goto label_210194;
            case 0x21019Cu: goto label_21019c;
            case 0x2101F4u: goto label_2101f4;
            case 0x210228u: goto label_210228;
            case 0x210290u: goto label_210290;
            case 0x210294u: goto label_210294;
            case 0x210298u: goto label_210298;
            case 0x2102F0u: goto label_2102f0;
            case 0x210304u: goto label_210304;
            case 0x210318u: goto label_210318;
            case 0x21031Cu: goto label_21031c;
            case 0x210320u: goto label_210320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21033Cu;
}
