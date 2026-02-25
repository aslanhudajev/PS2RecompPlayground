#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossMove1
// Address: 0x1d7770 - 0x1d7fa0
void Stageex1BossMove1_0x1d7770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossMove1_0x1d7770");
#endif

    ctx->pc = 0x1d7770u;

    // 0x1d7770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d7770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d7774: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d7774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d7778: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d7778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d777c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d7780: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d7780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d7784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7788: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d778c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d778cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7790: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d7790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d7794: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1d7794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1d7798: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1D7798u;
    SET_GPR_U32(ctx, 31, 0x1D77A0u);
    ctx->pc = 0x1D779Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7798u;
            // 0x1d779c: 0xdc25aae8  ld          $a1, -0x5518($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77A0u; }
        if (ctx->pc != 0x1D77A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77A0u; }
        if (ctx->pc != 0x1D77A0u) { return; }
    }
    ctx->pc = 0x1D77A0u;
    // 0x1d77a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d77a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d77a4: 0xac221d58  sw          $v0, 0x1D58($at)
    ctx->pc = 0x1d77a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7512), GPR_U32(ctx, 2));
    // 0x1d77a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d77a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d77ac: 0x8c241d58  lw          $a0, 0x1D58($at)
    ctx->pc = 0x1d77acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7512)));
    // 0x1d77b0: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D77B0u;
    SET_GPR_U32(ctx, 31, 0x1D77B8u);
    ctx->pc = 0x1D77B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D77B0u;
            // 0x1d77b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77B8u; }
        if (ctx->pc != 0x1D77B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D77B8u; }
        if (ctx->pc != 0x1D77B8u) { return; }
    }
    ctx->pc = 0x1D77B8u;
    // 0x1d77b8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d77b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d77bc: 0xac221d60  sw          $v0, 0x1D60($at)
    ctx->pc = 0x1d77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7520), GPR_U32(ctx, 2));
    // 0x1d77c0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1d77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d77c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d77c8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D77C8u;
    {
        const bool branch_taken_0x1d77c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d77c8) {
            ctx->pc = 0x1D78B8u;
            goto label_1d78b8;
        }
    }
    ctx->pc = 0x1D77D0u;
    // 0x1d77d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d77d4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D77D4u;
    {
        const bool branch_taken_0x1d77d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d77d4) {
            ctx->pc = 0x1D7818u;
            goto label_1d7818;
        }
    }
    ctx->pc = 0x1D77DCu;
    // 0x1d77dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D77DCu;
    {
        const bool branch_taken_0x1d77dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77dc) {
            ctx->pc = 0x1D77F0u;
            goto label_1d77f0;
        }
    }
    ctx->pc = 0x1D77E4u;
    // 0x1d77e4: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x1D77E4u;
    {
        const bool branch_taken_0x1d77e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77e4) {
            ctx->pc = 0x1D7D20u;
            goto label_1d7d20;
        }
    }
    ctx->pc = 0x1D77ECu;
    // 0x1d77ec: 0x0  nop
    ctx->pc = 0x1d77ecu;
    // NOP
label_1d77f0:
    // 0x1d77f0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1d77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1d77f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d77f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d77f8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d77fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d77fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7800: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1d7800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1d7804: 0x8c221d60  lw          $v0, 0x1D60($at)
    ctx->pc = 0x1d7804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7520)));
    // 0x1d7808: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1d7808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d780c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d780cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d7810: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1D7810u;
    {
        const bool branch_taken_0x1d7810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7810u;
            // 0x1d7814: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7810) {
            ctx->pc = 0x1D7D20u;
            goto label_1d7d20;
        }
    }
    ctx->pc = 0x1D7818u;
label_1d7818:
    // 0x1d7818: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d781c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D781Cu;
    {
        const bool branch_taken_0x1d781c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d781c) {
            ctx->pc = 0x1D7890u;
            goto label_1d7890;
        }
    }
    ctx->pc = 0x1D7824u;
    // 0x1d7824: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d7824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7828: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1d7828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1d782c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d782cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d7830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7834: 0x0  nop
    ctx->pc = 0x1d7834u;
    // NOP
    // 0x1d7838: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d783c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D783Cu;
    {
        const bool branch_taken_0x1d783c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D783Cu;
            // 0x1d7840: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d783c) {
            ctx->pc = 0x1D7858u;
            goto label_1d7858;
        }
    }
    ctx->pc = 0x1D7844u;
    // 0x1d7844: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1d7844u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1d7848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d784c: 0x0  nop
    ctx->pc = 0x1d784cu;
    // NOP
    // 0x1d7850: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d7850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7854: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1d7854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1d7858:
    // 0x1d7858: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x1d785c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7860: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d7860u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d7864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7868: 0x0  nop
    ctx->pc = 0x1d7868u;
    // NOP
    // 0x1d786c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d786cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7870: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7870u;
    {
        const bool branch_taken_0x1d7870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7870u;
            // 0x1d7874: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7870) {
            ctx->pc = 0x1D7898u;
            goto label_1d7898;
        }
    }
    ctx->pc = 0x1D7878u;
    // 0x1d7878: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1d7878u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1d787c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d787cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7880: 0x0  nop
    ctx->pc = 0x1d7880u;
    // NOP
    // 0x1d7884: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7888u;
    {
        const bool branch_taken_0x1d7888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D788Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7888u;
            // 0x1d788c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7888) {
            ctx->pc = 0x1D7898u;
            goto label_1d7898;
        }
    }
    ctx->pc = 0x1D7890u;
