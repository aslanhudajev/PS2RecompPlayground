#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: kCopy
// Address: 0x1380a8 - 0x1380e0
void kCopy_0x1380a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kCopy_0x1380a8");
#endif

    ctx->pc = 0x1380a8u;

    // 0x1380a8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1380a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1380ac: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1380ACu;
    {
        const bool branch_taken_0x1380ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380ACu;
            // 0x1380b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380ac) {
            ctx->pc = 0x1380D8u;
            goto label_1380d8;
        }
    }
    ctx->pc = 0x1380B4u;
    // 0x1380b4: 0x0  nop
    ctx->pc = 0x1380b4u;
    // NOP
label_1380b8:
    // 0x1380b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1380b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1380bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1380bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1380c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1380c4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1380c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1380c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1380c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1380cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1380ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1380d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1380D0u;
    {
        const bool branch_taken_0x1380d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1380d0) {
            ctx->pc = 0x1380B8u;
            goto label_1380b8;
        }
    }
    ctx->pc = 0x1380D8u;
label_1380d8:
    // 0x1380d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1380D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1380DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380D8u;
            // 0x1380dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1380B8u: goto label_1380b8;
            case 0x1380D8u: goto label_1380d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1380E0u;
}
