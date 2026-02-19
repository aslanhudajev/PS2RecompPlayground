#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StatStartGame
// Address: 0x274050 - 0x274068
void StatStartGame_0x274050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274050u;

    // 0x274050: 0x3c02003c
    ctx->pc = 0x274050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x274054: 0x244239f8
    ctx->pc = 0x274054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14840));
    // 0x274058: 0x822021
    ctx->pc = 0x274058u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27405c: 0x24020001
    ctx->pc = 0x27405cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x274060: 0x3e00008
    ctx->pc = 0x274060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274064u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274068u;
}
