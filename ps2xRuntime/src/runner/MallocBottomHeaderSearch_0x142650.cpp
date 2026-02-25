#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MallocBottomHeaderSearch
// Address: 0x142650 - 0x1426b8
void MallocBottomHeaderSearch_0x142650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MallocBottomHeaderSearch_0x142650");
#endif

    ctx->pc = 0x142650u;

    // 0x142650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142654: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x142654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x142658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14265c: 0x24a508a0  addiu       $a1, $a1, 0x8A0
    ctx->pc = 0x14265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2208));
    // 0x142660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142664: 0xc0509cc  jal         func_142730
    ctx->pc = 0x142664u;
    SET_GPR_U32(ctx, 31, 0x14266Cu);
    ctx->pc = 0x142668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142664u;
            // 0x142668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142730u;
    if (runtime->hasFunction(0x142730u)) {
        auto targetFn = runtime->lookupFunction(0x142730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14266Cu; }
        if (ctx->pc != 0x14266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocHeaderSearch_0x142730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14266Cu; }
        if (ctx->pc != 0x14266Cu) { return; }
    }
    ctx->pc = 0x14266Cu;
    // 0x14266c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x14266cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142670: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x142670u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x142674: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x142674u;
    {
        const bool branch_taken_0x142674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142674) {
            ctx->pc = 0x1426A8u;
            goto label_1426a8;
        }
    }
    ctx->pc = 0x14267Cu;
    // 0x14267c: 0x0  nop
    ctx->pc = 0x14267cu;
    // NOP
label_142680:
    // 0x142680: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x142680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x142684: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x142684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x142688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14268c: 0xc0509cc  jal         func_142730
    ctx->pc = 0x14268Cu;
    SET_GPR_U32(ctx, 31, 0x142694u);
    ctx->pc = 0x142690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14268Cu;
            // 0x142690: 0x24a508a0  addiu       $a1, $a1, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142730u;
    if (runtime->hasFunction(0x142730u)) {
        auto targetFn = runtime->lookupFunction(0x142730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142694u; }
        if (ctx->pc != 0x142694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocHeaderSearch_0x142730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142694u; }
        if (ctx->pc != 0x142694u) { return; }
    }
    ctx->pc = 0x142694u;
    // 0x142694: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x142694u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142698: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x142698u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x14269c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14269Cu;
    {
        const bool branch_taken_0x14269c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14269c) {
            ctx->pc = 0x142680u;
            goto label_142680;
        }
    }
    ctx->pc = 0x1426A4u;
    // 0x1426a4: 0x0  nop
    ctx->pc = 0x1426a4u;
    // NOP
label_1426a8:
    // 0x1426a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1426a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1426ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1426acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1426b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1426B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1426B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1426B0u;
            // 0x1426b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142680u: goto label_142680;
            case 0x1426A8u: goto label_1426a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1426B8u;
}
