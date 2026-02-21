#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbStartVu1
// Address: 0x2b3978 - 0x2b39b0
void pbStartVu1_0x2b3978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3978u;

    // 0x2b3978: 0x0
    ctx->pc = 0x2b3978u;
    // NOP
    // 0x2b397c: 0x0
    ctx->pc = 0x2b397cu;
    // NOP
    // 0x2b3980: 0x0
    ctx->pc = 0x2b3980u;
    // NOP
    // 0x2b3984: 0x0
    ctx->pc = 0x2b3984u;
    // NOP
    // 0x2b3988: 0x0
    ctx->pc = 0x2b3988u;
    // NOP
    // 0x2b398c: 0x0
    ctx->pc = 0x2b398cu;
    // NOP
    // 0x2b3990: 0x48c4f800  — CTC2 $a0, $31 (write CMSAR1 → trigger VU1)
    ctx->pc = 0x2b3990u;
    runtime->memory().triggerVU1(GPR_U32(ctx, 4));
    // 0x2b3994: 0x0
    ctx->pc = 0x2b3994u;
    // NOP
    // 0x2b3998: 0x0
    ctx->pc = 0x2b3998u;
    // NOP
    // 0x2b399c: 0x0
    ctx->pc = 0x2b399cu;
    // NOP
    // 0x2b39a0: 0x0
    ctx->pc = 0x2b39a0u;
    // NOP
    // 0x2b39a4: 0x0
    ctx->pc = 0x2b39a4u;
    // NOP
    // 0x2b39a8: 0x3e00008
    ctx->pc = 0x2B39A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B39B0u;
}
