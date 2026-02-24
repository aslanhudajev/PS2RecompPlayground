#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecIsPreset
// Address: 0x119ab0 - 0x119ac4
void audioDecIsPreset_0x119ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119ab0u;

    // 0x119ab0: 0x8c830048
    ctx->pc = 0x119ab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x119ab4: 0x8c820054
    ctx->pc = 0x119ab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x119ab8: 0x43102a
    ctx->pc = 0x119ab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x119abc: 0x3e00008
    ctx->pc = 0x119ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AC0u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119AC4u;
}
