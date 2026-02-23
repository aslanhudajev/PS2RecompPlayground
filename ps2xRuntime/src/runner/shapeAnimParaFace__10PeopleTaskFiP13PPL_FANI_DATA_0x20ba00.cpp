#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shapeAnimParaFace__10PeopleTaskFiP13PPL_FANI_DATA
// Address: 0x20ba00 - 0x20bb68
void shapeAnimParaFace__10PeopleTaskFiP13PPL_FANI_DATA_0x20ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shapeAnimParaFace__10PeopleTaskFiP13PPL_FANI_DATA");


    ctx->pc = 0x20ba00u;

    // 0x20ba00: 0x27bdffd0
    ctx->pc = 0x20ba00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ba04: 0x7fbf0010
    ctx->pc = 0x20ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20ba08: 0x7fb00000
    ctx->pc = 0x20ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ba0c: 0x84c30008
    ctx->pc = 0x20ba0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20ba10: 0x10600051
    ctx->pc = 0x20BA10u;
    {
        const bool branch_taken_0x20ba10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BA14u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ba10) {
            ctx->pc = 0x20BB58u;
            goto label_20bb58;
        }
    }
    ctx->pc = 0x20BA18u;
    // 0x20ba18: 0xc6000004
    ctx->pc = 0x20ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ba1c: 0x44800800
    ctx->pc = 0x20ba1cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x20ba20: 0x0
    ctx->pc = 0x20ba20u;
    // NOP
    // 0x20ba24: 0x46010036
    ctx->pc = 0x20ba24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ba28: 0x0
    ctx->pc = 0x20ba28u;
    // NOP
    // 0x20ba2c: 0x4501001d
    ctx->pc = 0x20BA2Cu;
    {
        const bool branch_taken_0x20ba2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba2c) {
            ctx->pc = 0x20BAA4u;
            goto label_20baa4;
        }
    }
    ctx->pc = 0x20BA34u;
    // 0x20ba34: 0x24020001
    ctx->pc = 0x20ba34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba38: 0xafa20020
    ctx->pc = 0x20ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20ba3c: 0xafa00024
    ctx->pc = 0x20ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x20ba40: 0x2402ffff
    ctx->pc = 0x20ba40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ba44: 0xafa20028
    ctx->pc = 0x20ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20ba48: 0x8e060000
    ctx->pc = 0x20ba48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ba4c: 0xc60c0004
    ctx->pc = 0x20ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ba50: 0xc082e3c
    ctx->pc = 0x20BA50u;
    SET_GPR_U32(ctx, 31, 0x20BA58u);
    ctx->pc = 0x20BA54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BA58u; }
        else if (ctx->pc != 0x20BA58u) { ctx->pc = 0x20BA58u; }
    }
    if (ctx->pc != 0x20BA58u) { return; }
    ctx->pc = 0x20BA58u;
    // 0x20ba58: 0x86040008
    ctx->pc = 0x20ba58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20ba5c: 0x24030001
    ctx->pc = 0x20ba5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba60: 0x14830030
    ctx->pc = 0x20BA60u;
    {
        const bool branch_taken_0x20ba60 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BA64u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ba60) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BA68u;
    // 0x20ba68: 0x8604000a
    ctx->pc = 0x20ba68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20ba6c: 0x2403ffff
    ctx->pc = 0x20ba6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ba70: 0x1083002c
    ctx->pc = 0x20BA70u;
    {
        const bool branch_taken_0x20ba70 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ba70) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BA78u;
    // 0x20ba78: 0x8e030000
    ctx->pc = 0x20ba78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ba7c: 0x42080
    ctx->pc = 0x20ba7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ba80: 0xc600000c
    ctx->pc = 0x20ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ba84: 0x641821
    ctx->pc = 0x20ba84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ba88: 0xc4610000
    ctx->pc = 0x20ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ba8c: 0x46000834
    ctx->pc = 0x20ba8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ba90: 0x0
    ctx->pc = 0x20ba90u;
    // NOP
    // 0x20ba94: 0x45010023
    ctx->pc = 0x20BA94u;
    {
        const bool branch_taken_0x20ba94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ba94) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BA9Cu;
    // 0x20ba9c: 0x10000021
    ctx->pc = 0x20BA9Cu;
    {
        const bool branch_taken_0x20ba9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BAA0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20ba9c) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BAA4u;
