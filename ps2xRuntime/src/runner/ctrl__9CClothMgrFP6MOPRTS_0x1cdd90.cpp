#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__9CClothMgrFP6MOPRTS
// Address: 0x1cdd90 - 0x1ce59c
void ctrl__9CClothMgrFP6MOPRTS_0x1cdd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__9CClothMgrFP6MOPRTS");


    ctx->pc = 0x1cdd90u;

    // 0x1cdd90: 0x27bdffb0
    ctx->pc = 0x1cdd90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cdd94: 0x7fbf0040
    ctx->pc = 0x1cdd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1cdd98: 0x7fb30030
    ctx->pc = 0x1cdd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cdd9c: 0x7fb20020
    ctx->pc = 0x1cdd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cdda0: 0x7fb10010
    ctx->pc = 0x1cdda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cdda4: 0x7fb00000
    ctx->pc = 0x1cdda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cdda8: 0x70a08628
    ctx->pc = 0x1cdda8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cddac: 0x8c850000
    ctx->pc = 0x1cddacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cddb0: 0x24080014
    ctx->pc = 0x1cddb0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cddb4: 0x10a801e2
    ctx->pc = 0x1CDDB4u;
    {
        const bool branch_taken_0x1cddb4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 8));
        ctx->pc = 0x1CDDB8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cddb4) {
            ctx->pc = 0x1CE540u;
            goto label_1ce540;
        }
    }
    ctx->pc = 0x1CDDBCu;
    // 0x1cddbc: 0x24060022
    ctx->pc = 0x1cddbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x1cddc0: 0x10a6017d
    ctx->pc = 0x1CDDC0u;
    {
        const bool branch_taken_0x1cddc0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 6));
        ctx->pc = 0x1CDDC4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cddc0) {
            ctx->pc = 0x1CE3B8u;
            goto label_1ce3b8;
        }
    }
    ctx->pc = 0x1CDDC8u;
    // 0x1cddc8: 0x24080021
    ctx->pc = 0x1cddc8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cddcc: 0x50a80158
    ctx->pc = 0x1CDDCCu;
    {
        const bool branch_taken_0x1cddcc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 8));
        if (branch_taken_0x1cddcc) {
            ctx->pc = 0x1CDDD0u;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1CE330u;
            goto label_1ce330;
        }
    }
    ctx->pc = 0x1CDDD4u;
    // 0x1cddd4: 0x24060020
    ctx->pc = 0x1cddd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cddd8: 0x10a600f3
    ctx->pc = 0x1CDDD8u;
    {
        const bool branch_taken_0x1cddd8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 6));
        ctx->pc = 0x1CDDDCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cddd8) {
            ctx->pc = 0x1CE1A8u;
            goto label_1ce1a8;
        }
    }
    ctx->pc = 0x1CDDE0u;
    // 0x1cdde0: 0x24030047
    ctx->pc = 0x1cdde0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1cdde4: 0x10a301e6
    ctx->pc = 0x1CDDE4u;
    {
        const bool branch_taken_0x1cdde4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CDDE8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x1cdde4) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CDDECu;
    // 0x1cddec: 0x10a6008b
    ctx->pc = 0x1CDDECu;
    {
        const bool branch_taken_0x1cddec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 6));
        ctx->pc = 0x1CDDF0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cddec) {
            ctx->pc = 0x1CE01Cu;
            goto label_1ce01c;
        }
    }
    ctx->pc = 0x1CDDF4u;
    // 0x1cddf4: 0x24060043
    ctx->pc = 0x1cddf4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 67));
    // 0x1cddf8: 0x10a60003
    ctx->pc = 0x1CDDF8u;
    {
        const bool branch_taken_0x1cddf8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 6));
        ctx->pc = 0x1CDDFCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cddf8) {
            ctx->pc = 0x1CDE08u;
            goto label_1cde08;
        }
    }
    ctx->pc = 0x1CDE00u;
    // 0x1cde00: 0x100001e0
    ctx->pc = 0x1CDE00u;
    {
        const bool branch_taken_0x1cde00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDE04u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1cde00) {
            ctx->pc = 0x1CE584u;
            goto label_1ce584;
        }
    }
    ctx->pc = 0x1CDE08u;
label_1cde08:
    // 0x1cde08: 0x8c25f4b0
    ctx->pc = 0x1cde08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294964400)));
    // 0x1cde0c: 0x3c038000
    ctx->pc = 0x1cde0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1cde10: 0xa31824
    ctx->pc = 0x1cde10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cde14: 0x106001da
    ctx->pc = 0x1CDE14u;
    {
        const bool branch_taken_0x1cde14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cde14) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CDE1Cu;
    // 0x1cde1c: 0x8e230004
    ctx->pc = 0x1cde1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cde20: 0x186001d7
    ctx->pc = 0x1CDE20u;
    {
        const bool branch_taken_0x1cde20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CDE24u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1cde20) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CDE28u;
    // 0x1cde28: 0x1469000a
    ctx->pc = 0x1CDE28u;
    {
        const bool branch_taken_0x1cde28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x1cde28) {
            ctx->pc = 0x1CDE54u;
            goto label_1cde54;
        }
    }
    ctx->pc = 0x1CDE30u;
    // 0x1cde30: 0x8e250008
    ctx->pc = 0x1cde30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cde34: 0x8e2a000c
    ctx->pc = 0x1cde34u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cde38: 0x24071e65
    ctx->pc = 0x1cde38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7781));
    // 0x1cde3c: 0xc073a1c
    ctx->pc = 0x1CDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE44u);
    ctx->pc = 0x1CDE40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CE870u;
    {
        const uint32_t __entryPc = ctx->pc;
        coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix_0x1ce870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE44u; }
        else if (ctx->pc != 0x1CDE44u) { ctx->pc = 0x1CDE44u; }
    }
    if (ctx->pc != 0x1CDE44u) { return; }
    ctx->pc = 0x1CDE44u;
    // 0x1cde44: 0x24020002
    ctx->pc = 0x1cde44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cde48: 0xae220004
    ctx->pc = 0x1cde48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1cde4c: 0xc07368c
    ctx->pc = 0x1CDE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE54u);
    ctx->pc = 0x1CDE50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CDA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset__9CClothMgrFv_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE54u; }
        else if (ctx->pc != 0x1CDE54u) { ctx->pc = 0x1CDE54u; }
    }
    if (ctx->pc != 0x1CDE54u) { return; }
    ctx->pc = 0x1CDE54u;
