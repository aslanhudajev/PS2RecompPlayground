#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getCameraRot
// Address: 0x167dd0 - 0x167ddc
void getCameraRot_0x167dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getCameraRot_0x167dd0");
#endif

    ctx->pc = 0x167dd0u;

    // 0x167dd0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x167dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x167dd4: 0x804b76a  j           func_12DDA8
    ctx->pc = 0x167DD4u;
    ctx->pc = 0x167DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167DD4u;
            // 0x167dd8: 0x24a54c30  addiu       $a1, $a1, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x167DDCu;
}
