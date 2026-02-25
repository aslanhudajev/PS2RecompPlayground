#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsDualShock
// Address: 0x154490 - 0x1544b8
void wrsDualShock_0x154490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsDualShock_0x154490");
#endif

    ctx->pc = 0x154490u;

    // 0x154490: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x154490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x154494: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x154494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x154498: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15449c: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x15449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
    // 0x1544a0: 0x24842178  addiu       $a0, $a0, 0x2178
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8568));
    // 0x1544a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1544a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1544a8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1544a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1544ac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1544acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1544b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1544B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1544B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1544B0u;
            // 0x1544b4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1544B8u;
}
