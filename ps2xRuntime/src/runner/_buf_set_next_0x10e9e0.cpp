#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _buf_set_next
// Address: 0x10e9e0 - 0x10ea4c
void _buf_set_next_0x10e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_buf_set_next_0x10e9e0");
#endif

    ctx->pc = 0x10e9e0u;

    // 0x10e9e0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10e9e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9e4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x10e9e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E9E8u;
    {
        const bool branch_taken_0x10e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9E8u;
            // 0x10e9ec: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9e8) {
            ctx->pc = 0x10E9F8u;
            goto label_10e9f8;
        }
    }
    ctx->pc = 0x10E9F0u;
    // 0x10e9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E9F0u;
            // 0x10e9f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E9F8u: goto label_10e9f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E9F8u;
label_10e9f8:
    // 0x10e9f8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x10e9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10e9fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10e9fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x10ea00: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10ea04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x10ea04u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x10ea08: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10ea0c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x10ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x10ea10: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x10ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x10ea14: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x10ea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x10ea18: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x10ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x10ea1c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x10ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10ea20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10ea20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea24: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x10ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x10ea28: 0x427c0  sll         $a0, $a0, 31
    ctx->pc = 0x10ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 31));
    // 0x10ea2c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x10ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x10ea30: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x10ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10ea34: 0x31fc0  sll         $v1, $v1, 31
    ctx->pc = 0x10ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
    // 0x10ea38: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x10ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x10ea3c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x10ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x10ea40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10ea44: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EA44u;
            // 0x10ea48: 0xace4000c  sw          $a0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E9F8u: goto label_10e9f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EA4Cu;
}
