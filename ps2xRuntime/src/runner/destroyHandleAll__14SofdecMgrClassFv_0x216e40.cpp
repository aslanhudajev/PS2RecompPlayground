#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: destroyHandleAll__14SofdecMgrClassFv
// Address: 0x216e40 - 0x216e9c
void destroyHandleAll__14SofdecMgrClassFv_0x216e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("destroyHandleAll__14SofdecMgrClassFv");


    ctx->pc = 0x216e40u;

label_216e40:
    // 0x216e40: 0x27bdffd0
    ctx->pc = 0x216e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_216e44:
    // 0x216e44: 0x7fbf0020
    ctx->pc = 0x216e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_216e48:
    // 0x216e48: 0x7fb10010
    ctx->pc = 0x216e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_216e4c:
    // 0x216e4c: 0x7fb00000
    ctx->pc = 0x216e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_216e50:
    // 0x216e50: 0x70808e28
    ctx->pc = 0x216e50u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_216e54:
    // 0x216e54: 0x70008628
    ctx->pc = 0x216e54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_216e58:
    // 0x216e58: 0x8e240000
    ctx->pc = 0x216e58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_216e5c:
    // 0x216e5c: 0x50800007
label_216e60:
    if (ctx->pc == 0x216E60u) {
        ctx->pc = 0x216E60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x216E64u;
        goto label_216e64;
    }
    ctx->pc = 0x216E5Cu;
    {
        const bool branch_taken_0x216e5c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x216e5c) {
            ctx->pc = 0x216E60u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x216E7Cu;
            goto label_216e7c;
        }
    }
    ctx->pc = 0x216E64u;
label_216e64:
    // 0x216e64: 0x8c820000
    ctx->pc = 0x216e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216e68:
    // 0x216e68: 0x8c420014
    ctx->pc = 0x216e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_216e6c:
    // 0x216e6c: 0x40f809
label_216e70:
    if (ctx->pc == 0x216E70u) {
        ctx->pc = 0x216E74u;
        goto label_216e74;
    }
    ctx->pc = 0x216E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216E74u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216E40u: goto label_216e40;
            case 0x216E44u: goto label_216e44;
            case 0x216E48u: goto label_216e48;
            case 0x216E4Cu: goto label_216e4c;
            case 0x216E50u: goto label_216e50;
            case 0x216E54u: goto label_216e54;
            case 0x216E58u: goto label_216e58;
            case 0x216E5Cu: goto label_216e5c;
            case 0x216E60u: goto label_216e60;
            case 0x216E64u: goto label_216e64;
            case 0x216E68u: goto label_216e68;
            case 0x216E6Cu: goto label_216e6c;
            case 0x216E70u: goto label_216e70;
            case 0x216E74u: goto label_216e74;
            case 0x216E78u: goto label_216e78;
            case 0x216E7Cu: goto label_216e7c;
            case 0x216E80u: goto label_216e80;
            case 0x216E84u: goto label_216e84;
            case 0x216E88u: goto label_216e88;
            case 0x216E8Cu: goto label_216e8c;
            case 0x216E90u: goto label_216e90;
            case 0x216E94u: goto label_216e94;
            case 0x216E98u: goto label_216e98;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216E74u; }
            if (ctx->pc != 0x216E74u) { return; }
        }
    }
    ctx->pc = 0x216E74u;
label_216e74:
    // 0x216e74: 0xae200000
    ctx->pc = 0x216e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_216e78:
    // 0x216e78: 0x26100001
    ctx->pc = 0x216e78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_216e7c:
    // 0x216e7c: 0x2a030004
    ctx->pc = 0x216e7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4));
label_216e80:
    // 0x216e80: 0x1460fff5
label_216e84:
    if (ctx->pc == 0x216E84u) {
        ctx->pc = 0x216E84u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x216E88u;
        goto label_216e88;
    }
    ctx->pc = 0x216E80u;
    {
        const bool branch_taken_0x216e80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x216E84u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x216e80) {
            ctx->pc = 0x216E58u;
            goto label_216e58;
        }
    }
    ctx->pc = 0x216E88u;
label_216e88:
    // 0x216e88: 0x7bbf0020
    ctx->pc = 0x216e88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216e8c:
    // 0x216e8c: 0x7bb10010
    ctx->pc = 0x216e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216e90:
    // 0x216e90: 0x7bb00000
    ctx->pc = 0x216e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_216e94:
    // 0x216e94: 0x3e00008
label_216e98:
    if (ctx->pc == 0x216E98u) {
        ctx->pc = 0x216E98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x216E9Cu;
        goto label_fallthrough_0x216e94;
    }
    ctx->pc = 0x216E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216E98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216E40u: goto label_216e40;
            case 0x216E44u: goto label_216e44;
            case 0x216E48u: goto label_216e48;
            case 0x216E4Cu: goto label_216e4c;
            case 0x216E50u: goto label_216e50;
            case 0x216E54u: goto label_216e54;
            case 0x216E58u: goto label_216e58;
            case 0x216E5Cu: goto label_216e5c;
            case 0x216E60u: goto label_216e60;
            case 0x216E64u: goto label_216e64;
            case 0x216E68u: goto label_216e68;
            case 0x216E6Cu: goto label_216e6c;
            case 0x216E70u: goto label_216e70;
            case 0x216E74u: goto label_216e74;
            case 0x216E78u: goto label_216e78;
            case 0x216E7Cu: goto label_216e7c;
            case 0x216E80u: goto label_216e80;
            case 0x216E84u: goto label_216e84;
            case 0x216E88u: goto label_216e88;
            case 0x216E8Cu: goto label_216e8c;
            case 0x216E90u: goto label_216e90;
            case 0x216E94u: goto label_216e94;
            case 0x216E98u: goto label_216e98;
            default: break;
        }
        return;
    }
label_fallthrough_0x216e94:
    ctx->pc = 0x216E9Cu;
}
