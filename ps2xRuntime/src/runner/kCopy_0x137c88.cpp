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
// Address: 0x137c88 - 0x137cc0
void kCopy_0x137c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kCopy_0x137c88");
#endif

    ctx->pc = 0x137c88u;

    // 0x137c88: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x137c8c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x137C8Cu;
    {
        const bool branch_taken_0x137c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C8Cu;
            // 0x137c90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c8c) {
            ctx->pc = 0x137CB8u;
            goto label_137cb8;
        }
    }
    ctx->pc = 0x137C94u;
    // 0x137c94: 0x0  nop
    ctx->pc = 0x137c94u;
    // NOP
label_137c98:
    // 0x137c98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x137c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137c9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x137c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x137ca0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x137ca4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x137ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x137ca8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x137ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x137cac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x137cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x137cb0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137CB0u;
    {
        const bool branch_taken_0x137cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137cb0) {
            ctx->pc = 0x137C98u;
            goto label_137c98;
        }
    }
    ctx->pc = 0x137CB8u;
label_137cb8:
    // 0x137cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x137CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137CB8u;
            // 0x137cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137C98u: goto label_137c98;
            case 0x137CB8u: goto label_137cb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137CC0u;
}
