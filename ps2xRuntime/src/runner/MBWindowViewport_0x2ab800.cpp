#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowViewport
// Address: 0x2ab800 - 0x2ab838
void MBWindowViewport_0x2ab800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab800u;

    // 0x2ab800: 0x3c020036
    ctx->pc = 0x2ab800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab804: 0x8c43dee0
    ctx->pc = 0x2ab804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab808: 0x8c620004
    ctx->pc = 0x2ab808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab80c: 0xe44c0078
    ctx->pc = 0x2ab80cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2ab810: 0x8c620004
    ctx->pc = 0x2ab810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab814: 0xe44d007c
    ctx->pc = 0x2ab814u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x2ab818: 0x8c620004
    ctx->pc = 0x2ab818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab81c: 0xe44e0080
    ctx->pc = 0x2ab81cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2ab820: 0x8c620004
    ctx->pc = 0x2ab820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab824: 0xe44f0084
    ctx->pc = 0x2ab824u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2ab828: 0x8c630004
    ctx->pc = 0x2ab828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab82c: 0x24020001
    ctx->pc = 0x2ab82cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab830: 0x3e00008
    ctx->pc = 0x2AB830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB834u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB838u;
}
