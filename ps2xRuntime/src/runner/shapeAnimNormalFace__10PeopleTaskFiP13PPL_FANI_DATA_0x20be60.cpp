#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shapeAnimNormalFace__10PeopleTaskFiP13PPL_FANI_DATA
// Address: 0x20be60 - 0x20bfd0
void shapeAnimNormalFace__10PeopleTaskFiP13PPL_FANI_DATA_0x20be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shapeAnimNormalFace__10PeopleTaskFiP13PPL_FANI_DATA");


    ctx->pc = 0x20be60u;

    // 0x20be60: 0x27bdffd0
    ctx->pc = 0x20be60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20be64: 0x7fbf0010
    ctx->pc = 0x20be64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20be68: 0x7fb00000
    ctx->pc = 0x20be68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20be6c: 0x84c30008
    ctx->pc = 0x20be6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20be70: 0x10600053
    ctx->pc = 0x20BE70u;
    {
        const bool branch_taken_0x20be70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BE74u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20be70) {
            ctx->pc = 0x20BFC0u;
            goto label_20bfc0;
        }
    }
    ctx->pc = 0x20BE78u;
    // 0x20be78: 0xc6000004
    ctx->pc = 0x20be78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20be7c: 0x44800800
    ctx->pc = 0x20be7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x20be80: 0x0
    ctx->pc = 0x20be80u;
    // NOP
    // 0x20be84: 0x46010036
    ctx->pc = 0x20be84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20be88: 0x0
    ctx->pc = 0x20be88u;
    // NOP
    // 0x20be8c: 0x4501001e
    ctx->pc = 0x20BE8Cu;
    {
        const bool branch_taken_0x20be8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20be8c) {
            ctx->pc = 0x20BF08u;
            goto label_20bf08;
        }
    }
    ctx->pc = 0x20BE94u;
    // 0x20be94: 0x24020003
    ctx->pc = 0x20be94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20be98: 0xafa20020
    ctx->pc = 0x20be98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20be9c: 0x24020002
    ctx->pc = 0x20be9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bea0: 0xafa20024
    ctx->pc = 0x20bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20bea4: 0x2402ffff
    ctx->pc = 0x20bea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bea8: 0xafa20028
    ctx->pc = 0x20bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20beac: 0x8e060000
    ctx->pc = 0x20beacu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20beb0: 0xc60c0004
    ctx->pc = 0x20beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20beb4: 0xc082e3c
    ctx->pc = 0x20BEB4u;
    SET_GPR_U32(ctx, 31, 0x20BEBCu);
    ctx->pc = 0x20BEB8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BEBCu; }
        else if (ctx->pc != 0x20BEBCu) { ctx->pc = 0x20BEBCu; }
    }
    if (ctx->pc != 0x20BEBCu) { return; }
    ctx->pc = 0x20BEBCu;
    // 0x20bebc: 0x86040008
    ctx->pc = 0x20bebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bec0: 0x24030001
    ctx->pc = 0x20bec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bec4: 0x14830031
    ctx->pc = 0x20BEC4u;
    {
        const bool branch_taken_0x20bec4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BEC8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bec4) {
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BECCu;
    // 0x20becc: 0x8604000a
    ctx->pc = 0x20beccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20bed0: 0x2403ffff
    ctx->pc = 0x20bed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bed4: 0x1083002d
    ctx->pc = 0x20BED4u;
    {
        const bool branch_taken_0x20bed4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20bed4) {
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BEDCu;
    // 0x20bedc: 0x8e030000
    ctx->pc = 0x20bedcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bee0: 0x42080
    ctx->pc = 0x20bee0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bee4: 0xc600000c
    ctx->pc = 0x20bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bee8: 0x641821
    ctx->pc = 0x20bee8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20beec: 0xc4610000
    ctx->pc = 0x20beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bef0: 0x46000834
    ctx->pc = 0x20bef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bef4: 0x0
    ctx->pc = 0x20bef4u;
    // NOP
    // 0x20bef8: 0x45010024
    ctx->pc = 0x20BEF8u;
    {
        const bool branch_taken_0x20bef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bef8) {
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BF00u;
    // 0x20bf00: 0x10000022
    ctx->pc = 0x20BF00u;
    {
        const bool branch_taken_0x20bf00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BF04u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20bf00) {
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BF08u;
label_20bf08:
    // 0x20bf08: 0x46010034
    ctx->pc = 0x20bf08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bf0c: 0x0
    ctx->pc = 0x20bf0cu;
    // NOP
    // 0x20bf10: 0x4502001e
    ctx->pc = 0x20BF10u;
    {
        const bool branch_taken_0x20bf10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bf10) {
            ctx->pc = 0x20BF14u;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BF18u;
    // 0x20bf18: 0x24020002
    ctx->pc = 0x20bf18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bf1c: 0xafa20020
    ctx->pc = 0x20bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20bf20: 0x24020003
    ctx->pc = 0x20bf20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20bf24: 0xafa20024
    ctx->pc = 0x20bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20bf28: 0x2402ffff
    ctx->pc = 0x20bf28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bf2c: 0xafa20028
    ctx->pc = 0x20bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20bf30: 0xc6000004
    ctx->pc = 0x20bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf34: 0x8e060000
    ctx->pc = 0x20bf34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bf38: 0x27a70020
    ctx->pc = 0x20bf38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20bf3c: 0xc082e3c
    ctx->pc = 0x20BF3Cu;
    SET_GPR_U32(ctx, 31, 0x20BF44u);
    ctx->pc = 0x20BF40u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BF44u; }
        else if (ctx->pc != 0x20BF44u) { ctx->pc = 0x20BF44u; }
    }
    if (ctx->pc != 0x20BF44u) { return; }
    ctx->pc = 0x20BF44u;
    // 0x20bf44: 0x86040008
    ctx->pc = 0x20bf44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bf48: 0x24030001
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bf4c: 0x1483000f
    ctx->pc = 0x20BF4Cu;
    {
        const bool branch_taken_0x20bf4c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BF50u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bf4c) {
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BF54u;
    // 0x20bf54: 0x8604000a
    ctx->pc = 0x20bf54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20bf58: 0x2403ffff
    ctx->pc = 0x20bf58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bf5c: 0x1083000b
    ctx->pc = 0x20BF5Cu;
    {
        const bool branch_taken_0x20bf5c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20bf5c) {
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BF64u;
    // 0x20bf64: 0x8e030000
    ctx->pc = 0x20bf64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bf68: 0x42080
    ctx->pc = 0x20bf68u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bf6c: 0xc600000c
    ctx->pc = 0x20bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf70: 0x641821
    ctx->pc = 0x20bf70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bf74: 0xc4610000
    ctx->pc = 0x20bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bf78: 0x46000834
    ctx->pc = 0x20bf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bf7c: 0x0
    ctx->pc = 0x20bf7cu;
    // NOP
    // 0x20bf80: 0x45010002
    ctx->pc = 0x20BF80u;
    {
        const bool branch_taken_0x20bf80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bf80) {
            ctx->pc = 0x20BF8Cu;
            goto label_20bf8c;
        }
    }
    ctx->pc = 0x20BF88u;
    // 0x20bf88: 0xa6000008
    ctx->pc = 0x20bf88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
label_20bf8c:
    // 0x20bf8c: 0x10a0000c
    ctx->pc = 0x20BF8Cu;
    {
        const bool branch_taken_0x20bf8c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20bf8c) {
            ctx->pc = 0x20BFC0u;
            goto label_20bfc0;
        }
    }
    ctx->pc = 0x20BF94u;
    // 0x20bf94: 0xc6000004
    ctx->pc = 0x20bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf98: 0x3c03bf80
    ctx->pc = 0x20bf98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x20bf9c: 0x44830800
    ctx->pc = 0x20bf9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20bfa0: 0x0
    ctx->pc = 0x20bfa0u;
    // NOP
    // 0x20bfa4: 0x46010002
    ctx->pc = 0x20bfa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bfa8: 0xe6000004
    ctx->pc = 0x20bfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20bfac: 0x86030008
    ctx->pc = 0x20bfacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bfb0: 0x18600003
    ctx->pc = 0x20BFB0u;
    {
        const bool branch_taken_0x20bfb0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x20bfb0) {
            ctx->pc = 0x20BFC0u;
            goto label_20bfc0;
        }
    }
    ctx->pc = 0x20BFB8u;
    // 0x20bfb8: 0x2463ffff
    ctx->pc = 0x20bfb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20bfbc: 0xa6030008
    ctx->pc = 0x20bfbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_20bfc0:
    // 0x20bfc0: 0x7bbf0010
    ctx->pc = 0x20bfc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20bfc4: 0x7bb00000
    ctx->pc = 0x20bfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bfc8: 0x3e00008
    ctx->pc = 0x20BFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BFCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BF08u: goto label_20bf08;
            case 0x20BF8Cu: goto label_20bf8c;
            case 0x20BFC0u: goto label_20bfc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20BFD0u;
}
