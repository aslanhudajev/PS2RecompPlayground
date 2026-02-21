#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StatStartSession
// Address: 0x274030 - 0x274040
void StatStartSession_0x274030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274030u;

    // 0x274030: 0x3c03003c
    ctx->pc = 0x274030u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x274034: 0x24020001
    ctx->pc = 0x274034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x274038: 0x3e00008
    ctx->pc = 0x274038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27403Cu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 14832), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274040u;
}
