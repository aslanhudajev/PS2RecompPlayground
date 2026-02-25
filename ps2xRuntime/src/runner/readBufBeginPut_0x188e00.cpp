#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readBufBeginPut
// Address: 0x188e00 - 0x188e40
void readBufBeginPut_0x188e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufBeginPut_0x188e00");
#endif

    ctx->pc = 0x188e00u;

    // 0x188e00: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188e04: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188e04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188e08: 0x8c230008  lw          $v1, 0x8($at)
    ctx->pc = 0x188e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x188e0c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188e10: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188e10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188e14: 0x8c220004  lw          $v0, 0x4($at)
    ctx->pc = 0x188e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x188e18: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x188e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188e1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188E1Cu;
    {
        const bool branch_taken_0x188e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188E1Cu;
            // 0x188e20: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e1c) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188E24u;
    // 0x188e24: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188e24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188e28: 0x8c230000  lw          $v1, 0x0($at)
    ctx->pc = 0x188e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x188e2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x188e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x188e30: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x188e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x188e34: 0x0  nop
    ctx->pc = 0x188e34u;
    // NOP
label_188e38:
    // 0x188e38: 0x3e00008  jr          $ra
    ctx->pc = 0x188E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188E38u: goto label_188e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188E40u;
}
