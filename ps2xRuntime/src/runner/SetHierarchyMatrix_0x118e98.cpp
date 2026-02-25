#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetHierarchyMatrix
// Address: 0x118e98 - 0x1195e8
void SetHierarchyMatrix_0x118e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetHierarchyMatrix_0x118e98");
#endif

    ctx->pc = 0x118e98u;

label_118e98:
    // 0x118e98: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x118e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x118e9c: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x118e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x118ea0: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x118ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x118ea4: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x118ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x118ea8: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x118ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x118eac: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x118eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x118eb0: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x118eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x118eb4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x118eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x118eb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x118eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ebc: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x118ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x118ec0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x118ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ec4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x118ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x118ec8: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x118ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x118ecc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x118eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x118ed0: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x118ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x118ed4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x118ED4u;
    SET_GPR_U32(ctx, 31, 0x118EDCu);
    ctx->pc = 0x118ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118ED4u;
            // 0x118ed8: 0xafa700f4  sw          $a3, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EDCu; }
        if (ctx->pc != 0x118EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EDCu; }
        if (ctx->pc != 0x118EDCu) { return; }
    }
    ctx->pc = 0x118EDCu;
    // 0x118edc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x118edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x118ee0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x118ee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ee4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x118ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ee8: 0xc0471a4  jal         func_11C690
    ctx->pc = 0x118EE8u;
    SET_GPR_U32(ctx, 31, 0x118EF0u);
    ctx->pc = 0x118EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118EE8u;
            // 0x118eec: 0x26be0020  addiu       $fp, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C690u;
    if (runtime->hasFunction(0x11C690u)) {
        auto targetFn = runtime->lookupFunction(0x11C690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EF0u; }
        if (ctx->pc != 0x118EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMatrix_0x11c690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118EF0u; }
        if (ctx->pc != 0x118EF0u) { return; }
    }
    ctx->pc = 0x118EF0u;
    // 0x118ef0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x118ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x118ef4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x118ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ef8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x118ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x118efc: 0x24570050  addiu       $s7, $v0, 0x50
    ctx->pc = 0x118efcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x118f00: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x118f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x118f04: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x118f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x118f08: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x118F08u;
    SET_GPR_U32(ctx, 31, 0x118F10u);
    ctx->pc = 0x118F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F08u;
            // 0x118f0c: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F10u; }
        if (ctx->pc != 0x118F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F10u; }
        if (ctx->pc != 0x118F10u) { return; }
    }
    ctx->pc = 0x118F10u;
    // 0x118f10: 0x3c013ea2  lui         $at, 0x3EA2
    ctx->pc = 0x118f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16034 << 16));
    // 0x118f14: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x118f14u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)63875u)));
    // 0x118f18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x118f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118f1c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x118f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x118f20: 0xc04b9a4  jal         func_12E690
    ctx->pc = 0x118F20u;
    SET_GPR_U32(ctx, 31, 0x118F28u);
    ctx->pc = 0x118F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118F20u;
            // 0x118f24: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E690u;
    if (runtime->hasFunction(0x12E690u)) {
        auto targetFn = runtime->lookupFunction(0x12E690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F28u; }
        if (ctx->pc != 0x118F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x12e690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118F28u; }
        if (ctx->pc != 0x118F28u) { return; }
    }
    ctx->pc = 0x118F28u;
    // 0x118f28: 0x27ab00d0  addiu       $t3, $sp, 0xD0
    ctx->pc = 0x118f28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x118f2c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x118f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x118f30: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x118f30u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)4059u)));
    // 0x118f34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118f38: 0x32100fc0  andi        $s0, $s0, 0xFC0
    ctx->pc = 0x118f38u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)4032u)));
    // 0x118f3c: 0x27ac00e0  addiu       $t4, $sp, 0xE0
    ctx->pc = 0x118f3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x118f40: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x118f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x118f44: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x118f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x118f48: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x118f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x118f4c: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x118f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x118f50: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x118f50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x118f54: 0x27a800dc  addiu       $t0, $sp, 0xDC
    ctx->pc = 0x118f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x118f58: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x118f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f5c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x118f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_118f60:
    // 0x118f60: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x118f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118f64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118f68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x118f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x118f6c: 0x0  nop
    ctx->pc = 0x118f6cu;
    // NOP
    // 0x118f70: 0x4630002  bgezl       $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x118F70u;
    {
        const bool branch_taken_0x118f70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x118f70) {
            ctx->pc = 0x118F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118F70u;
            // 0x118f74: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118F7Cu;
            goto label_118f7c;
        }
    }
    ctx->pc = 0x118F78u;
    // 0x118f78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x118f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_118f7c:
    // 0x118f7c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x118f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x118f80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x118f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118f84: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x118f84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x118f88: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x118F88u;
    {
        const bool branch_taken_0x118f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x118f88) {
            ctx->pc = 0x118F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118F88u;
            // 0x118f8c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118FACu;
            goto label_118fac;
        }
    }
    ctx->pc = 0x118F90u;
    // 0x118f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x118f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118f98: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x118f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x118f9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x118f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x118fa0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x118fa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x118fa4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x118fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x118fa8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x118fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_118fac:
    // 0x118fac: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x118facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x118fb0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x118FB0u;
    {
        const bool branch_taken_0x118fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118FB0u;
            // 0x118fb4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fb0) {
            ctx->pc = 0x118F60u;
            goto label_118f60;
        }
    }
    ctx->pc = 0x118FB8u;
    // 0x118fb8: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x118fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x118fbc: 0x4be109fd  vabs.xyzw   $vf1, $vf1
    ctx->pc = 0x118fbcu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x118fc0: 0xf9810000  sqc2        $vf1, 0x0($t4)
    ctx->pc = 0x118fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x118fc4: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x118fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x118fc8: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x118fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x118fcc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x118fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118fd0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x118fd0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x118fd4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x118fd4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x118fd8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x118fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x118fdc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x118fdcu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)4059u)));
    // 0x118fe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118fe4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x118fe4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x118fe8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x118fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x118fec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x118fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x118ff0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x118ff0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x118ff4: 0xc7a500d0  lwc1        $f5, 0xD0($sp)
    ctx->pc = 0x118ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x118ff8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x118ff8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x118ffc: 0xc7a600d4  lwc1        $f6, 0xD4($sp)
    ctx->pc = 0x118ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x119000: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119004: 0xc7a700d8  lwc1        $f7, 0xD8($sp)
    ctx->pc = 0x119004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x119008: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x119008u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x11900c: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x11900cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x119010: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x119010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x119014: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x119014u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x119018: 0xe7a500d0  swc1        $f5, 0xD0($sp)
    ctx->pc = 0x119018u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x11901c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11901cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x119020: 0xe7a600d4  swc1        $f6, 0xD4($sp)
    ctx->pc = 0x119020u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x119024: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x119024u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x119028: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x119028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x11902c: 0xe7a700d8  swc1        $f7, 0xD8($sp)
    ctx->pc = 0x11902cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x119030: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x119030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x119034: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x119034u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x119038: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x119038u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x11903c: 0x2508fc90  addiu       $t0, $t0, -0x370
    ctx->pc = 0x11903cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966416));
    // 0x119040: 0xd91f0000  lqc2        $vf31, 0x0($t0)
    ctx->pc = 0x119040u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119044: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x119044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x119048: 0xd9820000  lqc2        $vf2, 0x0($t4)
    ctx->pc = 0x119048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x11904c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x11904cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x119050: 0x4bc2122a  vmul.xyz    $vf8, $vf2, $vf2
    ctx->pc = 0x119050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119054: 0x4bc00abc  vadda.xyz   $ACC, $vf0, $vf1
    ctx->pc = 0x119054u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]);
    // 0x119058: 0x4bd4033c  vmove.xyz   $vf20, $vf0
    ctx->pc = 0x119058u;
    ctx->vu0_vf[20] = ctx->vu0_vf[0];
    // 0x11905c: 0x4bc3092a  vmul.xyz    $vf4, $vf1, $vf3
    ctx->pc = 0x11905cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x119060: 0x4bc8126a  vmul.xyz    $vf9, $vf2, $vf8
    ctx->pc = 0x119060u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x119064: 0x4bd5033c  vmove.xyz   $vf21, $vf0
    ctx->pc = 0x119064u;
    ctx->vu0_vf[21] = ctx->vu0_vf[0];
    // 0x119068: 0x4bd6033c  vmove.xyz   $vf22, $vf0
    ctx->pc = 0x119068u;
    ctx->vu0_vf[22] = ctx->vu0_vf[0];
    // 0x11906c: 0x4bdf20bf  vmaddaw.xyz $ACC, $vf4, $vf31w
    ctx->pc = 0x11906cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119070: 0x4bc3216a  vmul.xyz    $vf5, $vf4, $vf3
    ctx->pc = 0x119070u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x119074: 0x4bc84aaa  vmul.xyz    $vf10, $vf9, $vf8
    ctx->pc = 0x119074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x119078: 0x4bdf28be  vmaddaz.xyz $ACC, $vf5, $vf31z
    ctx->pc = 0x119078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11907c: 0x4bc329aa  vmul.xyz    $vf6, $vf5, $vf3
    ctx->pc = 0x11907cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x119080: 0x4bc852ea  vmul.xyz    $vf11, $vf10, $vf8
    ctx->pc = 0x119080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x119084: 0x4bdf30bd  vmadday.xyz $ACC, $vf6, $vf31y
    ctx->pc = 0x119084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119088: 0x4bc331ea  vmul.xyz    $vf7, $vf6, $vf3
    ctx->pc = 0x119088u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x11908c: 0x4bc85b2a  vmul.xyz    $vf12, $vf11, $vf8
    ctx->pc = 0x11908cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x119090: 0x4bdf3b48  vmaddx.xyz  $vf13, $vf7, $vf31x
    ctx->pc = 0x119090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119094: 0x4bc012bc  vadda.xyz   $ACC, $vf0, $vf2
    ctx->pc = 0x119094u;
    ctx->vu0_acc = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[0]);
    // 0x119098: 0x4bdf48bf  vmaddaw.xyz $ACC, $vf9, $vf31w
    ctx->pc = 0x119098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11909c: 0x4bdf50be  vmaddaz.xyz $ACC, $vf10, $vf31z
    ctx->pc = 0x11909cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1190a0: 0x4bdf58bd  vmadday.xyz $ACC, $vf11, $vf31y
    ctx->pc = 0x1190a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1190a4: 0x4bdf6388  vmaddx.xyz  $vf14, $vf12, $vf31x
    ctx->pc = 0x1190a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1190a8: 0x4b146b3c  vmove.x     $vf20, $vf13
    ctx->pc = 0x1190a8u;
    ctx->vu0_vf[20] = ctx->vu0_vf[13];
    // 0x1190ac: 0x4a956b3c  vmove.y     $vf21, $vf13
    ctx->pc = 0x1190acu;
    ctx->vu0_vf[21] = ctx->vu0_vf[13];
    // 0x1190b0: 0x4a566b3c  vmove.z     $vf22, $vf13
    ctx->pc = 0x1190b0u;
    ctx->vu0_vf[22] = ctx->vu0_vf[13];
    // 0x1190b4: 0x4a2e0518  vmulx.w     $vf20, $vf0, $vf14x
    ctx->pc = 0x1190b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x1190b8: 0x4a2e0559  vmuly.w     $vf21, $vf0, $vf14y
    ctx->pc = 0x1190b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x1190bc: 0x4a2e059a  vmulz.w     $vf22, $vf0, $vf14z
    ctx->pc = 0x1190bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x1190c0: 0xf9340000  sqc2        $vf20, 0x0($t1)
    ctx->pc = 0x1190c0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x1190c4: 0xf8f50000  sqc2        $vf21, 0x0($a3)
    ctx->pc = 0x1190c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x1190c8: 0xf8d60000  sqc2        $vf22, 0x0($a2)
    ctx->pc = 0x1190c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x1190cc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1190ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1190d0: 0x1202008f  beq         $s0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1190D0u;
    {
        const bool branch_taken_0x1190d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1190D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190D0u;
            // 0x1190d4: 0x2e020101  sltiu       $v0, $s0, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190d0) {
            ctx->pc = 0x119310u;
            goto label_119310;
        }
    }
    ctx->pc = 0x1190D8u;
    // 0x1190d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1190D8u;
    {
        const bool branch_taken_0x1190d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190D8u;
            // 0x1190dc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190d8) {
            ctx->pc = 0x1190F8u;
            goto label_1190f8;
        }
    }
    ctx->pc = 0x1190E0u;
    // 0x1190e0: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1190E0u;
    {
        const bool branch_taken_0x1190e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1190E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190E0u;
            // 0x1190e4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190e0) {
            ctx->pc = 0x119130u;
            goto label_119130;
        }
    }
    ctx->pc = 0x1190E8u;
    // 0x1190e8: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1190E8u;
    {
        const bool branch_taken_0x1190e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1190e8) {
            ctx->pc = 0x119190u;
            goto label_119190;
        }
    }
    ctx->pc = 0x1190F0u;
    // 0x1190f0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1190F0u;
    {
        const bool branch_taken_0x1190f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1190f0) {
            ctx->pc = 0x119310u;
            goto label_119310;
        }
    }
    ctx->pc = 0x1190F8u;
