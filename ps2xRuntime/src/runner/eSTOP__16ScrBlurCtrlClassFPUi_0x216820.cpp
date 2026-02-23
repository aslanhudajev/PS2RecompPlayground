#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSTOP__16ScrBlurCtrlClassFPUi
// Address: 0x216820 - 0x21682c
void eSTOP__16ScrBlurCtrlClassFPUi_0x216820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSTOP__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x216820u;

    // 0x216820: 0xac800000
    ctx->pc = 0x216820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x216824: 0x3e00008
    ctx->pc = 0x216824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216828u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21682Cu;
}
