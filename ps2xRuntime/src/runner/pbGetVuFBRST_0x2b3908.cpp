#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVuFBRST
// Address: 0x2b3908 - 0x2b3940
void pbGetVuFBRST_0x2b3908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3908u;

    // 0x2b3908: 0x0
    ctx->pc = 0x2b3908u;
    // NOP
    // 0x2b390c: 0x0
    ctx->pc = 0x2b390cu;
    // NOP
    // 0x2b3910: 0x0
    ctx->pc = 0x2b3910u;
    // NOP
    // 0x2b3914: 0x0
    ctx->pc = 0x2b3914u;
    // NOP
    // 0x2b3918: 0x0
    ctx->pc = 0x2b3918u;
    // NOP
    // 0x2b391c: 0x0
    ctx->pc = 0x2b391cu;
    // NOP
    // 0x2b3920: 0x4842e000
    ctx->pc = 0x2b3920u;
    SET_GPR_U32(ctx, 2, ctx->vu0_itop);
    // 0x2b3924: 0x0
    ctx->pc = 0x2b3924u;
    // NOP
    // 0x2b3928: 0x0
    ctx->pc = 0x2b3928u;
    // NOP
    // 0x2b392c: 0x0
    ctx->pc = 0x2b392cu;
    // NOP
    // 0x2b3930: 0x0
    ctx->pc = 0x2b3930u;
    // NOP
    // 0x2b3934: 0x0
    ctx->pc = 0x2b3934u;
    // NOP
    // 0x2b3938: 0x3e00008
    ctx->pc = 0x2B3938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3940u;
}
