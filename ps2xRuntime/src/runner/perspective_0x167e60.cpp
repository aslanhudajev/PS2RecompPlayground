#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: perspective
// Address: 0x167e60 - 0x167f4c
void perspective_0x167e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("perspective_0x167e60");
#endif

    ctx->pc = 0x167e60u;

    // 0x167e60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x167e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x167e68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x167e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x167e6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x167e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x167e70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x167e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167e78: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x167e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x167e7c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x167e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167e80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e84: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x167e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e88: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x167e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x167e8c: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x167e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167e90: 0xc4cd0000  lwc1        $f13, 0x0($a2)
    ctx->pc = 0x167e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x167e94: 0xc4ce0004  lwc1        $f14, 0x4($a2)
    ctx->pc = 0x167e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x167e98: 0xc4cf0008  lwc1        $f15, 0x8($a2)
    ctx->pc = 0x167e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x167e9c: 0xc4d0000c  lwc1        $f16, 0xC($a2)
    ctx->pc = 0x167e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x167ea0: 0xc4f10000  lwc1        $f17, 0x0($a3)
    ctx->pc = 0x167ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x167ea4: 0xc4f20004  lwc1        $f18, 0x4($a3)
    ctx->pc = 0x167ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x167ea8: 0xc4f30008  lwc1        $f19, 0x8($a3)
    ctx->pc = 0x167ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x167eac: 0xc04b8c2  jal         func_12E308
    ctx->pc = 0x167EACu;
    SET_GPR_U32(ctx, 31, 0x167EB4u);
    ctx->pc = 0x167EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167EACu;
            // 0x167eb0: 0x24844ca0  addiu       $a0, $a0, 0x4CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E308u;
    if (runtime->hasFunction(0x12E308u)) {
        auto targetFn = runtime->lookupFunction(0x12E308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EB4u; }
        if (ctx->pc != 0x167EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ViewScreenMatrix_0x12e308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EB4u; }
        if (ctx->pc != 0x167EB4u) { return; }
    }
    ctx->pc = 0x167EB4u;
    // 0x167eb4: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x167eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167eb8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x167ebc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x167ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167ec0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167ec4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x167ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167ec8: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x167ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x167ecc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x167eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167ed0: 0x24a54c90  addiu       $a1, $a1, 0x4C90
    ctx->pc = 0x167ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19600));
    // 0x167ed4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x167ed4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x167ed8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x167edc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x167edcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x167ee0: 0xe4204c90  swc1        $f0, 0x4C90($at)
    ctx->pc = 0x167ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19600), bits); }
    // 0x167ee4: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x167ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167ee8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167eec: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x167eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167ef0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x167ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167ef4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x167ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167ef8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x167ef8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x167efc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x167f00: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x167f00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x167f04: 0xe4204c94  swc1        $f0, 0x4C94($at)
    ctx->pc = 0x167f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19604), bits); }
    // 0x167f08: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x167f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167f0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167f10: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x167f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167f14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x167f18: 0xe4204c98  swc1        $f0, 0x4C98($at)
    ctx->pc = 0x167f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19608), bits); }
    // 0x167f1c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x167f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167f20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167f24: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x167f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167f28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x167f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x167f2c: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x167F2Cu;
    SET_GPR_U32(ctx, 31, 0x167F34u);
    ctx->pc = 0x167F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167F2Cu;
            // 0x167f30: 0xe4204c9c  swc1        $f0, 0x4C9C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19612), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F34u; }
        if (ctx->pc != 0x167F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167F34u; }
        if (ctx->pc != 0x167F34u) { return; }
    }
    ctx->pc = 0x167F34u;
    // 0x167f34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x167f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167f38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x167f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167f3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x167f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167f44: 0x3e00008  jr          $ra
    ctx->pc = 0x167F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167F44u;
            // 0x167f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167F4Cu;
}