label_1190f8:
    // 0x1190f8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1190f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1190fc: 0x12020054  beq         $s0, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1190FCu;
    {
        const bool branch_taken_0x1190fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x119100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1190FCu;
            // 0x119100: 0x2e020401  sltiu       $v0, $s0, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190fc) {
            ctx->pc = 0x119250u;
            goto label_119250;
        }
    }
    ctx->pc = 0x119104u;
    // 0x119104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119104u;
    {
        const bool branch_taken_0x119104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119104u;
            // 0x119108: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119104) {
            ctx->pc = 0x11911Cu;
            goto label_11911c;
        }
    }
    ctx->pc = 0x11910Cu;
    // 0x11910c: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x11910Cu;
    {
        const bool branch_taken_0x11910c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x11910c) {
            ctx->pc = 0x1191F0u;
            goto label_1191f0;
        }
    }
    ctx->pc = 0x119114u;
    // 0x119114: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x119114u;
    {
        const bool branch_taken_0x119114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119114) {
            ctx->pc = 0x119310u;
            goto label_119310;
        }
    }
    ctx->pc = 0x11911Cu;
label_11911c:
    // 0x11911c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x11911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x119120: 0x12020063  beq         $s0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x119120u;
    {
        const bool branch_taken_0x119120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x119120) {
            ctx->pc = 0x1192B0u;
            goto label_1192b0;
        }
    }
    ctx->pc = 0x119128u;
    // 0x119128: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x119128u;
    {
        const bool branch_taken_0x119128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119128) {
            ctx->pc = 0x119310u;
            goto label_119310;
        }
    }
    ctx->pc = 0x119130u;
