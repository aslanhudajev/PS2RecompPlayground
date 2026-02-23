#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrlSubX__9CClothMgrFiP6MOPRTSiiii
// Address: 0x1cdb40 - 0x1cdd84
void ctrlSubX__9CClothMgrFiP6MOPRTSiiii_0x1cdb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrlSubX__9CClothMgrFiP6MOPRTSiiii");


    ctx->pc = 0x1cdb40u;

    // 0x1cdb40: 0x27bdff60
    ctx->pc = 0x1cdb40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1cdb44: 0x7fbf0090
    ctx->pc = 0x1cdb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1cdb48: 0x7fbe0080
    ctx->pc = 0x1cdb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1cdb4c: 0x7fb70070
    ctx->pc = 0x1cdb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1cdb50: 0x7fb60060
    ctx->pc = 0x1cdb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cdb54: 0x7fb50050
    ctx->pc = 0x1cdb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cdb58: 0x7fb40040
    ctx->pc = 0x1cdb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cdb5c: 0x7fb30030
    ctx->pc = 0x1cdb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cdb60: 0x71c03
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1cdb64: 0x70a09e28
    ctx->pc = 0x1cdb64u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cdb68: 0x3063ffff
    ctx->pc = 0x1cdb68u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1cdb6c: 0x32900
    ctx->pc = 0x1cdb6cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cdb70: 0x7fb20020
    ctx->pc = 0x1cdb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cdb74: 0x7fb10010
    ctx->pc = 0x1cdb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cdb78: 0x3c030050
    ctx->pc = 0x1cdb78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1cdb7c: 0x2463ea20
    ctx->pc = 0x1cdb7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x1cdb80: 0x7fb00000
    ctx->pc = 0x1cdb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cdb84: 0x651821
    ctx->pc = 0x1cdb84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cdb88: 0x8c650000
    ctx->pc = 0x1cdb88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdb8c: 0x70c08628
    ctx->pc = 0x1cdb8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cdb90: 0x7140be28
    ctx->pc = 0x1cdb90u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1cdb94: 0x70808e28
    ctx->pc = 0x1cdb94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cdb98: 0x3c038000
    ctx->pc = 0x1cdb98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cdb9c: 0xa31824
    ctx->pc = 0x1cdb9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cdba0: 0x1060006c
    ctx->pc = 0x1CDBA0u;
    {
        const bool branch_taken_0x1cdba0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDBA4u;
        SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cdba0) {
            ctx->pc = 0x1CDD54u;
            goto label_1cdd54;
        }
    }
    ctx->pc = 0x1CDBA8u;
    // 0x1cdba8: 0x13a880
    ctx->pc = 0x1cdba8u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cdbac: 0x2b13021
    ctx->pc = 0x1cdbacu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1cdbb0: 0x8cc50050
    ctx->pc = 0x1cdbb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1cdbb4: 0x18a00067
    ctx->pc = 0x1CDBB4u;
    {
        const bool branch_taken_0x1cdbb4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1CDBB8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 6), 80));
        if (branch_taken_0x1cdbb4) {
            ctx->pc = 0x1CDD54u;
            goto label_1cdd54;
        }
    }
    ctx->pc = 0x1CDBBCu;
    // 0x1cdbbc: 0x24030001
    ctx->pc = 0x1cdbbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdbc0: 0x14a3000c
    ctx->pc = 0x1CDBC0u;
    {
        const bool branch_taken_0x1cdbc0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cdbc0) {
            ctx->pc = 0x1CDBF4u;
            goto label_1cdbf4;
        }
    }
    ctx->pc = 0x1CDBC8u;
    // 0x1cdbc8: 0x8cc50060
    ctx->pc = 0x1cdbc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1cdbcc: 0x8cca0070
    ctx->pc = 0x1cdbccu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1cdbd0: 0x71203e28
    ctx->pc = 0x1cdbd0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1cdbd4: 0x72e04e28
    ctx->pc = 0x1cdbd4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1cdbd8: 0x71003628
    ctx->pc = 0x1cdbd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cdbdc: 0xc073a1c
    ctx->pc = 0x1CDBDCu;
    SET_GPR_U32(ctx, 31, 0x1CDBE4u);
    ctx->pc = 0x1CDBE0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CE870u;
    {
        const uint32_t __entryPc = ctx->pc;
        coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix_0x1ce870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBE4u; }
        else if (ctx->pc != 0x1CDBE4u) { ctx->pc = 0x1CDBE4u; }
    }
    if (ctx->pc != 0x1CDBE4u) { return; }
    ctx->pc = 0x1CDBE4u;
    // 0x1cdbe4: 0x24020002
    ctx->pc = 0x1cdbe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdbe8: 0xae420000
    ctx->pc = 0x1cdbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1cdbec: 0xc07368c
    ctx->pc = 0x1CDBECu;
    SET_GPR_U32(ctx, 31, 0x1CDBF4u);
    ctx->pc = 0x1CDBF0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CDA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset__9CClothMgrFv_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBF4u; }
        else if (ctx->pc != 0x1CDBF4u) { ctx->pc = 0x1CDBF4u; }
    }
    if (ctx->pc != 0x1CDBF4u) { return; }
    ctx->pc = 0x1CDBF4u;
