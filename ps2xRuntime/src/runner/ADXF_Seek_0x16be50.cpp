#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Seek
// Address: 0x16be50 - 0x16bf54
void ADXF_Seek_0x16be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Seek");


    ctx->pc = 0x16be50u;

    // 0x16be50: 0x27bdffb0
    ctx->pc = 0x16be50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16be54: 0xffb20020
    ctx->pc = 0x16be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16be58: 0xffb10010
    ctx->pc = 0x16be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16be5c: 0xc0902d
    ctx->pc = 0x16be5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be60: 0xffb00000
    ctx->pc = 0x16be60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16be64: 0xa0882d
    ctx->pc = 0x16be64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be68: 0x80802d
    ctx->pc = 0x16be68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be6c: 0xffbf0040
    ctx->pc = 0x16be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16be70: 0xffb30030
    ctx->pc = 0x16be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16be74: 0x24040006
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x16be78: 0x282d
    ctx->pc = 0x16be78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be7c: 0x200302d
    ctx->pc = 0x16be7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be80: 0x220382d
    ctx->pc = 0x16be80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be84: 0xc05a94a
    ctx->pc = 0x16BE84u;
    SET_GPR_U32(ctx, 31, 0x16BE8Cu);
    ctx->pc = 0x16BE88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE8Cu; }
        else if (ctx->pc != 0x16BE8Cu) { ctx->pc = 0x16BE8Cu; }
    }
    if (ctx->pc != 0x16BE8Cu) { return; }
    ctx->pc = 0x16BE8Cu;
    // 0x16be8c: 0x56000004
    ctx->pc = 0x16BE8Cu;
    {
        const bool branch_taken_0x16be8c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x16be8c) {
            ctx->pc = 0x16BE90u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x16BEA0u;
            goto label_16bea0;
        }
    }
    ctx->pc = 0x16BE94u;
    // 0x16be94: 0x3c04002c
    ctx->pc = 0x16be94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16be98: 0x10000011
    ctx->pc = 0x16BE98u;
    {
        const bool branch_taken_0x16be98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BE9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940192));
        if (branch_taken_0x16be98) {
            ctx->pc = 0x16BEE0u;
            goto label_16bee0;
        }
    }
    ctx->pc = 0x16BEA0u;
label_16bea0:
    // 0x16bea0: 0x24130002
    ctx->pc = 0x16bea0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bea4: 0x14530003
    ctx->pc = 0x16BEA4u;
    {
        const bool branch_taken_0x16bea4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x16bea4) {
            ctx->pc = 0x16BEB4u;
            goto label_16beb4;
        }
    }
    ctx->pc = 0x16BEACu;
    // 0x16beac: 0xc05af24
    ctx->pc = 0x16BEACu;
    SET_GPR_U32(ctx, 31, 0x16BEB4u);
    ctx->pc = 0x16BEB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16BC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Stop_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEB4u; }
        else if (ctx->pc != 0x16BEB4u) { ctx->pc = 0x16BEB4u; }
    }
    if (ctx->pc != 0x16BEB4u) { return; }
    ctx->pc = 0x16BEB4u;
label_16beb4:
    // 0x16beb4: 0x16400003
    ctx->pc = 0x16BEB4u;
    {
        const bool branch_taken_0x16beb4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BEB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16beb4) {
            ctx->pc = 0x16BEC4u;
            goto label_16bec4;
        }
    }
    ctx->pc = 0x16BEBCu;
    // 0x16bebc: 0x1000000f
    ctx->pc = 0x16BEBCu;
    {
        const bool branch_taken_0x16bebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BEC0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        if (branch_taken_0x16bebc) {
            ctx->pc = 0x16BEFCu;
            goto label_16befc;
        }
    }
    ctx->pc = 0x16BEC4u;
label_16bec4:
    // 0x16bec4: 0x16420003
    ctx->pc = 0x16BEC4u;
    {
        const bool branch_taken_0x16bec4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x16bec4) {
            ctx->pc = 0x16BED4u;
            goto label_16bed4;
        }
    }
    ctx->pc = 0x16BECCu;
    // 0x16becc: 0x10000009
    ctx->pc = 0x16BECCu;
    {
        const bool branch_taken_0x16becc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BED0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x16becc) {
            ctx->pc = 0x16BEF4u;
            goto label_16bef4;
        }
    }
    ctx->pc = 0x16BED4u;
