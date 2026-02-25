#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: lightinit
// Address: 0x167f60 - 0x168010
void lightinit_0x167f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("lightinit_0x167f60");
#endif

    ctx->pc = 0x167f60u;

    // 0x167f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167f64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x167f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x167f68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x167f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x167f6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x167f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x167f70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167f74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167f88:
    // 0x167f88: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x167f88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x167f8c: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x167f90: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x167f90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x167f94: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x167f94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f98: 0x26949e90  addiu       $s4, $s4, -0x6170
    ctx->pc = 0x167f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942352));
    // 0x167f9c: 0x26739e50  addiu       $s3, $s3, -0x61B0
    ctx->pc = 0x167f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942288));
    // 0x167fa0: 0x26529e10  addiu       $s2, $s2, -0x61F0
    ctx->pc = 0x167fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942224));
    // 0x167fa4: 0x0  nop
    ctx->pc = 0x167fa4u;
    // NOP
label_167fa8:
    // 0x167fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x167fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fb4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x167fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fb8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x167fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fbc: 0xc05a004  jal         func_168010
    ctx->pc = 0x167FBCu;
    SET_GPR_U32(ctx, 31, 0x167FC4u);
    ctx->pc = 0x167FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167FBCu;
            // 0x167fc0: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168010u;
    if (runtime->hasFunction(0x168010u)) {
        auto targetFn = runtime->lookupFunction(0x168010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FC4u; }
        if (ctx->pc != 0x167FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        lightstore_0x168010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167FC4u; }
        if (ctx->pc != 0x167FC4u) { return; }
    }
    ctx->pc = 0x167FC4u;
    // 0x167fc4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x167fc8: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x167fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x167fcc: 0x2aa30004  slti        $v1, $s5, 0x4
    ctx->pc = 0x167fccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x167fd0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x167fd4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x167FD4u;
    {
        const bool branch_taken_0x167fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x167FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167FD4u;
            // 0x167fd8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167fd4) {
            ctx->pc = 0x167FA8u;
            goto label_167fa8;
        }
    }
    ctx->pc = 0x167FDCu;
    // 0x167fdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x167fe0: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x167fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x167fe4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x167FE4u;
    {
        const bool branch_taken_0x167fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167fe4) {
            ctx->pc = 0x167F88u;
            goto label_167f88;
        }
    }
    ctx->pc = 0x167FECu;
    // 0x167fec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x167fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167ff0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x167ff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167ff4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x167ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167ff8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168008: 0x3e00008  jr          $ra
    ctx->pc = 0x168008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16800Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168008u;
            // 0x16800c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167F88u: goto label_167f88;
            case 0x167FA8u: goto label_167fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168010u;
}
