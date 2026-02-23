#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetPlCartType__Fi
// Address: 0x210f00 - 0x210fa0
void GetPlCartType__Fi_0x210f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetPlCartType__Fi");


    ctx->pc = 0x210f00u;

label_210f00:
    // 0x210f00: 0x3c010050
    ctx->pc = 0x210f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_210f04:
    // 0x210f04: 0x8425e504
    ctx->pc = 0x210f04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_210f08:
    // 0x210f08: 0x2403000a
    ctx->pc = 0x210f08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_210f0c:
    // 0x210f0c: 0x14a30022
label_210f10:
    if (ctx->pc == 0x210F10u) {
        ctx->pc = 0x210F10u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x210F14u;
        goto label_210f14;
    }
    ctx->pc = 0x210F0Cu;
    {
        const bool branch_taken_0x210f0c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x210F10u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x210f0c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F14u;
label_210f14:
    // 0x210f14: 0x8f838bcc
    ctx->pc = 0x210f14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_210f18:
    // 0x210f18: 0x24050001
    ctx->pc = 0x210f18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_210f1c:
    // 0x210f1c: 0x1465001e
label_210f20:
    if (ctx->pc == 0x210F20u) {
        ctx->pc = 0x210F20u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        ctx->pc = 0x210F24u;
        goto label_210f24;
    }
    ctx->pc = 0x210F1Cu;
    {
        const bool branch_taken_0x210f1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x210F20u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x210f1c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F24u;
label_210f24:
    // 0x210f24: 0x42080
    ctx->pc = 0x210f24u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_210f28:
    // 0x210f28: 0x2463fc80
    ctx->pc = 0x210f28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966400));
label_210f2c:
    // 0x210f2c: 0x641821
    ctx->pc = 0x210f2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_210f30:
    // 0x210f30: 0x80630000
    ctx->pc = 0x210f30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_210f34:
    // 0x210f34: 0x2063fff8
    ctx->pc = 0x210f34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967288, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_210f38:
    // 0x210f38: 0x2c610008
    ctx->pc = 0x210f38u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 8));
label_210f3c:
    // 0x210f3c: 0x10200016
label_210f40:
    if (ctx->pc == 0x210F40u) {
        ctx->pc = 0x210F40u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x210F44u;
        goto label_210f44;
    }
    ctx->pc = 0x210F3Cu;
    {
        const bool branch_taken_0x210f3c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F40u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x210f3c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F44u;
label_210f44:
    // 0x210f44: 0x31880
    ctx->pc = 0x210f44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_210f48:
    // 0x210f48: 0x24840680
    ctx->pc = 0x210f48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1664));
label_210f4c:
    // 0x210f4c: 0x641821
    ctx->pc = 0x210f4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_210f50:
    // 0x210f50: 0x8c630000
    ctx->pc = 0x210f50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_210f54:
    // 0x210f54: 0x600008
label_210f58:
    if (ctx->pc == 0x210F58u) {
        ctx->pc = 0x210F5Cu;
        goto label_210f5c;
    }
    ctx->pc = 0x210F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210F00u: goto label_210f00;
            case 0x210F04u: goto label_210f04;
            case 0x210F08u: goto label_210f08;
            case 0x210F0Cu: goto label_210f0c;
            case 0x210F10u: goto label_210f10;
            case 0x210F14u: goto label_210f14;
            case 0x210F18u: goto label_210f18;
            case 0x210F1Cu: goto label_210f1c;
            case 0x210F20u: goto label_210f20;
            case 0x210F24u: goto label_210f24;
            case 0x210F28u: goto label_210f28;
            case 0x210F2Cu: goto label_210f2c;
            case 0x210F30u: goto label_210f30;
            case 0x210F34u: goto label_210f34;
            case 0x210F38u: goto label_210f38;
            case 0x210F3Cu: goto label_210f3c;
            case 0x210F40u: goto label_210f40;
            case 0x210F44u: goto label_210f44;
            case 0x210F48u: goto label_210f48;
            case 0x210F4Cu: goto label_210f4c;
            case 0x210F50u: goto label_210f50;
            case 0x210F54u: goto label_210f54;
            case 0x210F58u: goto label_210f58;
            case 0x210F5Cu: goto label_210f5c;
            case 0x210F60u: goto label_210f60;
            case 0x210F64u: goto label_210f64;
            case 0x210F68u: goto label_210f68;
            case 0x210F6Cu: goto label_210f6c;
            case 0x210F70u: goto label_210f70;
            case 0x210F74u: goto label_210f74;
            case 0x210F78u: goto label_210f78;
            case 0x210F7Cu: goto label_210f7c;
            case 0x210F80u: goto label_210f80;
            case 0x210F84u: goto label_210f84;
            case 0x210F88u: goto label_210f88;
            case 0x210F8Cu: goto label_210f8c;
            case 0x210F90u: goto label_210f90;
            case 0x210F94u: goto label_210f94;
            case 0x210F98u: goto label_210f98;
            case 0x210F9Cu: goto label_210f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210F5Cu;
