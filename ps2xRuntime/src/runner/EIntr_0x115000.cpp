#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EIntr
// Address: 0x115000 - 0x115018
void EIntr_0x115000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115000u;

    // 0x115000: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x115000u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x115004: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x115004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x115008: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x115008u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11500c: 0x42000038  ei
    ctx->pc = 0x11500cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x115010: 0x3e00008  jr          $ra
    ctx->pc = 0x115010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115010u;
            // 0x115014: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115018u;
}
