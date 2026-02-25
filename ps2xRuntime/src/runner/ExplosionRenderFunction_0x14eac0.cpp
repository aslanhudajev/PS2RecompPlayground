#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExplosionRenderFunction
// Address: 0x14eac0 - 0x14eed8
void ExplosionRenderFunction_0x14eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExplosionRenderFunction_0x14eac0");
#endif

    ctx->pc = 0x14eac0u;

    // 0x14eac0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x14eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x14eac4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14eac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14eac8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14eacc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14ead0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14ead4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14ead8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14ead8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14eadc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14eae0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14eae4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14eae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14eae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14eaec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14eaecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eaf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14eaf4: 0x8c349d20  lw          $s4, -0x62E0($at)
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941984)));
    // 0x14eaf8: 0x128000bb  beqz        $s4, . + 4 + (0xBB << 2)
    ctx->pc = 0x14EAF8u;
    {
        const bool branch_taken_0x14eaf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EAF8u;
            // 0x14eafc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaf8) {
            ctx->pc = 0x14EDE8u;
            goto label_14ede8;
        }
    }
    ctx->pc = 0x14EB00u;
    // 0x14eb00: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x14eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x14eb04: 0x3c160027  lui         $s6, 0x27
    ctx->pc = 0x14eb04u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)39 << 16));
    // 0x14eb08: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14eb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14eb0c: 0x3c170026  lui         $s7, 0x26
    ctx->pc = 0x14eb0cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)38 << 16));
    // 0x14eb10: 0x3c1e0025  lui         $fp, 0x25
    ctx->pc = 0x14eb10u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
    // 0x14eb14: 0x24639d30  addiu       $v1, $v1, -0x62D0
    ctx->pc = 0x14eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942000));
    // 0x14eb18: 0x26d69d30  addiu       $s6, $s6, -0x62D0
    ctx->pc = 0x14eb18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294942000));
    // 0x14eb1c: 0x26f79d30  addiu       $s7, $s7, -0x62D0
    ctx->pc = 0x14eb1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942000));
    // 0x14eb20: 0x27de1d30  addiu       $fp, $fp, 0x1D30
    ctx->pc = 0x14eb20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7472));
    // 0x14eb24: 0xafb000b0  sw          $s0, 0xB0($sp)
    ctx->pc = 0x14eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 16));
    // 0x14eb28: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x14eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x14eb2c: 0x0  nop
    ctx->pc = 0x14eb2cu;
    // NOP