label_1d7890:
    // 0x1d7890: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d7890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d7894: 0x0  nop
    ctx->pc = 0x1d7894u;
    // NOP
label_1d7898:
    // 0x1d7898: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d7898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d789c: 0x8c221d60  lw          $v0, 0x1D60($at)
    ctx->pc = 0x1d789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7520)));
    // 0x1d78a0: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d78a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d78a4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1d78a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d78a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d78ac: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1D78ACu;
    {
        const bool branch_taken_0x1d78ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78ACu;
            // 0x1d78b0: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78ac) {
            ctx->pc = 0x1D7D20u;
            goto label_1d7d20;
        }
    }
    ctx->pc = 0x1D78B4u;
    // 0x1d78b4: 0x0  nop
    ctx->pc = 0x1d78b4u;
    // NOP
label_1d78b8:
    // 0x1d78b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d78bc: 0x18400110  blez        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x1D78BCu;
    {
        const bool branch_taken_0x1d78bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d78bc) {
            ctx->pc = 0x1D7D00u;
            goto label_1d7d00;
        }
    }
    ctx->pc = 0x1D78C4u;
    // 0x1d78c4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d78c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d78c8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1d78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1d78cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1d78ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d78d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d78d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d78d4: 0x0  nop
    ctx->pc = 0x1d78d4u;
    // NOP
    // 0x1d78d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d78d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d78dc: 0x450000fa  bc1f        . + 4 + (0xFA << 2)
    ctx->pc = 0x1D78DCu;
    {
        const bool branch_taken_0x1d78dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D78E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78DCu;
            // 0x1d78e0: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78dc) {
            ctx->pc = 0x1D7CC8u;
            goto label_1d7cc8;
        }
    }
    ctx->pc = 0x1D78E4u;
    // 0x1d78e4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d78e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d78e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d78e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d78ec: 0x0  nop
    ctx->pc = 0x1d78ecu;
    // NOP
    // 0x1d78f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d78f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d78f4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1D78F4u;
    SET_GPR_U32(ctx, 31, 0x1D78FCu);
    ctx->pc = 0x1D78F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78F4u;
            // 0x1d78f8: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78FCu; }
        if (ctx->pc != 0x1D78FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D78FCu; }
        if (ctx->pc != 0x1D78FCu) { return; }
    }
    ctx->pc = 0x1D78FCu;
    // 0x1d78fc: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D78FCu;
    SET_GPR_U32(ctx, 31, 0x1D7904u);
    ctx->pc = 0x1D7900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78FCu;
            // 0x1d7900: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7904u; }
        if (ctx->pc != 0x1D7904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7904u; }
        if (ctx->pc != 0x1D7904u) { return; }
    }
    ctx->pc = 0x1D7904u;
    // 0x1d7904: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1D7904u;
    {
        const bool branch_taken_0x1d7904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7904) {
            ctx->pc = 0x1D7A18u;
            goto label_1d7a18;
        }
    }
    ctx->pc = 0x1D790Cu;
    // 0x1d790c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7910: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d7910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7914: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d7914u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d7918: 0x0  nop
    ctx->pc = 0x1d7918u;
    // NOP
    // 0x1d791c: 0x0  nop
    ctx->pc = 0x1d791cu;
    // NOP
    // 0x1d7920: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7920u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7924: 0x144000e8  bnez        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x1D7924u;
    {
        const bool branch_taken_0x1d7924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7924) {
            ctx->pc = 0x1D7CC8u;
            goto label_1d7cc8;
        }
    }
    ctx->pc = 0x1D792Cu;
    // 0x1d792c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7930: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d7934: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d7934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7938: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d7938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d793c: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D793Cu;
    SET_GPR_U32(ctx, 31, 0x1D7944u);
    ctx->pc = 0x1D7940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D793Cu;
            // 0x1d7940: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7944u; }
        if (ctx->pc != 0x1D7944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7944u; }
        if (ctx->pc != 0x1D7944u) { return; }
    }
    ctx->pc = 0x1D7944u;
    // 0x1d7944: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7944u;
    SET_GPR_U32(ctx, 31, 0x1D794Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D794Cu; }
        if (ctx->pc != 0x1D794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D794Cu; }
        if (ctx->pc != 0x1D794Cu) { return; }
    }
    ctx->pc = 0x1D794Cu;
    // 0x1d794c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7950: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7950u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7954: 0x0  nop
    ctx->pc = 0x1d7954u;
    // NOP
    // 0x1d7958: 0x0  nop
    ctx->pc = 0x1d7958u;
    // NOP
    // 0x1d795c: 0x9010  mfhi        $s2
    ctx->pc = 0x1d795cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1d7960: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7960u;
    SET_GPR_U32(ctx, 31, 0x1D7968u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7968u; }
        if (ctx->pc != 0x1D7968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7968u; }
        if (ctx->pc != 0x1D7968u) { return; }
    }
    ctx->pc = 0x1D7968u;
    // 0x1d7968: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d7968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d796c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d796cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7970: 0x0  nop
    ctx->pc = 0x1d7970u;
    // NOP
    // 0x1d7974: 0x0  nop
    ctx->pc = 0x1d7974u;
    // NOP
    // 0x1d7978: 0x8810  mfhi        $s1
    ctx->pc = 0x1d7978u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1d797c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D797Cu;
    SET_GPR_U32(ctx, 31, 0x1D7984u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7984u; }
        if (ctx->pc != 0x1D7984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7984u; }
        if (ctx->pc != 0x1D7984u) { return; }
    }
    ctx->pc = 0x1D7984u;
    // 0x1d7984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7984u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1d7988: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7988u;
    {
        const bool branch_taken_0x1d7988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7988) {
            ctx->pc = 0x1D79A0u;
            goto label_1d79a0;
        }
    }
    ctx->pc = 0x1D7990u;
    // 0x1d7990: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d7994: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d7998: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x1d7998u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d799c: 0x0  nop
    ctx->pc = 0x1d799cu;
    // NOP
