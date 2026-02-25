#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossMove2
// Address: 0x1d6f40 - 0x1d776c
void Stageex1BossMove2_0x1d6f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossMove2_0x1d6f40");
#endif

    ctx->pc = 0x1d6f40u;

    // 0x1d6f40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d6f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d6f44: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d6f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d6f48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d6f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d6f4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d6f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d6f50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d6f54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6f58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d6f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d6f5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6f60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d6f64: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1d6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1d6f68: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1D6F68u;
    SET_GPR_U32(ctx, 31, 0x1D6F70u);
    ctx->pc = 0x1D6F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F68u;
            // 0x1d6f6c: 0xdc25aaf0  ld          $a1, -0x5510($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945520)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F70u; }
        if (ctx->pc != 0x1D6F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F70u; }
        if (ctx->pc != 0x1D6F70u) { return; }
    }
    ctx->pc = 0x1D6F70u;
    // 0x1d6f70: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d6f74: 0xac221d68  sw          $v0, 0x1D68($at)
    ctx->pc = 0x1d6f74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7528), GPR_U32(ctx, 2));
    // 0x1d6f78: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d6f7c: 0x8c241d68  lw          $a0, 0x1D68($at)
    ctx->pc = 0x1d6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7528)));
    // 0x1d6f80: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1D6F80u;
    SET_GPR_U32(ctx, 31, 0x1D6F88u);
    ctx->pc = 0x1D6F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F80u;
            // 0x1d6f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F88u; }
        if (ctx->pc != 0x1D6F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F88u; }
        if (ctx->pc != 0x1D6F88u) { return; }
    }
    ctx->pc = 0x1D6F88u;
    // 0x1d6f88: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d6f8c: 0xac221d70  sw          $v0, 0x1D70($at)
    ctx->pc = 0x1d6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7536), GPR_U32(ctx, 2));
    // 0x1d6f90: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1d6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d6f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6f98: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D6F98u;
    {
        const bool branch_taken_0x1d6f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6f98) {
            ctx->pc = 0x1D7088u;
            goto label_1d7088;
        }
    }
    ctx->pc = 0x1D6FA0u;
    // 0x1d6fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6fa4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6FA4u;
    {
        const bool branch_taken_0x1d6fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6fa4) {
            ctx->pc = 0x1D6FE8u;
            goto label_1d6fe8;
        }
    }
    ctx->pc = 0x1D6FACu;
    // 0x1d6fac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6FACu;
    {
        const bool branch_taken_0x1d6fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fac) {
            ctx->pc = 0x1D6FC0u;
            goto label_1d6fc0;
        }
    }
    ctx->pc = 0x1D6FB4u;
    // 0x1d6fb4: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x1D6FB4u;
    {
        const bool branch_taken_0x1d6fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fb4) {
            ctx->pc = 0x1D74F0u;
            goto label_1d74f0;
        }
    }
    ctx->pc = 0x1D6FBCu;
    // 0x1d6fbc: 0x0  nop
    ctx->pc = 0x1d6fbcu;
    // NOP
label_1d6fc0:
    // 0x1d6fc0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1d6fc4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d6fc4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d6fc8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d6fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d6fcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6fd0: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1d6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1d6fd4: 0x8c221d70  lw          $v0, 0x1D70($at)
    ctx->pc = 0x1d6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7536)));
    // 0x1d6fd8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1d6fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d6fdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d6fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d6fe0: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1D6FE0u;
    {
        const bool branch_taken_0x1d6fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FE0u;
            // 0x1d6fe4: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fe0) {
            ctx->pc = 0x1D74F0u;
            goto label_1d74f0;
        }
    }
    ctx->pc = 0x1D6FE8u;
label_1d6fe8:
    // 0x1d6fe8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d6fec: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D6FECu;
    {
        const bool branch_taken_0x1d6fec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6fec) {
            ctx->pc = 0x1D7060u;
            goto label_1d7060;
        }
    }
    ctx->pc = 0x1D6FF4u;
    // 0x1d6ff4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d6ff8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1d6ffc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d6ffcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d7000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7004: 0x0  nop
    ctx->pc = 0x1d7004u;
    // NOP
    // 0x1d7008: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d700c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D700Cu;
    {
        const bool branch_taken_0x1d700c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D700Cu;
            // 0x1d7010: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d700c) {
            ctx->pc = 0x1D7028u;
            goto label_1d7028;
        }
    }
    ctx->pc = 0x1D7014u;
    // 0x1d7014: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1d7014u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1d7018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d701c: 0x0  nop
    ctx->pc = 0x1d701cu;
    // NOP
    // 0x1d7020: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d7020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7024: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1d7024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1d7028:
    // 0x1d7028: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d7028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1d702c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7030: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d7030u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d7034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7038: 0x0  nop
    ctx->pc = 0x1d7038u;
    // NOP
    // 0x1d703c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d703cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7040: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7040u;
    {
        const bool branch_taken_0x1d7040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7040u;
            // 0x1d7044: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7040) {
            ctx->pc = 0x1D7068u;
            goto label_1d7068;
        }
    }
    ctx->pc = 0x1D7048u;
    // 0x1d7048: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1d7048u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1d704c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d704cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7050: 0x0  nop
    ctx->pc = 0x1d7050u;
    // NOP
    // 0x1d7054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7058u;
    {
        const bool branch_taken_0x1d7058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7058u;
            // 0x1d705c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7058) {
            ctx->pc = 0x1D7068u;
            goto label_1d7068;
        }
    }
    ctx->pc = 0x1D7060u;
