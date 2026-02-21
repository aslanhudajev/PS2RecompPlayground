#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamControlInputs
// Address: 0x2a00f0 - 0x2a0504
void BossCamControlInputs_0x2a00f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a00f0u;

    // 0x2a00f0: 0x27bdffd0
    ctx->pc = 0x2a00f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a00f4: 0xffbf0010
    ctx->pc = 0x2a00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a00f8: 0xffb00000
    ctx->pc = 0x2a00f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a00fc: 0xe7b50028
    ctx->pc = 0x2a00fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a0100: 0xe7b40020
    ctx->pc = 0x2a0100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a0104: 0x3c020031
    ctx->pc = 0x2a0104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0108: 0xc441ffa8
    ctx->pc = 0x2a0108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a010c: 0x3c013d08
    ctx->pc = 0x2a010cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2a0110: 0x34216595
    ctx->pc = 0x2a0110u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26005));
    // 0x2a0114: 0x44810000
    ctx->pc = 0x2a0114u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0118: 0x46010034
    ctx->pc = 0x2a0118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a011c: 0x3c013d08
    ctx->pc = 0x2a011cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2a0120: 0x34216595
    ctx->pc = 0x2a0120u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26005));
    // 0x2a0124: 0x4481a000
    ctx->pc = 0x2a0124u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2a0128: 0x45030001
    ctx->pc = 0x2A0128u;
    {
        const bool branch_taken_0x2a0128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0128) {
            ctx->pc = 0x2A012Cu;
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x2A0130u;
            goto label_2a0130;
        }
    }
    ctx->pc = 0x2A0130u;
label_2a0130:
    // 0x2a0130: 0x3c100036
    ctx->pc = 0x2a0130u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a0134: 0x8e02dbc0
    ctx->pc = 0x2a0134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a0138: 0xc0b9dce
    ctx->pc = 0x2A0138u;
    SET_GPR_U32(ctx, 31, 0x2A0140u);
    ctx->pc = 0x2A013Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0140u; }
    }
    if (ctx->pc != 0x2A0140u) { return; }
    ctx->pc = 0x2A0140u;
    // 0x2a0140: 0x46000546
    ctx->pc = 0x2a0140u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2a0144: 0x8e02dbc0
    ctx->pc = 0x2a0144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a0148: 0xc0b9e4a
    ctx->pc = 0x2A0148u;
    SET_GPR_U32(ctx, 31, 0x2A0150u);
    ctx->pc = 0x2A014Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0150u; }
    }
    if (ctx->pc != 0x2A0150u) { return; }
    ctx->pc = 0x2A0150u;
    // 0x2a0150: 0x3c020031
    ctx->pc = 0x2a0150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0154: 0x8c421b28
    ctx->pc = 0x2a0154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a0158: 0x3c030200
    ctx->pc = 0x2a0158u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x2a015c: 0x431024
    ctx->pc = 0x2a015cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0160: 0x10400002
    ctx->pc = 0x2A0160u;
    {
        const bool branch_taken_0x2a0160 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0164u;
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2a0160) {
            ctx->pc = 0x2A016Cu;
            goto label_2a016c;
        }
    }
    ctx->pc = 0x2A0168u;
    // 0x2a0168: 0x4614a500
    ctx->pc = 0x2a0168u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2a016c:
    // 0x2a016c: 0x3c020031
    ctx->pc = 0x2a016cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0170: 0x8c421b28
    ctx->pc = 0x2a0170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a0174: 0x3c030100
    ctx->pc = 0x2a0174u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x2a0178: 0x431024
    ctx->pc = 0x2a0178u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a017c: 0x54400001
    ctx->pc = 0x2A017Cu;
    {
        const bool branch_taken_0x2a017c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a017c) {
            ctx->pc = 0x2A0180u;
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
            ctx->pc = 0x2A0184u;
            goto label_2a0184;
        }
    }
    ctx->pc = 0x2A0184u;
