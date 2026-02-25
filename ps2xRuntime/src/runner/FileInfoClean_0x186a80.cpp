#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FileInfoClean
// Address: 0x186a80 - 0x186ae4
void FileInfoClean_0x186a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FileInfoClean_0x186a80");
#endif

    ctx->pc = 0x186a80u;

    // 0x186a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186a84: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186a8c: 0x2484bcc0  addiu       $a0, $a0, -0x4340
    ctx->pc = 0x186a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
    // 0x186a90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a98: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x186a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x186a9c: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x186A9Cu;
    SET_GPR_U32(ctx, 31, 0x186AA4u);
    ctx->pc = 0x186AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186A9Cu;
            // 0x186aa0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AA4u; }
        if (ctx->pc != 0x186AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AA4u; }
        if (ctx->pc != 0x186AA4u) { return; }
    }
    ctx->pc = 0x186AA4u;
    // 0x186aa4: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x186aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x186aa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x186aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186aac: 0x2610bb70  addiu       $s0, $s0, -0x4490
    ctx->pc = 0x186aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949744));
label_186ab0:
    // 0x186ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ab8: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x186AB8u;
    SET_GPR_U32(ctx, 31, 0x186AC0u);
    ctx->pc = 0x186ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AB8u;
            // 0x186abc: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AC0u; }
        if (ctx->pc != 0x186AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186AC0u; }
        if (ctx->pc != 0x186AC0u) { return; }
    }
    ctx->pc = 0x186AC0u;
    // 0x186ac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x186ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x186ac4: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x186ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x186ac8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x186AC8u;
    {
        const bool branch_taken_0x186ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186AC8u;
            // 0x186acc: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ac8) {
            ctx->pc = 0x186AB0u;
            goto label_186ab0;
        }
    }
    ctx->pc = 0x186AD0u;
    // 0x186ad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186ad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186adc: 0x3e00008  jr          $ra
    ctx->pc = 0x186ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186ADCu;
            // 0x186ae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186AB0u: goto label_186ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186AE4u;
}
