#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitGunAdjust__Fi
// Address: 0x1eab90 - 0x1ead84
void InitGunAdjust__Fi_0x1eab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitGunAdjust__Fi");


    ctx->pc = 0x1eab90u;

    // 0x1eab90: 0x27bdffa0
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1eab94: 0x7fbf0050
    ctx->pc = 0x1eab94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1eab98: 0x7fb40040
    ctx->pc = 0x1eab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eab9c: 0x7fb30030
    ctx->pc = 0x1eab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eaba0: 0x7fb20020
    ctx->pc = 0x1eaba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eaba4: 0x7fb10010
    ctx->pc = 0x1eaba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eaba8: 0x7fb00000
    ctx->pc = 0x1eaba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eabac: 0x3c010050
    ctx->pc = 0x1eabacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eabb0: 0x8423e504
    ctx->pc = 0x1eabb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1eabb4: 0x24020014
    ctx->pc = 0x1eabb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1eabb8: 0x14620013
    ctx->pc = 0x1EABB8u;
    {
        const bool branch_taken_0x1eabb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1EABBCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eabb8) {
            ctx->pc = 0x1EAC08u;
            goto label_1eac08;
        }
    }
    ctx->pc = 0x1EABC0u;
    // 0x1eabc0: 0x3c020051
    ctx->pc = 0x1eabc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1eabc4: 0x244437a0
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1eabc8: 0xc086578
    ctx->pc = 0x1EABC8u;
    SET_GPR_U32(ctx, 31, 0x1EABD0u);
    ctx->pc = 0x1EABCCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABD0u; }
        else if (ctx->pc != 0x1EABD0u) { ctx->pc = 0x1EABD0u; }
    }
    if (ctx->pc != 0x1EABD0u) { return; }
    ctx->pc = 0x1EABD0u;
    // 0x1eabd0: 0x3c020051
    ctx->pc = 0x1eabd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1eabd4: 0x244437a0
    ctx->pc = 0x1eabd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1eabd8: 0xc086578
    ctx->pc = 0x1EABD8u;
    SET_GPR_U32(ctx, 31, 0x1EABE0u);
    ctx->pc = 0x1EABDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 346));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EABE0u; }
        else if (ctx->pc != 0x1EABE0u) { ctx->pc = 0x1EABE0u; }
    }
    if (ctx->pc != 0x1EABE0u) { return; }
    ctx->pc = 0x1EABE0u;
    // 0x1eabe0: 0x3c010050
    ctx->pc = 0x1eabe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1eabe4: 0x8025fec5
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1eabe8: 0x3c02002c
    ctx->pc = 0x1eabe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1eabec: 0x2443f7a0
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965152));
    // 0x1eabf0: 0x3c020051
    ctx->pc = 0x1eabf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1eabf4: 0x244437a0
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1eabf8: 0x51080
    ctx->pc = 0x1eabf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1eabfc: 0x621021
    ctx->pc = 0x1eabfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eac00: 0xc086578
    ctx->pc = 0x1EAC00u;
    SET_GPR_U32(ctx, 31, 0x1EAC08u);
    ctx->pc = 0x1EAC04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC08u; }
        else if (ctx->pc != 0x1EAC08u) { ctx->pc = 0x1EAC08u; }
    }
    if (ctx->pc != 0x1EAC08u) { return; }
    ctx->pc = 0x1EAC08u;
label_1eac08:
    // 0x1eac08: 0x24020001
    ctx->pc = 0x1eac08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac0c: 0xaf828dc8
    ctx->pc = 0x1eac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 2));
    // 0x1eac10: 0x24020010
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eac14: 0xaf808db4
    ctx->pc = 0x1eac14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 0));
    // 0x1eac18: 0x6810003
    ctx->pc = 0x1EAC18u;
    {
        const bool branch_taken_0x1eac18 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1EAC1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938044), GPR_U32(ctx, 2));
        if (branch_taken_0x1eac18) {
            ctx->pc = 0x1EAC28u;
            goto label_1eac28;
        }
    }
    ctx->pc = 0x1EAC20u;
    // 0x1eac20: 0x10000008
    ctx->pc = 0x1EAC20u;
    {
        const bool branch_taken_0x1eac20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAC24u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 0));
        if (branch_taken_0x1eac20) {
            ctx->pc = 0x1EAC44u;
            goto label_1eac44;
        }
    }
    ctx->pc = 0x1EAC28u;
label_1eac28:
    // 0x1eac28: 0xc07bf9c
    ctx->pc = 0x1EAC28u;
    SET_GPR_U32(ctx, 31, 0x1EAC30u);
    ctx->pc = 0x1EAC2Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAC30u; }
        else if (ctx->pc != 0x1EAC30u) { ctx->pc = 0x1EAC30u; }
    }
    if (ctx->pc != 0x1EAC30u) { return; }
    ctx->pc = 0x1EAC30u;
    // 0x1eac30: 0x16820003
    ctx->pc = 0x1EAC30u;
    {
        const bool branch_taken_0x1eac30 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x1EAC34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eac30) {
            ctx->pc = 0x1EAC40u;
            goto label_1eac40;
        }
    }
    ctx->pc = 0x1EAC38u;
    // 0x1eac38: 0x10000002
    ctx->pc = 0x1EAC38u;
    {
        const bool branch_taken_0x1eac38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAC3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 0));
        if (branch_taken_0x1eac38) {
            ctx->pc = 0x1EAC44u;
            goto label_1eac44;
        }
    }
    ctx->pc = 0x1EAC40u;
