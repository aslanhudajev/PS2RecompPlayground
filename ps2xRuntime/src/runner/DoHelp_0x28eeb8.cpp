#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoHelp
// Address: 0x28eeb8 - 0x28f128
void DoHelp_0x28eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28eeb8u;

    // 0x28eeb8: 0x27bdffc0
    ctx->pc = 0x28eeb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28eebc: 0xffbf0030
    ctx->pc = 0x28eebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28eec0: 0xffb20020
    ctx->pc = 0x28eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28eec4: 0xffb10010
    ctx->pc = 0x28eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28eec8: 0xffb00000
    ctx->pc = 0x28eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28eecc: 0x3c020031
    ctx->pc = 0x28eeccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28eed0: 0x8c42ff9c
    ctx->pc = 0x28eed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x28eed4: 0x1440000a
    ctx->pc = 0x28EED4u;
    {
        const bool branch_taken_0x28eed4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28EED8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x28eed4) {
            ctx->pc = 0x28EF00u;
            goto label_28ef00;
        }
    }
    ctx->pc = 0x28EEDCu;
    // 0x28eedc: 0x3c040035
    ctx->pc = 0x28eedcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28eee0: 0x3c020031
    ctx->pc = 0x28eee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28eee4: 0x8c83e1b0
    ctx->pc = 0x28eee4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294959536)));
    // 0x28eee8: 0x8c42ffbc
    ctx->pc = 0x28eee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x28eeec: 0x621823
    ctx->pc = 0x28eeecu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28eef0: 0x4610002
    ctx->pc = 0x28EEF0u;
    {
        const bool branch_taken_0x28eef0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28EEF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294959536), GPR_U32(ctx, 3));
        if (branch_taken_0x28eef0) {
            ctx->pc = 0x28EEFCu;
            goto label_28eefc;
        }
    }
    ctx->pc = 0x28EEF8u;
    // 0x28eef8: 0xac80e1b0
    ctx->pc = 0x28eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294959536), GPR_U32(ctx, 0));
label_28eefc:
    // 0x28eefc: 0x3c020032
    ctx->pc = 0x28eefcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28ef00:
    // 0x28ef00: 0x8c431cbc
    ctx->pc = 0x28ef00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7356)));
    // 0x28ef04: 0x2462ffff
    ctx->pc = 0x28ef04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ef08: 0x2c420003
    ctx->pc = 0x28ef08u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x28ef0c: 0x14400013
    ctx->pc = 0x28EF0Cu;
    {
        const bool branch_taken_0x28ef0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28EF10u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28ef0c) {
            ctx->pc = 0x28EF5Cu;
            goto label_28ef5c;
        }
    }
    ctx->pc = 0x28EF14u;
    // 0x28ef14: 0x24020005
    ctx->pc = 0x28ef14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x28ef18: 0x10620010
    ctx->pc = 0x28EF18u;
    {
        const bool branch_taken_0x28ef18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28EF1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x28ef18) {
            ctx->pc = 0x28EF5Cu;
            goto label_28ef5c;
        }
    }
    ctx->pc = 0x28EF20u;
    // 0x28ef20: 0x24461bc0
    ctx->pc = 0x28ef20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28ef24: 0x24052b00
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28ef28: 0x24040005
    ctx->pc = 0x28ef28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x28ef2c: 0x26310001
    ctx->pc = 0x28ef2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_28ef30:
    // 0x28ef30: 0x2a220004
    ctx->pc = 0x28ef30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x28ef34: 0x10400009
    ctx->pc = 0x28EF34u;
    {
        const bool branch_taken_0x28ef34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EF38u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x28ef34) {
            ctx->pc = 0x28EF5Cu;
            goto label_28ef5c;
        }
    }
    ctx->pc = 0x28EF3Cu;
    // 0x28ef3c: 0x661021
    ctx->pc = 0x28ef3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28ef40: 0x8c4300fc
    ctx->pc = 0x28ef40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x28ef44: 0x2462ffff
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ef48: 0x2c420003
    ctx->pc = 0x28ef48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x28ef4c: 0x14400004
    ctx->pc = 0x28EF4Cu;
    {
        const bool branch_taken_0x28ef4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28EF50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x28ef4c) {
            ctx->pc = 0x28EF60u;
            goto label_28ef60;
        }
    }
    ctx->pc = 0x28EF54u;
    // 0x28ef54: 0x5464fff6
    ctx->pc = 0x28EF54u;
    {
        const bool branch_taken_0x28ef54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x28ef54) {
            ctx->pc = 0x28EF58u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x28EF30u;
            goto label_28ef30;
        }
    }
    ctx->pc = 0x28EF5Cu;