label_1d79a0:
    // 0x1d79a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d79a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d79a8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1d79ac: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d79acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d79b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d79b4: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1d79b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d79b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d79bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d79bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d79c0: 0x0  nop
    ctx->pc = 0x1d79c0u;
    // NOP
    // 0x1d79c4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d79c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d79c8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D79C8u;
    SET_GPR_U32(ctx, 31, 0x1D79D0u);
    ctx->pc = 0x1D79CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79C8u;
            // 0x1d79cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79D0u; }
        if (ctx->pc != 0x1D79D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79D0u; }
        if (ctx->pc != 0x1D79D0u) { return; }
    }
    ctx->pc = 0x1D79D0u;
    // 0x1d79d0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d79d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d79d8: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d79dc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d79e0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D79E0u;
    SET_GPR_U32(ctx, 31, 0x1D79E8u);
    ctx->pc = 0x1D79E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79E0u;
            // 0x1d79e4: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79E8u; }
        if (ctx->pc != 0x1D79E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79E8u; }
        if (ctx->pc != 0x1D79E8u) { return; }
    }
    ctx->pc = 0x1D79E8u;
    // 0x1d79e8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d79ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d79f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d79f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d79f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d79f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d79f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79fc: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d79fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7a00: 0x2482ffa2  addiu       $v0, $a0, -0x5E
    ctx->pc = 0x1d7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x1d7a04: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7a08: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7A08u;
    SET_GPR_U32(ctx, 31, 0x1D7A10u);
    ctx->pc = 0x1D7A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A08u;
            // 0x1d7a0c: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A10u; }
        if (ctx->pc != 0x1D7A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A10u; }
        if (ctx->pc != 0x1D7A10u) { return; }
    }
    ctx->pc = 0x1D7A10u;
    // 0x1d7a10: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1D7A10u;
    {
        const bool branch_taken_0x1d7a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a10) {
            ctx->pc = 0x1D7CC8u;
            goto label_1d7cc8;
        }
    }
    ctx->pc = 0x1D7A18u;
label_1d7a18:
    // 0x1d7a18: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D7A18u;
    SET_GPR_U32(ctx, 31, 0x1D7A20u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A20u; }
        if (ctx->pc != 0x1D7A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A20u; }
        if (ctx->pc != 0x1D7A20u) { return; }
    }
    ctx->pc = 0x1D7A20u;
    // 0x1d7a20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7a24: 0x1443004e  bne         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D7A24u;
    {
        const bool branch_taken_0x1d7a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7a24) {
            ctx->pc = 0x1D7B60u;
            goto label_1d7b60;
        }
    }
    ctx->pc = 0x1D7A2Cu;
    // 0x1d7a2c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7a30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7a34: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d7a34u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d7a38: 0x0  nop
    ctx->pc = 0x1d7a38u;
    // NOP
    // 0x1d7a3c: 0x0  nop
    ctx->pc = 0x1d7a3cu;
    // NOP
    // 0x1d7a40: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7a40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7a44: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1D7A44u;
    {
        const bool branch_taken_0x1d7a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a44) {
            ctx->pc = 0x1D7CC8u;
            goto label_1d7cc8;
        }
    }
    ctx->pc = 0x1D7A4Cu;
    // 0x1d7a4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7a50: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d7a54: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d7a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7a58: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d7a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7a5c: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D7A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7A64u);
    ctx->pc = 0x1D7A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7A5Cu;
            // 0x1d7a60: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A64u; }
        if (ctx->pc != 0x1D7A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A64u; }
        if (ctx->pc != 0x1D7A64u) { return; }
    }
    ctx->pc = 0x1D7A64u;
    // 0x1d7a64: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7A64u;
    SET_GPR_U32(ctx, 31, 0x1D7A6Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A6Cu; }
        if (ctx->pc != 0x1D7A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A6Cu; }
        if (ctx->pc != 0x1D7A6Cu) { return; }
    }
    ctx->pc = 0x1D7A6Cu;
    // 0x1d7a6c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7a70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7a70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7a74: 0x0  nop
    ctx->pc = 0x1d7a74u;
    // NOP
    // 0x1d7a78: 0x0  nop
    ctx->pc = 0x1d7a78u;
    // NOP
    // 0x1d7a7c: 0x9010  mfhi        $s2
    ctx->pc = 0x1d7a7cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1d7a80: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7A80u;
    SET_GPR_U32(ctx, 31, 0x1D7A88u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A88u; }
        if (ctx->pc != 0x1D7A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7A88u; }
        if (ctx->pc != 0x1D7A88u) { return; }
    }
    ctx->pc = 0x1D7A88u;
    // 0x1d7a88: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d7a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7a8c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7a8cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7a90: 0x0  nop
    ctx->pc = 0x1d7a90u;
    // NOP
    // 0x1d7a94: 0x0  nop
    ctx->pc = 0x1d7a94u;
    // NOP
    // 0x1d7a98: 0x8810  mfhi        $s1
    ctx->pc = 0x1d7a98u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1d7a9c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7AA4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AA4u; }
        if (ctx->pc != 0x1D7AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AA4u; }
        if (ctx->pc != 0x1D7AA4u) { return; }
    }
    ctx->pc = 0x1D7AA4u;
    // 0x1d7aa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7aa4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1d7aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7AA8u;
    {
        const bool branch_taken_0x1d7aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7aa8) {
            ctx->pc = 0x1D7AC0u;
            goto label_1d7ac0;
        }
    }
    ctx->pc = 0x1D7AB0u;
    // 0x1d7ab0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d7ab4: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1d7ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d7ab8: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x1d7ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d7abc: 0x0  nop
    ctx->pc = 0x1d7abcu;
    // NOP