label_1d7060:
    // 0x1d7060: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d7060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d7064: 0x0  nop
    ctx->pc = 0x1d7064u;
    // NOP
label_1d7068:
    // 0x1d7068: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d7068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d706c: 0x8c221d70  lw          $v0, 0x1D70($at)
    ctx->pc = 0x1d706cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7536)));
    // 0x1d7070: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d7070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7074: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1d7074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7078: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d7078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d707c: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1D707Cu;
    {
        const bool branch_taken_0x1d707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D707Cu;
            // 0x1d7080: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d707c) {
            ctx->pc = 0x1D74F0u;
            goto label_1d74f0;
        }
    }
    ctx->pc = 0x1D7084u;
    // 0x1d7084: 0x0  nop
    ctx->pc = 0x1d7084u;
    // NOP
label_1d7088:
    // 0x1d7088: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d7088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d708c: 0x18400110  blez        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x1D708Cu;
    {
        const bool branch_taken_0x1d708c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d708c) {
            ctx->pc = 0x1D74D0u;
            goto label_1d74d0;
        }
    }
    ctx->pc = 0x1D7094u;
    // 0x1d7094: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7098: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1d7098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1d709c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1d709cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d70a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d70a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d70a4: 0x0  nop
    ctx->pc = 0x1d70a4u;
    // NOP
    // 0x1d70a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d70a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d70ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D70ACu;
    {
        const bool branch_taken_0x1d70ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D70B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70ACu;
            // 0x1d70b0: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70ac) {
            ctx->pc = 0x1D70C8u;
            goto label_1d70c8;
        }
    }
    ctx->pc = 0x1D70B4u;
    // 0x1d70b4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d70b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d70b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d70b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d70bc: 0x0  nop
    ctx->pc = 0x1d70bcu;
    // NOP
    // 0x1d70c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d70c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d70c4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1d70c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1d70c8:
    // 0x1d70c8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1d70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1d70cc: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d70ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d70d0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1d70d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1d70d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d70d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d70d8: 0x0  nop
    ctx->pc = 0x1d70d8u;
    // NOP
    // 0x1d70dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d70dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d70e0: 0x450100fd  bc1t        . + 4 + (0xFD << 2)
    ctx->pc = 0x1D70E0u;
    {
        const bool branch_taken_0x1d70e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D70E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70E0u;
            // 0x1d70e4: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e0) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D70E8u;
    // 0x1d70e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d70e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d70ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d70ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d70f0: 0x0  nop
    ctx->pc = 0x1d70f0u;
    // NOP
    // 0x1d70f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d70f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d70f8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1D70F8u;
    SET_GPR_U32(ctx, 31, 0x1D7100u);
    ctx->pc = 0x1D70FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70F8u;
            // 0x1d70fc: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7100u; }
        if (ctx->pc != 0x1D7100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7100u; }
        if (ctx->pc != 0x1D7100u) { return; }
    }
    ctx->pc = 0x1D7100u;
    // 0x1d7100: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D7100u;
    SET_GPR_U32(ctx, 31, 0x1D7108u);
    ctx->pc = 0x1D7104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7100u;
            // 0x1d7104: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7108u; }
        if (ctx->pc != 0x1D7108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7108u; }
        if (ctx->pc != 0x1D7108u) { return; }
    }
    ctx->pc = 0x1D7108u;
    // 0x1d7108: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D7108u;
    {
        const bool branch_taken_0x1d7108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7108) {
            ctx->pc = 0x1D7218u;
            goto label_1d7218;
        }
    }
    ctx->pc = 0x1D7110u;
    // 0x1d7110: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d7110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7114: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d7114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7118: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d7118u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d711c: 0x0  nop
    ctx->pc = 0x1d711cu;
    // NOP
    // 0x1d7120: 0x0  nop
    ctx->pc = 0x1d7120u;
    // NOP
    // 0x1d7124: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7124u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7128: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1D7128u;
    {
        const bool branch_taken_0x1d7128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7128) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D7130u;
    // 0x1d7130: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7134: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d7138: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d7138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d713c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7140: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D7140u;
    SET_GPR_U32(ctx, 31, 0x1D7148u);
    ctx->pc = 0x1D7144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7140u;
            // 0x1d7144: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7148u; }
        if (ctx->pc != 0x1D7148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7148u; }
        if (ctx->pc != 0x1D7148u) { return; }
    }
    ctx->pc = 0x1D7148u;
    // 0x1d7148: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7148u;
    SET_GPR_U32(ctx, 31, 0x1D7150u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7150u; }
        if (ctx->pc != 0x1D7150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7150u; }
        if (ctx->pc != 0x1D7150u) { return; }
    }
    ctx->pc = 0x1D7150u;
    // 0x1d7150: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d7150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7154: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7154u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7158: 0x0  nop
    ctx->pc = 0x1d7158u;
    // NOP
    // 0x1d715c: 0x0  nop
    ctx->pc = 0x1d715cu;
    // NOP
    // 0x1d7160: 0x9010  mfhi        $s2
    ctx->pc = 0x1d7160u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1d7164: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7164u;
    SET_GPR_U32(ctx, 31, 0x1D716Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D716Cu; }
        if (ctx->pc != 0x1D716Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D716Cu; }
        if (ctx->pc != 0x1D716Cu) { return; }
    }
    ctx->pc = 0x1D716Cu;
    // 0x1d716c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7170: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7170u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7174: 0x0  nop
    ctx->pc = 0x1d7174u;
    // NOP
    // 0x1d7178: 0x0  nop
    ctx->pc = 0x1d7178u;
    // NOP
    // 0x1d717c: 0x8810  mfhi        $s1
    ctx->pc = 0x1d717cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1d7180: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7180u;
    SET_GPR_U32(ctx, 31, 0x1D7188u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7188u; }
        if (ctx->pc != 0x1D7188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7188u; }
        if (ctx->pc != 0x1D7188u) { return; }
    }
    ctx->pc = 0x1D7188u;
    // 0x1d7188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7188u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1d718c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D718Cu;
    {
        const bool branch_taken_0x1d718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d718c) {
            ctx->pc = 0x1D71A0u;
            goto label_1d71a0;
        }
    }
    ctx->pc = 0x1D7194u;
    // 0x1d7194: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d7194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d7198: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1d7198u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d719c: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x1d719cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d71a0:
    // 0x1d71a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d71a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d71a8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1d71ac: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d71acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d71b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d71b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d71b4: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1d71b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d71b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d71bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d71bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d71c0: 0x0  nop
    ctx->pc = 0x1d71c0u;
    // NOP
    // 0x1d71c4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d71c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d71c8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D71C8u;
    SET_GPR_U32(ctx, 31, 0x1D71D0u);
    ctx->pc = 0x1D71CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71C8u;
            // 0x1d71cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71D0u; }
        if (ctx->pc != 0x1D71D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71D0u; }
        if (ctx->pc != 0x1D71D0u) { return; }
    }
    ctx->pc = 0x1D71D0u;
    // 0x1d71d0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d71d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d71d8: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d71d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d71dc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d71e0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D71E0u;
    SET_GPR_U32(ctx, 31, 0x1D71E8u);
    ctx->pc = 0x1D71E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71E0u;
            // 0x1d71e4: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71E8u; }
        if (ctx->pc != 0x1D71E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71E8u; }
        if (ctx->pc != 0x1D71E8u) { return; }
    }
    ctx->pc = 0x1D71E8u;
    // 0x1d71e8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d71ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d71f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d71f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d71f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d71f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d71f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71fc: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d71fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7200: 0x2482005e  addiu       $v0, $a0, 0x5E
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x1d7204: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d7204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7208: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7208u;
    SET_GPR_U32(ctx, 31, 0x1D7210u);
    ctx->pc = 0x1D720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7208u;
            // 0x1d720c: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7210u; }
        if (ctx->pc != 0x1D7210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7210u; }
        if (ctx->pc != 0x1D7210u) { return; }
    }
    ctx->pc = 0x1D7210u;
    // 0x1d7210: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1D7210u;
    {
        const bool branch_taken_0x1d7210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7210) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D7218u;
