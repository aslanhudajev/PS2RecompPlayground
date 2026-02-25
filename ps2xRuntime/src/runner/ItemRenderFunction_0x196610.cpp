#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemRenderFunction
// Address: 0x196610 - 0x196d44
void ItemRenderFunction_0x196610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemRenderFunction_0x196610");
#endif

    ctx->pc = 0x196610u;

    // 0x196610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x196610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x196614: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19661c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196624: 0xac201600  sw          $zero, 0x1600($at)
    ctx->pc = 0x196624u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5632), GPR_U32(ctx, 0));
    // 0x196628: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x19662c: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x19662Cu;
    {
        const bool branch_taken_0x19662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19662Cu;
            // 0x196630: 0x8c311608  lw          $s1, 0x1608($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19662c) {
            ctx->pc = 0x196CB0u;
            goto label_196cb0;
        }
    }
    ctx->pc = 0x196634u;
    // 0x196634: 0x0  nop
    ctx->pc = 0x196634u;
    // NOP
label_196638:
    // 0x196638: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x196638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19663c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196640: 0x10830145  beq         $a0, $v1, . + 4 + (0x145 << 2)
    ctx->pc = 0x196640u;
    {
        const bool branch_taken_0x196640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x196644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196640u;
            // 0x196644: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196640) {
            ctx->pc = 0x196B58u;
            goto label_196b58;
        }
    }
    ctx->pc = 0x196648u;
    // 0x196648: 0x108300f9  beq         $a0, $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x196648u;
    {
        const bool branch_taken_0x196648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x196648) {
            ctx->pc = 0x196A30u;
            goto label_196a30;
        }
    }
    ctx->pc = 0x196650u;
    // 0x196650: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196654: 0x108300a4  beq         $a0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x196654u;
    {
        const bool branch_taken_0x196654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x196658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196654u;
            // 0x196658: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196654) {
            ctx->pc = 0x1968E8u;
            goto label_1968e8;
        }
    }
    ctx->pc = 0x19665Cu;
    // 0x19665c: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x19665Cu;
    {
        const bool branch_taken_0x19665c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19665c) {
            ctx->pc = 0x1967C0u;
            goto label_1967c0;
        }
    }
    ctx->pc = 0x196664u;
    // 0x196664: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196664u;
    {
        const bool branch_taken_0x196664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x196664) {
            ctx->pc = 0x196678u;
            goto label_196678;
        }
    }
    ctx->pc = 0x19666Cu;
    // 0x19666c: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x19666Cu;
    {
        const bool branch_taken_0x19666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19666c) {
            ctx->pc = 0x196C98u;
            goto label_196c98;
        }
    }
    ctx->pc = 0x196674u;
    // 0x196674: 0x0  nop
    ctx->pc = 0x196674u;
    // NOP
