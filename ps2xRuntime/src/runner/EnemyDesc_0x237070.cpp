#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyDesc
// Address: 0x237070 - 0x237198
void EnemyDesc_0x237070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237070u;

    // 0x237070: 0x27bdffb0
    ctx->pc = 0x237070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x237074: 0xffbf0040
    ctx->pc = 0x237074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x237078: 0xffb30030
    ctx->pc = 0x237078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23707c: 0xffb20020
    ctx->pc = 0x23707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x237080: 0xffb10010
    ctx->pc = 0x237080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x237084: 0xffb00000
    ctx->pc = 0x237084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237088: 0xc0882d
    ctx->pc = 0x237088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23708c: 0x24020001
    ctx->pc = 0x23708cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x237090: 0x40802d
    ctx->pc = 0x237090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237094: 0x4a00006
    ctx->pc = 0x237094u;
    {
        const bool branch_taken_0x237094 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x237098u;
        if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 5));
        if (branch_taken_0x237094) {
            ctx->pc = 0x2370B0u;
            goto label_2370b0;
        }
    }
    ctx->pc = 0x23709Cu;
    // 0x23709c: 0x28a20004
    ctx->pc = 0x23709cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x2370a0: 0x14400003
    ctx->pc = 0x2370A0u;
    {
        const bool branch_taken_0x2370a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2370A4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
        if (branch_taken_0x2370a0) {
            ctx->pc = 0x2370B0u;
            goto label_2370b0;
        }
    }
    ctx->pc = 0x2370A8u;
    // 0x2370a8: 0x1440000c
    ctx->pc = 0x2370A8u;
    {
        const bool branch_taken_0x2370a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2370a8) {
            ctx->pc = 0x2370DCu;
            goto label_2370dc;
        }
    }
    ctx->pc = 0x2370B0u;
label_2370b0:
    // 0x2370b0: 0xc08dbf4
    ctx->pc = 0x2370B0u;
    SET_GPR_U32(ctx, 31, 0x2370B8u);
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370B8u; }
    }
    if (ctx->pc != 0x2370B8u) { return; }
    ctx->pc = 0x2370B8u;
    // 0x2370b8: 0x3c04003c
    ctx->pc = 0x2370b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2370bc: 0x24841b70
    ctx->pc = 0x2370bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7024));
    // 0x2370c0: 0x3c05003a
    ctx->pc = 0x2370c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2370c4: 0x24a57cb8
    ctx->pc = 0x2370c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31928));
    // 0x2370c8: 0x40302d
    ctx->pc = 0x2370c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2370cc: 0xc0b6252
    ctx->pc = 0x2370CCu;
    SET_GPR_U32(ctx, 31, 0x2370D4u);
    ctx->pc = 0x2370D0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370D4u; }
    }
    if (ctx->pc != 0x2370D4u) { return; }
    ctx->pc = 0x2370D4u;
    // 0x2370d4: 0x1000000d
    ctx->pc = 0x2370D4u;
    {
        const bool branch_taken_0x2370d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2370d4) {
            ctx->pc = 0x23710Cu;
            goto label_23710c;
        }
    }
    ctx->pc = 0x2370DCu;
label_2370dc:
    // 0x2370dc: 0xc08dbf4
    ctx->pc = 0x2370DCu;
    SET_GPR_U32(ctx, 31, 0x2370E4u);
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2370E4u; }
    }
    if (ctx->pc != 0x2370E4u) { return; }
    ctx->pc = 0x2370E4u;
    // 0x2370e4: 0x3c030033
    ctx->pc = 0x2370e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x2370e8: 0x2463dec8
    ctx->pc = 0x2370e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958792));
    // 0x2370ec: 0x2031821
    ctx->pc = 0x2370ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2370f0: 0x3c04003c
    ctx->pc = 0x2370f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2370f4: 0x24841b70
    ctx->pc = 0x2370f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7024));
    // 0x2370f8: 0x3c05003a
    ctx->pc = 0x2370f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2370fc: 0x24a57cc0
    ctx->pc = 0x2370fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31936));
    // 0x237100: 0x40302d
    ctx->pc = 0x237100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237104: 0xc0b6252
    ctx->pc = 0x237104u;
    SET_GPR_U32(ctx, 31, 0x23710Cu);
    ctx->pc = 0x237108u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967292)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23710Cu; }
    }
    if (ctx->pc != 0x23710Cu) { return; }
    ctx->pc = 0x23710Cu;
