#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st4bMoyo__14TrnKomono2TaskFv
// Address: 0x223050 - 0x223058
void st4bMoyo__14TrnKomono2TaskFv_0x223050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st4bMoyo__14TrnKomono2TaskFv");


    ctx->pc = 0x223050u;

    // 0x223050: 0x3e00008
    ctx->pc = 0x223050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223058u;
}