label_1cde54:
    // 0x1cde54: 0x8e240004
    ctx->pc = 0x1cde54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cde58: 0x24030002
    ctx->pc = 0x1cde58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cde5c: 0x148301c8
    ctx->pc = 0x1CDE5Cu;
    {
        const bool branch_taken_0x1cde5c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cde5c) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CDE64u;
    // 0x1cde64: 0x8f858c48
    ctx->pc = 0x1cde64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cde68: 0x26260010
    ctx->pc = 0x1cde68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cde6c: 0x24040008
    ctx->pc = 0x1cde6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cde70: 0x8ca30004
    ctx->pc = 0x1cde70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1cde74: 0x31040
    ctx->pc = 0x1cde74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cde78: 0x431021
    ctx->pc = 0x1cde78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cde7c: 0x21080
    ctx->pc = 0x1cde7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cde80: 0x431021
    ctx->pc = 0x1cde80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cde84: 0x21100
    ctx->pc = 0x1cde84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cde88: 0xa21021
    ctx->pc = 0x1cde88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cde8c: 0x24450050
    ctx->pc = 0x1cde8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 80));
    // 0x1cde90: 0x70a03e28
    ctx->pc = 0x1cde90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1cde94:
    // 0x1cde94: 0x8ce30000
    ctx->pc = 0x1cde94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cde98: 0x8ce20004
    ctx->pc = 0x1cde98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cde9c: 0x2484ffff
    ctx->pc = 0x1cde9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cdea0: 0xacc30000
    ctx->pc = 0x1cdea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1cdea4: 0xacc20004
    ctx->pc = 0x1cdea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1cdea8: 0x24e70008
    ctx->pc = 0x1cdea8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1cdeac: 0x1c80fff9
    ctx->pc = 0x1CDEACu;
    {
        const bool branch_taken_0x1cdeac = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CDEB0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1cdeac) {
            ctx->pc = 0x1CDE94u;
            goto label_1cde94;
        }
    }
    ctx->pc = 0x1CDEB4u;
    // 0x1cdeb4: 0xc072f44
    ctx->pc = 0x1CDEB4u;
    SET_GPR_U32(ctx, 31, 0x1CDEBCu);
    ctx->pc = 0x1CDEB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEBCu; }
        else if (ctx->pc != 0x1CDEBCu) { ctx->pc = 0x1CDEBCu; }
    }
    if (ctx->pc != 0x1CDEBCu) { return; }
    ctx->pc = 0x1CDEBCu;
    // 0x1cdebc: 0x70009628
    ctx->pc = 0x1cdebcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdec0: 0x70009e28
    ctx->pc = 0x1cdec0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cdec4:
    // 0x1cdec4: 0x8e22000c
    ctx->pc = 0x1cdec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdec8: 0x26070030
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 48));
    // 0x1cdecc: 0x24050008
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cded0: 0x532021
    ctx->pc = 0x1cded0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1cded4: 0x70803628
    ctx->pc = 0x1cded4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1cded8:
    // 0x1cded8: 0x8ce30000
    ctx->pc = 0x1cded8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cdedc: 0x8ce20004
    ctx->pc = 0x1cdedcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1cdee0: 0x24a5ffff
    ctx->pc = 0x1cdee0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1cdee4: 0xacc30000
    ctx->pc = 0x1cdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1cdee8: 0xacc20004
    ctx->pc = 0x1cdee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1cdeec: 0x24e70008
    ctx->pc = 0x1cdeecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1cdef0: 0x1ca0fff9
    ctx->pc = 0x1CDEF0u;
    {
        const bool branch_taken_0x1cdef0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1CDEF4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1cdef0) {
            ctx->pc = 0x1CDED8u;
            goto label_1cded8;
        }
    }
    ctx->pc = 0x1CDEF8u;
    // 0x1cdef8: 0xc072f44
    ctx->pc = 0x1CDEF8u;
    SET_GPR_U32(ctx, 31, 0x1CDF00u);
    ctx->pc = 0x1CDEFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF00u; }
        else if (ctx->pc != 0x1CDF00u) { ctx->pc = 0x1CDF00u; }
    }
    if (ctx->pc != 0x1CDF00u) { return; }
    ctx->pc = 0x1CDF00u;
    // 0x1cdf00: 0x26520001
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cdf04: 0x2a420016
    ctx->pc = 0x1cdf04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 22));
    // 0x1cdf08: 0x26730040
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x1cdf0c: 0x1440ffed
    ctx->pc = 0x1CDF0Cu;
    {
        const bool branch_taken_0x1cdf0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CDF10u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
        if (branch_taken_0x1cdf0c) {
            ctx->pc = 0x1CDEC4u;
            goto label_1cdec4;
        }
    }
    ctx->pc = 0x1CDF14u;
    // 0x1cdf14: 0x8e22018c
    ctx->pc = 0x1cdf14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x1cdf18: 0x1040001b
    ctx->pc = 0x1CDF18u;
    {
        const bool branch_taken_0x1cdf18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdf18) {
            ctx->pc = 0x1CDF88u;
            goto label_1cdf88;
        }
    }
    ctx->pc = 0x1CDF20u;
    // 0x1cdf20: 0x4bede37d
    ctx->pc = 0x1cdf20u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cdf24: 0x4bedeb7d
    ctx->pc = 0x1cdf24u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cdf28: 0x4bedf37d
    ctx->pc = 0x1cdf28u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cdf2c: 0x4bedfb7d
    ctx->pc = 0x1cdf2cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cdf30: 0x8e25000c
    ctx->pc = 0x1cdf30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdf34: 0xc073b58
    ctx->pc = 0x1CDF34u;
    SET_GPR_U32(ctx, 31, 0x1CDF3Cu);
    ctx->pc = 0x1CDF38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1CED60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcOneskin__6CClothFP11tagNLmatrix_0x1ced60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF3Cu; }
        else if (ctx->pc != 0x1CDF3Cu) { ctx->pc = 0x1CDF3Cu; }
    }
    if (ctx->pc != 0x1CDF3Cu) { return; }
    ctx->pc = 0x1CDF3Cu;
    // 0x1cdf3c: 0x8e240008
    ctx->pc = 0x1cdf3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdf40: 0x8e25000c
    ctx->pc = 0x1cdf40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdf44: 0xc073bec
    ctx->pc = 0x1CDF44u;
    SET_GPR_U32(ctx, 31, 0x1CDF4Cu);
    ctx->pc = 0x1CDF48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CEFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cefb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF4Cu; }
        else if (ctx->pc != 0x1CDF4Cu) { ctx->pc = 0x1CDF4Cu; }
    }
    if (ctx->pc != 0x1CDF4Cu) { return; }
    ctx->pc = 0x1CDF4Cu;
    // 0x1cdf4c: 0xc074a1c
    ctx->pc = 0x1CDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF54u);
    ctx->pc = 0x1CDF50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1D2870u;
    {
        const uint32_t __entryPc = ctx->pc;
        writePol__6CClothFv_0x1d2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF54u; }
        else if (ctx->pc != 0x1CDF54u) { ctx->pc = 0x1CDF54u; }
    }
    if (ctx->pc != 0x1CDF54u) { return; }
    ctx->pc = 0x1CDF54u;
    // 0x1cdf54: 0xc0552d8
    ctx->pc = 0x1CDF54u;
    SET_GPR_U32(ctx, 31, 0x1CDF5Cu);
    ctx->pc = 0x1CDF58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF5Cu; }
        else if (ctx->pc != 0x1CDF5Cu) { ctx->pc = 0x1CDF5Cu; }
    }
    if (ctx->pc != 0x1CDF5Cu) { return; }
    ctx->pc = 0x1CDF5Cu;
    // 0x1cdf5c: 0x8e22000c
    ctx->pc = 0x1cdf5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdf60: 0xc06c038
    ctx->pc = 0x1CDF60u;
    SET_GPR_U32(ctx, 31, 0x1CDF68u);
    ctx->pc = 0x1CDF64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF68u; }
        else if (ctx->pc != 0x1CDF68u) { ctx->pc = 0x1CDF68u; }
    }
    if (ctx->pc != 0x1CDF68u) { return; }
    ctx->pc = 0x1CDF68u;
    // 0x1cdf68: 0x3c0200a9
    ctx->pc = 0x1cdf68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)169 << 16));
    // 0x1cdf6c: 0xc0853ac
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 35));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF74u; }
        else if (ctx->pc != 0x1CDF74u) { ctx->pc = 0x1CDF74u; }
    }
    if (ctx->pc != 0x1CDF74u) { return; }
    ctx->pc = 0x1CDF74u;
    // 0x1cdf74: 0x4bff6b7e
    ctx->pc = 0x1cdf74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cdf78: 0x4bfe6b7e
    ctx->pc = 0x1cdf78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cdf7c: 0x4bfd6b7e
    ctx->pc = 0x1cdf7cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cdf80: 0x1000017f
    ctx->pc = 0x1CDF80u;
    {
        const bool branch_taken_0x1cdf80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CDF84u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1cdf80) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CDF88u;
