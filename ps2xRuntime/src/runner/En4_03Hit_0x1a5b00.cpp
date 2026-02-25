#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_03Hit
// Address: 0x1a5b00 - 0x1a5bb4
void En4_03Hit_0x1a5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_03Hit_0x1a5b00");
#endif

    ctx->pc = 0x1a5b00u;

    // 0x1a5b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5b10: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1a5b10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a5b14: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a5b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a5b18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a5b1c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A5B1Cu;
    {
        const bool branch_taken_0x1a5b1c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A5B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B1Cu;
            // 0x1a5b20: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b1c) {
            ctx->pc = 0x1A5BA0u;
            goto label_1a5ba0;
        }
    }
    ctx->pc = 0x1A5B24u;
    // 0x1a5b24: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a5b28: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a5b2c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a5b30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a5b34: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A5B34u;
    {
        const bool branch_taken_0x1a5b34 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a5b34) {
            ctx->pc = 0x1A5BA0u;
            goto label_1a5ba0;
        }
    }
    ctx->pc = 0x1A5B3Cu;
    // 0x1a5b3c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1a5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a5b40: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1a5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1a5b44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a5b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5b48: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1a5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5b4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5b50: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a5b54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a5b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5b5c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1a5b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1a5b60: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5b64: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a5b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5b68: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1a5b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a5b6c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A5B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5B74u);
    ctx->pc = 0x1A5B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B6Cu;
            // 0x1a5b70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B74u; }
        if (ctx->pc != 0x1A5B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B74u; }
        if (ctx->pc != 0x1A5B74u) { return; }
    }
    ctx->pc = 0x1A5B74u;
    // 0x1a5b74: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a5b78: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1a5b7c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5B7Cu;
    {
        const bool branch_taken_0x1a5b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b7c) {
            ctx->pc = 0x1A5BA0u;
            goto label_1a5ba0;
        }
    }
    ctx->pc = 0x1A5B84u;
    // 0x1a5b84: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1a5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a5b88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a5b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5b8c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1a5b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5b94: 0xc065944  jal         func_196510
    ctx->pc = 0x1A5B94u;
    SET_GPR_U32(ctx, 31, 0x1A5B9Cu);
    ctx->pc = 0x1A5B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B94u;
            // 0x1a5b98: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B9Cu; }
        if (ctx->pc != 0x1A5B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B9Cu; }
        if (ctx->pc != 0x1A5B9Cu) { return; }
    }
    ctx->pc = 0x1A5B9Cu;
    // 0x1a5b9c: 0x0  nop
    ctx->pc = 0x1a5b9cu;
    // NOP
label_1a5ba0:
    // 0x1a5ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BACu;
            // 0x1a5bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5BA0u: goto label_1a5ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5BB4u;
}
