#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossMove2
// Address: 0x162e40 - 0x1635d4
void Stage1BossMove2_0x162e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossMove2_0x162e40");
#endif

    ctx->pc = 0x162e40u;

    // 0x162e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x162e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x162e44: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x162e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x162e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x162e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x162e4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x162e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x162e50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x162e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x162e54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x162e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x162e58: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x162e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x162e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x162e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x162e64: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x162e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x162e68: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x162E68u;
    SET_GPR_U32(ctx, 31, 0x162E70u);
    ctx->pc = 0x162E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E68u;
            // 0x162e6c: 0xdc259d50  ld          $a1, -0x62B0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294942032)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E70u; }
        if (ctx->pc != 0x162E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E70u; }
        if (ctx->pc != 0x162E70u) { return; }
    }
    ctx->pc = 0x162E70u;
    // 0x162e70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x162e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x162e74: 0xac224bf0  sw          $v0, 0x4BF0($at)
    ctx->pc = 0x162e74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19440), GPR_U32(ctx, 2));
    // 0x162e78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x162e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x162e7c: 0x8c244bf0  lw          $a0, 0x4BF0($at)
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19440)));
    // 0x162e80: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x162E80u;
    SET_GPR_U32(ctx, 31, 0x162E88u);
    ctx->pc = 0x162E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162E80u;
            // 0x162e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E88u; }
        if (ctx->pc != 0x162E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162E88u; }
        if (ctx->pc != 0x162E88u) { return; }
    }
    ctx->pc = 0x162E88u;
    // 0x162e88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x162e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x162e8c: 0xac224bf8  sw          $v0, 0x4BF8($at)
    ctx->pc = 0x162e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19448), GPR_U32(ctx, 2));
    // 0x162e90: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x162e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x162e94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162e98: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x162E98u;
    {
        const bool branch_taken_0x162e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162e98) {
            ctx->pc = 0x162F88u;
            goto label_162f88;
        }
    }
    ctx->pc = 0x162EA0u;
    // 0x162ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162ea4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x162EA4u;
    {
        const bool branch_taken_0x162ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162ea4) {
            ctx->pc = 0x162EE8u;
            goto label_162ee8;
        }
    }
    ctx->pc = 0x162EACu;
    // 0x162eac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162EACu;
    {
        const bool branch_taken_0x162eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162eac) {
            ctx->pc = 0x162EC0u;
            goto label_162ec0;
        }
    }
    ctx->pc = 0x162EB4u;
    // 0x162eb4: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x162EB4u;
    {
        const bool branch_taken_0x162eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162eb4) {
            ctx->pc = 0x163358u;
            goto label_163358;
        }
    }
    ctx->pc = 0x162EBCu;
    // 0x162ebc: 0x0  nop
    ctx->pc = 0x162ebcu;
    // NOP
label_162ec0:
    // 0x162ec0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x162ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x162ec4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162ec4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162ec8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x162ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x162ecc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162ed0: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x162ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x162ed4: 0x8c224bf8  lw          $v0, 0x4BF8($at)
    ctx->pc = 0x162ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19448)));
    // 0x162ed8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x162ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162edc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x162edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x162ee0: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x162EE0u;
    {
        const bool branch_taken_0x162ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162EE0u;
            // 0x162ee4: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ee0) {
            ctx->pc = 0x163358u;
            goto label_163358;
        }
    }
    ctx->pc = 0x162EE8u;
label_162ee8:
    // 0x162ee8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x162ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x162eec: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x162EECu;
    {
        const bool branch_taken_0x162eec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x162eec) {
            ctx->pc = 0x162F60u;
            goto label_162f60;
        }
    }
    ctx->pc = 0x162EF4u;
    // 0x162ef4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x162ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162ef8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x162ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x162efc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162efcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f04: 0x0  nop
    ctx->pc = 0x162f04u;
    // NOP
    // 0x162f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162f0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x162F0Cu;
    {
        const bool branch_taken_0x162f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F0Cu;
            // 0x162f10: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f0c) {
            ctx->pc = 0x162F28u;
            goto label_162f28;
        }
    }
    ctx->pc = 0x162F14u;
    // 0x162f14: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x162f14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x162f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f1c: 0x0  nop
    ctx->pc = 0x162f1cu;
    // NOP
    // 0x162f20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162f24: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x162f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_162f28:
    // 0x162f28: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x162f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x162f2c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x162f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162f30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f38: 0x0  nop
    ctx->pc = 0x162f38u;
    // NOP
    // 0x162f3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162f40: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x162F40u;
    {
        const bool branch_taken_0x162f40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F40u;
            // 0x162f44: 0x3c023b03  lui         $v0, 0x3B03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f40) {
            ctx->pc = 0x162F68u;
            goto label_162f68;
        }
    }
    ctx->pc = 0x162F48u;
    // 0x162f48: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x162f48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x162f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f50: 0x0  nop
    ctx->pc = 0x162f50u;
    // NOP
    // 0x162f54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162f58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162F58u;
    {
        const bool branch_taken_0x162f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F58u;
            // 0x162f5c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f58) {
            ctx->pc = 0x162F68u;
            goto label_162f68;
        }
    }
    ctx->pc = 0x162F60u;
