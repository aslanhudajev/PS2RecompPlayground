#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPerspective
// Address: 0x1abda0 - 0x1ac318
void nlPerspective_0x1abda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPerspective");


    ctx->pc = 0x1abda0u;

    // 0x1abda0: 0x27bdff80
    ctx->pc = 0x1abda0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1abda4: 0x7fbf0030
    ctx->pc = 0x1abda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1abda8: 0x7fb10020
    ctx->pc = 0x1abda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1abdac: 0x7fb00010
    ctx->pc = 0x1abdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1abdb0: 0xe7b7000c
    ctx->pc = 0x1abdb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1abdb4: 0xe7b60008
    ctx->pc = 0x1abdb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1abdb8: 0xe7b50004
    ctx->pc = 0x1abdb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1abdbc: 0x48043
    ctx->pc = 0x1abdbcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1abdc0: 0x46006546
    ctx->pc = 0x1abdc0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1abdc4: 0x46006dc6
    ctx->pc = 0x1abdc4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x1abdc8: 0x46007586
    ctx->pc = 0x1abdc8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1abdcc: 0x72002628
    ctx->pc = 0x1abdccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1abdd0: 0xc06a030
    ctx->pc = 0x1ABDD0u;
    SET_GPR_U32(ctx, 31, 0x1ABDD8u);
    ctx->pc = 0x1ABDD4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x1A80C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlTan_0x1a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABDD8u; }
        else if (ctx->pc != 0x1ABDD8u) { ctx->pc = 0x1ABDD8u; }
    }
    if (ctx->pc != 0x1ABDD8u) { return; }
    ctx->pc = 0x1ABDD8u;
    // 0x1abdd8: 0x3c023f80
    ctx->pc = 0x1abdd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1abddc: 0x44821000
    ctx->pc = 0x1abddcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1abde0: 0x3c010030
    ctx->pc = 0x1abde0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abde4: 0x46001503
    ctx->pc = 0x1abde4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[20] = ctx->f[2] / ctx->f[0];
    // 0x1abde8: 0xc7818344
    ctx->pc = 0x1abde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abdec: 0x4615a543
    ctx->pc = 0x1abdecu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[21] = ctx->f[20] / ctx->f[21];
    // 0x1abdf0: 0xc7808348
    ctx->pc = 0x1abdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abdf4: 0xe4353d10
    ctx->pc = 0x1abdf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15632), bits); }
    // 0x1abdf8: 0x3c010030
    ctx->pc = 0x1abdf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abdfc: 0xe4343d14
    ctx->pc = 0x1abdfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15636), bits); }
    // 0x1abe00: 0x3c010030
    ctx->pc = 0x1abe00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe04: 0xc4223d10
    ctx->pc = 0x1abe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abe08: 0x46011042
    ctx->pc = 0x1abe08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1abe0c: 0x3c010030
    ctx->pc = 0x1abe0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe10: 0xe4213c40
    ctx->pc = 0x1abe10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15424), bits); }
    // 0x1abe14: 0x3c010030
    ctx->pc = 0x1abe14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe18: 0xc4213d14
    ctx->pc = 0x1abe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abe1c: 0x46000802
    ctx->pc = 0x1abe1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1abe20: 0x3c010030
    ctx->pc = 0x1abe20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe24: 0xe4203c44
    ctx->pc = 0x1abe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15428), bits); }
    // 0x1abe28: 0x3c010030
    ctx->pc = 0x1abe28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe2c: 0xc4203c40
    ctx->pc = 0x1abe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe30: 0x3c010030
    ctx->pc = 0x1abe30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe34: 0xc4213c44
    ctx->pc = 0x1abe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abe38: 0x46010036
    ctx->pc = 0x1abe38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abe3c: 0x0
    ctx->pc = 0x1abe3cu;
    // NOP
    // 0x1abe40: 0x45010004
    ctx->pc = 0x1ABE40u;
    {
        const bool branch_taken_0x1abe40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABE44u;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        if (branch_taken_0x1abe40) {
            ctx->pc = 0x1ABE54u;
            goto label_1abe54;
        }
    }
    ctx->pc = 0x1ABE48u;
    // 0x1abe48: 0x3c010030
    ctx->pc = 0x1abe48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe4c: 0x10000002
    ctx->pc = 0x1ABE4Cu;
    {
        const bool branch_taken_0x1abe4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABE50u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15628), bits); }
        if (branch_taken_0x1abe4c) {
            ctx->pc = 0x1ABE58u;
            goto label_1abe58;
        }
    }
    ctx->pc = 0x1ABE54u;
label_1abe54:
    // 0x1abe54: 0xe4213d0c
    ctx->pc = 0x1abe54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15628), bits); }
