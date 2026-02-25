#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ITEM_MOVE_BOMB
// Address: 0x195e10 - 0x195f48
void ITEM_MOVE_BOMB_0x195e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ITEM_MOVE_BOMB_0x195e10");
#endif

    ctx->pc = 0x195e10u;

    // 0x195e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195e1c: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x195E1Cu;
    SET_GPR_U32(ctx, 31, 0x195E24u);
    ctx->pc = 0x195E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195E1Cu;
            // 0x195e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E24u; }
        if (ctx->pc != 0x195E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E24u; }
        if (ctx->pc != 0x195E24u) { return; }
    }
    ctx->pc = 0x195E24u;
    // 0x195e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195e28: 0x0  nop
    ctx->pc = 0x195e28u;
    // NOP
    // 0x195e2c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x195e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x195e30: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x195e34: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x195e34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x195e38: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x195e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x195e3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195e44: 0x0  nop
    ctx->pc = 0x195e44u;
    // NOP
    // 0x195e48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x195e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x195e4c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x195e4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x195e50: 0x0  nop
    ctx->pc = 0x195e50u;
    // NOP
    // 0x195e54: 0x0  nop
    ctx->pc = 0x195e54u;
    // NOP
    // 0x195e58: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x195E58u;
    SET_GPR_U32(ctx, 31, 0x195E60u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E60u; }
        if (ctx->pc != 0x195E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195E60u; }
        if (ctx->pc != 0x195E60u) { return; }
    }
    ctx->pc = 0x195E60u;
    // 0x195e60: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x195e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x195e64: 0x3c023be5  lui         $v0, 0x3BE5
    ctx->pc = 0x195e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15333 << 16));
    // 0x195e68: 0x34436042  ori         $v1, $v0, 0x6042
    ctx->pc = 0x195e68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
    // 0x195e6c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x195e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x195e70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x195e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195e74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195e78: 0x0  nop
    ctx->pc = 0x195e78u;
    // NOP
    // 0x195e7c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x195e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x195e80: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x195e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x195e84: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x195e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x195e88: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x195e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e8c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x195e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x195e90: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x195e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x195e94: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x195e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e98: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x195e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x195e9c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x195e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x195ea0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x195ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ea4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x195ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195ea8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x195EA8u;
    {
        const bool branch_taken_0x195ea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195EA8u;
            // 0x195eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ea8) {
            ctx->pc = 0x195EC0u;
            goto label_195ec0;
        }
    }
    ctx->pc = 0x195EB0u;
    // 0x195eb0: 0xc065c5c  jal         func_197170
    ctx->pc = 0x195EB0u;
    SET_GPR_U32(ctx, 31, 0x195EB8u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EB8u; }
        if (ctx->pc != 0x195EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195EB8u; }
        if (ctx->pc != 0x195EB8u) { return; }
    }
    ctx->pc = 0x195EB8u;
    // 0x195eb8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x195EB8u;
    {
        const bool branch_taken_0x195eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195eb8) {
            ctx->pc = 0x195F38u;
            goto label_195f38;
        }
    }
    ctx->pc = 0x195EC0u;
label_195ec0:
    // 0x195ec0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x195ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195ec4: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195EC4u;
    {
        const bool branch_taken_0x195ec4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x195EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195EC4u;
            // 0x195ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ec4) {
            ctx->pc = 0x195EE0u;
            goto label_195ee0;
        }
    }
    ctx->pc = 0x195ECCu;
    // 0x195ecc: 0xc065c5c  jal         func_197170
    ctx->pc = 0x195ECCu;
    SET_GPR_U32(ctx, 31, 0x195ED4u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195ED4u; }
        if (ctx->pc != 0x195ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195ED4u; }
        if (ctx->pc != 0x195ED4u) { return; }
    }
    ctx->pc = 0x195ED4u;
    // 0x195ed4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x195ED4u;
    {
        const bool branch_taken_0x195ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ed4) {
            ctx->pc = 0x195F38u;
            goto label_195f38;
        }
    }
    ctx->pc = 0x195EDCu;
    // 0x195edc: 0x0  nop
    ctx->pc = 0x195edcu;
    // NOP
label_195ee0:
    // 0x195ee0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x195ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x195ee4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x195ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ee8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x195ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x195eec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x195eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195ef0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x195ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195ef4: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x195ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x195ef8: 0x24c66e20  addiu       $a2, $a2, 0x6E20
    ctx->pc = 0x195ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28192));
    // 0x195efc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x195efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f00: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x195f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x195f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195f08: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x195f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x195f0c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x195f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x195f10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x195f14: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x195f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x195f18: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x195f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x195f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x195f20: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x195f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x195f24: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x195f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195f28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x195f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x195f2c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x195F2Cu;
    SET_GPR_U32(ctx, 31, 0x195F34u);
    ctx->pc = 0x195F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195F2Cu;
            // 0x195f30: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F34u; }
        if (ctx->pc != 0x195F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195F34u; }
        if (ctx->pc != 0x195F34u) { return; }
    }
    ctx->pc = 0x195F34u;
    // 0x195f34: 0x0  nop
    ctx->pc = 0x195f34u;
    // NOP
label_195f38:
    // 0x195f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195f40: 0x3e00008  jr          $ra
    ctx->pc = 0x195F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195F40u;
            // 0x195f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195EC0u: goto label_195ec0;
            case 0x195EE0u: goto label_195ee0;
            case 0x195F38u: goto label_195f38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195F48u;
}
