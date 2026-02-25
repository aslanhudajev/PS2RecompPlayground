#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MallocTopHeaderSearch
// Address: 0x1426c0 - 0x142728
void MallocTopHeaderSearch_0x1426c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MallocTopHeaderSearch_0x1426c0");
#endif

    ctx->pc = 0x1426c0u;

    // 0x1426c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1426c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1426c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1426c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1426c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1426cc: 0x24a50898  addiu       $a1, $a1, 0x898
    ctx->pc = 0x1426ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
    // 0x1426d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1426d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1426d4: 0xc0509cc  jal         func_142730
    ctx->pc = 0x1426D4u;
    SET_GPR_U32(ctx, 31, 0x1426DCu);
    ctx->pc = 0x1426D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1426D4u;
            // 0x1426d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142730u;
    if (runtime->hasFunction(0x142730u)) {
        auto targetFn = runtime->lookupFunction(0x142730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426DCu; }
        if (ctx->pc != 0x1426DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocHeaderSearch_0x142730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426DCu; }
        if (ctx->pc != 0x1426DCu) { return; }
    }
    ctx->pc = 0x1426DCu;
    // 0x1426dc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1426dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1426e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1426e0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x1426e4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1426E4u;
    {
        const bool branch_taken_0x1426e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1426e4) {
            ctx->pc = 0x142718u;
            goto label_142718;
        }
    }
    ctx->pc = 0x1426ECu;
    // 0x1426ec: 0x0  nop
    ctx->pc = 0x1426ecu;
    // NOP
label_1426f0:
    // 0x1426f0: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x1426f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x1426f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1426f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1426f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1426f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426fc: 0xc0509cc  jal         func_142730
    ctx->pc = 0x1426FCu;
    SET_GPR_U32(ctx, 31, 0x142704u);
    ctx->pc = 0x142700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1426FCu;
            // 0x142700: 0x24a50898  addiu       $a1, $a1, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142730u;
    if (runtime->hasFunction(0x142730u)) {
        auto targetFn = runtime->lookupFunction(0x142730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142704u; }
        if (ctx->pc != 0x142704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocHeaderSearch_0x142730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142704u; }
        if (ctx->pc != 0x142704u) { return; }
    }
    ctx->pc = 0x142704u;
    // 0x142704: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x142704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142708: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x142708u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x14270c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14270Cu;
    {
        const bool branch_taken_0x14270c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14270c) {
            ctx->pc = 0x1426F0u;
            goto label_1426f0;
        }
    }
    ctx->pc = 0x142714u;
    // 0x142714: 0x0  nop
    ctx->pc = 0x142714u;
    // NOP
label_142718:
    // 0x142718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14271c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14271cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142720: 0x3e00008  jr          $ra
    ctx->pc = 0x142720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142720u;
            // 0x142724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1426F0u: goto label_1426f0;
            case 0x142718u: goto label_142718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142728u;
}
