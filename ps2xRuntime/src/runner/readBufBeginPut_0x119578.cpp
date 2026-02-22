#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufBeginPut
// Address: 0x119578 - 0x1195a8
void readBufBeginPut_0x119578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119578u;

    // 0x119578: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x119578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x11957c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x11957cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119580: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x119580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x119584: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x119584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x119588: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x119588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11958c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11958Cu;
    {
        const bool branch_taken_0x11958c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11958c) {
            ctx->pc = 0x1195A0u;
            goto label_1195a0;
        }
    }
    ctx->pc = 0x119594u;
    // 0x119594: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x119594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119598: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11959c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11959cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1195a0:
    // 0x1195a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1195A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195A0u;
            // 0x1195a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1195A0u: goto label_1195a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1195A8u;
}