label_196678:
    // 0x196678: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x196678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19667c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x19667Cu;
    SET_GPR_U32(ctx, 31, 0x196684u);
    ctx->pc = 0x196680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19667Cu;
            // 0x196680: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196684u; }
        if (ctx->pc != 0x196684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196684u; }
        if (ctx->pc != 0x196684u) { return; }
    }
    ctx->pc = 0x196684u;
    // 0x196684: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x196684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196688: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x19668c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196694: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x196694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x196698: 0x8c241600  lw          $a0, 0x1600($at)
    ctx->pc = 0x196698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x19669c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19669cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1966a0: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x1966a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1966a4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1966a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1966a8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1966a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1966ac: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x1966acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x1966b0: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x1966b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x1966b4: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x1966b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x1966b8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1966b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1966bc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1966bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1966c0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1966c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1966c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1966c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1966c8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1966c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1966cc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1966d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1966d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1966d4: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x1966d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1966d8: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x1966D8u;
    SET_GPR_U32(ctx, 31, 0x1966E0u);
    ctx->pc = 0x1966DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1966D8u;
            // 0x1966dc: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966E0u; }
        if (ctx->pc != 0x1966E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966E0u; }
        if (ctx->pc != 0x1966E0u) { return; }
    }
    ctx->pc = 0x1966E0u;
    // 0x1966e0: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x1966e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1966e4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1966e8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1966e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1966ec: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1966ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1966f0: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x1966f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1966f4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1966f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1966f8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1966f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1966fc: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x1966fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196700: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x196700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x196704: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x196704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x196708: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x196708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x19670c: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x19670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x196710: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x196710u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x196714: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x196714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196718: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x196718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19671c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19671cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196720: 0x8c221600  lw          $v0, 0x1600($at)
    ctx->pc = 0x196720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196724: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x196728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19672c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x196730: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x196730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x196734: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196738: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x196738u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x19673c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x19673cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x196740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196744: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x196744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x196748: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19674c: 0x46032301  sub.s       $f12, $f4, $f3
    ctx->pc = 0x19674cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x196750: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196750u;
    SET_GPR_U32(ctx, 31, 0x196758u);
    ctx->pc = 0x196754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196750u;
            // 0x196754: 0x46030341  sub.s       $f13, $f0, $f3 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196758u; }
        if (ctx->pc != 0x196758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196758u; }
        if (ctx->pc != 0x196758u) { return; }
    }
    ctx->pc = 0x196758u;
    // 0x196758: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x19675c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x196760: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196764: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x196764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x196768: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19676c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x19676cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196770: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x196774: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x196774u;
    SET_GPR_U32(ctx, 31, 0x19677Cu);
    ctx->pc = 0x196778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196774u;
            // 0x196778: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19677Cu; }
        if (ctx->pc != 0x19677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19677Cu; }
        if (ctx->pc != 0x19677Cu) { return; }
    }
    ctx->pc = 0x19677Cu;
    // 0x19677c: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x19677cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196780: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x196784: 0x8c271600  lw          $a3, 0x1600($at)
    ctx->pc = 0x196784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196788: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x196788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x19678c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x196790: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x196790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x196794: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x196794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196798: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x196798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19679c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x19679cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1967a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1967a4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1967a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1967a8: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1967a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1967ac: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1967acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1967b0: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x1967B0u;
    SET_GPR_U32(ctx, 31, 0x1967B8u);
    ctx->pc = 0x1967B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967B0u;
            // 0x1967b4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967B8u; }
        if (ctx->pc != 0x1967B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967B8u; }
        if (ctx->pc != 0x1967B8u) { return; }
    }
    ctx->pc = 0x1967B8u;
    // 0x1967b8: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x1967B8u;
    {
        const bool branch_taken_0x1967b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1967b8) {
            ctx->pc = 0x196C98u;
            goto label_196c98;
        }
    }
    ctx->pc = 0x1967C0u;
