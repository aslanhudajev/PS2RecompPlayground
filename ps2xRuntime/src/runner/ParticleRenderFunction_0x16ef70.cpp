#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ParticleRenderFunction
// Address: 0x16ef70 - 0x16f214
void ParticleRenderFunction_0x16ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ParticleRenderFunction_0x16ef70");
#endif

    ctx->pc = 0x16ef70u;

    // 0x16ef70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16ef74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16ef74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16ef78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ef7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16ef80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16ef84: 0xac204ce8  sw          $zero, 0x4CE8($at)
    ctx->pc = 0x16ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19688), GPR_U32(ctx, 0));
    // 0x16ef88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16ef8c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x16EF8Cu;
    {
        const bool branch_taken_0x16ef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF8Cu;
            // 0x16ef90: 0x8c314cf0  lw          $s1, 0x4CF0($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef8c) {
            ctx->pc = 0x16F160u;
            goto label_16f160;
        }
    }
    ctx->pc = 0x16EF94u;
    // 0x16ef94: 0x0  nop
    ctx->pc = 0x16ef94u;
    // NOP
label_16ef98:
    // 0x16ef98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16ef9c: 0xc05c00c  jal         func_170030
    ctx->pc = 0x16EF9Cu;
    SET_GPR_U32(ctx, 31, 0x16EFA4u);
    ctx->pc = 0x16EFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF9Cu;
            // 0x16efa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFA4u; }
        if (ctx->pc != 0x16EFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFA4u; }
        if (ctx->pc != 0x16EFA4u) { return; }
    }
    ctx->pc = 0x16EFA4u;
    // 0x16efa4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x16efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16efa8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x16efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x16efac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16efb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16efb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16efb4: 0x3c03491c  lui         $v1, 0x491C
    ctx->pc = 0x16efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18716 << 16));
    // 0x16efb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16efb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16efbc: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x16efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16efc0: 0x24849500  addiu       $a0, $a0, -0x6B00
    ctx->pc = 0x16efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939904));
    // 0x16efc4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x16efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16efc8: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x16efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16efcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16efccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16efd0: 0x3462a540  ori         $v0, $v1, 0xA540
    ctx->pc = 0x16efd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)42304u)));
    // 0x16efd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16efd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16efd8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x16efd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16efdc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x16efdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x16efe0: 0x8c224ce8  lw          $v0, 0x4CE8($at)
    ctx->pc = 0x16efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16efe4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16efe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16efe8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x16efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x16efec: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x16efecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x16eff0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16eff4: 0xc05bca4  jal         func_16F290
    ctx->pc = 0x16EFF4u;
    SET_GPR_U32(ctx, 31, 0x16EFFCu);
    ctx->pc = 0x16EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EFF4u;
            // 0x16eff8: 0x46002340  add.s       $f13, $f4, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F290u;
    if (runtime->hasFunction(0x16F290u)) {
        auto targetFn = runtime->lookupFunction(0x16F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFFCu; }
        if (ctx->pc != 0x16EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x16f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EFFCu; }
        if (ctx->pc != 0x16EFFCu) { return; }
    }
    ctx->pc = 0x16EFFCu;
    // 0x16effc: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x16effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16f000: 0x3c02491c  lui         $v0, 0x491C
    ctx->pc = 0x16f000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18716 << 16));
    // 0x16f004: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x16f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f008: 0x3442a540  ori         $v0, $v0, 0xA540
    ctx->pc = 0x16f008u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42304u)));
    // 0x16f00c: 0xc6030014  lwc1        $f3, 0x14($s0)
    ctx->pc = 0x16f00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16f010: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x16f010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x16f014: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f018: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f01c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x16f01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16f020: 0x24639500  addiu       $v1, $v1, -0x6B00
    ctx->pc = 0x16f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939904));
    // 0x16f024: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x16f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16f028: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x16f028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x16f02c: 0x8c224ce8  lw          $v0, 0x4CE8($at)
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f030: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x16f030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f034: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16f038: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16f038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16f03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f040: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16f044: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x16f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f048: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x16f048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x16f04c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x16f04cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x16f050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16f050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16f054: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16f054u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16f058: 0xc6260014  lwc1        $f6, 0x14($s1)
    ctx->pc = 0x16f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x16f05c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x16f05cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x16f060: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16f060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16f064: 0x46061b01  sub.s       $f12, $f3, $f6
    ctx->pc = 0x16f064u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x16f068: 0xc05bca4  jal         func_16F290
    ctx->pc = 0x16F068u;
    SET_GPR_U32(ctx, 31, 0x16F070u);
    ctx->pc = 0x16F06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F068u;
            // 0x16f06c: 0x46060341  sub.s       $f13, $f0, $f6 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F290u;
    if (runtime->hasFunction(0x16F290u)) {
        auto targetFn = runtime->lookupFunction(0x16F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F070u; }
        if (ctx->pc != 0x16F070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x16f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F070u; }
        if (ctx->pc != 0x16F070u) { return; }
    }
    ctx->pc = 0x16F070u;
    // 0x16f070: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f074: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x16f074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x16f078: 0x8c234ce8  lw          $v1, 0x4CE8($at)
    ctx->pc = 0x16f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f07c: 0x24425500  addiu       $v0, $v0, 0x5500
    ctx->pc = 0x16f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
    // 0x16f080: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f084: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x16f084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16f088: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x16f088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x16f08c: 0xc05bc98  jal         func_16F260
    ctx->pc = 0x16F08Cu;
    SET_GPR_U32(ctx, 31, 0x16F094u);
    ctx->pc = 0x16F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F08Cu;
            // 0x16f090: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F260u;
    if (runtime->hasFunction(0x16F260u)) {
        auto targetFn = runtime->lookupFunction(0x16F260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F094u; }
        if (ctx->pc != 0x16F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x16f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F094u; }
        if (ctx->pc != 0x16F094u) { return; }
    }
    ctx->pc = 0x16F094u;
    // 0x16f094: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f098: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x16f098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x16f09c: 0x8c274ce8  lw          $a3, 0x4CE8($at)
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f0a0: 0x24c65500  addiu       $a2, $a2, 0x5500
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21760));
    // 0x16f0a4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x16f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f0a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x16f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16f0ac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x16f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16f0b0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16f0b4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x16f0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x16f0b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16f0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16f0bc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x16f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16f0c0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x16f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x16f0c4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x16f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x16f0c8: 0xc05bc98  jal         func_16F260
    ctx->pc = 0x16F0C8u;
    SET_GPR_U32(ctx, 31, 0x16F0D0u);
    ctx->pc = 0x16F0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F0C8u;
            // 0x16f0cc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F260u;
    if (runtime->hasFunction(0x16F260u)) {
        auto targetFn = runtime->lookupFunction(0x16F260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F0D0u; }
        if (ctx->pc != 0x16F0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x16f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F0D0u; }
        if (ctx->pc != 0x16F0D0u) { return; }
    }
    ctx->pc = 0x16F0D0u;
    // 0x16f0d0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x16f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f0d4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x16f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x16f0d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16f0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16f0dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x16f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x16f0e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f0e4: 0x0  nop
    ctx->pc = 0x16f0e4u;
    // NOP
    // 0x16f0e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16f0e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x16f0ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16f0ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f0f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x16F0F0u;
    {
        const bool branch_taken_0x16f0f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f0f0) {
            ctx->pc = 0x16F108u;
            goto label_16f108;
        }
    }
    ctx->pc = 0x16F0F8u;
    // 0x16f0f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16f0f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16f0fc: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16f0fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16f100: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F100u;
    {
        const bool branch_taken_0x16f100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f100) {
            ctx->pc = 0x16F120u;
            goto label_16f120;
        }
    }
    ctx->pc = 0x16F108u;