label_1abe58:
    // 0x1abe58: 0x3c023f80
    ctx->pc = 0x1abe58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1abe5c: 0x44820800
    ctx->pc = 0x1abe5cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1abe60: 0x3c010030
    ctx->pc = 0x1abe60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe64: 0x46170843
    ctx->pc = 0x1abe64u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[23];
    // 0x1abe68: 0xe4373d00
    ctx->pc = 0x1abe68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15616), bits); }
    // 0x1abe6c: 0x3c010030
    ctx->pc = 0x1abe6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe70: 0xe4363d04
    ctx->pc = 0x1abe70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15620), bits); }
    // 0x1abe74: 0x3c010030
    ctx->pc = 0x1abe74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe78: 0x84235834
    ctx->pc = 0x1abe78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1abe7c: 0xc7808a18
    ctx->pc = 0x1abe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe80: 0xc7828a14
    ctx->pc = 0x1abe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abe84: 0x3c010030
    ctx->pc = 0x1abe84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe88: 0x31043
    ctx->pc = 0x1abe88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1abe8c: 0xe4213d08
    ctx->pc = 0x1abe8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15624), bits); }
    // 0x1abe90: 0x46000047
    ctx->pc = 0x1abe90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1abe94: 0x46160802
    ctx->pc = 0x1abe94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x1abe98: 0x3c010030
    ctx->pc = 0x1abe98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abe9c: 0x46001000
    ctx->pc = 0x1abe9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1abea0: 0xe4203c48
    ctx->pc = 0x1abea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15432), bits); }
    // 0x1abea4: 0x3c010030
    ctx->pc = 0x1abea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abea8: 0x4610003
    ctx->pc = 0x1ABEA8u;
    {
        const bool branch_taken_0x1abea8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ABEACu;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15436), bits); }
        if (branch_taken_0x1abea8) {
            ctx->pc = 0x1ABEB8u;
            goto label_1abeb8;
        }
    }
    ctx->pc = 0x1ABEB0u;
    // 0x1abeb0: 0x24620001
    ctx->pc = 0x1abeb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abeb4: 0x21043
    ctx->pc = 0x1abeb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1abeb8:
    // 0x1abeb8: 0x44820000
    ctx->pc = 0x1abeb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1abebc: 0x3c010030
    ctx->pc = 0x1abebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abec0: 0x84225836
    ctx->pc = 0x1abec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1abec4: 0x46800020
    ctx->pc = 0x1abec4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1abec8: 0x3c010030
    ctx->pc = 0x1abec8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abecc: 0x21843
    ctx->pc = 0x1abeccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1abed0: 0x4410003
    ctx->pc = 0x1ABED0u;
    {
        const bool branch_taken_0x1abed0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABED4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15440), bits); }
        if (branch_taken_0x1abed0) {
            ctx->pc = 0x1ABEE0u;
            goto label_1abee0;
        }
    }
    ctx->pc = 0x1ABED8u;
    // 0x1abed8: 0x24420001
    ctx->pc = 0x1abed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1abedc: 0x21843
    ctx->pc = 0x1abedcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1abee0:
    // 0x1abee0: 0x3c010030
    ctx->pc = 0x1abee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abee4: 0x84225838
    ctx->pc = 0x1abee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1abee8: 0x14400002
    ctx->pc = 0x1ABEE8u;
    {
        const bool branch_taken_0x1abee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ABEECu;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1abee8) {
            ctx->pc = 0x1ABEF4u;
            goto label_1abef4;
        }
    }
    ctx->pc = 0x1ABEF0u;
    // 0x1abef0: 0x1cd
    ctx->pc = 0x1abef0u;
    runtime->handleBreak(rdram, ctx);
