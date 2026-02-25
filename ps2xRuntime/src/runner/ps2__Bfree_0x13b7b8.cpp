#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _Bfree
// Address: 0x13b7b8 - 0x13b7e4
void ps2__Bfree_0x13b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__Bfree_0x13b7b8");
#endif

    ctx->pc = 0x13b7b8u;

    // 0x13b7b8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B7B8u;
    {
        const bool branch_taken_0x13b7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b7b8) {
            ctx->pc = 0x13B7DCu;
            goto label_13b7dc;
        }
    }
    ctx->pc = 0x13B7C0u;
    // 0x13b7c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13b7c4: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x13b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x13b7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b7cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13b7d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b7d4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13b7d8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x13b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_13b7dc:
    // 0x13b7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13B7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B7DCu: goto label_13b7dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B7E4u;
}
