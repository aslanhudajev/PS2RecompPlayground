#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CopyMat3
// Address: 0x2d5278 - 0x2d5298
void CopyMat3_0x2d5278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5278u;

    // 0x2d5278: 0x78820000
    ctx->pc = 0x2d5278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d527c: 0x78830010
    ctx->pc = 0x2d527cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d5280: 0x78880020
    ctx->pc = 0x2d5280u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d5284: 0x7ca20000
    ctx->pc = 0x2d5284u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2d5288: 0x7ca30010
    ctx->pc = 0x2d5288u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2d528c: 0x7ca80020
    ctx->pc = 0x2d528cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
    // 0x2d5290: 0x3e00008
    ctx->pc = 0x2D5290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5298u;
}
