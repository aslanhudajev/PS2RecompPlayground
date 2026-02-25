#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Laser
// Address: 0x194800 - 0x1948cc
void EnemyShotCreate_Laser_0x194800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Laser_0x194800");
#endif

    ctx->pc = 0x194800u;

    // 0x194800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194804: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x194804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x194808: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19480c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19480cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194814: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19481c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19481cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194820: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x194820u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194824: 0x0  nop
    ctx->pc = 0x194824u;
    // NOP
    // 0x194828: 0x0  nop
    ctx->pc = 0x194828u;
    // NOP
    // 0x19482c: 0x8010  mfhi        $s0
    ctx->pc = 0x19482cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x194830: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194830u;
    SET_GPR_U32(ctx, 31, 0x194838u);
    ctx->pc = 0x194834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194830u;
            // 0x194834: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194838u; }
        if (ctx->pc != 0x194838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194838u; }
        if (ctx->pc != 0x194838u) { return; }
    }
    ctx->pc = 0x194838u;
    // 0x194838: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x194838u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19483c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x194840: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x194840u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194844: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x194848: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19484c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x19484cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x194850: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x194850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x194854: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x194854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194858: 0x24840420  addiu       $a0, $a0, 0x420
    ctx->pc = 0x194858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
    // 0x19485c: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x19485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x194860: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x194864: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x194864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x194868: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19486c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194870: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x194870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x194874: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x194878: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19487c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x19487cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194880: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x194880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x194884: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x194884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194888: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x194888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19488c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x19488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194890: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x194890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x194894: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x194894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x194898: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x194898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x19489c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1948a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1948a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1948a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1948a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1948a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1948ac: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1948acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1948b0: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x1948b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
    // 0x1948b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1948b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1948b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1948b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1948bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1948bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1948c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1948c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1948c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1948C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1948C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1948C4u;
            // 0x1948c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1948CCu;
}