label_1967c0:
    // 0x1967c0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1967c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1967c4: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1967C4u;
    SET_GPR_U32(ctx, 31, 0x1967CCu);
    ctx->pc = 0x1967C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967C4u;
            // 0x1967c8: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967CCu; }
        if (ctx->pc != 0x1967CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967CCu; }
        if (ctx->pc != 0x1967CCu) { return; }
    }
    ctx->pc = 0x1967CCu;
    // 0x1967cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1967ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1967d0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1967d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1967d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1967d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1967d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967dc: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x1967dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1967e0: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1967e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1967e4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1967e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1967e8: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x1967ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1967ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1967f0: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x1967f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x1967f4: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x1967f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x1967f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1967f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1967fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1967fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196800: 0x8c221600  lw          $v0, 0x1600($at)
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196804: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x196804u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x196808: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x196808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19680c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x19680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196810: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196810u;
    SET_GPR_U32(ctx, 31, 0x196818u);
    ctx->pc = 0x196814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196810u;
            // 0x196814: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196818u; }
        if (ctx->pc != 0x196818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196818u; }
        if (ctx->pc != 0x196818u) { return; }
    }
    ctx->pc = 0x196818u;
    // 0x196818: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x196818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19681c: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x19681cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x196820: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x196820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196824: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x196824u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x196828: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x196828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19682c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196830: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x196830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196834: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196838: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x196838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19683c: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x19683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196840: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x196840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x196844: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x196844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x196848: 0x8c221600  lw          $v0, 0x1600($at)
    ctx->pc = 0x196848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x19684c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x19684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196850: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x196850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x196854: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19685c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x196860: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x196860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196864: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x196864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x196868: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x196868u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x19686c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19686cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196870: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x196870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x196874: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x196874u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x196878: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196878u;
    SET_GPR_U32(ctx, 31, 0x196880u);
    ctx->pc = 0x19687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196878u;
            // 0x19687c: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196880u; }
        if (ctx->pc != 0x196880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196880u; }
        if (ctx->pc != 0x196880u) { return; }
    }
    ctx->pc = 0x196880u;
    // 0x196880: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196884: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x196884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x196888: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x19688c: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x19688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x196890: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x196894: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x196894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196898: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19689c: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x19689Cu;
    SET_GPR_U32(ctx, 31, 0x1968A4u);
    ctx->pc = 0x1968A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19689Cu;
            // 0x1968a0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968A4u; }
        if (ctx->pc != 0x1968A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968A4u; }
        if (ctx->pc != 0x1968A4u) { return; }
    }
    ctx->pc = 0x1968A4u;
    // 0x1968a4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1968a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1968a8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x1968a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x1968ac: 0x8c271600  lw          $a3, 0x1600($at)
    ctx->pc = 0x1968acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x1968b0: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x1968b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x1968b4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1968b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1968b8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1968b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1968bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1968bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1968c0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1968c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1968c4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1968c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1968c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1968cc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1968ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1968d0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x1968d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1968d4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1968d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1968d8: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x1968D8u;
    SET_GPR_U32(ctx, 31, 0x1968E0u);
    ctx->pc = 0x1968DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1968D8u;
            // 0x1968dc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968E0u; }
        if (ctx->pc != 0x1968E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968E0u; }
        if (ctx->pc != 0x1968E0u) { return; }
    }
    ctx->pc = 0x1968E0u;
    // 0x1968e0: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1968E0u;
    {
        const bool branch_taken_0x1968e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1968e0) {
            ctx->pc = 0x196C98u;
            goto label_196c98;
        }
    }
    ctx->pc = 0x1968E8u;
