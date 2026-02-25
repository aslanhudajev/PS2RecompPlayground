#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Laser_Big_Dammy
// Address: 0x194660 - 0x19472c
void EnemyShotCreate_Laser_Big_Dammy_0x194660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Laser_Big_Dammy_0x194660");
#endif

    ctx->pc = 0x194660u;

    // 0x194660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194664: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x194664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x194668: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19466c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19467c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19467cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194680: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x194680u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194684: 0x0  nop
    ctx->pc = 0x194684u;
    // NOP
    // 0x194688: 0x0  nop
    ctx->pc = 0x194688u;
    // NOP
    // 0x19468c: 0x8010  mfhi        $s0
    ctx->pc = 0x19468cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x194690: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194690u;
    SET_GPR_U32(ctx, 31, 0x194698u);
    ctx->pc = 0x194694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194690u;
            // 0x194694: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194698u; }
        if (ctx->pc != 0x194698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194698u; }
        if (ctx->pc != 0x194698u) { return; }
    }
    ctx->pc = 0x194698u;
    // 0x194698: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x194698u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19469c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x19469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1946a0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1946a0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1946a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1946a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1946a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1946a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1946ac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1946acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1946b0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1946b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1946b4: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x1946b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1946b8: 0x24840420  addiu       $a0, $a0, 0x420
    ctx->pc = 0x1946b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
    // 0x1946bc: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x1946bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x1946c0: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x1946c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1946c4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1946c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1946c8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1946c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1946cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1946ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1946d0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1946d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1946d4: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x1946d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x1946d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1946d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1946dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1946dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1946e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1946e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1946e4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1946e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1946e8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1946e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1946ec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1946ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1946f0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1946f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1946f4: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1946f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1946f8: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x1946f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x1946fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1946fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194700: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194704: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194708: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19470c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x19470cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x194710: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x194710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x194714: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19471c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19471cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194724: 0x3e00008  jr          $ra
    ctx->pc = 0x194724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194724u;
            // 0x194728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19472Cu;
}
