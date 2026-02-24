#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: power
// Address: 0x102a48 - 0x102a74
void power_0x102a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("power_0x102a48");
#endif

    ctx->pc = 0x102a48u;

    // 0x102a48: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x102A48u;
    {
        const bool branch_taken_0x102a48 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x102A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A48u;
            // 0x102a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a48) {
            ctx->pc = 0x102A6Cu;
            goto label_102a6c;
        }
    }
    ctx->pc = 0x102A50u;
label_102a50:
    // 0x102a50: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x102a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x102a54: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x102a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x102a58: 0x0  nop
    ctx->pc = 0x102a58u;
    // NOP
    // 0x102a5c: 0x0  nop
    ctx->pc = 0x102a5cu;
    // NOP
    // 0x102a60: 0x0  nop
    ctx->pc = 0x102a60u;
    // NOP
    // 0x102a64: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102A64u;
    {
        const bool branch_taken_0x102a64 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x102a64) {
            ctx->pc = 0x102A50u;
            goto label_102a50;
        }
    }
    ctx->pc = 0x102A6Cu;
label_102a6c:
    // 0x102a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x102A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102A50u: goto label_102a50;
            case 0x102A6Cu: goto label_102a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102A74u;
}