label_1968e8:
    // 0x1968e8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1968ec: 0xc05c00c  jal         func_170030
    ctx->pc = 0x1968ECu;
    SET_GPR_U32(ctx, 31, 0x1968F4u);
    ctx->pc = 0x1968F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1968ECu;
            // 0x1968f0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968F4u; }
        if (ctx->pc != 0x1968F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968F4u; }
        if (ctx->pc != 0x1968F4u) { return; }
    }
    ctx->pc = 0x1968F4u;
    // 0x1968f4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1968f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1968f8: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1968fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1968fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196904: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x196904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x196908: 0x8c241600  lw          $a0, 0x1600($at)
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x19690c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x19690cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x196910: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x196910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196914: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x196914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196918: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x196918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19691c: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x19691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196920: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x196920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x196924: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x196924u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x196928: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x196928u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x19692c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19692cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196930: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x196930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196938: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x196938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x19693c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x19693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196940: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x196940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196944: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x196944u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x196948: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196948u;
    SET_GPR_U32(ctx, 31, 0x196950u);
    ctx->pc = 0x19694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196948u;
            // 0x19694c: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196950u; }
        if (ctx->pc != 0x196950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196950u; }
        if (ctx->pc != 0x196950u) { return; }
    }
    ctx->pc = 0x196950u;
    // 0x196950: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x196950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x196954: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x196954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x196958: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x196958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19695c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x19695cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196960: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x196960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196964: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196968: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x196968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19696c: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x19696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196970: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x196970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x196974: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x196974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x196978: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x196978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x19697c: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x196980: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x196980u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x196984: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x196984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196988: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x196988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19698c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19698cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196990: 0x8c221600  lw          $v0, 0x1600($at)
    ctx->pc = 0x196990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196994: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x196998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19699c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1969a0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1969a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1969a4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1969a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1969a8: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x1969a8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x1969ac: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x1969acu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x1969b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1969b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1969b4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1969b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1969b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1969b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1969bc: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x1969bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1969c0: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x1969C0u;
    SET_GPR_U32(ctx, 31, 0x1969C8u);
    ctx->pc = 0x1969C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1969C0u;
            // 0x1969c4: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969C8u; }
        if (ctx->pc != 0x1969C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969C8u; }
        if (ctx->pc != 0x1969C8u) { return; }
    }
    ctx->pc = 0x1969C8u;
    // 0x1969c8: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1969c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1969cc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1969ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1969d0: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x1969d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x1969d4: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x1969d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x1969d8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1969dc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1969dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1969e0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1969e4: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x1969E4u;
    SET_GPR_U32(ctx, 31, 0x1969ECu);
    ctx->pc = 0x1969E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1969E4u;
            // 0x1969e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969ECu; }
        if (ctx->pc != 0x1969ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1969ECu; }
        if (ctx->pc != 0x1969ECu) { return; }
    }
    ctx->pc = 0x1969ECu;
    // 0x1969ec: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x1969ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x1969f0: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x1969f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x1969f4: 0x8c271600  lw          $a3, 0x1600($at)
    ctx->pc = 0x1969f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x1969f8: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x1969f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x1969fc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1969fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x196a00: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x196a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x196a04: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x196a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196a08: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x196a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x196a0c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x196a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x196a10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196a14: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x196a18: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x196a1c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x196a20: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x196A20u;
    SET_GPR_U32(ctx, 31, 0x196A28u);
    ctx->pc = 0x196A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A20u;
            // 0x196a24: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A28u; }
        if (ctx->pc != 0x196A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A28u; }
        if (ctx->pc != 0x196A28u) { return; }
    }
    ctx->pc = 0x196A28u;
    // 0x196a28: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x196A28u;
    {
        const bool branch_taken_0x196a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a28) {
            ctx->pc = 0x196C98u;
            goto label_196c98;
        }
    }
    ctx->pc = 0x196A30u;
