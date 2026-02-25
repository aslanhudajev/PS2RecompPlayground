#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsDualShockStop
// Address: 0x154460 - 0x154488
void wrsDualShockStop_0x154460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsDualShockStop_0x154460");
#endif

    ctx->pc = 0x154460u;

    // 0x154460: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x154460u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x154464: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x154464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x154468: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x154468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15446c: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
    // 0x154470: 0x24842178  addiu       $a0, $a0, 0x2178
    ctx->pc = 0x154470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8568));
    // 0x154474: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x154474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154478: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x154478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15447c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x15447cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x154480: 0x3e00008  jr          $ra
    ctx->pc = 0x154480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154480u;
            // 0x154484: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154488u;
}