label_14eb30:
    // 0x14eb30: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x14eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x14eb34: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x14eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14eb38: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x14eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14eb3c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x14eb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14eb40: 0x72980  sll         $a1, $a3, 6
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x14eb44: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14eb48: 0x14c3004f  bne         $a2, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x14EB48u;
    {
        const bool branch_taken_0x14eb48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EB48u;
            // 0x14eb4c: 0x24930004  addiu       $s3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb48) {
            ctx->pc = 0x14EC88u;
            goto label_14ec88;
        }
    }
    ctx->pc = 0x14EB50u;
    // 0x14eb50: 0x2a410800  slti        $at, $s2, 0x800
    ctx->pc = 0x14eb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x14eb54: 0x102000a0  beqz        $at, . + 4 + (0xA0 << 2)
    ctx->pc = 0x14EB54u;
    {
        const bool branch_taken_0x14eb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb54) {
            ctx->pc = 0x14EDD8u;
            goto label_14edd8;
        }
    }
    ctx->pc = 0x14EB5Cu;
    // 0x14eb5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x14eb5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14eb60: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x14eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x14eb64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14eb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14eb68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14eb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14eb6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14eb70: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x14eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x14eb74: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x14eb74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x14eb78: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x14eb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14eb7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14eb7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14eb80: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x14eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14eb84: 0xc686000c  lwc1        $f6, 0xC($s4)
    ctx->pc = 0x14eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14eb88: 0x46802820  cvt.s.w     $f0, $f5
    ctx->pc = 0x14eb88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14eb8c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14eb8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14eb90: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x14eb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x14eb94: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x14eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14eb98: 0x46040301  sub.s       $f12, $f0, $f4
    ctx->pc = 0x14eb98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14eb9c: 0xc6830010  lwc1        $f3, 0x10($s4)
    ctx->pc = 0x14eb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14eba0: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x14eba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14eba4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x14eba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x14eba8: 0x46040341  sub.s       $f13, $f0, $f4
    ctx->pc = 0x14eba8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14ebac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ebacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ebb0: 0xc053bcc  jal         func_14EF30
    ctx->pc = 0x14EBB0u;
    SET_GPR_U32(ctx, 31, 0x14EBB8u);
    ctx->pc = 0x14EBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EBB0u;
            // 0x14ebb4: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF30u;
    if (runtime->hasFunction(0x14EF30u)) {
        auto targetFn = runtime->lookupFunction(0x14EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EBB8u; }
        if (ctx->pc != 0x14EBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EBB8u; }
        if (ctx->pc != 0x14EBB8u) { return; }
    }
    ctx->pc = 0x14EBB8u;
    // 0x14ebb8: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x14ebb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ebbc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x14ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x14ebc0: 0xc6680000  lwc1        $f8, 0x0($s3)
    ctx->pc = 0x14ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x14ebc4: 0x10a900  sll         $s5, $s0, 4
    ctx->pc = 0x14ebc4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14ebc8: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x14ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14ebcc: 0xc6670014  lwc1        $f7, 0x14($s3)
    ctx->pc = 0x14ebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14ebd0: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x14ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ebd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ebd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ebd8: 0x468011a0  cvt.s.w     $f6, $f2
    ctx->pc = 0x14ebd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x14ebdc: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x14ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x14ebe0: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x14ebe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x14ebe4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x14ebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ebe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ebec: 0xc689000c  lwc1        $f9, 0xC($s4)
    ctx->pc = 0x14ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x14ebf0: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x14ebf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x14ebf4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x14ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x14ebf8: 0x24429d30  addiu       $v0, $v0, -0x62D0
    ctx->pc = 0x14ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x14ebfc: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14ec00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14ec00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14ec04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14ec04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14ec08: 0xc6850010  lwc1        $f5, 0x10($s4)
    ctx->pc = 0x14ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14ec0c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14ec0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14ec10: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x14ec10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x14ec14: 0x46084a00  add.s       $f8, $f9, $f8
    ctx->pc = 0x14ec14u;
    ctx->f[8] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x14ec18: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x14ec18u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x14ec1c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x14ec1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14ec20: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x14ec20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x14ec24: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x14ec24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x14ec28: 0x46073300  add.s       $f12, $f6, $f7
    ctx->pc = 0x14ec28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x14ec2c: 0x46033340  add.s       $f13, $f6, $f3
    ctx->pc = 0x14ec2cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x14ec30: 0xc053bcc  jal         func_14EF30
    ctx->pc = 0x14EC30u;
    SET_GPR_U32(ctx, 31, 0x14EC38u);
    ctx->pc = 0x14EC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC30u;
            // 0x14ec34: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF30u;
    if (runtime->hasFunction(0x14EF30u)) {
        auto targetFn = runtime->lookupFunction(0x14EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC38u; }
        if (ctx->pc != 0x14EC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC38u; }
        if (ctx->pc != 0x14EC38u) { return; }
    }
    ctx->pc = 0x14EC38u;
    // 0x14ec38: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x14ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ec3c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x14ec40: 0xc053bc0  jal         func_14EF00
    ctx->pc = 0x14EC40u;
    SET_GPR_U32(ctx, 31, 0x14EC48u);
    ctx->pc = 0x14EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC40u;
            // 0x14ec44: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF00u;
    if (runtime->hasFunction(0x14EF00u)) {
        auto targetFn = runtime->lookupFunction(0x14EF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC48u; }
        if (ctx->pc != 0x14EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC48u; }
        if (ctx->pc != 0x14EC48u) { return; }
    }
    ctx->pc = 0x14EC48u;
    // 0x14ec48: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x14ec4c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x14ec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ec50: 0x24429d30  addiu       $v0, $v0, -0x62D0
    ctx->pc = 0x14ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x14ec54: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x14ec54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14ec58: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14ec5c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x14ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x14ec60: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14ec64: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14ec64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14ec68: 0xc053bc0  jal         func_14EF00
    ctx->pc = 0x14EC68u;
    SET_GPR_U32(ctx, 31, 0x14EC70u);
    ctx->pc = 0x14EC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC68u;
            // 0x14ec6c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF00u;
    if (runtime->hasFunction(0x14EF00u)) {
        auto targetFn = runtime->lookupFunction(0x14EF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC70u; }
        if (ctx->pc != 0x14EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EC70u; }
        if (ctx->pc != 0x14EC70u) { return; }
    }
    ctx->pc = 0x14EC70u;
    // 0x14ec70: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x14ec70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x14ec74: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x14ec74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x14ec78: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x14ec78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x14ec7c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x14EC7Cu;
    {
        const bool branch_taken_0x14ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC7Cu;
            // 0x14ec80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec7c) {
            ctx->pc = 0x14EDD8u;
            goto label_14edd8;
        }
    }
    ctx->pc = 0x14EC84u;
    // 0x14ec84: 0x0  nop
    ctx->pc = 0x14ec84u;
    // NOP
