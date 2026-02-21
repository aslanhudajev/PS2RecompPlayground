#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVuStat
// Address: 0x2b3898 - 0x2b38d0
void pbGetVuStat_0x2b3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3898u;

    // 0x2b3898: 0x0
    ctx->pc = 0x2b3898u;
    // NOP
    // 0x2b389c: 0x0
    ctx->pc = 0x2b389cu;
    // NOP
    // 0x2b38a0: 0x0
    ctx->pc = 0x2b38a0u;
    // NOP
    // 0x2b38a4: 0x0
    ctx->pc = 0x2b38a4u;
    // NOP
    // 0x2b38a8: 0x0
    ctx->pc = 0x2b38a8u;
    // NOP
    // 0x2b38ac: 0x0
    ctx->pc = 0x2b38acu;
    // NOP
    // 0x2b38b0: 0x4842e800
    ctx->pc = 0x2b38b0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat);
    // 0x2b38b4: 0x0
    ctx->pc = 0x2b38b4u;
    // NOP
    // 0x2b38b8: 0x0
    ctx->pc = 0x2b38b8u;
    // NOP
    // 0x2b38bc: 0x0
    ctx->pc = 0x2b38bcu;
    // NOP
    // 0x2b38c0: 0x0
    ctx->pc = 0x2b38c0u;
    // NOP
    // 0x2b38c4: 0x0
    ctx->pc = 0x2b38c4u;
    // NOP
    // 0x2b38c8: 0x3e00008
    ctx->pc = 0x2B38C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B38D0u;
}