label_16f108:
    // 0x16f108: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16f108u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16f10c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16f110: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16f110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16f114: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x16f114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16f118: 0x0  nop
    ctx->pc = 0x16f118u;
    // NOP
    // 0x16f11c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x16f11cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
label_16f120:
    // 0x16f120: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f124: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16f128: 0x8c234ce8  lw          $v1, 0x4CE8($at)
    ctx->pc = 0x16f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f12c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x16f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x16f130: 0x24424d00  addiu       $v0, $v0, 0x4D00
    ctx->pc = 0x16f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19712));
    // 0x16f134: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16f134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f138: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16f138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f13c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f140: 0xc05bc90  jal         func_16F240
    ctx->pc = 0x16F140u;
    SET_GPR_U32(ctx, 31, 0x16F148u);
    ctx->pc = 0x16F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F140u;
            // 0x16f144: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F240u;
    if (runtime->hasFunction(0x16F240u)) {
        auto targetFn = runtime->lookupFunction(0x16F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F148u; }
        if (ctx->pc != 0x16F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x16f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F148u; }
        if (ctx->pc != 0x16F148u) { return; }
    }
    ctx->pc = 0x16F148u;
    // 0x16f148: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f14c: 0x8c224ce8  lw          $v0, 0x4CE8($at)
    ctx->pc = 0x16f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f154: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f158: 0xac224ce8  sw          $v0, 0x4CE8($at)
    ctx->pc = 0x16f158u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19688), GPR_U32(ctx, 2));
    // 0x16f15c: 0x8e310020  lw          $s1, 0x20($s1)
    ctx->pc = 0x16f15cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_16f160:
    // 0x16f160: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F160u;
    {
        const bool branch_taken_0x16f160 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F160u;
            // 0x16f164: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f160) {
            ctx->pc = 0x16F178u;
            goto label_16f178;
        }
    }
    ctx->pc = 0x16F168u;
    // 0x16f168: 0x8c224ce8  lw          $v0, 0x4CE8($at)
    ctx->pc = 0x16f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f16c: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x16f16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x16f170: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x16F170u;
    {
        const bool branch_taken_0x16f170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f170) {
            ctx->pc = 0x16EF98u;
            goto label_16ef98;
        }
    }
    ctx->pc = 0x16F178u;