label_162f60:
    // 0x162f60: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x162f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x162f64: 0x0  nop
    ctx->pc = 0x162f64u;
    // NOP
label_162f68:
    // 0x162f68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x162f6c: 0x8c224bf8  lw          $v0, 0x4BF8($at)
    ctx->pc = 0x162f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19448)));
    // 0x162f70: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x162f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f74: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x162f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x162f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x162f7c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x162F7Cu;
    {
        const bool branch_taken_0x162f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162F7Cu;
            // 0x162f80: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f7c) {
            ctx->pc = 0x163358u;
            goto label_163358;
        }
    }
    ctx->pc = 0x162F84u;
    // 0x162f84: 0x0  nop
    ctx->pc = 0x162f84u;
    // NOP
label_162f88:
    // 0x162f88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x162f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x162f8c: 0x184000ea  blez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x162F8Cu;
    {
        const bool branch_taken_0x162f8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x162f8c) {
            ctx->pc = 0x163338u;
            goto label_163338;
        }
    }
    ctx->pc = 0x162F94u;
    // 0x162f94: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x162f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f98: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x162f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x162f9c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162f9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x162fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162fa4: 0x0  nop
    ctx->pc = 0x162fa4u;
    // NOP
    // 0x162fa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162fac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x162FACu;
    {
        const bool branch_taken_0x162fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FACu;
            // 0x162fb0: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fac) {
            ctx->pc = 0x162FC8u;
            goto label_162fc8;
        }
    }
    ctx->pc = 0x162FB4u;
    // 0x162fb4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162fb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162fbc: 0x0  nop
    ctx->pc = 0x162fbcu;
    // NOP
    // 0x162fc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162fc4: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x162fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_162fc8:
    // 0x162fc8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x162fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x162fcc: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x162fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162fd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x162fd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x162fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162fd8: 0x0  nop
    ctx->pc = 0x162fd8u;
    // NOP
    // 0x162fdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162fe0: 0x450100d7  bc1t        . + 4 + (0xD7 << 2)
    ctx->pc = 0x162FE0u;
    {
        const bool branch_taken_0x162fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162FE0u;
            // 0x162fe4: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fe0) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x162FE8u;
    // 0x162fe8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162fe8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x162fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ff0: 0x0  nop
    ctx->pc = 0x162ff0u;
    // NOP
    // 0x162ff4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162ff8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x162FF8u;
    SET_GPR_U32(ctx, 31, 0x163000u);
    ctx->pc = 0x162FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162FF8u;
            // 0x162ffc: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163000u; }
        if (ctx->pc != 0x163000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163000u; }
        if (ctx->pc != 0x163000u) { return; }
    }
    ctx->pc = 0x163000u;
    // 0x163000: 0xc065d00  jal         func_197400
    ctx->pc = 0x163000u;
    SET_GPR_U32(ctx, 31, 0x163008u);
    ctx->pc = 0x163004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163000u;
            // 0x163004: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163008u; }
        if (ctx->pc != 0x163008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163008u; }
        if (ctx->pc != 0x163008u) { return; }
    }
    ctx->pc = 0x163008u;
    // 0x163008: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x163008u;
    {
        const bool branch_taken_0x163008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163008) {
            ctx->pc = 0x1630F8u;
            goto label_1630f8;
        }
    }
    ctx->pc = 0x163010u;
    // 0x163010: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x163010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163014: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x163014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x163018: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x163018u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16301c: 0x0  nop
    ctx->pc = 0x16301cu;
    // NOP
    // 0x163020: 0x0  nop
    ctx->pc = 0x163020u;
    // NOP
    // 0x163024: 0x1010  mfhi        $v0
    ctx->pc = 0x163024u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x163028: 0x144000c5  bnez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x163028u;
    {
        const bool branch_taken_0x163028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163028) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x163030u;
    // 0x163030: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x163030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163034: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x163034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x163038: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x163038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16303c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x16303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x163040: 0xc059a4c  jal         func_166930
    ctx->pc = 0x163040u;
    SET_GPR_U32(ctx, 31, 0x163048u);
    ctx->pc = 0x163044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163040u;
            // 0x163044: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163048u; }
        if (ctx->pc != 0x163048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163048u; }
        if (ctx->pc != 0x163048u) { return; }
    }
    ctx->pc = 0x163048u;
    // 0x163048: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x163048u;
    SET_GPR_U32(ctx, 31, 0x163050u);
    ctx->pc = 0x16304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163048u;
            // 0x16304c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163050u; }
        if (ctx->pc != 0x163050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163050u; }
        if (ctx->pc != 0x163050u) { return; }
    }
    ctx->pc = 0x163050u;
    // 0x163050: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x163054: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x163054u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x163058: 0x0  nop
    ctx->pc = 0x163058u;
    // NOP
    // 0x16305c: 0x0  nop
    ctx->pc = 0x16305cu;
    // NOP
    // 0x163060: 0x8810  mfhi        $s1
    ctx->pc = 0x163060u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x163064: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x163064u;
    SET_GPR_U32(ctx, 31, 0x16306Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16306Cu; }
        if (ctx->pc != 0x16306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16306Cu; }
        if (ctx->pc != 0x16306Cu) { return; }
    }
    ctx->pc = 0x16306Cu;
    // 0x16306c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16306cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x163070: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163070u;
    {
        const bool branch_taken_0x163070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163070) {
            ctx->pc = 0x163080u;
            goto label_163080;
        }
    }
    ctx->pc = 0x163078u;
    // 0x163078: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x163078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x16307c: 0x118823  negu        $s1, $s1
    ctx->pc = 0x16307cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_163080:
    // 0x163080: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x163080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163084: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163088: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x163088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x16308c: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x16308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x163090: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163094: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x163098: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x163098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16309c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16309cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1630a0: 0x0  nop
    ctx->pc = 0x1630a0u;
    // NOP
    // 0x1630a4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1630a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1630a8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1630A8u;
    SET_GPR_U32(ctx, 31, 0x1630B0u);
    ctx->pc = 0x1630ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1630A8u;
            // 0x1630ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630B0u; }
        if (ctx->pc != 0x1630B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630B0u; }
        if (ctx->pc != 0x1630B0u) { return; }
    }
    ctx->pc = 0x1630B0u;
    // 0x1630b0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1630b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1630b8: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1630b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1630bc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1630bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1630c0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1630C0u;
    SET_GPR_U32(ctx, 31, 0x1630C8u);
    ctx->pc = 0x1630C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1630C0u;
            // 0x1630c4: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630C8u; }
        if (ctx->pc != 0x1630C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630C8u; }
        if (ctx->pc != 0x1630C8u) { return; }
    }
    ctx->pc = 0x1630C8u;
    // 0x1630c8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1630c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1630cc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1630d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1630d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1630d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1630d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1630d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1630d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630dc: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1630dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1630e0: 0x2482005e  addiu       $v0, $a0, 0x5E
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x1630e4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1630e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1630e8: 0xc065480  jal         func_195200
    ctx->pc = 0x1630E8u;
    SET_GPR_U32(ctx, 31, 0x1630F0u);
    ctx->pc = 0x1630ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1630E8u;
            // 0x1630ec: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630F0u; }
        if (ctx->pc != 0x1630F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630F0u; }
        if (ctx->pc != 0x1630F0u) { return; }
    }
    ctx->pc = 0x1630F0u;
    // 0x1630f0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1630F0u;
    {
        const bool branch_taken_0x1630f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1630f0) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x1630F8u;
