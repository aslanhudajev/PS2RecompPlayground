#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Zanzoudan_Wave
// Address: 0x195160 - 0x1951e0
void EnemyShotCreate_Zanzoudan_Wave_0x195160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Zanzoudan_Wave_0x195160");
#endif

    ctx->pc = 0x195160u;

    // 0x195160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19516c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195170: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195174: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x195174u;
    SET_GPR_U32(ctx, 31, 0x19517Cu);
    ctx->pc = 0x195178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195174u;
            // 0x195178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19517Cu; }
        if (ctx->pc != 0x19517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19517Cu; }
        if (ctx->pc != 0x19517Cu) { return; }
    }
    ctx->pc = 0x19517Cu;
    // 0x19517c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x19517cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195180: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x195180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x195184: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x195184u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195188: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x195188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19518c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19518cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x195190: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x195190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x195194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x195194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19519c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19519cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1951a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1951a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1951a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1951a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1951a8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1951a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1951ac: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1951acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1951b0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1951B0u;
    SET_GPR_U32(ctx, 31, 0x1951B8u);
    ctx->pc = 0x1951B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1951B0u;
            // 0x1951b4: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951B8u; }
        if (ctx->pc != 0x1951B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1951B8u; }
        if (ctx->pc != 0x1951B8u) { return; }
    }
    ctx->pc = 0x1951B8u;
    // 0x1951b8: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1951b8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x1951bc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1951bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1951c0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1951c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1951c4: 0x8c23a5a8  lw          $v1, -0x5A58($at)
    ctx->pc = 0x1951c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944168)));
    // 0x1951c8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1951c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1951cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1951ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1951d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1951d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1951d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1951d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1951d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1951D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1951DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1951D8u;
            // 0x1951dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1951E0u;
}
