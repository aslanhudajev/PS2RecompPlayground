#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shapeAnimVampFace__10PeopleTaskFiP13PPL_FANI_DATA
// Address: 0x20bcf0 - 0x20be58
void shapeAnimVampFace__10PeopleTaskFiP13PPL_FANI_DATA_0x20bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shapeAnimVampFace__10PeopleTaskFiP13PPL_FANI_DATA");


    ctx->pc = 0x20bcf0u;

    // 0x20bcf0: 0x27bdffd0
    ctx->pc = 0x20bcf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20bcf4: 0x7fbf0010
    ctx->pc = 0x20bcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20bcf8: 0x7fb00000
    ctx->pc = 0x20bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20bcfc: 0x84c30008
    ctx->pc = 0x20bcfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20bd00: 0x10600051
    ctx->pc = 0x20BD00u;
    {
        const bool branch_taken_0x20bd00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD04u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bd00) {
            ctx->pc = 0x20BE48u;
            goto label_20be48;
        }
    }
    ctx->pc = 0x20BD08u;
    // 0x20bd08: 0xc6000004
    ctx->pc = 0x20bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bd0c: 0x44800800
    ctx->pc = 0x20bd0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x20bd10: 0x0
    ctx->pc = 0x20bd10u;
    // NOP
    // 0x20bd14: 0x46010036
    ctx->pc = 0x20bd14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bd18: 0x0
    ctx->pc = 0x20bd18u;
    // NOP
    // 0x20bd1c: 0x4501001d
    ctx->pc = 0x20BD1Cu;
    {
        const bool branch_taken_0x20bd1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bd1c) {
            ctx->pc = 0x20BD94u;
            goto label_20bd94;
        }
    }
    ctx->pc = 0x20BD24u;
    // 0x20bd24: 0xafa00020
    ctx->pc = 0x20bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x20bd28: 0x24020001
    ctx->pc = 0x20bd28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bd2c: 0xafa20024
    ctx->pc = 0x20bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20bd30: 0x2402ffff
    ctx->pc = 0x20bd30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bd34: 0xafa20028
    ctx->pc = 0x20bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20bd38: 0x8e060000
    ctx->pc = 0x20bd38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bd3c: 0xc60c0004
    ctx->pc = 0x20bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20bd40: 0xc082e3c
    ctx->pc = 0x20BD40u;
    SET_GPR_U32(ctx, 31, 0x20BD48u);
    ctx->pc = 0x20BD44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BD48u; }
        else if (ctx->pc != 0x20BD48u) { ctx->pc = 0x20BD48u; }
    }
    if (ctx->pc != 0x20BD48u) { return; }
    ctx->pc = 0x20BD48u;
    // 0x20bd48: 0x86040008
    ctx->pc = 0x20bd48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bd4c: 0x24030001
    ctx->pc = 0x20bd4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bd50: 0x14830030
    ctx->pc = 0x20BD50u;
    {
        const bool branch_taken_0x20bd50 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BD54u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bd50) {
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BD58u;
    // 0x20bd58: 0x8604000a
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20bd5c: 0x2403ffff
    ctx->pc = 0x20bd5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bd60: 0x1083002c
    ctx->pc = 0x20BD60u;
    {
        const bool branch_taken_0x20bd60 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20bd60) {
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BD68u;
    // 0x20bd68: 0x8e030000
    ctx->pc = 0x20bd68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bd6c: 0x42080
    ctx->pc = 0x20bd6cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bd70: 0xc600000c
    ctx->pc = 0x20bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bd74: 0x641821
    ctx->pc = 0x20bd74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bd78: 0xc4610000
    ctx->pc = 0x20bd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bd7c: 0x46000834
    ctx->pc = 0x20bd7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bd80: 0x0
    ctx->pc = 0x20bd80u;
    // NOP
    // 0x20bd84: 0x45010023
    ctx->pc = 0x20BD84u;
    {
        const bool branch_taken_0x20bd84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bd84) {
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BD8Cu;
    // 0x20bd8c: 0x10000021
    ctx->pc = 0x20BD8Cu;
    {
        const bool branch_taken_0x20bd8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BD90u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20bd8c) {
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BD94u;
label_20bd94:
    // 0x20bd94: 0x46010034
    ctx->pc = 0x20bd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bd98: 0x0
    ctx->pc = 0x20bd98u;
    // NOP
    // 0x20bd9c: 0x4502001d
    ctx->pc = 0x20BD9Cu;
    {
        const bool branch_taken_0x20bd9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bd9c) {
            ctx->pc = 0x20BDA0u;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BDA4u;
    // 0x20bda4: 0x24020001
    ctx->pc = 0x20bda4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bda8: 0xafa20020
    ctx->pc = 0x20bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20bdac: 0xafa00024
    ctx->pc = 0x20bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x20bdb0: 0x2402ffff
    ctx->pc = 0x20bdb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bdb4: 0xafa20028
    ctx->pc = 0x20bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20bdb8: 0xc6000004
    ctx->pc = 0x20bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bdbc: 0x8e060000
    ctx->pc = 0x20bdbcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bdc0: 0x27a70020
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20bdc4: 0xc082e3c
    ctx->pc = 0x20BDC4u;
    SET_GPR_U32(ctx, 31, 0x20BDCCu);
    ctx->pc = 0x20BDC8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BDCCu; }
        else if (ctx->pc != 0x20BDCCu) { ctx->pc = 0x20BDCCu; }
    }
    if (ctx->pc != 0x20BDCCu) { return; }
    ctx->pc = 0x20BDCCu;
    // 0x20bdcc: 0x86040008
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bdd0: 0x24030001
    ctx->pc = 0x20bdd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bdd4: 0x1483000f
    ctx->pc = 0x20BDD4u;
    {
        const bool branch_taken_0x20bdd4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BDD8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bdd4) {
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BDDCu;
    // 0x20bddc: 0x8604000a
    ctx->pc = 0x20bddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20bde0: 0x2403ffff
    ctx->pc = 0x20bde0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bde4: 0x1083000b
    ctx->pc = 0x20BDE4u;
    {
        const bool branch_taken_0x20bde4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20bde4) {
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BDECu;
    // 0x20bdec: 0x8e030000
    ctx->pc = 0x20bdecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bdf0: 0x42080
    ctx->pc = 0x20bdf0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bdf4: 0xc600000c
    ctx->pc = 0x20bdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bdf8: 0x641821
    ctx->pc = 0x20bdf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bdfc: 0xc4610000
    ctx->pc = 0x20bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20be00: 0x46000834
    ctx->pc = 0x20be00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20be04: 0x0
    ctx->pc = 0x20be04u;
    // NOP
    // 0x20be08: 0x45010002
    ctx->pc = 0x20BE08u;
    {
        const bool branch_taken_0x20be08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20be08) {
            ctx->pc = 0x20BE14u;
            goto label_20be14;
        }
    }
    ctx->pc = 0x20BE10u;
    // 0x20be10: 0xa6000008
    ctx->pc = 0x20be10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
label_20be14:
    // 0x20be14: 0x10a0000c
    ctx->pc = 0x20BE14u;
    {
        const bool branch_taken_0x20be14 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20be14) {
            ctx->pc = 0x20BE48u;
            goto label_20be48;
        }
    }
    ctx->pc = 0x20BE1Cu;
    // 0x20be1c: 0xc6000004
    ctx->pc = 0x20be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20be20: 0x3c03bf80
    ctx->pc = 0x20be20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x20be24: 0x44830800
    ctx->pc = 0x20be24u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20be28: 0x0
    ctx->pc = 0x20be28u;
    // NOP
    // 0x20be2c: 0x46010002
    ctx->pc = 0x20be2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20be30: 0xe6000004
    ctx->pc = 0x20be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20be34: 0x86030008
    ctx->pc = 0x20be34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20be38: 0x18600003
    ctx->pc = 0x20BE38u;
    {
        const bool branch_taken_0x20be38 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x20be38) {
            ctx->pc = 0x20BE48u;
            goto label_20be48;
        }
    }
    ctx->pc = 0x20BE40u;
    // 0x20be40: 0x2463ffff
    ctx->pc = 0x20be40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20be44: 0xa6030008
    ctx->pc = 0x20be44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_20be48:
    // 0x20be48: 0x7bbf0010
    ctx->pc = 0x20be48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20be4c: 0x7bb00000
    ctx->pc = 0x20be4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20be50: 0x3e00008
    ctx->pc = 0x20BE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BE54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BD94u: goto label_20bd94;
            case 0x20BE14u: goto label_20be14;
            case 0x20BE48u: goto label_20be48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20BE58u;
}
