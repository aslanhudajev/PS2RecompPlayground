#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSprPutSub
// Address: 0x1add40 - 0x1ae788
void nlSprPutSub_0x1add40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSprPutSub");


    ctx->pc = 0x1add40u;

    // 0x1add40: 0x27bdfea0
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1add44: 0x7fbf0090
    ctx->pc = 0x1add44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1add48: 0x7fb70080
    ctx->pc = 0x1add48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1add4c: 0x7fb60070
    ctx->pc = 0x1add4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1add50: 0x7fb50060
    ctx->pc = 0x1add50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1add54: 0x7fb40050
    ctx->pc = 0x1add54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1add58: 0x7fb30040
    ctx->pc = 0x1add58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1add5c: 0x7fb20030
    ctx->pc = 0x1add5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1add60: 0x7fb10020
    ctx->pc = 0x1add60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1add64: 0x7fb00010
    ctx->pc = 0x1add64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1add68: 0xe7b7000c
    ctx->pc = 0x1add68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1add6c: 0xe7b60008
    ctx->pc = 0x1add6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1add70: 0xe7b50004
    ctx->pc = 0x1add70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1add74: 0xe7b40000
    ctx->pc = 0x1add74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1add78: 0x8c83003c
    ctx->pc = 0x1add78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1add7c: 0x8c850044
    ctx->pc = 0x1add7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1add80: 0x3c020002
    ctx->pc = 0x1add80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1add84: 0x70809628
    ctx->pc = 0x1add84u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1add88: 0x621024
    ctx->pc = 0x1add88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1add8c: 0x10400004
    ctx->pc = 0x1ADD8Cu;
    {
        const bool branch_taken_0x1add8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADD90u;
        SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1add8c) {
            ctx->pc = 0x1ADDA0u;
            goto label_1adda0;
        }
    }
    ctx->pc = 0x1ADD94u;
    // 0x1add94: 0x24140001
    ctx->pc = 0x1add94u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add98: 0x10000003
    ctx->pc = 0x1ADD98u;
    {
        const bool branch_taken_0x1add98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADD9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x1add98) {
            ctx->pc = 0x1ADDA8u;
            goto label_1adda8;
        }
    }
    ctx->pc = 0x1ADDA0u;
label_1adda0:
    // 0x1adda0: 0x7000a628
    ctx->pc = 0x1adda0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1adda4: 0x24100012
    ctx->pc = 0x1adda4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 18));
label_1adda8:
    // 0x1adda8: 0xc06b654
    ctx->pc = 0x1ADDA8u;
    SET_GPR_U32(ctx, 31, 0x1ADDB0u);
    ctx->pc = 0x1ADDACu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD950u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_trnsl_sprite_0x1ad950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADDB0u; }
        else if (ctx->pc != 0x1ADDB0u) { ctx->pc = 0x1ADDB0u; }
    }
    if (ctx->pc != 0x1ADDB0u) { return; }
    ctx->pc = 0x1ADDB0u;
    // 0x1addb0: 0xc6410034
    ctx->pc = 0x1addb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1addb4: 0x7040b628
    ctx->pc = 0x1addb4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1addb8: 0x8e440038
    ctx->pc = 0x1addb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1addbc: 0x3c023f80
    ctx->pc = 0x1addbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1addc0: 0x44820000
    ctx->pc = 0x1addc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1addc4: 0x70008e28
    ctx->pc = 0x1addc4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1addc8: 0x46000836
    ctx->pc = 0x1addc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1addcc: 0x24030001
    ctx->pc = 0x1addccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1addd0: 0x45010003
    ctx->pc = 0x1ADDD0u;
    {
        const bool branch_taken_0x1addd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADDD4u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x1addd0) {
            ctx->pc = 0x1ADDE0u;
            goto label_1adde0;
        }
    }
    ctx->pc = 0x1ADDD8u;
    // 0x1addd8: 0x10000008
    ctx->pc = 0x1ADDD8u;
    {
        const bool branch_taken_0x1addd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADDDCu;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x1addd8) {
            ctx->pc = 0x1ADDFCu;
            goto label_1addfc;
        }
    }
    ctx->pc = 0x1ADDE0u;
label_1adde0:
    // 0x1adde0: 0x44800000
    ctx->pc = 0x1adde0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1adde4: 0x0
    ctx->pc = 0x1adde4u;
    // NOP
    // 0x1adde8: 0x46000834
    ctx->pc = 0x1adde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1addec: 0x0
    ctx->pc = 0x1addecu;
    // NOP
    // 0x1addf0: 0x45000002
    ctx->pc = 0x1ADDF0u;
    {
        const bool branch_taken_0x1addf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1addf0) {
            ctx->pc = 0x1ADDFCu;
            goto label_1addfc;
        }
    }
    ctx->pc = 0x1ADDF8u;
    // 0x1addf8: 0x46000046
    ctx->pc = 0x1addf8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1addfc:
    // 0x1addfc: 0x8e43003c
    ctx->pc = 0x1addfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ade00: 0x30622000
    ctx->pc = 0x1ade00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8192));
    // 0x1ade04: 0x10400022
    ctx->pc = 0x1ADE04u;
    {
        const bool branch_taken_0x1ade04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADE08u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
        if (branch_taken_0x1ade04) {
            ctx->pc = 0x1ADE90u;
            goto label_1ade90;
        }
    }
    ctx->pc = 0x1ADE0Cu;
    // 0x1ade0c: 0x3c024300
    ctx->pc = 0x1ade0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17152 << 16));
    // 0x1ade10: 0x3c010030
    ctx->pc = 0x1ade10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ade14: 0x44822000
    ctx->pc = 0x1ade14u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x1ade18: 0xc4223970
    ctx->pc = 0x1ade18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ade1c: 0x460120c2
    ctx->pc = 0x1ade1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1ade20: 0x3c010030
    ctx->pc = 0x1ade20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ade24: 0xc4213974
    ctx->pc = 0x1ade24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ade28: 0x46022082
    ctx->pc = 0x1ade28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1ade2c: 0x460010a4
    ctx->pc = 0x1ade2cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1ade30: 0x3c010030
    ctx->pc = 0x1ade30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ade34: 0xc4203978
    ctx->pc = 0x1ade34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ade38: 0x44021000
    ctx->pc = 0x1ade38u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x1ade3c: 0x46012042
    ctx->pc = 0x1ade3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1ade40: 0x304200ff
    ctx->pc = 0x1ade40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ade44: 0xafa20140
    ctx->pc = 0x1ade44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1ade48: 0x46002082
    ctx->pc = 0x1ade48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1ade4c: 0x46000824
    ctx->pc = 0x1ade4cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1ade50: 0x44020000
    ctx->pc = 0x1ade50u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ade54: 0x0
    ctx->pc = 0x1ade54u;
    // NOP
    // 0x1ade58: 0x304200ff
    ctx->pc = 0x1ade58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ade5c: 0x46001024
    ctx->pc = 0x1ade5cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1ade60: 0xafa20144
    ctx->pc = 0x1ade60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1ade64: 0x44020000
    ctx->pc = 0x1ade64u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ade68: 0x0
    ctx->pc = 0x1ade68u;
    // NOP
    // 0x1ade6c: 0x304200ff
    ctx->pc = 0x1ade6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ade70: 0x46001824
    ctx->pc = 0x1ade70u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[3]);
    // 0x1ade74: 0xafa20148
    ctx->pc = 0x1ade74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1ade78: 0x44020000
    ctx->pc = 0x1ade78u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ade7c: 0x0
    ctx->pc = 0x1ade7cu;
    // NOP
    // 0x1ade80: 0x304200ff
    ctx->pc = 0x1ade80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ade84: 0x10000028
    ctx->pc = 0x1ADE84u;
    {
        const bool branch_taken_0x1ade84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADE88u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        if (branch_taken_0x1ade84) {
            ctx->pc = 0x1ADF28u;
            goto label_1adf28;
        }
    }
    ctx->pc = 0x1ADE8Cu;
    // 0x1ade8c: 0x30624000
    ctx->pc = 0x1ade8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
