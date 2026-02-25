#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_01Hit
// Address: 0x1b3ef0 - 0x1b3fa4
void En5_01Hit_0x1b3ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_01Hit_0x1b3ef0");
#endif

    ctx->pc = 0x1b3ef0u;

    // 0x1b3ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b3ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b3ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3f00: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b3f04: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b3f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b3f08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1b3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b3f0c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3F0Cu;
    {
        const bool branch_taken_0x1b3f0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B3F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F0Cu;
            // 0x1b3f10: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f0c) {
            ctx->pc = 0x1B3F90u;
            goto label_1b3f90;
        }
    }
    ctx->pc = 0x1B3F14u;
    // 0x1b3f14: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b3f18: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b3f1c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b3f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b3f20: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b3f24: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B3F24u;
    {
        const bool branch_taken_0x1b3f24 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b3f24) {
            ctx->pc = 0x1B3F90u;
            goto label_1b3f90;
        }
    }
    ctx->pc = 0x1B3F2Cu;
    // 0x1b3f2c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b3f30: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b3f34: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1b3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1b3f38: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b3f3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b3f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b3f40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b3f44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b3f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3f4c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b3f50: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3f54: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b3f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b3f58: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b3f5c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1B3F64u);
    ctx->pc = 0x1B3F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F5Cu;
            // 0x1b3f60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F64u; }
        if (ctx->pc != 0x1B3F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F64u; }
        if (ctx->pc != 0x1B3F64u) { return; }
    }
    ctx->pc = 0x1B3F64u;
    // 0x1b3f64: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1b3f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b3f68: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1b3f68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1b3f6c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3F6Cu;
    {
        const bool branch_taken_0x1b3f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f6c) {
            ctx->pc = 0x1B3F90u;
            goto label_1b3f90;
        }
    }
    ctx->pc = 0x1B3F74u;
    // 0x1b3f74: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1b3f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b3f78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b3f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3f7c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1b3f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b3f80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f84: 0xc065944  jal         func_196510
    ctx->pc = 0x1B3F84u;
    SET_GPR_U32(ctx, 31, 0x1B3F8Cu);
    ctx->pc = 0x1B3F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F84u;
            // 0x1b3f88: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F8Cu; }
        if (ctx->pc != 0x1B3F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3F8Cu; }
        if (ctx->pc != 0x1B3F8Cu) { return; }
    }
    ctx->pc = 0x1B3F8Cu;
    // 0x1b3f8c: 0x0  nop
    ctx->pc = 0x1b3f8cu;
    // NOP
label_1b3f90:
    // 0x1b3f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b3f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F9Cu;
            // 0x1b3fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3F90u: goto label_1b3f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3FA4u;
}