label_1d7ac0:
    // 0x1d7ac0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7ac4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7ac8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d7ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1d7acc: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d7accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d7ad0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7ad4: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1d7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1d7ad8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d7ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7ae0: 0x0  nop
    ctx->pc = 0x1d7ae0u;
    // NOP
    // 0x1d7ae4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d7ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d7ae8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D7AE8u;
    SET_GPR_U32(ctx, 31, 0x1D7AF0u);
    ctx->pc = 0x1D7AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7AE8u;
            // 0x1d7aec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AF0u; }
        if (ctx->pc != 0x1D7AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7AF0u; }
        if (ctx->pc != 0x1D7AF0u) { return; }
    }
    ctx->pc = 0x1D7AF0u;
    // 0x1d7af0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7af4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7af8: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d7afc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7b00: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D7B00u;
    SET_GPR_U32(ctx, 31, 0x1D7B08u);
    ctx->pc = 0x1D7B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B00u;
            // 0x1d7b04: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B08u; }
        if (ctx->pc != 0x1D7B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B08u; }
        if (ctx->pc != 0x1D7B08u) { return; }
    }
    ctx->pc = 0x1D7B08u;
    // 0x1d7b08: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d7b0c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7b1c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d7b1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7b20: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d7b24: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7b28: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7B28u;
    SET_GPR_U32(ctx, 31, 0x1D7B30u);
    ctx->pc = 0x1D7B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B28u;
            // 0x1d7b2c: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B30u; }
        if (ctx->pc != 0x1D7B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B30u; }
        if (ctx->pc != 0x1D7B30u) { return; }
    }
    ctx->pc = 0x1D7B30u;
    // 0x1d7b30: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7b34: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1d7b38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7b40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b44: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d7b44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7b48: 0x2482ffa2  addiu       $v0, $a0, -0x5E
    ctx->pc = 0x1d7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x1d7b4c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7b50: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7B50u;
    SET_GPR_U32(ctx, 31, 0x1D7B58u);
    ctx->pc = 0x1D7B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B50u;
            // 0x1d7b54: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B58u; }
        if (ctx->pc != 0x1D7B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B58u; }
        if (ctx->pc != 0x1D7B58u) { return; }
    }
    ctx->pc = 0x1D7B58u;
    // 0x1d7b58: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1D7B58u;
    {
        const bool branch_taken_0x1d7b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b58) {
            ctx->pc = 0x1D7CC8u;
            goto label_1d7cc8;
        }
    }
    ctx->pc = 0x1D7B60u;
