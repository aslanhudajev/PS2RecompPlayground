#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: execVB__11CreditClassFv
// Address: 0x1d4a20 - 0x1d4a48
void execVB__11CreditClassFv_0x1d4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("execVB__11CreditClassFv");


    ctx->pc = 0x1d4a20u;

    // 0x1d4a20: 0x27bdfff0
    ctx->pc = 0x1d4a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4a24: 0x7fbf0000
    ctx->pc = 0x1d4a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d4a28: 0x87838b0c
    ctx->pc = 0x1d4a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937356)));
    // 0x1d4a2c: 0x10600003
    ctx->pc = 0x1D4A2Cu;
    {
        const bool branch_taken_0x1d4a2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4a2c) {
            ctx->pc = 0x1D4A3Cu;
            goto label_1d4a3c;
        }
    }
    ctx->pc = 0x1D4A34u;
    // 0x1d4a34: 0xc071f00
    ctx->pc = 0x1D4A34u;
    SET_GPR_U32(ctx, 31, 0x1D4A3Cu);
    ctx->pc = 0x1D4A38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    ctx->pc = 0x1C7C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlaGetCreditData_0x1c7c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A3Cu; }
        else if (ctx->pc != 0x1D4A3Cu) { ctx->pc = 0x1D4A3Cu; }
    }
    if (ctx->pc != 0x1D4A3Cu) { return; }
    ctx->pc = 0x1D4A3Cu;
label_1d4a3c:
    // 0x1d4a3c: 0x7bbf0000
    ctx->pc = 0x1d4a3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4a40: 0x3e00008
    ctx->pc = 0x1D4A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4A44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4A3Cu: goto label_1d4a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4A48u;
}
