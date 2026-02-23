#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_IsCompleted
// Address: 0x172550 - 0x172560
void ADXT_IsCompleted_0x172550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_IsCompleted");


    ctx->pc = 0x172550u;

    // 0x172550: 0x80820001
    ctx->pc = 0x172550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x172554: 0x38420005
    ctx->pc = 0x172554u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 5));
    // 0x172558: 0x3e00008
    ctx->pc = 0x172558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17255Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172560u;
}
