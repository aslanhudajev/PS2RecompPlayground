#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setAlpha
// Address: 0x108bb0 - 0x108bcc
void setAlpha_0x108bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108bb0u;

    // 0x108bb0: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x108bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x108bb4: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x108bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x108bb8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x108bb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108bbc: 0x24421698  addiu       $v0, $v0, 0x1698
    ctx->pc = 0x108bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x108bc0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x108bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x108BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108BC4u;
            // 0x108bc8: 0xa0850028  sb          $a1, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108BCCu;
}