label_119130:
    // 0x119130: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x119130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119134: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x119134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x119138: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x119138u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11913c: 0x4be20a2a  vmul.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x11913cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119140: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x119140u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x119144: 0x4bc111ae  vopmsub.xyz $vf6, $vf2, $vf1
    ctx->pc = 0x119144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119148: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x119148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x11914c: 0x4bc110bf  vmaddaw.xyz $ACC, $vf2, $vf1w
    ctx->pc = 0x11914cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119150: 0x4bc031cb  vmaddw.xyz  $vf7, $vf6, $vf0w
    ctx->pc = 0x119150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119154: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x119158: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x119158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11915c: 0x4a2801cc  vmsubx.w    $vf7, $vf0, $vf8x
    ctx->pc = 0x11915cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119160: 0x4be33a2a  vmul.xyzw   $vf8, $vf7, $vf3
    ctx->pc = 0x119160u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119164: 0x4bc33afe  vopmula.xyz $ACC, $vf7, $vf3
    ctx->pc = 0x119164u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]);
    // 0x119168: 0x4bc719ae  vopmsub.xyz $vf6, $vf3, $vf7
    ctx->pc = 0x119168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x11916c: 0x4bc339bf  vmulaw.xyz  $ACC, $vf7, $vf3w
    ctx->pc = 0x11916cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x119170: 0x4bc718bf  vmaddaw.xyz $ACC, $vf3, $vf7w
    ctx->pc = 0x119170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119174: 0x4bc0324b  vmaddw.xyz  $vf9, $vf6, $vf0w
    ctx->pc = 0x119174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119178: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x11917c: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x11917cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119180: 0x4a28024c  vmsubx.w    $vf9, $vf0, $vf8x
    ctx->pc = 0x119180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119184: 0xf9490000  sqc2        $vf9, 0x0($t2)
    ctx->pc = 0x119184u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x119188: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x119188u;
    {
        const bool branch_taken_0x119188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119188u;
            // 0x11918c: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119188) {
            ctx->pc = 0x11936Cu;
            goto label_11936c;
        }
    }
    ctx->pc = 0x119190u;
