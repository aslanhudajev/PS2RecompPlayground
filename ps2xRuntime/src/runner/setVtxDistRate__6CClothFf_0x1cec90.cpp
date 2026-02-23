#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setVtxDistRate__6CClothFf
// Address: 0x1cec90 - 0x1cec98
void setVtxDistRate__6CClothFf_0x1cec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setVtxDistRate__6CClothFf");


    ctx->pc = 0x1cec90u;

    // 0x1cec90: 0x3e00008
    ctx->pc = 0x1CEC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC94u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEC98u;
}
