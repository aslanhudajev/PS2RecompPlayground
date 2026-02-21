#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Cdvd_cbLoop
// Address: 0x2f4ed8 - 0x2f4f94
void ps2__Cdvd_cbLoop_0x2f4ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4ed8u;

label_2f4ed8:
    // 0x2f4ed8: 0x27bdff80
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f4edc:
    // 0x2f4edc: 0xffb60060
    ctx->pc = 0x2f4edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2f4ee0:
    // 0x2f4ee0: 0xffb50050
    ctx->pc = 0x2f4ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2f4ee4:
    // 0x2f4ee4: 0x3c16003a
    ctx->pc = 0x2f4ee4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
label_2f4ee8:
    // 0x2f4ee8: 0xffb40040
    ctx->pc = 0x2f4ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2f4eec:
    // 0x2f4eec: 0x3c15003a
    ctx->pc = 0x2f4eecu;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
label_2f4ef0:
    // 0x2f4ef0: 0xffb30030
    ctx->pc = 0x2f4ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2f4ef4:
    // 0x2f4ef4: 0x3c14003a
    ctx->pc = 0x2f4ef4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
label_2f4ef8:
    // 0x2f4ef8: 0xffb20020
    ctx->pc = 0x2f4ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2f4efc:
    // 0x2f4efc: 0x3c13003c
    ctx->pc = 0x2f4efcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
label_2f4f00:
    // 0x2f4f00: 0xffb10010
    ctx->pc = 0x2f4f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2f4f04:
    // 0x2f4f04: 0x3c12003a
    ctx->pc = 0x2f4f04u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
label_2f4f08:
    // 0x2f4f08: 0xffb00000
    ctx->pc = 0x2f4f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f4f0c:
    // 0x2f4f0c: 0x3c11003a
    ctx->pc = 0x2f4f0cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
label_2f4f10:
    // 0x2f4f10: 0xffbf0070
    ctx->pc = 0x2f4f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f4f14:
    // 0x2f4f14: 0x3c10003a
    ctx->pc = 0x2f4f14u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_2f4f18:
    // 0x2f4f18: 0xc0c0d88
label_2f4f1c:
    if (ctx->pc == 0x2F4F1Cu) {
        ctx->pc = 0x2F4F1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 15032)));
        ctx->pc = 0x2F4F20u;
        goto label_2f4f20;
    }
    ctx->pc = 0x2F4F18u;
    SET_GPR_U32(ctx, 31, 0x2F4F20u);
    ctx->pc = 0x2F4F1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 15032)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F20u; }
    }
    if (ctx->pc != 0x2F4F20u) { return; }
    ctx->pc = 0x2F4F20u;
label_2f4f20:
    // 0x2f4f20: 0x8ea33af0
    ctx->pc = 0x2f4f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 15088)));
label_2f4f24:
    // 0x2f4f24: 0x24020001
    ctx->pc = 0x2f4f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2f4f28:
    // 0x2f4f28: 0x14620005
label_2f4f2c:
    if (ctx->pc == 0x2F4F2Cu) {
        ctx->pc = 0x2F4F2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 15008)));
        ctx->pc = 0x2F4F30u;
        goto label_2f4f30;
    }
    ctx->pc = 0x2F4F28u;
    {
        const bool branch_taken_0x2f4f28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F4F2Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 15008)));
        if (branch_taken_0x2f4f28) {
            ctx->pc = 0x2F4F40u;
            goto label_2f4f40;
        }
    }
    ctx->pc = 0x2F4F30u;
label_2f4f30:
    // 0x2f4f30: 0xae403abc
    ctx->pc = 0x2f4f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15036), GPR_U32(ctx, 0));
label_2f4f34:
    // 0x2f4f34: 0xc0c0d04
label_2f4f38:
    if (ctx->pc == 0x2F4F38u) {
        ctx->pc = 0x2F4F3Cu;
        goto label_2f4f3c;
    }
    ctx->pc = 0x2F4F34u;
    SET_GPR_U32(ctx, 31, 0x2F4F3Cu);
    ctx->pc = 0x303410u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExitThread_0x303410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F3Cu; }
    }
    if (ctx->pc != 0x2F4F3Cu) { return; }
    ctx->pc = 0x2F4F3Cu;