label_28ef5c:
    // 0x28ef5c: 0x24020004
    ctx->pc = 0x28ef5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_28ef60:
    // 0x28ef60: 0x16220004
    ctx->pc = 0x28EF60u;
    {
        const bool branch_taken_0x28ef60 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x28EF64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28ef60) {
            ctx->pc = 0x28EF74u;
            goto label_28ef74;
        }
    }
    ctx->pc = 0x28EF68u;
    // 0x28ef68: 0x3c020035
    ctx->pc = 0x28ef68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28ef6c: 0xac40e188
    ctx->pc = 0x28ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959496), GPR_U32(ctx, 0));
    // 0x28ef70: 0x3c020035
    ctx->pc = 0x28ef70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28ef74:
    // 0x28ef74: 0x8c42e190
    ctx->pc = 0x28ef74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959504)));
    // 0x28ef78: 0x10400065
    ctx->pc = 0x28EF78u;
    {
        const bool branch_taken_0x28ef78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EF7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x28ef78) {
            ctx->pc = 0x28F110u;
            goto label_28f110;
        }
    }
    ctx->pc = 0x28EF80u;
    // 0x28ef80: 0x8c42d358
    ctx->pc = 0x28ef80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x28ef84: 0x14400009
    ctx->pc = 0x28EF84u;
    {
        const bool branch_taken_0x28ef84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28EF88u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28ef84) {
            ctx->pc = 0x28EFACu;
            goto label_28efac;
        }
    }
    ctx->pc = 0x28EF8Cu;
    // 0x28ef8c: 0x3c020032
    ctx->pc = 0x28ef8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28ef90: 0x8c4208b8
    ctx->pc = 0x28ef90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2232)));
    // 0x28ef94: 0x1c400006
    ctx->pc = 0x28EF94u;
    {
        const bool branch_taken_0x28ef94 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28EF98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959480));
        if (branch_taken_0x28ef94) {
            ctx->pc = 0x28EFB0u;
            goto label_28efb0;
        }
    }
    ctx->pc = 0x28EF9Cu;
    // 0x28ef9c: 0x3c020036
    ctx->pc = 0x28ef9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x28efa0: 0x8c42dbac
    ctx->pc = 0x28efa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x28efa4: 0x1040000f
    ctx->pc = 0x28EFA4u;
    {
        const bool branch_taken_0x28efa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EFA8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28efa4) {
            ctx->pc = 0x28EFE4u;
            goto label_28efe4;
        }
    }
    ctx->pc = 0x28EFACu;
label_28efac:
    // 0x28efac: 0x2463e178
    ctx->pc = 0x28efacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959480));
label_28efb0:
    // 0x28efb0: 0x3c020035
    ctx->pc = 0x28efb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28efb4: 0x8c42e1bc
    ctx->pc = 0x28efb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959548)));
    // 0x28efb8: 0x21080
    ctx->pc = 0x28efb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28efbc: 0x431021
    ctx->pc = 0x28efbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28efc0: 0x8c440000
    ctx->pc = 0x28efc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28efc4: 0x10800053
    ctx->pc = 0x28EFC4u;
    {
        const bool branch_taken_0x28efc4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EFC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x28efc4) {
            ctx->pc = 0x28F114u;
            goto label_28f114;
        }
    }
    ctx->pc = 0x28EFCCu;
    // 0x28efcc: 0x24050001
    ctx->pc = 0x28efccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28efd0: 0xdfb20020
    ctx->pc = 0x28efd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28efd4: 0xdfb10010
    ctx->pc = 0x28efd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28efd8: 0xdfb00000
    ctx->pc = 0x28efd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28efdc: 0x80b0ce8
    ctx->pc = 0x28EFDCu;
    ctx->pc = 0x28EFE0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C33A0u;
    MBBlitSetHide_0x2c33a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28EFE4u;