label_119190:
    // 0x119190: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x119190u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119194: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x119194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119198: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x119198u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11919c: 0x4be20a2a  vmul.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x11919cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1191a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1191a0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1191a4: 0x4bc111ae  vopmsub.xyz $vf6, $vf2, $vf1
    ctx->pc = 0x1191a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1191a8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1191a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x1191ac: 0x4bc110bf  vmaddaw.xyz $ACC, $vf2, $vf1w
    ctx->pc = 0x1191acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1191b0: 0x4bc031cb  vmaddw.xyz  $vf7, $vf6, $vf0w
    ctx->pc = 0x1191b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1191b4: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x1191b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x1191b8: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x1191b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1191bc: 0x4a2801cc  vmsubx.w    $vf7, $vf0, $vf8x
    ctx->pc = 0x1191bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1191c0: 0x4be33a2a  vmul.xyzw   $vf8, $vf7, $vf3
    ctx->pc = 0x1191c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1191c4: 0x4bc33afe  vopmula.xyz $ACC, $vf7, $vf3
    ctx->pc = 0x1191c4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]);
    // 0x1191c8: 0x4bc719ae  vopmsub.xyz $vf6, $vf3, $vf7
    ctx->pc = 0x1191c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1191cc: 0x4bc339bf  vmulaw.xyz  $ACC, $vf7, $vf3w
    ctx->pc = 0x1191ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x1191d0: 0x4bc718bf  vmaddaw.xyz $ACC, $vf3, $vf7w
    ctx->pc = 0x1191d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1191d4: 0x4bc0324b  vmaddw.xyz  $vf9, $vf6, $vf0w
    ctx->pc = 0x1191d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1191d8: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x1191d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x1191dc: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x1191dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1191e0: 0x4a28024c  vmsubx.w    $vf9, $vf0, $vf8x
    ctx->pc = 0x1191e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1191e4: 0xf9490000  sqc2        $vf9, 0x0($t2)
    ctx->pc = 0x1191e4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1191e8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1191E8u;
    {
        const bool branch_taken_0x1191e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1191ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1191E8u;
            // 0x1191ec: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191e8) {
            ctx->pc = 0x11936Cu;
            goto label_11936c;
        }
    }
    ctx->pc = 0x1191F0u;
label_1191f0:
    // 0x1191f0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1191f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1191f4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1191f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1191f8: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x1191f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1191fc: 0x4be20a2a  vmul.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x1191fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119200: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x119200u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x119204: 0x4bc111ae  vopmsub.xyz $vf6, $vf2, $vf1
    ctx->pc = 0x119204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119208: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x119208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x11920c: 0x4bc110bf  vmaddaw.xyz $ACC, $vf2, $vf1w
    ctx->pc = 0x11920cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119210: 0x4bc031cb  vmaddw.xyz  $vf7, $vf6, $vf0w
    ctx->pc = 0x119210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119214: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x119218: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x119218u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11921c: 0x4a2801cc  vmsubx.w    $vf7, $vf0, $vf8x
    ctx->pc = 0x11921cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119220: 0x4be33a2a  vmul.xyzw   $vf8, $vf7, $vf3
    ctx->pc = 0x119220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119224: 0x4bc33afe  vopmula.xyz $ACC, $vf7, $vf3
    ctx->pc = 0x119224u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]);
    // 0x119228: 0x4bc719ae  vopmsub.xyz $vf6, $vf3, $vf7
    ctx->pc = 0x119228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x11922c: 0x4bc339bf  vmulaw.xyz  $ACC, $vf7, $vf3w
    ctx->pc = 0x11922cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x119230: 0x4bc718bf  vmaddaw.xyz $ACC, $vf3, $vf7w
    ctx->pc = 0x119230u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119234: 0x4bc0324b  vmaddw.xyz  $vf9, $vf6, $vf0w
    ctx->pc = 0x119234u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119238: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x11923c: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x11923cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119240: 0x4a28024c  vmsubx.w    $vf9, $vf0, $vf8x
    ctx->pc = 0x119240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119244: 0xf9490000  sqc2        $vf9, 0x0($t2)
    ctx->pc = 0x119244u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x119248: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x119248u;
    {
        const bool branch_taken_0x119248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119248u;
            // 0x11924c: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119248) {
            ctx->pc = 0x11936Cu;
            goto label_11936c;
        }
    }
    ctx->pc = 0x119250u;