label_1630f8:
    // 0x1630f8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1630F8u;
    SET_GPR_U32(ctx, 31, 0x163100u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163100u; }
        if (ctx->pc != 0x163100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163100u; }
        if (ctx->pc != 0x163100u) { return; }
    }
    ctx->pc = 0x163100u;
    // 0x163100: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163104: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x163104u;
    {
        const bool branch_taken_0x163104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x163104) {
            ctx->pc = 0x163218u;
            goto label_163218;
        }
    }
    ctx->pc = 0x16310Cu;
    // 0x16310c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x16310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163110: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x163110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163114: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x163114u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x163118: 0x0  nop
    ctx->pc = 0x163118u;
    // NOP
    // 0x16311c: 0x0  nop
    ctx->pc = 0x16311cu;
    // NOP
    // 0x163120: 0x1010  mfhi        $v0
    ctx->pc = 0x163120u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x163124: 0x14400086  bnez        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x163124u;
    {
        const bool branch_taken_0x163124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163124) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x16312Cu;
    // 0x16312c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163130: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x163130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x163134: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x163134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163138: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x163138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16313c: 0xc059a4c  jal         func_166930
    ctx->pc = 0x16313Cu;
    SET_GPR_U32(ctx, 31, 0x163144u);
    ctx->pc = 0x163140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16313Cu;
            // 0x163140: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163144u; }
        if (ctx->pc != 0x163144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163144u; }
        if (ctx->pc != 0x163144u) { return; }
    }
    ctx->pc = 0x163144u;
    // 0x163144: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x163144u;
    SET_GPR_U32(ctx, 31, 0x16314Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16314Cu; }
        if (ctx->pc != 0x16314Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16314Cu; }
        if (ctx->pc != 0x16314Cu) { return; }
    }
    ctx->pc = 0x16314Cu;
    // 0x16314c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x163150: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x163150u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x163154: 0x0  nop
    ctx->pc = 0x163154u;
    // NOP
    // 0x163158: 0x0  nop
    ctx->pc = 0x163158u;
    // NOP
    // 0x16315c: 0x9010  mfhi        $s2
    ctx->pc = 0x16315cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x163160: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x163160u;
    SET_GPR_U32(ctx, 31, 0x163168u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163168u; }
        if (ctx->pc != 0x163168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163168u; }
        if (ctx->pc != 0x163168u) { return; }
    }
    ctx->pc = 0x163168u;
    // 0x163168: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16316c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16316cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x163170: 0x0  nop
    ctx->pc = 0x163170u;
    // NOP
    // 0x163174: 0x0  nop
    ctx->pc = 0x163174u;
    // NOP
    // 0x163178: 0x8810  mfhi        $s1
    ctx->pc = 0x163178u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x16317c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16317Cu;
    SET_GPR_U32(ctx, 31, 0x163184u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163184u; }
        if (ctx->pc != 0x163184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163184u; }
        if (ctx->pc != 0x163184u) { return; }
    }
    ctx->pc = 0x163184u;
    // 0x163184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x163184u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x163188: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163188u;
    {
        const bool branch_taken_0x163188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163188) {
            ctx->pc = 0x1631A0u;
            goto label_1631a0;
        }
    }
    ctx->pc = 0x163190u;
    // 0x163190: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x163190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x163194: 0x118823  negu        $s1, $s1
    ctx->pc = 0x163194u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x163198: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16319c: 0x0  nop
    ctx->pc = 0x16319cu;
    // NOP
