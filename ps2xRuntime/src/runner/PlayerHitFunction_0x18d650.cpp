#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlayerHitFunction
// Address: 0x18d650 - 0x18d678
void PlayerHitFunction_0x18d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlayerHitFunction_0x18d650");
#endif

    ctx->pc = 0x18d650u;

    // 0x18d650: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18d654: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d658: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D658u;
    {
        const bool branch_taken_0x18d658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d658) {
            ctx->pc = 0x18D670u;
            goto label_18d670;
        }
    }
    ctx->pc = 0x18D660u;
    // 0x18d660: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x18d660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18d664: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x18d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x18d668: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18d668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18d66c: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x18d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
label_18d670:
    // 0x18d670: 0x3e00008  jr          $ra
    ctx->pc = 0x18D670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D670u: goto label_18d670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D678u;
}
