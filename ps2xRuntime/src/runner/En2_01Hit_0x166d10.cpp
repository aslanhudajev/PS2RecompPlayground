#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_01Hit
// Address: 0x166d10 - 0x166dc4
void En2_01Hit_0x166d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_01Hit_0x166d10");
#endif

    ctx->pc = 0x166d10u;

    // 0x166d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166d20: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x166d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x166d24: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x166d28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x166d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x166d2c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x166D2Cu;
    {
        const bool branch_taken_0x166d2c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x166D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166D2Cu;
            // 0x166d30: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d2c) {
            ctx->pc = 0x166DB0u;
            goto label_166db0;
        }
    }
    ctx->pc = 0x166D34u;
    // 0x166d34: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x166d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x166d38: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x166d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x166d3c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x166d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x166d40: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x166d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x166d44: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x166D44u;
    {
        const bool branch_taken_0x166d44 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x166d44) {
            ctx->pc = 0x166DB0u;
            goto label_166db0;
        }
    }
    ctx->pc = 0x166D4Cu;
    // 0x166d4c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x166d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x166d50: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x166d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x166d54: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x166d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x166d58: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x166d58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x166d5c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x166d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x166d60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x166d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x166d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x166d6c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x166d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x166d70: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x166d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x166d74: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x166d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x166d78: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x166d78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x166d7c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x166D7Cu;
    SET_GPR_U32(ctx, 31, 0x166D84u);
    ctx->pc = 0x166D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166D7Cu;
            // 0x166d80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D84u; }
        if (ctx->pc != 0x166D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D84u; }
        if (ctx->pc != 0x166D84u) { return; }
    }
    ctx->pc = 0x166D84u;
    // 0x166d84: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x166d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x166d88: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x166d88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x166d8c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x166D8Cu;
    {
        const bool branch_taken_0x166d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166d8c) {
            ctx->pc = 0x166DB0u;
            goto label_166db0;
        }
    }
    ctx->pc = 0x166D94u;
    // 0x166d94: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x166d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x166d98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x166d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166d9c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x166d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x166da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166da4: 0xc065944  jal         func_196510
    ctx->pc = 0x166DA4u;
    SET_GPR_U32(ctx, 31, 0x166DACu);
    ctx->pc = 0x166DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166DA4u;
            // 0x166da8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DACu; }
        if (ctx->pc != 0x166DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DACu; }
        if (ctx->pc != 0x166DACu) { return; }
    }
    ctx->pc = 0x166DACu;
    // 0x166dac: 0x0  nop
    ctx->pc = 0x166dacu;
    // NOP
label_166db0:
    // 0x166db0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166db4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x166DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166DBCu;
            // 0x166dc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166DB0u: goto label_166db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166DC4u;
}