label_1d7b60:
    // 0x1d7b60: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D7B60u;
    SET_GPR_U32(ctx, 31, 0x1D7B68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B68u; }
        if (ctx->pc != 0x1D7B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7B68u; }
        if (ctx->pc != 0x1D7B68u) { return; }
    }
    ctx->pc = 0x1D7B68u;
    // 0x1d7b68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7b6c: 0x14430056  bne         $v0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D7B6Cu;
    {
        const bool branch_taken_0x1d7b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7b6c) {
            ctx->pc = 0x1D7CC8u;
            goto label_1d7cc8;
        }
    }
    ctx->pc = 0x1D7B74u;
    // 0x1d7b74: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7b78: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7B78u;
    {
        const bool branch_taken_0x1d7b78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D7B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7B78u;
            // 0x1d7b7c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b78) {
            ctx->pc = 0x1D7B8Cu;
            goto label_1d7b8c;
        }
    }
    ctx->pc = 0x1D7B80u;
    // 0x1d7b80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7B80u;
    {
        const bool branch_taken_0x1d7b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b80) {
            ctx->pc = 0x1D7B8Cu;
            goto label_1d7b8c;
        }
    }
    ctx->pc = 0x1D7B88u;
    // 0x1d7b88: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1d7b8c:
    // 0x1d7b8c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D7B8Cu;
    {
        const bool branch_taken_0x1d7b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b8c) {
            ctx->pc = 0x1D7CC8u;
            goto label_1d7cc8;
        }
    }
    ctx->pc = 0x1D7B94u;
    // 0x1d7b94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7b98: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d7b9c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d7b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7ba0: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d7ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7ba4: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D7BA4u;
    SET_GPR_U32(ctx, 31, 0x1D7BACu);
    ctx->pc = 0x1D7BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BA4u;
            // 0x1d7ba8: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BACu; }
        if (ctx->pc != 0x1D7BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BACu; }
        if (ctx->pc != 0x1D7BACu) { return; }
    }
    ctx->pc = 0x1D7BACu;
    // 0x1d7bac: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7BACu;
    SET_GPR_U32(ctx, 31, 0x1D7BB4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BB4u; }
        if (ctx->pc != 0x1D7BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BB4u; }
        if (ctx->pc != 0x1D7BB4u) { return; }
    }
    ctx->pc = 0x1D7BB4u;
    // 0x1d7bb4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d7bb8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7bb8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7bbc: 0x0  nop
    ctx->pc = 0x1d7bbcu;
    // NOP
    // 0x1d7bc0: 0x0  nop
    ctx->pc = 0x1d7bc0u;
    // NOP
    // 0x1d7bc4: 0x9010  mfhi        $s2
    ctx->pc = 0x1d7bc4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1d7bc8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7BC8u;
    SET_GPR_U32(ctx, 31, 0x1D7BD0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BD0u; }
        if (ctx->pc != 0x1D7BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BD0u; }
        if (ctx->pc != 0x1D7BD0u) { return; }
    }
    ctx->pc = 0x1D7BD0u;
    // 0x1d7bd0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7bd4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7bd4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7bd8: 0x0  nop
    ctx->pc = 0x1d7bd8u;
    // NOP
    // 0x1d7bdc: 0x0  nop
    ctx->pc = 0x1d7bdcu;
    // NOP
    // 0x1d7be0: 0x8810  mfhi        $s1
    ctx->pc = 0x1d7be0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1d7be4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7BE4u;
    SET_GPR_U32(ctx, 31, 0x1D7BECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BECu; }
        if (ctx->pc != 0x1D7BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7BECu; }
        if (ctx->pc != 0x1D7BECu) { return; }
    }
    ctx->pc = 0x1D7BECu;
    // 0x1d7bec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7becu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1d7bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7BF0u;
    {
        const bool branch_taken_0x1d7bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bf0) {
            ctx->pc = 0x1D7C08u;
            goto label_1d7c08;
        }
    }
    ctx->pc = 0x1D7BF8u;
    // 0x1d7bf8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d7bfc: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1d7bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d7c00: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x1d7c00u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d7c04: 0x0  nop
    ctx->pc = 0x1d7c04u;
    // NOP
label_1d7c08:
    // 0x1d7c08: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7c0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7c10: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d7c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1d7c14: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d7c18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7c1c: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1d7c20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d7c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7c28: 0x0  nop
    ctx->pc = 0x1d7c28u;
    // NOP
    // 0x1d7c2c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d7c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d7c30: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D7C30u;
    SET_GPR_U32(ctx, 31, 0x1D7C38u);
    ctx->pc = 0x1D7C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C30u;
            // 0x1d7c34: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C38u; }
        if (ctx->pc != 0x1D7C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C38u; }
        if (ctx->pc != 0x1D7C38u) { return; }
    }
    ctx->pc = 0x1D7C38u;
    // 0x1d7c38: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7c3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7c40: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d7c44: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7c48: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D7C48u;
    SET_GPR_U32(ctx, 31, 0x1D7C50u);
    ctx->pc = 0x1D7C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C48u;
            // 0x1d7c4c: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C50u; }
        if (ctx->pc != 0x1D7C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C50u; }
        if (ctx->pc != 0x1D7C50u) { return; }
    }
    ctx->pc = 0x1D7C50u;
    // 0x1d7c50: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1d7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1d7c54: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7c5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7c64: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d7c64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7c68: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d7c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d7c6c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7c70: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7C70u;
    SET_GPR_U32(ctx, 31, 0x1D7C78u);
    ctx->pc = 0x1D7C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C70u;
            // 0x1d7c74: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C78u; }
        if (ctx->pc != 0x1D7C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C78u; }
        if (ctx->pc != 0x1D7C78u) { return; }
    }
    ctx->pc = 0x1D7C78u;
    // 0x1d7c78: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d7c7c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7c84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7c8c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d7c8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7c90: 0x2463ffa2  addiu       $v1, $v1, -0x5E
    ctx->pc = 0x1d7c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
    // 0x1d7c94: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7c98: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7C98u;
    SET_GPR_U32(ctx, 31, 0x1D7CA0u);
    ctx->pc = 0x1D7C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C98u;
            // 0x1d7c9c: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CA0u; }
        if (ctx->pc != 0x1D7CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CA0u; }
        if (ctx->pc != 0x1D7CA0u) { return; }
    }
    ctx->pc = 0x1D7CA0u;
    // 0x1d7ca0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d7ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7ca4: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1d7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1d7ca8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7cb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cb4: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d7cb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7cb8: 0x2482ffa2  addiu       $v0, $a0, -0x5E
    ctx->pc = 0x1d7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x1d7cbc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d7cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7cc0: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7CC0u;
    SET_GPR_U32(ctx, 31, 0x1D7CC8u);
    ctx->pc = 0x1D7CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CC0u;
            // 0x1d7cc4: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CC8u; }
        if (ctx->pc != 0x1D7CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CC8u; }
        if (ctx->pc != 0x1D7CC8u) { return; }
    }
    ctx->pc = 0x1D7CC8u;
