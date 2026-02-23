#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_StartSj
// Address: 0x171aa8 - 0x171b68
void ADXT_StartSj_0x171aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_StartSj");


    ctx->pc = 0x171aa8u;

label_171aa8:
    // 0x171aa8: 0x27bdffb0
    ctx->pc = 0x171aa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_171aac:
    // 0x171aac: 0xffb00000
    ctx->pc = 0x171aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_171ab0:
    // 0x171ab0: 0xffb30030
    ctx->pc = 0x171ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_171ab4:
    // 0x171ab4: 0x80802d
    ctx->pc = 0x171ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171ab8:
    // 0x171ab8: 0xffb10010
    ctx->pc = 0x171ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_171abc:
    // 0x171abc: 0xa0982d
    ctx->pc = 0x171abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_171ac0:
    // 0x171ac0: 0xffbf0040
    ctx->pc = 0x171ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_171ac4:
    // 0x171ac4: 0xffb20020
    ctx->pc = 0x171ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_171ac8:
    // 0x171ac8: 0xc05c73a
label_171acc:
    if (ctx->pc == 0x171ACCu) {
        ctx->pc = 0x171ACCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171AD0u;
        goto label_171ad0;
    }
    ctx->pc = 0x171AC8u;
    SET_GPR_U32(ctx, 31, 0x171AD0u);
    ctx->pc = 0x171ACCu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AD0u; }
        else if (ctx->pc != 0x171AD0u) { ctx->pc = 0x171AD0u; }
    }
    if (ctx->pc != 0x171AD0u) { return; }
    ctx->pc = 0x171AD0u;
label_171ad0:
    // 0x171ad0: 0xc05a4e4
label_171ad4:
    if (ctx->pc == 0x171AD4u) {
        ctx->pc = 0x171AD8u;
        goto label_171ad8;
    }
    ctx->pc = 0x171AD0u;
    SET_GPR_U32(ctx, 31, 0x171AD8u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AD8u; }
        else if (ctx->pc != 0x171AD8u) { ctx->pc = 0x171AD8u; }
    }
    if (ctx->pc != 0x171AD8u) { return; }
    ctx->pc = 0x171AD8u;
label_171ad8:
    // 0x171ad8: 0x82020003
    ctx->pc = 0x171ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_171adc:
    // 0x171adc: 0x1840000c
label_171ae0:
    if (ctx->pc == 0x171AE0u) {
        ctx->pc = 0x171AE0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x171AE4u;
        goto label_171ae4;
    }
    ctx->pc = 0x171ADCu;
    {
        const bool branch_taken_0x171adc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x171AE0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 24));
        if (branch_taken_0x171adc) {
            ctx->pc = 0x171B10u;
            goto label_171b10;
        }
    }
    ctx->pc = 0x171AE4u;
label_171ae4:
    // 0x171ae4: 0x111080
    ctx->pc = 0x171ae4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_171ae8:
    // 0x171ae8: 0x2421021
    ctx->pc = 0x171ae8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_171aec:
    // 0x171aec: 0x8c440000
    ctx->pc = 0x171aecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171af0:
    // 0x171af0: 0x8c850000
    ctx->pc = 0x171af0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171af4:
    // 0x171af4: 0x8ca30014
    ctx->pc = 0x171af4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_171af8:
    // 0x171af8: 0x60f809
label_171afc:
    if (ctx->pc == 0x171AFCu) {
        ctx->pc = 0x171AFCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x171B00u;
        goto label_171b00;
    }
    ctx->pc = 0x171AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171B00u);
        ctx->pc = 0x171AFCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171AA8u: goto label_171aa8;
            case 0x171AACu: goto label_171aac;
            case 0x171AB0u: goto label_171ab0;
            case 0x171AB4u: goto label_171ab4;
            case 0x171AB8u: goto label_171ab8;
            case 0x171ABCu: goto label_171abc;
            case 0x171AC0u: goto label_171ac0;
            case 0x171AC4u: goto label_171ac4;
            case 0x171AC8u: goto label_171ac8;
            case 0x171ACCu: goto label_171acc;
            case 0x171AD0u: goto label_171ad0;
            case 0x171AD4u: goto label_171ad4;
            case 0x171AD8u: goto label_171ad8;
            case 0x171ADCu: goto label_171adc;
            case 0x171AE0u: goto label_171ae0;
            case 0x171AE4u: goto label_171ae4;
            case 0x171AE8u: goto label_171ae8;
            case 0x171AECu: goto label_171aec;
            case 0x171AF0u: goto label_171af0;
            case 0x171AF4u: goto label_171af4;
            case 0x171AF8u: goto label_171af8;
            case 0x171AFCu: goto label_171afc;
            case 0x171B00u: goto label_171b00;
            case 0x171B04u: goto label_171b04;
            case 0x171B08u: goto label_171b08;
            case 0x171B0Cu: goto label_171b0c;
            case 0x171B10u: goto label_171b10;
            case 0x171B14u: goto label_171b14;
            case 0x171B18u: goto label_171b18;
            case 0x171B1Cu: goto label_171b1c;
            case 0x171B20u: goto label_171b20;
            case 0x171B24u: goto label_171b24;
            case 0x171B28u: goto label_171b28;
            case 0x171B2Cu: goto label_171b2c;
            case 0x171B30u: goto label_171b30;
            case 0x171B34u: goto label_171b34;
            case 0x171B38u: goto label_171b38;
            case 0x171B3Cu: goto label_171b3c;
            case 0x171B40u: goto label_171b40;
            case 0x171B44u: goto label_171b44;
            case 0x171B48u: goto label_171b48;
            case 0x171B4Cu: goto label_171b4c;
            case 0x171B50u: goto label_171b50;
            case 0x171B54u: goto label_171b54;
            case 0x171B58u: goto label_171b58;
            case 0x171B5Cu: goto label_171b5c;
            case 0x171B60u: goto label_171b60;
            case 0x171B64u: goto label_171b64;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171B00u; }
            if (ctx->pc != 0x171B00u) { return; }
        }
    }
    ctx->pc = 0x171B00u;
