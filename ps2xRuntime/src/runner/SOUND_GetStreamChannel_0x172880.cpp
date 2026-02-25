#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_GetStreamChannel
// Address: 0x172880 - 0x1728c0
void SOUND_GetStreamChannel_0x172880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_GetStreamChannel_0x172880");
#endif

    ctx->pc = 0x172880u;

    // 0x172880: 0x2c810030  sltiu       $at, $a0, 0x30
    ctx->pc = 0x172880u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x172884: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x172884u;
    {
        const bool branch_taken_0x172884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x172888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172884u;
            // 0x172888: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172884) {
            ctx->pc = 0x172898u;
            goto label_172898;
        }
    }
    ctx->pc = 0x17288Cu;
    // 0x17288c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17288Cu;
    {
        const bool branch_taken_0x17288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17288c) {
            ctx->pc = 0x1728B8u;
            goto label_1728b8;
        }
    }
    ctx->pc = 0x172894u;
    // 0x172894: 0x0  nop
    ctx->pc = 0x172894u;
    // NOP
label_172898:
    // 0x172898: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x172898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17289c: 0x2442a020  addiu       $v0, $v0, -0x5FE0
    ctx->pc = 0x17289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942752));
    // 0x1728a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1728a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1728a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1728a8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1728a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1728ac: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1728ACu;
    {
        const bool branch_taken_0x1728ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1728ac) {
            ctx->pc = 0x1728B8u;
            goto label_1728b8;
        }
    }
    ctx->pc = 0x1728B4u;
    // 0x1728b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1728b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1728b8:
    // 0x1728b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1728B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172898u: goto label_172898;
            case 0x1728B8u: goto label_1728b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1728C0u;
}
