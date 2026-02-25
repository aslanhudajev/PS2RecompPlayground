#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _buf_set_ret
// Address: 0x10eab0 - 0x10eb10
void _buf_set_ret_0x10eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_buf_set_ret_0x10eab0");
#endif

    ctx->pc = 0x10eab0u;

    // 0x10eab0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10eab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eab4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x10eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x10eab8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EAB8u;
    {
        const bool branch_taken_0x10eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10eab8) {
            ctx->pc = 0x10EABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAB8u;
            // 0x10eabc: 0x8ce60008  lw          $a2, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EAC8u;
            goto label_10eac8;
        }
    }
    ctx->pc = 0x10EAC0u;
    // 0x10eac0: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EAC0u;
            // 0x10eac4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EAC8u: goto label_10eac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EAC8u;
label_10eac8:
    // 0x10eac8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x10eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x10eacc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x10eaccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x10ead0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10ead0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ead4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10ead8: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x10ead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x10eadc: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x10eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x10eae0: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x10eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x10eae4: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x10eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x10eae8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x10eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10eaec: 0x31fc0  sll         $v1, $v1, 31
    ctx->pc = 0x10eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
    // 0x10eaf0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x10eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x10eaf4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x10eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10eaf8: 0x427c0  sll         $a0, $a0, 31
    ctx->pc = 0x10eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 31));
    // 0x10eafc: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x10eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x10eb00: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x10eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x10eb04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10eb08: 0x3e00008  jr          $ra
    ctx->pc = 0x10EB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB08u;
            // 0x10eb0c: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EAC8u: goto label_10eac8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EB10u;
}