label_196a30:
    // 0x196a30: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x196a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196a34: 0xc05c00c  jal         func_170030
    ctx->pc = 0x196A34u;
    SET_GPR_U32(ctx, 31, 0x196A3Cu);
    ctx->pc = 0x196A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A34u;
            // 0x196a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A3Cu; }
        if (ctx->pc != 0x196A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A3Cu; }
        if (ctx->pc != 0x196A3Cu) { return; }
    }
    ctx->pc = 0x196A3Cu;
    // 0x196a3c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x196a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196a40: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x196a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196a44: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x196a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a4c: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x196a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196a50: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196a54: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x196a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196a58: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196a5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x196a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x196a60: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x196a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x196a64: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x196a64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x196a68: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x196a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196a6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196a70: 0x8c221600  lw          $v0, 0x1600($at)
    ctx->pc = 0x196a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196a74: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x196a74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x196a78: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x196a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x196a7c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x196a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196a80: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196A80u;
    SET_GPR_U32(ctx, 31, 0x196A88u);
    ctx->pc = 0x196A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A80u;
            // 0x196a84: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A88u; }
        if (ctx->pc != 0x196A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A88u; }
        if (ctx->pc != 0x196A88u) { return; }
    }
    ctx->pc = 0x196A88u;
    // 0x196a88: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x196a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196a8c: 0x3c024869  lui         $v0, 0x4869
    ctx->pc = 0x196a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18537 << 16));
    // 0x196a90: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x196a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196a94: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x196a94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1792u)));
    // 0x196a98: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x196a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196a9c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x196a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196aa0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x196aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196aa4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196aa8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x196aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196aac: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x196aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196ab0: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x196ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x196ab4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x196ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x196ab8: 0x8c221600  lw          $v0, 0x1600($at)
    ctx->pc = 0x196ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196abc: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x196abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196ac0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x196ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x196ac4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196ac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196acc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x196accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x196ad0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x196ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196ad4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x196ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x196ad8: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x196ad8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x196adc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196ae0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x196ae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x196ae4: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x196ae4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x196ae8: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196AE8u;
    SET_GPR_U32(ctx, 31, 0x196AF0u);
    ctx->pc = 0x196AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196AE8u;
            // 0x196aec: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AF0u; }
        if (ctx->pc != 0x196AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AF0u; }
        if (ctx->pc != 0x196AF0u) { return; }
    }
    ctx->pc = 0x196AF0u;
    // 0x196af0: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196af4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x196af8: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196afc: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x196afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x196b00: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x196b04: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x196b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196b08: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x196b0c: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x196B0Cu;
    SET_GPR_U32(ctx, 31, 0x196B14u);
    ctx->pc = 0x196B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B0Cu;
            // 0x196b10: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B14u; }
        if (ctx->pc != 0x196B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B14u; }
        if (ctx->pc != 0x196B14u) { return; }
    }
    ctx->pc = 0x196B14u;
    // 0x196b14: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196b18: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x196b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x196b1c: 0x8c271600  lw          $a3, 0x1600($at)
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196b20: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x196b24: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x196b28: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x196b2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x196b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196b30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x196b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x196b34: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x196b38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196b3c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x196b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x196b40: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x196b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x196b44: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x196b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x196b48: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x196B48u;
    SET_GPR_U32(ctx, 31, 0x196B50u);
    ctx->pc = 0x196B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B48u;
            // 0x196b4c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B50u; }
        if (ctx->pc != 0x196B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B50u; }
        if (ctx->pc != 0x196B50u) { return; }
    }
    ctx->pc = 0x196B50u;
    // 0x196b50: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x196B50u;
    {
        const bool branch_taken_0x196b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196b50) {
            ctx->pc = 0x196C98u;
            goto label_196c98;
        }
    }
    ctx->pc = 0x196B58u;
