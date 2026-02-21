#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CopyMat4
// Address: 0x2d5250 - 0x2d5278
void CopyMat4_0x2d5250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5250u;

    // 0x2d5250: 0x78820000
    ctx->pc = 0x2d5250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5254: 0x78830010
    ctx->pc = 0x2d5254u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d5258: 0x78880020
    ctx->pc = 0x2d5258u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d525c: 0x78890030
    ctx->pc = 0x2d525cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d5260: 0x7ca20000
    ctx->pc = 0x2d5260u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2d5264: 0x7ca30010
    ctx->pc = 0x2d5264u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2d5268: 0x7ca80020
    ctx->pc = 0x2d5268u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
    // 0x2d526c: 0x7ca90030
    ctx->pc = 0x2d526cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 9));
    // 0x2d5270: 0x3e00008
    ctx->pc = 0x2D5270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5278u;
}