label_1d7218:
    // 0x1d7218: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D7218u;
    SET_GPR_U32(ctx, 31, 0x1D7220u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7220u; }
        if (ctx->pc != 0x1D7220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7220u; }
        if (ctx->pc != 0x1D7220u) { return; }
    }
    ctx->pc = 0x1D7220u;
    // 0x1d7220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7224: 0x1443004e  bne         $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D7224u;
    {
        const bool branch_taken_0x1d7224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7224) {
            ctx->pc = 0x1D7360u;
            goto label_1d7360;
        }
    }
    ctx->pc = 0x1D722Cu;
    // 0x1d722c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7230: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d7230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7234: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d7234u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d7238: 0x0  nop
    ctx->pc = 0x1d7238u;
    // NOP
    // 0x1d723c: 0x0  nop
    ctx->pc = 0x1d723cu;
    // NOP
    // 0x1d7240: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7240u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7244: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1D7244u;
    {
        const bool branch_taken_0x1d7244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7244) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D724Cu;
    // 0x1d724c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7250: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d7254: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d7254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d7258: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d7258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d725c: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D725Cu;
    SET_GPR_U32(ctx, 31, 0x1D7264u);
    ctx->pc = 0x1D7260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D725Cu;
            // 0x1d7260: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7264u; }
        if (ctx->pc != 0x1D7264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7264u; }
        if (ctx->pc != 0x1D7264u) { return; }
    }
    ctx->pc = 0x1D7264u;
    // 0x1d7264: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7264u;
    SET_GPR_U32(ctx, 31, 0x1D726Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D726Cu; }
        if (ctx->pc != 0x1D726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D726Cu; }
        if (ctx->pc != 0x1D726Cu) { return; }
    }
    ctx->pc = 0x1D726Cu;
    // 0x1d726c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d7270: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d7270u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7274: 0x0  nop
    ctx->pc = 0x1d7274u;
    // NOP
    // 0x1d7278: 0x0  nop
    ctx->pc = 0x1d7278u;
    // NOP
    // 0x1d727c: 0x9010  mfhi        $s2
    ctx->pc = 0x1d727cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1d7280: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D7280u;
    SET_GPR_U32(ctx, 31, 0x1D7288u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7288u; }
        if (ctx->pc != 0x1D7288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7288u; }
        if (ctx->pc != 0x1D7288u) { return; }
    }
    ctx->pc = 0x1D7288u;
    // 0x1d7288: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d7288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d728c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d728cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d7290: 0x0  nop
    ctx->pc = 0x1d7290u;
    // NOP
    // 0x1d7294: 0x0  nop
    ctx->pc = 0x1d7294u;
    // NOP
    // 0x1d7298: 0x8810  mfhi        $s1
    ctx->pc = 0x1d7298u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1d729c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D729Cu;
    SET_GPR_U32(ctx, 31, 0x1D72A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72A4u; }
        if (ctx->pc != 0x1D72A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72A4u; }
        if (ctx->pc != 0x1D72A4u) { return; }
    }
    ctx->pc = 0x1D72A4u;
    // 0x1d72a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d72a4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1d72a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D72A8u;
    {
        const bool branch_taken_0x1d72a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d72a8) {
            ctx->pc = 0x1D72C0u;
            goto label_1d72c0;
        }
    }
    ctx->pc = 0x1D72B0u;
    // 0x1d72b0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d72b4: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1d72b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d72b8: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x1d72b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d72bc: 0x0  nop
    ctx->pc = 0x1d72bcu;
    // NOP