label_1ade90:
    // 0x1ade90: 0x10400016
    ctx->pc = 0x1ADE90u;
    {
        const bool branch_taken_0x1ade90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADE94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x1ade90) {
            ctx->pc = 0x1ADEECu;
            goto label_1adeec;
        }
    }
    ctx->pc = 0x1ADE98u;
    // 0x1ade98: 0x8e440040
    ctx->pc = 0x1ade98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1ade9c: 0x3c024300
    ctx->pc = 0x1ade9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17152 << 16));
    // 0x1adea0: 0x44820000
    ctx->pc = 0x1adea0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1adea4: 0x3c0300ff
    ctx->pc = 0x1adea4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x1adea8: 0x46010002
    ctx->pc = 0x1adea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1adeac: 0x831024
    ctx->pc = 0x1adeacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1adeb0: 0x21403
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1adeb4: 0xafa20140
    ctx->pc = 0x1adeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1adeb8: 0x8e420040
    ctx->pc = 0x1adeb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1adebc: 0x46000024
    ctx->pc = 0x1adebcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1adec0: 0x3042ff00
    ctx->pc = 0x1adec0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65280));
    // 0x1adec4: 0x21203
    ctx->pc = 0x1adec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1adec8: 0xafa20144
    ctx->pc = 0x1adec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1adecc: 0x92430040
    ctx->pc = 0x1adeccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1aded0: 0x44020000
    ctx->pc = 0x1aded0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1aded4: 0x0
    ctx->pc = 0x1aded4u;
    // NOP
    // 0x1aded8: 0x304200ff
    ctx->pc = 0x1aded8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1adedc: 0xafa30148
    ctx->pc = 0x1adedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1adee0: 0x10000011
    ctx->pc = 0x1ADEE0u;
    {
        const bool branch_taken_0x1adee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADEE4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        if (branch_taken_0x1adee0) {
            ctx->pc = 0x1ADF28u;
            goto label_1adf28;
        }
    }
    ctx->pc = 0x1ADEE8u;
    // 0x1adee8: 0x24020080
    ctx->pc = 0x1adee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1adeec:
    // 0x1adeec: 0xafa20140
    ctx->pc = 0x1adeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1adef0: 0xafa20144
    ctx->pc = 0x1adef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1adef4: 0x12c0000b
    ctx->pc = 0x1ADEF4u;
    {
        const bool branch_taken_0x1adef4 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADEF8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
        if (branch_taken_0x1adef4) {
            ctx->pc = 0x1ADF24u;
            goto label_1adf24;
        }
    }
    ctx->pc = 0x1ADEFCu;
    // 0x1adefc: 0x3c024300
    ctx->pc = 0x1adefcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17152 << 16));
    // 0x1adf00: 0x44820000
    ctx->pc = 0x1adf00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1adf04: 0x0
    ctx->pc = 0x1adf04u;
    // NOP
    // 0x1adf08: 0x46010002
    ctx->pc = 0x1adf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1adf0c: 0x46000024
    ctx->pc = 0x1adf0cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1adf10: 0x44020000
    ctx->pc = 0x1adf10u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1adf14: 0x0
    ctx->pc = 0x1adf14u;
    // NOP
    // 0x1adf18: 0x304200ff
    ctx->pc = 0x1adf18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1adf1c: 0x10000002
    ctx->pc = 0x1ADF1Cu;
    {
        const bool branch_taken_0x1adf1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADF20u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        if (branch_taken_0x1adf1c) {
            ctx->pc = 0x1ADF28u;
            goto label_1adf28;
        }
    }
    ctx->pc = 0x1ADF24u;
label_1adf24:
    // 0x1adf24: 0xafa2014c
    ctx->pc = 0x1adf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_1adf28:
    // 0x1adf28: 0xde530000
    ctx->pc = 0x1adf28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1adf2c: 0x24050001
    ctx->pc = 0x1adf2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adf30: 0xc6410018
    ctx->pc = 0x1adf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1adf34: 0xc640001c
    ctx->pc = 0x1adf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adf38: 0x8e46003c
    ctx->pc = 0x1adf38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1adf3c: 0x24020003
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1adf40: 0x131eba
    ctx->pc = 0x1adf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> 26);
    // 0x1adf44: 0x3063000f
    ctx->pc = 0x1adf44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1adf48: 0x3183c
    ctx->pc = 0x1adf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adf4c: 0x3183f
    ctx->pc = 0x1adf4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1adf50: 0x651804
    ctx->pc = 0x1adf50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1adf54: 0x44831000
    ctx->pc = 0x1adf54u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1adf58: 0x0
    ctx->pc = 0x1adf58u;
    // NOP
    // 0x1adf5c: 0x468010a0
    ctx->pc = 0x1adf5cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1adf60: 0x131fba
    ctx->pc = 0x1adf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> 30);
    // 0x1adf64: 0x3063000f
    ctx->pc = 0x1adf64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1adf68: 0x3183c
    ctx->pc = 0x1adf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1adf6c: 0x3183f
    ctx->pc = 0x1adf6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1adf70: 0x652004
    ctx->pc = 0x1adf70u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1adf74: 0x46011542
    ctx->pc = 0x1adf74u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1adf78: 0x30c30003
    ctx->pc = 0x1adf78u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 3));
    // 0x1adf7c: 0x44840800
    ctx->pc = 0x1adf7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1adf80: 0x0
    ctx->pc = 0x1adf80u;
    // NOP
    // 0x1adf84: 0x46800860
    ctx->pc = 0x1adf84u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1adf88: 0x10620012
    ctx->pc = 0x1ADF88u;
    {
        const bool branch_taken_0x1adf88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1ADF8Cu;
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1adf88) {
            ctx->pc = 0x1ADFD4u;
            goto label_1adfd4;
        }
    }
    ctx->pc = 0x1ADF90u;
    // 0x1adf90: 0x24020002
    ctx->pc = 0x1adf90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adf94: 0x10620005
    ctx->pc = 0x1ADF94u;
    {
        const bool branch_taken_0x1adf94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1ADF98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1adf94) {
            ctx->pc = 0x1ADFACu;
            goto label_1adfac;
        }
    }
    ctx->pc = 0x1ADF9Cu;
    // 0x1adf9c: 0x4480b800
    ctx->pc = 0x1adf9cu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x1adfa0: 0x1000000f
    ctx->pc = 0x1ADFA0u;
    {
        const bool branch_taken_0x1adfa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADFA4u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 12));
        if (branch_taken_0x1adfa0) {
            ctx->pc = 0x1ADFE0u;
            goto label_1adfe0;
        }
    }
    ctx->pc = 0x1ADFA8u;
    // 0x1adfa8: 0x3c024000
    ctx->pc = 0x1adfa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
label_1adfac:
    // 0x1adfac: 0x44820800
    ctx->pc = 0x1adfacu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1adfb0: 0x4600a807
    ctx->pc = 0x1adfb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x1adfb4: 0x460105c3
    ctx->pc = 0x1adfb4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[23] = ctx->f[0] / ctx->f[1];
    // 0x1adfb8: 0x0
    ctx->pc = 0x1adfb8u;
    // NOP
    // 0x1adfbc: 0x0
    ctx->pc = 0x1adfbcu;
    // NOP
    // 0x1adfc0: 0x4601ad43
    ctx->pc = 0x1adfc0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[1];
    // 0x1adfc4: 0x0
    ctx->pc = 0x1adfc4u;
    // NOP
    // 0x1adfc8: 0x0
    ctx->pc = 0x1adfc8u;
    // NOP
    // 0x1adfcc: 0x10000003
    ctx->pc = 0x1ADFCCu;
    {
        const bool branch_taken_0x1adfcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1adfcc) {
            ctx->pc = 0x1ADFDCu;
            goto label_1adfdc;
        }
    }
    ctx->pc = 0x1ADFD4u;
label_1adfd4:
    // 0x1adfd4: 0x4600adc7
    ctx->pc = 0x1adfd4u;
    ctx->f[23] = FPU_NEG_S(ctx->f[21]);
    // 0x1adfd8: 0x4480a800
    ctx->pc = 0x1adfd8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
label_1adfdc:
    // 0x1adfdc: 0x30c3000c
    ctx->pc = 0x1adfdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 12));
