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
// Address: 0x137210 - 0x137248
void kCopy_0x137210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kCopy_0x137210");
#endif

    ctx->pc = 0x137210u;

    // 0x137210: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x137210u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x137214: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x137214u;
    {
        const bool branch_taken_0x137214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x137218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137214u;
            // 0x137218: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137214) {
            ctx->pc = 0x137240u;
            goto label_137240;
        }
    }
    ctx->pc = 0x13721Cu;
    // 0x13721c: 0x0  nop
    ctx->pc = 0x13721cu;
    // NOP
label_137220:
    // 0x137220: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x137220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137224: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x137224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x137228: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x137228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13722c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x13722cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x137230: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x137230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x137234: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x137234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x137238: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137238u;
    {
        const bool branch_taken_0x137238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137238) {
            ctx->pc = 0x137220u;
            goto label_137220;
        }
    }
    ctx->pc = 0x137240u;
label_137240:
    // 0x137240: 0x3e00008  jr          $ra
    ctx->pc = 0x137240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137240u;
            // 0x137244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137220u: goto label_137220;
            case 0x137240u: goto label_137240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137248u;
}
