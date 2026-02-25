#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetStage6BossSuikomarePos
// Address: 0x1c7990 - 0x1c79f0
void GetStage6BossSuikomarePos_0x1c7990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetStage6BossSuikomarePos_0x1c7990");
#endif

    ctx->pc = 0x1c7990u;

    // 0x1c7990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7994: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C7994u;
    {
        const bool branch_taken_0x1c7994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c7994) {
            ctx->pc = 0x1C79D0u;
            goto label_1c79d0;
        }
    }
    ctx->pc = 0x1C799Cu;
    // 0x1c799c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C799Cu;
    {
        const bool branch_taken_0x1c799c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c799c) {
            ctx->pc = 0x1C79B0u;
            goto label_1c79b0;
        }
    }
    ctx->pc = 0x1C79A4u;
    // 0x1c79a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C79A4u;
    {
        const bool branch_taken_0x1c79a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c79a4) {
            ctx->pc = 0x1C79E8u;
            goto label_1c79e8;
        }
    }
    ctx->pc = 0x1C79ACu;
    // 0x1c79ac: 0x0  nop
    ctx->pc = 0x1c79acu;
    // NOP
label_1c79b0:
    // 0x1c79b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c79b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c79b4: 0x8c231cf0  lw          $v1, 0x1CF0($at)
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7408)));
    // 0x1c79b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c79b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c79bc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c79bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c79c0: 0x8c231ce8  lw          $v1, 0x1CE8($at)
    ctx->pc = 0x1c79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7400)));
    // 0x1c79c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C79C4u;
    {
        const bool branch_taken_0x1c79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C79C4u;
            // 0x1c79c8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79c4) {
            ctx->pc = 0x1C79E8u;
            goto label_1c79e8;
        }
    }
    ctx->pc = 0x1C79CCu;
    // 0x1c79cc: 0x0  nop
    ctx->pc = 0x1c79ccu;
    // NOP
label_1c79d0:
    // 0x1c79d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c79d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c79d4: 0x8c231ce0  lw          $v1, 0x1CE0($at)
    ctx->pc = 0x1c79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7392)));
    // 0x1c79d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1c79dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c79dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c79e0: 0x8c231cd8  lw          $v1, 0x1CD8($at)
    ctx->pc = 0x1c79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7384)));
    // 0x1c79e4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1c79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1c79e8:
    // 0x1c79e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C79E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C79B0u: goto label_1c79b0;
            case 0x1C79D0u: goto label_1c79d0;
            case 0x1C79E8u: goto label_1c79e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C79F0u;
}
