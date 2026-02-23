#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_SetLpFlg
// Address: 0x17a6b0 - 0x17a6cc
void LSC_SetLpFlg_0x17a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_SetLpFlg");


    ctx->pc = 0x17a6b0u;

    // 0x17a6b0: 0x14800004
    ctx->pc = 0x17A6B0u;
    {
        const bool branch_taken_0x17a6b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a6b0) {
            ctx->pc = 0x17A6C4u;
            goto label_17a6c4;
        }
    }
    ctx->pc = 0x17A6B8u;
    // 0x17a6b8: 0x3c04002c
    ctx->pc = 0x17a6b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a6bc: 0x805e9c6
    ctx->pc = 0x17A6BCu;
    ctx->pc = 0x17A6C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    LSC_CallErrFunc_0x17a718(rdram, ctx, runtime); return;
    ctx->pc = 0x17A6C4u;
label_17a6c4:
    // 0x17a6c4: 0x3e00008
    ctx->pc = 0x17A6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6C8u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A6C4u: goto label_17a6c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A6CCu;
}
