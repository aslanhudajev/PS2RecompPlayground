#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSysEndScene
// Address: 0x1af590 - 0x1af598
void nlSysEndScene_0x1af590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSysEndScene");


    ctx->pc = 0x1af590u;

    // 0x1af590: 0x3e00008
    ctx->pc = 0x1AF590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF594u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF598u;
}