label_1631a0:
    // 0x1631a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1631a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1631a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1631a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1631a8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1631a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1631ac: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1631acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1631b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1631b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1631b4: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1631b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1631b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1631bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631c0: 0x0  nop
    ctx->pc = 0x1631c0u;
    // NOP
    // 0x1631c4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1631c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1631c8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1631C8u;
    SET_GPR_U32(ctx, 31, 0x1631D0u);
    ctx->pc = 0x1631CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1631C8u;
            // 0x1631cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631D0u; }
        if (ctx->pc != 0x1631D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631D0u; }
        if (ctx->pc != 0x1631D0u) { return; }
    }
    ctx->pc = 0x1631D0u;
    // 0x1631d0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1631d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1631d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1631d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1631d8: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1631d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1631dc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1631e0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1631E0u;
    SET_GPR_U32(ctx, 31, 0x1631E8u);
    ctx->pc = 0x1631E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1631E0u;
            // 0x1631e4: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631E8u; }
        if (ctx->pc != 0x1631E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631E8u; }
        if (ctx->pc != 0x1631E8u) { return; }
    }
    ctx->pc = 0x1631E8u;
    // 0x1631e8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1631e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1631ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1631ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1631f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1631f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1631f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1631f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631fc: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x1631fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x163200: 0x2482005e  addiu       $v0, $a0, 0x5E
    ctx->pc = 0x163200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x163204: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x163208: 0xc065480  jal         func_195200
    ctx->pc = 0x163208u;
    SET_GPR_U32(ctx, 31, 0x163210u);
    ctx->pc = 0x16320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163208u;
            // 0x16320c: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163210u; }
        if (ctx->pc != 0x163210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163210u; }
        if (ctx->pc != 0x163210u) { return; }
    }
    ctx->pc = 0x163210u;
    // 0x163210: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x163210u;
    {
        const bool branch_taken_0x163210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163210) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x163218u;