label_1d72c0:
    // 0x1d72c0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d72c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d72c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d72c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d72c8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1d72cc: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d72d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d72d4: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1d72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1d72d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d72d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d72dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d72dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d72e0: 0x0  nop
    ctx->pc = 0x1d72e0u;
    // NOP
    // 0x1d72e4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d72e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d72e8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D72E8u;
    SET_GPR_U32(ctx, 31, 0x1D72F0u);
    ctx->pc = 0x1D72ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72E8u;
            // 0x1d72ec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72F0u; }
        if (ctx->pc != 0x1D72F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72F0u; }
        if (ctx->pc != 0x1D72F0u) { return; }
    }
    ctx->pc = 0x1D72F0u;
    // 0x1d72f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d72f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d72f8: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d72fc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7300: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D7300u;
    SET_GPR_U32(ctx, 31, 0x1D7308u);
    ctx->pc = 0x1D7304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7300u;
            // 0x1d7304: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7308u; }
        if (ctx->pc != 0x1D7308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7308u; }
        if (ctx->pc != 0x1D7308u) { return; }
    }
    ctx->pc = 0x1D7308u;
    // 0x1d7308: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d7308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d730c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7314: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7318: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d731c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d731cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7320: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d7320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d7324: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7328: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7328u;
    SET_GPR_U32(ctx, 31, 0x1D7330u);
    ctx->pc = 0x1D732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7328u;
            // 0x1d732c: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7330u; }
        if (ctx->pc != 0x1D7330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7330u; }
        if (ctx->pc != 0x1D7330u) { return; }
    }
    ctx->pc = 0x1D7330u;
    // 0x1d7330: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d7330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7334: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1d7338: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d7338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d733c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7340: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7344: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d7344u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7348: 0x2482005e  addiu       $v0, $a0, 0x5E
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x1d734c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d7350: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7350u;
    SET_GPR_U32(ctx, 31, 0x1D7358u);
    ctx->pc = 0x1D7354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7350u;
            // 0x1d7354: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7358u; }
        if (ctx->pc != 0x1D7358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7358u; }
        if (ctx->pc != 0x1D7358u) { return; }
    }
    ctx->pc = 0x1D7358u;
    // 0x1d7358: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1D7358u;
    {
        const bool branch_taken_0x1d7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7358) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D7360u;
