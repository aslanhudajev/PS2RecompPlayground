#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_turn_to_ms
// Address: 0x23c160 - 0x23c34c
void set_turn_to_ms_0x23c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c160u;

    // 0x23c160: 0x27bdffa0
    ctx->pc = 0x23c160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23c164: 0xffbf0040
    ctx->pc = 0x23c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23c168: 0xffb00030
    ctx->pc = 0x23c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x23c16c: 0xe7b50058
    ctx->pc = 0x23c16cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23c170: 0xe7b40050
    ctx->pc = 0x23c170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23c174: 0x80802d
    ctx->pc = 0x23c174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c178: 0x8e04035c
    ctx->pc = 0x23c178u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x23c17c: 0xc094494
    ctx->pc = 0x23C17Cu;
    SET_GPR_U32(ctx, 31, 0x23C184u);
    ctx->pc = 0x23C180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251250u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMilestonePos_0x251250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C184u; }
    }
    if (ctx->pc != 0x23C184u) { return; }
    ctx->pc = 0x23C184u;
    // 0x23c184: 0xc6000040
    ctx->pc = 0x23c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c188: 0xc7a10000
    ctx->pc = 0x23c188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c18c: 0x46010001
    ctx->pc = 0x23c18cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23c190: 0xe7a00020
    ctx->pc = 0x23c190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23c194: 0xc6000044
    ctx->pc = 0x23c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c198: 0xc7a10004
    ctx->pc = 0x23c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c19c: 0x46010001
    ctx->pc = 0x23c19cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23c1a0: 0xe7a00024
    ctx->pc = 0x23c1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23c1a4: 0xc6000048
    ctx->pc = 0x23c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c1a8: 0xc7a10008
    ctx->pc = 0x23c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c1ac: 0x46010001
    ctx->pc = 0x23c1acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23c1b0: 0xe7a00028
    ctx->pc = 0x23c1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23c1b4: 0xc6010258
    ctx->pc = 0x23c1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c1b8: 0x3c013f06
    ctx->pc = 0x23c1b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16134 << 16));
    // 0x23c1bc: 0x34210a92
    ctx->pc = 0x23c1bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x23c1c0: 0x44810000
    ctx->pc = 0x23c1c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c1c4: 0x46000d00
    ctx->pc = 0x23c1c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23c1c8: 0x3c014049
    ctx->pc = 0x23c1c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23c1cc: 0x34210fdb
    ctx->pc = 0x23c1ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c1d0: 0x44810000
    ctx->pc = 0x23c1d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c1d4: 0x46140034
    ctx->pc = 0x23c1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c1d8: 0x45000006
    ctx->pc = 0x23C1D8u;
    {
        const bool branch_taken_0x23c1d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c1d8) {
            ctx->pc = 0x23C1F4u;
            goto label_23c1f4;
        }
    }
    ctx->pc = 0x23C1E0u;
    // 0x23c1e0: 0x3c0140c9
    ctx->pc = 0x23c1e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c1e4: 0x34210fdb
    ctx->pc = 0x23c1e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c1e8: 0x44810000
    ctx->pc = 0x23c1e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c1ec: 0x1000000c
    ctx->pc = 0x23C1ECu;
    {
        const bool branch_taken_0x23c1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C1F0u;
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23c1ec) {
            ctx->pc = 0x23C220u;
            goto label_23c220;
        }
    }
    ctx->pc = 0x23C1F4u;