label_1cdf88:
    // 0x1cdf88: 0x4bede37d
    ctx->pc = 0x1cdf88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cdf8c: 0x4bedeb7d
    ctx->pc = 0x1cdf8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cdf90: 0x4bedf37d
    ctx->pc = 0x1cdf90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cdf94: 0x4bedfb7d
    ctx->pc = 0x1cdf94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cdf98: 0x3c020050
    ctx->pc = 0x1cdf98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cdf9c: 0xc07ce18
    ctx->pc = 0x1CDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDFA4u);
    ctx->pc = 0x1CDFA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFA4u; }
        else if (ctx->pc != 0x1CDFA4u) { ctx->pc = 0x1CDFA4u; }
    }
    if (ctx->pc != 0x1CDFA4u) { return; }
    ctx->pc = 0x1CDFA4u;
    // 0x1cdfa4: 0x1c400012
    ctx->pc = 0x1CDFA4u;
    {
        const bool branch_taken_0x1cdfa4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1cdfa4) {
            ctx->pc = 0x1CDFF0u;
            goto label_1cdff0;
        }
    }
    ctx->pc = 0x1CDFACu;
    // 0x1cdfac: 0xc06903c
    ctx->pc = 0x1CDFACu;
    SET_GPR_U32(ctx, 31, 0x1CDFB4u);
    ctx->pc = 0x1CDFB0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFB4u; }
        else if (ctx->pc != 0x1CDFB4u) { ctx->pc = 0x1CDFB4u; }
    }
    if (ctx->pc != 0x1CDFB4u) { return; }
    ctx->pc = 0x1CDFB4u;
    // 0x1cdfb4: 0x8e070014
    ctx->pc = 0x1cdfb4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cdfb8: 0x24040058
    ctx->pc = 0x1cdfb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cdfbc: 0x70002e28
    ctx->pc = 0x1cdfbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdfc0: 0x72003628
    ctx->pc = 0x1cdfc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cdfc4: 0xc069040
    ctx->pc = 0x1CDFC4u;
    SET_GPR_U32(ctx, 31, 0x1CDFCCu);
    ctx->pc = 0x1CDFC8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFCCu; }
        else if (ctx->pc != 0x1CDFCCu) { ctx->pc = 0x1CDFCCu; }
    }
    if (ctx->pc != 0x1CDFCCu) { return; }
    ctx->pc = 0x1CDFCCu;
    // 0x1cdfcc: 0x10400008
    ctx->pc = 0x1CDFCCu;
    {
        const bool branch_taken_0x1cdfcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cdfcc) {
            ctx->pc = 0x1CDFF0u;
            goto label_1cdff0;
        }
    }
    ctx->pc = 0x1CDFD4u;
    // 0x1cdfd4: 0x8e270008
    ctx->pc = 0x1cdfd4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdfd8: 0x8e28000c
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdfdc: 0x70402628
    ctx->pc = 0x1cdfdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cdfe0: 0x24050001
    ctx->pc = 0x1cdfe0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdfe4: 0x70003628
    ctx->pc = 0x1cdfe4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cdfe8: 0xc0733b4
    ctx->pc = 0x1CDFE8u;
    SET_GPR_U32(ctx, 31, 0x1CDFF0u);
    ctx->pc = 0x1CDFECu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CCED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__17ClothPostMainTaskFiP6CClothP11tagNLmatrixP11tagNLmatrix_0x1cced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFF0u; }
        else if (ctx->pc != 0x1CDFF0u) { ctx->pc = 0x1CDFF0u; }
    }
    if (ctx->pc != 0x1CDFF0u) { return; }
    ctx->pc = 0x1CDFF0u;
label_1cdff0:
    // 0x1cdff0: 0x8e22000c
    ctx->pc = 0x1cdff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cdff4: 0xc06c038
    ctx->pc = 0x1CDFF4u;
    SET_GPR_U32(ctx, 31, 0x1CDFFCu);
    ctx->pc = 0x1CDFF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFFCu; }
        else if (ctx->pc != 0x1CDFFCu) { ctx->pc = 0x1CDFFCu; }
    }
    if (ctx->pc != 0x1CDFFCu) { return; }
    ctx->pc = 0x1CDFFCu;
    // 0x1cdffc: 0x3c0200a9
    ctx->pc = 0x1cdffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)169 << 16));
    // 0x1ce000: 0xc0853ac
    ctx->pc = 0x1CE000u;
    SET_GPR_U32(ctx, 31, 0x1CE008u);
    ctx->pc = 0x1CE004u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 35));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE008u; }
        else if (ctx->pc != 0x1CE008u) { ctx->pc = 0x1CE008u; }
    }
    if (ctx->pc != 0x1CE008u) { return; }
    ctx->pc = 0x1CE008u;
    // 0x1ce008: 0x4bff6b7e
    ctx->pc = 0x1ce008u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ce00c: 0x4bfe6b7e
    ctx->pc = 0x1ce00cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ce010: 0x4bfd6b7e
    ctx->pc = 0x1ce010u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ce014: 0x1000015a
    ctx->pc = 0x1CE014u;
    {
        const bool branch_taken_0x1ce014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE018u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1ce014) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE01Cu;
label_1ce01c:
    // 0x1ce01c: 0x8c25f2e0
    ctx->pc = 0x1ce01cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294963936)));
    // 0x1ce020: 0x3c038000
    ctx->pc = 0x1ce020u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1ce024: 0xa31824
    ctx->pc = 0x1ce024u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ce028: 0x10600155
    ctx->pc = 0x1CE028u;
    {
        const bool branch_taken_0x1ce028 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce028) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE030u;
    // 0x1ce030: 0x8e230004
    ctx->pc = 0x1ce030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce034: 0x18600152
    ctx->pc = 0x1CE034u;
    {
        const bool branch_taken_0x1ce034 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CE038u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ce034) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE03Cu;
    // 0x1ce03c: 0x1469000a
    ctx->pc = 0x1CE03Cu;
    {
        const bool branch_taken_0x1ce03c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x1ce03c) {
            ctx->pc = 0x1CE068u;
            goto label_1ce068;
        }
    }
    ctx->pc = 0x1CE044u;
    // 0x1ce044: 0x8e250008
    ctx->pc = 0x1ce044u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ce048: 0x8e2a000c
    ctx->pc = 0x1ce048u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce04c: 0x240700f6
    ctx->pc = 0x1ce04cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 246));
    // 0x1ce050: 0xc073a1c
    ctx->pc = 0x1CE050u;
    SET_GPR_U32(ctx, 31, 0x1CE058u);
    ctx->pc = 0x1CE054u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CE870u;
    {
        const uint32_t __entryPc = ctx->pc;
        coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix_0x1ce870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE058u; }
        else if (ctx->pc != 0x1CE058u) { ctx->pc = 0x1CE058u; }
    }
    if (ctx->pc != 0x1CE058u) { return; }
    ctx->pc = 0x1CE058u;
    // 0x1ce058: 0x24020002
    ctx->pc = 0x1ce058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce05c: 0xae220004
    ctx->pc = 0x1ce05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ce060: 0xc07368c
    ctx->pc = 0x1CE060u;
    SET_GPR_U32(ctx, 31, 0x1CE068u);
    ctx->pc = 0x1CE064u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CDA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset__9CClothMgrFv_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE068u; }
        else if (ctx->pc != 0x1CE068u) { ctx->pc = 0x1CE068u; }
    }
    if (ctx->pc != 0x1CE068u) { return; }
    ctx->pc = 0x1CE068u;
label_1ce068:
    // 0x1ce068: 0x8e240004
    ctx->pc = 0x1ce068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce06c: 0x24030002
    ctx->pc = 0x1ce06cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce070: 0x14830143
    ctx->pc = 0x1CE070u;
    {
        const bool branch_taken_0x1ce070 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ce070) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE078u;
    // 0x1ce078: 0x8f858c48
    ctx->pc = 0x1ce078u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1ce07c: 0x26260010
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ce080: 0x24040008
    ctx->pc = 0x1ce080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce084: 0x8ca30004
    ctx->pc = 0x1ce084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce088: 0x31040
    ctx->pc = 0x1ce088u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ce08c: 0x431021
    ctx->pc = 0x1ce08cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce090: 0x21080
    ctx->pc = 0x1ce090u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ce094: 0x431021
    ctx->pc = 0x1ce094u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce098: 0x21100
    ctx->pc = 0x1ce098u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ce09c: 0xa21021
    ctx->pc = 0x1ce09cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ce0a0: 0x24450050
    ctx->pc = 0x1ce0a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 80));
    // 0x1ce0a4: 0x70a03e28
    ctx->pc = 0x1ce0a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1ce0a8:
    // 0x1ce0a8: 0x8ce30000
    ctx->pc = 0x1ce0a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ce0ac: 0x8ce20004
    ctx->pc = 0x1ce0acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ce0b0: 0x2484ffff
    ctx->pc = 0x1ce0b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ce0b4: 0xacc30000
    ctx->pc = 0x1ce0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce0b8: 0xacc20004
    ctx->pc = 0x1ce0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ce0bc: 0x24e70008
    ctx->pc = 0x1ce0bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ce0c0: 0x1c80fff9
    ctx->pc = 0x1CE0C0u;
    {
        const bool branch_taken_0x1ce0c0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CE0C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1ce0c0) {
            ctx->pc = 0x1CE0A8u;
            goto label_1ce0a8;
        }
    }
    ctx->pc = 0x1CE0C8u;
    // 0x1ce0c8: 0xc072f44
    ctx->pc = 0x1CE0C8u;
    SET_GPR_U32(ctx, 31, 0x1CE0D0u);
    ctx->pc = 0x1CE0CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0D0u; }
        else if (ctx->pc != 0x1CE0D0u) { ctx->pc = 0x1CE0D0u; }
    }
    if (ctx->pc != 0x1CE0D0u) { return; }
    ctx->pc = 0x1CE0D0u;
    // 0x1ce0d0: 0x70009628
    ctx->pc = 0x1ce0d0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce0d4: 0x70009e28
    ctx->pc = 0x1ce0d4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ce0d8:
    // 0x1ce0d8: 0x8e22000c
    ctx->pc = 0x1ce0d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce0dc: 0x26070030
    ctx->pc = 0x1ce0dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ce0e0: 0x24050008
    ctx->pc = 0x1ce0e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce0e4: 0x532021
    ctx->pc = 0x1ce0e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ce0e8: 0x70803628
    ctx->pc = 0x1ce0e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ce0ec: 0x0
    ctx->pc = 0x1ce0ecu;
    // NOP
