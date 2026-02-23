#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getPicRate
// Address: 0x1a0e30 - 0x1a0ea0
void getPicRate_0x1a0e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getPicRate");


    ctx->pc = 0x1a0e30u;

label_1a0e30:
    // 0x1a0e30: 0x2483ffff
    ctx->pc = 0x1a0e30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a0e34:
    // 0x1a0e34: 0x2c620008
    ctx->pc = 0x1a0e34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_1a0e38:
    // 0x1a0e38: 0x10400017
label_1a0e3c:
    if (ctx->pc == 0x1A0E3Cu) {
        ctx->pc = 0x1A0E3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        ctx->pc = 0x1A0E40u;
        goto label_1a0e40;
    }
    ctx->pc = 0x1A0E38u;
    {
        const bool branch_taken_0x1a0e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0E3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x1a0e38) {
            ctx->pc = 0x1A0E98u;
            goto label_1a0e98;
        }
    }
    ctx->pc = 0x1A0E40u;
label_1a0e40:
    // 0x1a0e40: 0x31880
    ctx->pc = 0x1a0e40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1a0e44:
    // 0x1a0e44: 0x2442d770
    ctx->pc = 0x1a0e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956912));
label_1a0e48:
    // 0x1a0e48: 0x621821
    ctx->pc = 0x1a0e48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a0e4c:
    // 0x1a0e4c: 0x8c640000
    ctx->pc = 0x1a0e4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a0e50:
    // 0x1a0e50: 0x800008
label_1a0e54:
    if (ctx->pc == 0x1A0E54u) {
        ctx->pc = 0x1A0E58u;
        goto label_1a0e58;
    }
    ctx->pc = 0x1A0E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E58u;
label_1a0e58:
    // 0x1a0e58: 0x3e00008
label_1a0e5c:
    if (ctx->pc == 0x1A0E5Cu) {
        ctx->pc = 0x1A0E5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23976));
        ctx->pc = 0x1A0E60u;
        goto label_1a0e60;
    }
    ctx->pc = 0x1A0E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23976));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E60u;
label_1a0e60:
    // 0x1a0e60: 0x3e00008
label_1a0e64:
    if (ctx->pc == 0x1A0E64u) {
        ctx->pc = 0x1A0E64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24000));
        ctx->pc = 0x1A0E68u;
        goto label_1a0e68;
    }
    ctx->pc = 0x1A0E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E68u;
label_1a0e68:
    // 0x1a0e68: 0x3e00008
label_1a0e6c:
    if (ctx->pc == 0x1A0E6Cu) {
        ctx->pc = 0x1A0E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25000));
        ctx->pc = 0x1A0E70u;
        goto label_1a0e70;
    }
    ctx->pc = 0x1A0E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E70u;
label_1a0e70:
    // 0x1a0e70: 0x3e00008
label_1a0e74:
    if (ctx->pc == 0x1A0E74u) {
        ctx->pc = 0x1A0E74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29970));
        ctx->pc = 0x1A0E78u;
        goto label_1a0e78;
    }
    ctx->pc = 0x1A0E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29970));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E78u;
label_1a0e78:
    // 0x1a0e78: 0x3e00008
label_1a0e7c:
    if (ctx->pc == 0x1A0E7Cu) {
        ctx->pc = 0x1A0E7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x1A0E80u;
        goto label_1a0e80;
    }
    ctx->pc = 0x1A0E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E80u;
label_1a0e80:
    // 0x1a0e80: 0x3e00008
label_1a0e84:
    if (ctx->pc == 0x1A0E84u) {
        ctx->pc = 0x1A0E84u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        ctx->pc = 0x1A0E88u;
        goto label_1a0e88;
    }
    ctx->pc = 0x1A0E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E84u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E88u;
label_1a0e88:
    // 0x1a0e88: 0x3e00008
label_1a0e8c:
    if (ctx->pc == 0x1A0E8Cu) {
        ctx->pc = 0x1A0E8Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 59940));
        ctx->pc = 0x1A0E90u;
        goto label_1a0e90;
    }
    ctx->pc = 0x1A0E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E8Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 59940));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E90u;
label_1a0e90:
    // 0x1a0e90: 0x3e00008
label_1a0e94:
    if (ctx->pc == 0x1A0E94u) {
        ctx->pc = 0x1A0E94u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 60000));
        ctx->pc = 0x1A0E98u;
        goto label_1a0e98;
    }
    ctx->pc = 0x1A0E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E94u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 60000));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E98u;
label_1a0e98:
    // 0x1a0e98: 0x3e00008
label_1a0e9c:
    if (ctx->pc == 0x1A0E9Cu) {
        ctx->pc = 0x1A0E9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EA0u;
        goto label_fallthrough_0x1a0e98;
    }
    ctx->pc = 0x1A0E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0E30u: goto label_1a0e30;
            case 0x1A0E34u: goto label_1a0e34;
            case 0x1A0E38u: goto label_1a0e38;
            case 0x1A0E3Cu: goto label_1a0e3c;
            case 0x1A0E40u: goto label_1a0e40;
            case 0x1A0E44u: goto label_1a0e44;
            case 0x1A0E48u: goto label_1a0e48;
            case 0x1A0E4Cu: goto label_1a0e4c;
            case 0x1A0E50u: goto label_1a0e50;
            case 0x1A0E54u: goto label_1a0e54;
            case 0x1A0E58u: goto label_1a0e58;
            case 0x1A0E5Cu: goto label_1a0e5c;
            case 0x1A0E60u: goto label_1a0e60;
            case 0x1A0E64u: goto label_1a0e64;
            case 0x1A0E68u: goto label_1a0e68;
            case 0x1A0E6Cu: goto label_1a0e6c;
            case 0x1A0E70u: goto label_1a0e70;
            case 0x1A0E74u: goto label_1a0e74;
            case 0x1A0E78u: goto label_1a0e78;
            case 0x1A0E7Cu: goto label_1a0e7c;
            case 0x1A0E80u: goto label_1a0e80;
            case 0x1A0E84u: goto label_1a0e84;
            case 0x1A0E88u: goto label_1a0e88;
            case 0x1A0E8Cu: goto label_1a0e8c;
            case 0x1A0E90u: goto label_1a0e90;
            case 0x1A0E94u: goto label_1a0e94;
            case 0x1A0E98u: goto label_1a0e98;
            case 0x1A0E9Cu: goto label_1a0e9c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a0e98:
    ctx->pc = 0x1A0EA0u;
}
