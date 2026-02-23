#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_SetFrmPrd
// Address: 0x166768 - 0x166770
void ADXAMP_SetFrmPrd_0x166768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_SetFrmPrd");


    ctx->pc = 0x166768u;

    // 0x166768: 0x3e00008
    ctx->pc = 0x166768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16676Cu;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166770u;
}