label_163218:
    // 0x163218: 0xc065d00  jal         func_197400
    ctx->pc = 0x163218u;
    SET_GPR_U32(ctx, 31, 0x163220u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163220u; }
        if (ctx->pc != 0x163220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163220u; }
        if (ctx->pc != 0x163220u) { return; }
    }
    ctx->pc = 0x163220u;
    // 0x163220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163224: 0x14430046  bne         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x163224u;
    {
        const bool branch_taken_0x163224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x163224) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x16322Cu;
    // 0x16322c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x16322cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163230: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x163230u;
    {
        const bool branch_taken_0x163230 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x163234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163230u;
            // 0x163234: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163230) {
            ctx->pc = 0x163244u;
            goto label_163244;
        }
    }
    ctx->pc = 0x163238u;
    // 0x163238: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x163238u;
    {
        const bool branch_taken_0x163238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163238) {
            ctx->pc = 0x163244u;
            goto label_163244;
        }
    }
    ctx->pc = 0x163240u;
    // 0x163240: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x163240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_163244:
    // 0x163244: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x163244u;
    {
        const bool branch_taken_0x163244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163244) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x16324Cu;
    // 0x16324c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163250: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x163250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x163254: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x163254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163258: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x163258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16325c: 0xc059a4c  jal         func_166930
    ctx->pc = 0x16325Cu;
    SET_GPR_U32(ctx, 31, 0x163264u);
    ctx->pc = 0x163260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16325Cu;
            // 0x163260: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163264u; }
        if (ctx->pc != 0x163264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163264u; }
        if (ctx->pc != 0x163264u) { return; }
    }
    ctx->pc = 0x163264u;
    // 0x163264: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x163264u;
    SET_GPR_U32(ctx, 31, 0x16326Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16326Cu; }
        if (ctx->pc != 0x16326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16326Cu; }
        if (ctx->pc != 0x16326Cu) { return; }
    }
    ctx->pc = 0x16326Cu;
    // 0x16326c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x16326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x163270: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x163270u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x163274: 0x0  nop
    ctx->pc = 0x163274u;
    // NOP
    // 0x163278: 0x0  nop
    ctx->pc = 0x163278u;
    // NOP
    // 0x16327c: 0x9010  mfhi        $s2
    ctx->pc = 0x16327cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x163280: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x163280u;
    SET_GPR_U32(ctx, 31, 0x163288u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163288u; }
        if (ctx->pc != 0x163288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163288u; }
        if (ctx->pc != 0x163288u) { return; }
    }
    ctx->pc = 0x163288u;
    // 0x163288: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x163288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16328c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16328cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x163290: 0x0  nop
    ctx->pc = 0x163290u;
    // NOP
    // 0x163294: 0x0  nop
    ctx->pc = 0x163294u;
    // NOP
    // 0x163298: 0x8810  mfhi        $s1
    ctx->pc = 0x163298u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x16329c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16329Cu;
    SET_GPR_U32(ctx, 31, 0x1632A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632A4u; }
        if (ctx->pc != 0x1632A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632A4u; }
        if (ctx->pc != 0x1632A4u) { return; }
    }
    ctx->pc = 0x1632A4u;
    // 0x1632a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1632a4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1632a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1632A8u;
    {
        const bool branch_taken_0x1632a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1632a8) {
            ctx->pc = 0x1632C0u;
            goto label_1632c0;
        }
    }
    ctx->pc = 0x1632B0u;
    // 0x1632b0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1632b4: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1632b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1632b8: 0x529023  subu        $s2, $v0, $s2
    ctx->pc = 0x1632b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1632bc: 0x0  nop
    ctx->pc = 0x1632bcu;
    // NOP
label_1632c0:
    // 0x1632c0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1632c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1632c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1632c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1632c8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1632cc: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1632d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1632d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1632d4: 0x244200d2  addiu       $v0, $v0, 0xD2
    ctx->pc = 0x1632d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1632d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1632d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1632dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1632dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1632e0: 0x0  nop
    ctx->pc = 0x1632e0u;
    // NOP
    // 0x1632e4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1632e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1632e8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1632E8u;
    SET_GPR_U32(ctx, 31, 0x1632F0u);
    ctx->pc = 0x1632ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1632E8u;
            // 0x1632ec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632F0u; }
        if (ctx->pc != 0x1632F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632F0u; }
        if (ctx->pc != 0x1632F0u) { return; }
    }
    ctx->pc = 0x1632F0u;
    // 0x1632f0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1632f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1632f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1632f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1632f8: 0x2463005e  addiu       $v1, $v1, 0x5E
    ctx->pc = 0x1632f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
    // 0x1632fc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1632fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x163300: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x163300u;
    SET_GPR_U32(ctx, 31, 0x163308u);
    ctx->pc = 0x163304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163300u;
            // 0x163304: 0x244500d2  addiu       $a1, $v0, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163308u; }
        if (ctx->pc != 0x163308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163308u; }
        if (ctx->pc != 0x163308u) { return; }
    }
    ctx->pc = 0x163308u;
    // 0x163308: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16330c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x163310: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x163310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x163314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163318: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x163318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16331c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x16331cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x163320: 0x2482005e  addiu       $v0, $a0, 0x5E
    ctx->pc = 0x163320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x163324: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x163324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x163328: 0xc065480  jal         func_195200
    ctx->pc = 0x163328u;
    SET_GPR_U32(ctx, 31, 0x163330u);
    ctx->pc = 0x16332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163328u;
            // 0x16332c: 0x246500d2  addiu       $a1, $v1, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 210));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163330u; }
        if (ctx->pc != 0x163330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163330u; }
        if (ctx->pc != 0x163330u) { return; }
    }
    ctx->pc = 0x163330u;
    // 0x163330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163330u;
    {
        const bool branch_taken_0x163330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163330) {
            ctx->pc = 0x163340u;
            goto label_163340;
        }
    }
    ctx->pc = 0x163338u;
