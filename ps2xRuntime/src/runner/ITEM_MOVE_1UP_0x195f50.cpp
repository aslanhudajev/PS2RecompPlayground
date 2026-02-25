#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ITEM_MOVE_1UP
// Address: 0x195f50 - 0x196024
void ITEM_MOVE_1UP_0x195f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ITEM_MOVE_1UP_0x195f50");
#endif

    ctx->pc = 0x195f50u;

    // 0x195f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195f54: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x195f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x195f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195f5c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x195f5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x195f60: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x195f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x195f64: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x195f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195f68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195f6c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x195f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x195f70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195f74: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x195f74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x195f78: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x195f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x195f7c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x195f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195f80: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x195f80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x195f84: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x195f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x195f88: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x195f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195f8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x195f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195f90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x195F90u;
    {
        const bool branch_taken_0x195f90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F90u;
            // 0x195f94: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f90) {
            ctx->pc = 0x195FA8u;
            goto label_195fa8;
        }
    }
    ctx->pc = 0x195F98u;
    // 0x195f98: 0xc065c5c  jal         func_197170
    ctx->pc = 0x195F98u;
    SET_GPR_U32(ctx, 31, 0x195FA0u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FA0u; }
        if (ctx->pc != 0x195FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FA0u; }
        if (ctx->pc != 0x195FA0u) { return; }
    }
    ctx->pc = 0x195FA0u;
    // 0x195fa0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x195FA0u;
    {
        const bool branch_taken_0x195fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fa0) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195FA8u;
label_195fa8:
    // 0x195fa8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x195fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x195fac: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195FACu;
    {
        const bool branch_taken_0x195fac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x195fac) {
            ctx->pc = 0x195FC8u;
            goto label_195fc8;
        }
    }
    ctx->pc = 0x195FB4u;
    // 0x195fb4: 0xc065c5c  jal         func_197170
    ctx->pc = 0x195FB4u;
    SET_GPR_U32(ctx, 31, 0x195FBCu);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FBCu; }
        if (ctx->pc != 0x195FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195FBCu; }
        if (ctx->pc != 0x195FBCu) { return; }
    }
    ctx->pc = 0x195FBCu;
    // 0x195fbc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x195FBCu;
    {
        const bool branch_taken_0x195fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195fbc) {
            ctx->pc = 0x196018u;
            goto label_196018;
        }
    }
    ctx->pc = 0x195FC4u;
    // 0x195fc4: 0x0  nop
    ctx->pc = 0x195fc4u;
    // NOP
label_195fc8:
    // 0x195fc8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x195fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x195fcc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x195fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195fd0: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x195fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x195fd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195fd8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x195fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195fdc: 0x24e5001c  addiu       $a1, $a3, 0x1C
    ctx->pc = 0x195fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x195fe0: 0x24c66db0  addiu       $a2, $a2, 0x6DB0
    ctx->pc = 0x195fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28080));
    // 0x195fe4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x195fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195fe8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x195fe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195fec: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x195fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x195ff0: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x195ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ff4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x195ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195ff8: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x195ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x195ffc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x195ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196000: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x196000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196004: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x196004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x196008: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x196008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19600c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19600cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196010: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x196010u;
    SET_GPR_U32(ctx, 31, 0x196018u);
    ctx->pc = 0x196014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196010u;
            // 0x196014: 0xe4e00028  swc1        $f0, 0x28($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196018u; }
        if (ctx->pc != 0x196018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196018u; }
        if (ctx->pc != 0x196018u) { return; }
    }
    ctx->pc = 0x196018u;
label_196018:
    // 0x196018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19601c: 0x3e00008  jr          $ra
    ctx->pc = 0x19601Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19601Cu;
            // 0x196020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195FA8u: goto label_195fa8;
            case 0x195FC8u: goto label_195fc8;
            case 0x196018u: goto label_196018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196024u;
}
