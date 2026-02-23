#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UrawazaCheck__Fv
// Address: 0x1f2c40 - 0x1f2c98
void UrawazaCheck__Fv_0x1f2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UrawazaCheck__Fv");


    ctx->pc = 0x1f2c40u;

    // 0x1f2c40: 0x83848e37
    ctx->pc = 0x1f2c40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938167)));
    // 0x1f2c44: 0x24030020
    ctx->pc = 0x1f2c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f2c48: 0x14830002
    ctx->pc = 0x1F2C48u;
    {
        const bool branch_taken_0x1f2c48 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1F2C4Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2c48) {
            ctx->pc = 0x1F2C54u;
            goto label_1f2c54;
        }
    }
    ctx->pc = 0x1F2C50u;
    // 0x1f2c50: 0xaf838c04
    ctx->pc = 0x1f2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937604), GPR_U32(ctx, 3));
label_1f2c54:
    // 0x1f2c54: 0x8f838c04
    ctx->pc = 0x1f2c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937604)));
    // 0x1f2c58: 0x1060000d
    ctx->pc = 0x1F2C58u;
    {
        const bool branch_taken_0x1f2c58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2C5Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f2c58) {
            ctx->pc = 0x1F2C90u;
            goto label_1f2c90;
        }
    }
    ctx->pc = 0x1F2C60u;
    // 0x1f2c60: 0x278683d0
    ctx->pc = 0x1f2c60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 28), 4294935504));
    // 0x1f2c64: 0x27878e30
    ctx->pc = 0x1f2c64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 28), 4294938160));
label_1f2c68:
    // 0x1f2c68: 0x80e40000
    ctx->pc = 0x1f2c68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f2c6c: 0x80c30000
    ctx->pc = 0x1f2c6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f2c70: 0x50830003
    ctx->pc = 0x1F2C70u;
    {
        const bool branch_taken_0x1f2c70 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f2c70) {
            ctx->pc = 0x1F2C74u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1F2C80u;
            goto label_1f2c80;
        }
    }
    ctx->pc = 0x1F2C78u;
    // 0x1f2c78: 0x10000005
    ctx->pc = 0x1F2C78u;
    {
        const bool branch_taken_0x1f2c78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2C7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937604), GPR_U32(ctx, 0));
        if (branch_taken_0x1f2c78) {
            ctx->pc = 0x1F2C90u;
            goto label_1f2c90;
        }
    }
    ctx->pc = 0x1F2C80u;
label_1f2c80:
    // 0x1f2c80: 0x28a30007
    ctx->pc = 0x1f2c80u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 7));
    // 0x1f2c84: 0x24c60001
    ctx->pc = 0x1f2c84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f2c88: 0x1460fff7
    ctx->pc = 0x1F2C88u;
    {
        const bool branch_taken_0x1f2c88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F2C8Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1f2c88) {
            ctx->pc = 0x1F2C68u;
            goto label_1f2c68;
        }
    }
    ctx->pc = 0x1F2C90u;
label_1f2c90:
    // 0x1f2c90: 0x3e00008
    ctx->pc = 0x1F2C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2C54u: goto label_1f2c54;
            case 0x1F2C68u: goto label_1f2c68;
            case 0x1F2C80u: goto label_1f2c80;
            case 0x1F2C90u: goto label_1f2c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2C98u;
}
