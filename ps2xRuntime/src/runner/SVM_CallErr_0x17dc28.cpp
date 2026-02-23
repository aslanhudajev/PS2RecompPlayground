#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_CallErr
// Address: 0x17dc28 - 0x17dcac
void SVM_CallErr_0x17dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_CallErr");


    ctx->pc = 0x17dc28u;

label_17dc28:
    // 0x17dc28: 0x27bdff50
    ctx->pc = 0x17dc28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_17dc2c:
    // 0x17dc2c: 0x3c020024
    ctx->pc = 0x17dc2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17dc30:
    // 0x17dc30: 0xffb10010
    ctx->pc = 0x17dc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17dc34:
    // 0x17dc34: 0xffb00000
    ctx->pc = 0x17dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17dc38:
    // 0x17dc38: 0x245113b8
    ctx->pc = 0x17dc38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 5048));
label_17dc3c:
    // 0x17dc3c: 0xffa50078
    ctx->pc = 0x17dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
label_17dc40:
    // 0x17dc40: 0x80802d
    ctx->pc = 0x17dc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17dc44:
    // 0x17dc44: 0xffa60080
    ctx->pc = 0x17dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
label_17dc48:
    // 0x17dc48: 0x220202d
    ctx->pc = 0x17dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dc4c:
    // 0x17dc4c: 0xffbf0020
    ctx->pc = 0x17dc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17dc50:
    // 0x17dc50: 0x282d
    ctx->pc = 0x17dc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17dc54:
    // 0x17dc54: 0xffa70088
    ctx->pc = 0x17dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
label_17dc58:
    // 0x17dc58: 0x24060100
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
label_17dc5c:
    // 0x17dc5c: 0xffa80090
    ctx->pc = 0x17dc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
label_17dc60:
    // 0x17dc60: 0xffa90098
    ctx->pc = 0x17dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
label_17dc64:
    // 0x17dc64: 0xffaa00a0
    ctx->pc = 0x17dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
label_17dc68:
    // 0x17dc68: 0xc050cfe
label_17dc6c:
    if (ctx->pc == 0x17DC6Cu) {
        ctx->pc = 0x17DC6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
        ctx->pc = 0x17DC70u;
        goto label_17dc70;
    }
    ctx->pc = 0x17DC68u;
    SET_GPR_U32(ctx, 31, 0x17DC70u);
    ctx->pc = 0x17DC6Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC70u; }
        else if (ctx->pc != 0x17DC70u) { ctx->pc = 0x17DC70u; }
    }
    if (ctx->pc != 0x17DC70u) { return; }
    ctx->pc = 0x17DC70u;
label_17dc70:
    // 0x17dc70: 0x200282d
    ctx->pc = 0x17dc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17dc74:
    // 0x17dc74: 0x220202d
    ctx->pc = 0x17dc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dc78:
    // 0x17dc78: 0xc0520a2
label_17dc7c:
    if (ctx->pc == 0x17DC7Cu) {
        ctx->pc = 0x17DC7Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x17DC80u;
        goto label_17dc80;
    }
    ctx->pc = 0x17DC78u;
    SET_GPR_U32(ctx, 31, 0x17DC80u);
    ctx->pc = 0x17DC7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x148288u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x148288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DC80u; }
        else if (ctx->pc != 0x17DC80u) { ctx->pc = 0x17DC80u; }
    }
    if (ctx->pc != 0x17DC80u) { return; }
    ctx->pc = 0x17DC80u;
label_17dc80:
    // 0x17dc80: 0x8f828920
    ctx->pc = 0x17dc80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_17dc84:
    // 0x17dc84: 0x10400005
label_17dc88:
    if (ctx->pc == 0x17DC88u) {
        ctx->pc = 0x17DC88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17DC8Cu;
        goto label_17dc8c;
    }
    ctx->pc = 0x17DC84u;
    {
        const bool branch_taken_0x17dc84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DC88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17dc84) {
            ctx->pc = 0x17DC9Cu;
            goto label_17dc9c;
        }
    }
    ctx->pc = 0x17DC8Cu;
label_17dc8c:
    // 0x17dc8c: 0x8f848924
    ctx->pc = 0x17dc8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_17dc90:
    // 0x17dc90: 0x40f809