label_16f178:
    // 0x16f178: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f17c: 0x8c274ce8  lw          $a3, 0x4CE8($at)
    ctx->pc = 0x16f17cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f180: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x16f184: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f188: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x16f18c: 0xc059e60  jal         func_167980
    ctx->pc = 0x16F18Cu;
    SET_GPR_U32(ctx, 31, 0x16F194u);
    ctx->pc = 0x16F190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F18Cu;
            // 0x16f190: 0x24c61170  addiu       $a2, $a2, 0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F194u; }
        if (ctx->pc != 0x16F194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F194u; }
        if (ctx->pc != 0x16F194u) { return; }
    }
    ctx->pc = 0x16F194u;
    // 0x16f194: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f198: 0x8c234ce8  lw          $v1, 0x4CE8($at)
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f19c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16F19Cu;
    {
        const bool branch_taken_0x16f19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f19c) {
            ctx->pc = 0x16F200u;
            goto label_16f200;
        }
    }
    ctx->pc = 0x16F1A4u;
    // 0x16f1a4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x16f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x16f1a8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x16f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x16f1ac: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x16f1b0: 0x24634d00  addiu       $v1, $v1, 0x4D00
    ctx->pc = 0x16f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19712));
    // 0x16f1b4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x16f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x16f1b8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x16f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16f1bc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x16f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x16f1c0: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x16f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x16f1c4: 0x24425500  addiu       $v0, $v0, 0x5500
    ctx->pc = 0x16f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
    // 0x16f1c8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x16F1C8u;
    SET_GPR_U32(ctx, 31, 0x16F1D0u);
    ctx->pc = 0x16F1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1C8u;
            // 0x16f1cc: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1D0u; }
        if (ctx->pc != 0x16F1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1D0u; }
        if (ctx->pc != 0x16F1D0u) { return; }
    }
    ctx->pc = 0x16F1D0u;
    // 0x16f1d0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x16f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x16f1d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16f1d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f1dc: 0xc05bc8c  jal         func_16F230
    ctx->pc = 0x16F1DCu;
    SET_GPR_U32(ctx, 31, 0x16F1E4u);
    ctx->pc = 0x16F1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1DCu;
            // 0x16f1e0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F230u;
    if (runtime->hasFunction(0x16F230u)) {
        auto targetFn = runtime->lookupFunction(0x16F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1E4u; }
        if (ctx->pc != 0x16F1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x16f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1E4u; }
        if (ctx->pc != 0x16F1E4u) { return; }
    }
    ctx->pc = 0x16F1E4u;
    // 0x16f1e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f1e8: 0x8c254ce8  lw          $a1, 0x4CE8($at)
    ctx->pc = 0x16f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19688)));
    // 0x16f1ec: 0xc05bc88  jal         func_16F220
    ctx->pc = 0x16F1ECu;
    SET_GPR_U32(ctx, 31, 0x16F1F4u);
    ctx->pc = 0x16F1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1ECu;
            // 0x16f1f0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F220u;
    if (runtime->hasFunction(0x16F220u)) {
        auto targetFn = runtime->lookupFunction(0x16F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1F4u; }
        if (ctx->pc != 0x16F1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x16f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1F4u; }
        if (ctx->pc != 0x16F1F4u) { return; }
    }
    ctx->pc = 0x16F1F4u;
    // 0x16f1f4: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x16F1F4u;
    SET_GPR_U32(ctx, 31, 0x16F1FCu);
    ctx->pc = 0x16F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F1F4u;
            // 0x16f1f8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1FCu; }
        if (ctx->pc != 0x16F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F1FCu; }
        if (ctx->pc != 0x16F1FCu) { return; }
    }
    ctx->pc = 0x16F1FCu;
    // 0x16f1fc: 0x0  nop
    ctx->pc = 0x16f1fcu;
    // NOP
label_16f200:
    // 0x16f200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16f200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F20Cu;
            // 0x16f210: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF98u: goto label_16ef98;
            case 0x16F108u: goto label_16f108;
            case 0x16F120u: goto label_16f120;
            case 0x16F160u: goto label_16f160;
            case 0x16F178u: goto label_16f178;
            case 0x16F200u: goto label_16f200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F214u;
}