label_1cdbf4:
    // 0x1cdbf4: 0x8e440000
    ctx->pc = 0x1cdbf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cdbf8: 0x24030002
    ctx->pc = 0x1cdbf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdbfc: 0x14830055
    ctx->pc = 0x1CDBFCu;
    {
        const bool branch_taken_0x1cdbfc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cdbfc) {
            ctx->pc = 0x1CDD54u;
            goto label_1cdd54;
        }
    }
    ctx->pc = 0x1CDC04u;
    // 0x1cdc04: 0x8f858c48
    ctx->pc = 0x1cdc04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cdc08: 0x134180
    ctx->pc = 0x1cdc08u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 19), 6));
    // 0x1cdc0c: 0x1111021
    ctx->pc = 0x1cdc0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1cdc10: 0x24460080
    ctx->pc = 0x1cdc10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 128));
    // 0x1cdc14: 0x24040008
    ctx->pc = 0x1cdc14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cdc18: 0x8ca30004
    ctx->pc = 0x1cdc18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1cdc1c: 0x31040
    ctx->pc = 0x1cdc1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cdc20: 0x431021
    ctx->pc = 0x1cdc20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdc24: 0x21080
    ctx->pc = 0x1cdc24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cdc28: 0x431021
    ctx->pc = 0x1cdc28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdc2c: 0x21100
    ctx->pc = 0x1cdc2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cdc30: 0xa21021
    ctx->pc = 0x1cdc30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cdc34: 0x24450050
    ctx->pc = 0x1cdc34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 80));
    // 0x1cdc38: 0x70a03e28
    ctx->pc = 0x1cdc38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cdc3c:
    // 0x1cdc3c: 0x8ce30000
    ctx->pc = 0x1cdc3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cdc40: 0x8ce20004
    ctx->pc = 0x1cdc40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cdc44: 0x2484ffff
    ctx->pc = 0x1cdc44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cdc48: 0xacc30000
    ctx->pc = 0x1cdc48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1cdc4c: 0xacc20004
    ctx->pc = 0x1cdc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1cdc50: 0x24e70008
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1cdc54: 0x1c80fff9
    ctx->pc = 0x1CDC54u;
    {
        const bool branch_taken_0x1cdc54 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CDC58u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1cdc54) {
            ctx->pc = 0x1CDC3Cu;
            goto label_1cdc3c;
        }
    }
    ctx->pc = 0x1CDC5Cu;
    // 0x1cdc5c: 0x2281021
    ctx->pc = 0x1cdc5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1cdc60: 0x24560080
    ctx->pc = 0x1cdc60u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 128));
    // 0x1cdc64: 0xc072f44
    ctx->pc = 0x1CDC64u;
    SET_GPR_U32(ctx, 31, 0x1CDC6Cu);
    ctx->pc = 0x1CDC68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC6Cu; }
        else if (ctx->pc != 0x1CDC6Cu) { ctx->pc = 0x1CDC6Cu; }
    }
    if (ctx->pc != 0x1CDC6Cu) { return; }
    ctx->pc = 0x1CDC6Cu;
    // 0x1cdc6c: 0x70009628
    ctx->pc = 0x1cdc6cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdc70: 0x70009e28
    ctx->pc = 0x1cdc70u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdc74: 0x235a021
    ctx->pc = 0x1cdc74u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_1cdc78:
    // 0x1cdc78: 0x8e820070
    ctx->pc = 0x1cdc78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1cdc7c: 0x26070030
    ctx->pc = 0x1cdc7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 48));
    // 0x1cdc80: 0x24050008
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cdc84: 0x532021
    ctx->pc = 0x1cdc84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1cdc88: 0x70803628
    ctx->pc = 0x1cdc88u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cdc8c: 0x0
    ctx->pc = 0x1cdc8cu;
    // NOP