label_1d7360:
    // 0x1d7360: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D7360u;
    SET_GPR_U32(ctx, 31, 0x1D7368u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7368u; }
        if (ctx->pc != 0x1D7368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7368u; }
        if (ctx->pc != 0x1D7368u) { return; }
    }
    ctx->pc = 0x1D7368u;
    // 0x1d7368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d7368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d736c: 0x1443005a  bne         $v0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D736Cu;
    {
        const bool branch_taken_0x1d736c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d736c) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D7374u;
    // 0x1d7374: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d7374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7378: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7378u;
    {
        const bool branch_taken_0x1d7378 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7378u;
            // 0x1d737c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7378) {
            ctx->pc = 0x1D738Cu;
            goto label_1d738c;
        }
    }
    ctx->pc = 0x1D7380u;
    // 0x1d7380: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7380u;
    {
        const bool branch_taken_0x1d7380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7380) {
            ctx->pc = 0x1D738Cu;
            goto label_1d738c;
        }
    }
    ctx->pc = 0x1D7388u;
    // 0x1d7388: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d7388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1d738c:
    // 0x1d738c: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D738Cu;
    {
        const bool branch_taken_0x1d738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d738c) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D7394u;
    // 0x1d7394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7398: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d739c: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d73a0: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d73a4: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D73A4u;
    SET_GPR_U32(ctx, 31, 0x1D73ACu);
    ctx->pc = 0x1D73A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73A4u;
            // 0x1d73a8: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73ACu; }
        if (ctx->pc != 0x1D73ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73ACu; }
        if (ctx->pc != 0x1D73ACu) { return; }
    }
    ctx->pc = 0x1D73ACu;
    // 0x1d73ac: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D73ACu;
    SET_GPR_U32(ctx, 31, 0x1D73B4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73B4u; }
        if (ctx->pc != 0x1D73B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73B4u; }
        if (ctx->pc != 0x1D73B4u) { return; }
    }
    ctx->pc = 0x1D73B4u;
    // 0x1d73b4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d73b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d73b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d73bc: 0x0  nop
    ctx->pc = 0x1d73bcu;
    // NOP
    // 0x1d73c0: 0x0  nop
    ctx->pc = 0x1d73c0u;
    // NOP
    // 0x1d73c4: 0x9010  mfhi        $s2
    ctx->pc = 0x1d73c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1d73c8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D73C8u;
    SET_GPR_U32(ctx, 31, 0x1D73D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73D0u; }
        if (ctx->pc != 0x1D73D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73D0u; }
        if (ctx->pc != 0x1D73D0u) { return; }
    }
    ctx->pc = 0x1D73D0u;
    // 0x1d73d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1d73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d73d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1d73d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1d73d8: 0x0  nop
    ctx->pc = 0x1d73d8u;
    // NOP
    // 0x1d73dc: 0x0  nop
    ctx->pc = 0x1d73dcu;
    // NOP
    // 0x1d73e0: 0x8810  mfhi        $s1
    ctx->pc = 0x1d73e0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1d73e4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1D73E4u;
    SET_GPR_U32(ctx, 31, 0x1D73ECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73ECu; }
        if (ctx->pc != 0x1D73ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73ECu; }
        if (ctx->pc != 0x1D73ECu) { return; }
    }
    ctx->pc = 0x1D73ECu;
    // 0x1d73ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d73ecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1d73f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D73F0u;
    {
        const bool branch_taken_0x1d73f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73f0) {
            ctx->pc = 0x1D7408u;
            goto label_1d7408;
        }
    }
    ctx->pc = 0x1D73F8u;
    // 0x1d73f8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d73fc: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1d73fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1d7400: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d7404: 0x0  nop
    ctx->pc = 0x1d7404u;
    // NOP
label_1d7408:
    // 0x1d7408: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d740c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7410: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1d7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1d7414: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d7414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d7418: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d7418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d741c: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1d741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1d7420: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d7420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7428: 0x0  nop
    ctx->pc = 0x1d7428u;
    // NOP
    // 0x1d742c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d742cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d7430: 0xc05d080  jal         func_174200
    ctx->pc = 0x1D7430u;
    SET_GPR_U32(ctx, 31, 0x1D7438u);
    ctx->pc = 0x1D7434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7430u;
            // 0x1d7434: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7438u; }
        if (ctx->pc != 0x1D7438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7438u; }
        if (ctx->pc != 0x1D7438u) { return; }
    }
    ctx->pc = 0x1D7438u;
    // 0x1d7438: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d743c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7440: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d7444: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7448: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D7448u;
    SET_GPR_U32(ctx, 31, 0x1D7450u);
    ctx->pc = 0x1D744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7448u;
            // 0x1d744c: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7450u; }
        if (ctx->pc != 0x1D7450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7450u; }
        if (ctx->pc != 0x1D7450u) { return; }
    }
    ctx->pc = 0x1D7450u;
    // 0x1d7450: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1d7454: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d745c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d745cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7460: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7464: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d7464u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7468: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d746c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7470: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7470u;
    SET_GPR_U32(ctx, 31, 0x1D7478u);
    ctx->pc = 0x1D7474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7470u;
            // 0x1d7474: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7478u; }
        if (ctx->pc != 0x1D7478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7478u; }
        if (ctx->pc != 0x1D7478u) { return; }
    }
    ctx->pc = 0x1D7478u;
    // 0x1d7478: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d747c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d747cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d7480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7484: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7488: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d748c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d748cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d7490: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1d7490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1d7494: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d7494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7498: 0xc065480  jal         func_195200
    ctx->pc = 0x1D7498u;
    SET_GPR_U32(ctx, 31, 0x1D74A0u);
    ctx->pc = 0x1D749Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7498u;
            // 0x1d749c: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74A0u; }
        if (ctx->pc != 0x1D74A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74A0u; }
        if (ctx->pc != 0x1D74A0u) { return; }
    }
    ctx->pc = 0x1D74A0u;
    // 0x1d74a0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1d74a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d74a4: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1d74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1d74a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1d74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d74ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d74acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d74b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d74b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74b4: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1d74b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1d74b8: 0x2482005e  addiu       $v0, $a0, 0x5E
    ctx->pc = 0x1d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x1d74bc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d74c0: 0xc065480  jal         func_195200
    ctx->pc = 0x1D74C0u;
    SET_GPR_U32(ctx, 31, 0x1D74C8u);
    ctx->pc = 0x1D74C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74C0u;
            // 0x1d74c4: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74C8u; }
        if (ctx->pc != 0x1D74C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74C8u; }
        if (ctx->pc != 0x1D74C8u) { return; }
    }
    ctx->pc = 0x1D74C8u;
    // 0x1d74c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D74C8u;
    {
        const bool branch_taken_0x1d74c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d74c8) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D74D0u;
