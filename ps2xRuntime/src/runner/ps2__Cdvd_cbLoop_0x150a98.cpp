#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _Cdvd_cbLoop
// Address: 0x150a98 - 0x150b54
void ps2__Cdvd_cbLoop_0x150a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2__Cdvd_cbLoop");


    ctx->pc = 0x150a98u;

label_150a98:
    // 0x150a98: 0x27bdff60
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_150a9c:
    // 0x150a9c: 0xffbe0080
    ctx->pc = 0x150a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_150aa0:
    // 0x150aa0: 0xffb70070
    ctx->pc = 0x150aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_150aa4:
    // 0x150aa4: 0x3c1e0022
    ctx->pc = 0x150aa4u;
    SET_GPR_U32(ctx, 30, ((uint32_t)34 << 16));
label_150aa8:
    // 0x150aa8: 0xffb60060
    ctx->pc = 0x150aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_150aac:
    // 0x150aac: 0x3c170022
    ctx->pc = 0x150aacu;
    SET_GPR_U32(ctx, 23, ((uint32_t)34 << 16));
label_150ab0:
    // 0x150ab0: 0xffb50050
    ctx->pc = 0x150ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_150ab4:
    // 0x150ab4: 0x3c16002d
    ctx->pc = 0x150ab4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)45 << 16));
label_150ab8:
    // 0x150ab8: 0xffb40040
    ctx->pc = 0x150ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_150abc:
    // 0x150abc: 0x3c150022
    ctx->pc = 0x150abcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)34 << 16));
label_150ac0:
    // 0x150ac0: 0xffb30030
    ctx->pc = 0x150ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_150ac4:
    // 0x150ac4: 0x3c14002c
    ctx->pc = 0x150ac4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)44 << 16));
label_150ac8:
    // 0x150ac8: 0xffb20020
    ctx->pc = 0x150ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_150acc:
    // 0x150acc: 0x3c130022
    ctx->pc = 0x150accu;
    SET_GPR_U32(ctx, 19, ((uint32_t)34 << 16));
label_150ad0:
    // 0x150ad0: 0xffb10010
    ctx->pc = 0x150ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_150ad4:
    // 0x150ad4: 0x3c120022
    ctx->pc = 0x150ad4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)34 << 16));
label_150ad8:
    // 0x150ad8: 0xffb00000
    ctx->pc = 0x150ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_150adc:
    // 0x150adc: 0x3c11002d
    ctx->pc = 0x150adcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)45 << 16));
label_150ae0:
    // 0x150ae0: 0xffbf0090
    ctx->pc = 0x150ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_150ae4:
    // 0x150ae4: 0x3c100022
    ctx->pc = 0x150ae4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
label_150ae8:
    // 0x150ae8: 0xc055248
label_150aec:
    if (ctx->pc == 0x150AECu) {
        ctx->pc = 0x150AECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 31904)));
        ctx->pc = 0x150AF0u;
        goto label_150af0;
    }
    ctx->pc = 0x150AE8u;
    SET_GPR_U32(ctx, 31, 0x150AF0u);
    ctx->pc = 0x150AECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 31904)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150AF0u; }
        else if (ctx->pc != 0x150AF0u) { ctx->pc = 0x150AF0u; }
    }
    if (ctx->pc != 0x150AF0u) { return; }
    ctx->pc = 0x150AF0u;
label_150af0:
    // 0x150af0: 0x8e637cd4
    ctx->pc = 0x150af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 31956)));
label_150af4:
    // 0x150af4: 0x2402ffff
    ctx->pc = 0x150af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_150af8:
    // 0x150af8: 0x14620007
label_150afc:
    if (ctx->pc == 0x150AFCu) {
        ctx->pc = 0x150AFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 31888)));
        ctx->pc = 0x150B00u;
        goto label_150b00;
    }
    ctx->pc = 0x150AF8u;
    {
        const bool branch_taken_0x150af8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x150AFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 31888)));
        if (branch_taken_0x150af8) {
            ctx->pc = 0x150B18u;
            goto label_150b18;
        }
    }
    ctx->pc = 0x150B00u;
label_150b00:
    // 0x150b00: 0xae407cb0
    ctx->pc = 0x150b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31920), GPR_U32(ctx, 0));
label_150b04:
    // 0x150b04: 0xae607cd4
    ctx->pc = 0x150b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31956), GPR_U32(ctx, 0));
label_150b08:
    // 0x150b08: 0xaee07c94
    ctx->pc = 0x150b08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 31892), GPR_U32(ctx, 0));
label_150b0c:
    // 0x150b0c: 0xc0551c8
label_150b10:
    if (ctx->pc == 0x150B10u) {
        ctx->pc = 0x150B10u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 26956), GPR_U32(ctx, 0));
        ctx->pc = 0x150B14u;
        goto label_150b14;
    }
    ctx->pc = 0x150B0Cu;
    SET_GPR_U32(ctx, 31, 0x150B14u);
    ctx->pc = 0x150B10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 26956), GPR_U32(ctx, 0));
    ctx->pc = 0x154720u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExitDeleteThread_0x154720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B14u; }
        else if (ctx->pc != 0x150B14u) { ctx->pc = 0x150B14u; }
    }
    if (ctx->pc != 0x150B14u) { return; }
    ctx->pc = 0x150B14u;
label_150b14:
    // 0x150b14: 0x8ea27c90
    ctx->pc = 0x150b14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 31888)));
label_150b18:
    // 0x150b18: 0x18400004
label_150b1c:
    if (ctx->pc == 0x150B1Cu) {
        ctx->pc = 0x150B1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294935136));
        ctx->pc = 0x150B20u;
        goto label_150b20;
    }
    ctx->pc = 0x150B18u;
    {
        const bool branch_taken_0x150b18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150B1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294935136));
        if (branch_taken_0x150b18) {
            ctx->pc = 0x150B2Cu;
            goto label_150b2c;
        }
    }
    ctx->pc = 0x150B20u;
