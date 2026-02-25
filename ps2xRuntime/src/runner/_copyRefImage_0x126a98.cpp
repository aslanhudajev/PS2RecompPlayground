#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _copyRefImage
// Address: 0x126a98 - 0x126af8
void _copyRefImage_0x126a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_copyRefImage_0x126a98");
#endif

    ctx->pc = 0x126a98u;

    // 0x126a98: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x126a98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x126a9c: 0x3c0a0012  lui         $t2, 0x12
    ctx->pc = 0x126a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)18 << 16));
    // 0x126aa0: 0x254a6ae0  addiu       $t2, $t2, 0x6AE0
    ctx->pc = 0x126aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27360));
    // 0x126aa4: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x126aa4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_126aa8:
    // 0x126aa8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x126aa8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126aac: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x126aacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x126ab0: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x126ab0u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x126ab4: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x126ab4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x126ab8: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x126ab8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x126abc: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x126abcu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x126ac0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x126ac4: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x126ac4u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x126ac8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x126acc: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x126accu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x126ad0: 0x1580fff5  bnez        $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x126AD0u;
    {
        const bool branch_taken_0x126ad0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x126AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126AD0u;
            // 0x126ad4: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ad0) {
            ctx->pc = 0x126AA8u;
            goto label_126aa8;
        }
    }
    ctx->pc = 0x126AD8u;
    // 0x126ad8: 0x0  nop
    ctx->pc = 0x126ad8u;
    // NOP
    // 0x126adc: 0x0  nop
    ctx->pc = 0x126adcu;
    // NOP
    // 0x126ae0: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x126ae0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x126ae4: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x126ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x126ae8: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x126ae8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x126aec: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x126aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x126af0: 0x3e00008  jr          $ra
    ctx->pc = 0x126AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126AA8u: goto label_126aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126AF8u;
}
