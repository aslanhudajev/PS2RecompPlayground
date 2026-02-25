#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: QueryIntrContext
// Address: 0x12f730 - 0x12f740
void QueryIntrContext_0x12f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("QueryIntrContext_0x12f730");
#endif

    ctx->pc = 0x12f730u;

    // 0x12f730: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x12f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x12f734: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12f734u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x12f738: 0x3e00008  jr          $ra
    ctx->pc = 0x12F738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F738u;
            // 0x12f73c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F740u;
}