label_196b58:
    // 0x196b58: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196b5c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x196B5Cu;
    SET_GPR_U32(ctx, 31, 0x196B64u);
    ctx->pc = 0x196B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B5Cu;
            // 0x196b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B64u; }
        if (ctx->pc != 0x196B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B64u; }
        if (ctx->pc != 0x196B64u) { return; }
    }
    ctx->pc = 0x196B64u;
    // 0x196b64: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x196b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x196b68: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196b6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x196b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b74: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x196b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x196b78: 0x8c241600  lw          $a0, 0x1600($at)
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196b7c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x196b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x196b80: 0xc624000c  lwc1        $f4, 0xC($s1)
    ctx->pc = 0x196b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196b84: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196b88: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x196b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x196b8c: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x196b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196b90: 0x3c02486a  lui         $v0, 0x486A
    ctx->pc = 0x196b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18538 << 16));
    // 0x196b94: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x196b94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x196b98: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x196b98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x196b9c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x196b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196ba0: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x196ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196ba4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196ba8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x196ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x196bac: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x196bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196bb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x196bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196bb4: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x196bb4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x196bb8: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196BB8u;
    SET_GPR_U32(ctx, 31, 0x196BC0u);
    ctx->pc = 0x196BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196BB8u;
            // 0x196bbc: 0x46020341  sub.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BC0u; }
        if (ctx->pc != 0x196BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BC0u; }
        if (ctx->pc != 0x196BC0u) { return; }
    }
    ctx->pc = 0x196BC0u;
    // 0x196bc0: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x196bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x196bc4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x196bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x196bc8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x196bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196bcc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196bd0: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x196bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x196bd4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196bd8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x196bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196bdc: 0x24639610  addiu       $v1, $v1, -0x69F0
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940176));
    // 0x196be0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x196be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x196be4: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x196be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x196be8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x196be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x196bec: 0x3c02486a  lui         $v0, 0x486A
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18538 << 16));
    // 0x196bf0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x196bf0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x196bf4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x196bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196bf8: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x196bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196bfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196c00: 0x8c221600  lw          $v0, 0x1600($at)
    ctx->pc = 0x196c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196c04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x196c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x196c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196c0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x196c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x196c10: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x196c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x196c14: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x196c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196c18: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x196c18u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x196c1c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x196c1cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x196c20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196c24: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x196c24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x196c28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x196c2c: 0x46041b00  add.s       $f12, $f3, $f4
    ctx->pc = 0x196c2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x196c30: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x196C30u;
    SET_GPR_U32(ctx, 31, 0x196C38u);
    ctx->pc = 0x196C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C30u;
            // 0x196c34: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196DA0u;
    if (runtime->hasFunction(0x196DA0u)) {
        auto targetFn = runtime->lookupFunction(0x196DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C38u; }
        if (ctx->pc != 0x196C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C38u; }
        if (ctx->pc != 0x196C38u) { return; }
    }
    ctx->pc = 0x196C38u;
    // 0x196c38: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196c3c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x196c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x196c40: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196c44: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x196c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x196c48: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x196c4c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x196c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196c50: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x196c54: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x196C54u;
    SET_GPR_U32(ctx, 31, 0x196C5Cu);
    ctx->pc = 0x196C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C54u;
            // 0x196c58: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C5Cu; }
        if (ctx->pc != 0x196C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C5Cu; }
        if (ctx->pc != 0x196C5Cu) { return; }
    }
    ctx->pc = 0x196C5Cu;
    // 0x196c5c: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196c60: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x196c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x196c64: 0x8c271600  lw          $a3, 0x1600($at)
    ctx->pc = 0x196c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196c68: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x196c6c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x196c70: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x196c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x196c74: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x196c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196c78: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x196c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x196c7c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x196c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x196c80: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196c84: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x196c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x196c88: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x196c8c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x196c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x196c90: 0xc065b5c  jal         func_196D70
    ctx->pc = 0x196C90u;
    SET_GPR_U32(ctx, 31, 0x196C98u);
    ctx->pc = 0x196C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C90u;
            // 0x196c94: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D70u;
    if (runtime->hasFunction(0x196D70u)) {
        auto targetFn = runtime->lookupFunction(0x196D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C98u; }
        if (ctx->pc != 0x196C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x196d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C98u; }
        if (ctx->pc != 0x196C98u) { return; }
    }
    ctx->pc = 0x196C98u;
label_196c98:
    // 0x196c98: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196c9c: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196ca0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x196ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196ca4: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196ca8: 0xac231600  sw          $v1, 0x1600($at)
    ctx->pc = 0x196ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5632), GPR_U32(ctx, 3));
    // 0x196cac: 0x8e310034  lw          $s1, 0x34($s1)
    ctx->pc = 0x196cacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_196cb0:
    // 0x196cb0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x196CB0u;
    {
        const bool branch_taken_0x196cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196CB0u;
            // 0x196cb4: 0x3c010042  lui         $at, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cb0) {
            ctx->pc = 0x196CC8u;
            goto label_196cc8;
        }
    }
    ctx->pc = 0x196CB8u;
    // 0x196cb8: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196cbc: 0x28630400  slti        $v1, $v1, 0x400
    ctx->pc = 0x196cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x196cc0: 0x1460fe5d  bnez        $v1, . + 4 + (-0x1A3 << 2)
    ctx->pc = 0x196CC0u;
    {
        const bool branch_taken_0x196cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196cc0) {
            ctx->pc = 0x196638u;
            goto label_196638;
        }
    }
    ctx->pc = 0x196CC8u;
