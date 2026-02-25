#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: zError
// Address: 0x1ef07c - 0x1ef098
void zError_0x1ef07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("zError_0x1ef07c");
#endif

    ctx->pc = 0x1ef07cu;

    // 0x1ef07c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ef07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef080: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ef084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ef088: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1ef08c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1ef08cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1ef090: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF090u;
            // 0x1ef094: 0x8c22ad28  lw          $v0, -0x52D8($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946088)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF098u;
}
