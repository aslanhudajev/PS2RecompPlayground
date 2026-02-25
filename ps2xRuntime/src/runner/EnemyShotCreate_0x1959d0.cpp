#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate
// Address: 0x1959d0 - 0x195a84
void EnemyShotCreate_0x1959d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_0x1959d0");
#endif

    ctx->pc = 0x1959d0u;

    // 0x1959d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1959d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1959d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1959d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1959d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1959dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1959dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1959e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1959e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1959e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1959e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1959e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1959ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1959f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1959f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1959f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1959f8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1959f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1959fc: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x1959FCu;
    SET_GPR_U32(ctx, 31, 0x195A04u);
    ctx->pc = 0x195A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1959FCu;
            // 0x195a00: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A04u; }
        if (ctx->pc != 0x195A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195A04u; }
        if (ctx->pc != 0x195A04u) { return; }
    }
    ctx->pc = 0x195A04u;
    // 0x195a04: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x195a04u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195a08: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x195a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x195a0c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x195a0cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195a10: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x195a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x195a14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195a18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x195a1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195a20: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x195a24: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x195a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x195a28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195a30: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x195a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x195a34: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x195a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x195a38: 0xc420351c  lwc1        $f0, 0x351C($at)
    ctx->pc = 0x195a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195a3c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x195a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x195a40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x195a44: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x195a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x195a48: 0xc420351c  lwc1        $f0, 0x351C($at)
    ctx->pc = 0x195a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195a4c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x195a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x195a50: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x195a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x195a54: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x195a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x195a58: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x195a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x195a5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x195a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195a60: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x195a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x195a64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195a68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x195a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x195a6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x195a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195a70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x195a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195a74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x195a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195a78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x195a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x195A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195A7Cu;
            // 0x195a80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195A84u;
}