label_1ce0f0:
    // 0x1ce0f0: 0x8ce30000
    ctx->pc = 0x1ce0f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ce0f4: 0x8ce20004
    ctx->pc = 0x1ce0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ce0f8: 0x24a5ffff
    ctx->pc = 0x1ce0f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ce0fc: 0xacc30000
    ctx->pc = 0x1ce0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce100: 0xacc20004
    ctx->pc = 0x1ce100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ce104: 0x24e70008
    ctx->pc = 0x1ce104u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ce108: 0x1ca0fff9
    ctx->pc = 0x1CE108u;
    {
        const bool branch_taken_0x1ce108 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1CE10Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1ce108) {
            ctx->pc = 0x1CE0F0u;
            goto label_1ce0f0;
        }
    }
    ctx->pc = 0x1CE110u;
    // 0x1ce110: 0xc072f44
    ctx->pc = 0x1CE110u;
    SET_GPR_U32(ctx, 31, 0x1CE118u);
    ctx->pc = 0x1CE114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE118u; }
        else if (ctx->pc != 0x1CE118u) { ctx->pc = 0x1CE118u; }
    }
    if (ctx->pc != 0x1CE118u) { return; }
    ctx->pc = 0x1CE118u;
    // 0x1ce118: 0x26520001
    ctx->pc = 0x1ce118u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ce11c: 0x2a420016
    ctx->pc = 0x1ce11cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 22));
    // 0x1ce120: 0x26730040
    ctx->pc = 0x1ce120u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x1ce124: 0x1440ffec
    ctx->pc = 0x1CE124u;
    {
        const bool branch_taken_0x1ce124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE128u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
        if (branch_taken_0x1ce124) {
            ctx->pc = 0x1CE0D8u;
            goto label_1ce0d8;
        }
    }
    ctx->pc = 0x1CE12Cu;
    // 0x1ce12c: 0x4bede37d
    ctx->pc = 0x1ce12cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ce130: 0x4bedeb7d
    ctx->pc = 0x1ce130u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ce134: 0x4bedf37d
    ctx->pc = 0x1ce134u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1ce138: 0x4bedfb7d
    ctx->pc = 0x1ce138u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1ce13c: 0x3c020050
    ctx->pc = 0x1ce13cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ce140: 0xc07ce18
    ctx->pc = 0x1CE140u;
    SET_GPR_U32(ctx, 31, 0x1CE148u);
    ctx->pc = 0x1CE144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE148u; }
        else if (ctx->pc != 0x1CE148u) { ctx->pc = 0x1CE148u; }
    }
    if (ctx->pc != 0x1CE148u) { return; }
    ctx->pc = 0x1CE148u;
    // 0x1ce148: 0x1c40000c
    ctx->pc = 0x1CE148u;
    {
        const bool branch_taken_0x1ce148 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ce148) {
            ctx->pc = 0x1CE17Cu;
            goto label_1ce17c;
        }
    }
    ctx->pc = 0x1CE150u;
    // 0x1ce150: 0x8e25000c
    ctx->pc = 0x1ce150u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce154: 0xc073b58
    ctx->pc = 0x1CE154u;
    SET_GPR_U32(ctx, 31, 0x1CE15Cu);
    ctx->pc = 0x1CE158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1CED60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcOneskin__6CClothFP11tagNLmatrix_0x1ced60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE15Cu; }
        else if (ctx->pc != 0x1CE15Cu) { ctx->pc = 0x1CE15Cu; }
    }
    if (ctx->pc != 0x1CE15Cu) { return; }
    ctx->pc = 0x1CE15Cu;
    // 0x1ce15c: 0x8e240008
    ctx->pc = 0x1ce15cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ce160: 0x8e25000c
    ctx->pc = 0x1ce160u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce164: 0xc073bec
    ctx->pc = 0x1CE164u;
    SET_GPR_U32(ctx, 31, 0x1CE16Cu);
    ctx->pc = 0x1CE168u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CEFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cefb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE16Cu; }
        else if (ctx->pc != 0x1CE16Cu) { ctx->pc = 0x1CE16Cu; }
    }
    if (ctx->pc != 0x1CE16Cu) { return; }
    ctx->pc = 0x1CE16Cu;
    // 0x1ce16c: 0xc074a1c
    ctx->pc = 0x1CE16Cu;
    SET_GPR_U32(ctx, 31, 0x1CE174u);
    ctx->pc = 0x1CE170u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1D2870u;
    {
        const uint32_t __entryPc = ctx->pc;
        writePol__6CClothFv_0x1d2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE174u; }
        else if (ctx->pc != 0x1CE174u) { ctx->pc = 0x1CE174u; }
    }
    if (ctx->pc != 0x1CE174u) { return; }
    ctx->pc = 0x1CE174u;
    // 0x1ce174: 0xc0552d8
    ctx->pc = 0x1CE174u;
    SET_GPR_U32(ctx, 31, 0x1CE17Cu);
    ctx->pc = 0x1CE178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE17Cu; }
        else if (ctx->pc != 0x1CE17Cu) { ctx->pc = 0x1CE17Cu; }
    }
    if (ctx->pc != 0x1CE17Cu) { return; }
    ctx->pc = 0x1CE17Cu;
label_1ce17c:
    // 0x1ce17c: 0x8e22000c
    ctx->pc = 0x1ce17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce180: 0xc06c038
    ctx->pc = 0x1CE180u;
    SET_GPR_U32(ctx, 31, 0x1CE188u);
    ctx->pc = 0x1CE184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE188u; }
        else if (ctx->pc != 0x1CE188u) { ctx->pc = 0x1CE188u; }
    }
    if (ctx->pc != 0x1CE188u) { return; }
    ctx->pc = 0x1CE188u;
    // 0x1ce188: 0x3c02008c
    ctx->pc = 0x1ce188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)140 << 16));
    // 0x1ce18c: 0xc0853ac
    ctx->pc = 0x1CE18Cu;
    SET_GPR_U32(ctx, 31, 0x1CE194u);
    ctx->pc = 0x1CE190u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 17));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE194u; }
        else if (ctx->pc != 0x1CE194u) { ctx->pc = 0x1CE194u; }
    }
    if (ctx->pc != 0x1CE194u) { return; }
    ctx->pc = 0x1CE194u;
    // 0x1ce194: 0x4bff6b7e
    ctx->pc = 0x1ce194u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ce198: 0x4bfe6b7e
    ctx->pc = 0x1ce198u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ce19c: 0x4bfd6b7e
    ctx->pc = 0x1ce19cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ce1a0: 0x100000f7
    ctx->pc = 0x1CE1A0u;
    {
        const bool branch_taken_0x1ce1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE1A4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1ce1a0) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE1A8u;