label_1adfe0:
    // 0x1adfe0: 0x2402000c
    ctx->pc = 0x1adfe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1adfe4: 0x10620014
    ctx->pc = 0x1ADFE4u;
    {
        const bool branch_taken_0x1adfe4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1ADFE8u;
        ctx->f[20] = FPU_NEG_S(ctx->f[22]);
        if (branch_taken_0x1adfe4) {
            ctx->pc = 0x1AE038u;
            goto label_1ae038;
        }
    }
    ctx->pc = 0x1ADFECu;
    // 0x1adfec: 0x24020008
    ctx->pc = 0x1adfecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1adff0: 0x10620006
    ctx->pc = 0x1ADFF0u;
    {
        const bool branch_taken_0x1adff0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1ADFF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1adff0) {
            ctx->pc = 0x1AE00Cu;
            goto label_1ae00c;
        }
    }
    ctx->pc = 0x1ADFF8u;
    // 0x1adff8: 0x24020004
    ctx->pc = 0x1adff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1adffc: 0x4480a000
    ctx->pc = 0x1adffcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x1ae000: 0x1000000f
    ctx->pc = 0x1AE000u;
    {
        const bool branch_taken_0x1ae000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE004u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 48)));
        if (branch_taken_0x1ae000) {
            ctx->pc = 0x1AE040u;
            goto label_1ae040;
        }
    }
    ctx->pc = 0x1AE008u;
    // 0x1ae008: 0x3c024000
    ctx->pc = 0x1ae008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
label_1ae00c:
    // 0x1ae00c: 0x44820800
    ctx->pc = 0x1ae00cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1ae010: 0x4600b007
    ctx->pc = 0x1ae010u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x1ae014: 0x46010503
    ctx->pc = 0x1ae014u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x1ae018: 0x0
    ctx->pc = 0x1ae018u;
    // NOP
    // 0x1ae01c: 0x0
    ctx->pc = 0x1ae01cu;
    // NOP
    // 0x1ae020: 0x4601b583
    ctx->pc = 0x1ae020u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[1];
    // 0x1ae024: 0x0
    ctx->pc = 0x1ae024u;
    // NOP
    // 0x1ae028: 0x0
    ctx->pc = 0x1ae028u;
    // NOP
    // 0x1ae02c: 0x10000003
    ctx->pc = 0x1AE02Cu;
    {
        const bool branch_taken_0x1ae02c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae02c) {
            ctx->pc = 0x1AE03Cu;
            goto label_1ae03c;
        }
    }
    ctx->pc = 0x1AE034u;
    // 0x1ae034: 0x4600b507
    ctx->pc = 0x1ae034u;
    ctx->f[20] = FPU_NEG_S(ctx->f[22]);
label_1ae038:
    // 0x1ae038: 0x4480b000
    ctx->pc = 0x1ae038u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
label_1ae03c:
    // 0x1ae03c: 0x8e440030
    ctx->pc = 0x1ae03cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1ae040:
    // 0x1ae040: 0x10800031
    ctx->pc = 0x1AE040u;
    {
        const bool branch_taken_0x1ae040 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae040) {
            ctx->pc = 0x1AE108u;
            goto label_1ae108;
        }
    }
    ctx->pc = 0x1AE048u;
    // 0x1ae048: 0x1680002f
    ctx->pc = 0x1AE048u;
    {
        const bool branch_taken_0x1ae048 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ae048) {
            ctx->pc = 0x1AE108u;
            goto label_1ae108;
        }
    }
    ctx->pc = 0x1AE050u;
    // 0x1ae050: 0x27a50158
    ctx->pc = 0x1ae050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 344));
    // 0x1ae054: 0xc06c22c
    ctx->pc = 0x1AE054u;
    SET_GPR_U32(ctx, 31, 0x1AE05Cu);
    ctx->pc = 0x1AE058u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 348));
    ctx->pc = 0x1B08B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08B0_0x1b08b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE05Cu; }
        else if (ctx->pc != 0x1AE05Cu) { ctx->pc = 0x1AE05Cu; }
    }
    if (ctx->pc != 0x1AE05Cu) { return; }
    ctx->pc = 0x1AE05Cu;
    // 0x1ae05c: 0xc7a1015c
    ctx->pc = 0x1ae05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae060: 0xc7a20158
    ctx->pc = 0x1ae060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae064: 0xc640000c
    ctx->pc = 0x1ae064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae068: 0x4601b8c2
    ctx->pc = 0x1ae068u;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x1ae06c: 0x46030018
    ctx->pc = 0x1ae06cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1ae070: 0x4602a01d
    ctx->pc = 0x1ae070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x1ae074: 0xe7a000e0
    ctx->pc = 0x1ae074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1ae078: 0xc6400010
    ctx->pc = 0x1ae078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae07c: 0x4602b902
    ctx->pc = 0x1ae07cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x1ae080: 0x46040018
    ctx->pc = 0x1ae080u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1ae084: 0x4601a01c
    ctx->pc = 0x1ae084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
    // 0x1ae088: 0xe7a000e4
    ctx->pc = 0x1ae088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1ae08c: 0xc640000c
    ctx->pc = 0x1ae08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae090: 0x4602a142
    ctx->pc = 0x1ae090u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1ae094: 0x46030018
    ctx->pc = 0x1ae094u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1ae098: 0x4602b01d
    ctx->pc = 0x1ae098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[2]));
    // 0x1ae09c: 0xe7a000e8
    ctx->pc = 0x1ae09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1ae0a0: 0xc6400010
    ctx->pc = 0x1ae0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae0a4: 0x4602b1c2
    ctx->pc = 0x1ae0a4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x1ae0a8: 0x4602aa02
    ctx->pc = 0x1ae0a8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1ae0ac: 0x46040018
    ctx->pc = 0x1ae0acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1ae0b0: 0x4601b01c
    ctx->pc = 0x1ae0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
    // 0x1ae0b4: 0xe7a000ec
    ctx->pc = 0x1ae0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1ae0b8: 0xc640000c
    ctx->pc = 0x1ae0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae0bc: 0x4601a882
    ctx->pc = 0x1ae0bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1ae0c0: 0x46020000
    ctx->pc = 0x1ae0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ae0c4: 0x46050001
    ctx->pc = 0x1ae0c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1ae0c8: 0xe7a000f0
    ctx->pc = 0x1ae0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1ae0cc: 0xc6400010
    ctx->pc = 0x1ae0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae0d0: 0x4601a182
    ctx->pc = 0x1ae0d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1ae0d4: 0x46080000
    ctx->pc = 0x1ae0d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1ae0d8: 0x46060000
    ctx->pc = 0x1ae0d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1ae0dc: 0xe7a000f4
    ctx->pc = 0x1ae0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1ae0e0: 0xc640000c
    ctx->pc = 0x1ae0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae0e4: 0x4601b0c2
    ctx->pc = 0x1ae0e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x1ae0e8: 0x46020000
    ctx->pc = 0x1ae0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ae0ec: 0x46070001
    ctx->pc = 0x1ae0ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x1ae0f0: 0xe7a000f8
    ctx->pc = 0x1ae0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1ae0f4: 0xc6400010
    ctx->pc = 0x1ae0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae0f8: 0x46080000
    ctx->pc = 0x1ae0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1ae0fc: 0x46030000
    ctx->pc = 0x1ae0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1ae100: 0x10000019
    ctx->pc = 0x1AE100u;
    {
        const bool branch_taken_0x1ae100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE104u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        if (branch_taken_0x1ae100) {
            ctx->pc = 0x1AE168u;
            goto label_1ae168;
        }
    }
    ctx->pc = 0x1AE108u;