label_14ec88:
    // 0x14ec88: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x14ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14ec8c: 0x14c30052  bne         $a2, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x14EC8Cu;
    {
        const bool branch_taken_0x14ec8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14EC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EC8Cu;
            // 0x14ec90: 0x2a210400  slti        $at, $s1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec8c) {
            ctx->pc = 0x14EDD8u;
            goto label_14edd8;
        }
    }
    ctx->pc = 0x14EC94u;
    // 0x14ec94: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x14EC94u;
    {
        const bool branch_taken_0x14ec94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec94) {
            ctx->pc = 0x14EDD8u;
            goto label_14edd8;
        }
    }
    ctx->pc = 0x14EC9Cu;
    // 0x14ec9c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x14ec9cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14eca0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x14eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x14eca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14eca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14eca8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14eca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ecac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14ecacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14ecb0: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x14ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x14ecb4: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x14ecb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x14ecb8: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x14ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14ecbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14ecbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14ecc0: 0xc6840014  lwc1        $f4, 0x14($s4)
    ctx->pc = 0x14ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14ecc4: 0xc686000c  lwc1        $f6, 0xC($s4)
    ctx->pc = 0x14ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14ecc8: 0x46802820  cvt.s.w     $f0, $f5
    ctx->pc = 0x14ecc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14eccc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14ecccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14ecd0: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x14ecd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x14ecd4: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x14ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ecd8: 0x46040301  sub.s       $f12, $f0, $f4
    ctx->pc = 0x14ecd8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14ecdc: 0xc6830010  lwc1        $f3, 0x10($s4)
    ctx->pc = 0x14ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ece0: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x14ece0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14ece4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x14ece4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x14ece8: 0x46040341  sub.s       $f13, $f0, $f4
    ctx->pc = 0x14ece8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14ecec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ececu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ecf0: 0xc053bcc  jal         func_14EF30
    ctx->pc = 0x14ECF0u;
    SET_GPR_U32(ctx, 31, 0x14ECF8u);
    ctx->pc = 0x14ECF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ECF0u;
            // 0x14ecf4: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF30u;
    if (runtime->hasFunction(0x14EF30u)) {
        auto targetFn = runtime->lookupFunction(0x14EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ECF8u; }
        if (ctx->pc != 0x14ECF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ECF8u; }
        if (ctx->pc != 0x14ECF8u) { return; }
    }
    ctx->pc = 0x14ECF8u;
    // 0x14ecf8: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x14ecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ecfc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14ed00: 0xc6680000  lwc1        $f8, 0x0($s3)
    ctx->pc = 0x14ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x14ed04: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x14ed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14ed08: 0xc6670014  lwc1        $f7, 0x14($s3)
    ctx->pc = 0x14ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14ed0c: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x14ed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ed10: 0xc689000c  lwc1        $f9, 0xC($s4)
    ctx->pc = 0x14ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x14ed14: 0x468011a0  cvt.s.w     $f6, $f2
    ctx->pc = 0x14ed14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x14ed18: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x14ed18u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14ed1c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x14ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x14ed20: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x14ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ed24: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x14ed24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x14ed28: 0xc6850010  lwc1        $f5, 0x10($s4)
    ctx->pc = 0x14ed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14ed2c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14ed2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14ed30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ed30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ed34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14ed34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14ed38: 0x3c02486b  lui         $v0, 0x486B
    ctx->pc = 0x14ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18539 << 16));
    // 0x14ed3c: 0x3442f500  ori         $v0, $v0, 0xF500
    ctx->pc = 0x14ed3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62720u)));
    // 0x14ed40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ed40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed44: 0x0  nop
    ctx->pc = 0x14ed44u;
    // NOP
    // 0x14ed48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14ed48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14ed4c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x14ed50: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x14ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
    // 0x14ed54: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14ed58: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x14ed58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x14ed5c: 0x46084a00  add.s       $f8, $f9, $f8
    ctx->pc = 0x14ed5cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x14ed60: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x14ed60u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x14ed64: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x14ed64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14ed68: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x14ed68u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x14ed6c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x14ed6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x14ed70: 0x46073300  add.s       $f12, $f6, $f7
    ctx->pc = 0x14ed70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x14ed74: 0x46033340  add.s       $f13, $f6, $f3
    ctx->pc = 0x14ed74u;
    ctx->f[13] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x14ed78: 0xc053bcc  jal         func_14EF30
    ctx->pc = 0x14ED78u;
    SET_GPR_U32(ctx, 31, 0x14ED80u);
    ctx->pc = 0x14ED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED78u;
            // 0x14ed7c: 0x46010380  add.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF30u;
    if (runtime->hasFunction(0x14EF30u)) {
        auto targetFn = runtime->lookupFunction(0x14EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED80u; }
        if (ctx->pc != 0x14ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x14ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED80u; }
        if (ctx->pc != 0x14ED80u) { return; }
    }
    ctx->pc = 0x14ED80u;
    // 0x14ed80: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x14ed80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ed84: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14ed84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x14ed88: 0xc053bc0  jal         func_14EF00
    ctx->pc = 0x14ED88u;
    SET_GPR_U32(ctx, 31, 0x14ED90u);
    ctx->pc = 0x14ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED88u;
            // 0x14ed8c: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF00u;
    if (runtime->hasFunction(0x14EF00u)) {
        auto targetFn = runtime->lookupFunction(0x14EF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED90u; }
        if (ctx->pc != 0x14ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED90u; }
        if (ctx->pc != 0x14ED90u) { return; }
    }
    ctx->pc = 0x14ED90u;
    // 0x14ed90: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x14ed94: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x14ed94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14ed98: 0x24429d30  addiu       $v0, $v0, -0x62D0
    ctx->pc = 0x14ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x14ed9c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x14ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14eda0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x14eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14eda4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x14eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x14eda8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14edac: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14edacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14edb0: 0xc053bc0  jal         func_14EF00
    ctx->pc = 0x14EDB0u;
    SET_GPR_U32(ctx, 31, 0x14EDB8u);
    ctx->pc = 0x14EDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDB0u;
            // 0x14edb4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EF00u;
    if (runtime->hasFunction(0x14EF00u)) {
        auto targetFn = runtime->lookupFunction(0x14EF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EDB8u; }
        if (ctx->pc != 0x14EDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x14ef00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EDB8u; }
        if (ctx->pc != 0x14EDB8u) { return; }
    }
    ctx->pc = 0x14EDB8u;
    // 0x14edb8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x14edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14edbc: 0x27de0020  addiu       $fp, $fp, 0x20
    ctx->pc = 0x14edbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x14edc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14edc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14edc4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x14edc8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x14edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x14edcc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x14edccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14edd0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x14edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x14edd4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x14edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_14edd8:
    // 0x14edd8: 0x8e940028  lw          $s4, 0x28($s4)
    ctx->pc = 0x14edd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x14eddc: 0x1680ff54  bnez        $s4, . + 4 + (-0xAC << 2)
    ctx->pc = 0x14EDDCu;
    {
        const bool branch_taken_0x14eddc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eddc) {
            ctx->pc = 0x14EB30u;
            goto label_14eb30;
        }
    }
    ctx->pc = 0x14EDE4u;
    // 0x14ede4: 0x0  nop
    ctx->pc = 0x14ede4u;
    // NOP
