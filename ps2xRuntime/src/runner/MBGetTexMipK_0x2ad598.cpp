#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBGetTexMipK
// Address: 0x2ad598 - 0x2ad5ac
void MBGetTexMipK_0x2ad598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad598u;

    // 0x2ad598: 0x3c020036
    ctx->pc = 0x2ad598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad59c: 0x8c42dee0
    ctx->pc = 0x2ad59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad5a0: 0x8c420048
    ctx->pc = 0x2ad5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ad5a4: 0x3e00008
    ctx->pc = 0x2AD5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 868)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5ACu;
}
