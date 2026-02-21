#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerUnsetGrabbed
// Address: 0x236e68 - 0x236ea0
void PlayerUnsetGrabbed_0x236e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236e68u;

    // 0x236e68: 0x27bdffe0
    ctx->pc = 0x236e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x236e6c: 0xffbf0010
    ctx->pc = 0x236e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236e70: 0xffb00000
    ctx->pc = 0x236e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236e74: 0x80802d
    ctx->pc = 0x236e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e78: 0xc08db7a
    ctx->pc = 0x236E78u;
    SET_GPR_U32(ctx, 31, 0x236E80u);
    ctx->pc = 0x236E7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUnsetParent_0x236de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236E80u; }
    }
    if (ctx->pc != 0x236E80u) { return; }
    ctx->pc = 0x236E80u;
    // 0x236e80: 0x8e0208ac
    ctx->pc = 0x236e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2220)));
    // 0x236e84: 0x2403bfff
    ctx->pc = 0x236e84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x236e88: 0x431024
    ctx->pc = 0x236e88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x236e8c: 0xae0208ac
    ctx->pc = 0x236e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 2));
    // 0x236e90: 0xdfbf0010
    ctx->pc = 0x236e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236e94: 0xdfb00000
    ctx->pc = 0x236e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236e98: 0x3e00008
    ctx->pc = 0x236E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236EA0u;
}
