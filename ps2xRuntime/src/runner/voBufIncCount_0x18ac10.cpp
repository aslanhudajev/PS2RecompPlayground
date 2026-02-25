#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufIncCount
// Address: 0x18ac10 - 0x18ac9c
void voBufIncCount_0x18ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufIncCount_0x18ac10");
#endif

    ctx->pc = 0x18ac10u;

    // 0x18ac10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ac14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ac18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ac1c: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x18AC1Cu;
    SET_GPR_U32(ctx, 31, 0x18AC24u);
    ctx->pc = 0x18AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC1Cu;
            // 0x18ac20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC24u; }
        if (ctx->pc != 0x18AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC24u; }
        if (ctx->pc != 0x18AC24u) { return; }
    }
    ctx->pc = 0x18AC24u;
    // 0x18ac24: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x18ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18ac28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ac2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18ac30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18ac34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac38: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18ac3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac40: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18ac44: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac48: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ac4c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac50: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18ac54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ac58: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x18ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x18ac5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18ac60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ac64: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18ac68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18ac6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18ac70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ac74: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18ac74u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18ac78: 0x0  nop
    ctx->pc = 0x18ac78u;
    // NOP
    // 0x18ac7c: 0x0  nop
    ctx->pc = 0x18ac7cu;
    // NOP
    // 0x18ac80: 0x1010  mfhi        $v0
    ctx->pc = 0x18ac80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18ac84: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x18AC84u;
    SET_GPR_U32(ctx, 31, 0x18AC8Cu);
    ctx->pc = 0x18AC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC84u;
            // 0x18ac88: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC8Cu; }
        if (ctx->pc != 0x18AC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AC8Cu; }
        if (ctx->pc != 0x18AC8Cu) { return; }
    }
    ctx->pc = 0x18AC8Cu;
    // 0x18ac8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ac90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ac90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ac94: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC94u;
            // 0x18ac98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AC9Cu;
}
