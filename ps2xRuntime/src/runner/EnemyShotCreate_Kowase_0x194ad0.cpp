#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Kowase
// Address: 0x194ad0 - 0x194ba4
void EnemyShotCreate_Kowase_0x194ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Kowase_0x194ad0");
#endif

    ctx->pc = 0x194ad0u;

    // 0x194ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194ae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194ae8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194aec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x194aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194af0: 0xc04e072  jal         func_1381C8
    ctx->pc = 0x194AF0u;
    SET_GPR_U32(ctx, 31, 0x194AF8u);
    ctx->pc = 0x194AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194AF0u;
            // 0x194af4: 0x2604001e  addiu       $a0, $s0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1381C8u;
    if (runtime->hasFunction(0x1381C8u)) {
        auto targetFn = runtime->lookupFunction(0x1381C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AF8u; }
        if (ctx->pc != 0x194AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x1381c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AF8u; }
        if (ctx->pc != 0x194AF8u) { return; }
    }
    ctx->pc = 0x194AF8u;
    // 0x194af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194afc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x194afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x194b00: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x194b00u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194b04: 0x0  nop
    ctx->pc = 0x194b04u;
    // NOP
    // 0x194b08: 0x0  nop
    ctx->pc = 0x194b08u;
    // NOP
    // 0x194b0c: 0x8010  mfhi        $s0
    ctx->pc = 0x194b0cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x194b10: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194B10u;
    SET_GPR_U32(ctx, 31, 0x194B18u);
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B18u; }
        if (ctx->pc != 0x194B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B18u; }
        if (ctx->pc != 0x194B18u) { return; }
    }
    ctx->pc = 0x194B18u;
    // 0x194b18: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x194b18u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194b1c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x194b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x194b20: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x194b20u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x194b28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x194b2c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x194b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x194b30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x194b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x194b34: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x194b34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194b38: 0x24840420  addiu       $a0, $a0, 0x420
    ctx->pc = 0x194b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
    // 0x194b3c: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x194b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x194b40: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x194b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x194b44: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x194b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x194b48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x194b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194b4c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194b50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194b54: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x194b58: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x194b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194b5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x194b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x194b60: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x194b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b64: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x194b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194b68: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x194b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b6c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x194b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x194b70: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x194b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x194b74: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x194b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x194b78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194b7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194b80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194b84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194b88: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x194b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x194b8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x194B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B9Cu;
            // 0x194ba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194BA4u;
}