label_1eac40:
    // 0x1eac40: 0xaf828db8
    ctx->pc = 0x1eac40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 2));
label_1eac44:
    // 0x1eac44: 0x3c020050
    ctx->pc = 0x1eac44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eac48: 0x24510df0
    ctx->pc = 0x1eac48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 3568));
    // 0x1eac4c: 0x3c020050
    ctx->pc = 0x1eac4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eac50: 0x141880
    ctx->pc = 0x1eac50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x1eac54: 0x24420df0
    ctx->pc = 0x1eac54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3568));
    // 0x1eac58: 0xaf808dec
    ctx->pc = 0x1eac58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938092), GPR_U32(ctx, 0));
    // 0x1eac5c: 0x70008628
    ctx->pc = 0x1eac5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eac60: 0x439021
    ctx->pc = 0x1eac60u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eac64: 0x27938dc0
    ctx->pc = 0x1eac64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 28), 4294938048));
label_1eac68:
    // 0x1eac68: 0x24020001
    ctx->pc = 0x1eac68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac6c: 0xae220000
    ctx->pc = 0x1eac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1eac70: 0x6810004
    ctx->pc = 0x1EAC70u;
    {
        const bool branch_taken_0x1eac70 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1EAC74u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1eac70) {
            ctx->pc = 0x1EAC84u;
            goto label_1eac84;
        }
    }
    ctx->pc = 0x1EAC78u;
    // 0x1eac78: 0xae200008
    ctx->pc = 0x1eac78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1eac7c: 0x10000006
    ctx->pc = 0x1EAC7Cu;
    {
        const bool branch_taken_0x1eac7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAC80u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1eac7c) {
            ctx->pc = 0x1EAC98u;
            goto label_1eac98;
        }
    }
    ctx->pc = 0x1EAC84u;
label_1eac84:
    // 0x1eac84: 0x24020001
    ctx->pc = 0x1eac84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac88: 0xae220008
    ctx->pc = 0x1eac88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1eac8c: 0xae22000c
    ctx->pc = 0x1eac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1eac90: 0xae400000
    ctx->pc = 0x1eac90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1eac94: 0x0
    ctx->pc = 0x1eac94u;
    // NOP
label_1eac98:
    // 0x1eac98: 0xc07bf9c
    ctx->pc = 0x1EAC98u;
    SET_GPR_U32(ctx, 31, 0x1EACA0u);
    ctx->pc = 0x1EAC9Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EACA0u; }
        else if (ctx->pc != 0x1EACA0u) { ctx->pc = 0x1EACA0u; }
    }
    if (ctx->pc != 0x1EACA0u) { return; }
    ctx->pc = 0x1EACA0u;
    // 0x1eaca0: 0x26100001
    ctx->pc = 0x1eaca0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1eaca4: 0xae620000
    ctx->pc = 0x1eaca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1eaca8: 0x2a030002
    ctx->pc = 0x1eaca8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1eacac: 0x26310010
    ctx->pc = 0x1eacacu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x1eacb0: 0x26520010
    ctx->pc = 0x1eacb0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
    // 0x1eacb4: 0x1460ffec
    ctx->pc = 0x1EACB4u;
    {
        const bool branch_taken_0x1eacb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EACB8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x1eacb4) {
            ctx->pc = 0x1EAC68u;
            goto label_1eac68;
        }
    }
    ctx->pc = 0x1EACBCu;
    // 0x1eacbc: 0x6810005
    ctx->pc = 0x1EACBCu;
    {
        const bool branch_taken_0x1eacbc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1EACC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x1eacbc) {
            ctx->pc = 0x1EACD4u;
            goto label_1eacd4;
        }
    }
    ctx->pc = 0x1EACC4u;
    // 0x1eacc4: 0xc07ab64
    ctx->pc = 0x1EACC4u;
    SET_GPR_U32(ctx, 31, 0x1EACCCu);
    ctx->pc = 0x1EAD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGunAdjustPara__Fv_0x1ead90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EACCCu; }
        else if (ctx->pc != 0x1EACCCu) { ctx->pc = 0x1EACCCu; }
    }
    if (ctx->pc != 0x1EACCCu) { return; }
    ctx->pc = 0x1EACCCu;
    // 0x1eaccc: 0x10000026
    ctx->pc = 0x1EACCCu;
    {
        const bool branch_taken_0x1eaccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EACD0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1eaccc) {
            ctx->pc = 0x1EAD68u;
            goto label_1ead68;
        }
    }
    ctx->pc = 0x1EACD4u;