label_1ae108:
    // 0x1ae108: 0xc640000c
    ctx->pc = 0x1ae108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae10c: 0x46170000
    ctx->pc = 0x1ae10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1ae110: 0xe7a000e0
    ctx->pc = 0x1ae110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1ae114: 0xc6400010
    ctx->pc = 0x1ae114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae118: 0x46140000
    ctx->pc = 0x1ae118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ae11c: 0xe7a000e4
    ctx->pc = 0x1ae11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1ae120: 0xc640000c
    ctx->pc = 0x1ae120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae124: 0x46170000
    ctx->pc = 0x1ae124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1ae128: 0xe7a000e8
    ctx->pc = 0x1ae128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1ae12c: 0xc6400010
    ctx->pc = 0x1ae12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae130: 0x46160000
    ctx->pc = 0x1ae130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1ae134: 0xe7a000ec
    ctx->pc = 0x1ae134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1ae138: 0xc640000c
    ctx->pc = 0x1ae138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae13c: 0x46150000
    ctx->pc = 0x1ae13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ae140: 0xe7a000f0
    ctx->pc = 0x1ae140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1ae144: 0xc6400010
    ctx->pc = 0x1ae144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae148: 0x46140000
    ctx->pc = 0x1ae148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ae14c: 0xe7a000f4
    ctx->pc = 0x1ae14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1ae150: 0xc640000c
    ctx->pc = 0x1ae150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae154: 0x46150000
    ctx->pc = 0x1ae154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1ae158: 0xe7a000f8
    ctx->pc = 0x1ae158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1ae15c: 0xc6400010
    ctx->pc = 0x1ae15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae160: 0x46160000
    ctx->pc = 0x1ae160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1ae164: 0xe7a000fc
    ctx->pc = 0x1ae164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1ae168:
    // 0x1ae168: 0xc7848344
    ctx->pc = 0x1ae168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ae16c: 0xc7838ac8
    ctx->pc = 0x1ae16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ae170: 0x27a900e0
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ae174: 0xc5200000
    ctx->pc = 0x1ae174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae178: 0xc7858a94
    ctx->pc = 0x1ae178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ae17c: 0xc7868a98
    ctx->pc = 0x1ae17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1ae180: 0xc7828348
    ctx->pc = 0x1ae180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae184: 0x460320c2
    ctx->pc = 0x1ae184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1ae188: 0xc7818acc
    ctx->pc = 0x1ae188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae18c: 0x27a200e4
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 228));
    // 0x1ae190: 0x27a300e8
    ctx->pc = 0x1ae190u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 232));
    // 0x1ae194: 0x27a500ec
    ctx->pc = 0x1ae194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 236));
    // 0x1ae198: 0x46030002
    ctx->pc = 0x1ae198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ae19c: 0x27a600f0
    ctx->pc = 0x1ae19cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ae1a0: 0x27a700f4
    ctx->pc = 0x1ae1a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 244));
    // 0x1ae1a4: 0x27aa00f8
    ctx->pc = 0x1ae1a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 248));
    // 0x1ae1a8: 0x27ab00fc
    ctx->pc = 0x1ae1a8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 252));
    // 0x1ae1ac: 0xe5200000
    ctx->pc = 0x1ae1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1ae1b0: 0x46050000
    ctx->pc = 0x1ae1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1ae1b4: 0x70002628
    ctx->pc = 0x1ae1b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ae1b8: 0x27a800a0
    ctx->pc = 0x1ae1b8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ae1bc: 0xe5200000
    ctx->pc = 0x1ae1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1ae1c0: 0xc4400000
    ctx->pc = 0x1ae1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae1c4: 0x46011082
    ctx->pc = 0x1ae1c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ae1c8: 0x46020002
    ctx->pc = 0x1ae1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ae1cc: 0xe4400000
    ctx->pc = 0x1ae1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ae1d0: 0x46060000
    ctx->pc = 0x1ae1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1ae1d4: 0xe4400000
    ctx->pc = 0x1ae1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ae1d8: 0xc4600000
    ctx->pc = 0x1ae1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae1dc: 0x46030002
    ctx->pc = 0x1ae1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ae1e0: 0xe4600000
    ctx->pc = 0x1ae1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ae1e4: 0x46050000
    ctx->pc = 0x1ae1e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1ae1e8: 0xe4600000
    ctx->pc = 0x1ae1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ae1ec: 0xc4a00000
    ctx->pc = 0x1ae1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae1f0: 0x46020002
    ctx->pc = 0x1ae1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ae1f4: 0xe4a00000
    ctx->pc = 0x1ae1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1ae1f8: 0x46060000
    ctx->pc = 0x1ae1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1ae1fc: 0xe4a00000
    ctx->pc = 0x1ae1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1ae200: 0xc4c00000
    ctx->pc = 0x1ae200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae204: 0x46030002
    ctx->pc = 0x1ae204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ae208: 0xe4c00000
    ctx->pc = 0x1ae208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1ae20c: 0x46050000
    ctx->pc = 0x1ae20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1ae210: 0xe4c00000
    ctx->pc = 0x1ae210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1ae214: 0xc4e00000
    ctx->pc = 0x1ae214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae218: 0x46020002
    ctx->pc = 0x1ae218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ae21c: 0xe4e00000
    ctx->pc = 0x1ae21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1ae220: 0x46060000
    ctx->pc = 0x1ae220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1ae224: 0xe4e00000
    ctx->pc = 0x1ae224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1ae228: 0xc5400000
    ctx->pc = 0x1ae228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae22c: 0x46030042
    ctx->pc = 0x1ae22cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1ae230: 0x46050800
    ctx->pc = 0x1ae230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1ae234: 0xe5410000
    ctx->pc = 0x1ae234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1ae238: 0xe5400000
    ctx->pc = 0x1ae238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1ae23c: 0xc5600000
    ctx->pc = 0x1ae23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae240: 0x46020042
    ctx->pc = 0x1ae240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ae244: 0x46060800
    ctx->pc = 0x1ae244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1ae248: 0xe5610000
    ctx->pc = 0x1ae248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1ae24c: 0xe5600000
    ctx->pc = 0x1ae24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1ae250: 0x3c024180
    ctx->pc = 0x1ae250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x1ae254: 0x44820800
    ctx->pc = 0x1ae254u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1ae258:
    // 0x1ae258: 0x70002e28
    ctx->pc = 0x1ae258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ae25c: 0x71203628
    ctx->pc = 0x1ae25cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1ae260: 0x71003e28
    ctx->pc = 0x1ae260u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1ae264: 0x0
    ctx->pc = 0x1ae264u;
    // NOP