label_2f4f3c:
    // 0x2f4f3c: 0x8e823aa0
    ctx->pc = 0x2f4f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 15008)));
label_2f4f40:
    // 0x2f4f40: 0x18400004
label_2f4f44:
    if (ctx->pc == 0x2F4F44u) {
        ctx->pc = 0x2F4F44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294943120));
        ctx->pc = 0x2F4F48u;
        goto label_2f4f48;
    }
    ctx->pc = 0x2F4F40u;
    {
        const bool branch_taken_0x2f4f40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F4F44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294943120));
        if (branch_taken_0x2f4f40) {
            ctx->pc = 0x2F4F54u;
            goto label_2f4f54;
        }
    }
    ctx->pc = 0x2F4F48u;
label_2f4f48:
    // 0x2f4f48: 0x8e253aec
    ctx->pc = 0x2f4f48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 15084)));
label_2f4f4c:
    // 0x2f4f4c: 0xc0bed0a
label_2f4f50:
    if (ctx->pc == 0x2F4F50u) {
        ctx->pc = 0x2F4F50u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 15092)));
        ctx->pc = 0x2F4F54u;
        goto label_2f4f54;
    }
    ctx->pc = 0x2F4F4Cu;
    SET_GPR_U32(ctx, 31, 0x2F4F54u);
    ctx->pc = 0x2F4F50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 15092)));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F54u; }
    }
    if (ctx->pc != 0x2F4F54u) { return; }
    ctx->pc = 0x2F4F54u;
label_2f4f54:
    // 0x2f4f54: 0x8e233aec
    ctx->pc = 0x2f4f54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 15084)));
label_2f4f58:
    // 0x2f4f58: 0x10600006
label_2f4f5c:
    if (ctx->pc == 0x2F4F5Cu) {
        ctx->pc = 0x2F4F60u;
        goto label_2f4f60;
    }
    ctx->pc = 0x2F4F58u;
    {
        const bool branch_taken_0x2f4f58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f4f58) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F60u;
label_2f4f60:
    // 0x2f4f60: 0x8e023af4
    ctx->pc = 0x2f4f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15092)));
label_2f4f64:
    // 0x2f4f64: 0x10400003
label_2f4f68:
    if (ctx->pc == 0x2F4F68u) {
        ctx->pc = 0x2F4F6Cu;
        goto label_2f4f6c;
    }
    ctx->pc = 0x2F4F64u;
    {
        const bool branch_taken_0x2f4f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f4f64) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F6Cu;
label_2f4f6c:
    // 0x2f4f6c: 0x60f809
