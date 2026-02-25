#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsHiGsUnInitEnv
// Address: 0x140690 - 0x14069c
void wrsHiGsUnInitEnv_0x140690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsHiGsUnInitEnv_0x140690");
#endif

    ctx->pc = 0x140690u;

    // 0x140690: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140694: 0x80447f2  j           func_111FC8
    ctx->pc = 0x140694u;
    ctx->pc = 0x140698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140694u;
            // 0x140698: 0x8c247680  lw          $a0, 0x7680($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111FC8u;
    if (runtime->hasFunction(0x111FC8u)) {
        auto targetFn = runtime->lookupFunction(0x111FC8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceHiGsEnvDelete_0x111fc8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14069Cu;
}