label_1d7cc8:
    // 0x1d7cc8: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x1d7ccc: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d7cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7cd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1d7cd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d7cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7cd8: 0x0  nop
    ctx->pc = 0x1d7cd8u;
    // NOP
    // 0x1d7cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7ce0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7CE0u;
    {
        const bool branch_taken_0x1d7ce0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CE0u;
            // 0x1d7ce4: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ce0) {
            ctx->pc = 0x1D7D08u;
            goto label_1d7d08;
        }
    }
    ctx->pc = 0x1D7CE8u;
    // 0x1d7ce8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d7ce8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d7cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7cf0: 0x0  nop
    ctx->pc = 0x1d7cf0u;
    // NOP
    // 0x1d7cf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7cf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7CF8u;
    {
        const bool branch_taken_0x1d7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CF8u;
            // 0x1d7cfc: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cf8) {
            ctx->pc = 0x1D7D08u;
            goto label_1d7d08;
        }
    }
    ctx->pc = 0x1D7D00u;
label_1d7d00:
    // 0x1d7d00: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d7d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d7d04: 0x0  nop
    ctx->pc = 0x1d7d04u;
    // NOP
label_1d7d08:
    // 0x1d7d08: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d7d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d7d0c: 0x8c221d60  lw          $v0, 0x1D60($at)
    ctx->pc = 0x1d7d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7520)));
    // 0x1d7d10: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d7d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d14: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1d7d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d7d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d7d1c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1d7d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1d7d20:
    // 0x1d7d20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d7d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d7d24: 0x8c231d60  lw          $v1, 0x1D60($at)
    ctx->pc = 0x1d7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7520)));
    // 0x1d7d28: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d7d2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d7d2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d7d30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d34: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1d7d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7d38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7d3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7D3Cu;
    {
        const bool branch_taken_0x1d7d3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D3Cu;
            // 0x1d7d40: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d3c) {
            ctx->pc = 0x1D7D60u;
            goto label_1d7d60;
        }
    }
    ctx->pc = 0x1D7D44u;
    // 0x1d7d44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d7d48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d7d48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d7d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d50: 0x0  nop
    ctx->pc = 0x1d7d50u;
    // NOP
    // 0x1d7d54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d58: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d7d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d7d5c: 0x0  nop
    ctx->pc = 0x1d7d5cu;
    // NOP
label_1d7d60:
    // 0x1d7d60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d7d64: 0x8c231d60  lw          $v1, 0x1D60($at)
    ctx->pc = 0x1d7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7520)));
    // 0x1d7d68: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d7d6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d7d6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d7d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d74: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1d7d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7d7c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7D7Cu;
    {
        const bool branch_taken_0x1d7d7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D7Cu;
            // 0x1d7d80: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d7c) {
            ctx->pc = 0x1D7DA0u;
            goto label_1d7da0;
        }
    }
    ctx->pc = 0x1D7D84u;
    // 0x1d7d84: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d7d88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d7d88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d7d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7d90: 0x0  nop
    ctx->pc = 0x1d7d90u;
    // NOP
    // 0x1d7d94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7d98: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d7d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d7d9c: 0x0  nop
    ctx->pc = 0x1d7d9cu;
    // NOP
