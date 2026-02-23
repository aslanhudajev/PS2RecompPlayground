#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shapeAnimNormalHand__10PeopleTaskFiP13PPL_FANI_DATA
// Address: 0x20bfd0 - 0x20c150
void shapeAnimNormalHand__10PeopleTaskFiP13PPL_FANI_DATA_0x20bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shapeAnimNormalHand__10PeopleTaskFiP13PPL_FANI_DATA");


    ctx->pc = 0x20bfd0u;

    // 0x20bfd0: 0x27bdffd0
    ctx->pc = 0x20bfd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20bfd4: 0x7fbf0010
    ctx->pc = 0x20bfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20bfd8: 0x7fb00000
    ctx->pc = 0x20bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20bfdc: 0x84c30008
    ctx->pc = 0x20bfdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20bfe0: 0x10600057
    ctx->pc = 0x20BFE0u;
    {
        const bool branch_taken_0x20bfe0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BFE4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bfe0) {
            ctx->pc = 0x20C140u;
            goto label_20c140;
        }
    }
    ctx->pc = 0x20BFE8u;
    // 0x20bfe8: 0xc6000004
    ctx->pc = 0x20bfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bfec: 0x44800800
    ctx->pc = 0x20bfecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x20bff0: 0x0
    ctx->pc = 0x20bff0u;
    // NOP
    // 0x20bff4: 0x46010036
    ctx->pc = 0x20bff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bff8: 0x0
    ctx->pc = 0x20bff8u;
    // NOP
    // 0x20bffc: 0x45010020
    ctx->pc = 0x20BFFCu;
    {
        const bool branch_taken_0x20bffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bffc) {
            ctx->pc = 0x20C080u;
            goto label_20c080;
        }
    }
    ctx->pc = 0x20C004u;
    // 0x20c004: 0x24020003
    ctx->pc = 0x20c004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20c008: 0xafa20020
    ctx->pc = 0x20c008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20c00c: 0x24020005
    ctx->pc = 0x20c00cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c010: 0xafa20024
    ctx->pc = 0x20c010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20c014: 0x24020004
    ctx->pc = 0x20c014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c018: 0xafa20028
    ctx->pc = 0x20c018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20c01c: 0x2402ffff
    ctx->pc = 0x20c01cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c020: 0xafa2002c
    ctx->pc = 0x20c020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20c024: 0x8e060000
    ctx->pc = 0x20c024u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c028: 0xc60c0004
    ctx->pc = 0x20c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c02c: 0xc082e3c
    ctx->pc = 0x20C02Cu;
    SET_GPR_U32(ctx, 31, 0x20C034u);
    ctx->pc = 0x20C030u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C034u; }
        else if (ctx->pc != 0x20C034u) { ctx->pc = 0x20C034u; }
    }
    if (ctx->pc != 0x20C034u) { return; }
    ctx->pc = 0x20C034u;
    // 0x20c034: 0x86040008
    ctx->pc = 0x20c034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20c038: 0x24030001
    ctx->pc = 0x20c038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c03c: 0x14830033
    ctx->pc = 0x20C03Cu;
    {
        const bool branch_taken_0x20c03c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C040u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20c03c) {
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C044u;
    // 0x20c044: 0x8604000a
    ctx->pc = 0x20c044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20c048: 0x2403ffff
    ctx->pc = 0x20c048u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c04c: 0x1083002f
    ctx->pc = 0x20C04Cu;
    {
        const bool branch_taken_0x20c04c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20c04c) {
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C054u;
    // 0x20c054: 0x8e030000
    ctx->pc = 0x20c054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c058: 0x42080
    ctx->pc = 0x20c058u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c05c: 0xc600000c
    ctx->pc = 0x20c05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c060: 0x641821
    ctx->pc = 0x20c060u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20c064: 0xc4610000
    ctx->pc = 0x20c064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c068: 0x46000834
    ctx->pc = 0x20c068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c06c: 0x0
    ctx->pc = 0x20c06cu;
    // NOP
    // 0x20c070: 0x45010026
    ctx->pc = 0x20C070u;
    {
        const bool branch_taken_0x20c070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c070) {
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C078u;
    // 0x20c078: 0x10000024
    ctx->pc = 0x20C078u;
    {
        const bool branch_taken_0x20c078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20C07Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20c078) {
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C080u;
label_20c080:
    // 0x20c080: 0x46010034
    ctx->pc = 0x20c080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c084: 0x0
    ctx->pc = 0x20c084u;
    // NOP
    // 0x20c088: 0x45020020
    ctx->pc = 0x20C088u;
    {
        const bool branch_taken_0x20c088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c088) {
            ctx->pc = 0x20C08Cu;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C090u;
    // 0x20c090: 0x24020004
    ctx->pc = 0x20c090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c094: 0xafa20020
    ctx->pc = 0x20c094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20c098: 0x24020005
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c09c: 0xafa20024
    ctx->pc = 0x20c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20c0a0: 0x24020003
    ctx->pc = 0x20c0a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20c0a4: 0xafa20028
    ctx->pc = 0x20c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20c0a8: 0x2402ffff
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c0ac: 0xafa2002c
    ctx->pc = 0x20c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20c0b0: 0xc6000004
    ctx->pc = 0x20c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c0b4: 0x8e060000
    ctx->pc = 0x20c0b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c0b8: 0x27a70020
    ctx->pc = 0x20c0b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c0bc: 0xc082e3c
    ctx->pc = 0x20C0BCu;
    SET_GPR_U32(ctx, 31, 0x20C0C4u);
    ctx->pc = 0x20C0C0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C0C4u; }
        else if (ctx->pc != 0x20C0C4u) { ctx->pc = 0x20C0C4u; }
    }
    if (ctx->pc != 0x20C0C4u) { return; }
    ctx->pc = 0x20C0C4u;
    // 0x20c0c4: 0x86040008
    ctx->pc = 0x20c0c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20c0c8: 0x24030001
    ctx->pc = 0x20c0c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c0cc: 0x1483000f
    ctx->pc = 0x20C0CCu;
    {
        const bool branch_taken_0x20c0cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20C0D0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20c0cc) {
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C0D4u;
    // 0x20c0d4: 0x8604000a
    ctx->pc = 0x20c0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20c0d8: 0x2403ffff
    ctx->pc = 0x20c0d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c0dc: 0x1083000b
    ctx->pc = 0x20C0DCu;
    {
        const bool branch_taken_0x20c0dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20c0dc) {
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C0E4u;
    // 0x20c0e4: 0x8e030000
    ctx->pc = 0x20c0e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c0e8: 0x42080
    ctx->pc = 0x20c0e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c0ec: 0xc600000c
    ctx->pc = 0x20c0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c0f0: 0x641821
    ctx->pc = 0x20c0f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20c0f4: 0xc4610000
    ctx->pc = 0x20c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c0f8: 0x46000836
    ctx->pc = 0x20c0f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c0fc: 0x0
    ctx->pc = 0x20c0fcu;
    // NOP
    // 0x20c100: 0x45000002
    ctx->pc = 0x20C100u;
    {
        const bool branch_taken_0x20c100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c100) {
            ctx->pc = 0x20C10Cu;
            goto label_20c10c;
        }
    }
    ctx->pc = 0x20C108u;
    // 0x20c108: 0xa6000008
    ctx->pc = 0x20c108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
label_20c10c:
    // 0x20c10c: 0x10a0000c
    ctx->pc = 0x20C10Cu;
    {
        const bool branch_taken_0x20c10c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20c10c) {
            ctx->pc = 0x20C140u;
            goto label_20c140;
        }
    }
    ctx->pc = 0x20C114u;
    // 0x20c114: 0xc6000004
    ctx->pc = 0x20c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c118: 0x3c03bf80
    ctx->pc = 0x20c118u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x20c11c: 0x44830800
    ctx->pc = 0x20c11cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20c120: 0x0
    ctx->pc = 0x20c120u;
    // NOP
    // 0x20c124: 0x46010002
    ctx->pc = 0x20c124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20c128: 0xe6000004
    ctx->pc = 0x20c128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20c12c: 0x86030008
    ctx->pc = 0x20c12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20c130: 0x18600003
    ctx->pc = 0x20C130u;
    {
        const bool branch_taken_0x20c130 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x20c130) {
            ctx->pc = 0x20C140u;
            goto label_20c140;
        }
    }
    ctx->pc = 0x20C138u;
    // 0x20c138: 0x2463ffff
    ctx->pc = 0x20c138u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20c13c: 0xa6030008
    ctx->pc = 0x20c13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_20c140:
    // 0x20c140: 0x7bbf0010
    ctx->pc = 0x20c140u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c144: 0x7bb00000
    ctx->pc = 0x20c144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c148: 0x3e00008
    ctx->pc = 0x20C148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C14Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C080u: goto label_20c080;
            case 0x20C10Cu: goto label_20c10c;
            case 0x20C140u: goto label_20c140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C150u;
}
