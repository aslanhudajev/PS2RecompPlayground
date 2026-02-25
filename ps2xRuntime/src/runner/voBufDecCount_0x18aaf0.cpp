#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufDecCount
// Address: 0x18aaf0 - 0x18ab10
void voBufDecCount_0x18aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufDecCount_0x18aaf0");
#endif

    ctx->pc = 0x18aaf0u;

    // 0x18aaf0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18aaf4: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AAF4u;
    {
        const bool branch_taken_0x18aaf4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18aaf4) {
            ctx->pc = 0x18AB08u;
            goto label_18ab08;
        }
    }
    ctx->pc = 0x18AAFCu;
    // 0x18aafc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18ab00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ab04: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x18ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_18ab08:
    // 0x18ab08: 0x3e00008  jr          $ra
    ctx->pc = 0x18AB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AB08u: goto label_18ab08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AB10u;
}