label_1d7da0:
    // 0x1d7da0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7da4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d7da8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d7da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7dac: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d7dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7db0: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D7DB0u;
    SET_GPR_U32(ctx, 31, 0x1D7DB8u);
    ctx->pc = 0x1D7DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DB0u;
            // 0x1d7db4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DB8u; }
        if (ctx->pc != 0x1D7DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DB8u; }
        if (ctx->pc != 0x1D7DB8u) { return; }
    }
    ctx->pc = 0x1D7DB8u;
    // 0x1d7db8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7dbc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d7dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1d7dc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7dc4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d7dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1d7dc8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1D7DC8u;
    SET_GPR_U32(ctx, 31, 0x1D7DD0u);
    ctx->pc = 0x1D7DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DC8u;
            // 0x1d7dcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DD0u; }
        if (ctx->pc != 0x1D7DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DD0u; }
        if (ctx->pc != 0x1D7DD0u) { return; }
    }
    ctx->pc = 0x1D7DD0u;
    // 0x1d7dd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7dd4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d7dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7dd8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1D7DD8u;
    SET_GPR_U32(ctx, 31, 0x1D7DE0u);
    ctx->pc = 0x1D7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DD8u;
            // 0x1d7ddc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DE0u; }
        if (ctx->pc != 0x1D7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DE0u; }
        if (ctx->pc != 0x1D7DE0u) { return; }
    }
    ctx->pc = 0x1D7DE0u;
    // 0x1d7de0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7de4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d7de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7de8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1D7DE8u;
    SET_GPR_U32(ctx, 31, 0x1D7DF0u);
    ctx->pc = 0x1D7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DE8u;
            // 0x1d7dec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DF0u; }
        if (ctx->pc != 0x1D7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7DF0u; }
        if (ctx->pc != 0x1D7DF0u) { return; }
    }
    ctx->pc = 0x1D7DF0u;
    // 0x1d7df0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7df4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d7df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7df8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1D7DF8u;
    SET_GPR_U32(ctx, 31, 0x1D7E00u);
    ctx->pc = 0x1D7DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DF8u;
            // 0x1d7dfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E00u; }
        if (ctx->pc != 0x1D7E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E00u; }
        if (ctx->pc != 0x1D7E00u) { return; }
    }
    ctx->pc = 0x1D7E00u;
    // 0x1d7e00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7e04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d7e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e08: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1D7E08u;
    SET_GPR_U32(ctx, 31, 0x1D7E10u);
    ctx->pc = 0x1D7E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E08u;
            // 0x1d7e0c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E10u; }
        if (ctx->pc != 0x1D7E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E10u; }
        if (ctx->pc != 0x1D7E10u) { return; }
    }
    ctx->pc = 0x1D7E10u;
    // 0x1d7e10: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d7e14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7e18: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d7e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7e1c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D7E1Cu;
    {
        const bool branch_taken_0x1d7e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e1c) {
            ctx->pc = 0x1D7E70u;
            goto label_1d7e70;
        }
    }
    ctx->pc = 0x1D7E24u;
    // 0x1d7e24: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1d7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1d7e28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7E28u;
    {
        const bool branch_taken_0x1d7e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e28) {
            ctx->pc = 0x1D7E40u;
            goto label_1d7e40;
        }
    }
    ctx->pc = 0x1D7E30u;
    // 0x1d7e30: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1D7E30u;
    SET_GPR_U32(ctx, 31, 0x1D7E38u);
    ctx->pc = 0x1D7E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E30u;
            // 0x1d7e34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E38u; }
        if (ctx->pc != 0x1D7E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E38u; }
        if (ctx->pc != 0x1D7E38u) { return; }
    }
    ctx->pc = 0x1D7E38u;
    // 0x1d7e38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7E38u;
    {
        const bool branch_taken_0x1d7e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e38) {
            ctx->pc = 0x1D7E48u;
            goto label_1d7e48;
        }
    }
    ctx->pc = 0x1D7E40u;
label_1d7e40:
    // 0x1d7e40: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D7E40u;
    SET_GPR_U32(ctx, 31, 0x1D7E48u);
    ctx->pc = 0x1D7E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E40u;
            // 0x1d7e44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E48u; }
        if (ctx->pc != 0x1D7E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E48u; }
        if (ctx->pc != 0x1D7E48u) { return; }
    }
    ctx->pc = 0x1D7E48u;
label_1d7e48:
    // 0x1d7e48: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1d7e4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7E4Cu;
    {
        const bool branch_taken_0x1d7e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e4c) {
            ctx->pc = 0x1D7E60u;
            goto label_1d7e60;
        }
    }
    ctx->pc = 0x1D7E54u;
    // 0x1d7e54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D7E54u;
    {
        const bool branch_taken_0x1d7e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E54u;
            // 0x1d7e58: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e54) {
            ctx->pc = 0x1D7E80u;
            goto label_1d7e80;
        }
    }
    ctx->pc = 0x1D7E5Cu;
    // 0x1d7e5c: 0x0  nop
    ctx->pc = 0x1d7e5cu;
    // NOP
label_1d7e60:
    // 0x1d7e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7E64u;
    {
        const bool branch_taken_0x1d7e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E64u;
            // 0x1d7e68: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e64) {
            ctx->pc = 0x1D7E80u;
            goto label_1d7e80;
        }
    }
    ctx->pc = 0x1D7E6Cu;
    // 0x1d7e6c: 0x0  nop
    ctx->pc = 0x1d7e6cu;
    // NOP
label_1d7e70:
    // 0x1d7e70: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D7E70u;
    SET_GPR_U32(ctx, 31, 0x1D7E78u);
    ctx->pc = 0x1D7E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E70u;
            // 0x1d7e74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E78u; }
        if (ctx->pc != 0x1D7E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E78u; }
        if (ctx->pc != 0x1D7E78u) { return; }
    }
    ctx->pc = 0x1D7E78u;
    // 0x1d7e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e7c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d7e80:
    // 0x1d7e80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d7e84: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d7e88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d7e8c: 0x1c40001a  bgtz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7E8Cu;
    {
        const bool branch_taken_0x1d7e8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7e8c) {
            ctx->pc = 0x1D7EF8u;
            goto label_1d7ef8;
        }
    }
    ctx->pc = 0x1D7E94u;
    // 0x1d7e94: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7e98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d7e9c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d7e9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d7ea0: 0x0  nop
    ctx->pc = 0x1d7ea0u;
    // NOP
    // 0x1d7ea4: 0x0  nop
    ctx->pc = 0x1d7ea4u;
    // NOP
    // 0x1d7ea8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7ea8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7eac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7EACu;
    {
        const bool branch_taken_0x1d7eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7eac) {
            ctx->pc = 0x1D7ED8u;
            goto label_1d7ed8;
        }
    }
    ctx->pc = 0x1D7EB4u;
    // 0x1d7eb4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d7eb8: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1d7eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1d7ebc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d7ec0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7ec4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d7ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d7ec8: 0x2484ffa2  addiu       $a0, $a0, -0x5E
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967202));
    // 0x1d7ecc: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1D7ECCu;
    SET_GPR_U32(ctx, 31, 0x1D7ED4u);
    ctx->pc = 0x1D7ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7ECCu;
            // 0x1d7ed0: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7ED4u; }
        if (ctx->pc != 0x1D7ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7ED4u; }
        if (ctx->pc != 0x1D7ED4u) { return; }
    }
    ctx->pc = 0x1D7ED4u;
    // 0x1d7ed4: 0x0  nop
    ctx->pc = 0x1d7ed4u;
    // NOP
