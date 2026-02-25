#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufGetTag
// Address: 0x18ab10 - 0x18ab98
void voBufGetTag_0x18ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufGetTag_0x18ab10");
#endif

    ctx->pc = 0x18ab10u;

    // 0x18ab10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ab14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ab18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ab1c: 0xc062ae8  jal         func_18ABA0
    ctx->pc = 0x18AB1Cu;
    SET_GPR_U32(ctx, 31, 0x18AB24u);
    ctx->pc = 0x18AB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB1Cu;
            // 0x18ab20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ABA0u;
    if (runtime->hasFunction(0x18ABA0u)) {
        auto targetFn = runtime->lookupFunction(0x18ABA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB24u; }
        if (ctx->pc != 0x18AB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsEmpty_0x18aba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB24u; }
        if (ctx->pc != 0x18AB24u) { return; }
    }
    ctx->pc = 0x18AB24u;
    // 0x18ab24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AB24u;
    {
        const bool branch_taken_0x18ab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab24) {
            ctx->pc = 0x18AB38u;
            goto label_18ab38;
        }
    }
    ctx->pc = 0x18AB2Cu;
    // 0x18ab2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18AB2Cu;
    {
        const bool branch_taken_0x18ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB2Cu;
            // 0x18ab30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab2c) {
            ctx->pc = 0x18AB88u;
            goto label_18ab88;
        }
    }
    ctx->pc = 0x18AB34u;
    // 0x18ab34: 0x0  nop
    ctx->pc = 0x18ab34u;
    // NOP
label_18ab38:
    // 0x18ab38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x18ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18ab3c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18ab40: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x18ab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18ab44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18ab48: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18ab4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18ab50: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x18ab50u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18ab54: 0x0  nop
    ctx->pc = 0x18ab54u;
    // NOP
    // 0x18ab58: 0x0  nop
    ctx->pc = 0x18ab58u;
    // NOP
    // 0x18ab5c: 0x2010  mfhi        $a0
    ctx->pc = 0x18ab5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x18ab60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18ab64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ab68: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18ab6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ab70: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18ab74: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ab78: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ab7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ab80: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18ab84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ab88:
    // 0x18ab88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ab88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ab8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ab8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x18AB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB90u;
            // 0x18ab94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AB38u: goto label_18ab38;
            case 0x18AB88u: goto label_18ab88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AB98u;
}