label_119250:
    // 0x119250: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x119250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x119254: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x119254u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119258: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x119258u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11925c: 0x4be20a2a  vmul.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x11925cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119260: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x119260u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x119264: 0x4bc111ae  vopmsub.xyz $vf6, $vf2, $vf1
    ctx->pc = 0x119264u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119268: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x119268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x11926c: 0x4bc110bf  vmaddaw.xyz $ACC, $vf2, $vf1w
    ctx->pc = 0x11926cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119270: 0x4bc031cb  vmaddw.xyz  $vf7, $vf6, $vf0w
    ctx->pc = 0x119270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119274: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x119278: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x119278u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11927c: 0x4a2801cc  vmsubx.w    $vf7, $vf0, $vf8x
    ctx->pc = 0x11927cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119280: 0x4be33a2a  vmul.xyzw   $vf8, $vf7, $vf3
    ctx->pc = 0x119280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119284: 0x4bc33afe  vopmula.xyz $ACC, $vf7, $vf3
    ctx->pc = 0x119284u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]);
    // 0x119288: 0x4bc719ae  vopmsub.xyz $vf6, $vf3, $vf7
    ctx->pc = 0x119288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x11928c: 0x4bc339bf  vmulaw.xyz  $ACC, $vf7, $vf3w
    ctx->pc = 0x11928cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x119290: 0x4bc718bf  vmaddaw.xyz $ACC, $vf3, $vf7w
    ctx->pc = 0x119290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119294: 0x4bc0324b  vmaddw.xyz  $vf9, $vf6, $vf0w
    ctx->pc = 0x119294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119298: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119298u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x11929c: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x11929cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1192a0: 0x4a28024c  vmsubx.w    $vf9, $vf0, $vf8x
    ctx->pc = 0x1192a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1192a4: 0xf9490000  sqc2        $vf9, 0x0($t2)
    ctx->pc = 0x1192a4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x1192a8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1192A8u;
    {
        const bool branch_taken_0x1192a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1192A8u;
            // 0x1192ac: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192a8) {
            ctx->pc = 0x11936Cu;
            goto label_11936c;
        }
    }
    ctx->pc = 0x1192B0u;
label_1192b0:
    // 0x1192b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1192b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1192b4: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x1192b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1192b8: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x1192b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1192bc: 0x4be20a2a  vmul.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x1192bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1192c0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1192c0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x1192c4: 0x4bc111ae  vopmsub.xyz $vf6, $vf2, $vf1
    ctx->pc = 0x1192c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1192c8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x1192c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x1192cc: 0x4bc110bf  vmaddaw.xyz $ACC, $vf2, $vf1w
    ctx->pc = 0x1192ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1192d0: 0x4bc031cb  vmaddw.xyz  $vf7, $vf6, $vf0w
    ctx->pc = 0x1192d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1192d4: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x1192d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x1192d8: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x1192d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1192dc: 0x4a2801cc  vmsubx.w    $vf7, $vf0, $vf8x
    ctx->pc = 0x1192dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1192e0: 0x4be33a2a  vmul.xyzw   $vf8, $vf7, $vf3
    ctx->pc = 0x1192e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1192e4: 0x4bc33afe  vopmula.xyz $ACC, $vf7, $vf3
    ctx->pc = 0x1192e4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]);
    // 0x1192e8: 0x4bc719ae  vopmsub.xyz $vf6, $vf3, $vf7
    ctx->pc = 0x1192e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1192ec: 0x4bc339bf  vmulaw.xyz  $ACC, $vf7, $vf3w
    ctx->pc = 0x1192ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x1192f0: 0x4bc718bf  vmaddaw.xyz $ACC, $vf3, $vf7w
    ctx->pc = 0x1192f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1192f4: 0x4bc0324b  vmaddw.xyz  $vf9, $vf6, $vf0w
    ctx->pc = 0x1192f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1192f8: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x1192f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x1192fc: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x1192fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119300: 0x4a28024c  vmsubx.w    $vf9, $vf0, $vf8x
    ctx->pc = 0x119300u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119304: 0xf9490000  sqc2        $vf9, 0x0($t2)
    ctx->pc = 0x119304u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x119308: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x119308u;
    {
        const bool branch_taken_0x119308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119308u;
            // 0x11930c: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119308) {
            ctx->pc = 0x11936Cu;
            goto label_11936c;
        }
    }
    ctx->pc = 0x119310u;