label_28efe4:
    // 0x28efe4: 0x3c020031
    ctx->pc = 0x28efe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28efe8: 0x8c42ff9c
    ctx->pc = 0x28efe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x28efec: 0x10400013
    ctx->pc = 0x28EFECu;
    {
        const bool branch_taken_0x28efec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28EFF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28efec) {
            ctx->pc = 0x28F03Cu;
            goto label_28f03c;
        }
    }
    ctx->pc = 0x28EFF4u;
    // 0x28eff4: 0x8c42e188
    ctx->pc = 0x28eff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959496)));
    // 0x28eff8: 0x18400046
    ctx->pc = 0x28EFF8u;
    {
        const bool branch_taken_0x28eff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28EFFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x28eff8) {
            ctx->pc = 0x28F114u;
            goto label_28f114;
        }
    }
    ctx->pc = 0x28F000u;
    // 0x28f000: 0xc0a38a0
    ctx->pc = 0x28F000u;
    SET_GPR_U32(ctx, 31, 0x28F008u);
    ctx->pc = 0x28E280u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_text_0x28e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F008u; }
    }
    if (ctx->pc != 0x28F008u) { return; }
    ctx->pc = 0x28F008u;
    // 0x28f008: 0x3c030035
    ctx->pc = 0x28f008u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f00c: 0x2463e178
    ctx->pc = 0x28f00cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959480));
    // 0x28f010: 0x3c020035
    ctx->pc = 0x28f010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f014: 0x8c42e1bc
    ctx->pc = 0x28f014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959548)));
    // 0x28f018: 0x21080
    ctx->pc = 0x28f018u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f01c: 0x431021
    ctx->pc = 0x28f01cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f020: 0x8c440000
    ctx->pc = 0x28f020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f024: 0x1080003b
    ctx->pc = 0x28F024u;
    {
        const bool branch_taken_0x28f024 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F028u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x28f024) {
            ctx->pc = 0x28F114u;
            goto label_28f114;
        }
    }
    ctx->pc = 0x28F02Cu;
    // 0x28f02c: 0xc0b0ce8
    ctx->pc = 0x28F02Cu;
    SET_GPR_U32(ctx, 31, 0x28F034u);
    ctx->pc = 0x28F030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F034u; }
    }
    if (ctx->pc != 0x28F034u) { return; }
    ctx->pc = 0x28F034u;
    // 0x28f034: 0x10000037
    ctx->pc = 0x28F034u;
    {
        const bool branch_taken_0x28f034 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F038u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x28f034) {
            ctx->pc = 0x28F114u;
            goto label_28f114;
        }
    }
    ctx->pc = 0x28F03Cu;
label_28f03c:
    // 0x28f03c: 0x3c040031
    ctx->pc = 0x28f03cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x28f040: 0x3c020031
    ctx->pc = 0x28f040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28f044: 0x8c830024
    ctx->pc = 0x28f044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x28f048: 0x8c42ffbc
    ctx->pc = 0x28f048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x28f04c: 0x621823
    ctx->pc = 0x28f04cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f050: 0x4610002
    ctx->pc = 0x28F050u;
    {
        const bool branch_taken_0x28f050 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28F054u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        if (branch_taken_0x28f050) {
            ctx->pc = 0x28F05Cu;
            goto label_28f05c;
        }
    }
    ctx->pc = 0x28F058u;
    // 0x28f058: 0xac800024
    ctx->pc = 0x28f058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_28f05c:
    // 0x28f05c: 0x3c040035
    ctx->pc = 0x28f05cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28f060: 0x3c030031
    ctx->pc = 0x28f060u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x28f064: 0x8c82e188
    ctx->pc = 0x28f064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294959496)));
    // 0x28f068: 0x8c63ffbc
    ctx->pc = 0x28f068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x28f06c: 0x431023
    ctx->pc = 0x28f06cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f070: 0x18400012
    ctx->pc = 0x28F070u;
    {
        const bool branch_taken_0x28f070 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28F074u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294959496), GPR_U32(ctx, 2));
        if (branch_taken_0x28f070) {
            ctx->pc = 0x28F0BCu;
            goto label_28f0bc;
        }
    }
    ctx->pc = 0x28F078u;
    // 0x28f078: 0xc0a38a0
    ctx->pc = 0x28F078u;
    SET_GPR_U32(ctx, 31, 0x28F080u);
    ctx->pc = 0x28E280u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_text_0x28e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F080u; }
    }
    if (ctx->pc != 0x28F080u) { return; }
    ctx->pc = 0x28F080u;
    // 0x28f080: 0x3c030035
    ctx->pc = 0x28f080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28f084: 0x2463e178
    ctx->pc = 0x28f084u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959480));
    // 0x28f088: 0x3c020035
    ctx->pc = 0x28f088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f08c: 0x8c42e1bc
    ctx->pc = 0x28f08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959548)));
    // 0x28f090: 0x21080
    ctx->pc = 0x28f090u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f094: 0x431021
    ctx->pc = 0x28f094u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f098: 0x8c440000
    ctx->pc = 0x28f098u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f09c: 0x1080001d
    ctx->pc = 0x28F09Cu;
    {
        const bool branch_taken_0x28f09c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F0A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x28f09c) {
            ctx->pc = 0x28F114u;
            goto label_28f114;
        }
    }
    ctx->pc = 0x28F0A4u;
    // 0x28f0a4: 0x282d
    ctx->pc = 0x28f0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0a8: 0xdfb20020
    ctx->pc = 0x28f0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f0ac: 0xdfb10010
    ctx->pc = 0x28f0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f0b0: 0xdfb00000
    ctx->pc = 0x28f0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f0b4: 0x80b0ce8
    ctx->pc = 0x28F0B4u;
    ctx->pc = 0x28F0B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C33A0u;
    MBBlitSetHide_0x2c33a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28F0BCu;