label_163338:
    // 0x163338: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x163338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x16333c: 0x0  nop
    ctx->pc = 0x16333cu;
    // NOP
label_163340:
    // 0x163340: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x163344: 0x8c224bf8  lw          $v0, 0x4BF8($at)
    ctx->pc = 0x163344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19448)));
    // 0x163348: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x163348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16334c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x16334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x163350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x163354: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x163354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_163358:
    // 0x163358: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16335c: 0x8c234bf8  lw          $v1, 0x4BF8($at)
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19448)));
    // 0x163360: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x163364: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163364u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16336c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x16336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163374: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163374u;
    {
        const bool branch_taken_0x163374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x163378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163374u;
            // 0x163378: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163374) {
            ctx->pc = 0x163398u;
            goto label_163398;
        }
    }
    ctx->pc = 0x16337Cu;
    // 0x16337c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163380: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163380u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x163384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163388: 0x0  nop
    ctx->pc = 0x163388u;
    // NOP
    // 0x16338c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16338cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163390: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x163390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x163394: 0x0  nop
    ctx->pc = 0x163394u;
    // NOP
label_163398:
    // 0x163398: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x163398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16339c: 0x8c234bf8  lw          $v1, 0x4BF8($at)
    ctx->pc = 0x16339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19448)));
    // 0x1633a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1633a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1633a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1633a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633ac: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1633acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1633b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1633b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1633b4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1633B4u;
    {
        const bool branch_taken_0x1633b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1633B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633B4u;
            // 0x1633b8: 0x24640014  addiu       $a0, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b4) {
            ctx->pc = 0x1633D8u;
            goto label_1633d8;
        }
    }
    ctx->pc = 0x1633BCu;
    // 0x1633bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1633c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1633c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633c8: 0x0  nop
    ctx->pc = 0x1633c8u;
    // NOP
    // 0x1633cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1633ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1633d0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1633d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1633d4: 0x0  nop
    ctx->pc = 0x1633d4u;
    // NOP