label_150b20:
    // 0x150b20: 0x8e256940
    ctx->pc = 0x150b20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 26944)));
label_150b24:
    // 0x150b24: 0xc055a78
label_150b28:
    if (ctx->pc == 0x150B28u) {
        ctx->pc = 0x150B28u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 31960)));
        ctx->pc = 0x150B2Cu;
        goto label_150b2c;
    }
    ctx->pc = 0x150B24u;
    SET_GPR_U32(ctx, 31, 0x150B2Cu);
    ctx->pc = 0x150B28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 31960)));
    ctx->pc = 0x1569E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x1569e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B2Cu; }
        else if (ctx->pc != 0x150B2Cu) { ctx->pc = 0x150B2Cu; }
    }
    if (ctx->pc != 0x150B2Cu) { return; }
    ctx->pc = 0x150B2Cu;
label_150b2c:
    // 0x150b2c: 0x8e236940
    ctx->pc = 0x150b2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 26944)));
label_150b30:
    // 0x150b30: 0x10600006
label_150b34:
    if (ctx->pc == 0x150B34u) {
        ctx->pc = 0x150B38u;
        goto label_150b38;
    }
    ctx->pc = 0x150B30u;
    {
        const bool branch_taken_0x150b30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x150b30) {
            ctx->pc = 0x150B4Cu;
            goto label_150b4c;
        }
    }
    ctx->pc = 0x150B38u;
label_150b38:
    // 0x150b38: 0x8e027cd8
    ctx->pc = 0x150b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 31960)));
label_150b3c:
    // 0x150b3c: 0x10400003
label_150b40:
    if (ctx->pc == 0x150B40u) {
        ctx->pc = 0x150B44u;
        goto label_150b44;
    }
    ctx->pc = 0x150B3Cu;
    {
        const bool branch_taken_0x150b3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x150b3c) {
            ctx->pc = 0x150B4Cu;
            goto label_150b4c;
        }
    }
    ctx->pc = 0x150B44u;
label_150b44:
    // 0x150b44: 0x60f809
label_150b48:
    if (ctx->pc == 0x150B48u) {
        ctx->pc = 0x150B48u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 31960)));
        ctx->pc = 0x150B4Cu;
        goto label_150b4c;
    }
    ctx->pc = 0x150B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x150B4Cu);
        ctx->pc = 0x150B48u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 31960)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150A98u: goto label_150a98;
            case 0x150A9Cu: goto label_150a9c;
            case 0x150AA0u: goto label_150aa0;
            case 0x150AA4u: goto label_150aa4;
            case 0x150AA8u: goto label_150aa8;
            case 0x150AACu: goto label_150aac;
            case 0x150AB0u: goto label_150ab0;
            case 0x150AB4u: goto label_150ab4;
            case 0x150AB8u: goto label_150ab8;
            case 0x150ABCu: goto label_150abc;
            case 0x150AC0u: goto label_150ac0;
            case 0x150AC4u: goto label_150ac4;
            case 0x150AC8u: goto label_150ac8;
            case 0x150ACCu: goto label_150acc;
            case 0x150AD0u: goto label_150ad0;
            case 0x150AD4u: goto label_150ad4;
            case 0x150AD8u: goto label_150ad8;
            case 0x150ADCu: goto label_150adc;
            case 0x150AE0u: goto label_150ae0;
            case 0x150AE4u: goto label_150ae4;
            case 0x150AE8u: goto label_150ae8;
            case 0x150AECu: goto label_150aec;
            case 0x150AF0u: goto label_150af0;
            case 0x150AF4u: goto label_150af4;
            case 0x150AF8u: goto label_150af8;
            case 0x150AFCu: goto label_150afc;
            case 0x150B00u: goto label_150b00;
            case 0x150B04u: goto label_150b04;
            case 0x150B08u: goto label_150b08;
            case 0x150B0Cu: goto label_150b0c;
            case 0x150B10u: goto label_150b10;
            case 0x150B14u: goto label_150b14;
            case 0x150B18u: goto label_150b18;
            case 0x150B1Cu: goto label_150b1c;
            case 0x150B20u: goto label_150b20;
            case 0x150B24u: goto label_150b24;
            case 0x150B28u: goto label_150b28;
            case 0x150B2Cu: goto label_150b2c;
            case 0x150B30u: goto label_150b30;
            case 0x150B34u: goto label_150b34;
            case 0x150B38u: goto label_150b38;
            case 0x150B3Cu: goto label_150b3c;
            case 0x150B40u: goto label_150b40;
            case 0x150B44u: goto label_150b44;
            case 0x150B48u: goto label_150b48;
            case 0x150B4Cu: goto label_150b4c;
            case 0x150B50u: goto label_150b50;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150B4Cu; }
            if (ctx->pc != 0x150B4Cu) { return; }
        }
    }
    ctx->pc = 0x150B4Cu;
label_150b4c:
    // 0x150b4c: 0x1000ffe6
label_150b50:
    if (ctx->pc == 0x150B50u) {
        ctx->pc = 0x150B50u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 31920), GPR_U32(ctx, 0));
        ctx->pc = 0x150B54u;
        goto label_fallthrough_0x150b4c;
    }
    ctx->pc = 0x150B4Cu;
    {
        const bool branch_taken_0x150b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x150B50u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 31920), GPR_U32(ctx, 0));
        if (branch_taken_0x150b4c) {
            ctx->pc = 0x150AE8u;
            goto label_150ae8;
        }
    }
label_fallthrough_0x150b4c:
    ctx->pc = 0x150B54u;
}
