#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateParticle
// Address: 0x16eca0 - 0x16ed24
void CreateParticle_0x16eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateParticle_0x16eca0");
#endif

    ctx->pc = 0x16eca0u;

    // 0x16eca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16eca4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16eca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16eca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16ecac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16ecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16ecb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ecb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ecb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecb8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16ecb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16ecbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16ecbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16ecc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16ecc4: 0x8c234ce8  lw          $v1, 0x4CE8($at)
    ctx->pc = 0x16ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16ecc8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16ecc8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x16eccc: 0x28610201  slti        $at, $v1, 0x201
    ctx->pc = 0x16ecccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x16ecd0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x16ECD0u;
    {
        const bool branch_taken_0x16ecd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECD0u;
            // 0x16ecd4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecd0) {
            ctx->pc = 0x16ED08u;
            goto label_16ed08;
        }
    }
    ctx->pc = 0x16ECD8u;
    // 0x16ecd8: 0xc05bb4c  jal         func_16ED30
    ctx->pc = 0x16ECD8u;
    SET_GPR_U32(ctx, 31, 0x16ECE0u);
    ctx->pc = 0x16ED30u;
    if (runtime->hasFunction(0x16ED30u)) {
        auto targetFn = runtime->lookupFunction(0x16ED30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECE0u; }
        if (ctx->pc != 0x16ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomParticle_0x16ed30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECE0u; }
        if (ctx->pc != 0x16ECE0u) { return; }
    }
    ctx->pc = 0x16ECE0u;
    // 0x16ece0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ece4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ece8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16ece8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16ecec: 0xc05bb4c  jal         func_16ED30
    ctx->pc = 0x16ECECu;
    SET_GPR_U32(ctx, 31, 0x16ECF4u);
    ctx->pc = 0x16ECF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ECECu;
            // 0x16ecf0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ED30u;
    if (runtime->hasFunction(0x16ED30u)) {
        auto targetFn = runtime->lookupFunction(0x16ED30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECF4u; }
        if (ctx->pc != 0x16ECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomParticle_0x16ed30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECF4u; }
        if (ctx->pc != 0x16ECF4u) { return; }
    }
    ctx->pc = 0x16ECF4u;
    // 0x16ecf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ecf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecfc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16ecfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16ed00: 0xc05bb4c  jal         func_16ED30
    ctx->pc = 0x16ED00u;
    SET_GPR_U32(ctx, 31, 0x16ED08u);
    ctx->pc = 0x16ED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED00u;
            // 0x16ed04: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ED30u;
    if (runtime->hasFunction(0x16ED30u)) {
        auto targetFn = runtime->lookupFunction(0x16ED30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED08u; }
        if (ctx->pc != 0x16ED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomParticle_0x16ed30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED08u; }
        if (ctx->pc != 0x16ED08u) { return; }
    }
    ctx->pc = 0x16ED08u;
label_16ed08:
    // 0x16ed08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16ed08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ed0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ed0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ed10: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16ed14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ed14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ed18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ed1c: 0x3e00008  jr          $ra
    ctx->pc = 0x16ED1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED1Cu;
            // 0x16ed20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ED08u: goto label_16ed08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16ED24u;
}