label_14ede8:
    // 0x14ede8: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x14EDE8u;
    {
        const bool branch_taken_0x14ede8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ede8) {
            ctx->pc = 0x14EE48u;
            goto label_14ee48;
        }
    }
    ctx->pc = 0x14EDF0u;
    // 0x14edf0: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x14edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x14edf4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x14edf8: 0x24429d30  addiu       $v0, $v0, -0x62D0
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x14edfc: 0x24639858  addiu       $v1, $v1, -0x67A8
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940760));
    // 0x14ee00: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x14ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x14ee04: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x14ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14ee08: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x14ee0c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x14ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x14ee10: 0x24429d30  addiu       $v0, $v0, -0x62D0
    ctx->pc = 0x14ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x14ee14: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14EE14u;
    SET_GPR_U32(ctx, 31, 0x14EE1Cu);
    ctx->pc = 0x14EE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE14u;
            // 0x14ee18: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE1Cu; }
        if (ctx->pc != 0x14EE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE1Cu; }
        if (ctx->pc != 0x14EE1Cu) { return; }
    }
    ctx->pc = 0x14EE1Cu;
    // 0x14ee1c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x14ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x14ee20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14ee24: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x14ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14ee28: 0xc053bbc  jal         func_14EEF0
    ctx->pc = 0x14EE28u;
    SET_GPR_U32(ctx, 31, 0x14EE30u);
    ctx->pc = 0x14EE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE28u;
            // 0x14ee2c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EEF0u;
    if (runtime->hasFunction(0x14EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x14EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE30u; }
        if (ctx->pc != 0x14EE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x14eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE30u; }
        if (ctx->pc != 0x14EE30u) { return; }
    }
    ctx->pc = 0x14EE30u;
    // 0x14ee30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ee30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee34: 0xc053bb8  jal         func_14EEE0
    ctx->pc = 0x14EE34u;
    SET_GPR_U32(ctx, 31, 0x14EE3Cu);
    ctx->pc = 0x14EE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE34u;
            // 0x14ee38: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EEE0u;
    if (runtime->hasFunction(0x14EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE3Cu; }
        if (ctx->pc != 0x14EE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x14eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE3Cu; }
        if (ctx->pc != 0x14EE3Cu) { return; }
    }
    ctx->pc = 0x14EE3Cu;
    // 0x14ee3c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x14EE3Cu;
    SET_GPR_U32(ctx, 31, 0x14EE44u);
    ctx->pc = 0x14EE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE3Cu;
            // 0x14ee40: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE44u; }
        if (ctx->pc != 0x14EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE44u; }
        if (ctx->pc != 0x14EE44u) { return; }
    }
    ctx->pc = 0x14EE44u;
    // 0x14ee44: 0x0  nop
    ctx->pc = 0x14ee44u;
    // NOP