label_23710c:
    // 0x23710c: 0x12200005
    ctx->pc = 0x23710Cu;
    {
        const bool branch_taken_0x23710c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x237110u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x23710c) {
            ctx->pc = 0x237124u;
            goto label_237124;
        }
    }
    ctx->pc = 0x237114u;
    // 0x237114: 0x24841b70
    ctx->pc = 0x237114u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7024));
    // 0x237118: 0x3c05003a
    ctx->pc = 0x237118u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x23711c: 0xc0bf1c1
    ctx->pc = 0x23711Cu;
    SET_GPR_U32(ctx, 31, 0x237124u);
    ctx->pc = 0x237120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31944));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237124u; }
    }
    if (ctx->pc != 0x237124u) { return; }
    ctx->pc = 0x237124u;
label_237124:
    // 0x237124: 0x802d
    ctx->pc = 0x237124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237128: 0x3c13003c
    ctx->pc = 0x237128u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x23712c: 0x260102d
    ctx->pc = 0x23712cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237130: 0x24521b70
    ctx->pc = 0x237130u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7024));
    // 0x237134: 0x3c02003c
    ctx->pc = 0x237134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x237138: 0x10000009
    ctx->pc = 0x237138u;
    {
        const bool branch_taken_0x237138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23713Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294944641));
        if (branch_taken_0x237138) {
            ctx->pc = 0x237160u;
            goto label_237160;
        }
    }
    ctx->pc = 0x237140u;
label_237140:
    // 0x237140: 0x80a40000
    ctx->pc = 0x237140u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x237144: 0x911021
    ctx->pc = 0x237144u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x237148: 0x90420000
    ctx->pc = 0x237148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23714c: 0x30420002
    ctx->pc = 0x23714cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x237150: 0x2483ffe0
    ctx->pc = 0x237150u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x237154: 0x62200b
    ctx->pc = 0x237154u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x237158: 0xa0a40000
    ctx->pc = 0x237158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23715c: 0x26100001
    ctx->pc = 0x23715cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_237160:
    // 0x237160: 0xc0bf306
    ctx->pc = 0x237160u;
    SET_GPR_U32(ctx, 31, 0x237168u);
    ctx->pc = 0x237164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 7024));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237168u; }
    }
    if (ctx->pc != 0x237168u) { return; }
    ctx->pc = 0x237168u;
    // 0x237168: 0x202102b
    ctx->pc = 0x237168u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23716c: 0x1440fff4
    ctx->pc = 0x23716Cu;
    {
        const bool branch_taken_0x23716c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237170u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        if (branch_taken_0x23716c) {
            ctx->pc = 0x237140u;
            goto label_237140;
        }
    }
    ctx->pc = 0x237174u;
    // 0x237174: 0x3c02003c
    ctx->pc = 0x237174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x237178: 0x24421b70
    ctx->pc = 0x237178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7024));
    // 0x23717c: 0xdfbf0040
    ctx->pc = 0x23717cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237180: 0xdfb30030
    ctx->pc = 0x237180u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237184: 0xdfb20020
    ctx->pc = 0x237184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237188: 0xdfb10010
    ctx->pc = 0x237188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23718c: 0xdfb00000
    ctx->pc = 0x23718cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237190: 0x3e00008
    ctx->pc = 0x237190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237194u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2370B0u: goto label_2370b0;
            case 0x2370DCu: goto label_2370dc;
            case 0x23710Cu: goto label_23710c;
            case 0x237124u: goto label_237124;
            case 0x237140u: goto label_237140;
            case 0x237160u: goto label_237160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237198u;
}