label_1ae268:
    // 0x1ae268: 0xc4c00000
    ctx->pc = 0x1ae268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae26c: 0x24a50001
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ae270: 0x28a20002
    ctx->pc = 0x1ae270u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1ae274: 0x46000802
    ctx->pc = 0x1ae274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae278: 0x24c60004
    ctx->pc = 0x1ae278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1ae27c: 0x46000024
    ctx->pc = 0x1ae27cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ae280: 0x44030000
    ctx->pc = 0x1ae280u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1ae284: 0x0
    ctx->pc = 0x1ae284u;
    // NOP
    // 0x1ae288: 0x2463ffff
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ae28c: 0xace30000
    ctx->pc = 0x1ae28cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1ae290: 0x1440fff5
    ctx->pc = 0x1AE290u;
    {
        const bool branch_taken_0x1ae290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AE294u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x1ae290) {
            ctx->pc = 0x1AE268u;
            goto label_1ae268;
        }
    }
    ctx->pc = 0x1AE298u;
    // 0x1ae298: 0x24840001
    ctx->pc = 0x1ae298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ae29c: 0x28820004
    ctx->pc = 0x1ae29cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x1ae2a0: 0x25290008
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x1ae2a4: 0x1440ffec
    ctx->pc = 0x1AE2A4u;
    {
        const bool branch_taken_0x1ae2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AE2A8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
        if (branch_taken_0x1ae2a4) {
            ctx->pc = 0x1AE258u;
            goto label_1ae258;
        }
    }
    ctx->pc = 0x1AE2ACu;
    // 0x1ae2ac: 0xc7828a14
    ctx->pc = 0x1ae2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae2b0: 0xc6410014
    ctx->pc = 0x1ae2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae2b4: 0xc7808a18
    ctx->pc = 0x1ae2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae2b8: 0x46011043
    ctx->pc = 0x1ae2b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1ae2bc: 0x46000007
    ctx->pc = 0x1ae2bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ae2c0: 0x46010000
    ctx->pc = 0x1ae2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ae2c4: 0x46000024
    ctx->pc = 0x1ae2c4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1ae2c8: 0x44020000
    ctx->pc = 0x1ae2c8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ae2cc: 0x0
    ctx->pc = 0x1ae2ccu;
    // NOP
    // 0x1ae2d0: 0x21103
    ctx->pc = 0x1ae2d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1ae2d4: 0xafa200d8
    ctx->pc = 0x1ae2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1ae2d8: 0xafa200c8
    ctx->pc = 0x1ae2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x1ae2dc: 0xafa200b8
    ctx->pc = 0x1ae2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1ae2e0: 0xafa200a8
    ctx->pc = 0x1ae2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1ae2e4: 0xafa000dc
    ctx->pc = 0x1ae2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x1ae2e8: 0xafa000cc
    ctx->pc = 0x1ae2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x1ae2ec: 0xafa000bc
    ctx->pc = 0x1ae2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x1ae2f0: 0xafa000ac
    ctx->pc = 0x1ae2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1ae2f4: 0x8e42003c
    ctx->pc = 0x1ae2f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ae2f8: 0x30420010
    ctx->pc = 0x1ae2f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x1ae2fc: 0x10400008
    ctx->pc = 0x1AE2FCu;
    {
        const bool branch_taken_0x1ae2fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae2fc) {
            ctx->pc = 0x1AE320u;
            goto label_1ae320;
        }
    }
    ctx->pc = 0x1AE304u;
    // 0x1ae304: 0xc6400028
    ctx->pc = 0x1ae304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae308: 0xe7a00110
    ctx->pc = 0x1ae308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ae30c: 0xe7a00100
    ctx->pc = 0x1ae30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1ae310: 0xc6400020
    ctx->pc = 0x1ae310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae314: 0xe7a00130
    ctx->pc = 0x1ae314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1ae318: 0x10000007
    ctx->pc = 0x1AE318u;
    {
        const bool branch_taken_0x1ae318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE31Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        if (branch_taken_0x1ae318) {
            ctx->pc = 0x1AE338u;
            goto label_1ae338;
        }
    }
    ctx->pc = 0x1AE320u;
label_1ae320:
    // 0x1ae320: 0xc6400020
    ctx->pc = 0x1ae320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae324: 0xe7a00110
    ctx->pc = 0x1ae324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ae328: 0xe7a00100
    ctx->pc = 0x1ae328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1ae32c: 0xc6400028
    ctx->pc = 0x1ae32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae330: 0xe7a00130
    ctx->pc = 0x1ae330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1ae334: 0xe7a00120
    ctx->pc = 0x1ae334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1ae338:
    // 0x1ae338: 0x8e42003c
    ctx->pc = 0x1ae338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ae33c: 0x30420020
    ctx->pc = 0x1ae33cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x1ae340: 0x1040000d
    ctx->pc = 0x1AE340u;
    {
        const bool branch_taken_0x1ae340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae340) {
            ctx->pc = 0x1AE378u;
            goto label_1ae378;
        }
    }
    ctx->pc = 0x1AE348u;
    // 0x1ae348: 0xc640002c
    ctx->pc = 0x1ae348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae34c: 0x3c023f80
    ctx->pc = 0x1ae34cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ae350: 0x44820800
    ctx->pc = 0x1ae350u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1ae354: 0x0
    ctx->pc = 0x1ae354u;
    // NOP
    // 0x1ae358: 0x46000801
    ctx->pc = 0x1ae358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae35c: 0xe7a00124
    ctx->pc = 0x1ae35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1ae360: 0xe7a00104
    ctx->pc = 0x1ae360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1ae364: 0xc6400024
    ctx->pc = 0x1ae364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae368: 0x46000801
    ctx->pc = 0x1ae368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae36c: 0xe7a00134
    ctx->pc = 0x1ae36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1ae370: 0x1000000c
    ctx->pc = 0x1AE370u;
    {
        const bool branch_taken_0x1ae370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE374u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        if (branch_taken_0x1ae370) {
            ctx->pc = 0x1AE3A4u;
            goto label_1ae3a4;
        }
    }
    ctx->pc = 0x1AE378u;
label_1ae378:
    // 0x1ae378: 0xc6400024
    ctx->pc = 0x1ae378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae37c: 0x3c023f80
    ctx->pc = 0x1ae37cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ae380: 0x44820800
    ctx->pc = 0x1ae380u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1ae384: 0x0
    ctx->pc = 0x1ae384u;
    // NOP
    // 0x1ae388: 0x46000801
    ctx->pc = 0x1ae388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae38c: 0xe7a00124
    ctx->pc = 0x1ae38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1ae390: 0xe7a00104
    ctx->pc = 0x1ae390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1ae394: 0xc640002c
    ctx->pc = 0x1ae394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae398: 0x46000801
    ctx->pc = 0x1ae398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ae39c: 0xe7a00134
    ctx->pc = 0x1ae39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1ae3a0: 0xe7a00114
    ctx->pc = 0x1ae3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1ae3a4:
    // 0x1ae3a4: 0x3c023f80
    ctx->pc = 0x1ae3a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ae3a8: 0xafa20138
    ctx->pc = 0x1ae3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1ae3ac: 0xafa20128
    ctx->pc = 0x1ae3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1ae3b0: 0xafa20118
    ctx->pc = 0x1ae3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x1ae3b4: 0xafa20108
    ctx->pc = 0x1ae3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x1ae3b8: 0x3c020026
    ctx->pc = 0x1ae3b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ae3bc: 0x2455f700
    ctx->pc = 0x1ae3bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1ae3c0: 0xafa0013c
    ctx->pc = 0x1ae3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x1ae3c4: 0x2602ffff
    ctx->pc = 0x1ae3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ae3c8: 0x2183c
    ctx->pc = 0x1ae3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae3cc: 0xafa0012c
    ctx->pc = 0x1ae3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x1ae3d0: 0xafa0011c
    ctx->pc = 0x1ae3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x1ae3d4: 0x3183f
    ctx->pc = 0x1ae3d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ae3d8: 0x3c021000
    ctx->pc = 0x1ae3d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1ae3dc: 0xafa0010c
    ctx->pc = 0x1ae3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x1ae3e0: 0x621025
    ctx->pc = 0x1ae3e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae3e4: 0xfea20000
    ctx->pc = 0x1ae3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1ae3e8: 0x3c025100
    ctx->pc = 0x1ae3e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20736 << 16));
    // 0x1ae3ec: 0x621025
    ctx->pc = 0x1ae3ecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae3f0: 0x2103c
    ctx->pc = 0x1ae3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae3f4: 0x12800008
    ctx->pc = 0x1AE3F4u;
    {
        const bool branch_taken_0x1ae3f4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE3F8u;
        WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
        if (branch_taken_0x1ae3f4) {
            ctx->pc = 0x1AE418u;
            goto label_1ae418;
        }
    }
    ctx->pc = 0x1AE3FCu;
    // 0x1ae3fc: 0x3c02c00b
    ctx->pc = 0x1ae3fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49163 << 16));
    // 0x1ae400: 0x34424000
    ctx->pc = 0x1ae400u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x1ae404: 0x2183c
    ctx->pc = 0x1ae404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae408: 0x34028001
    ctx->pc = 0x1ae408u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1ae40c: 0x431025
    ctx->pc = 0x1ae40cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae410: 0x10000007
    ctx->pc = 0x1AE410u;
    {
        const bool branch_taken_0x1ae410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE414u;
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x1ae410) {
            ctx->pc = 0x1AE430u;
            goto label_1ae430;
        }
    }
    ctx->pc = 0x1AE418u;
label_1ae418:
    // 0x1ae418: 0x3c02000a
    ctx->pc = 0x1ae418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)10 << 16));
    // 0x1ae41c: 0x34424000
    ctx->pc = 0x1ae41cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x1ae420: 0x2183c
    ctx->pc = 0x1ae420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae424: 0x34028001
    ctx->pc = 0x1ae424u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32769));
    // 0x1ae428: 0x431025
    ctx->pc = 0x1ae428u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae42c: 0xfea20010
    ctx->pc = 0x1ae42cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