label_1eacd4:
    // 0x1eacd4: 0x70002e28
    ctx->pc = 0x1eacd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eacd8: 0x24640db0
    ctx->pc = 0x1eacd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 3504));
label_1eacdc:
    // 0x1eacdc: 0x24030003
    ctx->pc = 0x1eacdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eace0: 0x16830010
    ctx->pc = 0x1EACE0u;
    {
        const bool branch_taken_0x1eace0 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EACE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1eace0) {
            ctx->pc = 0x1EAD24u;
            goto label_1ead24;
        }
    }
    ctx->pc = 0x1EACE8u;
    // 0x1eace8: 0x2403000a
    ctx->pc = 0x1eace8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eacec: 0xac830000
    ctx->pc = 0x1eacecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1eacf0: 0x2403003c
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eacf4: 0xac830004
    ctx->pc = 0x1eacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1eacf8: 0x240300d3
    ctx->pc = 0x1eacf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 211));
    // 0x1eacfc: 0xac830008
    ctx->pc = 0x1eacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ead00: 0x24030044
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ead04: 0xac83000c
    ctx->pc = 0x1ead04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1ead08: 0x24030001
    ctx->pc = 0x1ead08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ead0c: 0xaf838d24
    ctx->pc = 0x1ead0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 3));
    // 0x1ead10: 0xaf838d28
    ctx->pc = 0x1ead10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937896), GPR_U32(ctx, 3));
    // 0x1ead14: 0x24030004
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ead18: 0x1000000d
    ctx->pc = 0x1EAD18u;
    {
        const bool branch_taken_0x1ead18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAD1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937900), GPR_U32(ctx, 3));
        if (branch_taken_0x1ead18) {
            ctx->pc = 0x1EAD50u;
            goto label_1ead50;
        }
    }
    ctx->pc = 0x1EAD20u;
    // 0x1ead20: 0x24030002
    ctx->pc = 0x1ead20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1ead24:
    // 0x1ead24: 0x5683000b
    ctx->pc = 0x1EAD24u;
    {
        const bool branch_taken_0x1ead24 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ead24) {
            ctx->pc = 0x1EAD28u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1EAD54u;
            goto label_1ead54;
        }
    }
    ctx->pc = 0x1EAD2Cu;
    // 0x1ead2c: 0x2403ff97
    ctx->pc = 0x1ead2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1ead30: 0xac830010
    ctx->pc = 0x1ead30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1ead34: 0x2403ffa1
    ctx->pc = 0x1ead34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x1ead38: 0xac830014
    ctx->pc = 0x1ead38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1ead3c: 0x2403008a
    ctx->pc = 0x1ead3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 138));
    // 0x1ead40: 0xac830018
    ctx->pc = 0x1ead40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1ead44: 0x24030044
    ctx->pc = 0x1ead44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ead48: 0xac83001c
    ctx->pc = 0x1ead48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1ead4c: 0x0
    ctx->pc = 0x1ead4cu;
    // NOP
label_1ead50:
    // 0x1ead50: 0x24a50001
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1ead54:
    // 0x1ead54: 0x28a30002
    ctx->pc = 0x1ead54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 2));
    // 0x1ead58: 0x1460ffe0
    ctx->pc = 0x1EAD58u;
    {
        const bool branch_taken_0x1ead58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EAD5Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x1ead58) {
            ctx->pc = 0x1EACDCu;
            goto label_1eacdc;
        }
    }
    ctx->pc = 0x1EAD60u;
    // 0x1ead60: 0xaf808d20
    ctx->pc = 0x1ead60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937888), GPR_U32(ctx, 0));
    // 0x1ead64: 0x7bbf0050
    ctx->pc = 0x1ead64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ead68:
    // 0x1ead68: 0x7bb40040
    ctx->pc = 0x1ead68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ead6c: 0x7bb30030
    ctx->pc = 0x1ead6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ead70: 0x7bb20020
    ctx->pc = 0x1ead70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ead74: 0x7bb10010
    ctx->pc = 0x1ead74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ead78: 0x7bb00000
    ctx->pc = 0x1ead78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ead7c: 0x3e00008
    ctx->pc = 0x1EAD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAD80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EAC08u: goto label_1eac08;
            case 0x1EAC28u: goto label_1eac28;
            case 0x1EAC40u: goto label_1eac40;
            case 0x1EAC44u: goto label_1eac44;
            case 0x1EAC68u: goto label_1eac68;
            case 0x1EAC84u: goto label_1eac84;
            case 0x1EAC98u: goto label_1eac98;
            case 0x1EACD4u: goto label_1eacd4;
            case 0x1EACDCu: goto label_1eacdc;
            case 0x1EAD24u: goto label_1ead24;
            case 0x1EAD50u: goto label_1ead50;
            case 0x1EAD54u: goto label_1ead54;
            case 0x1EAD68u: goto label_1ead68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EAD84u;
}
