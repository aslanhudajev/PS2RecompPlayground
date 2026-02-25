#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Dekatama_boss
// Address: 0x194950 - 0x1949e8
void EnemyShotCreate_Dekatama_boss_0x194950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Dekatama_boss_0x194950");
#endif

    ctx->pc = 0x194950u;

    // 0x194950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x194958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19495c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194964: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x194964u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x194968: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x194968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19496c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19496cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x194970: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x194970u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x194974: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194974u;
    SET_GPR_U32(ctx, 31, 0x19497Cu);
    ctx->pc = 0x194978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194974u;
            // 0x194978: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19497Cu; }
        if (ctx->pc != 0x19497Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19497Cu; }
        if (ctx->pc != 0x19497Cu) { return; }
    }
    ctx->pc = 0x19497Cu;
    // 0x19497c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x19497cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194980: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x194980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x194984: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x194984u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194988: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19498c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19498cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x194990: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x194994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194998: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x19499c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19499cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1949a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1949a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1949a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1949a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1949a8: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x1949a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1949ac: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x1949acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1949b0: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1949b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1949b4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1949b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1949b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1949b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1949bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1949bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1949c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1949c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1949c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1949c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1949c8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1949c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1949cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1949ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1949d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1949d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1949d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1949d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1949d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1949d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1949dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1949dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1949e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1949E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1949E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1949E0u;
            // 0x1949e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1949E8u;
}
