#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: VSync2
// Address: 0x10e760 - 0x10e7c0
void VSync2_0x10e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e760u;

    // 0x10e760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10e768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e76c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10e770: 0xc043984  jal         func_10E610
    ctx->pc = 0x10E770u;
    SET_GPR_U32(ctx, 31, 0x10E778u);
    ctx->pc = 0x10E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E770u;
            // 0x10e774: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)8u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E610u;
    if (runtime->hasFunction(0x10E610u)) {
        auto targetFn = runtime->lookupFunction(0x10E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E778u; }
        if (ctx->pc != 0x10E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVSyncFlag_0x10e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E778u; }
        if (ctx->pc != 0x10E778u) { return; }
    }
    ctx->pc = 0x10E778u;
    // 0x10e778: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10e77c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e780: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x10e780u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)61440u)));
    // 0x10e784: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10e784u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_10e788:
    // 0x10e788: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x10e788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x10e78c: 0x8c42f000  lw          $v0, -0x1000($v0)
    ctx->pc = 0x10e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294963200))); // MMIO: 0x1000f000
    // 0x10e790: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10e790u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4u)));
    // 0x10e794: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E794u;
    {
        const bool branch_taken_0x10e794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E794u;
            // 0x10e798: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e794) {
            ctx->pc = 0x10E7A8u;
            goto label_10e7a8;
        }
    }
    ctx->pc = 0x10E79Cu;
    // 0x10e79c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e7a0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10E7A0u;
    {
        const bool branch_taken_0x10e7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7A0u;
            // 0x10e7a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7a0) {
            ctx->pc = 0x10E788u;
            goto label_10e788;
        }
    }
    ctx->pc = 0x10E7A8u;
label_10e7a8:
    // 0x10e7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e7ac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10e7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10e7b0: 0xac22f000  sw          $v0, -0x1000($at)
    ctx->pc = 0x10e7b0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2)); // MMIO: 0x1000f000
    // 0x10e7b4: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x10e7b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10e7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E7B8u;
            // 0x10e7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E788u: goto label_10e788;
            case 0x10E7A8u: goto label_10e7a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E7C0u;
}