label_1ae430:
    // 0x1ae430: 0x12c00008
    ctx->pc = 0x1AE430u;
    {
        const bool branch_taken_0x1ae430 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE434u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65503 << 16));
        if (branch_taken_0x1ae430) {
            ctx->pc = 0x1AE454u;
            goto label_1ae454;
        }
    }
    ctx->pc = 0x1AE438u;
    // 0x1ae438: 0xdea30010
    ctx->pc = 0x1ae438u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1ae43c: 0x3c020020
    ctx->pc = 0x1ae43cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x1ae440: 0x2103c
    ctx->pc = 0x1ae440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae444: 0x621025
    ctx->pc = 0x1ae444u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae448: 0x1000000b
    ctx->pc = 0x1AE448u;
    {
        const bool branch_taken_0x1ae448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE44Cu;
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x1ae448) {
            ctx->pc = 0x1AE478u;
            goto label_1ae478;
        }
    }
    ctx->pc = 0x1AE450u;
    // 0x1ae450: 0x3c02ffdf
    ctx->pc = 0x1ae450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65503 << 16));
label_1ae454:
    // 0x1ae454: 0x3442ffff
    ctx->pc = 0x1ae454u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1ae458: 0x2183c
    ctx->pc = 0x1ae458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae45c: 0x3402ffff
    ctx->pc = 0x1ae45cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ae460: 0x21438
    ctx->pc = 0x1ae460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae464: 0x3442ffff
    ctx->pc = 0x1ae464u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1ae468: 0xdea40010
    ctx->pc = 0x1ae468u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1ae46c: 0x431025
    ctx->pc = 0x1ae46cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae470: 0x821024
    ctx->pc = 0x1ae470u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ae474: 0xfea20010
    ctx->pc = 0x1ae474u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
label_1ae478:
    // 0x1ae478: 0x8e42003c
    ctx->pc = 0x1ae478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ae47c: 0x30428000
    ctx->pc = 0x1ae47cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x1ae480: 0x10400005
    ctx->pc = 0x1AE480u;
    {
        const bool branch_taken_0x1ae480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE484u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
        if (branch_taken_0x1ae480) {
            ctx->pc = 0x1AE498u;
            goto label_1ae498;
        }
    }
    ctx->pc = 0x1AE488u;
    // 0x1ae488: 0x24020048
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ae48c: 0x10000003
    ctx->pc = 0x1AE48Cu;
    {
        const bool branch_taken_0x1ae48c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE490u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x1ae48c) {
            ctx->pc = 0x1AE49Cu;
            goto label_1ae49c;
        }
    }
    ctx->pc = 0x1AE494u;
    // 0x1ae494: 0x24020044
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 68));
label_1ae498:
    // 0x1ae498: 0xaea20020
    ctx->pc = 0x1ae498u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
label_1ae49c:
    // 0x1ae49c: 0x8e43003c
    ctx->pc = 0x1ae49cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ae4a0: 0x3c020001
    ctx->pc = 0x1ae4a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1ae4a4: 0x621024
    ctx->pc = 0x1ae4a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae4a8: 0x10400004
    ctx->pc = 0x1AE4A8u;
    {
        const bool branch_taken_0x1ae4a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae4a8) {
            ctx->pc = 0x1AE4BCu;
            goto label_1ae4bc;
        }
    }
    ctx->pc = 0x1AE4B0u;
    // 0x1ae4b0: 0x24020001
    ctx->pc = 0x1ae4b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae4b4: 0x10000002
    ctx->pc = 0x1AE4B4u;
    {
        const bool branch_taken_0x1ae4b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE4B8u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x1ae4b4) {
            ctx->pc = 0x1AE4C0u;
            goto label_1ae4c0;
        }
    }
    ctx->pc = 0x1AE4BCu;
label_1ae4bc:
    // 0x1ae4bc: 0xaea00030
    ctx->pc = 0x1ae4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 0));
label_1ae4c0:
    // 0x1ae4c0: 0x8e42003c
    ctx->pc = 0x1ae4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ae4c4: 0x30420300
    ctx->pc = 0x1ae4c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 768));
    // 0x1ae4c8: 0x10400013
    ctx->pc = 0x1AE4C8u;
    {
        const bool branch_taken_0x1ae4c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae4c8) {
            ctx->pc = 0x1AE518u;
            goto label_1ae518;
        }
    }
    ctx->pc = 0x1AE4D0u;
    // 0x1ae4d0: 0x2402ffff
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae4d4: 0x2183c
    ctx->pc = 0x1ae4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae4d8: 0x3402fff9
    ctx->pc = 0x1ae4d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65529));
    // 0x1ae4dc: 0x21438
    ctx->pc = 0x1ae4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae4e0: 0x3442ffff
    ctx->pc = 0x1ae4e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1ae4e4: 0xdea40050
    ctx->pc = 0x1ae4e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1ae4e8: 0x431025
    ctx->pc = 0x1ae4e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae4ec: 0x821024
    ctx->pc = 0x1ae4ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ae4f0: 0xfea20050
    ctx->pc = 0x1ae4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 2));
    // 0x1ae4f4: 0x8e43003c
    ctx->pc = 0x1ae4f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ae4f8: 0xdea20050
    ctx->pc = 0x1ae4f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1ae4fc: 0x30630300
    ctx->pc = 0x1ae4fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 768));
    // 0x1ae500: 0x3183c
    ctx->pc = 0x1ae500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae504: 0x3183f
    ctx->pc = 0x1ae504u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ae508: 0x31a78
    ctx->pc = 0x1ae508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x1ae50c: 0x431025
    ctx->pc = 0x1ae50cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae510: 0x10000005
    ctx->pc = 0x1AE510u;
    {
        const bool branch_taken_0x1ae510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE514u;
        WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 2));
        if (branch_taken_0x1ae510) {
            ctx->pc = 0x1AE528u;
            goto label_1ae528;
        }
    }
    ctx->pc = 0x1AE518u;
label_1ae518:
    // 0x1ae518: 0xdea30050
    ctx->pc = 0x1ae518u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1ae51c: 0x3c020006
    ctx->pc = 0x1ae51cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)6 << 16));
    // 0x1ae520: 0x621025
    ctx->pc = 0x1ae520u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae524: 0xfea20050
    ctx->pc = 0x1ae524u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 2));
label_1ae528:
    // 0x1ae528: 0x12200006
    ctx->pc = 0x1AE528u;
    {
        const bool branch_taken_0x1ae528 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE52Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ae528) {
            ctx->pc = 0x1AE544u;
            goto label_1ae544;
        }
    }
    ctx->pc = 0x1AE530u;
    // 0x1ae530: 0xdea20050
    ctx->pc = 0x1ae530u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1ae534: 0x34420001
    ctx->pc = 0x1ae534u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x1ae538: 0x1000000a
    ctx->pc = 0x1AE538u;
    {
        const bool branch_taken_0x1ae538 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE53Cu;
        WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 2));
        if (branch_taken_0x1ae538) {
            ctx->pc = 0x1AE564u;
            goto label_1ae564;
        }
    }
    ctx->pc = 0x1AE540u;
    // 0x1ae540: 0x2402ffff
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae544:
    // 0x1ae544: 0x2183c
    ctx->pc = 0x1ae544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae548: 0x3402ffff
    ctx->pc = 0x1ae548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ae54c: 0x21438
    ctx->pc = 0x1ae54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae550: 0x3442fffe
    ctx->pc = 0x1ae550u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x1ae554: 0xdea40050
    ctx->pc = 0x1ae554u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1ae558: 0x431025
    ctx->pc = 0x1ae558u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae55c: 0x821024
    ctx->pc = 0x1ae55cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ae560: 0xfea20050
    ctx->pc = 0x1ae560u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 2));