label_1633d8:
    // 0x1633d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1633d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1633dc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1633dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1633e0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1633e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1633e4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1633e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1633e8: 0xc059a4c  jal         func_166930
    ctx->pc = 0x1633E8u;
    SET_GPR_U32(ctx, 31, 0x1633F0u);
    ctx->pc = 0x1633ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1633E8u;
            // 0x1633ec: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166930u;
    if (runtime->hasFunction(0x166930u)) {
        auto targetFn = runtime->lookupFunction(0x166930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633F0u; }
        if (ctx->pc != 0x1633F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x166930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633F0u; }
        if (ctx->pc != 0x1633F0u) { return; }
    }
    ctx->pc = 0x1633F0u;
    // 0x1633f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1633f4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1633f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1633f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1633f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1633fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1633fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x163400: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x163400u;
    SET_GPR_U32(ctx, 31, 0x163408u);
    ctx->pc = 0x163404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163400u;
            // 0x163404: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163408u; }
        if (ctx->pc != 0x163408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163408u; }
        if (ctx->pc != 0x163408u) { return; }
    }
    ctx->pc = 0x163408u;
    // 0x163408: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16340c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x16340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163410: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x163410u;
    SET_GPR_U32(ctx, 31, 0x163418u);
    ctx->pc = 0x163414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163410u;
            // 0x163414: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163418u; }
        if (ctx->pc != 0x163418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163418u; }
        if (ctx->pc != 0x163418u) { return; }
    }
    ctx->pc = 0x163418u;
    // 0x163418: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16341c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x16341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163420: 0xc04b804  jal         func_12E010
    ctx->pc = 0x163420u;
    SET_GPR_U32(ctx, 31, 0x163428u);
    ctx->pc = 0x163424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163420u;
            // 0x163424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163428u; }
        if (ctx->pc != 0x163428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163428u; }
        if (ctx->pc != 0x163428u) { return; }
    }
    ctx->pc = 0x163428u;
    // 0x163428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16342c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x16342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163430: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x163430u;
    SET_GPR_U32(ctx, 31, 0x163438u);
    ctx->pc = 0x163434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163430u;
            // 0x163434: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163438u; }
        if (ctx->pc != 0x163438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163438u; }
        if (ctx->pc != 0x163438u) { return; }
    }
    ctx->pc = 0x163438u;
    // 0x163438: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16343c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16343cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163440: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x163440u;
    SET_GPR_U32(ctx, 31, 0x163448u);
    ctx->pc = 0x163444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163440u;
            // 0x163444: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163448u; }
        if (ctx->pc != 0x163448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163448u; }
        if (ctx->pc != 0x163448u) { return; }
    }
    ctx->pc = 0x163448u;
    // 0x163448: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x163448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16344c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x163450: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x163450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163454: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x163454u;
    {
        const bool branch_taken_0x163454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x163454) {
            ctx->pc = 0x1634A8u;
            goto label_1634a8;
        }
    }
    ctx->pc = 0x16345Cu;
    // 0x16345c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x16345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x163460: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163460u;
    {
        const bool branch_taken_0x163460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163460) {
            ctx->pc = 0x163478u;
            goto label_163478;
        }
    }
    ctx->pc = 0x163468u;
    // 0x163468: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x163468u;
    SET_GPR_U32(ctx, 31, 0x163470u);
    ctx->pc = 0x16346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163468u;
            // 0x16346c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163470u; }
        if (ctx->pc != 0x163470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163470u; }
        if (ctx->pc != 0x163470u) { return; }
    }
    ctx->pc = 0x163470u;
    // 0x163470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163470u;
    {
        const bool branch_taken_0x163470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163470) {
            ctx->pc = 0x163480u;
            goto label_163480;
        }
    }
    ctx->pc = 0x163478u;
label_163478:
    // 0x163478: 0xc0604dc  jal         func_181370
    ctx->pc = 0x163478u;
    SET_GPR_U32(ctx, 31, 0x163480u);
    ctx->pc = 0x16347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163478u;
            // 0x16347c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163480u; }
        if (ctx->pc != 0x163480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163480u; }
        if (ctx->pc != 0x163480u) { return; }
    }
    ctx->pc = 0x163480u;
label_163480:
    // 0x163480: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x163480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x163484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163484u;
    {
        const bool branch_taken_0x163484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163484) {
            ctx->pc = 0x163498u;
            goto label_163498;
        }
    }
    ctx->pc = 0x16348Cu;
    // 0x16348c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16348Cu;
    {
        const bool branch_taken_0x16348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16348Cu;
            // 0x163490: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16348c) {
            ctx->pc = 0x1634B8u;
            goto label_1634b8;
        }
    }
    ctx->pc = 0x163494u;
    // 0x163494: 0x0  nop
    ctx->pc = 0x163494u;
    // NOP
label_163498:
    // 0x163498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16349c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16349Cu;
    {
        const bool branch_taken_0x16349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16349Cu;
            // 0x1634a0: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16349c) {
            ctx->pc = 0x1634B8u;
            goto label_1634b8;
        }
    }
    ctx->pc = 0x1634A4u;
    // 0x1634a4: 0x0  nop
    ctx->pc = 0x1634a4u;
    // NOP
label_1634a8:
    // 0x1634a8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1634A8u;
    SET_GPR_U32(ctx, 31, 0x1634B0u);
    ctx->pc = 0x1634ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1634A8u;
            // 0x1634ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634B0u; }
        if (ctx->pc != 0x1634B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634B0u; }
        if (ctx->pc != 0x1634B0u) { return; }
    }
    ctx->pc = 0x1634B0u;
    // 0x1634b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1634b4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1634b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1634b8:
    // 0x1634b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1634bc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1634bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1634c0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1634c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1634c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1634c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1634c8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1634c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1634cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1634d0: 0x1c400019  bgtz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1634D0u;
    {
        const bool branch_taken_0x1634d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1634d0) {
            ctx->pc = 0x163538u;
            goto label_163538;
        }
    }
    ctx->pc = 0x1634D8u;
    // 0x1634d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1634d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1634dc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1634dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1634e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1634e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1634e4: 0x0  nop
    ctx->pc = 0x1634e4u;
    // NOP
    // 0x1634e8: 0x0  nop
    ctx->pc = 0x1634e8u;
    // NOP
    // 0x1634ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1634ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1634f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1634F0u;
    {
        const bool branch_taken_0x1634f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1634f0) {
            ctx->pc = 0x163518u;
            goto label_163518;
        }
    }
    ctx->pc = 0x1634F8u;
    // 0x1634f8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1634f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1634fc: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1634fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x163500: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x163504: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x163504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163508: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x163508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16350c: 0x2484005e  addiu       $a0, $a0, 0x5E
    ctx->pc = 0x16350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 94));
    // 0x163510: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x163510u;
    SET_GPR_U32(ctx, 31, 0x163518u);
    ctx->pc = 0x163514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163510u;
            // 0x163514: 0x24650078  addiu       $a1, $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163518u; }
        if (ctx->pc != 0x163518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163518u; }
        if (ctx->pc != 0x163518u) { return; }
    }
    ctx->pc = 0x163518u;
