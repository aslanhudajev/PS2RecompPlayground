#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sysbitPtr
// Address: 0x12a4a0 - 0x12a4cc
void _sysbitPtr_0x12a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sysbitPtr_0x12a4a0");
#endif

    ctx->pc = 0x12a4a0u;

    // 0x12a4a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12a4a4: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x12a4a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x12a4a8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x12a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x12a4ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12a4b0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12a4b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12a4b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A4B4u;
    {
        const bool branch_taken_0x12a4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a4b4) {
            ctx->pc = 0x12A4C4u;
            goto label_12a4c4;
        }
    }
    ctx->pc = 0x12A4BCu;
    // 0x12a4bc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x12a4c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12a4c4:
    // 0x12a4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12A4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4C4u;
            // 0x12a4c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A4C4u: goto label_12a4c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A4CCu;
}