label_1d74d0:
    // 0x1d74d0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d74d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d74d4: 0x0  nop
    ctx->pc = 0x1d74d4u;
    // NOP
label_1d74d8:
    // 0x1d74d8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d74d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d74dc: 0x8c221d70  lw          $v0, 0x1D70($at)
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7536)));
    // 0x1d74e0: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1d74e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d74e4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1d74e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d74e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d74e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d74ec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1d74ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1d74f0:
    // 0x1d74f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d74f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d74f4: 0x8c231d70  lw          $v1, 0x1D70($at)
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7536)));
    // 0x1d74f8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d74fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d74fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d7500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7504: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1d7504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d7508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d750c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D750Cu;
    {
        const bool branch_taken_0x1d750c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D750Cu;
            // 0x1d7510: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d750c) {
            ctx->pc = 0x1D7530u;
            goto label_1d7530;
        }
    }
    ctx->pc = 0x1D7514u;
    // 0x1d7514: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d7514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d7518: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d7518u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d751c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d751cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7520: 0x0  nop
    ctx->pc = 0x1d7520u;
    // NOP
    // 0x1d7524: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d7524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d7528: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d7528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d752c: 0x0  nop
    ctx->pc = 0x1d752cu;
    // NOP
label_1d7530:
    // 0x1d7530: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1d7530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1d7534: 0x8c231d70  lw          $v1, 0x1D70($at)
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7536)));
    // 0x1d7538: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d7538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d753c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d753cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d7540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7544: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1d7544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7548: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d754c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D754Cu;
    {
        const bool branch_taken_0x1d754c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D7550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D754Cu;
            // 0x1d7550: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d754c) {
            ctx->pc = 0x1D7570u;
            goto label_1d7570;
        }
    }
    ctx->pc = 0x1D7554u;
    // 0x1d7554: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d7554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d7558: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d7558u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d755c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d755cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7560: 0x0  nop
    ctx->pc = 0x1d7560u;
    // NOP
    // 0x1d7564: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d7564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d7568: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d7568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d756c: 0x0  nop
    ctx->pc = 0x1d756cu;
    // NOP