label_1abef4:
    // 0x1abef4: 0x46170802
    ctx->pc = 0x1abef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1abef8: 0x3c023f80
    ctx->pc = 0x1abef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1abefc: 0x1812
    ctx->pc = 0x1abefcu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1abf00: 0x3c010030
    ctx->pc = 0x1abf00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abf04: 0x46001000
    ctx->pc = 0x1abf04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1abf08: 0x44831000
    ctx->pc = 0x1abf08u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1abf0c: 0x44820800
    ctx->pc = 0x1abf0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1abf10: 0x468010a0
    ctx->pc = 0x1abf10u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1abf14: 0xe4223c54
    ctx->pc = 0x1abf14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15444), bits); }
    // 0x1abf18: 0x3c010030
    ctx->pc = 0x1abf18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abf1c: 0xe4203c58
    ctx->pc = 0x1abf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15448), bits); }
    // 0x1abf20: 0x3c010030
    ctx->pc = 0x1abf20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abf24: 0xe4373c5c
    ctx->pc = 0x1abf24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15452), bits); }
    // 0x1abf28: 0x3c010030
    ctx->pc = 0x1abf28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abf2c: 0xc4203d10
    ctx->pc = 0x1abf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abf30: 0x46000b03
    ctx->pc = 0x1abf30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1abf34: 0x0
    ctx->pc = 0x1abf34u;
    // NOP
    // 0x1abf38: 0x0
    ctx->pc = 0x1abf38u;
    // NOP
    // 0x1abf3c: 0xc069e20
    ctx->pc = 0x1ABF3Cu;
    SET_GPR_U32(ctx, 31, 0x1ABF44u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF44u; }
        else if (ctx->pc != 0x1ABF44u) { ctx->pc = 0x1ABF44u; }
    }
    if (ctx->pc != 0x1ABF44u) { return; }
    ctx->pc = 0x1ABF44u;
    // 0x1abf44: 0xc06c26d
    ctx->pc = 0x1ABF44u;
    SET_GPR_U32(ctx, 31, 0x1ABF4Cu);
    ctx->pc = 0x1ABF48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF4Cu; }
        else if (ctx->pc != 0x1ABF4Cu) { ctx->pc = 0x1ABF4Cu; }
    }
    if (ctx->pc != 0x1ABF4Cu) { return; }
    ctx->pc = 0x1ABF4Cu;
    // 0x1abf4c: 0x3c023f80
    ctx->pc = 0x1abf4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1abf50: 0x44820800
    ctx->pc = 0x1abf50u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1abf54: 0x72002628
    ctx->pc = 0x1abf54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1abf58: 0x46000803
    ctx->pc = 0x1abf58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1abf5c: 0x0
    ctx->pc = 0x1abf5cu;
    // NOP
    // 0x1abf60: 0x3c010030
    ctx->pc = 0x1abf60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abf64: 0xc06c26d
    ctx->pc = 0x1ABF64u;
    SET_GPR_U32(ctx, 31, 0x1ABF6Cu);
    ctx->pc = 0x1ABF68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15640), bits); }
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF6Cu; }
        else if (ctx->pc != 0x1ABF6Cu) { ctx->pc = 0x1ABF6Cu; }
    }
    if (ctx->pc != 0x1ABF6Cu) { return; }
    ctx->pc = 0x1ABF6Cu;
    // 0x1abf6c: 0x3c023f80
    ctx->pc = 0x1abf6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1abf70: 0x44820800
    ctx->pc = 0x1abf70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1abf74: 0x3c034500
    ctx->pc = 0x1abf74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17664 << 16));
    // 0x1abf78: 0x46000903
    ctx->pc = 0x1abf78u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x1abf7c: 0x3c010030
    ctx->pc = 0x1abf7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1abf80: 0xc7838aa0
    ctx->pc = 0x1abf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abf84: 0xc7828aa8
    ctx->pc = 0x1abf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abf88: 0x3c023f00
    ctx->pc = 0x1abf88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1abf8c: 0xc7818a9c
    ctx->pc = 0x1abf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abf90: 0xc7808aa4
    ctx->pc = 0x1abf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abf94: 0xe4243d1c
    ctx->pc = 0x1abf94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15644), bits); }
    // 0x1abf98: 0x44832800
    ctx->pc = 0x1abf98u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
    // 0x1abf9c: 0x44822000
    ctx->pc = 0x1abf9cu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x1abfa0: 0x0
    ctx->pc = 0x1abfa0u;
    // NOP
    // 0x1abfa4: 0x46032819
    ctx->pc = 0x1abfa4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x1abfa8: 0x4602209c
    ctx->pc = 0x1abfa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x1abfac: 0x46012819
    ctx->pc = 0x1abfacu;
    ctx->f[31] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x1abfb0: 0x4600205c
    ctx->pc = 0x1abfb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x1abfb4: 0x46001005
    ctx->pc = 0x1abfb4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1abfb8: 0x46000845
    ctx->pc = 0x1abfb8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1abfbc: 0x46010034
    ctx->pc = 0x1abfbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abfc0: 0x0
    ctx->pc = 0x1abfc0u;
    // NOP
    // 0x1abfc4: 0x45020001
    ctx->pc = 0x1ABFC4u;
    {
        const bool branch_taken_0x1abfc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1abfc4) {
            ctx->pc = 0x1ABFC8u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x1ABFCCu;
            goto label_1abfcc;
        }
    }
    ctx->pc = 0x1ABFCCu;