label_1ae564:
    // 0x1ae564: 0x8e42003c
    ctx->pc = 0x1ae564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ae568: 0x30421000
    ctx->pc = 0x1ae568u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x1ae56c: 0x10400006
    ctx->pc = 0x1AE56Cu;
    {
        const bool branch_taken_0x1ae56c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE570u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ae56c) {
            ctx->pc = 0x1AE588u;
            goto label_1ae588;
        }
    }
    ctx->pc = 0x1AE574u;
    // 0x1ae574: 0xdea20070
    ctx->pc = 0x1ae574u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1ae578: 0x34420060
    ctx->pc = 0x1ae578u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 96));
    // 0x1ae57c: 0x1000000a
    ctx->pc = 0x1AE57Cu;
    {
        const bool branch_taken_0x1ae57c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE580u;
        WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 2));
        if (branch_taken_0x1ae57c) {
            ctx->pc = 0x1AE5A8u;
            goto label_1ae5a8;
        }
    }
    ctx->pc = 0x1AE584u;
    // 0x1ae584: 0x2402ffff
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae588:
    // 0x1ae588: 0x2183c
    ctx->pc = 0x1ae588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae58c: 0x3402ffff
    ctx->pc = 0x1ae58cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ae590: 0x21438
    ctx->pc = 0x1ae590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae594: 0x3442ff9f
    ctx->pc = 0x1ae594u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65439));
    // 0x1ae598: 0xdea40070
    ctx->pc = 0x1ae598u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1ae59c: 0x431025
    ctx->pc = 0x1ae59cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae5a0: 0x821024
    ctx->pc = 0x1ae5a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ae5a4: 0xfea20070
    ctx->pc = 0x1ae5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 2));
label_1ae5a8:
    // 0x1ae5a8: 0x27a20140
    ctx->pc = 0x1ae5a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ae5ac: 0x78440000
    ctx->pc = 0x1ae5acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae5b0: 0x27a30100
    ctx->pc = 0x1ae5b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ae5b4: 0x7ea40090
    ctx->pc = 0x1ae5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 144), GPR_VEC(ctx, 4));
    // 0x1ae5b8: 0xde440000
    ctx->pc = 0x1ae5b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ae5bc: 0x27a200a0
    ctx->pc = 0x1ae5bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ae5c0: 0xfea400a0
    ctx->pc = 0x1ae5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 160), GPR_U64(ctx, 4));
    // 0x1ae5c4: 0x78630000
    ctx->pc = 0x1ae5c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae5c8: 0x7ea30080
    ctx->pc = 0x1ae5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 128), GPR_VEC(ctx, 3));
    // 0x1ae5cc: 0x78420000
    ctx->pc = 0x1ae5ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae5d0: 0x12800008
    ctx->pc = 0x1AE5D0u;
    {
        const bool branch_taken_0x1ae5d0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE5D4u;
        WRITE128(ADD32(GPR_U32(ctx, 21), 176), GPR_VEC(ctx, 2));
        if (branch_taken_0x1ae5d0) {
            ctx->pc = 0x1AE5F4u;
            goto label_1ae5f4;
        }
    }
    ctx->pc = 0x1AE5D8u;
    // 0x1ae5d8: 0x27a20130
    ctx->pc = 0x1ae5d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ae5dc: 0x78430000
    ctx->pc = 0x1ae5dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae5e0: 0x27a200d0
    ctx->pc = 0x1ae5e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ae5e4: 0x7ea300c0
    ctx->pc = 0x1ae5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 192), GPR_VEC(ctx, 3));
    // 0x1ae5e8: 0x78420000
    ctx->pc = 0x1ae5e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae5ec: 0x10000013
    ctx->pc = 0x1AE5ECu;
    {
        const bool branch_taken_0x1ae5ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE5F0u;
        WRITE128(ADD32(GPR_U32(ctx, 21), 208), GPR_VEC(ctx, 2));
        if (branch_taken_0x1ae5ec) {
            ctx->pc = 0x1AE63Cu;
            goto label_1ae63c;
        }
    }
    ctx->pc = 0x1AE5F4u;
label_1ae5f4:
    // 0x1ae5f4: 0x27a20110
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ae5f8: 0x78470000
    ctx->pc = 0x1ae5f8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae5fc: 0x27a600b0
    ctx->pc = 0x1ae5fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ae600: 0x27a50120
    ctx->pc = 0x1ae600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ae604: 0x27a400c0
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ae608: 0x27a30130
    ctx->pc = 0x1ae608u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ae60c: 0x7ea700c0
    ctx->pc = 0x1ae60cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 192), GPR_VEC(ctx, 7));
    // 0x1ae610: 0x78c60000
    ctx->pc = 0x1ae610u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ae614: 0x27a200d0
    ctx->pc = 0x1ae614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ae618: 0x7ea600d0
    ctx->pc = 0x1ae618u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 208), GPR_VEC(ctx, 6));
    // 0x1ae61c: 0x78a50000
    ctx->pc = 0x1ae61cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae620: 0x7ea500e0
    ctx->pc = 0x1ae620u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 224), GPR_VEC(ctx, 5));
    // 0x1ae624: 0x78840000
    ctx->pc = 0x1ae624u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae628: 0x7ea400f0
    ctx->pc = 0x1ae628u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 240), GPR_VEC(ctx, 4));
    // 0x1ae62c: 0x78630000
    ctx->pc = 0x1ae62cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae630: 0x7ea30100
    ctx->pc = 0x1ae630u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 256), GPR_VEC(ctx, 3));
    // 0x1ae634: 0x78420000
    ctx->pc = 0x1ae634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae638: 0x7ea20110
    ctx->pc = 0x1ae638u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 272), GPR_VEC(ctx, 2));
