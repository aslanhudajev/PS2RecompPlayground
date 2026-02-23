#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrintMonitorMode
// Address: 0x1aba50 - 0x1aba98
void nlPrintMonitorMode_0x1aba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrintMonitorMode");


    ctx->pc = 0x1aba50u;

    // 0x1aba50: 0x1480000d
    ctx->pc = 0x1ABA50u;
    {
        const bool branch_taken_0x1aba50 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ABA54u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937176), GPR_U32(ctx, 4));
        if (branch_taken_0x1aba50) {
            ctx->pc = 0x1ABA88u;
            goto label_1aba88;
        }
    }
    ctx->pc = 0x1ABA58u;
    // 0x1aba58: 0xc7808a94
    ctx->pc = 0x1aba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aba5c: 0x3c010030
    ctx->pc = 0x1aba5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aba60: 0x84245840
    ctx->pc = 0x1aba60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22592)));
    // 0x1aba64: 0x8f838a78
    ctx->pc = 0x1aba64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937208)));
    // 0x1aba68: 0x8f858a7c
    ctx->pc = 0x1aba68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937212)));
    // 0x1aba6c: 0x46000024
    ctx->pc = 0x1aba6cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1aba70: 0x641818
    ctx->pc = 0x1aba70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1aba74: 0xaf858a84
    ctx->pc = 0x1aba74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937220), GPR_U32(ctx, 5));
    // 0x1aba78: 0x44040000
    ctx->pc = 0x1aba78u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1aba7c: 0xaf838a80
    ctx->pc = 0x1aba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937216), GPR_U32(ctx, 3));
    // 0x1aba80: 0x10000003
    ctx->pc = 0x1ABA80u;
    {
        const bool branch_taken_0x1aba80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABA84u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937200), GPR_U32(ctx, 4));
        if (branch_taken_0x1aba80) {
            ctx->pc = 0x1ABA90u;
            goto label_1aba90;
        }
    }
    ctx->pc = 0x1ABA88u;
label_1aba88:
    // 0x1aba88: 0x1000ffff
    ctx->pc = 0x1ABA88u;
    {
        const bool branch_taken_0x1aba88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aba88) {
            ctx->pc = 0x1ABA88u;
            goto label_1aba88;
        }
    }
    ctx->pc = 0x1ABA90u;
label_1aba90:
    // 0x1aba90: 0x3e00008
    ctx->pc = 0x1ABA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABA88u: goto label_1aba88;
            case 0x1ABA90u: goto label_1aba90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABA98u;
}