label_1abfcc:
    // 0x1abfcc: 0x3c024000
    ctx->pc = 0x1abfccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1abfd0: 0x44820000
    ctx->pc = 0x1abfd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1abfd4: 0xc78a8344
    ctx->pc = 0x1abfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1abfd8: 0x3c023f00
    ctx->pc = 0x1abfd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1abfdc: 0x44822800
    ctx->pc = 0x1abfdcu;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 2);
    // 0x1abfe0: 0x46010042
    ctx->pc = 0x1abfe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1abfe4: 0xc7848a94
    ctx->pc = 0x1abfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1abfe8: 0x3c034580
    ctx->pc = 0x1abfe8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17792 << 16));
    // 0x1abfec: 0xe7b50040
    ctx->pc = 0x1abfecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1abff0: 0xafa00044
    ctx->pc = 0x1abff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1abff4: 0x44830000
    ctx->pc = 0x1abff4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1abff8: 0x460a2882
    ctx->pc = 0x1abff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x1abffc: 0xafa00048
    ctx->pc = 0x1abffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1ac000: 0xafa0004c
    ctx->pc = 0x1ac000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1ac004: 0xafa00050
    ctx->pc = 0x1ac004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1ac008: 0xe7b40054
    ctx->pc = 0x1ac008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ac00c: 0x46010181
    ctx->pc = 0x1ac00cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ac010: 0x3c02c000
    ctx->pc = 0x1ac010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x1ac014: 0xafa00058
    ctx->pc = 0x1ac014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1ac018: 0xafa0005c
    ctx->pc = 0x1ac018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x1ac01c: 0x46022080
    ctx->pc = 0x1ac01cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1ac020: 0xafa00060
    ctx->pc = 0x1ac020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1ac024: 0x3c053f80
    ctx->pc = 0x1ac024u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1ac028: 0x3c010030
    ctx->pc = 0x1ac028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac02c: 0x4617b201
    ctx->pc = 0x1ac02cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x1ac030: 0xac253c60
    ctx->pc = 0x1ac030u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15456), GPR_U32(ctx, 5));
    // 0x1ac034: 0x3c010030
    ctx->pc = 0x1ac034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac038: 0xac203c64
    ctx->pc = 0x1ac038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15460), GPR_U32(ctx, 0));
    // 0x1ac03c: 0x46003107
    ctx->pc = 0x1ac03cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[6]);
    // 0x1ac040: 0x46172102
    ctx->pc = 0x1ac040u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
    // 0x1ac044: 0x3c010030
    ctx->pc = 0x1ac044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac048: 0xac203c68
    ctx->pc = 0x1ac048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15464), GPR_U32(ctx, 0));
    // 0x1ac04c: 0x3c010030
    ctx->pc = 0x1ac04cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac050: 0xac203c6c
    ctx->pc = 0x1ac050u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15468), GPR_U32(ctx, 0));
    // 0x1ac054: 0x46083043
    ctx->pc = 0x1ac054u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[1] = ctx->f[6] / ctx->f[8];
    // 0x1ac058: 0x3c010030
    ctx->pc = 0x1ac058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac05c: 0xac203c70
    ctx->pc = 0x1ac05cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15472), GPR_U32(ctx, 0));
    // 0x1ac060: 0x3c010030
    ctx->pc = 0x1ac060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac064: 0xac253c74
    ctx->pc = 0x1ac064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15476), GPR_U32(ctx, 5));
    // 0x1ac068: 0x3c010030
    ctx->pc = 0x1ac068u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac06c: 0xac203c78
    ctx->pc = 0x1ac06cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15480), GPR_U32(ctx, 0));
    // 0x1ac070: 0x3c010030
    ctx->pc = 0x1ac070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac074: 0xac203c7c
    ctx->pc = 0x1ac074u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15484), GPR_U32(ctx, 0));
    // 0x1ac078: 0x3c010030
    ctx->pc = 0x1ac078u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac07c: 0xac203c80
    ctx->pc = 0x1ac07cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15488), GPR_U32(ctx, 0));
    // 0x1ac080: 0x3c010030
    ctx->pc = 0x1ac080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac084: 0xac203c84
    ctx->pc = 0x1ac084u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15492), GPR_U32(ctx, 0));
    // 0x1ac088: 0x3c010030
    ctx->pc = 0x1ac088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac08c: 0xc78b8348
    ctx->pc = 0x1ac08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1ac090: 0xc7838a98
    ctx->pc = 0x1ac090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac094: 0xafa00064
    ctx->pc = 0x1ac094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1ac098: 0x27b00068
    ctx->pc = 0x1ac098u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 104));
    // 0x1ac09c: 0x3c03bf80
    ctx->pc = 0x1ac09cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x1ac0a0: 0x27b10078
    ctx->pc = 0x1ac0a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 120));
    // 0x1ac0a4: 0x70002628
    ctx->pc = 0x1ac0a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac0a8: 0xe4213c88
    ctx->pc = 0x1ac0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15496), bits); }
    // 0x1ac0ac: 0x46001247
    ctx->pc = 0x1ac0acu;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
    // 0x1ac0b0: 0x460b2882
    ctx->pc = 0x1ac0b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x1ac0b4: 0x3c010030
    ctx->pc = 0x1ac0b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac0b8: 0xac203c8c
    ctx->pc = 0x1ac0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15500), GPR_U32(ctx, 0));
    // 0x1ac0bc: 0x3c010030
    ctx->pc = 0x1ac0bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac0c0: 0xe4293c90
    ctx->pc = 0x1ac0c0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15504), bits); }
    // 0x1ac0c4: 0x46021880
    ctx->pc = 0x1ac0c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ac0c8: 0x3c010030
    ctx->pc = 0x1ac0c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac0cc: 0x460629c2
    ctx->pc = 0x1ac0ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1ac0d0: 0x46001147
    ctx->pc = 0x1ac0d0u;
    ctx->f[5] = FPU_NEG_S(ctx->f[2]);
    // 0x1ac0d4: 0x46082103
    ctx->pc = 0x1ac0d4u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[8];
    // 0x1ac0d8: 0xe4253c94
    ctx->pc = 0x1ac0d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15508), bits); }
    // 0x1ac0dc: 0x3c010030
    ctx->pc = 0x1ac0dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac0e0: 0x46072101
    ctx->pc = 0x1ac0e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x1ac0e4: 0x44820000
    ctx->pc = 0x1ac0e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ac0e8: 0xe4243c98
    ctx->pc = 0x1ac0e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15512), bits); }
    // 0x1ac0ec: 0x3c010030
    ctx->pc = 0x1ac0ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac0f0: 0x46160002
    ctx->pc = 0x1ac0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1ac0f4: 0xe4273c9c
    ctx->pc = 0x1ac0f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15516), bits); }
    // 0x1ac0f8: 0x3c010030
    ctx->pc = 0x1ac0f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac0fc: 0xac253ca0
    ctx->pc = 0x1ac0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15520), GPR_U32(ctx, 5));
    // 0x1ac100: 0x3c010030
    ctx->pc = 0x1ac100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac104: 0x4617b040
    ctx->pc = 0x1ac104u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x1ac108: 0xac203ca4
    ctx->pc = 0x1ac108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15524), GPR_U32(ctx, 0));
    // 0x1ac10c: 0x3c010030
    ctx->pc = 0x1ac10cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac110: 0xac203ca8
    ctx->pc = 0x1ac110u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15528), GPR_U32(ctx, 0));
    // 0x1ac114: 0x46000847
    ctx->pc = 0x1ac114u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1ac118: 0x46170002
    ctx->pc = 0x1ac118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x1ac11c: 0x3c010030
    ctx->pc = 0x1ac11cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac120: 0xac203cac
    ctx->pc = 0x1ac120u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15532), GPR_U32(ctx, 0));
    // 0x1ac124: 0x3c010030
    ctx->pc = 0x1ac124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac128: 0xac203cb0
    ctx->pc = 0x1ac128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15536), GPR_U32(ctx, 0));
    // 0x1ac12c: 0x3c010030
    ctx->pc = 0x1ac12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac130: 0xac253cb4
    ctx->pc = 0x1ac130u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15540), GPR_U32(ctx, 5));
    // 0x1ac134: 0x3c010030
    ctx->pc = 0x1ac134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac138: 0xac203cb8
    ctx->pc = 0x1ac138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15544), GPR_U32(ctx, 0));
    // 0x1ac13c: 0x3c010030
    ctx->pc = 0x1ac13cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac140: 0xac203cbc
    ctx->pc = 0x1ac140u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15548), GPR_U32(ctx, 0));
    // 0x1ac144: 0x3c010030
    ctx->pc = 0x1ac144u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac148: 0xac203cc0
    ctx->pc = 0x1ac148u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15552), GPR_U32(ctx, 0));
    // 0x1ac14c: 0x3c010030
    ctx->pc = 0x1ac14cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac150: 0xac203cc4
    ctx->pc = 0x1ac150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15556), GPR_U32(ctx, 0));
    // 0x1ac154: 0x3c010030
    ctx->pc = 0x1ac154u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac158: 0xac203cc8
    ctx->pc = 0x1ac158u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15560), GPR_U32(ctx, 0));
    // 0x1ac15c: 0x3c010030
    ctx->pc = 0x1ac15cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac160: 0xac203ccc
    ctx->pc = 0x1ac160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15564), GPR_U32(ctx, 0));
    // 0x1ac164: 0x3c010030
    ctx->pc = 0x1ac164u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac168: 0xe4293cd0
    ctx->pc = 0x1ac168u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15568), bits); }
    // 0x1ac16c: 0x3c010030
    ctx->pc = 0x1ac16cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac170: 0xe4253cd4
    ctx->pc = 0x1ac170u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15572), bits); }
    // 0x1ac174: 0x3c010030
    ctx->pc = 0x1ac174u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac178: 0xac253cd8
    ctx->pc = 0x1ac178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15576), GPR_U32(ctx, 5));
    // 0x1ac17c: 0x3c010030
    ctx->pc = 0x1ac17cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac180: 0xe4273cdc
    ctx->pc = 0x1ac180u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15580), bits); }
    // 0x1ac184: 0x460a30c3
    ctx->pc = 0x1ac184u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[3] = ctx->f[6] / ctx->f[10];
    // 0x1ac188: 0x3c010030
    ctx->pc = 0x1ac188u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac18c: 0xe4233ce0
    ctx->pc = 0x1ac18cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15584), bits); }
    // 0x1ac190: 0x460b3083
    ctx->pc = 0x1ac190u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[2] = ctx->f[6] / ctx->f[11];
    // 0x1ac194: 0x3c010030
    ctx->pc = 0x1ac194u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac198: 0x46080843
    ctx->pc = 0x1ac198u;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[8];
    // 0x1ac19c: 0xe4223ce4
    ctx->pc = 0x1ac19cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15588), bits); }
    // 0x1ac1a0: 0xe6010000
    ctx->pc = 0x1ac1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1ac1a4: 0xafa3006c
    ctx->pc = 0x1ac1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x1ac1a8: 0xafa00070
    ctx->pc = 0x1ac1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1ac1ac: 0x46080003
    ctx->pc = 0x1ac1acu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[8];
    // 0x1ac1b0: 0xafa00074
    ctx->pc = 0x1ac1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1ac1b4: 0xe6200000
    ctx->pc = 0x1ac1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1ac1b8: 0xc0693a0
    ctx->pc = 0x1AC1B8u;
    SET_GPR_U32(ctx, 31, 0x1AC1C0u);
    ctx->pc = 0x1AC1BCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1C0u; }
        else if (ctx->pc != 0x1AC1C0u) { ctx->pc = 0x1AC1C0u; }
    }
    if (ctx->pc != 0x1AC1C0u) { return; }
    ctx->pc = 0x1AC1C0u;
    // 0x1ac1c0: 0xc06c04e
    ctx->pc = 0x1AC1C0u;
    SET_GPR_U32(ctx, 31, 0x1AC1C8u);
    ctx->pc = 0x1AC1C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1C8u; }
        else if (ctx->pc != 0x1AC1C8u) { ctx->pc = 0x1AC1C8u; }
    }
    if (ctx->pc != 0x1AC1C8u) { return; }
    ctx->pc = 0x1AC1C8u;
    // 0x1ac1c8: 0x4bf8e33c
    ctx->pc = 0x1ac1c8u;
    ctx->vu0_vf[24] = ctx->vu0_vf[28];
    // 0x1ac1cc: 0x4bf9eb3c
    ctx->pc = 0x1ac1ccu;
    ctx->vu0_vf[25] = ctx->vu0_vf[29];
    // 0x1ac1d0: 0x4bfaf33c
    ctx->pc = 0x1ac1d0u;
    ctx->vu0_vf[26] = ctx->vu0_vf[30];
    // 0x1ac1d4: 0x4bfbfb3c
    ctx->pc = 0x1ac1d4u;
    ctx->vu0_vf[27] = ctx->vu0_vf[31];
    // 0x1ac1d8: 0xc069394
    ctx->pc = 0x1AC1D8u;
    SET_GPR_U32(ctx, 31, 0x1AC1E0u);
    ctx->pc = 0x1AC1DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1E0u; }
        else if (ctx->pc != 0x1AC1E0u) { ctx->pc = 0x1AC1E0u; }
    }
    if (ctx->pc != 0x1AC1E0u) { return; }
    ctx->pc = 0x1AC1E0u;
    // 0x1ac1e0: 0xc7808a18
    ctx->pc = 0x1ac1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac1e4: 0x3c026c0b
    ctx->pc = 0x1ac1e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27659 << 16));
    // 0x1ac1e8: 0x34448000
    ctx->pc = 0x1ac1e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 32768));
    // 0x1ac1ec: 0x3c021400
    ctx->pc = 0x1ac1ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5120 << 16));
    // 0x1ac1f0: 0x3443000c
    ctx->pc = 0x1ac1f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 12));
    // 0x1ac1f4: 0x3c021000
    ctx->pc = 0x1ac1f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1ac1f8: 0xe6000000
    ctx->pc = 0x1ac1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1ac1fc: 0xc7808a14
    ctx->pc = 0x1ac1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac200: 0x3c010030
    ctx->pc = 0x1ac200u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac204: 0x3442000d
    ctx->pc = 0x1ac204u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
    // 0x1ac208: 0xe6200000
    ctx->pc = 0x1ac208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1ac20c: 0xac203c30
    ctx->pc = 0x1ac20cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15408), GPR_U32(ctx, 0));
    // 0x1ac210: 0x3c010030
    ctx->pc = 0x1ac210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac214: 0xac203c34
    ctx->pc = 0x1ac214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15412), GPR_U32(ctx, 0));
    // 0x1ac218: 0x3c010030
    ctx->pc = 0x1ac218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac21c: 0xac203c38
    ctx->pc = 0x1ac21cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15416), GPR_U32(ctx, 0));
    // 0x1ac220: 0x3c010030
    ctx->pc = 0x1ac220u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac224: 0xac243c3c
    ctx->pc = 0x1ac224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15420), GPR_U32(ctx, 4));
    // 0x1ac228: 0x3c010030
    ctx->pc = 0x1ac228u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac22c: 0xac233cf0
    ctx->pc = 0x1ac22cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15600), GPR_U32(ctx, 3));
    // 0x1ac230: 0x3c010030
    ctx->pc = 0x1ac230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac234: 0xac203cf4
    ctx->pc = 0x1ac234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15604), GPR_U32(ctx, 0));
    // 0x1ac238: 0x3c010030
    ctx->pc = 0x1ac238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac23c: 0xac203cf8
    ctx->pc = 0x1ac23cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15608), GPR_U32(ctx, 0));
    // 0x1ac240: 0x3c010030
    ctx->pc = 0x1ac240u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac244: 0xac203cfc
    ctx->pc = 0x1ac244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15612), GPR_U32(ctx, 0));
    // 0x1ac248: 0x3c010030
    ctx->pc = 0x1ac248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac24c: 0xac223c20
    ctx->pc = 0x1ac24cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15392), GPR_U32(ctx, 2));
    // 0x1ac250: 0x3c010030
    ctx->pc = 0x1ac250u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac254: 0xac203c24
    ctx->pc = 0x1ac254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15396), GPR_U32(ctx, 0));
    // 0x1ac258: 0x3c010030
    ctx->pc = 0x1ac258u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac25c: 0xac203c28
    ctx->pc = 0x1ac25cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15400), GPR_U32(ctx, 0));
    // 0x1ac260: 0x3c010030
    ctx->pc = 0x1ac260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac264: 0xc069558
    ctx->pc = 0x1AC264u;
    SET_GPR_U32(ctx, 31, 0x1AC26Cu);
    ctx->pc = 0x1AC268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15404), GPR_U32(ctx, 0));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC26Cu; }
        else if (ctx->pc != 0x1AC26Cu) { ctx->pc = 0x1AC26Cu; }
    }
    if (ctx->pc != 0x1AC26Cu) { return; }
    ctx->pc = 0x1AC26Cu;
    // 0x1ac26c: 0x70408628
    ctx->pc = 0x1ac26cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ac270: 0x16000004
    ctx->pc = 0x1AC270u;
    {
        const bool branch_taken_0x1ac270 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AC274u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ac270) {
            ctx->pc = 0x1AC284u;
            goto label_1ac284;
        }
    }
    ctx->pc = 0x1AC278u;
    // 0x1ac278: 0xc0694bc
    ctx->pc = 0x1AC278u;
    SET_GPR_U32(ctx, 31, 0x1AC280u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC280u; }
        else if (ctx->pc != 0x1AC280u) { ctx->pc = 0x1AC280u; }
    }
    if (ctx->pc != 0x1AC280u) { return; }
    ctx->pc = 0x1AC280u;
    // 0x1ac280: 0x70002628
    ctx->pc = 0x1ac280u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ac284:
    // 0x1ac284: 0xc0552d8
    ctx->pc = 0x1AC284u;
    SET_GPR_U32(ctx, 31, 0x1AC28Cu);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC28Cu; }
        else if (ctx->pc != 0x1AC28Cu) { ctx->pc = 0x1AC28Cu; }
    }
    if (ctx->pc != 0x1AC28Cu) { return; }
    ctx->pc = 0x1AC28Cu;
    // 0x1ac28c: 0xc069528
    ctx->pc = 0x1AC28Cu;
    SET_GPR_U32(ctx, 31, 0x1AC294u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC294u; }
        else if (ctx->pc != 0x1AC294u) { ctx->pc = 0x1AC294u; }
    }
    if (ctx->pc != 0x1AC294u) { return; }
    ctx->pc = 0x1AC294u;