label_119310:
    // 0x119310: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x119310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x119314: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x119314u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x119318: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x119318u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11931c: 0x4be20a2a  vmul.xyzw   $vf8, $vf1, $vf2
    ctx->pc = 0x11931cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119320: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x119320u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x119324: 0x4bc111ae  vopmsub.xyz $vf6, $vf2, $vf1
    ctx->pc = 0x119324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119328: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x119328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x11932c: 0x4bc110bf  vmaddaw.xyz $ACC, $vf2, $vf1w
    ctx->pc = 0x11932cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119330: 0x4bc031cb  vmaddw.xyz  $vf7, $vf6, $vf0w
    ctx->pc = 0x119330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119334: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x119338: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x119338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11933c: 0x4a2801cc  vmsubx.w    $vf7, $vf0, $vf8x
    ctx->pc = 0x11933cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119340: 0x4be33a2a  vmul.xyzw   $vf8, $vf7, $vf3
    ctx->pc = 0x119340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119344: 0x4bc33afe  vopmula.xyz $ACC, $vf7, $vf3
    ctx->pc = 0x119344u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[3]);
    // 0x119348: 0x4bc719ae  vopmsub.xyz $vf6, $vf3, $vf7
    ctx->pc = 0x119348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x11934c: 0x4bc339bf  vmulaw.xyz  $ACC, $vf7, $vf3w
    ctx->pc = 0x11934cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x119350: 0x4bc718bf  vmaddaw.xyz $ACC, $vf3, $vf7w
    ctx->pc = 0x119350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119354: 0x4bc0324b  vmaddw.xyz  $vf9, $vf6, $vf0w
    ctx->pc = 0x119354u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119358: 0x4a28407e  vsubaz.w    $ACC, $vf8, $vf8z
    ctx->pc = 0x119358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x11935c: 0x4a2800fd  vmsubay.w   $ACC, $vf0, $vf8y
    ctx->pc = 0x11935cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119360: 0x4a28024c  vmsubx.w    $vf9, $vf0, $vf8x
    ctx->pc = 0x119360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119364: 0xf9490000  sqc2        $vf9, 0x0($t2)
    ctx->pc = 0x119364u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x119368: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x119368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11936c:
    // 0x11936c: 0xc7a700b4  lwc1        $f7, 0xB4($sp)
    ctx->pc = 0x11936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x119370: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x119370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119374: 0x460420c0  add.s       $f3, $f4, $f4
    ctx->pc = 0x119374u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x119378: 0x46073940  add.s       $f5, $f7, $f7
    ctx->pc = 0x119378u;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x11937c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x11937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119380: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x119380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x119384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119388: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11938c: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x11938cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x119390: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x119394: 0x46072a42  mul.s       $f9, $f5, $f7
    ctx->pc = 0x119394u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x119398: 0xe622003c  swc1        $f2, 0x3C($s1)
    ctx->pc = 0x119398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x11939c: 0x46010a80  add.s       $f10, $f1, $f1
    ctx->pc = 0x11939cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1193a0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1193a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1193a4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1193a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1193a8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1193a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1193ac: 0x46011a02  mul.s       $f8, $f3, $f1
    ctx->pc = 0x1193acu;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1193b0: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1193b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1193b4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x1193b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1193b8: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1193b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1193bc: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x1193bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1193c0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1193c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1193c4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1193c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1193c8: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1193c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1193cc: 0x46061181  sub.s       $f6, $f2, $f6
    ctx->pc = 0x1193ccu;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x1193d0: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x1193d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1193d4: 0x46015282  mul.s       $f10, $f10, $f1
    ctx->pc = 0x1193d4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x1193d8: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x1193d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x1193dc: 0x46004040  add.s       $f1, $f8, $f0
    ctx->pc = 0x1193dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x1193e0: 0x460c19c1  sub.s       $f7, $f3, $f12
    ctx->pc = 0x1193e0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x1193e4: 0x46042ac1  sub.s       $f11, $f5, $f4
    ctx->pc = 0x1193e4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1193e8: 0x46093241  sub.s       $f9, $f6, $f9
    ctx->pc = 0x1193e8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x1193ec: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x1193ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1193f0: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x1193f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x1193f4: 0xe6270010  swc1        $f7, 0x10($s1)
    ctx->pc = 0x1193f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1193f8: 0x460a3181  sub.s       $f6, $f6, $f10
    ctx->pc = 0x1193f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x1193fc: 0xe62b0024  swc1        $f11, 0x24($s1)
    ctx->pc = 0x1193fcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x119400: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x119400u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x119404: 0xe6290028  swc1        $f9, 0x28($s1)
    ctx->pc = 0x119404u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x119408: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x119408u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x11940c: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x11940cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x119410: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x119410u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x119414: 0xe6260014  swc1        $f6, 0x14($s1)
    ctx->pc = 0x119414u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x119418: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x119418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x11941c: 0xe6280008  swc1        $f8, 0x8($s1)
    ctx->pc = 0x11941cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x119420: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x119420u;
    {
        const bool branch_taken_0x119420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x119424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119420u;
            // 0x119424: 0xe6250018  swc1        $f5, 0x18($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119420) {
            ctx->pc = 0x119470u;
            goto label_119470;
        }
    }
    ctx->pc = 0x119428u;
    // 0x119428: 0xc0471b8  jal         func_11C6E0
    ctx->pc = 0x119428u;
    SET_GPR_U32(ctx, 31, 0x119430u);
    ctx->pc = 0x11942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119428u;
            // 0x11942c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6E0u;
    if (runtime->hasFunction(0x11C6E0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119430u; }
        if (ctx->pc != 0x119430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetPivot_0x11c6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119430u; }
        if (ctx->pc != 0x119430u) { return; }
    }
    ctx->pc = 0x119430u;
    // 0x119430: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x119430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119434: 0x4be1022c  vsub.xyzw   $vf8, $vf0, $vf1
    ctx->pc = 0x119434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x119438: 0x4a2a033c  vmove.w     $vf10, $vf0
    ctx->pc = 0x119438u;
    ctx->vu0_vf[10] = ctx->vu0_vf[0];
    // 0x11943c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11943cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119440: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x119440u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119444: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x119444u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119448: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x119448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x11944c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11944cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119450: 0x4bc831ca  vmaddz.xyz  $vf7, $vf6, $vf8z
    ctx->pc = 0x119450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119454: 0x4bc13aa8  vadd.xyz    $vf10, $vf7, $vf1
    ctx->pc = 0x119454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x119458: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x119458u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11945c: 0xfa850010  sqc2        $vf5, 0x10($s4)
    ctx->pc = 0x11945cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x119460: 0xfa860020  sqc2        $vf6, 0x20($s4)
    ctx->pc = 0x119460u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x119464: 0xfa8a0030  sqc2        $vf10, 0x30($s4)
    ctx->pc = 0x119464u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x119468: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119468u;
    {
        const bool branch_taken_0x119468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119468u;
            // 0x11946c: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119468) {
            ctx->pc = 0x119480u;
            goto label_119480;
        }
    }
    ctx->pc = 0x119470u;
