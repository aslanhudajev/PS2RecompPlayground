#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimCompressSetup
// Address: 0x20fb88 - 0x20fbb4
void AnimCompressSetup_0x20fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fb88u;

    // 0x20fb88: 0x3c050032
    ctx->pc = 0x20fb88u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x20fb8c: 0x8c830004
    ctx->pc = 0x20fb8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20fb90: 0x8c620000
    ctx->pc = 0x20fb90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fb94: 0xaca2f49c
    ctx->pc = 0x20fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294964380), GPR_U32(ctx, 2));
    // 0x20fb98: 0x3c040032
    ctx->pc = 0x20fb98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20fb9c: 0x8c620004
    ctx->pc = 0x20fb9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20fba0: 0xac82f4a0
    ctx->pc = 0x20fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964384), GPR_U32(ctx, 2));
    // 0x20fba4: 0x3c040032
    ctx->pc = 0x20fba4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20fba8: 0x8c620008
    ctx->pc = 0x20fba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20fbac: 0x3e00008
    ctx->pc = 0x20FBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FBB0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294964388), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FBB4u;
}
