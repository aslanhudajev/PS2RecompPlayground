#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: BitScramble
// Address: 0x142f80 - 0x142fdc
void BitScramble_0x142f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BitScramble_0x142f80");
#endif

    ctx->pc = 0x142f80u;

    // 0x142f80: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x142f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x142f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x142f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f8c: 0x24c69b50  addiu       $a2, $a2, -0x64B0
    ctx->pc = 0x142f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941520));
    // 0x142f90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x142f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142f94: 0x0  nop
    ctx->pc = 0x142f94u;
    // NOP
label_142f98:
    // 0x142f98: 0xe51804  sllv        $v1, $a1, $a3
    ctx->pc = 0x142f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x142f9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x142f9cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x142fa0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x142FA0u;
    {
        const bool branch_taken_0x142fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142fa0) {
            ctx->pc = 0x142FB8u;
            goto label_142fb8;
        }
    }
    ctx->pc = 0x142FA8u;
    // 0x142fa8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142fac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x142FACu;
    {
        const bool branch_taken_0x142fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142FACu;
            // 0x142fb0: 0x651804  sllv        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fac) {
            ctx->pc = 0x142FC0u;
            goto label_142fc0;
        }
    }
    ctx->pc = 0x142FB4u;
    // 0x142fb4: 0x0  nop
    ctx->pc = 0x142fb4u;
    // NOP
label_142fb8:
    // 0x142fb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x142fb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142fbc: 0x0  nop
    ctx->pc = 0x142fbcu;
    // NOP
label_142fc0:
    // 0x142fc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142fc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x142fc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x142fc8: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x142fc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x142fcc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x142FCCu;
    {
        const bool branch_taken_0x142fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142FCCu;
            // 0x142fd0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fcc) {
            ctx->pc = 0x142F98u;
            goto label_142f98;
        }
    }
    ctx->pc = 0x142FD4u;
    // 0x142fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x142FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142F98u: goto label_142f98;
            case 0x142FB8u: goto label_142fb8;
            case 0x142FC0u: goto label_142fc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142FDCu;
}