label_14ee48:
    // 0x14ee48: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14EE48u;
    {
        const bool branch_taken_0x14ee48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee48) {
            ctx->pc = 0x14EEA8u;
            goto label_14eea8;
        }
    }
    ctx->pc = 0x14EE50u;
    // 0x14ee50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x14ee54: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x14ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x14ee58: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x14ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
    // 0x14ee5c: 0x24639860  addiu       $v1, $v1, -0x67A0
    ctx->pc = 0x14ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940768));
    // 0x14ee60: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x14ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x14ee64: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x14ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14ee68: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x14ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x14ee6c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x14ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x14ee70: 0x24429d30  addiu       $v0, $v0, -0x62D0
    ctx->pc = 0x14ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x14ee74: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14EE74u;
    SET_GPR_U32(ctx, 31, 0x14EE7Cu);
    ctx->pc = 0x14EE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE74u;
            // 0x14ee78: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE7Cu; }
        if (ctx->pc != 0x14EE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE7Cu; }
        if (ctx->pc != 0x14EE7Cu) { return; }
    }
    ctx->pc = 0x14EE7Cu;
    // 0x14ee7c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x14ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x14ee80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14ee84: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x14ee84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14ee88: 0xc053bbc  jal         func_14EEF0
    ctx->pc = 0x14EE88u;
    SET_GPR_U32(ctx, 31, 0x14EE90u);
    ctx->pc = 0x14EE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE88u;
            // 0x14ee8c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EEF0u;
    if (runtime->hasFunction(0x14EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x14EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE90u; }
        if (ctx->pc != 0x14EE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x14eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE90u; }
        if (ctx->pc != 0x14EE90u) { return; }
    }
    ctx->pc = 0x14EE90u;
    // 0x14ee90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ee90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee94: 0xc053bb8  jal         func_14EEE0
    ctx->pc = 0x14EE94u;
    SET_GPR_U32(ctx, 31, 0x14EE9Cu);
    ctx->pc = 0x14EE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE94u;
            // 0x14ee98: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EEE0u;
    if (runtime->hasFunction(0x14EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE9Cu; }
        if (ctx->pc != 0x14EE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x14eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE9Cu; }
        if (ctx->pc != 0x14EE9Cu) { return; }
    }
    ctx->pc = 0x14EE9Cu;
    // 0x14ee9c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x14EE9Cu;
    SET_GPR_U32(ctx, 31, 0x14EEA4u);
    ctx->pc = 0x14EEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE9Cu;
            // 0x14eea0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEA4u; }
        if (ctx->pc != 0x14EEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EEA4u; }
        if (ctx->pc != 0x14EEA4u) { return; }
    }
    ctx->pc = 0x14EEA4u;
    // 0x14eea4: 0x0  nop
    ctx->pc = 0x14eea4u;
    // NOP
label_14eea8:
    // 0x14eea8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14eeac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14eeacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14eeb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14eeb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14eeb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14eeb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14eeb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14eeb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14eebc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14eebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14eec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14eec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14eec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14eec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14eeccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eed0: 0x3e00008  jr          $ra
    ctx->pc = 0x14EED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EED0u;
            // 0x14eed4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14EB30u: goto label_14eb30;
            case 0x14EC88u: goto label_14ec88;
            case 0x14EDD8u: goto label_14edd8;
            case 0x14EDE8u: goto label_14ede8;
            case 0x14EE48u: goto label_14ee48;
            case 0x14EEA8u: goto label_14eea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EED8u;
}
