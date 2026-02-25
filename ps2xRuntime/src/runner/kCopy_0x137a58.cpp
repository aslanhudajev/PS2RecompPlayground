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
// Address: 0x137a58 - 0x137a90
void kCopy_0x137a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kCopy_0x137a58");
#endif

    ctx->pc = 0x137a58u;

    // 0x137a58: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x137a58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x137a5c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x137A5Cu;
    {
        const bool branch_taken_0x137a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A5Cu;
            // 0x137a60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a5c) {
            ctx->pc = 0x137A88u;
            goto label_137a88;
        }
    }
    ctx->pc = 0x137A64u;
    // 0x137a64: 0x0  nop
    ctx->pc = 0x137a64u;
    // NOP
label_137a68:
    // 0x137a68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137a6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x137a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x137a70: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x137a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x137a74: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x137a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x137a78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x137a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x137a7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x137a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x137a80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137A80u;
    {
        const bool branch_taken_0x137a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137a80) {
            ctx->pc = 0x137A68u;
            goto label_137a68;
        }
    }
    ctx->pc = 0x137A88u;
label_137a88:
    // 0x137a88: 0x3e00008  jr          $ra
    ctx->pc = 0x137A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137A88u;
            // 0x137a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137A68u: goto label_137a68;
            case 0x137A88u: goto label_137a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137A90u;
}
