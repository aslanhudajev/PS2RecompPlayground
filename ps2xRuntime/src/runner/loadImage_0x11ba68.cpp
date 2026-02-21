#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: loadImage
// Address: 0x11ba68 - 0x11baa0
void loadImage_0x11ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ba68u;

    // 0x11ba68: 0x3c020fff
    ctx->pc = 0x11ba68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x11ba6c: 0x3c051000
    ctx->pc = 0x11ba6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x11ba70: 0x3442ffff
    ctx->pc = 0x11ba70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11ba74: 0x34a5a030
    ctx->pc = 0x11ba74u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 41008));
    // 0x11ba78: 0x822024
    ctx->pc = 0x11ba78u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11ba7c: 0x3c031000
    ctx->pc = 0x11ba7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11ba80: 0xaca40000
    ctx->pc = 0x11ba80u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x11ba84: 0x3463a020
    ctx->pc = 0x11ba84u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 40992));
    // 0x11ba88: 0xac600000
    ctx->pc = 0x11ba88u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ba8c: 0x3c021000
    ctx->pc = 0x11ba8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11ba90: 0x3442a000
    ctx->pc = 0x11ba90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 40960));
    // 0x11ba94: 0x24030105
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 261));
    // 0x11ba98: 0x3e00008
    ctx->pc = 0x11BA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BA9Cu;
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BAA0u;
}