label_20baa4:
    // 0x20baa4: 0x46010034
    ctx->pc = 0x20baa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20baa8: 0x0
    ctx->pc = 0x20baa8u;
    // NOP
    // 0x20baac: 0x4502001d
    ctx->pc = 0x20BAACu;
    {
        const bool branch_taken_0x20baac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20baac) {
            ctx->pc = 0x20BAB0u;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BAB4u;
    // 0x20bab4: 0xafa00020
    ctx->pc = 0x20bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x20bab8: 0x24020001
    ctx->pc = 0x20bab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20babc: 0xafa20024
    ctx->pc = 0x20babcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20bac0: 0x2402ffff
    ctx->pc = 0x20bac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bac4: 0xafa20028
    ctx->pc = 0x20bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20bac8: 0xc6000004
    ctx->pc = 0x20bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bacc: 0x8e060000
    ctx->pc = 0x20baccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bad0: 0x27a70020
    ctx->pc = 0x20bad0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20bad4: 0xc082e3c
    ctx->pc = 0x20BAD4u;
    SET_GPR_U32(ctx, 31, 0x20BADCu);
    ctx->pc = 0x20BAD8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BADCu; }
        else if (ctx->pc != 0x20BADCu) { ctx->pc = 0x20BADCu; }
    }
    if (ctx->pc != 0x20BADCu) { return; }
    ctx->pc = 0x20BADCu;
    // 0x20badc: 0x86040008
    ctx->pc = 0x20badcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bae0: 0x24030001
    ctx->pc = 0x20bae0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bae4: 0x1483000f
    ctx->pc = 0x20BAE4u;
    {
        const bool branch_taken_0x20bae4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BAE8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bae4) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BAECu;
    // 0x20baec: 0x8604000a
    ctx->pc = 0x20baecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20baf0: 0x2403ffff
    ctx->pc = 0x20baf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20baf4: 0x1083000b
    ctx->pc = 0x20BAF4u;
    {
        const bool branch_taken_0x20baf4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20baf4) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BAFCu;
    // 0x20bafc: 0x8e030000
    ctx->pc = 0x20bafcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bb00: 0x42080
    ctx->pc = 0x20bb00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bb04: 0xc600000c
    ctx->pc = 0x20bb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bb08: 0x641821
    ctx->pc = 0x20bb08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bb0c: 0xc4610000
    ctx->pc = 0x20bb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bb10: 0x46000834
    ctx->pc = 0x20bb10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bb14: 0x0
    ctx->pc = 0x20bb14u;
    // NOP
    // 0x20bb18: 0x45010002
    ctx->pc = 0x20BB18u;
    {
        const bool branch_taken_0x20bb18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb18) {
            ctx->pc = 0x20BB24u;
            goto label_20bb24;
        }
    }
    ctx->pc = 0x20BB20u;
    // 0x20bb20: 0xa6000008
    ctx->pc = 0x20bb20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
label_20bb24:
    // 0x20bb24: 0x10a0000c
    ctx->pc = 0x20BB24u;
    {
        const bool branch_taken_0x20bb24 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20bb24) {
            ctx->pc = 0x20BB58u;
            goto label_20bb58;
        }
    }
    ctx->pc = 0x20BB2Cu;
    // 0x20bb2c: 0xc6000004
    ctx->pc = 0x20bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bb30: 0x3c03bf80
    ctx->pc = 0x20bb30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x20bb34: 0x44830800
    ctx->pc = 0x20bb34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20bb38: 0x0
    ctx->pc = 0x20bb38u;
    // NOP
    // 0x20bb3c: 0x46010002
    ctx->pc = 0x20bb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bb40: 0xe6000004
    ctx->pc = 0x20bb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20bb44: 0x86030008
    ctx->pc = 0x20bb44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bb48: 0x18600003
    ctx->pc = 0x20BB48u;
    {
        const bool branch_taken_0x20bb48 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x20bb48) {
            ctx->pc = 0x20BB58u;
            goto label_20bb58;
        }
    }
    ctx->pc = 0x20BB50u;
    // 0x20bb50: 0x2463ffff
    ctx->pc = 0x20bb50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20bb54: 0xa6030008
    ctx->pc = 0x20bb54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_20bb58:
    // 0x20bb58: 0x7bbf0010
    ctx->pc = 0x20bb58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20bb5c: 0x7bb00000
    ctx->pc = 0x20bb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bb60: 0x3e00008
    ctx->pc = 0x20BB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BB64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BAA4u: goto label_20baa4;
            case 0x20BB24u: goto label_20bb24;
            case 0x20BB58u: goto label_20bb58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20BB68u;
}
