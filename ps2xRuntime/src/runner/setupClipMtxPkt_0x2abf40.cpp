#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setupClipMtxPkt
// Address: 0x2abf40 - 0x2abf8c
void setupClipMtxPkt_0x2abf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2abf40u;

    // 0x2abf40: 0x3c023000
    ctx->pc = 0x2abf40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)12288 << 16));
    // 0x2abf44: 0x3442000a
    ctx->pc = 0x2abf44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 10));
    // 0x2abf48: 0xac820000
    ctx->pc = 0x2abf48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2abf4c: 0x3c020fff
    ctx->pc = 0x2abf4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2abf50: 0x3442ffff
    ctx->pc = 0x2abf50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2abf54: 0xa21024
    ctx->pc = 0x2abf54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2abf58: 0xac820004
    ctx->pc = 0x2abf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2abf5c: 0x3c020100
    ctx->pc = 0x2abf5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2abf60: 0x34420404
    ctx->pc = 0x2abf60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1028));
    // 0x2abf64: 0xac820008
    ctx->pc = 0x2abf64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2abf68: 0x3c021000
    ctx->pc = 0x2abf68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2abf6c: 0xac82000c
    ctx->pc = 0x2abf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2abf70: 0xaca00000
    ctx->pc = 0x2abf70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2abf74: 0xaca00004
    ctx->pc = 0x2abf74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2abf78: 0xaca00008
    ctx->pc = 0x2abf78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2abf7c: 0x3c026c09
    ctx->pc = 0x2abf7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27657 << 16));
    // 0x2abf80: 0x34420015
    ctx->pc = 0x2abf80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 21));
    // 0x2abf84: 0x3e00008
    ctx->pc = 0x2ABF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABF88u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ABF8Cu;
}