label_210f5c:
    // 0x210f5c: 0x1000000e
label_210f60:
    if (ctx->pc == 0x210F60u) {
        ctx->pc = 0x210F60u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x210F64u;
        goto label_210f64;
    }
    ctx->pc = 0x210F5Cu;
    {
        const bool branch_taken_0x210f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F60u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x210f5c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F64u;
label_210f64:
    // 0x210f64: 0x1000000c
label_210f68:
    if (ctx->pc == 0x210F68u) {
        ctx->pc = 0x210F68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x210F6Cu;
        goto label_210f6c;
    }
    ctx->pc = 0x210F64u;
    {
        const bool branch_taken_0x210f64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x210f64) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F6Cu;
label_210f6c:
    // 0x210f6c: 0x1000000a
label_210f70:
    if (ctx->pc == 0x210F70u) {
        ctx->pc = 0x210F70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x210F74u;
        goto label_210f74;
    }
    ctx->pc = 0x210F6Cu;
    {
        const bool branch_taken_0x210f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x210f6c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F74u;
label_210f74:
    // 0x210f74: 0x10000008
label_210f78:
    if (ctx->pc == 0x210F78u) {
        ctx->pc = 0x210F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x210F7Cu;
        goto label_210f7c;
    }
    ctx->pc = 0x210F74u;
    {
        const bool branch_taken_0x210f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x210f74) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F7Cu;
label_210f7c:
    // 0x210f7c: 0x10000006
label_210f80:
    if (ctx->pc == 0x210F80u) {
        ctx->pc = 0x210F80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x210F84u;
        goto label_210f84;
    }
    ctx->pc = 0x210F7Cu;
    {
        const bool branch_taken_0x210f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x210f7c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F84u;
label_210f84:
    // 0x210f84: 0x10000004
label_210f88:
    if (ctx->pc == 0x210F88u) {
        ctx->pc = 0x210F88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x210F8Cu;
        goto label_210f8c;
    }
    ctx->pc = 0x210F84u;
    {
        const bool branch_taken_0x210f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x210f84) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F8Cu;
label_210f8c:
    // 0x210f8c: 0x10000002
label_210f90:
    if (ctx->pc == 0x210F90u) {
        ctx->pc = 0x210F90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x210F94u;
        goto label_210f94;
    }
    ctx->pc = 0x210F8Cu;
    {
        const bool branch_taken_0x210f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210F90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x210f8c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F94u;
label_210f94:
    // 0x210f94: 0x24020008
    ctx->pc = 0x210f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_210f98:
    // 0x210f98: 0x3e00008
label_210f9c:
    if (ctx->pc == 0x210F9Cu) {
        ctx->pc = 0x210FA0u;
        goto label_fallthrough_0x210f98;
    }
    ctx->pc = 0x210F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210F00u: goto label_210f00;
            case 0x210F04u: goto label_210f04;
            case 0x210F08u: goto label_210f08;
            case 0x210F0Cu: goto label_210f0c;
            case 0x210F10u: goto label_210f10;
            case 0x210F14u: goto label_210f14;
            case 0x210F18u: goto label_210f18;
            case 0x210F1Cu: goto label_210f1c;
            case 0x210F20u: goto label_210f20;
            case 0x210F24u: goto label_210f24;
            case 0x210F28u: goto label_210f28;
            case 0x210F2Cu: goto label_210f2c;
            case 0x210F30u: goto label_210f30;
            case 0x210F34u: goto label_210f34;
            case 0x210F38u: goto label_210f38;
            case 0x210F3Cu: goto label_210f3c;
            case 0x210F40u: goto label_210f40;
            case 0x210F44u: goto label_210f44;
            case 0x210F48u: goto label_210f48;
            case 0x210F4Cu: goto label_210f4c;
            case 0x210F50u: goto label_210f50;
            case 0x210F54u: goto label_210f54;
            case 0x210F58u: goto label_210f58;
            case 0x210F5Cu: goto label_210f5c;
            case 0x210F60u: goto label_210f60;
            case 0x210F64u: goto label_210f64;
            case 0x210F68u: goto label_210f68;
            case 0x210F6Cu: goto label_210f6c;
            case 0x210F70u: goto label_210f70;
            case 0x210F74u: goto label_210f74;
            case 0x210F78u: goto label_210f78;
            case 0x210F7Cu: goto label_210f7c;
            case 0x210F80u: goto label_210f80;
            case 0x210F84u: goto label_210f84;
            case 0x210F88u: goto label_210f88;
            case 0x210F8Cu: goto label_210f8c;
            case 0x210F90u: goto label_210f90;
            case 0x210F94u: goto label_210f94;
            case 0x210F98u: goto label_210f98;
            case 0x210F9Cu: goto label_210f9c;
            default: break;
        }
        return;
    }
label_fallthrough_0x210f98:
    ctx->pc = 0x210FA0u;
}
