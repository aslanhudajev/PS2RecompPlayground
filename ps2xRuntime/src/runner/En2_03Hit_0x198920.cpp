#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_03Hit
// Address: 0x198920 - 0x1989d4
void En2_03Hit_0x198920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_03Hit_0x198920");
#endif

    ctx->pc = 0x198920u;

    // 0x198920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x198928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19892c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19892cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198930: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x198930u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x198934: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x198938: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x198938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19893c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19893Cu;
    {
        const bool branch_taken_0x19893c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x198940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19893Cu;
            // 0x198940: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19893c) {
            ctx->pc = 0x1989C0u;
            goto label_1989c0;
        }
    }
    ctx->pc = 0x198944u;
    // 0x198944: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x198948: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19894c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x19894cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x198950: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x198954: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x198954u;
    {
        const bool branch_taken_0x198954 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x198954) {
            ctx->pc = 0x1989C0u;
            goto label_1989c0;
        }
    }
    ctx->pc = 0x19895Cu;
    // 0x19895c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x19895cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x198960: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x198964: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x198964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x198968: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x198968u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19896c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19896cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x198970: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x198974: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19897c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x19897cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x198980: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x198980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x198984: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x198984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x198988: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19898c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x19898Cu;
    SET_GPR_U32(ctx, 31, 0x198994u);
    ctx->pc = 0x198990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19898Cu;
            // 0x198990: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198994u; }
        if (ctx->pc != 0x198994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198994u; }
        if (ctx->pc != 0x198994u) { return; }
    }
    ctx->pc = 0x198994u;
    // 0x198994: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x198994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x198998: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x198998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x19899c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19899Cu;
    {
        const bool branch_taken_0x19899c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19899c) {
            ctx->pc = 0x1989C0u;
            goto label_1989c0;
        }
    }
    ctx->pc = 0x1989A4u;
    // 0x1989a4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1989a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1989a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1989a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1989ac: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1989acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1989b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1989b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989b4: 0xc065944  jal         func_196510
    ctx->pc = 0x1989B4u;
    SET_GPR_U32(ctx, 31, 0x1989BCu);
    ctx->pc = 0x1989B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1989B4u;
            // 0x1989b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989BCu; }
        if (ctx->pc != 0x1989BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1989BCu; }
        if (ctx->pc != 0x1989BCu) { return; }
    }
    ctx->pc = 0x1989BCu;
    // 0x1989bc: 0x0  nop
    ctx->pc = 0x1989bcu;
    // NOP
label_1989c0:
    // 0x1989c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1989c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1989c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1989c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1989c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1989c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1989cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1989CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1989D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1989CCu;
            // 0x1989d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1989C0u: goto label_1989c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1989D4u;
}
