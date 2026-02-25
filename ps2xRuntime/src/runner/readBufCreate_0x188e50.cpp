#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readBufCreate
// Address: 0x188e50 - 0x188e7c
void readBufCreate_0x188e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufCreate_0x188e50");
#endif

    ctx->pc = 0x188e50u;

    // 0x188e50: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188e54: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x188e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x188e58: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188e5c: 0xac200004  sw          $zero, 0x4($at)
    ctx->pc = 0x188e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 0));
    // 0x188e60: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188e64: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188e64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188e68: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x188e68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 0));
    // 0x188e6c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188e70: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188e74: 0x3e00008  jr          $ra
    ctx->pc = 0x188E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188E74u;
            // 0x188e78: 0xac230008  sw          $v1, 0x8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188E7Cu;
}