label_1d7570:
    // 0x1d7570: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7574: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d7574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1d7578: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d757c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d7580: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D7580u;
    SET_GPR_U32(ctx, 31, 0x1D7588u);
    ctx->pc = 0x1D7584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7580u;
            // 0x1d7584: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7588u; }
        if (ctx->pc != 0x1D7588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7588u; }
        if (ctx->pc != 0x1D7588u) { return; }
    }
    ctx->pc = 0x1D7588u;
    // 0x1d7588: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d7588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d758c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d758cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1d7590: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7594: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d7594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1d7598: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1D7598u;
    SET_GPR_U32(ctx, 31, 0x1D75A0u);
    ctx->pc = 0x1D759Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7598u;
            // 0x1d759c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75A0u; }
        if (ctx->pc != 0x1D75A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75A0u; }
        if (ctx->pc != 0x1D75A0u) { return; }
    }
    ctx->pc = 0x1D75A0u;
    // 0x1d75a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d75a4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d75a8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1D75A8u;
    SET_GPR_U32(ctx, 31, 0x1D75B0u);
    ctx->pc = 0x1D75ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75A8u;
            // 0x1d75ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75B0u; }
        if (ctx->pc != 0x1D75B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75B0u; }
        if (ctx->pc != 0x1D75B0u) { return; }
    }
    ctx->pc = 0x1D75B0u;
    // 0x1d75b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d75b4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d75b8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1D75B8u;
    SET_GPR_U32(ctx, 31, 0x1D75C0u);
    ctx->pc = 0x1D75BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75B8u;
            // 0x1d75bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75C0u; }
        if (ctx->pc != 0x1D75C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75C0u; }
        if (ctx->pc != 0x1D75C0u) { return; }
    }
    ctx->pc = 0x1D75C0u;
    // 0x1d75c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d75c4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d75c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d75c8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1D75C8u;
    SET_GPR_U32(ctx, 31, 0x1D75D0u);
    ctx->pc = 0x1D75CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75C8u;
            // 0x1d75cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75D0u; }
        if (ctx->pc != 0x1D75D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75D0u; }
        if (ctx->pc != 0x1D75D0u) { return; }
    }
    ctx->pc = 0x1D75D0u;
    // 0x1d75d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d75d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d75d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75d8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1D75D8u;
    SET_GPR_U32(ctx, 31, 0x1D75E0u);
    ctx->pc = 0x1D75DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75D8u;
            // 0x1d75dc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75E0u; }
        if (ctx->pc != 0x1D75E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75E0u; }
        if (ctx->pc != 0x1D75E0u) { return; }
    }
    ctx->pc = 0x1D75E0u;
    // 0x1d75e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d75e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d75e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d75e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d75ec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D75ECu;
    {
        const bool branch_taken_0x1d75ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d75ec) {
            ctx->pc = 0x1D7640u;
            goto label_1d7640;
        }
    }
    ctx->pc = 0x1D75F4u;
    // 0x1d75f4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1d75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1d75f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D75F8u;
    {
        const bool branch_taken_0x1d75f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d75f8) {
            ctx->pc = 0x1D7610u;
            goto label_1d7610;
        }
    }
    ctx->pc = 0x1D7600u;
    // 0x1d7600: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1D7600u;
    SET_GPR_U32(ctx, 31, 0x1D7608u);
    ctx->pc = 0x1D7604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7600u;
            // 0x1d7604: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7608u; }
        if (ctx->pc != 0x1D7608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7608u; }
        if (ctx->pc != 0x1D7608u) { return; }
    }
    ctx->pc = 0x1D7608u;
    // 0x1d7608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7608u;
    {
        const bool branch_taken_0x1d7608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7608) {
            ctx->pc = 0x1D7618u;
            goto label_1d7618;
        }
    }
    ctx->pc = 0x1D7610u;
label_1d7610:
    // 0x1d7610: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D7610u;
    SET_GPR_U32(ctx, 31, 0x1D7618u);
    ctx->pc = 0x1D7614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7610u;
            // 0x1d7614: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7618u; }
        if (ctx->pc != 0x1D7618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7618u; }
        if (ctx->pc != 0x1D7618u) { return; }
    }
    ctx->pc = 0x1D7618u;
label_1d7618:
    // 0x1d7618: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1d7618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1d761c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D761Cu;
    {
        const bool branch_taken_0x1d761c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d761c) {
            ctx->pc = 0x1D7630u;
            goto label_1d7630;
        }
    }
    ctx->pc = 0x1D7624u;
    // 0x1d7624: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D7624u;
    {
        const bool branch_taken_0x1d7624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7624u;
            // 0x1d7628: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7624) {
            ctx->pc = 0x1D7650u;
            goto label_1d7650;
        }
    }
    ctx->pc = 0x1D762Cu;
    // 0x1d762c: 0x0  nop
    ctx->pc = 0x1d762cu;
    // NOP
label_1d7630:
    // 0x1d7630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7634u;
    {
        const bool branch_taken_0x1d7634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7634u;
            // 0x1d7638: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7634) {
            ctx->pc = 0x1D7650u;
            goto label_1d7650;
        }
    }
    ctx->pc = 0x1D763Cu;
    // 0x1d763c: 0x0  nop
    ctx->pc = 0x1d763cu;
    // NOP
label_1d7640:
    // 0x1d7640: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1D7640u;
    SET_GPR_U32(ctx, 31, 0x1D7648u);
    ctx->pc = 0x1D7644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7640u;
            // 0x1d7644: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7648u; }
        if (ctx->pc != 0x1D7648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7648u; }
        if (ctx->pc != 0x1D7648u) { return; }
    }
    ctx->pc = 0x1D7648u;
    // 0x1d7648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d764c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d764cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d7650:
    // 0x1d7650: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d7650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d7654: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d7654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d7658: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d765c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d7660: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d7660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1d7664: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d7668: 0x1c400019  bgtz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D7668u;
    {
        const bool branch_taken_0x1d7668 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7668) {
            ctx->pc = 0x1D76D0u;
            goto label_1d76d0;
        }
    }
    ctx->pc = 0x1D7670u;
    // 0x1d7670: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d7670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7674: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d7674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d7678: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d7678u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d767c: 0x0  nop
    ctx->pc = 0x1d767cu;
    // NOP
    // 0x1d7680: 0x0  nop
    ctx->pc = 0x1d7680u;
    // NOP
    // 0x1d7684: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d7688: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7688u;
    {
        const bool branch_taken_0x1d7688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7688) {
            ctx->pc = 0x1D76B0u;
            goto label_1d76b0;
        }
    }
    ctx->pc = 0x1D7690u;
    // 0x1d7690: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d7690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d7694: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1d7694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x1d7698: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d769c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d769cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d76a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d76a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d76a4: 0x2484005e  addiu       $a0, $a0, 0x5E
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x1d76a8: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1D76A8u;
    SET_GPR_U32(ctx, 31, 0x1D76B0u);
    ctx->pc = 0x1D76ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D76A8u;
            // 0x1d76ac: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76B0u; }
        if (ctx->pc != 0x1D76B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76B0u; }
        if (ctx->pc != 0x1D76B0u) { return; }
    }
    ctx->pc = 0x1D76B0u;