label_119470:
    // 0x119470: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119474: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x119474u;
    SET_GPR_U32(ctx, 31, 0x11947Cu);
    ctx->pc = 0x119478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119474u;
            // 0x119478: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11947Cu; }
        if (ctx->pc != 0x11947Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11947Cu; }
        if (ctx->pc != 0x11947Cu) { return; }
    }
    ctx->pc = 0x11947Cu;
    // 0x11947c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x11947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_119480:
    // 0x119480: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x119480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x119484: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x119484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x119488: 0xda850010  lqc2        $vf5, 0x10($s4)
    ctx->pc = 0x119488u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x11948c: 0xda860020  lqc2        $vf6, 0x20($s4)
    ctx->pc = 0x11948cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x119490: 0xda870030  lqc2        $vf7, 0x30($s4)
    ctx->pc = 0x119490u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x119494: 0xdaa80000  lqc2        $vf8, 0x0($s5)
    ctx->pc = 0x119494u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x119498: 0x4bc12118  vmulx.xyz   $vf4, $vf4, $vf1x
    ctx->pc = 0x119498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11949c: 0x4bc12959  vmuly.xyz   $vf5, $vf5, $vf1y
    ctx->pc = 0x11949cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1194a0: 0x4bc1319a  vmulz.xyz   $vf6, $vf6, $vf1z
    ctx->pc = 0x1194a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1194a4: 0x4bc839e8  vadd.xyz    $vf7, $vf7, $vf8
    ctx->pc = 0x1194a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1194a8: 0xd84a0000  lqc2        $vf10, 0x0($v0)
    ctx->pc = 0x1194a8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1194ac: 0xd84b0010  lqc2        $vf11, 0x10($v0)
    ctx->pc = 0x1194acu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1194b0: 0xd84c0020  lqc2        $vf12, 0x20($v0)
    ctx->pc = 0x1194b0u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1194b4: 0xd84d0030  lqc2        $vf13, 0x30($v0)
    ctx->pc = 0x1194b4u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1194b8: 0x4be451bc  vmulax.xyzw $ACC, $vf10, $vf4x
    ctx->pc = 0x1194b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1194bc: 0x4be458bd  vmadday.xyzw $ACC, $vf11, $vf4y
    ctx->pc = 0x1194bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194c0: 0x4be460be  vmaddaz.xyzw $ACC, $vf12, $vf4z
    ctx->pc = 0x1194c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194c4: 0x4be46d0b  vmaddw.xyzw $vf20, $vf13, $vf4w
    ctx->pc = 0x1194c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1194c8: 0x4be551bc  vmulax.xyzw $ACC, $vf10, $vf5x
    ctx->pc = 0x1194c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1194cc: 0x4be558bd  vmadday.xyzw $ACC, $vf11, $vf5y
    ctx->pc = 0x1194ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194d0: 0x4be560be  vmaddaz.xyzw $ACC, $vf12, $vf5z
    ctx->pc = 0x1194d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194d4: 0x4be56d4b  vmaddw.xyzw $vf21, $vf13, $vf5w
    ctx->pc = 0x1194d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1194d8: 0x4be651bc  vmulax.xyzw $ACC, $vf10, $vf6x
    ctx->pc = 0x1194d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1194dc: 0x4be658bd  vmadday.xyzw $ACC, $vf11, $vf6y
    ctx->pc = 0x1194dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194e0: 0x4be660be  vmaddaz.xyzw $ACC, $vf12, $vf6z
    ctx->pc = 0x1194e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194e4: 0x4be66d8b  vmaddw.xyzw $vf22, $vf13, $vf6w
    ctx->pc = 0x1194e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1194e8: 0x4be751bc  vmulax.xyzw $ACC, $vf10, $vf7x
    ctx->pc = 0x1194e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1194ec: 0x4be758bd  vmadday.xyzw $ACC, $vf11, $vf7y
    ctx->pc = 0x1194ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194f0: 0x4be760be  vmaddaz.xyzw $ACC, $vf12, $vf7z
    ctx->pc = 0x1194f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1194f4: 0x4be76dcb  vmaddw.xyzw $vf23, $vf13, $vf7w
    ctx->pc = 0x1194f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1194f8: 0xfad40000  sqc2        $vf20, 0x0($s6)
    ctx->pc = 0x1194f8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x1194fc: 0xfad50010  sqc2        $vf21, 0x10($s6)
    ctx->pc = 0x1194fcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x119500: 0xfad60020  sqc2        $vf22, 0x20($s6)
    ctx->pc = 0x119500u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x119504: 0xfad70030  sqc2        $vf23, 0x30($s6)
    ctx->pc = 0x119504u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x119508: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x119508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x11950c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11950cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119510: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x119510u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119514: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x119514u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119518: 0xd84a0000  lqc2        $vf10, 0x0($v0)
    ctx->pc = 0x119518u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11951c: 0xd84b0010  lqc2        $vf11, 0x10($v0)
    ctx->pc = 0x11951cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x119520: 0xd84c0020  lqc2        $vf12, 0x20($v0)
    ctx->pc = 0x119520u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x119524: 0x4be451bc  vmulax.xyzw $ACC, $vf10, $vf4x
    ctx->pc = 0x119524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x119528: 0x4be458bd  vmadday.xyzw $ACC, $vf11, $vf4y
    ctx->pc = 0x119528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x11952c: 0x4be4650a  vmaddz.xyzw $vf20, $vf12, $vf4z
    ctx->pc = 0x11952cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119530: 0x4be551bc  vmulax.xyzw $ACC, $vf10, $vf5x
    ctx->pc = 0x119530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x119534: 0x4be558bd  vmadday.xyzw $ACC, $vf11, $vf5y
    ctx->pc = 0x119534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119538: 0x4be5654a  vmaddz.xyzw $vf21, $vf12, $vf5z
    ctx->pc = 0x119538u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x11953c: 0x4be651bc  vmulax.xyzw $ACC, $vf10, $vf6x
    ctx->pc = 0x11953cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x119540: 0x4be658bd  vmadday.xyzw $ACC, $vf11, $vf6y
    ctx->pc = 0x119540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x119544: 0x4be6658a  vmaddz.xyzw $vf22, $vf12, $vf6z
    ctx->pc = 0x119544u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x119548: 0xfaf40000  sqc2        $vf20, 0x0($s7)
    ctx->pc = 0x119548u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x11954c: 0xfaf50010  sqc2        $vf21, 0x10($s7)
    ctx->pc = 0x11954cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x119550: 0xfaf60020  sqc2        $vf22, 0x20($s7)
    ctx->pc = 0x119550u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x119554: 0xfae00030  sqc2        $vf0, 0x30($s7)
    ctx->pc = 0x119554u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x119558: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x119558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11955c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119560: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x119560u;
    {
        const bool branch_taken_0x119560 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x119564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119560u;
            // 0x119564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119560) {
            ctx->pc = 0x1195B8u;
            goto label_1195b8;
        }
    }
    ctx->pc = 0x119568u;
    // 0x119568: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x119568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11956c: 0x0  nop
    ctx->pc = 0x11956cu;
    // NOP
