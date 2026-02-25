#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_02Hit
// Address: 0x19bed0 - 0x19bf84
void En3_02Hit_0x19bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_02Hit_0x19bed0");
#endif

    ctx->pc = 0x19bed0u;

    // 0x19bed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19bed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19bedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19bee0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x19bee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19bee4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x19bee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19bee8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x19bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19beec: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19BEECu;
    {
        const bool branch_taken_0x19beec = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19BEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEECu;
            // 0x19bef0: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19beec) {
            ctx->pc = 0x19BF70u;
            goto label_19bf70;
        }
    }
    ctx->pc = 0x19BEF4u;
    // 0x19bef4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x19bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19bef8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x19bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19befc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x19befcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x19bf00: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x19bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19bf04: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19BF04u;
    {
        const bool branch_taken_0x19bf04 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19bf04) {
            ctx->pc = 0x19BF70u;
            goto label_19bf70;
        }
    }
    ctx->pc = 0x19BF0Cu;
    // 0x19bf0c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x19bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19bf10: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x19bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x19bf14: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x19bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x19bf18: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19bf1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19bf20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19bf24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19bf28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bf2c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x19bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x19bf30: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x19bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19bf34: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x19bf34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19bf38: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x19bf38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19bf3c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x19BF3Cu;
    SET_GPR_U32(ctx, 31, 0x19BF44u);
    ctx->pc = 0x19BF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF3Cu;
            // 0x19bf40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF44u; }
        if (ctx->pc != 0x19BF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF44u; }
        if (ctx->pc != 0x19BF44u) { return; }
    }
    ctx->pc = 0x19BF44u;
    // 0x19bf44: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x19bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19bf48: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x19bf48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x19bf4c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19BF4Cu;
    {
        const bool branch_taken_0x19bf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bf4c) {
            ctx->pc = 0x19BF70u;
            goto label_19bf70;
        }
    }
    ctx->pc = 0x19BF54u;
    // 0x19bf54: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x19bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x19bf58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19bf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19bf5c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19bf60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19bf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf64: 0xc065944  jal         func_196510
    ctx->pc = 0x19BF64u;
    SET_GPR_U32(ctx, 31, 0x19BF6Cu);
    ctx->pc = 0x19BF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF64u;
            // 0x19bf68: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF6Cu; }
        if (ctx->pc != 0x19BF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF6Cu; }
        if (ctx->pc != 0x19BF6Cu) { return; }
    }
    ctx->pc = 0x19BF6Cu;
    // 0x19bf6c: 0x0  nop
    ctx->pc = 0x19bf6cu;
    // NOP
label_19bf70:
    // 0x19bf70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bf74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bf74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bf78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19bf78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF7Cu;
            // 0x19bf80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BF70u: goto label_19bf70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BF84u;
}