label_1ae63c:
    // 0x1ae63c: 0xc069528
    ctx->pc = 0x1AE63Cu;
    SET_GPR_U32(ctx, 31, 0x1AE644u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE644u; }
        else if (ctx->pc != 0x1AE644u) { ctx->pc = 0x1AE644u; }
    }
    if (ctx->pc != 0x1AE644u) { return; }
    ctx->pc = 0x1AE644u;
    // 0x1ae644: 0x70408e28
    ctx->pc = 0x1ae644u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ae648:
    // 0x1ae648: 0x3c011001
    ctx->pc = 0x1ae648u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1ae64c: 0x8c22d000
    ctx->pc = 0x1ae64cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1ae650: 0x30420100
    ctx->pc = 0x1ae650u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1ae654: 0x0
    ctx->pc = 0x1ae654u;
    // NOP
    // 0x1ae658: 0x0
    ctx->pc = 0x1ae658u;
    // NOP
    // 0x1ae65c: 0x1440fffa
    ctx->pc = 0x1AE65Cu;
    {
        const bool branch_taken_0x1ae65c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ae65c) {
            ctx->pc = 0x1AE648u;
            goto label_1ae648;
        }
    }
    ctx->pc = 0x1AE664u;
    // 0x1ae664: 0x7e200000
    ctx->pc = 0x1ae664u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 0));
    // 0x1ae668: 0x3c021000
    ctx->pc = 0x1ae668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1ae66c: 0xae220000
    ctx->pc = 0x1ae66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ae670: 0x7000a628
    ctx->pc = 0x1ae670u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ae674: 0xae22000c
    ctx->pc = 0x1ae674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1ae678: 0x26310010
    ctx->pc = 0x1ae678u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ae67c: 0x12e00009
    ctx->pc = 0x1AE67Cu;
    {
        const bool branch_taken_0x1ae67c = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE680u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x1ae67c) {
            ctx->pc = 0x1AE6A4u;
            goto label_1ae6a4;
        }
    }
    ctx->pc = 0x1AE684u;
    // 0x1ae684: 0x8e420044
    ctx->pc = 0x1ae684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1ae688: 0x8e450008
    ctx->pc = 0x1ae688u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ae68c: 0x72202628
    ctx->pc = 0x1ae68cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ae690: 0xc06ba00
    ctx->pc = 0x1AE690u;
    SET_GPR_U32(ctx, 31, 0x1AE698u);
    ctx->pc = 0x1AE694u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1AE800u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlspr_set_texload_packet_0x1ae800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE698u; }
        else if (ctx->pc != 0x1AE698u) { ctx->pc = 0x1AE698u; }
    }
    if (ctx->pc != 0x1AE698u) { return; }
    ctx->pc = 0x1AE698u;
    // 0x1ae698: 0x21900
    ctx->pc = 0x1ae698u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ae69c: 0x2238821
    ctx->pc = 0x1ae69cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ae6a0: 0x282a021
    ctx->pc = 0x1ae6a0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ae6a4:
    // 0x1ae6a4: 0x72202628
    ctx->pc = 0x1ae6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ae6a8: 0x72a02e28
    ctx->pc = 0x1ae6a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ae6ac: 0xc06ac36
    ctx->pc = 0x1AE6ACu;
    SET_GPR_U32(ctx, 31, 0x1AE6B4u);
    ctx->pc = 0x1AE6B0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6B4u; }
        else if (ctx->pc != 0x1AE6B4u) { ctx->pc = 0x1AE6B4u; }
    }
    if (ctx->pc != 0x1AE6B4u) { return; }
    ctx->pc = 0x1AE6B4u;
    // 0x1ae6b4: 0x290a021
    ctx->pc = 0x1ae6b4u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1ae6b8: 0xc06952c
    ctx->pc = 0x1AE6B8u;
    SET_GPR_U32(ctx, 31, 0x1AE6C0u);
    ctx->pc = 0x1AE6BCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6C0u; }
        else if (ctx->pc != 0x1AE6C0u) { ctx->pc = 0x1AE6C0u; }
    }
    if (ctx->pc != 0x1AE6C0u) { return; }
    ctx->pc = 0x1AE6C0u;
    // 0x1ae6c0: 0x8e420044
    ctx->pc = 0x1ae6c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1ae6c4: 0x3c038000
    ctx->pc = 0x1ae6c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1ae6c8: 0x431024
    ctx->pc = 0x1ae6c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae6cc: 0x1040001e
    ctx->pc = 0x1AE6CCu;
    {
        const bool branch_taken_0x1ae6cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae6cc) {
            ctx->pc = 0x1AE748u;
            goto label_1ae748;
        }
    }
    ctx->pc = 0x1AE6D4u;
    // 0x1ae6d4: 0x3c024000
    ctx->pc = 0x1ae6d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1ae6d8: 0x2103c
    ctx->pc = 0x1ae6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae6dc: 0x2621024
    ctx->pc = 0x1ae6dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ae6e0: 0x1040000d
    ctx->pc = 0x1AE6E0u;
    {
        const bool branch_taken_0x1ae6e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE6E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)57343 << 16));
        if (branch_taken_0x1ae6e0) {
            ctx->pc = 0x1AE718u;
            goto label_1ae718;
        }
    }
    ctx->pc = 0x1AE6E8u;
    // 0x1ae6e8: 0x3103c
    ctx->pc = 0x1ae6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae6ec: 0x3c033fff
    ctx->pc = 0x1ae6ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16383 << 16));
    // 0x1ae6f0: 0x3463ffff
    ctx->pc = 0x1ae6f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1ae6f4: 0x3203c
    ctx->pc = 0x1ae6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae6f8: 0x3403ffff
    ctx->pc = 0x1ae6f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ae6fc: 0x31c38
    ctx->pc = 0x1ae6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ae700: 0x3463ffff
    ctx->pc = 0x1ae700u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1ae704: 0x641825
    ctx->pc = 0x1ae704u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae708: 0x2639824
    ctx->pc = 0x1ae708u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1ae70c: 0x10000009
    ctx->pc = 0x1AE70Cu;
    {
        const bool branch_taken_0x1ae70c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE710u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        if (branch_taken_0x1ae70c) {
            ctx->pc = 0x1AE734u;
            goto label_1ae734;
        }
    }
    ctx->pc = 0x1AE714u;
    // 0x1ae714: 0x3c02dfff
    ctx->pc = 0x1ae714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57343 << 16));
label_1ae718:
    // 0x1ae718: 0x3442ffff
    ctx->pc = 0x1ae718u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1ae71c: 0x2183c
    ctx->pc = 0x1ae71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae720: 0x3402ffff
    ctx->pc = 0x1ae720u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ae724: 0x21438
    ctx->pc = 0x1ae724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae728: 0x3442ffff
    ctx->pc = 0x1ae728u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1ae72c: 0x431025
    ctx->pc = 0x1ae72cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae730: 0x2629824
    ctx->pc = 0x1ae730u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1ae734:
    // 0x1ae734: 0xfe530000
    ctx->pc = 0x1ae734u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 19));
    // 0x1ae738: 0x8e420044
    ctx->pc = 0x1ae738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1ae73c: 0x2107c
    ctx->pc = 0x1ae73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x1ae740: 0x2107e
    ctx->pc = 0x1ae740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x1ae744: 0xae420044
    ctx->pc = 0x1ae744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_1ae748:
    // 0x1ae748: 0x7bbf0090
    ctx->pc = 0x1ae748u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae74c: 0x7bb70080
    ctx->pc = 0x1ae74cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae750: 0x7bb60070
    ctx->pc = 0x1ae750u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae754: 0x7bb50060
    ctx->pc = 0x1ae754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae758: 0x7bb40050
    ctx->pc = 0x1ae758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae75c: 0x7bb30040
    ctx->pc = 0x1ae75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae760: 0x7bb20030
    ctx->pc = 0x1ae760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae764: 0x7bb10020
    ctx->pc = 0x1ae764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae768: 0x7bb00010
    ctx->pc = 0x1ae768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae76c: 0xc7b7000c
    ctx->pc = 0x1ae76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ae770: 0xc7b60008
    ctx->pc = 0x1ae770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ae774: 0xc7b50004
    ctx->pc = 0x1ae774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ae778: 0xc7b40000
    ctx->pc = 0x1ae778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ae77c: 0x70001628
    ctx->pc = 0x1ae77cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ae780: 0x3e00008
    ctx->pc = 0x1AE780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE784u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADDA0u: goto label_1adda0;
            case 0x1ADDA8u: goto label_1adda8;
            case 0x1ADDE0u: goto label_1adde0;
            case 0x1ADDFCu: goto label_1addfc;
            case 0x1ADE90u: goto label_1ade90;
            case 0x1ADEECu: goto label_1adeec;
            case 0x1ADF24u: goto label_1adf24;
            case 0x1ADF28u: goto label_1adf28;
            case 0x1ADFACu: goto label_1adfac;
            case 0x1ADFD4u: goto label_1adfd4;
            case 0x1ADFDCu: goto label_1adfdc;
            case 0x1ADFE0u: goto label_1adfe0;
            case 0x1AE00Cu: goto label_1ae00c;
            case 0x1AE038u: goto label_1ae038;
            case 0x1AE03Cu: goto label_1ae03c;
            case 0x1AE040u: goto label_1ae040;
            case 0x1AE108u: goto label_1ae108;
            case 0x1AE168u: goto label_1ae168;
            case 0x1AE258u: goto label_1ae258;
            case 0x1AE268u: goto label_1ae268;
            case 0x1AE320u: goto label_1ae320;
            case 0x1AE338u: goto label_1ae338;
            case 0x1AE378u: goto label_1ae378;
            case 0x1AE3A4u: goto label_1ae3a4;
            case 0x1AE418u: goto label_1ae418;
            case 0x1AE430u: goto label_1ae430;
            case 0x1AE454u: goto label_1ae454;
            case 0x1AE478u: goto label_1ae478;
            case 0x1AE498u: goto label_1ae498;
            case 0x1AE49Cu: goto label_1ae49c;
            case 0x1AE4BCu: goto label_1ae4bc;
            case 0x1AE4C0u: goto label_1ae4c0;
            case 0x1AE518u: goto label_1ae518;
            case 0x1AE528u: goto label_1ae528;
            case 0x1AE544u: goto label_1ae544;
            case 0x1AE564u: goto label_1ae564;
            case 0x1AE588u: goto label_1ae588;
            case 0x1AE5A8u: goto label_1ae5a8;
            case 0x1AE5F4u: goto label_1ae5f4;
            case 0x1AE63Cu: goto label_1ae63c;
            case 0x1AE648u: goto label_1ae648;
            case 0x1AE6A4u: goto label_1ae6a4;
            case 0x1AE718u: goto label_1ae718;
            case 0x1AE734u: goto label_1ae734;
            case 0x1AE748u: goto label_1ae748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE788u;
}