label_17dc94:
    if (ctx->pc == 0x17DC94u) {
        ctx->pc = 0x17DC94u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17DC98u;
        goto label_17dc98;
    }
    ctx->pc = 0x17DC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DC98u);
        ctx->pc = 0x17DC94u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DC28u: goto label_17dc28;
            case 0x17DC2Cu: goto label_17dc2c;
            case 0x17DC30u: goto label_17dc30;
            case 0x17DC34u: goto label_17dc34;
            case 0x17DC38u: goto label_17dc38;
            case 0x17DC3Cu: goto label_17dc3c;
            case 0x17DC40u: goto label_17dc40;
            case 0x17DC44u: goto label_17dc44;
            case 0x17DC48u: goto label_17dc48;
            case 0x17DC4Cu: goto label_17dc4c;
            case 0x17DC50u: goto label_17dc50;
            case 0x17DC54u: goto label_17dc54;
            case 0x17DC58u: goto label_17dc58;
            case 0x17DC5Cu: goto label_17dc5c;
            case 0x17DC60u: goto label_17dc60;
            case 0x17DC64u: goto label_17dc64;
            case 0x17DC68u: goto label_17dc68;
            case 0x17DC6Cu: goto label_17dc6c;
            case 0x17DC70u: goto label_17dc70;
            case 0x17DC74u: goto label_17dc74;
            case 0x17DC78u: goto label_17dc78;
            case 0x17DC7Cu: goto label_17dc7c;
            case 0x17DC80u: goto label_17dc80;
            case 0x17DC84u: goto label_17dc84;
            case 0x17DC88u: goto label_17dc88;
            case 0x17DC8Cu: goto label_17dc8c;
            case 0x17DC90u: goto label_17dc90;
            case 0x17DC94u: goto label_17dc94;
            case 0x17DC98u: goto label_17dc98;
            case 0x17DC9Cu: goto label_17dc9c;
            case 0x17DCA0u: goto label_17dca0;
            case 0x17DCA4u: goto label_17dca4;
            case 0x17DCA8u: goto label_17dca8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17DC98u; }
            if (ctx->pc != 0x17DC98u) { return; }
        }
    }
    ctx->pc = 0x17DC98u;
label_17dc98:
    // 0x17dc98: 0xdfbf0020
    ctx->pc = 0x17dc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17dc9c:
    // 0x17dc9c: 0xdfb10010
    ctx->pc = 0x17dc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17dca0:
    // 0x17dca0: 0xdfb00000
    ctx->pc = 0x17dca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17dca4:
    // 0x17dca4: 0x3e00008
label_17dca8:
    if (ctx->pc == 0x17DCA8u) {
        ctx->pc = 0x17DCA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x17DCACu;
        goto label_fallthrough_0x17dca4;
    }
    ctx->pc = 0x17DCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DC28u: goto label_17dc28;
            case 0x17DC2Cu: goto label_17dc2c;
            case 0x17DC30u: goto label_17dc30;
            case 0x17DC34u: goto label_17dc34;
            case 0x17DC38u: goto label_17dc38;
            case 0x17DC3Cu: goto label_17dc3c;
            case 0x17DC40u: goto label_17dc40;
            case 0x17DC44u: goto label_17dc44;
            case 0x17DC48u: goto label_17dc48;
            case 0x17DC4Cu: goto label_17dc4c;
            case 0x17DC50u: goto label_17dc50;
            case 0x17DC54u: goto label_17dc54;
            case 0x17DC58u: goto label_17dc58;
            case 0x17DC5Cu: goto label_17dc5c;
            case 0x17DC60u: goto label_17dc60;
            case 0x17DC64u: goto label_17dc64;
            case 0x17DC68u: goto label_17dc68;
            case 0x17DC6Cu: goto label_17dc6c;
            case 0x17DC70u: goto label_17dc70;
            case 0x17DC74u: goto label_17dc74;
            case 0x17DC78u: goto label_17dc78;
            case 0x17DC7Cu: goto label_17dc7c;
            case 0x17DC80u: goto label_17dc80;
            case 0x17DC84u: goto label_17dc84;
            case 0x17DC88u: goto label_17dc88;
            case 0x17DC8Cu: goto label_17dc8c;
            case 0x17DC90u: goto label_17dc90;
            case 0x17DC94u: goto label_17dc94;
            case 0x17DC98u: goto label_17dc98;
            case 0x17DC9Cu: goto label_17dc9c;
            case 0x17DCA0u: goto label_17dca0;
            case 0x17DCA4u: goto label_17dca4;
            case 0x17DCA8u: goto label_17dca8;
            default: break;
        }
        return;
    }
label_fallthrough_0x17dca4:
    ctx->pc = 0x17DCACu;
}