label_1ce1a8:
    // 0x1ce1a8: 0x8c25f360
    ctx->pc = 0x1ce1a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294964064)));
    // 0x1ce1ac: 0x3c038000
    ctx->pc = 0x1ce1acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1ce1b0: 0xa31824
    ctx->pc = 0x1ce1b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ce1b4: 0x106000f2
    ctx->pc = 0x1CE1B4u;
    {
        const bool branch_taken_0x1ce1b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce1b4) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE1BCu;
    // 0x1ce1bc: 0x8e230004
    ctx->pc = 0x1ce1bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce1c0: 0x186000ef
    ctx->pc = 0x1CE1C0u;
    {
        const bool branch_taken_0x1ce1c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CE1C4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ce1c0) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE1C8u;
    // 0x1ce1c8: 0x1469000a
    ctx->pc = 0x1CE1C8u;
    {
        const bool branch_taken_0x1ce1c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x1ce1c8) {
            ctx->pc = 0x1CE1F4u;
            goto label_1ce1f4;
        }
    }
    ctx->pc = 0x1CE1D0u;
    // 0x1ce1d0: 0x8e250008
    ctx->pc = 0x1ce1d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ce1d4: 0x8e2a000c
    ctx->pc = 0x1ce1d4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce1d8: 0x240701d1
    ctx->pc = 0x1ce1d8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 465));
    // 0x1ce1dc: 0xc073a1c
    ctx->pc = 0x1CE1DCu;
    SET_GPR_U32(ctx, 31, 0x1CE1E4u);
    ctx->pc = 0x1CE1E0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CE870u;
    {
        const uint32_t __entryPc = ctx->pc;
        coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix_0x1ce870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1E4u; }
        else if (ctx->pc != 0x1CE1E4u) { ctx->pc = 0x1CE1E4u; }
    }
    if (ctx->pc != 0x1CE1E4u) { return; }
    ctx->pc = 0x1CE1E4u;
    // 0x1ce1e4: 0x24020002
    ctx->pc = 0x1ce1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce1e8: 0xae220004
    ctx->pc = 0x1ce1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ce1ec: 0xc07368c
    ctx->pc = 0x1CE1ECu;
    SET_GPR_U32(ctx, 31, 0x1CE1F4u);
    ctx->pc = 0x1CE1F0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CDA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset__9CClothMgrFv_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE1F4u; }
        else if (ctx->pc != 0x1CE1F4u) { ctx->pc = 0x1CE1F4u; }
    }
    if (ctx->pc != 0x1CE1F4u) { return; }
    ctx->pc = 0x1CE1F4u;
label_1ce1f4:
    // 0x1ce1f4: 0x8e240004
    ctx->pc = 0x1ce1f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce1f8: 0x24030002
    ctx->pc = 0x1ce1f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce1fc: 0x148300e0
    ctx->pc = 0x1CE1FCu;
    {
        const bool branch_taken_0x1ce1fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ce1fc) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE204u;
    // 0x1ce204: 0x8f858c48
    ctx->pc = 0x1ce204u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1ce208: 0x26260010
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ce20c: 0x24040008
    ctx->pc = 0x1ce20cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce210: 0x8ca30004
    ctx->pc = 0x1ce210u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce214: 0x31040
    ctx->pc = 0x1ce214u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ce218: 0x431021
    ctx->pc = 0x1ce218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce21c: 0x21080
    ctx->pc = 0x1ce21cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ce220: 0x431021
    ctx->pc = 0x1ce220u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce224: 0x21100
    ctx->pc = 0x1ce224u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ce228: 0xa21021
    ctx->pc = 0x1ce228u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ce22c: 0x24450050
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 80));
    // 0x1ce230: 0x70a03e28
    ctx->pc = 0x1ce230u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1ce234:
    // 0x1ce234: 0x8ce30000
    ctx->pc = 0x1ce234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ce238: 0x8ce20004
    ctx->pc = 0x1ce238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ce23c: 0x2484ffff
    ctx->pc = 0x1ce23cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ce240: 0xacc30000
    ctx->pc = 0x1ce240u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce244: 0xacc20004
    ctx->pc = 0x1ce244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ce248: 0x24e70008
    ctx->pc = 0x1ce248u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ce24c: 0x1c80fff9
    ctx->pc = 0x1CE24Cu;
    {
        const bool branch_taken_0x1ce24c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CE250u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1ce24c) {
            ctx->pc = 0x1CE234u;
            goto label_1ce234;
        }
    }
    ctx->pc = 0x1CE254u;
    // 0x1ce254: 0xc072f44
    ctx->pc = 0x1CE254u;
    SET_GPR_U32(ctx, 31, 0x1CE25Cu);
    ctx->pc = 0x1CE258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE25Cu; }
        else if (ctx->pc != 0x1CE25Cu) { ctx->pc = 0x1CE25Cu; }
    }
    if (ctx->pc != 0x1CE25Cu) { return; }
    ctx->pc = 0x1CE25Cu;
    // 0x1ce25c: 0x70009628
    ctx->pc = 0x1ce25cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce260: 0x70009e28
    ctx->pc = 0x1ce260u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ce264:
    // 0x1ce264: 0x8e22000c
    ctx->pc = 0x1ce264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce268: 0x26070030
    ctx->pc = 0x1ce268u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ce26c: 0x24050008
    ctx->pc = 0x1ce26cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce270: 0x532021
    ctx->pc = 0x1ce270u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ce274: 0x70803628
    ctx->pc = 0x1ce274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1ce278:
    // 0x1ce278: 0x8ce30000
    ctx->pc = 0x1ce278u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ce27c: 0x8ce20004
    ctx->pc = 0x1ce27cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ce280: 0x24a5ffff
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ce284: 0xacc30000
    ctx->pc = 0x1ce284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce288: 0xacc20004
    ctx->pc = 0x1ce288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ce28c: 0x24e70008
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ce290: 0x1ca0fff9
    ctx->pc = 0x1CE290u;
    {
        const bool branch_taken_0x1ce290 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1CE294u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1ce290) {
            ctx->pc = 0x1CE278u;
            goto label_1ce278;
        }
    }
    ctx->pc = 0x1CE298u;
    // 0x1ce298: 0xc072f44
    ctx->pc = 0x1CE298u;
    SET_GPR_U32(ctx, 31, 0x1CE2A0u);
    ctx->pc = 0x1CE29Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2A0u; }
        else if (ctx->pc != 0x1CE2A0u) { ctx->pc = 0x1CE2A0u; }
    }
    if (ctx->pc != 0x1CE2A0u) { return; }
    ctx->pc = 0x1CE2A0u;
    // 0x1ce2a0: 0x26520001
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ce2a4: 0x2a420016
    ctx->pc = 0x1ce2a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 22));
    // 0x1ce2a8: 0x26730040
    ctx->pc = 0x1ce2a8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x1ce2ac: 0x1440ffed
    ctx->pc = 0x1CE2ACu;
    {
        const bool branch_taken_0x1ce2ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE2B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
        if (branch_taken_0x1ce2ac) {
            ctx->pc = 0x1CE264u;
            goto label_1ce264;
        }
    }
    ctx->pc = 0x1CE2B4u;
    // 0x1ce2b4: 0x4bede37d
    ctx->pc = 0x1ce2b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ce2b8: 0x4bedeb7d
    ctx->pc = 0x1ce2b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ce2bc: 0x4bedf37d
    ctx->pc = 0x1ce2bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1ce2c0: 0x4bedfb7d
    ctx->pc = 0x1ce2c0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1ce2c4: 0x3c020050
    ctx->pc = 0x1ce2c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ce2c8: 0xc07ce18
    ctx->pc = 0x1CE2C8u;
    SET_GPR_U32(ctx, 31, 0x1CE2D0u);
    ctx->pc = 0x1CE2CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2D0u; }
        else if (ctx->pc != 0x1CE2D0u) { ctx->pc = 0x1CE2D0u; }
    }
    if (ctx->pc != 0x1CE2D0u) { return; }
    ctx->pc = 0x1CE2D0u;
    // 0x1ce2d0: 0x1c40000c
    ctx->pc = 0x1CE2D0u;
    {
        const bool branch_taken_0x1ce2d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ce2d0) {
            ctx->pc = 0x1CE304u;
            goto label_1ce304;
        }
    }
    ctx->pc = 0x1CE2D8u;
    // 0x1ce2d8: 0x8e25000c
    ctx->pc = 0x1ce2d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce2dc: 0xc073b58
    ctx->pc = 0x1CE2DCu;
    SET_GPR_U32(ctx, 31, 0x1CE2E4u);
    ctx->pc = 0x1CE2E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1CED60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcOneskin__6CClothFP11tagNLmatrix_0x1ced60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2E4u; }
        else if (ctx->pc != 0x1CE2E4u) { ctx->pc = 0x1CE2E4u; }
    }
    if (ctx->pc != 0x1CE2E4u) { return; }
    ctx->pc = 0x1CE2E4u;
    // 0x1ce2e4: 0x8e240008
    ctx->pc = 0x1ce2e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ce2e8: 0x8e25000c
    ctx->pc = 0x1ce2e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce2ec: 0xc073bec
    ctx->pc = 0x1CE2ECu;
    SET_GPR_U32(ctx, 31, 0x1CE2F4u);
    ctx->pc = 0x1CE2F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CEFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cefb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2F4u; }
        else if (ctx->pc != 0x1CE2F4u) { ctx->pc = 0x1CE2F4u; }
    }
    if (ctx->pc != 0x1CE2F4u) { return; }
    ctx->pc = 0x1CE2F4u;
    // 0x1ce2f4: 0xc074a1c
    ctx->pc = 0x1CE2F4u;
    SET_GPR_U32(ctx, 31, 0x1CE2FCu);
    ctx->pc = 0x1CE2F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1D2870u;
    {
        const uint32_t __entryPc = ctx->pc;
        writePol__6CClothFv_0x1d2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2FCu; }
        else if (ctx->pc != 0x1CE2FCu) { ctx->pc = 0x1CE2FCu; }
    }
    if (ctx->pc != 0x1CE2FCu) { return; }
    ctx->pc = 0x1CE2FCu;
    // 0x1ce2fc: 0xc0552d8
    ctx->pc = 0x1CE2FCu;
    SET_GPR_U32(ctx, 31, 0x1CE304u);
    ctx->pc = 0x1CE300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE304u; }
        else if (ctx->pc != 0x1CE304u) { ctx->pc = 0x1CE304u; }
    }
    if (ctx->pc != 0x1CE304u) { return; }
    ctx->pc = 0x1CE304u;