label_2a0184:
    // 0x2a0184: 0x3c020031
    ctx->pc = 0x2a0184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0188: 0x8c421b24
    ctx->pc = 0x2a0188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x2a018c: 0x3c030200
    ctx->pc = 0x2a018cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x2a0190: 0x431024
    ctx->pc = 0x2a0190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0194: 0x10400008
    ctx->pc = 0x2A0194u;
    {
        const bool branch_taken_0x2a0194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0198u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0194) {
            ctx->pc = 0x2A01B8u;
            goto label_2a01b8;
        }
    }
    ctx->pc = 0x2A019Cu;
    // 0x2a019c: 0x8c42dbc0
    ctx->pc = 0x2a019cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a01a0: 0x3c0141a0
    ctx->pc = 0x2a01a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x2a01a4: 0x44810800
    ctx->pc = 0x2a01a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a01a8: 0x4601a042
    ctx->pc = 0x2a01a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a01ac: 0xc44000f4
    ctx->pc = 0x2a01acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a01b0: 0x46010001
    ctx->pc = 0x2a01b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a01b4: 0xe44000f4
    ctx->pc = 0x2a01b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
label_2a01b8:
    // 0x2a01b8: 0x3c020031
    ctx->pc = 0x2a01b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a01bc: 0x8c421b24
    ctx->pc = 0x2a01bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x2a01c0: 0x3c030100
    ctx->pc = 0x2a01c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x2a01c4: 0x431024
    ctx->pc = 0x2a01c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a01c8: 0x10400008
    ctx->pc = 0x2A01C8u;
    {
        const bool branch_taken_0x2a01c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A01CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a01c8) {
            ctx->pc = 0x2A01ECu;
            goto label_2a01ec;
        }
    }
    ctx->pc = 0x2A01D0u;
    // 0x2a01d0: 0x8c42dbc0
    ctx->pc = 0x2a01d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a01d4: 0x3c0141a0
    ctx->pc = 0x2a01d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x2a01d8: 0x44810000
    ctx->pc = 0x2a01d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a01dc: 0x4600a002
    ctx->pc = 0x2a01dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a01e0: 0xc44100f4
    ctx->pc = 0x2a01e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a01e4: 0x46010000
    ctx->pc = 0x2a01e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a01e8: 0xe44000f4
    ctx->pc = 0x2a01e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