label_1d7ed8:
    // 0x1d7ed8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1d7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1d7edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d7ee0: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1d7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1d7ee4: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1d7ee8: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1D7EE8u;
    SET_GPR_U32(ctx, 31, 0x1D7EF0u);
    ctx->pc = 0x1D7EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7EE8u;
            // 0x1d7eec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EF0u; }
        if (ctx->pc != 0x1D7EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EF0u; }
        if (ctx->pc != 0x1D7EF0u) { return; }
    }
    ctx->pc = 0x1D7EF0u;
    // 0x1d7ef0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D7EF0u;
    {
        const bool branch_taken_0x1d7ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ef0) {
            ctx->pc = 0x1D7F78u;
            goto label_1d7f78;
        }
    }
    ctx->pc = 0x1D7EF8u;
label_1d7ef8:
    // 0x1d7ef8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7efc: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d7efcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d7f00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d7f04: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1d7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1d7f08: 0x24c65bf0  addiu       $a2, $a2, 0x5BF0
    ctx->pc = 0x1d7f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23536));
    // 0x1d7f0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d7f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f10: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1d7f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f14: 0x2442ff8e  addiu       $v0, $v0, -0x72
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967182));
    // 0x1d7f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7f1c: 0x0  nop
    ctx->pc = 0x1d7f1cu;
    // NOP
    // 0x1d7f20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7f20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7f24: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1d7f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d7f28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7f2c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1d7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1d7f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7f34: 0x0  nop
    ctx->pc = 0x1d7f34u;
    // NOP
    // 0x1d7f38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7f3c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d7f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d7f40: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7f44: 0x2442ffb6  addiu       $v0, $v0, -0x4A
    ctx->pc = 0x1d7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967222));
    // 0x1d7f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7f4c: 0x0  nop
    ctx->pc = 0x1d7f4cu;
    // NOP
    // 0x1d7f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7f54: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1d7f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1d7f58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7f5c: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1d7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1d7f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7f64: 0x0  nop
    ctx->pc = 0x1d7f64u;
    // NOP
    // 0x1d7f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7f6c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1D7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F74u);
    ctx->pc = 0x1D7F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F6Cu;
            // 0x1d7f70: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F74u; }
        if (ctx->pc != 0x1D7F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F74u; }
        if (ctx->pc != 0x1D7F74u) { return; }
    }
    ctx->pc = 0x1D7F74u;
    // 0x1d7f74: 0x0  nop
    ctx->pc = 0x1d7f74u;
    // NOP
label_1d7f78:
    // 0x1d7f78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7f7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7f80: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1d7f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1d7f84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7f88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d7f8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d7f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7f90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d7f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7f94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F98u;
            // 0x1d7f9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D77F0u: goto label_1d77f0;
            case 0x1D7818u: goto label_1d7818;
            case 0x1D7858u: goto label_1d7858;
            case 0x1D7890u: goto label_1d7890;
            case 0x1D7898u: goto label_1d7898;
            case 0x1D78B8u: goto label_1d78b8;
            case 0x1D79A0u: goto label_1d79a0;
            case 0x1D7A18u: goto label_1d7a18;
            case 0x1D7AC0u: goto label_1d7ac0;
            case 0x1D7B60u: goto label_1d7b60;
            case 0x1D7B8Cu: goto label_1d7b8c;
            case 0x1D7C08u: goto label_1d7c08;
            case 0x1D7CC8u: goto label_1d7cc8;
            case 0x1D7D00u: goto label_1d7d00;
            case 0x1D7D08u: goto label_1d7d08;
            case 0x1D7D20u: goto label_1d7d20;
            case 0x1D7D60u: goto label_1d7d60;
            case 0x1D7DA0u: goto label_1d7da0;
            case 0x1D7E40u: goto label_1d7e40;
            case 0x1D7E48u: goto label_1d7e48;
            case 0x1D7E60u: goto label_1d7e60;
            case 0x1D7E70u: goto label_1d7e70;
            case 0x1D7E80u: goto label_1d7e80;
            case 0x1D7ED8u: goto label_1d7ed8;
            case 0x1D7EF8u: goto label_1d7ef8;
            case 0x1D7F78u: goto label_1d7f78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7FA0u;
}
