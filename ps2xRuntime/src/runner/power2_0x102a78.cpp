#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: power2
// Address: 0x102a78 - 0x102abc
void power2_0x102a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("power2_0x102a78");
#endif

    ctx->pc = 0x102a78u;

    // 0x102a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102a80: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x102A80u;
    {
        const bool branch_taken_0x102a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x102A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A80u;
            // 0x102a84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a80) {
            ctx->pc = 0x102AACu;
            goto label_102aac;
        }
    }
    ctx->pc = 0x102A88u;
    // 0x102a88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x102a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102a8c: 0x0  nop
    ctx->pc = 0x102a8cu;
    // NOP
label_102a90:
    // 0x102a90: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x102a90u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x102a94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x102a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102a98: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x102a98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x102a9c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x102a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x102aa0: 0x0  nop
    ctx->pc = 0x102aa0u;
    // NOP
    // 0x102aa4: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102AA4u;
    {
        const bool branch_taken_0x102aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x102aa4) {
            ctx->pc = 0x102A90u;
            goto label_102a90;
        }
    }
    ctx->pc = 0x102AACu;
label_102aac:
    // 0x102aac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x102aacu;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x102ab0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x102ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x102AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102AB4u;
            // 0x102ab8: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102A90u: goto label_102a90;
            case 0x102AACu: goto label_102aac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102ABCu;
}
