#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufCreate
// Address: 0x11a8d0 - 0x11a918
void voBufCreate_0x11a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufCreate_0x11a8d0");
#endif

    ctx->pc = 0x11a8d0u;

    // 0x11a8d0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x11a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x11a8d4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x11a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11a8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x11a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x11a8e0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x11a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x11a8e4: 0x18e0000a  blez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x11A8E4u;
    {
        const bool branch_taken_0x11a8e4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x11A8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8E4u;
            // 0x11a8e8: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8e4) {
            ctx->pc = 0x11A910u;
            goto label_11a910;
        }
    }
    ctx->pc = 0x11A8ECu;
    // 0x11a8ec: 0x0  nop
    ctx->pc = 0x11a8ecu;
    // NOP
label_11a8f0:
    // 0x11a8f0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x11a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x11a8f4: 0x3442af40  ori         $v0, $v0, 0xAF40
    ctx->pc = 0x11a8f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)44864u)));
    // 0x11a8f8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x11a8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a8fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11a900: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x11a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11a904: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x11a904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11a908: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11A908u;
    {
        const bool branch_taken_0x11a908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A908u;
            // 0x11a90c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a908) {
            ctx->pc = 0x11A8F0u;
            goto label_11a8f0;
        }
    }
    ctx->pc = 0x11A910u;
label_11a910:
    // 0x11a910: 0x3e00008  jr          $ra
    ctx->pc = 0x11A910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A910u;
            // 0x11a914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A8F0u: goto label_11a8f0;
            case 0x11A910u: goto label_11a910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A918u;
}