label_1cdc90:
    // 0x1cdc90: 0x8ce30000
    ctx->pc = 0x1cdc90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cdc94: 0x8ce20004
    ctx->pc = 0x1cdc94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cdc98: 0x24a5ffff
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1cdc9c: 0xacc30000
    ctx->pc = 0x1cdc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1cdca0: 0xacc20004
    ctx->pc = 0x1cdca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1cdca4: 0x24e70008
    ctx->pc = 0x1cdca4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1cdca8: 0x1ca0fff9
    ctx->pc = 0x1CDCA8u;
    {
        const bool branch_taken_0x1cdca8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1CDCACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1cdca8) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDCB0u;
    // 0x1cdcb0: 0xc072f44
    ctx->pc = 0x1CDCB0u;
    SET_GPR_U32(ctx, 31, 0x1CDCB8u);
    ctx->pc = 0x1CDCB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCB8u; }
        else if (ctx->pc != 0x1CDCB8u) { ctx->pc = 0x1CDCB8u; }
    }
    if (ctx->pc != 0x1CDCB8u) { return; }
    ctx->pc = 0x1CDCB8u;
    // 0x1cdcb8: 0x26520001
    ctx->pc = 0x1cdcb8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cdcbc: 0x2a420016
    ctx->pc = 0x1cdcbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 22));
    // 0x1cdcc0: 0x26730040
    ctx->pc = 0x1cdcc0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x1cdcc4: 0x1440ffec
    ctx->pc = 0x1CDCC4u;
    {
        const bool branch_taken_0x1cdcc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDCC8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
        if (branch_taken_0x1cdcc4) {
            ctx->pc = 0x1CDC78u;
            goto label_1cdc78;
        }
    }
    ctx->pc = 0x1CDCCCu;
    // 0x1cdccc: 0x4bede37d
    ctx->pc = 0x1cdcccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cdcd0: 0x4bedeb7d
    ctx->pc = 0x1cdcd0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cdcd4: 0x4bedf37d
    ctx->pc = 0x1cdcd4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cdcd8: 0x4bedfb7d
    ctx->pc = 0x1cdcd8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cdcdc: 0x3c020050
    ctx->pc = 0x1cdcdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cdce0: 0xc07ce18
    ctx->pc = 0x1CDCE0u;
    SET_GPR_U32(ctx, 31, 0x1CDCE8u);
    ctx->pc = 0x1CDCE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDCE8u; }
        else if (ctx->pc != 0x1CDCE8u) { ctx->pc = 0x1CDCE8u; }
    }
    if (ctx->pc != 0x1CDCE8u) { return; }
    ctx->pc = 0x1CDCE8u;
    // 0x1cdce8: 0x1c400010
    ctx->pc = 0x1CDCE8u;
    {
        const bool branch_taken_0x1cdce8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1CDCECu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        if (branch_taken_0x1cdce8) {
            ctx->pc = 0x1CDD2Cu;
            goto label_1cdd2c;
        }
    }
    ctx->pc = 0x1CDCF0u;
    // 0x1cdcf0: 0x2b11021
    ctx->pc = 0x1cdcf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1cdcf4: 0x8c440060
    ctx->pc = 0x1cdcf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cdcf8: 0x8c450070
    ctx->pc = 0x1cdcf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cdcfc: 0x24520060
    ctx->pc = 0x1cdcfcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 96));
    // 0x1cdd00: 0xc073b58
    ctx->pc = 0x1CDD00u;
    SET_GPR_U32(ctx, 31, 0x1CDD08u);
    ctx->pc = 0x1CDD04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 112));
    ctx->pc = 0x1CED60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcOneskin__6CClothFP11tagNLmatrix_0x1ced60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD08u; }
        else if (ctx->pc != 0x1CDD08u) { ctx->pc = 0x1CDD08u; }
    }
    if (ctx->pc != 0x1CDD08u) { return; }
    ctx->pc = 0x1CDD08u;
    // 0x1cdd08: 0x8e050000
    ctx->pc = 0x1cdd08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdd0c: 0x8e440000
    ctx->pc = 0x1cdd0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cdd10: 0xc073bec
    ctx->pc = 0x1CDD10u;
    SET_GPR_U32(ctx, 31, 0x1CDD18u);
    ctx->pc = 0x1CDD14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CEFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cefb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD18u; }
        else if (ctx->pc != 0x1CDD18u) { ctx->pc = 0x1CDD18u; }
    }
    if (ctx->pc != 0x1CDD18u) { return; }
    ctx->pc = 0x1CDD18u;
    // 0x1cdd18: 0xc074a1c
    ctx->pc = 0x1CDD18u;
    SET_GPR_U32(ctx, 31, 0x1CDD20u);
    ctx->pc = 0x1CDD1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1D2870u;
    {
        const uint32_t __entryPc = ctx->pc;
        writePol__6CClothFv_0x1d2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD20u; }
        else if (ctx->pc != 0x1CDD20u) { ctx->pc = 0x1CDD20u; }
    }
    if (ctx->pc != 0x1CDD20u) { return; }
    ctx->pc = 0x1CDD20u;
    // 0x1cdd20: 0xc0552d8
    ctx->pc = 0x1CDD20u;
    SET_GPR_U32(ctx, 31, 0x1CDD28u);
    ctx->pc = 0x1CDD24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD28u; }
        else if (ctx->pc != 0x1CDD28u) { ctx->pc = 0x1CDD28u; }
    }
    if (ctx->pc != 0x1CDD28u) { return; }
    ctx->pc = 0x1CDD28u;
    // 0x1cdd28: 0x2b11021
    ctx->pc = 0x1cdd28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1cdd2c:
    // 0x1cdd2c: 0x8c420070
    ctx->pc = 0x1cdd2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cdd30: 0x171980
    ctx->pc = 0x1cdd30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 23), 6));
    // 0x1cdd34: 0xc06c038
    ctx->pc = 0x1CDD34u;
    SET_GPR_U32(ctx, 31, 0x1CDD3Cu);
    ctx->pc = 0x1CDD38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD3Cu; }
        else if (ctx->pc != 0x1CDD3Cu) { ctx->pc = 0x1CDD3Cu; }
    }
    if (ctx->pc != 0x1CDD3Cu) { return; }
    ctx->pc = 0x1CDD3Cu;
    // 0x1cdd3c: 0xc0853ac
    ctx->pc = 0x1CDD3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD44u);
    ctx->pc = 0x1CDD40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD44u; }
        else if (ctx->pc != 0x1CDD44u) { ctx->pc = 0x1CDD44u; }
    }
    if (ctx->pc != 0x1CDD44u) { return; }
    ctx->pc = 0x1CDD44u;
    // 0x1cdd44: 0x4bff6b7e
    ctx->pc = 0x1cdd44u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cdd48: 0x4bfe6b7e
    ctx->pc = 0x1cdd48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cdd4c: 0x4bfd6b7e
    ctx->pc = 0x1cdd4cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cdd50: 0x4bfc6b7e
    ctx->pc = 0x1cdd50u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_1cdd54:
    // 0x1cdd54: 0x7bbf0090
    ctx->pc = 0x1cdd54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cdd58: 0x7bbe0080
    ctx->pc = 0x1cdd58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cdd5c: 0x7bb70070
    ctx->pc = 0x1cdd5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cdd60: 0x7bb60060
    ctx->pc = 0x1cdd60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cdd64: 0x7bb50050
    ctx->pc = 0x1cdd64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cdd68: 0x7bb40040
    ctx->pc = 0x1cdd68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cdd6c: 0x7bb30030
    ctx->pc = 0x1cdd6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cdd70: 0x7bb20020
    ctx->pc = 0x1cdd70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdd74: 0x7bb10010
    ctx->pc = 0x1cdd74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd78: 0x7bb00000
    ctx->pc = 0x1cdd78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd7c: 0x3e00008
    ctx->pc = 0x1CDD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDBF4u: goto label_1cdbf4;
            case 0x1CDC3Cu: goto label_1cdc3c;
            case 0x1CDC78u: goto label_1cdc78;
            case 0x1CDC90u: goto label_1cdc90;
            case 0x1CDD2Cu: goto label_1cdd2c;
            case 0x1CDD54u: goto label_1cdd54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDD84u;
}
