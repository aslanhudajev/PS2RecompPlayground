#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTRN_InitHn
// Address: 0x19ee10 - 0x19eeb0
void SFTRN_InitHn_0x19ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTRN_InitHn");


    ctx->pc = 0x19ee10u;

    // 0x19ee10: 0x27bdffa0
    ctx->pc = 0x19ee10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ee14: 0xffb30030
    ctx->pc = 0x19ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19ee18: 0x8cd30000
    ctx->pc = 0x19ee18u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19ee1c: 0xffb40040
    ctx->pc = 0x19ee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19ee20: 0xffb20020
    ctx->pc = 0x19ee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ee24: 0x80a02d
    ctx->pc = 0x19ee24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee28: 0xffb10010
    ctx->pc = 0x19ee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ee2c: 0x24120008
    ctx->pc = 0x19ee2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19ee30: 0xffb00000
    ctx->pc = 0x19ee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ee34: 0xa0882d
    ctx->pc = 0x19ee34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee38: 0xffbf0050
    ctx->pc = 0x19ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19ee3c: 0x260802d
    ctx->pc = 0x19ee3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee40: 0x8e050000
    ctx->pc = 0x19ee40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ee44: 0x0
    ctx->pc = 0x19ee44u;
    // NOP
label_19ee48:
    // 0x19ee48: 0x220202d
    ctx->pc = 0x19ee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee4c: 0x26100004
    ctx->pc = 0x19ee4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x19ee50: 0xc067bac
    ctx->pc = 0x19EE50u;
    SET_GPR_U32(ctx, 31, 0x19EE58u);
    ctx->pc = 0x19EE54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1760));
    ctx->pc = 0x19EEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_InitTrData_0x19eeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE58u; }
        else if (ctx->pc != 0x19EE58u) { ctx->pc = 0x19EE58u; }
    }
    if (ctx->pc != 0x19EE58u) { return; }
    ctx->pc = 0x19EE58u;
    // 0x19ee58: 0x2652ffff
    ctx->pc = 0x19ee58u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19ee5c: 0x643fffa
    ctx->pc = 0x19EE5Cu;
    {
        const bool branch_taken_0x19ee5c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x19ee5c) {
            ctx->pc = 0x19EE60u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x19EE48u;
            goto label_19ee48;
        }
    }
    ctx->pc = 0x19EE64u;
    // 0x19ee64: 0x260282d
    ctx->pc = 0x19ee64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee68: 0xc067bbe
    ctx->pc = 0x19EE68u;
    SET_GPR_U32(ctx, 31, 0x19EE70u);
    ctx->pc = 0x19EE6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EEF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_BuildAll_0x19eef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE70u; }
        else if (ctx->pc != 0x19EE70u) { ctx->pc = 0x19EE70u; }
    }
    if (ctx->pc != 0x19EE70u) { return; }
    ctx->pc = 0x19EE70u;
    // 0x19ee70: 0x10400006
    ctx->pc = 0x19EE70u;
    {
        const bool branch_taken_0x19ee70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EE74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ee70) {
            ctx->pc = 0x19EE8Cu;
            goto label_19ee8c;
        }
    }
    ctx->pc = 0x19EE78u;
    // 0x19ee78: 0x3c05ff00
    ctx->pc = 0x19ee78u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19ee7c: 0xc064ea0
    ctx->pc = 0x19EE7Cu;
    SET_GPR_U32(ctx, 31, 0x19EE84u);
    ctx->pc = 0x19EE80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 770));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EE84u; }
        else if (ctx->pc != 0x19EE84u) { ctx->pc = 0x19EE84u; }
    }
    if (ctx->pc != 0x19EE84u) { return; }
    ctx->pc = 0x19EE84u;
    // 0x19ee84: 0x10000003
    ctx->pc = 0x19EE84u;
    {
        const bool branch_taken_0x19ee84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EE88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x19ee84) {
            ctx->pc = 0x19EE94u;
            goto label_19ee94;
        }
    }
    ctx->pc = 0x19EE8Cu;
label_19ee8c:
    // 0x19ee8c: 0x102d
    ctx->pc = 0x19ee8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee90: 0xdfbf0050
    ctx->pc = 0x19ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19ee94:
    // 0x19ee94: 0xdfb40040
    ctx->pc = 0x19ee94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ee98: 0xdfb30030
    ctx->pc = 0x19ee98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ee9c: 0xdfb20020
    ctx->pc = 0x19ee9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19eea0: 0xdfb10010
    ctx->pc = 0x19eea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eea4: 0xdfb00000
    ctx->pc = 0x19eea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eea8: 0x3e00008
    ctx->pc = 0x19EEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EEACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EE48u: goto label_19ee48;
            case 0x19EE8Cu: goto label_19ee8c;
            case 0x19EE94u: goto label_19ee94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EEB0u;
}