label_119570:
    // 0x119570: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x119570u;
    SET_GPR_U32(ctx, 31, 0x119578u);
    ctx->pc = 0x119574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119570u;
            // 0x119574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119578u; }
        if (ctx->pc != 0x119578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119578u; }
        if (ctx->pc != 0x119578u) { return; }
    }
    ctx->pc = 0x119578u;
    // 0x119578: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x119578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x11957c: 0x50510009  beql        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11957Cu;
    {
        const bool branch_taken_0x11957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x11957c) {
            ctx->pc = 0x119580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11957Cu;
            // 0x119580: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1195A4u;
            goto label_1195a4;
        }
    }
    ctx->pc = 0x119584u;
    // 0x119584: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x119584u;
    {
        const bool branch_taken_0x119584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x119584) {
            ctx->pc = 0x119588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119584u;
            // 0x119588: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1195A4u;
            goto label_1195a4;
        }
    }
    ctx->pc = 0x11958Cu;
    // 0x11958c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119594: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x119594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119598: 0xc0463a6  jal         func_118E98
    ctx->pc = 0x119598u;
    SET_GPR_U32(ctx, 31, 0x1195A0u);
    ctx->pc = 0x11959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119598u;
            // 0x11959c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118E98u;
    goto label_118e98;
    ctx->pc = 0x1195A0u;
label_1195a0:
    // 0x1195a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1195a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1195a4:
    // 0x1195a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1195a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1195a8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1195ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1195acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1195b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1195B0u;
    {
        const bool branch_taken_0x1195b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1195b0) {
            ctx->pc = 0x119570u;
            goto label_119570;
        }
    }
    ctx->pc = 0x1195B8u;
label_1195b8:
    // 0x1195b8: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x1195b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1195bc: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x1195bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1195c0: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x1195c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1195c4: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x1195c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1195c8: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x1195c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1195cc: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x1195ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1195d0: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x1195d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1195d4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1195d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1195d8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1195d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1195dc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1195dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1195e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1195E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195E0u;
            // 0x1195e4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118E98u: goto label_118e98;
            case 0x118F60u: goto label_118f60;
            case 0x118F7Cu: goto label_118f7c;
            case 0x118FACu: goto label_118fac;
            case 0x1190F8u: goto label_1190f8;
            case 0x11911Cu: goto label_11911c;
            case 0x119130u: goto label_119130;
            case 0x119190u: goto label_119190;
            case 0x1191F0u: goto label_1191f0;
            case 0x119250u: goto label_119250;
            case 0x1192B0u: goto label_1192b0;
            case 0x119310u: goto label_119310;
            case 0x11936Cu: goto label_11936c;
            case 0x119470u: goto label_119470;
            case 0x119480u: goto label_119480;
            case 0x119570u: goto label_119570;
            case 0x1195A0u: goto label_1195a0;
            case 0x1195A4u: goto label_1195a4;
            case 0x1195B8u: goto label_1195b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1195E8u;
}
