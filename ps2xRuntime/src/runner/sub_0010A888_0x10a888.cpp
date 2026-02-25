#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_0010A888
// Address: 0x10a888 - 0x10a8e0
void sub_0010A888_0x10a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_0010A888_0x10a888");
#endif

    ctx->pc = 0x10a888u;

    // 0x10a888: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10a88c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x10a88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x10a890: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A890u;
    {
        const bool branch_taken_0x10a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A890u;
            // 0x10a894: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a890) {
            ctx->pc = 0x10A8D8u;
            goto label_10a8d8;
        }
    }
    ctx->pc = 0x10A898u;
    // 0x10a898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10a898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10a89c: 0x2442cf80  addiu       $v0, $v0, -0x3080
    ctx->pc = 0x10a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x10a8a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a8a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a8a8: 0x800008  jr          $a0
    ctx->pc = 0x10A8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A8B0u: goto label_10a8b0;
            case 0x10A8B8u: goto label_10a8b8;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8C8u: goto label_10a8c8;
            case 0x10A8D0u: goto label_10a8d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8B0u;
label_10a8b0:
    // 0x10a8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8B0u;
            // 0x10a8b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A8B0u: goto label_10a8b0;
            case 0x10A8B8u: goto label_10a8b8;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8C8u: goto label_10a8c8;
            case 0x10A8D0u: goto label_10a8d0;
            case 0x10A8D8u: goto label_10a8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8B8u;
label_10a8b8:
    // 0x10a8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8B8u;
            // 0x10a8bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A8B0u: goto label_10a8b0;
            case 0x10A8B8u: goto label_10a8b8;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8C8u: goto label_10a8c8;
            case 0x10A8D0u: goto label_10a8d0;
            case 0x10A8D8u: goto label_10a8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8C0u;
label_10a8c0:
    // 0x10a8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8C0u;
            // 0x10a8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A8B0u: goto label_10a8b0;
            case 0x10A8B8u: goto label_10a8b8;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8C8u: goto label_10a8c8;
            case 0x10A8D0u: goto label_10a8d0;
            case 0x10A8D8u: goto label_10a8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8C8u;
label_10a8c8:
    // 0x10a8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8C8u;
            // 0x10a8cc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A8B0u: goto label_10a8b0;
            case 0x10A8B8u: goto label_10a8b8;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8C8u: goto label_10a8c8;
            case 0x10A8D0u: goto label_10a8d0;
            case 0x10A8D8u: goto label_10a8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8D0u;
label_10a8d0:
    // 0x10a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8D0u;
            // 0x10a8d4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A8B0u: goto label_10a8b0;
            case 0x10A8B8u: goto label_10a8b8;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8C8u: goto label_10a8c8;
            case 0x10A8D0u: goto label_10a8d0;
            case 0x10A8D8u: goto label_10a8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8D8u;
label_10a8d8:
    // 0x10a8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8D8u;
            // 0x10a8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A8B0u: goto label_10a8b0;
            case 0x10A8B8u: goto label_10a8b8;
            case 0x10A8C0u: goto label_10a8c0;
            case 0x10A8C8u: goto label_10a8c8;
            case 0x10A8D0u: goto label_10a8d0;
            case 0x10A8D8u: goto label_10a8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8E0u;
}
