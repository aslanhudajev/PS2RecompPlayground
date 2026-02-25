#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enemy_BloadCast_Child_Hp0
// Address: 0x16e5e0 - 0x16e610
void Enemy_BloadCast_Child_Hp0_0x16e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enemy_BloadCast_Child_Hp0_0x16e5e0");
#endif

    ctx->pc = 0x16e5e0u;

    // 0x16e5e0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E5E0u;
    {
        const bool branch_taken_0x16e5e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e5e0) {
            ctx->pc = 0x16E608u;
            goto label_16e608;
        }
    }
    ctx->pc = 0x16E5E8u;
label_16e5e8:
    // 0x16e5e8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x16e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x16e5ec: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x16e5f0: 0x0  nop
    ctx->pc = 0x16e5f0u;
    // NOP
    // 0x16e5f4: 0x0  nop
    ctx->pc = 0x16e5f4u;
    // NOP
    // 0x16e5f8: 0x0  nop
    ctx->pc = 0x16e5f8u;
    // NOP
    // 0x16e5fc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16E5FCu;
    {
        const bool branch_taken_0x16e5fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e5fc) {
            ctx->pc = 0x16E5E8u;
            goto label_16e5e8;
        }
    }
    ctx->pc = 0x16E604u;
    // 0x16e604: 0x0  nop
    ctx->pc = 0x16e604u;
    // NOP
label_16e608:
    // 0x16e608: 0x3e00008  jr          $ra
    ctx->pc = 0x16E608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E5E8u: goto label_16e5e8;
            case 0x16E608u: goto label_16e608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E610u;
}
