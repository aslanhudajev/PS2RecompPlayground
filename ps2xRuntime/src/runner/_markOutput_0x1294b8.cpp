#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _markOutput
// Address: 0x1294b8 - 0x1294e0
void _markOutput_0x1294b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_markOutput_0x1294b8");
#endif

    ctx->pc = 0x1294b8u;

    // 0x1294b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1294b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1294bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1294bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1294c0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1294C0u;
    {
        const bool branch_taken_0x1294c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1294C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1294C0u;
            // 0x1294c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294c0) {
            ctx->pc = 0x1294D8u;
            goto label_1294d8;
        }
    }
    ctx->pc = 0x1294C8u;
    // 0x1294c8: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x1294c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x1294cc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1294ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1294d0: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x1294d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
    // 0x1294d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1294d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1294d8:
    // 0x1294d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1294D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1294DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1294D8u;
            // 0x1294dc: 0xac820820  sw          $v0, 0x820($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1294D8u: goto label_1294d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1294E0u;
}
