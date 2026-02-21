#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetVuStat
// Address: 0x2b38d0 - 0x2b3908
void pbSetVuStat_0x2b38d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b38d0u;

    // 0x2b38d0: 0x0
    ctx->pc = 0x2b38d0u;
    // NOP
    // 0x2b38d4: 0x0
    ctx->pc = 0x2b38d4u;
    // NOP
    // 0x2b38d8: 0x0
    ctx->pc = 0x2b38d8u;
    // NOP
    // 0x2b38dc: 0x0
    ctx->pc = 0x2b38dcu;
    // NOP
    // 0x2b38e0: 0x0
    ctx->pc = 0x2b38e0u;
    // NOP
    // 0x2b38e4: 0x0
    ctx->pc = 0x2b38e4u;
    // NOP
    // 0x2b38e8: 0x48c4e800
    ctx->pc = 0x2b38e8u;
    ctx->vu0_vpu_stat = GPR_U32(ctx, 4) & 0x3FF;
    // 0x2b38ec: 0x0
    ctx->pc = 0x2b38ecu;
    // NOP
    // 0x2b38f0: 0x0
    ctx->pc = 0x2b38f0u;
    // NOP
    // 0x2b38f4: 0x0
    ctx->pc = 0x2b38f4u;
    // NOP
    // 0x2b38f8: 0x0
    ctx->pc = 0x2b38f8u;
    // NOP
    // 0x2b38fc: 0x0
    ctx->pc = 0x2b38fcu;
    // NOP
    // 0x2b3900: 0x3e00008
    ctx->pc = 0x2B3900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3908u;
}