label_2a01ec:
    // 0x2a01ec: 0x3c020031
    ctx->pc = 0x2a01ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a01f0: 0x8c421b24
    ctx->pc = 0x2a01f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x2a01f4: 0x3042000c
    ctx->pc = 0x2a01f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x2a01f8: 0x10400009
    ctx->pc = 0x2A01F8u;
    {
        const bool branch_taken_0x2a01f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A01FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a01f8) {
            ctx->pc = 0x2A0220u;
            goto label_2a0220;
        }
    }
    ctx->pc = 0x2A0200u;
    // 0x2a0200: 0x8c42dbc0
    ctx->pc = 0x2a0200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0204: 0x3c013eb2
    ctx->pc = 0x2a0204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x2a0208: 0x3421b8c3
    ctx->pc = 0x2a0208u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x2a020c: 0x44810800
    ctx->pc = 0x2a020cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a0210: 0x4601a042
    ctx->pc = 0x2a0210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a0214: 0xc44000ec
    ctx->pc = 0x2a0214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0218: 0x46010001
    ctx->pc = 0x2a0218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a021c: 0xe44000ec
    ctx->pc = 0x2a021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_2a0220:
    // 0x2a0220: 0x3c020031
    ctx->pc = 0x2a0220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0224: 0x8c421b24
    ctx->pc = 0x2a0224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x2a0228: 0x30420003
    ctx->pc = 0x2a0228u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a022c: 0x10400009
    ctx->pc = 0x2A022Cu;
    {
        const bool branch_taken_0x2a022c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0230u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a022c) {
            ctx->pc = 0x2A0254u;
            goto label_2a0254;
        }
    }
    ctx->pc = 0x2A0234u;
    // 0x2a0234: 0x8c42dbc0
    ctx->pc = 0x2a0234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0238: 0x3c013eb2
    ctx->pc = 0x2a0238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x2a023c: 0x3421b8c3
    ctx->pc = 0x2a023cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x2a0240: 0x44810000
    ctx->pc = 0x2a0240u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0244: 0x4600a002
    ctx->pc = 0x2a0244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a0248: 0xc44100ec
    ctx->pc = 0x2a0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a024c: 0x46010000
    ctx->pc = 0x2a024cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0250: 0xe44000ec
    ctx->pc = 0x2a0250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_2a0254:
    // 0x2a0254: 0x3c020031
    ctx->pc = 0x2a0254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0258: 0x8c421b24
    ctx->pc = 0x2a0258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x2a025c: 0x304200c0
    ctx->pc = 0x2a025cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x2a0260: 0x10400009
    ctx->pc = 0x2A0260u;
    {
        const bool branch_taken_0x2a0260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0264u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0260) {
            ctx->pc = 0x2A0288u;
            goto label_2a0288;
        }
    }
    ctx->pc = 0x2A0268u;
    // 0x2a0268: 0x8c42dbc0
    ctx->pc = 0x2a0268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a026c: 0x3c013eb2
    ctx->pc = 0x2a026cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x2a0270: 0x3421b8c3
    ctx->pc = 0x2a0270u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x2a0274: 0x44810000
    ctx->pc = 0x2a0274u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0278: 0x4600a002
    ctx->pc = 0x2a0278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a027c: 0xc4410104
    ctx->pc = 0x2a027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0280: 0x46010000
    ctx->pc = 0x2a0280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0284: 0xe4400104
    ctx->pc = 0x2a0284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_2a0288:
    // 0x2a0288: 0x3c020031
    ctx->pc = 0x2a0288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a028c: 0x8c421b24
    ctx->pc = 0x2a028cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x2a0290: 0x30420030
    ctx->pc = 0x2a0290u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x2a0294: 0x10400009
    ctx->pc = 0x2A0294u;
    {
        const bool branch_taken_0x2a0294 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0294) {
            ctx->pc = 0x2A02BCu;
            goto label_2a02bc;
        }
    }
    ctx->pc = 0x2A029Cu;
    // 0x2a029c: 0x8c42dbc0
    ctx->pc = 0x2a029cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a02a0: 0x3c013eb2
    ctx->pc = 0x2a02a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x2a02a4: 0x3421b8c3
    ctx->pc = 0x2a02a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x2a02a8: 0x44810800
    ctx->pc = 0x2a02a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a02ac: 0x4601a042
    ctx->pc = 0x2a02acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a02b0: 0xc4400104
    ctx->pc = 0x2a02b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a02b4: 0x46010001
    ctx->pc = 0x2a02b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a02b8: 0xe4400104
    ctx->pc = 0x2a02b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_2a02bc:
    // 0x2a02bc: 0x3c020031
    ctx->pc = 0x2a02bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a02c0: 0x8c421b28
    ctx->pc = 0x2a02c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a02c4: 0x3042000c
    ctx->pc = 0x2a02c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x2a02c8: 0x1040000e
    ctx->pc = 0x2A02C8u;
    {
        const bool branch_taken_0x2a02c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A02CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a02c8) {
            ctx->pc = 0x2A0304u;
            goto label_2a0304;
        }
    }
    ctx->pc = 0x2A02D0u;
    // 0x2a02d0: 0x8c42dbc0
    ctx->pc = 0x2a02d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a02d4: 0x3c014120
    ctx->pc = 0x2a02d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a02d8: 0x44811000
    ctx->pc = 0x2a02d8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2a02dc: 0x4602a802
    ctx->pc = 0x2a02dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2a02e0: 0x46140002
    ctx->pc = 0x2a02e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a02e4: 0xc44100a4
    ctx->pc = 0x2a02e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a02e8: 0x46010000
    ctx->pc = 0x2a02e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a02ec: 0xe44000a4
    ctx->pc = 0x2a02ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a02f0: 0x46021882
    ctx->pc = 0x2a02f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a02f4: 0x46141082
    ctx->pc = 0x2a02f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a02f8: 0xc44000ac
    ctx->pc = 0x2a02f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a02fc: 0x46020001
    ctx->pc = 0x2a02fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a0300: 0xe44000ac
    ctx->pc = 0x2a0300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2a0304:
    // 0x2a0304: 0x3c020031
    ctx->pc = 0x2a0304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0308: 0x8c421b28
    ctx->pc = 0x2a0308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a030c: 0x30420003
    ctx->pc = 0x2a030cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a0310: 0x1040000e
    ctx->pc = 0x2A0310u;
    {
        const bool branch_taken_0x2a0310 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0314u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0310) {
            ctx->pc = 0x2A034Cu;
            goto label_2a034c;
        }
    }
    ctx->pc = 0x2A0318u;
    // 0x2a0318: 0x8c42dbc0
    ctx->pc = 0x2a0318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a031c: 0x3c014120
    ctx->pc = 0x2a031cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a0320: 0x44810800
    ctx->pc = 0x2a0320u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a0324: 0x4601a882
    ctx->pc = 0x2a0324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2a0328: 0x46141082
    ctx->pc = 0x2a0328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a032c: 0xc44000a4
    ctx->pc = 0x2a032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0330: 0x46020001
    ctx->pc = 0x2a0330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a0334: 0xe44000a4
    ctx->pc = 0x2a0334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0338: 0x46011842
    ctx->pc = 0x2a0338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a033c: 0x46140842
    ctx->pc = 0x2a033cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a0340: 0xc44000ac
    ctx->pc = 0x2a0340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0344: 0x46000840
    ctx->pc = 0x2a0344u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0348: 0xe44100ac
    ctx->pc = 0x2a0348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2a034c:
    // 0x2a034c: 0x3c020031
    ctx->pc = 0x2a034cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0350: 0x8c421b28
    ctx->pc = 0x2a0350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a0354: 0x30420030
    ctx->pc = 0x2a0354u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x2a0358: 0x1040000e
    ctx->pc = 0x2A0358u;
    {
        const bool branch_taken_0x2a0358 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A035Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0358) {
            ctx->pc = 0x2A0394u;
            goto label_2a0394;
        }
    }
    ctx->pc = 0x2A0360u;
    // 0x2a0360: 0x8c42dbc0
    ctx->pc = 0x2a0360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0364: 0x3c014120
    ctx->pc = 0x2a0364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a0368: 0x44810800
    ctx->pc = 0x2a0368u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a036c: 0x4601a802
    ctx->pc = 0x2a036cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2a0370: 0x46140002
    ctx->pc = 0x2a0370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a0374: 0xc44200ac
    ctx->pc = 0x2a0374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0378: 0x46020000
    ctx->pc = 0x2a0378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a037c: 0xe44000ac
    ctx->pc = 0x2a037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2a0380: 0x46011842
    ctx->pc = 0x2a0380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a0384: 0x46140842
    ctx->pc = 0x2a0384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a0388: 0xc44000a4
    ctx->pc = 0x2a0388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a038c: 0x46000840
    ctx->pc = 0x2a038cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0390: 0xe44100a4
    ctx->pc = 0x2a0390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_2a0394:
    // 0x2a0394: 0x3c020031
    ctx->pc = 0x2a0394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0398: 0x8c421b28
    ctx->pc = 0x2a0398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a039c: 0x304200c0
    ctx->pc = 0x2a039cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x2a03a0: 0x1040000e
    ctx->pc = 0x2A03A0u;
    {
        const bool branch_taken_0x2a03a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A03A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a03a0) {
            ctx->pc = 0x2A03DCu;
            goto label_2a03dc;
        }
    }
    ctx->pc = 0x2A03A8u;
    // 0x2a03a8: 0x8c42dbc0
    ctx->pc = 0x2a03a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a03ac: 0x3c014120
    ctx->pc = 0x2a03acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a03b0: 0x44811000
    ctx->pc = 0x2a03b0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2a03b4: 0x4602a842
    ctx->pc = 0x2a03b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2a03b8: 0x46140842
    ctx->pc = 0x2a03b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a03bc: 0xc44000ac
    ctx->pc = 0x2a03bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a03c0: 0x46010001
    ctx->pc = 0x2a03c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a03c4: 0xe44000ac
    ctx->pc = 0x2a03c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2a03c8: 0x46021882
    ctx->pc = 0x2a03c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a03cc: 0x46141082
    ctx->pc = 0x2a03ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a03d0: 0xc44000a4
    ctx->pc = 0x2a03d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a03d4: 0x46020001
    ctx->pc = 0x2a03d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a03d8: 0xe44000a4
    ctx->pc = 0x2a03d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_2a03dc:
    // 0x2a03dc: 0x3c020031
    ctx->pc = 0x2a03dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a03e0: 0x8c421b28
    ctx->pc = 0x2a03e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a03e4: 0x3042000c
    ctx->pc = 0x2a03e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x2a03e8: 0x1040000e
    ctx->pc = 0x2A03E8u;
    {
        const bool branch_taken_0x2a03e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A03ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a03e8) {
            ctx->pc = 0x2A0424u;
            goto label_2a0424;
        }
    }
    ctx->pc = 0x2A03F0u;
    // 0x2a03f0: 0x8c42dbc0
    ctx->pc = 0x2a03f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a03f4: 0x3c014120
    ctx->pc = 0x2a03f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a03f8: 0x44811000
    ctx->pc = 0x2a03f8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2a03fc: 0x4602a802
    ctx->pc = 0x2a03fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2a0400: 0x46140002
    ctx->pc = 0x2a0400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2a0404: 0xc44100a4
    ctx->pc = 0x2a0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0408: 0x46010000
    ctx->pc = 0x2a0408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a040c: 0xe44000a4
    ctx->pc = 0x2a040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0410: 0x46021882
    ctx->pc = 0x2a0410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a0414: 0x46141082
    ctx->pc = 0x2a0414u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a0418: 0xc44000ac
    ctx->pc = 0x2a0418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a041c: 0x46020001
    ctx->pc = 0x2a041cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a0420: 0xe44000ac
    ctx->pc = 0x2a0420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2a0424:
    // 0x2a0424: 0x3c020031
    ctx->pc = 0x2a0424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0428: 0x8c421b28
    ctx->pc = 0x2a0428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6952)));
    // 0x2a042c: 0x30420003
    ctx->pc = 0x2a042cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2a0430: 0x1040000e
    ctx->pc = 0x2A0430u;
    {
        const bool branch_taken_0x2a0430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0434u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0430) {
            ctx->pc = 0x2A046Cu;
            goto label_2a046c;
        }
    }
    ctx->pc = 0x2A0438u;
    // 0x2a0438: 0x8c42dbc0
    ctx->pc = 0x2a0438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a043c: 0x3c014120
    ctx->pc = 0x2a043cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a0440: 0x44810800
    ctx->pc = 0x2a0440u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a0444: 0x4601a882
    ctx->pc = 0x2a0444u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2a0448: 0x46141082
    ctx->pc = 0x2a0448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a044c: 0xc44000a4
    ctx->pc = 0x2a044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0450: 0x46020001
    ctx->pc = 0x2a0450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a0454: 0xe44000a4
    ctx->pc = 0x2a0454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0458: 0x46011842
    ctx->pc = 0x2a0458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a045c: 0x46140842
    ctx->pc = 0x2a045cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2a0460: 0xc44000ac
    ctx->pc = 0x2a0460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0464: 0x46000840
    ctx->pc = 0x2a0464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0468: 0xe44100ac
    ctx->pc = 0x2a0468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2a046c:
    // 0x2a046c: 0x3c020031
    ctx->pc = 0x2a046cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0470: 0x8c421b2c
    ctx->pc = 0x2a0470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x2a0474: 0x30420030
    ctx->pc = 0x2a0474u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x2a0478: 0x10400008
    ctx->pc = 0x2A0478u;
    {
        const bool branch_taken_0x2a0478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A047Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0478) {
            ctx->pc = 0x2A049Cu;
            goto label_2a049c;
        }
    }
    ctx->pc = 0x2A0480u;
    // 0x2a0480: 0x8c42dbc0
    ctx->pc = 0x2a0480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0484: 0x3c014120
    ctx->pc = 0x2a0484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a0488: 0x44810000
    ctx->pc = 0x2a0488u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a048c: 0x4600a002
    ctx->pc = 0x2a048cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a0490: 0xc44100a8
    ctx->pc = 0x2a0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0494: 0x46010000
    ctx->pc = 0x2a0494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0498: 0xe44000a8
    ctx->pc = 0x2a0498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_2a049c:
    // 0x2a049c: 0x3c020031
    ctx->pc = 0x2a049cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a04a0: 0x8c421b2c
    ctx->pc = 0x2a04a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x2a04a4: 0x304200c0
    ctx->pc = 0x2a04a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x2a04a8: 0x10400008
    ctx->pc = 0x2A04A8u;
    {
        const bool branch_taken_0x2a04a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A04ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a04a8) {
            ctx->pc = 0x2A04CCu;
            goto label_2a04cc;
        }
    }
    ctx->pc = 0x2A04B0u;
    // 0x2a04b0: 0x8c42dbc0
    ctx->pc = 0x2a04b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a04b4: 0x3c014120
    ctx->pc = 0x2a04b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a04b8: 0x44810800
    ctx->pc = 0x2a04b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a04bc: 0x4601a042
    ctx->pc = 0x2a04bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2a04c0: 0xc44000a8
    ctx->pc = 0x2a04c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a04c4: 0x46010001
    ctx->pc = 0x2a04c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a04c8: 0xe44000a8
    ctx->pc = 0x2a04c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_2a04cc:
    // 0x2a04cc: 0x3c020036
    ctx->pc = 0x2a04ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a04d0: 0x8c42dbc0
    ctx->pc = 0x2a04d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a04d4: 0xc44000a4
    ctx->pc = 0x2a04d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a04d8: 0xe44000b0
    ctx->pc = 0x2a04d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2a04dc: 0xc44000a8
    ctx->pc = 0x2a04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a04e0: 0xe44000b4
    ctx->pc = 0x2a04e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2a04e4: 0xc44000ac
    ctx->pc = 0x2a04e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a04e8: 0xe44000b8
    ctx->pc = 0x2a04e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2a04ec: 0xdfbf0010
    ctx->pc = 0x2a04ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a04f0: 0xdfb00000
    ctx->pc = 0x2a04f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a04f4: 0xc7b50028
    ctx->pc = 0x2a04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a04f8: 0xc7b40020
    ctx->pc = 0x2a04f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a04fc: 0x3e00008
    ctx->pc = 0x2A04FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0500u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0130u: goto label_2a0130;
            case 0x2A016Cu: goto label_2a016c;
            case 0x2A0184u: goto label_2a0184;
            case 0x2A01B8u: goto label_2a01b8;
            case 0x2A01ECu: goto label_2a01ec;
            case 0x2A0220u: goto label_2a0220;
            case 0x2A0254u: goto label_2a0254;
            case 0x2A0288u: goto label_2a0288;
            case 0x2A02BCu: goto label_2a02bc;
            case 0x2A0304u: goto label_2a0304;
            case 0x2A034Cu: goto label_2a034c;
            case 0x2A0394u: goto label_2a0394;
            case 0x2A03DCu: goto label_2a03dc;
            case 0x2A0424u: goto label_2a0424;
            case 0x2A046Cu: goto label_2a046c;
            case 0x2A049Cu: goto label_2a049c;
            case 0x2A04CCu: goto label_2a04cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0504u;
}