label_171b00:
    // 0x171b00: 0x82020003
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_171b04:
    // 0x171b04: 0x222102a
    ctx->pc = 0x171b04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_171b08:
    // 0x171b08: 0x1440fff7
label_171b0c:
    if (ctx->pc == 0x171B0Cu) {
        ctx->pc = 0x171B0Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x171B10u;
        goto label_171b10;
    }
    ctx->pc = 0x171B08u;
    {
        const bool branch_taken_0x171b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x171B0Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x171b08) {
            ctx->pc = 0x171AE8u;
            goto label_171ae8;
        }
    }
    ctx->pc = 0x171B10u;
label_171b10:
    // 0x171b10: 0x8e040004
    ctx->pc = 0x171b10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_171b14:
    // 0x171b14: 0xc05b798
label_171b18:
    if (ctx->pc == 0x171B18u) {
        ctx->pc = 0x171B18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171B1Cu;
        goto label_171b1c;
    }
    ctx->pc = 0x171B14u;
    SET_GPR_U32(ctx, 31, 0x171B1Cu);
    ctx->pc = 0x171B18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetInSj_0x16de60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B1Cu; }
        else if (ctx->pc != 0x171B1Cu) { ctx->pc = 0x171B1Cu; }
    }
    if (ctx->pc != 0x171B1Cu) { return; }
    ctx->pc = 0x171B1Cu;
label_171b1c:
    // 0x171b1c: 0xae130014
    ctx->pc = 0x171b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_171b20:
    // 0x171b20: 0xc05b7a8
label_171b24:
    if (ctx->pc == 0x171B24u) {
        ctx->pc = 0x171B24u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x171B28u;
        goto label_171b28;
    }
    ctx->pc = 0x171B20u;
    SET_GPR_U32(ctx, 31, 0x171B28u);
    ctx->pc = 0x171B24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16DEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Start_0x16dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B28u; }
        else if (ctx->pc != 0x171B28u) { ctx->pc = 0x171B28u; }
    }
    if (ctx->pc != 0x171B28u) { return; }
    ctx->pc = 0x171B28u;
label_171b28:
    // 0x171b28: 0x24020001
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_171b2c:
    // 0x171b2c: 0x24030003
    ctx->pc = 0x171b2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_171b30:
    // 0x171b30: 0xa2030002
    ctx->pc = 0x171b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_171b34:
    // 0x171b34: 0xa2020098
    ctx->pc = 0x171b34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 2));
label_171b38:
    // 0x171b38: 0xa2020001
    ctx->pc = 0x171b38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_171b3c:
    // 0x171b3c: 0xae00004c
    ctx->pc = 0x171b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_171b40:
    // 0x171b40: 0x8f828120
    ctx->pc = 0x171b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
label_171b44:
    // 0x171b44: 0xae00009c
    ctx->pc = 0x171b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_171b48:
    // 0x171b48: 0xae0200a0
    ctx->pc = 0x171b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_171b4c:
    // 0x171b4c: 0xdfbf0040
    ctx->pc = 0x171b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_171b50:
    // 0x171b50: 0xdfb30030
    ctx->pc = 0x171b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_171b54:
    // 0x171b54: 0xdfb20020
    ctx->pc = 0x171b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_171b58:
    // 0x171b58: 0xdfb10010
    ctx->pc = 0x171b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171b5c:
    // 0x171b5c: 0xdfb00000
    ctx->pc = 0x171b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171b60:
    // 0x171b60: 0x805a4f0
label_171b64:
    if (ctx->pc == 0x171B64u) {
        ctx->pc = 0x171B64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x171B68u;
        goto label_fallthrough_0x171b60;
    }
    ctx->pc = 0x171B60u;
    ctx->pc = 0x171B64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
label_fallthrough_0x171b60:
    ctx->pc = 0x171B68u;
}
