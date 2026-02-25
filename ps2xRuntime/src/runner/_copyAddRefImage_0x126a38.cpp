#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _copyAddRefImage
// Address: 0x126a38 - 0x126a94
void _copyAddRefImage_0x126a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_copyAddRefImage_0x126a38");
#endif

    ctx->pc = 0x126a38u;

    // 0x126a38: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x126a38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x126a3c: 0x3c0a0012  lui         $t2, 0x12
    ctx->pc = 0x126a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)18 << 16));
    // 0x126a40: 0x254a6ae0  addiu       $t2, $t2, 0x6AE0
    ctx->pc = 0x126a40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27360));
    // 0x126a44: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x126a44u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_126a48:
    // 0x126a48: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x126a48u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x126a4c: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x126a4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x126a50: 0x78cd0000  lq          $t5, 0x0($a2)
    ctx->pc = 0x126a50u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126a54: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x126a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x126a58: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x126a58u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x126a5c: 0x710d4108  paddh       $t0, $t0, $t5
    ctx->pc = 0x126a5cu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x126a60: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x126a60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x126a64: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x126a64u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x126a68: 0x71224908  paddh       $t1, $t1, $v0
    ctx->pc = 0x126a68u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x126a6c: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x126a6cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x126a70: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x126a70u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x126a74: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x126a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x126a78: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x126a78u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x126a7c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x126a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x126a80: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x126a80u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x126a84: 0x1580fff0  bnez        $t4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x126A84u;
    {
        const bool branch_taken_0x126a84 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126A84u;
            // 0x126a88: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a84) {
            ctx->pc = 0x126A48u;
            goto label_126a48;
        }
    }
    ctx->pc = 0x126A8Cu;
    // 0x126a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x126A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126A48u: goto label_126a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126A94u;
}