label_196cc8:
    // 0x196cc8: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196ccc: 0x8c231600  lw          $v1, 0x1600($at)
    ctx->pc = 0x196cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196cd0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x196CD0u;
    {
        const bool branch_taken_0x196cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196cd0) {
            ctx->pc = 0x196D30u;
            goto label_196d30;
        }
    }
    ctx->pc = 0x196CD8u;
    // 0x196cd8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x196cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x196cdc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x196cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x196ce0: 0x24429610  addiu       $v0, $v0, -0x69F0
    ctx->pc = 0x196ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940176));
    // 0x196ce4: 0x2463a6d0  addiu       $v1, $v1, -0x5930
    ctx->pc = 0x196ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944464));
    // 0x196ce8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x196ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x196cec: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x196cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196cf0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x196cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x196cf4: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x196cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x196cf8: 0x24421610  addiu       $v0, $v0, 0x1610
    ctx->pc = 0x196cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x196cfc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x196CFCu;
    SET_GPR_U32(ctx, 31, 0x196D04u);
    ctx->pc = 0x196D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CFCu;
            // 0x196d00: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D04u; }
        if (ctx->pc != 0x196D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D04u; }
        if (ctx->pc != 0x196D04u) { return; }
    }
    ctx->pc = 0x196D04u;
    // 0x196d04: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x196d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x196d08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x196d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196d10: 0xc065b58  jal         func_196D60
    ctx->pc = 0x196D10u;
    SET_GPR_U32(ctx, 31, 0x196D18u);
    ctx->pc = 0x196D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D10u;
            // 0x196d14: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D60u;
    if (runtime->hasFunction(0x196D60u)) {
        auto targetFn = runtime->lookupFunction(0x196D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D18u; }
        if (ctx->pc != 0x196D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x196d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D18u; }
        if (ctx->pc != 0x196D18u) { return; }
    }
    ctx->pc = 0x196D18u;
    // 0x196d18: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x196d1c: 0x8c251600  lw          $a1, 0x1600($at)
    ctx->pc = 0x196d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5632)));
    // 0x196d20: 0xc065b54  jal         func_196D50
    ctx->pc = 0x196D20u;
    SET_GPR_U32(ctx, 31, 0x196D28u);
    ctx->pc = 0x196D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D20u;
            // 0x196d24: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D50u;
    if (runtime->hasFunction(0x196D50u)) {
        auto targetFn = runtime->lookupFunction(0x196D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D28u; }
        if (ctx->pc != 0x196D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x196d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D28u; }
        if (ctx->pc != 0x196D28u) { return; }
    }
    ctx->pc = 0x196D28u;
    // 0x196d28: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x196D28u;
    SET_GPR_U32(ctx, 31, 0x196D30u);
    ctx->pc = 0x196D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D28u;
            // 0x196d2c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D30u; }
        if (ctx->pc != 0x196D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D30u; }
        if (ctx->pc != 0x196D30u) { return; }
    }
    ctx->pc = 0x196D30u;
label_196d30:
    // 0x196d30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196d34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x196D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D3Cu;
            // 0x196d40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196638u: goto label_196638;
            case 0x196678u: goto label_196678;
            case 0x1967C0u: goto label_1967c0;
            case 0x1968E8u: goto label_1968e8;
            case 0x196A30u: goto label_196a30;
            case 0x196B58u: goto label_196b58;
            case 0x196C98u: goto label_196c98;
            case 0x196CB0u: goto label_196cb0;
            case 0x196CC8u: goto label_196cc8;
            case 0x196D30u: goto label_196d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196D44u;
}