label_163518:
    // 0x163518: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x16351c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163520: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x163520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x163524: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x163524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x163528: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x163528u;
    SET_GPR_U32(ctx, 31, 0x163530u);
    ctx->pc = 0x16352Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163528u;
            // 0x16352c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163530u; }
        if (ctx->pc != 0x163530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163530u; }
        if (ctx->pc != 0x163530u) { return; }
    }
    ctx->pc = 0x163530u;
    // 0x163530: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x163530u;
    {
        const bool branch_taken_0x163530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163530) {
            ctx->pc = 0x1635B8u;
            goto label_1635b8;
        }
    }
    ctx->pc = 0x163538u;
label_163538:
    // 0x163538: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x163538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x16353c: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x16353cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x163540: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x163540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163544: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x163544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x163548: 0x24c61ad0  addiu       $a2, $a2, 0x1AD0
    ctx->pc = 0x163548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6864));
    // 0x16354c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16354cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163550: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x163550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163554: 0x2442004a  addiu       $v0, $v0, 0x4A
    ctx->pc = 0x163554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 74));
    // 0x163558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16355c: 0x0  nop
    ctx->pc = 0x16355cu;
    // NOP
    // 0x163560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163564: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x163564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x163568: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16356c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x163570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163574: 0x0  nop
    ctx->pc = 0x163574u;
    // NOP
    // 0x163578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16357c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x163580: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x163580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x163584: 0x24420072  addiu       $v0, $v0, 0x72
    ctx->pc = 0x163584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 114));
    // 0x163588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16358c: 0x0  nop
    ctx->pc = 0x16358cu;
    // NOP
    // 0x163590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163594: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x163594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x163598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x163598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16359c: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x16359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1635a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1635a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1635a4: 0x0  nop
    ctx->pc = 0x1635a4u;
    // NOP
    // 0x1635a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1635a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1635ac: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1635ACu;
    SET_GPR_U32(ctx, 31, 0x1635B4u);
    ctx->pc = 0x1635B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1635ACu;
            // 0x1635b0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635B4u; }
        if (ctx->pc != 0x1635B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635B4u; }
        if (ctx->pc != 0x1635B4u) { return; }
    }
    ctx->pc = 0x1635B4u;
    // 0x1635b4: 0x0  nop
    ctx->pc = 0x1635b4u;
    // NOP
label_1635b8:
    // 0x1635b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1635b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1635bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1635bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1635c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1635c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1635c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1635c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1635c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1635c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1635cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1635CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1635D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635CCu;
            // 0x1635d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162EC0u: goto label_162ec0;
            case 0x162EE8u: goto label_162ee8;
            case 0x162F28u: goto label_162f28;
            case 0x162F60u: goto label_162f60;
            case 0x162F68u: goto label_162f68;
            case 0x162F88u: goto label_162f88;
            case 0x162FC8u: goto label_162fc8;
            case 0x163080u: goto label_163080;
            case 0x1630F8u: goto label_1630f8;
            case 0x1631A0u: goto label_1631a0;
            case 0x163218u: goto label_163218;
            case 0x163244u: goto label_163244;
            case 0x1632C0u: goto label_1632c0;
            case 0x163338u: goto label_163338;
            case 0x163340u: goto label_163340;
            case 0x163358u: goto label_163358;
            case 0x163398u: goto label_163398;
            case 0x1633D8u: goto label_1633d8;
            case 0x163478u: goto label_163478;
            case 0x163480u: goto label_163480;
            case 0x163498u: goto label_163498;
            case 0x1634A8u: goto label_1634a8;
            case 0x1634B8u: goto label_1634b8;
            case 0x163518u: goto label_163518;
            case 0x163538u: goto label_163538;
            case 0x1635B8u: goto label_1635b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1635D4u;
}
