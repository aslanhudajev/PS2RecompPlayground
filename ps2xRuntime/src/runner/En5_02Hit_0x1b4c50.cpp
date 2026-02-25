#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_02Hit
// Address: 0x1b4c50 - 0x1b4d04
void En5_02Hit_0x1b4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_02Hit_0x1b4c50");
#endif

    ctx->pc = 0x1b4c50u;

    // 0x1b4c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4c60: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1b4c60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4c64: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b4c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b4c68: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1b4c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b4c6c: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B4C6Cu;
    {
        const bool branch_taken_0x1b4c6c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B4C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C6Cu;
            // 0x1b4c70: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c6c) {
            ctx->pc = 0x1B4CF0u;
            goto label_1b4cf0;
        }
    }
    ctx->pc = 0x1B4C74u;
    // 0x1b4c74: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b4c78: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b4c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b4c7c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b4c80: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b4c84: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B4C84u;
    {
        const bool branch_taken_0x1b4c84 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b4c84) {
            ctx->pc = 0x1B4CF0u;
            goto label_1b4cf0;
        }
    }
    ctx->pc = 0x1B4C8Cu;
    // 0x1b4c8c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b4c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b4c90: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b4c94: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1b4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b4c98: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1b4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b4c9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b4ca0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b4ca4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1b4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1b4ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4cac: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b4cacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b4cb0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b4cb4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b4cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b4cb8: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b4cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b4cbc: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B4CBCu;
    SET_GPR_U32(ctx, 31, 0x1B4CC4u);
    ctx->pc = 0x1B4CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CBCu;
            // 0x1b4cc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CC4u; }
        if (ctx->pc != 0x1B4CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CC4u; }
        if (ctx->pc != 0x1B4CC4u) { return; }
    }
    ctx->pc = 0x1B4CC4u;
    // 0x1b4cc4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1b4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b4cc8: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1b4cc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1b4ccc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4CCCu;
    {
        const bool branch_taken_0x1b4ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ccc) {
            ctx->pc = 0x1B4CF0u;
            goto label_1b4cf0;
        }
    }
    ctx->pc = 0x1B4CD4u;
    // 0x1b4cd4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b4cd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4cdc: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1b4cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b4ce0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ce4: 0xc065944  jal         func_196510
    ctx->pc = 0x1B4CE4u;
    SET_GPR_U32(ctx, 31, 0x1B4CECu);
    ctx->pc = 0x1B4CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CE4u;
            // 0x1b4ce8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CECu; }
        if (ctx->pc != 0x1B4CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4CECu; }
        if (ctx->pc != 0x1B4CECu) { return; }
    }
    ctx->pc = 0x1B4CECu;
    // 0x1b4cec: 0x0  nop
    ctx->pc = 0x1b4cecu;
    // NOP
label_1b4cf0:
    // 0x1b4cf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4CFCu;
            // 0x1b4d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4CF0u: goto label_1b4cf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4D04u;
}