label_1ce304:
    // 0x1ce304: 0x8e22000c
    ctx->pc = 0x1ce304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce308: 0xc06c038
    ctx->pc = 0x1CE308u;
    SET_GPR_U32(ctx, 31, 0x1CE310u);
    ctx->pc = 0x1CE30Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE310u; }
        else if (ctx->pc != 0x1CE310u) { ctx->pc = 0x1CE310u; }
    }
    if (ctx->pc != 0x1CE310u) { return; }
    ctx->pc = 0x1CE310u;
    // 0x1ce310: 0x3c020094
    ctx->pc = 0x1ce310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)148 << 16));
    // 0x1ce314: 0xc0853ac
    ctx->pc = 0x1CE314u;
    SET_GPR_U32(ctx, 31, 0x1CE31Cu);
    ctx->pc = 0x1CE318u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 18));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE31Cu; }
        else if (ctx->pc != 0x1CE31Cu) { ctx->pc = 0x1CE31Cu; }
    }
    if (ctx->pc != 0x1CE31Cu) { return; }
    ctx->pc = 0x1CE31Cu;
    // 0x1ce31c: 0x4bff6b7e
    ctx->pc = 0x1ce31cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ce320: 0x4bfe6b7e
    ctx->pc = 0x1ce320u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ce324: 0x4bfd6b7e
    ctx->pc = 0x1ce324u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ce328: 0x10000095
    ctx->pc = 0x1CE328u;
    {
        const bool branch_taken_0x1ce328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE32Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1ce328) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE330u;
label_1ce330:
    // 0x1ce330: 0x72003628
    ctx->pc = 0x1ce330u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ce334: 0x3c070095
    ctx->pc = 0x1ce334u;
    SET_GPR_U32(ctx, 7, ((uint32_t)149 << 16));
    // 0x1ce338: 0x240901e0
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 480));
    // 0x1ce33c: 0xc0736d0
    ctx->pc = 0x1CE33Cu;
    SET_GPR_U32(ctx, 31, 0x1CE344u);
    ctx->pc = 0x1CE340u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CDB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrlSubX__9CClothMgrFiP6MOPRTSiiii_0x1cdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE344u; }
        else if (ctx->pc != 0x1CE344u) { ctx->pc = 0x1CE344u; }
    }
    if (ctx->pc != 0x1CE344u) { return; }
    ctx->pc = 0x1CE344u;
    // 0x1ce344: 0x24050001
    ctx->pc = 0x1ce344u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce348: 0x3c020095
    ctx->pc = 0x1ce348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)149 << 16));
    // 0x1ce34c: 0x72202628
    ctx->pc = 0x1ce34cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ce350: 0x72003628
    ctx->pc = 0x1ce350u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ce354: 0x34470005
    ctx->pc = 0x1ce354u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 5));
    // 0x1ce358: 0x24080021
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1ce35c: 0x240901e0
    ctx->pc = 0x1ce35cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 480));
    // 0x1ce360: 0xc0736d0
    ctx->pc = 0x1CE360u;
    SET_GPR_U32(ctx, 31, 0x1CE368u);
    ctx->pc = 0x1CE364u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CDB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrlSubX__9CClothMgrFiP6MOPRTSiiii_0x1cdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE368u; }
        else if (ctx->pc != 0x1CE368u) { ctx->pc = 0x1CE368u; }
    }
    if (ctx->pc != 0x1CE368u) { return; }
    ctx->pc = 0x1CE368u;
    // 0x1ce368: 0x3c020095
    ctx->pc = 0x1ce368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)149 << 16));
    // 0x1ce36c: 0x72202628
    ctx->pc = 0x1ce36cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ce370: 0x24050002
    ctx->pc = 0x1ce370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce374: 0x72003628
    ctx->pc = 0x1ce374u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ce378: 0x3447000a
    ctx->pc = 0x1ce378u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 10));
    // 0x1ce37c: 0x24080021
    ctx->pc = 0x1ce37cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1ce380: 0x240901e0
    ctx->pc = 0x1ce380u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 480));
    // 0x1ce384: 0xc0736d0
    ctx->pc = 0x1CE384u;
    SET_GPR_U32(ctx, 31, 0x1CE38Cu);
    ctx->pc = 0x1CE388u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CDB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrlSubX__9CClothMgrFiP6MOPRTSiiii_0x1cdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE38Cu; }
        else if (ctx->pc != 0x1CE38Cu) { ctx->pc = 0x1CE38Cu; }
    }
    if (ctx->pc != 0x1CE38Cu) { return; }
    ctx->pc = 0x1CE38Cu;
    // 0x1ce38c: 0x3c020095
    ctx->pc = 0x1ce38cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)149 << 16));
    // 0x1ce390: 0x72202628
    ctx->pc = 0x1ce390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ce394: 0x72003628
    ctx->pc = 0x1ce394u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ce398: 0x24050003
    ctx->pc = 0x1ce398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce39c: 0x3447001d
    ctx->pc = 0x1ce39cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 29));
    // 0x1ce3a0: 0x24080021
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 33));
    // 0x1ce3a4: 0x240901e0
    ctx->pc = 0x1ce3a4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 480));
    // 0x1ce3a8: 0xc0736d0
    ctx->pc = 0x1CE3A8u;
    SET_GPR_U32(ctx, 31, 0x1CE3B0u);
    ctx->pc = 0x1CE3ACu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x1CDB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrlSubX__9CClothMgrFiP6MOPRTSiiii_0x1cdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3B0u; }
        else if (ctx->pc != 0x1CE3B0u) { ctx->pc = 0x1CE3B0u; }
    }
    if (ctx->pc != 0x1CE3B0u) { return; }
    ctx->pc = 0x1CE3B0u;
    // 0x1ce3b0: 0x10000073
    ctx->pc = 0x1CE3B0u;
    {
        const bool branch_taken_0x1ce3b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce3b0) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE3B8u;