label_1ac294:
    // 0x1ac294: 0x3c011001
    ctx->pc = 0x1ac294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1ac298: 0x8c23d000
    ctx->pc = 0x1ac298u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1ac29c: 0x30630100
    ctx->pc = 0x1ac29cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1ac2a0: 0x0
    ctx->pc = 0x1ac2a0u;
    // NOP
    // 0x1ac2a4: 0x0
    ctx->pc = 0x1ac2a4u;
    // NOP
    // 0x1ac2a8: 0x1460fffa
    ctx->pc = 0x1AC2A8u;
    {
        const bool branch_taken_0x1ac2a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ac2a8) {
            ctx->pc = 0x1AC294u;
            goto label_1ac294;
        }
    }
    ctx->pc = 0x1AC2B0u;
    // 0x1ac2b0: 0x70402628
    ctx->pc = 0x1ac2b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ac2b4: 0x3c020030
    ctx->pc = 0x1ac2b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac2b8: 0x24453c20
    ctx->pc = 0x1ac2b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15392));
    // 0x1ac2bc: 0xc06ac36
    ctx->pc = 0x1AC2BCu;
    SET_GPR_U32(ctx, 31, 0x1AC2C4u);
    ctx->pc = 0x1AC2C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2C4u; }
        else if (ctx->pc != 0x1AC2C4u) { ctx->pc = 0x1AC2C4u; }
    }
    if (ctx->pc != 0x1AC2C4u) { return; }
    ctx->pc = 0x1AC2C4u;
    // 0x1ac2c4: 0xc06952c
    ctx->pc = 0x1AC2C4u;
    SET_GPR_U32(ctx, 31, 0x1AC2CCu);
    ctx->pc = 0x1AC2C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2CCu; }
        else if (ctx->pc != 0x1AC2CCu) { ctx->pc = 0x1AC2CCu; }
    }
    if (ctx->pc != 0x1AC2CCu) { return; }
    ctx->pc = 0x1AC2CCu;
    // 0x1ac2cc: 0x16000005
    ctx->pc = 0x1AC2CCu;
    {
        const bool branch_taken_0x1ac2cc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AC2D0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x1ac2cc) {
            ctx->pc = 0x1AC2E4u;
            goto label_1ac2e4;
        }
    }
    ctx->pc = 0x1AC2D4u;
    // 0x1ac2d4: 0x70002628
    ctx->pc = 0x1ac2d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ac2d8: 0xc0694e8
    ctx->pc = 0x1AC2D8u;
    SET_GPR_U32(ctx, 31, 0x1AC2E0u);
    ctx->pc = 0x1AC2DCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2E0u; }
        else if (ctx->pc != 0x1AC2E0u) { ctx->pc = 0x1AC2E0u; }
    }
    if (ctx->pc != 0x1AC2E0u) { return; }
    ctx->pc = 0x1AC2E0u;
    // 0x1ac2e0: 0x27a40040
    ctx->pc = 0x1ac2e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
