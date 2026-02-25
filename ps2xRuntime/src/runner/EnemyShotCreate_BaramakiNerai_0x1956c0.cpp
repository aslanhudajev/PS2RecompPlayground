#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_BaramakiNerai
// Address: 0x1956c0 - 0x195764
void EnemyShotCreate_BaramakiNerai_0x1956c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_BaramakiNerai_0x1956c0");
#endif

    ctx->pc = 0x1956c0u;

    // 0x1956c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1956c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1956c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1956c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1956cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1956ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1956d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1956d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1956d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1956d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956d8: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
    // 0x1956dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1956dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1956e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1956e8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1956e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1956ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1956ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1956f0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1956f4: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
    // 0x1956f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1956f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1956fc: 0x0  nop
    ctx->pc = 0x1956fcu;
    // NOP
    // 0x195700: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195704: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x195704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x195708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19570c: 0x0  nop
    ctx->pc = 0x19570cu;
    // NOP
    // 0x195710: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x195710u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x195714: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195718: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x195718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19571c: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x19571Cu;
    SET_GPR_U32(ctx, 31, 0x195724u);
    ctx->pc = 0x195720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19571Cu;
            // 0x195720: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195724u; }
        if (ctx->pc != 0x195724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195724u; }
        if (ctx->pc != 0x195724u) { return; }
    }
    ctx->pc = 0x195724u;
    // 0x195724: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x195724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x195728: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x195728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19572c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19572cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195730: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x195730u;
    SET_GPR_U32(ctx, 31, 0x195738u);
    ctx->pc = 0x195734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195730u;
            // 0x195734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195738u; }
        if (ctx->pc != 0x195738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195738u; }
        if (ctx->pc != 0x195738u) { return; }
    }
    ctx->pc = 0x195738u;
    // 0x195738: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x195738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19573c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19573cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195740: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x195740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x195744: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x195744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195748: 0xc065674  jal         func_1959D0
    ctx->pc = 0x195748u;
    SET_GPR_U32(ctx, 31, 0x195750u);
    ctx->pc = 0x19574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195748u;
            // 0x19574c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195750u; }
        if (ctx->pc != 0x195750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195750u; }
        if (ctx->pc != 0x195750u) { return; }
    }
    ctx->pc = 0x195750u;
    // 0x195750: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19575c: 0x3e00008  jr          $ra
    ctx->pc = 0x19575Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19575Cu;
            // 0x195760: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195764u;
}