label_1ce3b8:
    // 0x1ce3b8: 0x8c25f380
    ctx->pc = 0x1ce3b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294964096)));
    // 0x1ce3bc: 0x3c038000
    ctx->pc = 0x1ce3bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1ce3c0: 0xa31824
    ctx->pc = 0x1ce3c0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ce3c4: 0x1060006e
    ctx->pc = 0x1CE3C4u;
    {
        const bool branch_taken_0x1ce3c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce3c4) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE3CCu;
    // 0x1ce3cc: 0x8e230004
    ctx->pc = 0x1ce3ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce3d0: 0x1860006b
    ctx->pc = 0x1CE3D0u;
    {
        const bool branch_taken_0x1ce3d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CE3D4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ce3d0) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE3D8u;
    // 0x1ce3d8: 0x1469000a
    ctx->pc = 0x1CE3D8u;
    {
        const bool branch_taken_0x1ce3d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x1ce3d8) {
            ctx->pc = 0x1CE404u;
            goto label_1ce404;
        }
    }
    ctx->pc = 0x1CE3E0u;
    // 0x1ce3e0: 0x8e250008
    ctx->pc = 0x1ce3e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ce3e4: 0x8e2a000c
    ctx->pc = 0x1ce3e4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce3e8: 0x24070134
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 308));
    // 0x1ce3ec: 0xc073a1c
    ctx->pc = 0x1CE3ECu;
    SET_GPR_U32(ctx, 31, 0x1CE3F4u);
    ctx->pc = 0x1CE3F0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CE870u;
    {
        const uint32_t __entryPc = ctx->pc;
        coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix_0x1ce870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE3F4u; }
        else if (ctx->pc != 0x1CE3F4u) { ctx->pc = 0x1CE3F4u; }
    }
    if (ctx->pc != 0x1CE3F4u) { return; }
    ctx->pc = 0x1CE3F4u;
    // 0x1ce3f4: 0x24020002
    ctx->pc = 0x1ce3f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce3f8: 0xae220004
    ctx->pc = 0x1ce3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ce3fc: 0xc07368c
    ctx->pc = 0x1CE3FCu;
    SET_GPR_U32(ctx, 31, 0x1CE404u);
    ctx->pc = 0x1CE400u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CDA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset__9CClothMgrFv_0x1cda30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE404u; }
        else if (ctx->pc != 0x1CE404u) { ctx->pc = 0x1CE404u; }
    }
    if (ctx->pc != 0x1CE404u) { return; }
    ctx->pc = 0x1CE404u;
label_1ce404:
    // 0x1ce404: 0x8e240004
    ctx->pc = 0x1ce404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce408: 0x24030002
    ctx->pc = 0x1ce408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce40c: 0x1483005c
    ctx->pc = 0x1CE40Cu;
    {
        const bool branch_taken_0x1ce40c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ce40c) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE414u;
    // 0x1ce414: 0x8f858c48
    ctx->pc = 0x1ce414u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1ce418: 0x26260010
    ctx->pc = 0x1ce418u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1ce41c: 0x24040008
    ctx->pc = 0x1ce41cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce420: 0x8ca30004
    ctx->pc = 0x1ce420u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce424: 0x31040
    ctx->pc = 0x1ce424u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ce428: 0x431021
    ctx->pc = 0x1ce428u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce42c: 0x21080
    ctx->pc = 0x1ce42cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ce430: 0x431021
    ctx->pc = 0x1ce430u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce434: 0x21100
    ctx->pc = 0x1ce434u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ce438: 0xa21021
    ctx->pc = 0x1ce438u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ce43c: 0x24450050
    ctx->pc = 0x1ce43cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 80));
    // 0x1ce440: 0x70a03e28
    ctx->pc = 0x1ce440u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1ce444:
    // 0x1ce444: 0x8ce30000
    ctx->pc = 0x1ce444u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ce448: 0x8ce20004
    ctx->pc = 0x1ce448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ce44c: 0x2484ffff
    ctx->pc = 0x1ce44cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ce450: 0xacc30000
    ctx->pc = 0x1ce450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce454: 0xacc20004
    ctx->pc = 0x1ce454u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ce458: 0x24e70008
    ctx->pc = 0x1ce458u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ce45c: 0x1c80fff9
    ctx->pc = 0x1CE45Cu;
    {
        const bool branch_taken_0x1ce45c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CE460u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1ce45c) {
            ctx->pc = 0x1CE444u;
            goto label_1ce444;
        }
    }
    ctx->pc = 0x1CE464u;
    // 0x1ce464: 0xc072f44
    ctx->pc = 0x1CE464u;
    SET_GPR_U32(ctx, 31, 0x1CE46Cu);
    ctx->pc = 0x1CE468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE46Cu; }
        else if (ctx->pc != 0x1CE46Cu) { ctx->pc = 0x1CE46Cu; }
    }
    if (ctx->pc != 0x1CE46Cu) { return; }
    ctx->pc = 0x1CE46Cu;
    // 0x1ce46c: 0x70009628
    ctx->pc = 0x1ce46cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce470: 0x70009e28
    ctx->pc = 0x1ce470u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ce474:
    // 0x1ce474: 0x8e22000c
    ctx->pc = 0x1ce474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce478: 0x26070030
    ctx->pc = 0x1ce478u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ce47c: 0x24050008
    ctx->pc = 0x1ce47cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce480: 0x532021
    ctx->pc = 0x1ce480u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ce484: 0x70803628
    ctx->pc = 0x1ce484u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1ce488:
    // 0x1ce488: 0x8ce30000
    ctx->pc = 0x1ce488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ce48c: 0x8ce20004
    ctx->pc = 0x1ce48cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1ce490: 0x24a5ffff
    ctx->pc = 0x1ce490u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ce494: 0xacc30000
    ctx->pc = 0x1ce494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce498: 0xacc20004
    ctx->pc = 0x1ce498u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1ce49c: 0x24e70008
    ctx->pc = 0x1ce49cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ce4a0: 0x1ca0fff9
    ctx->pc = 0x1CE4A0u;
    {
        const bool branch_taken_0x1ce4a0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1CE4A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1ce4a0) {
            ctx->pc = 0x1CE488u;
            goto label_1ce488;
        }
    }
    ctx->pc = 0x1CE4A8u;
    // 0x1ce4a8: 0xc072f44
    ctx->pc = 0x1CE4A8u;
    SET_GPR_U32(ctx, 31, 0x1CE4B0u);
    ctx->pc = 0x1CE4ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4B0u; }
        else if (ctx->pc != 0x1CE4B0u) { ctx->pc = 0x1CE4B0u; }
    }
    if (ctx->pc != 0x1CE4B0u) { return; }
    ctx->pc = 0x1CE4B0u;
    // 0x1ce4b0: 0x26520001
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ce4b4: 0x2a420016
    ctx->pc = 0x1ce4b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 22));
    // 0x1ce4b8: 0x26730040
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 64));
    // 0x1ce4bc: 0x1440ffed
    ctx->pc = 0x1CE4BCu;
    {
        const bool branch_taken_0x1ce4bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE4C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 240));
        if (branch_taken_0x1ce4bc) {
            ctx->pc = 0x1CE474u;
            goto label_1ce474;
        }
    }
    ctx->pc = 0x1CE4C4u;
    // 0x1ce4c4: 0x4bede37d
    ctx->pc = 0x1ce4c4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ce4c8: 0x4bedeb7d
    ctx->pc = 0x1ce4c8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ce4cc: 0x4bedf37d
    ctx->pc = 0x1ce4ccu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1ce4d0: 0x4bedfb7d
    ctx->pc = 0x1ce4d0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1ce4d4: 0x3c020050
    ctx->pc = 0x1ce4d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ce4d8: 0xc07ce18
    ctx->pc = 0x1CE4D8u;
    SET_GPR_U32(ctx, 31, 0x1CE4E0u);
    ctx->pc = 0x1CE4DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4E0u; }
        else if (ctx->pc != 0x1CE4E0u) { ctx->pc = 0x1CE4E0u; }
    }
    if (ctx->pc != 0x1CE4E0u) { return; }
    ctx->pc = 0x1CE4E0u;
    // 0x1ce4e0: 0x1c40000c
    ctx->pc = 0x1CE4E0u;
    {
        const bool branch_taken_0x1ce4e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ce4e0) {
            ctx->pc = 0x1CE514u;
            goto label_1ce514;
        }
    }
    ctx->pc = 0x1CE4E8u;
    // 0x1ce4e8: 0x8e25000c
    ctx->pc = 0x1ce4e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce4ec: 0xc073b58
    ctx->pc = 0x1CE4ECu;
    SET_GPR_U32(ctx, 31, 0x1CE4F4u);
    ctx->pc = 0x1CE4F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1CED60u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcOneskin__6CClothFP11tagNLmatrix_0x1ced60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE4F4u; }
        else if (ctx->pc != 0x1CE4F4u) { ctx->pc = 0x1CE4F4u; }
    }
    if (ctx->pc != 0x1CE4F4u) { return; }
    ctx->pc = 0x1CE4F4u;
    // 0x1ce4f4: 0x8e240008
    ctx->pc = 0x1ce4f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ce4f8: 0x8e25000c
    ctx->pc = 0x1ce4f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce4fc: 0xc073bec
    ctx->pc = 0x1CE4FCu;
    SET_GPR_U32(ctx, 31, 0x1CE504u);
    ctx->pc = 0x1CE500u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1CEFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcPhysics__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1cefb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE504u; }
        else if (ctx->pc != 0x1CE504u) { ctx->pc = 0x1CE504u; }
    }
    if (ctx->pc != 0x1CE504u) { return; }
    ctx->pc = 0x1CE504u;
    // 0x1ce504: 0xc074a1c
    ctx->pc = 0x1CE504u;
    SET_GPR_U32(ctx, 31, 0x1CE50Cu);
    ctx->pc = 0x1CE508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x1D2870u;
    {
        const uint32_t __entryPc = ctx->pc;
        writePol__6CClothFv_0x1d2870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE50Cu; }
        else if (ctx->pc != 0x1CE50Cu) { ctx->pc = 0x1CE50Cu; }
    }
    if (ctx->pc != 0x1CE50Cu) { return; }
    ctx->pc = 0x1CE50Cu;
    // 0x1ce50c: 0xc0552d8
    ctx->pc = 0x1CE50Cu;
    SET_GPR_U32(ctx, 31, 0x1CE514u);
    ctx->pc = 0x1CE510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE514u; }
        else if (ctx->pc != 0x1CE514u) { ctx->pc = 0x1CE514u; }
    }
    if (ctx->pc != 0x1CE514u) { return; }
    ctx->pc = 0x1CE514u;
