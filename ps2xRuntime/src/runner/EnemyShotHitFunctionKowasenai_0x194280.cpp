#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotHitFunctionKowasenai
// Address: 0x194280 - 0x1942a8
void EnemyShotHitFunctionKowasenai_0x194280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotHitFunctionKowasenai_0x194280");
#endif

    ctx->pc = 0x194280u;

    // 0x194280: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x194280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x194284: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x194284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x194288: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194288u;
    {
        const bool branch_taken_0x194288 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x19428Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194288u;
            // 0x19428c: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194288) {
            ctx->pc = 0x1942A0u;
            goto label_1942a0;
        }
    }
    ctx->pc = 0x194290u;
    // 0x194290: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x194290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x194294: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x194294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x194298: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x194298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x19429c: 0x0  nop
    ctx->pc = 0x19429cu;
    // NOP
label_1942a0:
    // 0x1942a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1942A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1942A0u: goto label_1942a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1942A8u;
}
