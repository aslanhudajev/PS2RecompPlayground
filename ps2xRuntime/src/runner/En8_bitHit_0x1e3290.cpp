#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En8_bitHit
// Address: 0x1e3290 - 0x1e3344
void En8_bitHit_0x1e3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En8_bitHit_0x1e3290");
#endif

    ctx->pc = 0x1e3290u;

    // 0x1e3290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e3298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e329c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e32a0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1e32a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e32a4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1e32a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e32a8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e32ac: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E32ACu;
    {
        const bool branch_taken_0x1e32ac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1E32B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32ACu;
            // 0x1e32b0: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32ac) {
            ctx->pc = 0x1E3330u;
            goto label_1e3330;
        }
    }
    ctx->pc = 0x1E32B4u;
    // 0x1e32b4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e32b8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e32bc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1e32bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1e32c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e32c4: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E32C4u;
    {
        const bool branch_taken_0x1e32c4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1e32c4) {
            ctx->pc = 0x1E3330u;
            goto label_1e3330;
        }
    }
    ctx->pc = 0x1E32CCu;
    // 0x1e32cc: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1e32ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e32d0: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1e32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1e32d4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1e32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e32d8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1e32d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e32dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e32e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e32e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e32e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e32ec: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1e32ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1e32f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e32f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e32f4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1e32f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e32f8: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1e32f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e32fc: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1E32FCu;
    SET_GPR_U32(ctx, 31, 0x1E3304u);
    ctx->pc = 0x1E3300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32FCu;
            // 0x1e3300: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3304u; }
        if (ctx->pc != 0x1E3304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3304u; }
        if (ctx->pc != 0x1E3304u) { return; }
    }
    ctx->pc = 0x1E3304u;
    // 0x1e3304: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1e3304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e3308: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x1e3308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1e330c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E330Cu;
    {
        const bool branch_taken_0x1e330c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e330c) {
            ctx->pc = 0x1E3330u;
            goto label_1e3330;
        }
    }
    ctx->pc = 0x1E3314u;
    // 0x1e3314: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1e3314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e3318: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e3318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e331c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1e331cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e3320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e3320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3324: 0xc065944  jal         func_196510
    ctx->pc = 0x1E3324u;
    SET_GPR_U32(ctx, 31, 0x1E332Cu);
    ctx->pc = 0x1E3328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3324u;
            // 0x1e3328: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E332Cu; }
        if (ctx->pc != 0x1E332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E332Cu; }
        if (ctx->pc != 0x1E332Cu) { return; }
    }
    ctx->pc = 0x1E332Cu;
    // 0x1e332c: 0x0  nop
    ctx->pc = 0x1e332cu;
    // NOP
label_1e3330:
    // 0x1e3330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e333c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E333Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E333Cu;
            // 0x1e3340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3330u: goto label_1e3330;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3344u;
}