label_23c1f4:
    // 0x23c1f4: 0x3c01c049
    ctx->pc = 0x23c1f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23c1f8: 0x34210fdb
    ctx->pc = 0x23c1f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c1fc: 0x44810000
    ctx->pc = 0x23c1fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c200: 0x4600a036
    ctx->pc = 0x23c200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c204: 0x0
    ctx->pc = 0x23c204u;
    // NOP
    // 0x23c208: 0x45020005
    ctx->pc = 0x23C208u;
    {
        const bool branch_taken_0x23c208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c208) {
            ctx->pc = 0x23C20Cu;
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x23C220u;
            goto label_23c220;
        }
    }
    ctx->pc = 0x23C210u;
    // 0x23c210: 0x3c0140c9
    ctx->pc = 0x23c210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c214: 0x34210fdb
    ctx->pc = 0x23c214u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c218: 0x44810000
    ctx->pc = 0x23c218u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c21c: 0x4600a300
    ctx->pc = 0x23c21cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_23c220:
    // 0x23c220: 0xc0b9e4a
    ctx->pc = 0x23C220u;
    SET_GPR_U32(ctx, 31, 0x23C228u);
    ctx->pc = 0x23C224u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C228u; }
    }
    if (ctx->pc != 0x23C228u) { return; }
    ctx->pc = 0x23C228u;
    // 0x23c228: 0xe7a00010
    ctx->pc = 0x23c228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23c22c: 0xafa00014
    ctx->pc = 0x23c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23c230: 0xc0b9dce
    ctx->pc = 0x23C230u;
    SET_GPR_U32(ctx, 31, 0x23C238u);
    ctx->pc = 0x23C234u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C238u; }
    }
    if (ctx->pc != 0x23C238u) { return; }
    ctx->pc = 0x23C238u;
    // 0x23c238: 0xc7ac0010
    ctx->pc = 0x23c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c23c: 0xc7a10020
    ctx->pc = 0x23c23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c240: 0x46016300
    ctx->pc = 0x23c240u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x23c244: 0xe7ac0010
    ctx->pc = 0x23c244u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23c248: 0xc7a10014
    ctx->pc = 0x23c248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c24c: 0xc7a20024
    ctx->pc = 0x23c24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23c250: 0x46020840
    ctx->pc = 0x23c250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23c254: 0xe7a10014
    ctx->pc = 0x23c254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23c258: 0xc7a10028
    ctx->pc = 0x23c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c25c: 0x46010340
    ctx->pc = 0x23c25cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23c260: 0xc0b5c34
    ctx->pc = 0x23C260u;
    SET_GPR_U32(ctx, 31, 0x23C268u);
    ctx->pc = 0x23C264u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C268u; }
    }
    if (ctx->pc != 0x23C268u) { return; }
    ctx->pc = 0x23C268u;
    // 0x23c268: 0x46000546
    ctx->pc = 0x23c268u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x23c26c: 0xc6010258
    ctx->pc = 0x23c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c270: 0x3c013f06
    ctx->pc = 0x23c270u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16134 << 16));
    // 0x23c274: 0x34210a92
    ctx->pc = 0x23c274u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x23c278: 0x44810000
    ctx->pc = 0x23c278u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c27c: 0x46000d01
    ctx->pc = 0x23c27cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23c280: 0x3c014049
    ctx->pc = 0x23c280u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23c284: 0x34210fdb
    ctx->pc = 0x23c284u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c288: 0x44810000
    ctx->pc = 0x23c288u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c28c: 0x46140034
    ctx->pc = 0x23c28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c290: 0x45000006
    ctx->pc = 0x23C290u;
    {
        const bool branch_taken_0x23c290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c290) {
            ctx->pc = 0x23C2ACu;
            goto label_23c2ac;
        }
    }
    ctx->pc = 0x23C298u;
    // 0x23c298: 0x3c0140c9
    ctx->pc = 0x23c298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c29c: 0x34210fdb
    ctx->pc = 0x23c29cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c2a0: 0x44810000
    ctx->pc = 0x23c2a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c2a4: 0x1000000c
    ctx->pc = 0x23C2A4u;
    {
        const bool branch_taken_0x23c2a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C2A8u;
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23c2a4) {
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2ACu;
label_23c2ac:
    // 0x23c2ac: 0x3c01c049
    ctx->pc = 0x23c2acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23c2b0: 0x34210fdb
    ctx->pc = 0x23c2b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c2b4: 0x44810000
    ctx->pc = 0x23c2b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c2b8: 0x4600a036
    ctx->pc = 0x23c2b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c2bc: 0x0
    ctx->pc = 0x23c2bcu;
    // NOP
    // 0x23c2c0: 0x45020005
    ctx->pc = 0x23C2C0u;
    {
        const bool branch_taken_0x23c2c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c2c0) {
            ctx->pc = 0x23C2C4u;
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x23C2D8u;
            goto label_23c2d8;
        }
    }
    ctx->pc = 0x23C2C8u;
    // 0x23c2c8: 0x3c0140c9
    ctx->pc = 0x23c2c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23c2cc: 0x34210fdb
    ctx->pc = 0x23c2ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23c2d0: 0x44810000
    ctx->pc = 0x23c2d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23c2d4: 0x4600a300
    ctx->pc = 0x23c2d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_23c2d8:
    // 0x23c2d8: 0xc0b9e4a
    ctx->pc = 0x23C2D8u;
    SET_GPR_U32(ctx, 31, 0x23C2E0u);
    ctx->pc = 0x23C2DCu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2E0u; }
    }
    if (ctx->pc != 0x23C2E0u) { return; }
    ctx->pc = 0x23C2E0u;
    // 0x23c2e0: 0xe7a00010
    ctx->pc = 0x23c2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23c2e4: 0xafa00014
    ctx->pc = 0x23c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23c2e8: 0xc0b9dce
    ctx->pc = 0x23C2E8u;
    SET_GPR_U32(ctx, 31, 0x23C2F0u);
    ctx->pc = 0x23C2ECu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C2F0u; }
    }
    if (ctx->pc != 0x23C2F0u) { return; }
    ctx->pc = 0x23C2F0u;
    // 0x23c2f0: 0xc7ac0010
    ctx->pc = 0x23c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c2f4: 0xc7a10020
    ctx->pc = 0x23c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c2f8: 0x46016300
    ctx->pc = 0x23c2f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x23c2fc: 0xe7ac0010
    ctx->pc = 0x23c2fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23c300: 0xc7a10014
    ctx->pc = 0x23c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c304: 0xc7a20024
    ctx->pc = 0x23c304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23c308: 0x46020840
    ctx->pc = 0x23c308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23c30c: 0xe7a10014
    ctx->pc = 0x23c30cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23c310: 0xc7a10028
    ctx->pc = 0x23c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c314: 0x46010340
    ctx->pc = 0x23c314u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23c318: 0xc0b5c34
    ctx->pc = 0x23C318u;
    SET_GPR_U32(ctx, 31, 0x23C320u);
    ctx->pc = 0x23C31Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C320u; }
    }
    if (ctx->pc != 0x23C320u) { return; }
    ctx->pc = 0x23C320u;
    // 0x23c320: 0x46150036
    ctx->pc = 0x23c320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c324: 0x0
    ctx->pc = 0x23c324u;
    // NOP
    // 0x23c328: 0x45000002
    ctx->pc = 0x23C328u;
    {
        const bool branch_taken_0x23c328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23C32Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23c328) {
            ctx->pc = 0x23C334u;
            goto label_23c334;
        }
    }
    ctx->pc = 0x23C330u;
    // 0x23c330: 0x2402ffff
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23c334:
    // 0x23c334: 0xdfbf0040
    ctx->pc = 0x23c334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23c338: 0xdfb00030
    ctx->pc = 0x23c338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c33c: 0xc7b50058
    ctx->pc = 0x23c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23c340: 0xc7b40050
    ctx->pc = 0x23c340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23c344: 0x3e00008
    ctx->pc = 0x23C344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C1F4u: goto label_23c1f4;
            case 0x23C220u: goto label_23c220;
            case 0x23C2ACu: goto label_23c2ac;
            case 0x23C2D8u: goto label_23c2d8;
            case 0x23C334u: goto label_23c334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23C34Cu;
}
