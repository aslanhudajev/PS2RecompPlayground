#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNoShadeMod
// Address: 0x2aea88 - 0x2aeaa4
void MBNoShadeMod_0x2aea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aea88u;

    // 0x2aea88: 0x3c020036
    ctx->pc = 0x2aea88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aea8c: 0x8c43dee0
    ctx->pc = 0x2aea8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aea90: 0x8c62001c
    ctx->pc = 0x2aea90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2aea94: 0xe44c00a8
    ctx->pc = 0x2aea94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2aea98: 0x8c62001c
    ctx->pc = 0x2aea98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2aea9c: 0x3e00008
    ctx->pc = 0x2AEA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEAA0u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEAA4u;
}
