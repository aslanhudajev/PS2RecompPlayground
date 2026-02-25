#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vumem1CheckRest
// Address: 0x117840 - 0x117868
void Vumem1CheckRest_0x117840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vumem1CheckRest_0x117840");
#endif

    ctx->pc = 0x117840u;

    // 0x117840: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x117840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x117844: 0x8c627210  lw          $v0, 0x7210($v1)
    ctx->pc = 0x117844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29200)));
    // 0x117848: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x117848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11784c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11784Cu;
    {
        const bool branch_taken_0x11784c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11784Cu;
            // 0x117850: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11784c) {
            ctx->pc = 0x11785Cu;
            goto label_11785c;
        }
    }
    ctx->pc = 0x117854u;
    // 0x117854: 0x3e00008  jr          $ra
    ctx->pc = 0x117854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117854u;
            // 0x117858: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11785Cu: goto label_11785c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11785Cu;
label_11785c:
    // 0x11785c: 0x8c627214  lw          $v0, 0x7214($v1)
    ctx->pc = 0x11785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29204)));
    // 0x117860: 0x3e00008  jr          $ra
    ctx->pc = 0x117860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117860u;
            // 0x117864: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11785Cu: goto label_11785c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117868u;
}
