#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Laser_LC
// Address: 0x194570 - 0x194660
void EnemyShotCreate_Laser_LC_0x194570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Laser_LC_0x194570");
#endif

    ctx->pc = 0x194570u;

    // 0x194570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194574: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19457c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194580: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194584: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194588: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194588u;
    SET_GPR_U32(ctx, 31, 0x194590u);
    ctx->pc = 0x19458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194588u;
            // 0x19458c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194590u; }
        if (ctx->pc != 0x194590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194590u; }
        if (ctx->pc != 0x194590u) { return; }
    }
    ctx->pc = 0x194590u;
    // 0x194590: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x194590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x194594: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194598: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19459c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x19459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1945a0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1945A0u;
    SET_GPR_U32(ctx, 31, 0x1945A8u);
    ctx->pc = 0x1945A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1945A0u;
            // 0x1945a4: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945A8u; }
        if (ctx->pc != 0x1945A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945A8u; }
        if (ctx->pc != 0x1945A8u) { return; }
    }
    ctx->pc = 0x1945A8u;
    // 0x1945a8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1945a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1945ac: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x1945acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
    // 0x1945b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1945b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1945b4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1945b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1945b8: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1945b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1945bc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1945bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1945c0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1945c0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1945c4: 0x24a50420  addiu       $a1, $a1, 0x420
    ctx->pc = 0x1945c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1056));
    // 0x1945c8: 0x24e70240  addiu       $a3, $a3, 0x240
    ctx->pc = 0x1945c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
    // 0x1945cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1945ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1945d0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1945d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1945d4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1945d4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1945d8: 0x0  nop
    ctx->pc = 0x1945d8u;
    // NOP
    // 0x1945dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1945dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1945e0: 0x3010  mfhi        $a2
    ctx->pc = 0x1945e0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1945e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1945e8: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x1945ec: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1945f0: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1945f4: 0xe83021  addu        $a2, $a3, $t0
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1945f8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1945f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1945fc: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1945fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x194600: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x194600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x194604: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x194604u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x194608: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x194608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19460c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x19460cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x194610: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x194610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x194614: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x194614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x194618: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x194618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19461c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19461cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x194620: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x194620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x194624: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x194624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194628: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x194628u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19462c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x19462cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x194630: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x194630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x194634: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x194634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194638: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19463c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194640: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194644: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x194644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x194648: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19464c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19464cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194658: 0x3e00008  jr          $ra
    ctx->pc = 0x194658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194658u;
            // 0x19465c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194660u;
}
