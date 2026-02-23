#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitDispSilver__Fv
// Address: 0x213b70 - 0x213bb0
void InitDispSilver__Fv_0x213b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitDispSilver__Fv");


    ctx->pc = 0x213b70u;

    // 0x213b70: 0x27bdfff0
    ctx->pc = 0x213b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213b74: 0x7fbf0000
    ctx->pc = 0x213b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x213b78: 0x3c010050
    ctx->pc = 0x213b78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213b7c: 0x8424e504
    ctx->pc = 0x213b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x213b80: 0x2403000a
    ctx->pc = 0x213b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x213b84: 0x14830007
    ctx->pc = 0x213B84u;
    {
        const bool branch_taken_0x213b84 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x213b84) {
            ctx->pc = 0x213BA4u;
            goto label_213ba4;
        }
    }
    ctx->pc = 0x213B8Cu;
    // 0x213b8c: 0x8f848bcc
    ctx->pc = 0x213b8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x213b90: 0x24030001
    ctx->pc = 0x213b90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213b94: 0x14830003
    ctx->pc = 0x213B94u;
    {
        const bool branch_taken_0x213b94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x213b94) {
            ctx->pc = 0x213BA4u;
            goto label_213ba4;
        }
    }
    ctx->pc = 0x213B9Cu;
    // 0x213b9c: 0xc283cd8
    ctx->pc = 0x213B9Cu;
    SET_GPR_U32(ctx, 31, 0x213BA4u);
    ctx->pc = 0xA0F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitDispSilverCore__Fv_0xa0f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213BA4u; }
        else if (ctx->pc != 0x213BA4u) { ctx->pc = 0x213BA4u; }
    }
    if (ctx->pc != 0x213BA4u) { return; }
    ctx->pc = 0x213BA4u;
label_213ba4:
    // 0x213ba4: 0x7bbf0000
    ctx->pc = 0x213ba4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213ba8: 0x3e00008
    ctx->pc = 0x213BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213BACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213BA4u: goto label_213ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213BB0u;
}
