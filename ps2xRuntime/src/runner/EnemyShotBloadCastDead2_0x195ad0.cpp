#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotBloadCastDead2
// Address: 0x195ad0 - 0x195b08
void EnemyShotBloadCastDead2_0x195ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotBloadCastDead2_0x195ad0");
#endif

    ctx->pc = 0x195ad0u;

    // 0x195ad0: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195ad4: 0x8c250238  lw          $a1, 0x238($at)
    ctx->pc = 0x195ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 568)));
    // 0x195ad8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x195AD8u;
    {
        const bool branch_taken_0x195ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x195ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195AD8u;
            // 0x195adc: 0x3c03ffff  lui         $v1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ad8) {
            ctx->pc = 0x195B00u;
            goto label_195b00;
        }
    }
    ctx->pc = 0x195AE0u;
label_195ae0:
    // 0x195ae0: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x195ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x195ae4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x195ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x195ae8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195aec: 0x0  nop
    ctx->pc = 0x195aecu;
    // NOP
    // 0x195af0: 0x0  nop
    ctx->pc = 0x195af0u;
    // NOP
    // 0x195af4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195AF4u;
    {
        const bool branch_taken_0x195af4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x195af4) {
            ctx->pc = 0x195AE0u;
            goto label_195ae0;
        }
    }
    ctx->pc = 0x195AFCu;
    // 0x195afc: 0x0  nop
    ctx->pc = 0x195afcu;
    // NOP
label_195b00:
    // 0x195b00: 0x3e00008  jr          $ra
    ctx->pc = 0x195B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195AE0u: goto label_195ae0;
            case 0x195B00u: goto label_195b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195B08u;
}
