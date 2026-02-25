#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_04Hit
// Address: 0x1cdcf0 - 0x1cdda4
void Enex1_04Hit_0x1cdcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_04Hit_0x1cdcf0");
#endif

    ctx->pc = 0x1cdcf0u;

    // 0x1cdcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdcf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cdcf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cdcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cdcfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cdd00: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1cdd00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cdd04: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1cdd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1cdd08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdd0c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CDD0Cu;
    {
        const bool branch_taken_0x1cdd0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1CDD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD0Cu;
            // 0x1cdd10: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd0c) {
            ctx->pc = 0x1CDD90u;
            goto label_1cdd90;
        }
    }
    ctx->pc = 0x1CDD14u;
    // 0x1cdd14: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1cdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cdd18: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1cdd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cdd1c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1cdd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1cdd20: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1cdd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdd24: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CDD24u;
    {
        const bool branch_taken_0x1cdd24 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1cdd24) {
            ctx->pc = 0x1CDD90u;
            goto label_1cdd90;
        }
    }
    ctx->pc = 0x1CDD2Cu;
    // 0x1cdd2c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cdd30: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1cdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1cdd34: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cdd38: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cdd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cdd3c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cdd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cdd40: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cdd44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cdd48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cdd4c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1cdd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1cdd50: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1cdd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cdd54: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1cdd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdd58: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1cdd58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cdd5c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1CDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD64u);
    ctx->pc = 0x1CDD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD5Cu;
            // 0x1cdd60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD64u; }
        if (ctx->pc != 0x1CDD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD64u; }
        if (ctx->pc != 0x1CDD64u) { return; }
    }
    ctx->pc = 0x1CDD64u;
    // 0x1cdd64: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1cdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cdd68: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1cdd68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1cdd6c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDD6Cu;
    {
        const bool branch_taken_0x1cdd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd6c) {
            ctx->pc = 0x1CDD90u;
            goto label_1cdd90;
        }
    }
    ctx->pc = 0x1CDD74u;
    // 0x1cdd74: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cdd78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdd78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdd7c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1cdd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cdd80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cdd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd84: 0xc065944  jal         func_196510
    ctx->pc = 0x1CDD84u;
    SET_GPR_U32(ctx, 31, 0x1CDD8Cu);
    ctx->pc = 0x1CDD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD84u;
            // 0x1cdd88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD8Cu; }
        if (ctx->pc != 0x1CDD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD8Cu; }
        if (ctx->pc != 0x1CDD8Cu) { return; }
    }
    ctx->pc = 0x1CDD8Cu;
    // 0x1cdd8c: 0x0  nop
    ctx->pc = 0x1cdd8cu;
    // NOP
label_1cdd90:
    // 0x1cdd90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdd94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cdd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD9Cu;
            // 0x1cdda0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDD90u: goto label_1cdd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CDDA4u;
}
