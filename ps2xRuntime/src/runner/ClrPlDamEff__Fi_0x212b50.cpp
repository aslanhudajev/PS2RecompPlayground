#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ClrPlDamEff__Fi
// Address: 0x212b50 - 0x212b78
void ClrPlDamEff__Fi_0x212b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ClrPlDamEff__Fi");


    ctx->pc = 0x212b50u;

    // 0x212b50: 0x418c0
    ctx->pc = 0x212b50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x212b54: 0x641823
    ctx->pc = 0x212b54u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212b58: 0x32080
    ctx->pc = 0x212b58u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x212b5c: 0x3c030050
    ctx->pc = 0x212b5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x212b60: 0x2463e3b0
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960048));
    // 0x212b64: 0x641821
    ctx->pc = 0x212b64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x212b68: 0xac600000
    ctx->pc = 0x212b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x212b6c: 0xac600004
    ctx->pc = 0x212b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x212b70: 0x3e00008
    ctx->pc = 0x212B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212B74u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212B78u;
}
