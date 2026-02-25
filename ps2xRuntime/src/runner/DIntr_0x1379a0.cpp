#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DIntr
// Address: 0x1379a0 - 0x1379e8
void DIntr_0x1379a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DIntr_0x1379a0");
#endif

    ctx->pc = 0x1379a0u;

    // 0x1379a0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1379a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x1379a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1379a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1379a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1379a8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1379ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1379ACu;
    {
        const bool branch_taken_0x1379ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1379B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1379ACu;
            // 0x1379b0: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379ac) {
            ctx->pc = 0x1379DCu;
            goto label_1379dc;
        }
    }
    ctx->pc = 0x1379B4u;
    // 0x1379b4: 0x0  nop
    ctx->pc = 0x1379b4u;
    // NOP
label_1379b8:
    // 0x1379b8: 0x42000039  di
    ctx->pc = 0x1379b8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1379bc: 0x40f  sync.p
    ctx->pc = 0x1379bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1379c0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1379c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1379c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1379c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1379c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1379c8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1379cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1379CCu;
    {
        const bool branch_taken_0x1379cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1379cc) {
            ctx->pc = 0x1379B8u;
            goto label_1379b8;
        }
    }
    ctx->pc = 0x1379D4u;
    // 0x1379d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1379D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1379D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1379D4u;
            // 0x1379d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1379B8u: goto label_1379b8;
            case 0x1379DCu: goto label_1379dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1379DCu;
label_1379dc:
    // 0x1379dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1379dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1379E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1379E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1379E0u;
            // 0x1379e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1379B8u: goto label_1379b8;
            case 0x1379DCu: goto label_1379dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1379E8u;
}
