#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _unknown_extension
// Address: 0x12c950 - 0x12c95c
void _unknown_extension_0x12c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_unknown_extension_0x12c950");
#endif

    ctx->pc = 0x12c950u;

    // 0x12c950: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12c950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12c954: 0x804b01e  j           func_12C078
    ctx->pc = 0x12C954u;
    ctx->pc = 0x12C958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C954u;
            // 0x12c958: 0x24a5f598  addiu       $a1, $a1, -0xA68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x12c078(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C95Cu;
}