label_16bed4:
    // 0x16bed4: 0x12530006
    ctx->pc = 0x16BED4u;
    {
        const bool branch_taken_0x16bed4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 19));
        ctx->pc = 0x16BED8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16bed4) {
            ctx->pc = 0x16BEF0u;
            goto label_16bef0;
        }
    }
    ctx->pc = 0x16BEDCu;
    // 0x16bedc: 0x24849648
    ctx->pc = 0x16bedcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940232));
label_16bee0:
    // 0x16bee0: 0xc05a854
    ctx->pc = 0x16BEE0u;
    SET_GPR_U32(ctx, 31, 0x16BEE8u);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BEE8u; }
        else if (ctx->pc != 0x16BEE8u) { ctx->pc = 0x16BEE8u; }
    }
    if (ctx->pc != 0x16BEE8u) { return; }
    ctx->pc = 0x16BEE8u;
    // 0x16bee8: 0x10000013
    ctx->pc = 0x16BEE8u;
    {
        const bool branch_taken_0x16bee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BEECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16bee8) {
            ctx->pc = 0x16BF38u;
            goto label_16bf38;
        }
    }
    ctx->pc = 0x16BEF0u;
label_16bef0:
    // 0x16bef0: 0x8e02000c
    ctx->pc = 0x16bef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16bef4:
    // 0x16bef4: 0x511021
    ctx->pc = 0x16bef4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16bef8: 0xae020014
    ctx->pc = 0x16bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_16befc:
    // 0x16befc: 0x8e020014
    ctx->pc = 0x16befcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16bf00: 0x4430003
    ctx->pc = 0x16BF00u;
    {
        const bool branch_taken_0x16bf00 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16bf00) {
            ctx->pc = 0x16BF04u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x16BF10u;
            goto label_16bf10;
        }
    }
    ctx->pc = 0x16BF08u;
    // 0x16bf08: 0x10000004
    ctx->pc = 0x16BF08u;
    {
        const bool branch_taken_0x16bf08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BF0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x16bf08) {
            ctx->pc = 0x16BF1Cu;
            goto label_16bf1c;
        }
    }
    ctx->pc = 0x16BF10u;
label_16bf10:
    // 0x16bf10: 0x62102a
    ctx->pc = 0x16bf10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x16bf14: 0x54400001
    ctx->pc = 0x16BF14u;
    {
        const bool branch_taken_0x16bf14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16bf14) {
            ctx->pc = 0x16BF18u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
            ctx->pc = 0x16BF1Cu;
            goto label_16bf1c;
        }
    }
    ctx->pc = 0x16BF1Cu;
label_16bf1c:
    // 0x16bf1c: 0x220382d
    ctx->pc = 0x16bf1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf20: 0x240402d
    ctx->pc = 0x16bf20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bf24: 0x24040006
    ctx->pc = 0x16bf24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x16bf28: 0x24050001
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bf2c: 0xc05a94a
    ctx->pc = 0x16BF2Cu;
    SET_GPR_U32(ctx, 31, 0x16BF34u);
    ctx->pc = 0x16BF30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BF34u; }
        else if (ctx->pc != 0x16BF34u) { ctx->pc = 0x16BF34u; }
    }
    if (ctx->pc != 0x16BF34u) { return; }
    ctx->pc = 0x16BF34u;
    // 0x16bf34: 0x8e020014
    ctx->pc = 0x16bf34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16bf38:
    // 0x16bf38: 0xdfbf0040
    ctx->pc = 0x16bf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bf3c: 0xdfb30030
    ctx->pc = 0x16bf3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bf40: 0xdfb20020
    ctx->pc = 0x16bf40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bf44: 0xdfb10010
    ctx->pc = 0x16bf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf48: 0xdfb00000
    ctx->pc = 0x16bf48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bf4c: 0x3e00008
    ctx->pc = 0x16BF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BEA0u: goto label_16bea0;
            case 0x16BEB4u: goto label_16beb4;
            case 0x16BEC4u: goto label_16bec4;
            case 0x16BED4u: goto label_16bed4;
            case 0x16BEE0u: goto label_16bee0;
            case 0x16BEF0u: goto label_16bef0;
            case 0x16BEF4u: goto label_16bef4;
            case 0x16BEFCu: goto label_16befc;
            case 0x16BF10u: goto label_16bf10;
            case 0x16BF1Cu: goto label_16bf1c;
            case 0x16BF38u: goto label_16bf38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BF54u;
}
