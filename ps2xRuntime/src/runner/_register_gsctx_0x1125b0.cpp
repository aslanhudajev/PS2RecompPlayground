#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _register_gsctx
// Address: 0x1125b0 - 0x112608
void _register_gsctx_0x1125b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_register_gsctx_0x1125b0");
#endif

    ctx->pc = 0x1125b0u;

    // 0x1125b0: 0x3c070021  lui         $a3, 0x21
    ctx->pc = 0x1125b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33 << 16));
    // 0x1125b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1125b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125b8: 0x8ce2fb48  lw          $v0, -0x4B8($a3)
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294966088)));
    // 0x1125bc: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1125BCu;
    {
        const bool branch_taken_0x1125bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1125C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1125BCu;
            // 0x1125c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125bc) {
            ctx->pc = 0x112600u;
            goto label_112600;
        }
    }
    ctx->pc = 0x1125C4u;
    // 0x1125c4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1125c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1125c8: 0x8cc2fb4c  lw          $v0, -0x4B4($a2)
    ctx->pc = 0x1125c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966092)));
    // 0x1125cc: 0x0  nop
    ctx->pc = 0x1125ccu;
    // NOP
label_1125d0:
    // 0x1125d0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1125d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1125d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1125d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1125d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1125d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1125dc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1125DCu;
    {
        const bool branch_taken_0x1125dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1125E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1125DCu;
            // 0x1125e0: 0x8ce2fb48  lw          $v0, -0x4B8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294966088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125dc) {
            ctx->pc = 0x1125F0u;
            goto label_1125f0;
        }
    }
    ctx->pc = 0x1125E4u;
    // 0x1125e4: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1125e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1125e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1125E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1125ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1125E8u;
            // 0x1125ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1125D0u: goto label_1125d0;
            case 0x1125F0u: goto label_1125f0;
            case 0x112600u: goto label_112600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1125F0u;
label_1125f0:
    // 0x1125f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1125f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1125f4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1125f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1125f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1125F8u;
    {
        const bool branch_taken_0x1125f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1125FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1125F8u;
            // 0x1125fc: 0x8cc2fb4c  lw          $v0, -0x4B4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125f8) {
            ctx->pc = 0x1125D0u;
            goto label_1125d0;
        }
    }
    ctx->pc = 0x112600u;
label_112600:
    // 0x112600: 0x3e00008  jr          $ra
    ctx->pc = 0x112600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112600u;
            // 0x112604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1125D0u: goto label_1125d0;
            case 0x1125F0u: goto label_1125f0;
            case 0x112600u: goto label_112600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112608u;
}
