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
// Address: 0x122728 - 0x122788
void _copyRefImage_0x122728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_copyRefImage_0x122728");
#endif

    ctx->pc = 0x122728u;

    // 0x122728: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x122728u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12272c: 0x3c0a0012  lui         $t2, 0x12
    ctx->pc = 0x12272cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)18 << 16));
    // 0x122730: 0x254a2770  addiu       $t2, $t2, 0x2770
    ctx->pc = 0x122730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10096));
    // 0x122734: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x122734u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_122738:
    // 0x122738: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x122738u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12273c: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x12273cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x122740: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x122740u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x122744: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x122744u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x122748: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x122748u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x12274c: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x12274cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x122750: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x122750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x122754: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x122754u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x122758: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x122758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12275c: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x12275cu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x122760: 0x1580fff5  bnez        $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x122760u;
    {
        const bool branch_taken_0x122760 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x122764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122760u;
            // 0x122764: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122760) {
            ctx->pc = 0x122738u;
            goto label_122738;
        }
    }
    ctx->pc = 0x122768u;
    // 0x122768: 0x0  nop
    ctx->pc = 0x122768u;
    // NOP
    // 0x12276c: 0x0  nop
    ctx->pc = 0x12276cu;
    // NOP
    // 0x122770: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x122770u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x122774: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x122774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x122778: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x122778u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x12277c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x12277cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x122780: 0x3e00008  jr          $ra
    ctx->pc = 0x122780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122738u: goto label_122738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122788u;
}
