#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_01Hit
// Address: 0x19b4b0 - 0x19b564
void En3_01Hit_0x19b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_01Hit_0x19b4b0");
#endif

    ctx->pc = 0x19b4b0u;

    // 0x19b4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b4c0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x19b4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19b4c4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x19b4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19b4c8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19b4cc: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19B4CCu;
    {
        const bool branch_taken_0x19b4cc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19B4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4CCu;
            // 0x19b4d0: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4cc) {
            ctx->pc = 0x19B550u;
            goto label_19b550;
        }
    }
    ctx->pc = 0x19B4D4u;
    // 0x19b4d4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x19b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19b4d8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x19b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b4dc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x19b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x19b4e0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x19b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19b4e4: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19B4E4u;
    {
        const bool branch_taken_0x19b4e4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19b4e4) {
            ctx->pc = 0x19B550u;
            goto label_19b550;
        }
    }
    ctx->pc = 0x19B4ECu;
    // 0x19b4ec: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19b4f0: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x19b4f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19b4f8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x19b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19b4fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19b500: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19b504: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19b504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19b508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b50c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x19b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x19b510: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x19b510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19b514: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x19b514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19b518: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19b51c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x19B51Cu;
    SET_GPR_U32(ctx, 31, 0x19B524u);
    ctx->pc = 0x19B520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B51Cu;
            // 0x19b520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B524u; }
        if (ctx->pc != 0x19B524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B524u; }
        if (ctx->pc != 0x19B524u) { return; }
    }
    ctx->pc = 0x19B524u;
    // 0x19b524: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x19b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19b528: 0x286300ff  slti        $v1, $v1, 0xFF
    ctx->pc = 0x19b528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x19b52c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B52Cu;
    {
        const bool branch_taken_0x19b52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b52c) {
            ctx->pc = 0x19B550u;
            goto label_19b550;
        }
    }
    ctx->pc = 0x19B534u;
    // 0x19b534: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x19b538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19b538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b53c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19b540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b544: 0xc065944  jal         func_196510
    ctx->pc = 0x19B544u;
    SET_GPR_U32(ctx, 31, 0x19B54Cu);
    ctx->pc = 0x19B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B544u;
            // 0x19b548: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B54Cu; }
        if (ctx->pc != 0x19B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B54Cu; }
        if (ctx->pc != 0x19B54Cu) { return; }
    }
    ctx->pc = 0x19B54Cu;
    // 0x19b54c: 0x0  nop
    ctx->pc = 0x19b54cu;
    // NOP
label_19b550:
    // 0x19b550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B55Cu;
            // 0x19b560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B550u: goto label_19b550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B564u;
}