label_28f0bc:
    // 0x28f0bc: 0x882d
    ctx->pc = 0x28f0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0c0: 0x3c020035
    ctx->pc = 0x28f0c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f0c4: 0x2452e178
    ctx->pc = 0x28f0c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x28f0c8: 0x111080
    ctx->pc = 0x28f0c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28f0cc: 0x0
    ctx->pc = 0x28f0ccu;
    // NOP
label_28f0d0:
    // 0x28f0d0: 0x528021
    ctx->pc = 0x28f0d0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28f0d4: 0x8e040000
    ctx->pc = 0x28f0d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28f0d8: 0x10800004
    ctx->pc = 0x28F0D8u;
    {
        const bool branch_taken_0x28f0d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F0DCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x28f0d8) {
            ctx->pc = 0x28F0ECu;
            goto label_28f0ec;
        }
    }
    ctx->pc = 0x28F0E0u;
    // 0x28f0e0: 0xc0b0b38
    ctx->pc = 0x28F0E0u;
    SET_GPR_U32(ctx, 31, 0x28F0E8u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F0E8u; }
    }
    if (ctx->pc != 0x28F0E8u) { return; }
    ctx->pc = 0x28F0E8u;
    // 0x28f0e8: 0xae000000
    ctx->pc = 0x28f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_28f0ec:
    // 0x28f0ec: 0x2a220003
    ctx->pc = 0x28f0ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x28f0f0: 0x1440fff7
    ctx->pc = 0x28F0F0u;
    {
        const bool branch_taken_0x28f0f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28F0F4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x28f0f0) {
            ctx->pc = 0x28F0D0u;
            goto label_28f0d0;
        }
    }
    ctx->pc = 0x28F0F8u;
    // 0x28f0f8: 0x3c020035
    ctx->pc = 0x28f0f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f0fc: 0xac40e190
    ctx->pc = 0x28f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959504), GPR_U32(ctx, 0));
    // 0x28f100: 0x3c020031
    ctx->pc = 0x28f100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28f104: 0xac400024
    ctx->pc = 0x28f104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x28f108: 0x3c020035
    ctx->pc = 0x28f108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f10c: 0xac40e1b8
    ctx->pc = 0x28f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959544), GPR_U32(ctx, 0));
label_28f110:
    // 0x28f110: 0xdfbf0030
    ctx->pc = 0x28f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28f114:
    // 0x28f114: 0xdfb20020
    ctx->pc = 0x28f114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f118: 0xdfb10010
    ctx->pc = 0x28f118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f11c: 0xdfb00000
    ctx->pc = 0x28f11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f120: 0x3e00008
    ctx->pc = 0x28F120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F124u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28EEFCu: goto label_28eefc;
            case 0x28EF00u: goto label_28ef00;
            case 0x28EF30u: goto label_28ef30;
            case 0x28EF5Cu: goto label_28ef5c;
            case 0x28EF60u: goto label_28ef60;
            case 0x28EF74u: goto label_28ef74;
            case 0x28EFACu: goto label_28efac;
            case 0x28EFB0u: goto label_28efb0;
            case 0x28EFE4u: goto label_28efe4;
            case 0x28F03Cu: goto label_28f03c;
            case 0x28F05Cu: goto label_28f05c;
            case 0x28F0BCu: goto label_28f0bc;
            case 0x28F0D0u: goto label_28f0d0;
            case 0x28F0ECu: goto label_28f0ec;
            case 0x28F110u: goto label_28f110;
            case 0x28F114u: goto label_28f114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F128u;
}
