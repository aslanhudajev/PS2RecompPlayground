#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_SetFrmLen
// Address: 0x166758 - 0x166760
void ADXAMP_SetFrmLen_0x166758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_SetFrmLen");


    ctx->pc = 0x166758u;

    // 0x166758: 0x3e00008
    ctx->pc = 0x166758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16675Cu;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166760u;
}