label_1ac2e4:
    // 0x1ac2e4: 0xc06c04e
    ctx->pc = 0x1AC2E4u;
    SET_GPR_U32(ctx, 31, 0x1AC2ECu);
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2ECu; }
        else if (ctx->pc != 0x1AC2ECu) { ctx->pc = 0x1AC2ECu; }
    }
    if (ctx->pc != 0x1AC2ECu) { return; }
    ctx->pc = 0x1AC2ECu;
    // 0x1ac2ec: 0xc06b254
    ctx->pc = 0x1AC2ECu;
    SET_GPR_U32(ctx, 31, 0x1AC2F4u);
    ctx->pc = 0x1AC950u;
    {
        const uint32_t __entryPc = ctx->pc;
        nl_set_cnv_proj_pers_0x1ac950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2F4u; }
        else if (ctx->pc != 0x1AC2F4u) { ctx->pc = 0x1AC2F4u; }
    }
    if (ctx->pc != 0x1AC2F4u) { return; }
    ctx->pc = 0x1AC2F4u;
    // 0x1ac2f4: 0x7bbf0030
    ctx->pc = 0x1ac2f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac2f8: 0x7bb10020
    ctx->pc = 0x1ac2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac2fc: 0x7bb00010
    ctx->pc = 0x1ac2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac300: 0xc7b7000c
    ctx->pc = 0x1ac300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ac304: 0xc7b60008
    ctx->pc = 0x1ac304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ac308: 0xc7b50004
    ctx->pc = 0x1ac308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ac30c: 0xc7b40000
    ctx->pc = 0x1ac30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac310: 0x3e00008
    ctx->pc = 0x1AC310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC314u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABE54u: goto label_1abe54;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABEB8u: goto label_1abeb8;
            case 0x1ABEE0u: goto label_1abee0;
            case 0x1ABEF4u: goto label_1abef4;
            case 0x1ABFCCu: goto label_1abfcc;
            case 0x1AC284u: goto label_1ac284;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC2E4u: goto label_1ac2e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC318u;
}
