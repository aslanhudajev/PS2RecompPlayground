#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_ExecFinAnaly
// Address: 0x19ce68 - 0x19cf54
void sfsee_ExecFinAnaly_0x19ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_ExecFinAnaly");


    ctx->pc = 0x19ce68u;

    // 0x19ce68: 0x27bdffa0
    ctx->pc = 0x19ce68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19ce6c: 0xffb40040
    ctx->pc = 0x19ce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19ce70: 0xffb20020
    ctx->pc = 0x19ce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ce74: 0xffb10010
    ctx->pc = 0x19ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ce78: 0xffbf0050
    ctx->pc = 0x19ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19ce7c: 0x80882d
    ctx->pc = 0x19ce7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce80: 0xffb30030
    ctx->pc = 0x19ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19ce84: 0x2632675c
    ctx->pc = 0x19ce84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 26460));
    // 0x19ce88: 0xffb00000
    ctx->pc = 0x19ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ce8c: 0x26340afc
    ctx->pc = 0x19ce8cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 2812));
    // 0x19ce90: 0xc064a7c
    ctx->pc = 0x19CE90u;
    SET_GPR_U32(ctx, 31, 0x19CE98u);
    ctx->pc = 0x19CE94u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 26456)));
    ctx->pc = 0x1929F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFCON_IsEndcodeSkip_0x1929f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE98u; }
        else if (ctx->pc != 0x19CE98u) { ctx->pc = 0x19CE98u; }
    }
    if (ctx->pc != 0x19CE98u) { return; }
    ctx->pc = 0x19CE98u;
    // 0x19ce98: 0x14400027
    ctx->pc = 0x19CE98u;
    {
        const bool branch_taken_0x19ce98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19CE9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x19ce98) {
            ctx->pc = 0x19CF38u;
            goto label_19cf38;
        }
    }
    ctx->pc = 0x19CEA0u;
    // 0x19cea0: 0x8e020d98
    ctx->pc = 0x19cea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x19cea4: 0x1c400010
    ctx->pc = 0x19CEA4u;
    {
        const bool branch_taken_0x19cea4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x19CEA8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cea4) {
            ctx->pc = 0x19CEE8u;
            goto label_19cee8;
        }
    }
    ctx->pc = 0x19CEACu;
    // 0x19ceac: 0x8e430004
    ctx->pc = 0x19ceacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19ceb0: 0x2402fffd
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x19ceb4: 0x10620002
    ctx->pc = 0x19CEB4u;
    {
        const bool branch_taken_0x19ceb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19CEB8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ceb4) {
            ctx->pc = 0x19CEC0u;
            goto label_19cec0;
        }
    }
    ctx->pc = 0x19CEBCu;
    // 0x19cebc: 0x8e120dc0
    ctx->pc = 0x19cebcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 3520)));
label_19cec0:
    // 0x19cec0: 0x642000a
    ctx->pc = 0x19CEC0u;
    {
        const bool branch_taken_0x19cec0 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x19cec0) {
            ctx->pc = 0x19CEC4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3484)));
            ctx->pc = 0x19CEECu;
            goto label_19ceec;
        }
    }
    ctx->pc = 0x19CEC8u;
    // 0x19cec8: 0xc0673d6
    ctx->pc = 0x19CEC8u;
    SET_GPR_U32(ctx, 31, 0x19CED0u);
    ctx->pc = 0x19CECCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19CF58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_GetInSjReadTot_0x19cf58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CED0u; }
        else if (ctx->pc != 0x19CED0u) { ctx->pc = 0x19CED0u; }
    }
    if (ctx->pc != 0x19CED0u) { return; }
    ctx->pc = 0x19CED0u;
    // 0x19ced0: 0x40182d
    ctx->pc = 0x19ced0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ced4: 0x2402ffff
    ctx->pc = 0x19ced4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ced8: 0x10620003
    ctx->pc = 0x19CED8u;
    {
        const bool branch_taken_0x19ced8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19CEDCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x19ced8) {
            ctx->pc = 0x19CEE8u;
            goto label_19cee8;
        }
    }
    ctx->pc = 0x19CEE0u;
    // 0x19cee0: 0x24130001
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cee4: 0xae020d98
    ctx->pc = 0x19cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3480), GPR_U32(ctx, 2));
label_19cee8:
    // 0x19cee8: 0x8e020d9c
    ctx->pc = 0x19cee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_19ceec:
    // 0x19ceec: 0x1c400008
    ctx->pc = 0x19CEECu;
    {
        const bool branch_taken_0x19ceec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19ceec) {
            ctx->pc = 0x19CF10u;
            goto label_19cf10;
        }
    }
    ctx->pc = 0x19CEF4u;
    // 0x19cef4: 0x8e820020
    ctx->pc = 0x19cef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19cef8: 0x18400005
    ctx->pc = 0x19CEF8u;
    {
        const bool branch_taken_0x19cef8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19cef8) {
            ctx->pc = 0x19CF10u;
            goto label_19cf10;
        }
    }
    ctx->pc = 0x19CF00u;
    // 0x19cf00: 0xae020d9c
    ctx->pc = 0x19cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
    // 0x19cf04: 0x24130001
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cf08: 0x8e820024
    ctx->pc = 0x19cf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x19cf0c: 0xae020da0
    ctx->pc = 0x19cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 2));
label_19cf10:
    // 0x19cf10: 0x12600009
    ctx->pc = 0x19CF10u;
    {
        const bool branch_taken_0x19cf10 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CF14u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x19cf10) {
            ctx->pc = 0x19CF38u;
            goto label_19cf38;
        }
    }
    ctx->pc = 0x19CF18u;
    // 0x19cf18: 0x220202d
    ctx->pc = 0x19cf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf1c: 0xdfb40040
    ctx->pc = 0x19cf1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cf20: 0xdfb30030
    ctx->pc = 0x19cf20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cf24: 0xdfb20020
    ctx->pc = 0x19cf24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cf28: 0xdfb10010
    ctx->pc = 0x19cf28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf2c: 0xdfb00000
    ctx->pc = 0x19cf2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf30: 0x80673e4
    ctx->pc = 0x19CF30u;
    ctx->pc = 0x19CF34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x19CF90u;
    sfsee_UpdateEByteRate_0x19cf90(rdram, ctx, runtime); return;
    ctx->pc = 0x19CF38u;
label_19cf38:
    // 0x19cf38: 0xdfb40040
    ctx->pc = 0x19cf38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cf3c: 0xdfb30030
    ctx->pc = 0x19cf3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cf40: 0xdfb20020
    ctx->pc = 0x19cf40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cf44: 0xdfb10010
    ctx->pc = 0x19cf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf48: 0xdfb00000
    ctx->pc = 0x19cf48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf4c: 0x3e00008
    ctx->pc = 0x19CF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CEC0u: goto label_19cec0;
            case 0x19CEE8u: goto label_19cee8;
            case 0x19CEECu: goto label_19ceec;
            case 0x19CF10u: goto label_19cf10;
            case 0x19CF38u: goto label_19cf38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CF54u;
}