label_2f4f70:
    if (ctx->pc == 0x2F4F70u) {
        ctx->pc = 0x2F4F70u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15092)));
        ctx->pc = 0x2F4F74u;
        goto label_2f4f74;
    }
    ctx->pc = 0x2F4F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4F74u);
        ctx->pc = 0x2F4F70u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15092)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4ED8u: goto label_2f4ed8;
            case 0x2F4EDCu: goto label_2f4edc;
            case 0x2F4EE0u: goto label_2f4ee0;
            case 0x2F4EE4u: goto label_2f4ee4;
            case 0x2F4EE8u: goto label_2f4ee8;
            case 0x2F4EECu: goto label_2f4eec;
            case 0x2F4EF0u: goto label_2f4ef0;
            case 0x2F4EF4u: goto label_2f4ef4;
            case 0x2F4EF8u: goto label_2f4ef8;
            case 0x2F4EFCu: goto label_2f4efc;
            case 0x2F4F00u: goto label_2f4f00;
            case 0x2F4F04u: goto label_2f4f04;
            case 0x2F4F08u: goto label_2f4f08;
            case 0x2F4F0Cu: goto label_2f4f0c;
            case 0x2F4F10u: goto label_2f4f10;
            case 0x2F4F14u: goto label_2f4f14;
            case 0x2F4F18u: goto label_2f4f18;
            case 0x2F4F1Cu: goto label_2f4f1c;
            case 0x2F4F20u: goto label_2f4f20;
            case 0x2F4F24u: goto label_2f4f24;
            case 0x2F4F28u: goto label_2f4f28;
            case 0x2F4F2Cu: goto label_2f4f2c;
            case 0x2F4F30u: goto label_2f4f30;
            case 0x2F4F34u: goto label_2f4f34;
            case 0x2F4F38u: goto label_2f4f38;
            case 0x2F4F3Cu: goto label_2f4f3c;
            case 0x2F4F40u: goto label_2f4f40;
            case 0x2F4F44u: goto label_2f4f44;
            case 0x2F4F48u: goto label_2f4f48;
            case 0x2F4F4Cu: goto label_2f4f4c;
            case 0x2F4F50u: goto label_2f4f50;
            case 0x2F4F54u: goto label_2f4f54;
            case 0x2F4F58u: goto label_2f4f58;
            case 0x2F4F5Cu: goto label_2f4f5c;
            case 0x2F4F60u: goto label_2f4f60;
            case 0x2F4F64u: goto label_2f4f64;
            case 0x2F4F68u: goto label_2f4f68;
            case 0x2F4F6Cu: goto label_2f4f6c;
            case 0x2F4F70u: goto label_2f4f70;
            case 0x2F4F74u: goto label_2f4f74;
            case 0x2F4F78u: goto label_2f4f78;
            case 0x2F4F7Cu: goto label_2f4f7c;
            case 0x2F4F80u: goto label_2f4f80;
            case 0x2F4F84u: goto label_2f4f84;
            case 0x2F4F88u: goto label_2f4f88;
            case 0x2F4F8Cu: goto label_2f4f8c;
            case 0x2F4F90u: goto label_2f4f90;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F74u; }
            if (ctx->pc != 0x2F4F74u) { return; }
        }
    }
    ctx->pc = 0x2F4F74u;
label_2f4f74:
    // 0x2f4f74: 0x8e033af4
    ctx->pc = 0x2f4f74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15092)));
label_2f4f78:
    // 0x2f4f78: 0x2402000b
    ctx->pc = 0x2f4f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_2f4f7c:
    // 0x2f4f7c: 0x14620003
label_2f4f80:
    if (ctx->pc == 0x2F4F80u) {
        ctx->pc = 0x2F4F84u;
        goto label_2f4f84;
    }
    ctx->pc = 0x2F4F7Cu;
    {
        const bool branch_taken_0x2f4f7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2f4f7c) {
            ctx->pc = 0x2F4F8Cu;
            goto label_2f4f8c;
        }
    }
    ctx->pc = 0x2F4F84u;
label_2f4f84:
    // 0x2f4f84: 0xc0bd4ce
label_2f4f88:
    if (ctx->pc == 0x2F4F88u) {
        ctx->pc = 0x2F4F8Cu;
        goto label_2f4f8c;
    }
    ctx->pc = 0x2F4F84u;
    SET_GPR_U32(ctx, 31, 0x2F4F8Cu);
    ctx->pc = 0x2F5338u;
    {
        const uint32_t __entryPc = ctx->pc;
        PowerOffCB_0x2f5338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F8Cu; }
    }
    if (ctx->pc != 0x2F4F8Cu) { return; }
    ctx->pc = 0x2F4F8Cu;
label_2f4f8c:
    // 0x2f4f8c: 0x1000ffe2
label_2f4f90:
    if (ctx->pc == 0x2F4F90u) {
        ctx->pc = 0x2F4F90u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 15036), GPR_U32(ctx, 0));
        ctx->pc = 0x2F4F94u;
        goto label_fallthrough_0x2f4f8c;
    }
    ctx->pc = 0x2F4F8Cu;
    {
        const bool branch_taken_0x2f4f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4F90u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 15036), GPR_U32(ctx, 0));
        if (branch_taken_0x2f4f8c) {
            ctx->pc = 0x2F4F18u;
            goto label_2f4f18;
        }
    }
label_fallthrough_0x2f4f8c:
    ctx->pc = 0x2F4F94u;
}