label_1d76b0:
    // 0x1d76b0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1d76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1d76b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d76b8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1d76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1d76bc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1d76bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1d76c0: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1D76C0u;
    SET_GPR_U32(ctx, 31, 0x1D76C8u);
    ctx->pc = 0x1D76C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D76C0u;
            // 0x1d76c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76C8u; }
        if (ctx->pc != 0x1D76C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D76C8u; }
        if (ctx->pc != 0x1D76C8u) { return; }
    }
    ctx->pc = 0x1D76C8u;
    // 0x1d76c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D76C8u;
    {
        const bool branch_taken_0x1d76c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d76c8) {
            ctx->pc = 0x1D7750u;
            goto label_1d7750;
        }
    }
    ctx->pc = 0x1D76D0u;
label_1d76d0:
    // 0x1d76d0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d76d4: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d76d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1d76d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d76dc: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1d76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1d76e0: 0x24c65bf0  addiu       $a2, $a2, 0x5BF0
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23536));
    // 0x1d76e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d76e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1d76e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76ec: 0x2442004a  addiu       $v0, $v0, 0x4A
    ctx->pc = 0x1d76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 74));
    // 0x1d76f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d76f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d76f4: 0x0  nop
    ctx->pc = 0x1d76f4u;
    // NOP
    // 0x1d76f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d76f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d76fc: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1d76fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d7700: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7704: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1d7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1d7708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d770c: 0x0  nop
    ctx->pc = 0x1d770cu;
    // NOP
    // 0x1d7710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7714: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d7714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d7718: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d771c: 0x24420072  addiu       $v0, $v0, 0x72
    ctx->pc = 0x1d771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 114));
    // 0x1d7720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7724: 0x0  nop
    ctx->pc = 0x1d7724u;
    // NOP
    // 0x1d7728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d772c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1d772cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1d7730: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d7730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d7734: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1d7734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1d7738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d773c: 0x0  nop
    ctx->pc = 0x1d773cu;
    // NOP
    // 0x1d7740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d7744: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1D7744u;
    SET_GPR_U32(ctx, 31, 0x1D774Cu);
    ctx->pc = 0x1D7748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7744u;
            // 0x1d7748: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D774Cu; }
        if (ctx->pc != 0x1D774Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D774Cu; }
        if (ctx->pc != 0x1D774Cu) { return; }
    }
    ctx->pc = 0x1D774Cu;
    // 0x1d774c: 0x0  nop
    ctx->pc = 0x1d774cu;
    // NOP
label_1d7750:
    // 0x1d7750: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7754: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d7754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7758: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d775c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d775cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7764: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7764u;
            // 0x1d7768: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6FC0u: goto label_1d6fc0;
            case 0x1D6FE8u: goto label_1d6fe8;
            case 0x1D7028u: goto label_1d7028;
            case 0x1D7060u: goto label_1d7060;
            case 0x1D7068u: goto label_1d7068;
            case 0x1D7088u: goto label_1d7088;
            case 0x1D70C8u: goto label_1d70c8;
            case 0x1D71A0u: goto label_1d71a0;
            case 0x1D7218u: goto label_1d7218;
            case 0x1D72C0u: goto label_1d72c0;
            case 0x1D7360u: goto label_1d7360;
            case 0x1D738Cu: goto label_1d738c;
            case 0x1D7408u: goto label_1d7408;
            case 0x1D74D0u: goto label_1d74d0;
            case 0x1D74D8u: goto label_1d74d8;
            case 0x1D74F0u: goto label_1d74f0;
            case 0x1D7530u: goto label_1d7530;
            case 0x1D7570u: goto label_1d7570;
            case 0x1D7610u: goto label_1d7610;
            case 0x1D7618u: goto label_1d7618;
            case 0x1D7630u: goto label_1d7630;
            case 0x1D7640u: goto label_1d7640;
            case 0x1D7650u: goto label_1d7650;
            case 0x1D76B0u: goto label_1d76b0;
            case 0x1D76D0u: goto label_1d76d0;
            case 0x1D7750u: goto label_1d7750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D776Cu;
}