label_1ce514:
    // 0x1ce514: 0x8e22000c
    ctx->pc = 0x1ce514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ce518: 0xc06c038
    ctx->pc = 0x1CE518u;
    SET_GPR_U32(ctx, 31, 0x1CE520u);
    ctx->pc = 0x1CE51Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE520u; }
        else if (ctx->pc != 0x1CE520u) { ctx->pc = 0x1CE520u; }
    }
    if (ctx->pc != 0x1CE520u) { return; }
    ctx->pc = 0x1CE520u;
    // 0x1ce520: 0x3c020096
    ctx->pc = 0x1ce520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)150 << 16));
    // 0x1ce524: 0xc0853ac
    ctx->pc = 0x1CE524u;
    SET_GPR_U32(ctx, 31, 0x1CE52Cu);
    ctx->pc = 0x1CE528u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE52Cu; }
        else if (ctx->pc != 0x1CE52Cu) { ctx->pc = 0x1CE52Cu; }
    }
    if (ctx->pc != 0x1CE52Cu) { return; }
    ctx->pc = 0x1CE52Cu;
    // 0x1ce52c: 0x4bff6b7e
    ctx->pc = 0x1ce52cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ce530: 0x4bfe6b7e
    ctx->pc = 0x1ce530u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ce534: 0x4bfd6b7e
    ctx->pc = 0x1ce534u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ce538: 0x10000011
    ctx->pc = 0x1CE538u;
    {
        const bool branch_taken_0x1ce538 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE53Cu;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x1ce538) {
            ctx->pc = 0x1CE580u;
            goto label_1ce580;
        }
    }
    ctx->pc = 0x1CE540u;
label_1ce540:
    // 0x1ce540: 0x3c02008f
    ctx->pc = 0x1ce540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)143 << 16));
    // 0x1ce544: 0x70002e28
    ctx->pc = 0x1ce544u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce548: 0x72003628
    ctx->pc = 0x1ce548u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ce54c: 0x34470005
    ctx->pc = 0x1ce54cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 5));
    // 0x1ce550: 0x24090134
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 308));
    // 0x1ce554: 0xc0736d0
    ctx->pc = 0x1CE554u;
    SET_GPR_U32(ctx, 31, 0x1CE55Cu);
    ctx->pc = 0x1CE558u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1CDB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrlSubX__9CClothMgrFiP6MOPRTSiiii_0x1cdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE55Cu; }
        else if (ctx->pc != 0x1CE55Cu) { ctx->pc = 0x1CE55Cu; }
    }
    if (ctx->pc != 0x1CE55Cu) { return; }
    ctx->pc = 0x1CE55Cu;
    // 0x1ce55c: 0x3c02008f
    ctx->pc = 0x1ce55cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)143 << 16));
    // 0x1ce560: 0x72202628
    ctx->pc = 0x1ce560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ce564: 0x72003628
    ctx->pc = 0x1ce564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ce568: 0x24050001
    ctx->pc = 0x1ce568u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce56c: 0x34470006
    ctx->pc = 0x1ce56cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 6));
    // 0x1ce570: 0x24080014
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ce574: 0x24090134
    ctx->pc = 0x1ce574u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 308));
    // 0x1ce578: 0xc0736d0
    ctx->pc = 0x1CE578u;
    SET_GPR_U32(ctx, 31, 0x1CE580u);
    ctx->pc = 0x1CE57Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1CDB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrlSubX__9CClothMgrFiP6MOPRTSiiii_0x1cdb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE580u; }
        else if (ctx->pc != 0x1CE580u) { ctx->pc = 0x1CE580u; }
    }
    if (ctx->pc != 0x1CE580u) { return; }
    ctx->pc = 0x1CE580u;
label_1ce580:
    // 0x1ce580: 0x7bbf0040
    ctx->pc = 0x1ce580u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ce584:
    // 0x1ce584: 0x7bb30030
    ctx->pc = 0x1ce584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce588: 0x7bb20020
    ctx->pc = 0x1ce588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce58c: 0x7bb10010
    ctx->pc = 0x1ce58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce590: 0x7bb00000
    ctx->pc = 0x1ce590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce594: 0x3e00008
    ctx->pc = 0x1CE594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE598u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDE08u: goto label_1cde08;
            case 0x1CDE54u: goto label_1cde54;
            case 0x1CDE94u: goto label_1cde94;
            case 0x1CDEC4u: goto label_1cdec4;
            case 0x1CDED8u: goto label_1cded8;
            case 0x1CDF88u: goto label_1cdf88;
            case 0x1CDFF0u: goto label_1cdff0;
            case 0x1CE01Cu: goto label_1ce01c;
            case 0x1CE068u: goto label_1ce068;
            case 0x1CE0A8u: goto label_1ce0a8;
            case 0x1CE0D8u: goto label_1ce0d8;
            case 0x1CE0F0u: goto label_1ce0f0;
            case 0x1CE17Cu: goto label_1ce17c;
            case 0x1CE1A8u: goto label_1ce1a8;
            case 0x1CE1F4u: goto label_1ce1f4;
            case 0x1CE234u: goto label_1ce234;
            case 0x1CE264u: goto label_1ce264;
            case 0x1CE278u: goto label_1ce278;
            case 0x1CE304u: goto label_1ce304;
            case 0x1CE330u: goto label_1ce330;
            case 0x1CE3B8u: goto label_1ce3b8;
            case 0x1CE404u: goto label_1ce404;
            case 0x1CE444u: goto label_1ce444;
            case 0x1CE474u: goto label_1ce474;
            case 0x1CE488u: goto label_1ce488;
            case 0x1CE514u: goto label_1ce514;
            case 0x1CE540u: goto label_1ce540;
            case 0x1CE580u: goto label_1ce580;
            case 0x1CE584u: goto label_1ce584;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE59Cu;
}
