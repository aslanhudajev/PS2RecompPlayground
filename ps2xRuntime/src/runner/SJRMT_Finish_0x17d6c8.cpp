#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_Finish
// Address: 0x17d6c8 - 0x17d6ec
void SJRMT_Finish_0x17d6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_Finish");


    ctx->pc = 0x17d6c8u;

    // 0x17d6c8: 0x3c030024
    ctx->pc = 0x17d6c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17d6cc: 0x8c620964
    ctx->pc = 0x17d6ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2404)));
    // 0x17d6d0: 0x2442ffff
    ctx->pc = 0x17d6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17d6d4: 0x14400003
    ctx->pc = 0x17D6D4u;
    {
        const bool branch_taken_0x17d6d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d6d4) {
            ctx->pc = 0x17D6E4u;
            goto label_17d6e4;
        }
    }
    ctx->pc = 0x17D6DCu;
    // 0x17d6dc: 0x805dcb4
    ctx->pc = 0x17D6DCu;
    ctx->pc = 0x1772D0u;
    DTX_Finish_0x1772d0(rdram, ctx, runtime); return;
    ctx->pc = 0x17D6E4u;
label_17d6e4:
    // 0x17d6e4: 0x3e00008
    ctx->pc = 0x17D6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D6E4u: goto label_17d6e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D6ECu;
}
