#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setNameEntry
// Address: 0x15bcc0 - 0x15bcdc
void setNameEntry_0x15bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setNameEntry_0x15bcc0");
#endif

    ctx->pc = 0x15bcc0u;

    // 0x15bcc0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15bcc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bcc8: 0x24633540  addiu       $v1, $v1, 0x3540
    ctx->pc = 0x15bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13632));
    // 0x15bccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bcd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCD4u;
            // 0x15bcd8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BCDCu;
}
