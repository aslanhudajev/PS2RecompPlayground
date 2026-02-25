#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _buf_set_end
// Address: 0x10ea50 - 0x10eab0
void _buf_set_end_0x10ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_buf_set_end_0x10ea50");
#endif

    ctx->pc = 0x10ea50u;

    // 0x10ea50: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10ea50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea54: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x10ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x10ea58: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA58u;
    {
        const bool branch_taken_0x10ea58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ea58) {
            ctx->pc = 0x10EA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA58u;
            // 0x10ea5c: 0x8ce60008  lw          $a2, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EA68u;
            goto label_10ea68;
        }
    }
    ctx->pc = 0x10EA60u;
    // 0x10ea60: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA60u;
            // 0x10ea64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EA68u: goto label_10ea68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EA68u;
label_10ea68:
    // 0x10ea68: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x10ea6c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x10ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x10ea70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10ea70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea74: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10ea78: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x10ea78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x10ea7c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x10ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x10ea80: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x10ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x10ea84: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x10ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x10ea88: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x10ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10ea8c: 0x31fc0  sll         $v1, $v1, 31
    ctx->pc = 0x10ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
    // 0x10ea90: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x10ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x10ea94: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x10ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10ea98: 0x427c0  sll         $a0, $a0, 31
    ctx->pc = 0x10ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 31));
    // 0x10ea9c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x10ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x10eaa0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x10eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x10eaa4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10eaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAA8u;
            // 0x10eaac: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EA68u: goto label_10ea68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EAB0u;
}
