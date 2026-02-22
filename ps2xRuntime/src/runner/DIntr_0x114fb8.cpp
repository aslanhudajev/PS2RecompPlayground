#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DIntr
// Address: 0x114fb8 - 0x115000
void DIntr_0x114fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114fb8u;

    // 0x114fb8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x114fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x114fbc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x114fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x114fc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x114fc0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x114fc4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x114FC4u;
    {
        const bool branch_taken_0x114fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114FC4u;
            // 0x114fc8: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fc4) {
            ctx->pc = 0x114FF4u;
            goto label_114ff4;
        }
    }
    ctx->pc = 0x114FCCu;
    // 0x114fcc: 0x0  nop
    ctx->pc = 0x114fccu;
    // NOP
label_114fd0:
    // 0x114fd0: 0x42000039  di
    ctx->pc = 0x114fd0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x114fd4: 0x40f  sync.p
    ctx->pc = 0x114fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x114fd8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x114fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x114fdc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x114fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x114fe0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x114fe0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x114fe4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x114FE4u;
    {
        const bool branch_taken_0x114fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114fe4) {
            ctx->pc = 0x114FD0u;
            goto label_114fd0;
        }
    }
    ctx->pc = 0x114FECu;
    // 0x114fec: 0x3e00008  jr          $ra
    ctx->pc = 0x114FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114FECu;
            // 0x114ff0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114FD0u: goto label_114fd0;
            case 0x114FF4u: goto label_114ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114FF4u;
label_114ff4:
    // 0x114ff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x114ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x114FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114FF8u;
            // 0x114ffc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114FD0u: goto label_114fd0;
            case 0x114FF4u: goto label_114ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115000u;
}
