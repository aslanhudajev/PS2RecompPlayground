#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EIntr
// Address: 0x1379e8 - 0x137a00
void EIntr_0x1379e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EIntr_0x1379e8");
#endif

    ctx->pc = 0x1379e8u;

    // 0x1379e8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1379ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1379ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1379f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1379f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1379f4: 0x42000038  ei
    ctx->pc = 0x1379f4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1379f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1379F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1379FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1379F8u;
            // 0x1379fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137A00u;
}
