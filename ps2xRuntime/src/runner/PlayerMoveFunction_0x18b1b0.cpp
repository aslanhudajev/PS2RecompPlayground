#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlayerMoveFunction
// Address: 0x18b1b0 - 0x18d640
void PlayerMoveFunction_0x18b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlayerMoveFunction_0x18b1b0");
#endif

    ctx->pc = 0x18b1b0u;

    // 0x18b1b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18b1b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18b1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18b1b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18b1bc: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x18b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x18b1c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18b1c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18b1c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18b1cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18b1d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18b1d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18b1d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b1dc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x18b1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18b1e0: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x18b1e4: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x18B1E4u;
    SET_GPR_U32(ctx, 31, 0x18B1ECu);
    ctx->pc = 0x18B1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1E4u;
            // 0x18b1e8: 0xdc25a570  ld          $a1, -0x5A90($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1ECu; }
        if (ctx->pc != 0x18B1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1ECu; }
        if (ctx->pc != 0x18B1ECu) { return; }
    }
    ctx->pc = 0x18B1ECu;
    // 0x18b1ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18b1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b1f4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x18B1F4u;
    SET_GPR_U32(ctx, 31, 0x18B1FCu);
    ctx->pc = 0x18B1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1F4u;
            // 0x18b1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1FCu; }
        if (ctx->pc != 0x18B1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B1FCu; }
        if (ctx->pc != 0x18B1FCu) { return; }
    }
    ctx->pc = 0x18B1FCu;
    // 0x18b1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18b200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b204: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x18B204u;
    SET_GPR_U32(ctx, 31, 0x18B20Cu);
    ctx->pc = 0x18B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B204u;
            // 0x18b208: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B20Cu; }
        if (ctx->pc != 0x18B20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B20Cu; }
        if (ctx->pc != 0x18B20Cu) { return; }
    }
    ctx->pc = 0x18B20Cu;
    // 0x18b20c: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x18b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x18b210: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x18b210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b214: 0x10200902  beqz        $at, . + 4 + (0x902 << 2)
    ctx->pc = 0x18B214u;
    {
        const bool branch_taken_0x18b214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B214u;
            // 0x18b218: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b214) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18B21Cu;
    // 0x18b21c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x18b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x18b220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18b220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b224: 0x24c62750  addiu       $a2, $a2, 0x2750
    ctx->pc = 0x18b224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10064));
    // 0x18b228: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18b22c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b230: 0x600008  jr          $v1
    ctx->pc = 0x18B230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B238u: goto label_18b238;
            case 0x18B4C8u: goto label_18b4c8;
            case 0x18B7D8u: goto label_18b7d8;
            case 0x18B948u: goto label_18b948;
            case 0x18B9A8u: goto label_18b9a8;
            case 0x18BB30u: goto label_18bb30;
            case 0x18C470u: goto label_18c470;
            case 0x18C490u: goto label_18c490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B238u;
label_18b238:
    // 0x18b238: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18b238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18b23c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x18b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x18b240: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x18b240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18b244: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x18b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18b248: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18B248u;
    {
        const bool branch_taken_0x18b248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b248) {
            ctx->pc = 0x18B2B8u;
            goto label_18b2b8;
        }
    }
    ctx->pc = 0x18B250u;
    // 0x18b250: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b254: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x18b254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x18b258: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x18b258u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x18b25c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18b25cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b260: 0x3c023f42  lui         $v0, 0x3F42
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16194 << 16));
    // 0x18b264: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x18b264u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
    // 0x18b268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b26c: 0x0  nop
    ctx->pc = 0x18b26cu;
    // NOP
    // 0x18b270: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18b270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18b274: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x18b274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b278: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b27c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b280: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18B280u;
    {
        const bool branch_taken_0x18b280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B280u;
            // 0x18b284: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b280) {
            ctx->pc = 0x18B290u;
            goto label_18b290;
        }
    }
    ctx->pc = 0x18B288u;
    // 0x18b288: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x18b28c: 0x0  nop
    ctx->pc = 0x18b28cu;
    // NOP
label_18b290:
    // 0x18b290: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
    // 0x18b294: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x18b294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x18b298: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x18b29c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x18b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x18b2a0: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x18b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x18b2a4: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x18b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x18b2a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x18b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18b2ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18B2ACu;
    {
        const bool branch_taken_0x18b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2ACu;
            // 0x18b2b0: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2ac) {
            ctx->pc = 0x18B318u;
            goto label_18b318;
        }
    }
    ctx->pc = 0x18B2B4u;
    // 0x18b2b4: 0x0  nop
    ctx->pc = 0x18b2b4u;
    // NOP
label_18b2b8:
    // 0x18b2b8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x18b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x18b2bc: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b2c0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x18b2c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x18b2c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18b2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b2c8: 0x3c02bf42  lui         $v0, 0xBF42
    ctx->pc = 0x18b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48962 << 16));
    // 0x18b2cc: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x18b2ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
    // 0x18b2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b2d4: 0x0  nop
    ctx->pc = 0x18b2d4u;
    // NOP
    // 0x18b2d8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18b2d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18b2dc: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x18b2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b2e0: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b2e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b2e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b2e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x18B2E8u;
    {
        const bool branch_taken_0x18b2e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2E8u;
            // 0x18b2ec: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2e8) {
            ctx->pc = 0x18B2F8u;
            goto label_18b2f8;
        }
    }
    ctx->pc = 0x18B2F0u;
    // 0x18b2f0: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x18b2f4: 0x0  nop
    ctx->pc = 0x18b2f4u;
    // NOP
label_18b2f8:
    // 0x18b2f8: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x18b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x18b2fc: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x18b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x18b300: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18b300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x18b304: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x18b304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x18b308: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x18b308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x18b30c: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x18b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x18b310: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18b314: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x18b314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_18b318:
    // 0x18b318: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18b318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18b31c: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x18b31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b320: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b328: 0x0  nop
    ctx->pc = 0x18b328u;
    // NOP
    // 0x18b32c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b330: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B330u;
    {
        const bool branch_taken_0x18b330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B330u;
            // 0x18b334: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b330) {
            ctx->pc = 0x18B350u;
            goto label_18b350;
        }
    }
    ctx->pc = 0x18B338u;
    // 0x18b338: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b338u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b340: 0x0  nop
    ctx->pc = 0x18b340u;
    // NOP
    // 0x18b344: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18b344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b348: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x18b348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x18b34c: 0x0  nop
    ctx->pc = 0x18b34cu;
    // NOP
label_18b350:
    // 0x18b350: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18b354: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x18b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b358: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b358u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b360: 0x0  nop
    ctx->pc = 0x18b360u;
    // NOP
    // 0x18b364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b368: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B368u;
    {
        const bool branch_taken_0x18b368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B368u;
            // 0x18b36c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b368) {
            ctx->pc = 0x18B388u;
            goto label_18b388;
        }
    }
    ctx->pc = 0x18B370u;
    // 0x18b370: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b370u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b378: 0x0  nop
    ctx->pc = 0x18b378u;
    // NOP
    // 0x18b37c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18b37cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18b380: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x18b380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x18b384: 0x0  nop
    ctx->pc = 0x18b384u;
    // NOP
label_18b388:
    // 0x18b388: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18b388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18b38c: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b390: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b390u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b398: 0x0  nop
    ctx->pc = 0x18b398u;
    // NOP
    // 0x18b39c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b3a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B3A0u;
    {
        const bool branch_taken_0x18b3a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3A0u;
            // 0x18b3a4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3a0) {
            ctx->pc = 0x18B3C0u;
            goto label_18b3c0;
        }
    }
    ctx->pc = 0x18B3A8u;
    // 0x18b3a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b3a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b3b0: 0x0  nop
    ctx->pc = 0x18b3b0u;
    // NOP
    // 0x18b3b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18b3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b3b8: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b3bc: 0x0  nop
    ctx->pc = 0x18b3bcu;
    // NOP
label_18b3c0:
    // 0x18b3c0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18b3c4: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b3c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b3c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b3d0: 0x0  nop
    ctx->pc = 0x18b3d0u;
    // NOP
    // 0x18b3d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b3d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b3d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B3D8u;
    {
        const bool branch_taken_0x18b3d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3D8u;
            // 0x18b3dc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3d8) {
            ctx->pc = 0x18B3F8u;
            goto label_18b3f8;
        }
    }
    ctx->pc = 0x18B3E0u;
    // 0x18b3e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b3e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b3e8: 0x0  nop
    ctx->pc = 0x18b3e8u;
    // NOP
    // 0x18b3ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18b3ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18b3f0: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b3f4: 0x0  nop
    ctx->pc = 0x18b3f4u;
    // NOP
label_18b3f8:
    // 0x18b3f8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18b3fc: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b400: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b400u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b408: 0x0  nop
    ctx->pc = 0x18b408u;
    // NOP
    // 0x18b40c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b40cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b410: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B410u;
    {
        const bool branch_taken_0x18b410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B410u;
            // 0x18b414: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b410) {
            ctx->pc = 0x18B430u;
            goto label_18b430;
        }
    }
    ctx->pc = 0x18B418u;
    // 0x18b418: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b418u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b420: 0x0  nop
    ctx->pc = 0x18b420u;
    // NOP
    // 0x18b424: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18b424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b428: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x18b42c: 0x0  nop
    ctx->pc = 0x18b42cu;
    // NOP
label_18b430:
    // 0x18b430: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18b434: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b438: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b438u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b440: 0x0  nop
    ctx->pc = 0x18b440u;
    // NOP
    // 0x18b444: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b448: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B448u;
    {
        const bool branch_taken_0x18b448 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B448u;
            // 0x18b44c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b448) {
            ctx->pc = 0x18B468u;
            goto label_18b468;
        }
    }
    ctx->pc = 0x18B450u;
    // 0x18b450: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b450u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b458: 0x0  nop
    ctx->pc = 0x18b458u;
    // NOP
    // 0x18b45c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18b45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18b460: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x18b464: 0x0  nop
    ctx->pc = 0x18b464u;
    // NOP
label_18b468:
    // 0x18b468: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x18B468u;
    SET_GPR_U32(ctx, 31, 0x18B470u);
    ctx->pc = 0x18B46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B468u;
            // 0x18b46c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B470u; }
        if (ctx->pc != 0x18B470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B470u; }
        if (ctx->pc != 0x18B470u) { return; }
    }
    ctx->pc = 0x18B470u;
    // 0x18b470: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x18b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b474: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b478: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x18B478u;
    SET_GPR_U32(ctx, 31, 0x18B480u);
    ctx->pc = 0x18B47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B478u;
            // 0x18b47c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B480u; }
        if (ctx->pc != 0x18B480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B480u; }
        if (ctx->pc != 0x18B480u) { return; }
    }
    ctx->pc = 0x18B480u;
    // 0x18b480: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x18b480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b484: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b488: 0xc04b804  jal         func_12E010
    ctx->pc = 0x18B488u;
    SET_GPR_U32(ctx, 31, 0x18B490u);
    ctx->pc = 0x18B48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B488u;
            // 0x18b48c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B490u; }
        if (ctx->pc != 0x18B490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B490u; }
        if (ctx->pc != 0x18B490u) { return; }
    }
    ctx->pc = 0x18B490u;
    // 0x18b490: 0xc64c0058  lwc1        $f12, 0x58($s2)
    ctx->pc = 0x18b490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b494: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b498: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x18B498u;
    SET_GPR_U32(ctx, 31, 0x18B4A0u);
    ctx->pc = 0x18B49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B498u;
            // 0x18b49c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4A0u; }
        if (ctx->pc != 0x18B4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4A0u; }
        if (ctx->pc != 0x18B4A0u) { return; }
    }
    ctx->pc = 0x18B4A0u;
    // 0x18b4a0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b4a4: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x18b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x18b4a8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x18B4A8u;
    SET_GPR_U32(ctx, 31, 0x18B4B0u);
    ctx->pc = 0x18B4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4A8u;
            // 0x18b4ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4B0u; }
        if (ctx->pc != 0x18B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4B0u; }
        if (ctx->pc != 0x18B4B0u) { return; }
    }
    ctx->pc = 0x18B4B0u;
    // 0x18b4b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b4b4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x18b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b4b8: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x18B4B8u;
    SET_GPR_U32(ctx, 31, 0x18B4C0u);
    ctx->pc = 0x18B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4B8u;
            // 0x18b4bc: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4C0u; }
        if (ctx->pc != 0x18B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B4C0u; }
        if (ctx->pc != 0x18B4C0u) { return; }
    }
    ctx->pc = 0x18B4C0u;
    // 0x18b4c0: 0x10000857  b           . + 4 + (0x857 << 2)
    ctx->pc = 0x18B4C0u;
    {
        const bool branch_taken_0x18b4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b4c0) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18B4C8u;
label_18b4c8:
    // 0x18b4c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18b4cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x18b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x18b4d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x18b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18b4d4: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18b4d8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x18B4D8u;
    {
        const bool branch_taken_0x18b4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4D8u;
            // 0x18b4dc: 0x3c03c0c0  lui         $v1, 0xC0C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4d8) {
            ctx->pc = 0x18B580u;
            goto label_18b580;
        }
    }
    ctx->pc = 0x18B4E0u;
    // 0x18b4e0: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x18b4e4: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x18b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x18b4e8: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x18b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x18b4ec: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x18b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x18b4f0: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x18b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x18b4f4: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x18b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x18b4f8: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x18b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x18b4fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18b4fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18b500: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b508: 0x0  nop
    ctx->pc = 0x18b508u;
    // NOP
    // 0x18b50c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b510: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B510u;
    {
        const bool branch_taken_0x18b510 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B510u;
            // 0x18b514: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b510) {
            ctx->pc = 0x18B530u;
            goto label_18b530;
        }
    }
    ctx->pc = 0x18B518u;
    // 0x18b518: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18b518u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x18b51c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18b51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b520: 0x0  nop
    ctx->pc = 0x18b520u;
    // NOP
    // 0x18b524: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x18b524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b528: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x18B528u;
    {
        const bool branch_taken_0x18b528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b528) {
            ctx->pc = 0x18B550u;
            goto label_18b550;
        }
    }
    ctx->pc = 0x18B530u;
label_18b530:
    // 0x18b530: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x18b530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x18b534: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x18b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b538: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18b538u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x18b53c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18b53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b540: 0x0  nop
    ctx->pc = 0x18b540u;
    // NOP
    // 0x18b544: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18b544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x18b548: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b54c: 0x0  nop
    ctx->pc = 0x18b54cu;
    // NOP
label_18b550:
    // 0x18b550: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b558: 0x0  nop
    ctx->pc = 0x18b558u;
    // NOP
    // 0x18b55c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b55cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b560: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18B560u;
    {
        const bool branch_taken_0x18b560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b560) {
            ctx->pc = 0x18B578u;
            goto label_18b578;
        }
    }
    ctx->pc = 0x18B568u;
    // 0x18b568: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x18b568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18b56c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18B56Cu;
    {
        const bool branch_taken_0x18b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B56Cu;
            // 0x18b570: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b56c) {
            ctx->pc = 0x18B628u;
            goto label_18b628;
        }
    }
    ctx->pc = 0x18B574u;
    // 0x18b574: 0x0  nop
    ctx->pc = 0x18b574u;
    // NOP
label_18b578:
    // 0x18b578: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18B578u;
    {
        const bool branch_taken_0x18b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B578u;
            // 0x18b57c: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b578) {
            ctx->pc = 0x18B628u;
            goto label_18b628;
        }
    }
    ctx->pc = 0x18B580u;
label_18b580:
    // 0x18b580: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x18b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x18b584: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x18b584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x18b588: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18b588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
    // 0x18b58c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x18b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x18b590: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x18b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x18b594: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x18b594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    // 0x18b598: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x18b598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x18b59c: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x18b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x18b5a0: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b5a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18b5a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18b5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b5ac: 0x0  nop
    ctx->pc = 0x18b5acu;
    // NOP
    // 0x18b5b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b5b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b5b4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x18B5B4u;
    {
        const bool branch_taken_0x18b5b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5B4u;
            // 0x18b5b8: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5b4) {
            ctx->pc = 0x18B5D8u;
            goto label_18b5d8;
        }
    }
    ctx->pc = 0x18B5BCu;
    // 0x18b5bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18b5bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x18b5c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18b5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b5c4: 0x0  nop
    ctx->pc = 0x18b5c4u;
    // NOP
    // 0x18b5c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x18b5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b5cc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18B5CCu;
    {
        const bool branch_taken_0x18b5cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b5cc) {
            ctx->pc = 0x18B5F8u;
            goto label_18b5f8;
        }
    }
    ctx->pc = 0x18B5D4u;
    // 0x18b5d4: 0x0  nop
    ctx->pc = 0x18b5d4u;
    // NOP
label_18b5d8:
    // 0x18b5d8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x18b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x18b5dc: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x18b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b5e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18b5e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x18b5e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18b5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b5e8: 0x0  nop
    ctx->pc = 0x18b5e8u;
    // NOP
    // 0x18b5ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x18b5ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18b5f0: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b5f4: 0x0  nop
    ctx->pc = 0x18b5f4u;
    // NOP
label_18b5f8:
    // 0x18b5f8: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b5fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b5fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b600: 0x0  nop
    ctx->pc = 0x18b600u;
    // NOP
    // 0x18b604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b608: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18B608u;
    {
        const bool branch_taken_0x18b608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b608) {
            ctx->pc = 0x18B620u;
            goto label_18b620;
        }
    }
    ctx->pc = 0x18B610u;
    // 0x18b610: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x18b610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18b614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B614u;
    {
        const bool branch_taken_0x18b614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B614u;
            // 0x18b618: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b614) {
            ctx->pc = 0x18B628u;
            goto label_18b628;
        }
    }
    ctx->pc = 0x18B61Cu;
    // 0x18b61c: 0x0  nop
    ctx->pc = 0x18b61cu;
    // NOP
label_18b620:
    // 0x18b620: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x18b624: 0x0  nop
    ctx->pc = 0x18b624u;
    // NOP
label_18b628:
    // 0x18b628: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18b62c: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x18b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b630: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b630u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b638: 0x0  nop
    ctx->pc = 0x18b638u;
    // NOP
    // 0x18b63c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b640: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B640u;
    {
        const bool branch_taken_0x18b640 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B640u;
            // 0x18b644: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b640) {
            ctx->pc = 0x18B660u;
            goto label_18b660;
        }
    }
    ctx->pc = 0x18B648u;
    // 0x18b648: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b648u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b650: 0x0  nop
    ctx->pc = 0x18b650u;
    // NOP
    // 0x18b654: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18b654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b658: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x18b658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x18b65c: 0x0  nop
    ctx->pc = 0x18b65cu;
    // NOP
label_18b660:
    // 0x18b660: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18b664: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x18b664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b668: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b668u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b670: 0x0  nop
    ctx->pc = 0x18b670u;
    // NOP
    // 0x18b674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b678: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B678u;
    {
        const bool branch_taken_0x18b678 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B678u;
            // 0x18b67c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b678) {
            ctx->pc = 0x18B698u;
            goto label_18b698;
        }
    }
    ctx->pc = 0x18B680u;
    // 0x18b680: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b680u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b688: 0x0  nop
    ctx->pc = 0x18b688u;
    // NOP
    // 0x18b68c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18b68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18b690: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x18b690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x18b694: 0x0  nop
    ctx->pc = 0x18b694u;
    // NOP
label_18b698:
    // 0x18b698: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18b698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18b69c: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b6a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b6a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6a8: 0x0  nop
    ctx->pc = 0x18b6a8u;
    // NOP
    // 0x18b6ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b6b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B6B0u;
    {
        const bool branch_taken_0x18b6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6B0u;
            // 0x18b6b4: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6b0) {
            ctx->pc = 0x18B6D0u;
            goto label_18b6d0;
        }
    }
    ctx->pc = 0x18B6B8u;
    // 0x18b6b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b6b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6c0: 0x0  nop
    ctx->pc = 0x18b6c0u;
    // NOP
    // 0x18b6c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18b6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b6c8: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b6cc: 0x0  nop
    ctx->pc = 0x18b6ccu;
    // NOP
label_18b6d0:
    // 0x18b6d0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18b6d4: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18b6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b6d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b6d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6e0: 0x0  nop
    ctx->pc = 0x18b6e0u;
    // NOP
    // 0x18b6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b6e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B6E8u;
    {
        const bool branch_taken_0x18b6e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6E8u;
            // 0x18b6ec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6e8) {
            ctx->pc = 0x18B708u;
            goto label_18b708;
        }
    }
    ctx->pc = 0x18B6F0u;
    // 0x18b6f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b6f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b6f8: 0x0  nop
    ctx->pc = 0x18b6f8u;
    // NOP
    // 0x18b6fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18b6fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18b700: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b704: 0x0  nop
    ctx->pc = 0x18b704u;
    // NOP
label_18b708:
    // 0x18b708: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18b708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18b70c: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b710: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b710u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b718: 0x0  nop
    ctx->pc = 0x18b718u;
    // NOP
    // 0x18b71c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b720: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B720u;
    {
        const bool branch_taken_0x18b720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B720u;
            // 0x18b724: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b720) {
            ctx->pc = 0x18B740u;
            goto label_18b740;
        }
    }
    ctx->pc = 0x18B728u;
    // 0x18b728: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b728u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b730: 0x0  nop
    ctx->pc = 0x18b730u;
    // NOP
    // 0x18b734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18b734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b738: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x18b73c: 0x0  nop
    ctx->pc = 0x18b73cu;
    // NOP
label_18b740:
    // 0x18b740: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18b744: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x18b744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b748: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b748u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b750: 0x0  nop
    ctx->pc = 0x18b750u;
    // NOP
    // 0x18b754: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18b754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b758: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18B758u;
    {
        const bool branch_taken_0x18b758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B758u;
            // 0x18b75c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b758) {
            ctx->pc = 0x18B778u;
            goto label_18b778;
        }
    }
    ctx->pc = 0x18B760u;
    // 0x18b760: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b760u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18b764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b768: 0x0  nop
    ctx->pc = 0x18b768u;
    // NOP
    // 0x18b76c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18b76cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18b770: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x18b774: 0x0  nop
    ctx->pc = 0x18b774u;
    // NOP
label_18b778:
    // 0x18b778: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x18B778u;
    SET_GPR_U32(ctx, 31, 0x18B780u);
    ctx->pc = 0x18B77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B778u;
            // 0x18b77c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B780u; }
        if (ctx->pc != 0x18B780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B780u; }
        if (ctx->pc != 0x18B780u) { return; }
    }
    ctx->pc = 0x18B780u;
    // 0x18b780: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x18b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b784: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b788: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x18B788u;
    SET_GPR_U32(ctx, 31, 0x18B790u);
    ctx->pc = 0x18B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B788u;
            // 0x18b78c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B790u; }
        if (ctx->pc != 0x18B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B790u; }
        if (ctx->pc != 0x18B790u) { return; }
    }
    ctx->pc = 0x18B790u;
    // 0x18b790: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x18b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b794: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b798: 0xc04b804  jal         func_12E010
    ctx->pc = 0x18B798u;
    SET_GPR_U32(ctx, 31, 0x18B7A0u);
    ctx->pc = 0x18B79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B798u;
            // 0x18b79c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7A0u; }
        if (ctx->pc != 0x18B7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7A0u; }
        if (ctx->pc != 0x18B7A0u) { return; }
    }
    ctx->pc = 0x18B7A0u;
    // 0x18b7a0: 0xc64c0058  lwc1        $f12, 0x58($s2)
    ctx->pc = 0x18b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b7a4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b7a8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x18B7A8u;
    SET_GPR_U32(ctx, 31, 0x18B7B0u);
    ctx->pc = 0x18B7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7A8u;
            // 0x18b7ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7B0u; }
        if (ctx->pc != 0x18B7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7B0u; }
        if (ctx->pc != 0x18B7B0u) { return; }
    }
    ctx->pc = 0x18B7B0u;
    // 0x18b7b0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b7b4: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x18b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x18b7b8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x18B7B8u;
    SET_GPR_U32(ctx, 31, 0x18B7C0u);
    ctx->pc = 0x18B7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7B8u;
            // 0x18b7bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7C0u; }
        if (ctx->pc != 0x18B7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7C0u; }
        if (ctx->pc != 0x18B7C0u) { return; }
    }
    ctx->pc = 0x18B7C0u;
    // 0x18b7c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b7c4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b7c8: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x18B7C8u;
    SET_GPR_U32(ctx, 31, 0x18B7D0u);
    ctx->pc = 0x18B7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7C8u;
            // 0x18b7cc: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7D0u; }
        if (ctx->pc != 0x18B7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B7D0u; }
        if (ctx->pc != 0x18B7D0u) { return; }
    }
    ctx->pc = 0x18B7D0u;
    // 0x18b7d0: 0x10000793  b           . + 4 + (0x793 << 2)
    ctx->pc = 0x18B7D0u;
    {
        const bool branch_taken_0x18b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7d0) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18B7D8u;
label_18b7d8:
    // 0x18b7d8: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x18b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x18b7dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18B7DCu;
    {
        const bool branch_taken_0x18b7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7dc) {
            ctx->pc = 0x18B838u;
            goto label_18b838;
        }
    }
    ctx->pc = 0x18B7E4u;
    // 0x18b7e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18b7e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18b7ec: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x18b7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b7f0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x18b7f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18b7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b7f8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x18b7f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x18b7fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18b7fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b800: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x18b804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b808: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x18b808u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x18b80c: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x18b80cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18b810: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18b810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18b814: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x18b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b818: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x18b818u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x18b81c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x18b81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18b820: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b828: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x18B828u;
    {
        const bool branch_taken_0x18b828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b828) {
            ctx->pc = 0x18B888u;
            goto label_18b888;
        }
    }
    ctx->pc = 0x18B830u;
    // 0x18b830: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x18B830u;
    {
        const bool branch_taken_0x18b830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B830u;
            // 0x18b834: 0xae4000c8  sw          $zero, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b830) {
            ctx->pc = 0x18B888u;
            goto label_18b888;
        }
    }
    ctx->pc = 0x18B838u;
label_18b838:
    // 0x18b838: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18b838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18b83c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b840: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18b844: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18b844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b848: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x18b848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x18b84c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18b84cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x18b850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b854: 0x0  nop
    ctx->pc = 0x18b854u;
    // NOP
    // 0x18b858: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18b858u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18b85c: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x18b85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18b860: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18b860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18b864: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x18b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b868: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18b868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18b86c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x18b86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18b870: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x18b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b874: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x18b874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b878: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18B878u;
    {
        const bool branch_taken_0x18b878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B878u;
            // 0x18b87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b878) {
            ctx->pc = 0x18B888u;
            goto label_18b888;
        }
    }
    ctx->pc = 0x18B880u;
    // 0x18b880: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x18b880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x18b884: 0x0  nop
    ctx->pc = 0x18b884u;
    // NOP
label_18b888:
    // 0x18b888: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x18b888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x18b88c: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x18b88cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x18b890: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x18b890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
    // 0x18b894: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x18b894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x18b898: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x18b898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x18b89c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x18b89cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x18b8a0: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x18b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18b8a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B8A4u;
    {
        const bool branch_taken_0x18b8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8A4u;
            // 0x18b8a8: 0x3c03c158  lui         $v1, 0xC158 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8a4) {
            ctx->pc = 0x18B8C0u;
            goto label_18b8c0;
        }
    }
    ctx->pc = 0x18B8ACu;
    // 0x18b8ac: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x18b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x18b8b0: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x18b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x18b8b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18B8B4u;
    {
        const bool branch_taken_0x18b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8B4u;
            // 0x18b8b8: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8b4) {
            ctx->pc = 0x18B8D0u;
            goto label_18b8d0;
        }
    }
    ctx->pc = 0x18B8BCu;
    // 0x18b8bc: 0x0  nop
    ctx->pc = 0x18b8bcu;
    // NOP
label_18b8c0:
    // 0x18b8c0: 0x3c024158  lui         $v0, 0x4158
    ctx->pc = 0x18b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16728 << 16));
    // 0x18b8c4: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x18b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x18b8c8: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x18b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x18b8cc: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x18b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_18b8d0:
    // 0x18b8d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18b8d4: 0x8c229d90  lw          $v0, -0x6270($at)
    ctx->pc = 0x18b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942096)));
    // 0x18b8d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8D8u;
    {
        const bool branch_taken_0x18b8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b8d8) {
            ctx->pc = 0x18B8E8u;
            goto label_18b8e8;
        }
    }
    ctx->pc = 0x18B8E0u;
    // 0x18b8e0: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x18b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x18b8e4: 0x0  nop
    ctx->pc = 0x18b8e4u;
    // NOP
label_18b8e8:
    // 0x18b8e8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x18B8E8u;
    SET_GPR_U32(ctx, 31, 0x18B8F0u);
    ctx->pc = 0x18B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8E8u;
            // 0x18b8ec: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8F0u; }
        if (ctx->pc != 0x18B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8F0u; }
        if (ctx->pc != 0x18B8F0u) { return; }
    }
    ctx->pc = 0x18B8F0u;
    // 0x18b8f0: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x18b8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b8f4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b8f8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x18B8F8u;
    SET_GPR_U32(ctx, 31, 0x18B900u);
    ctx->pc = 0x18B8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8F8u;
            // 0x18b8fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B900u; }
        if (ctx->pc != 0x18B900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B900u; }
        if (ctx->pc != 0x18B900u) { return; }
    }
    ctx->pc = 0x18B900u;
    // 0x18b900: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x18b900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b904: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b908: 0xc04b804  jal         func_12E010
    ctx->pc = 0x18B908u;
    SET_GPR_U32(ctx, 31, 0x18B910u);
    ctx->pc = 0x18B90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B908u;
            // 0x18b90c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B910u; }
        if (ctx->pc != 0x18B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B910u; }
        if (ctx->pc != 0x18B910u) { return; }
    }
    ctx->pc = 0x18B910u;
    // 0x18b910: 0xc64c0058  lwc1        $f12, 0x58($s2)
    ctx->pc = 0x18b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b914: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b918: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x18B918u;
    SET_GPR_U32(ctx, 31, 0x18B920u);
    ctx->pc = 0x18B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B918u;
            // 0x18b91c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B920u; }
        if (ctx->pc != 0x18B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B920u; }
        if (ctx->pc != 0x18B920u) { return; }
    }
    ctx->pc = 0x18B920u;
    // 0x18b920: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18b920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b924: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x18b924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x18b928: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x18B928u;
    SET_GPR_U32(ctx, 31, 0x18B930u);
    ctx->pc = 0x18B92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B928u;
            // 0x18b92c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B930u; }
        if (ctx->pc != 0x18B930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B930u; }
        if (ctx->pc != 0x18B930u) { return; }
    }
    ctx->pc = 0x18B930u;
    // 0x18b930: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b934: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x18b934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18b938: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x18B938u;
    SET_GPR_U32(ctx, 31, 0x18B940u);
    ctx->pc = 0x18B93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B938u;
            // 0x18b93c: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B940u; }
        if (ctx->pc != 0x18B940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B940u; }
        if (ctx->pc != 0x18B940u) { return; }
    }
    ctx->pc = 0x18B940u;
    // 0x18b940: 0x10000737  b           . + 4 + (0x737 << 2)
    ctx->pc = 0x18B940u;
    {
        const bool branch_taken_0x18b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b940) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18B948u;
label_18b948:
    // 0x18b948: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18b948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18b94c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18b94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18b950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b954: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x18b954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18b958: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B958u;
    {
        const bool branch_taken_0x18b958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B958u;
            // 0x18b95c: 0x3c03c158  lui         $v1, 0xC158 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b958) {
            ctx->pc = 0x18B980u;
            goto label_18b980;
        }
    }
    ctx->pc = 0x18B960u;
    // 0x18b960: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x18b960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x18b964: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x18b964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x18b968: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x18b968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x18b96c: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x18b96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x18b970: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x18b970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x18b974: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b978: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18B978u;
    {
        const bool branch_taken_0x18b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B978u;
            // 0x18b97c: 0xe6400058  swc1        $f0, 0x58($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b978) {
            ctx->pc = 0x18B9A0u;
            goto label_18b9a0;
        }
    }
    ctx->pc = 0x18B980u;
label_18b980:
    // 0x18b980: 0x3c024158  lui         $v0, 0x4158
    ctx->pc = 0x18b980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16728 << 16));
    // 0x18b984: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x18b984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x18b988: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x18b988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x18b98c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x18b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x18b990: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x18b990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x18b994: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x18b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x18b998: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x18b998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x18b99c: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x18b99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_18b9a0:
    // 0x18b9a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18b9a4: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x18b9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_18b9a8:
    // 0x18b9a8: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x18b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x18b9ac: 0xc056f48  jal         func_15BD20
    ctx->pc = 0x18B9ACu;
    SET_GPR_U32(ctx, 31, 0x18B9B4u);
    ctx->pc = 0x18B9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B9ACu;
            // 0x18b9b0: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD20u;
    if (runtime->hasFunction(0x15BD20u)) {
        auto targetFn = runtime->lookupFunction(0x15BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9B4u; }
        if (ctx->pc != 0x18B9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCutinEnd_0x15bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B9B4u; }
        if (ctx->pc != 0x18B9B4u) { return; }
    }
    ctx->pc = 0x18B9B4u;
    // 0x18b9b4: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x18b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x18b9b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18B9B8u;
    {
        const bool branch_taken_0x18b9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b9b8) {
            ctx->pc = 0x18BA18u;
            goto label_18ba18;
        }
    }
    ctx->pc = 0x18B9C0u;
    // 0x18b9c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18b9c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18b9c8: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x18b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b9cc: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x18b9d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18b9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18b9d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x18b9d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x18b9d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18b9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b9dc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x18b9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b9e4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x18b9e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x18b9e8: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x18b9e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18b9ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18b9f0: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x18b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b9f4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x18b9f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x18b9f8: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x18b9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18b9fc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ba00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ba00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ba04: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x18BA04u;
    {
        const bool branch_taken_0x18ba04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ba04) {
            ctx->pc = 0x18BA68u;
            goto label_18ba68;
        }
    }
    ctx->pc = 0x18BA0Cu;
    // 0x18ba0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18BA0Cu;
    {
        const bool branch_taken_0x18ba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA0Cu;
            // 0x18ba10: 0xae4000c8  sw          $zero, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba0c) {
            ctx->pc = 0x18BA68u;
            goto label_18ba68;
        }
    }
    ctx->pc = 0x18BA14u;
    // 0x18ba14: 0x0  nop
    ctx->pc = 0x18ba14u;
    // NOP
label_18ba18:
    // 0x18ba18: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18ba1c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18ba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ba20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18ba24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18ba24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ba28: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x18ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x18ba2c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18ba2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x18ba30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ba34: 0x0  nop
    ctx->pc = 0x18ba34u;
    // NOP
    // 0x18ba38: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18ba38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18ba3c: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x18ba3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18ba40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18ba44: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x18ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ba48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ba48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18ba4c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x18ba4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18ba50: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x18ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ba54: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18ba54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ba58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18BA58u;
    {
        const bool branch_taken_0x18ba58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA58u;
            // 0x18ba5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba58) {
            ctx->pc = 0x18BA68u;
            goto label_18ba68;
        }
    }
    ctx->pc = 0x18BA60u;
    // 0x18ba60: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x18ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x18ba64: 0x0  nop
    ctx->pc = 0x18ba64u;
    // NOP
label_18ba68:
    // 0x18ba68: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x18ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x18ba6c: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x18ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ba70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ba74: 0x0  nop
    ctx->pc = 0x18ba74u;
    // NOP
    // 0x18ba78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ba78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ba7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18BA7Cu;
    {
        const bool branch_taken_0x18ba7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA7Cu;
            // 0x18ba80: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba7c) {
            ctx->pc = 0x18BA98u;
            goto label_18ba98;
        }
    }
    ctx->pc = 0x18BA84u;
    // 0x18ba84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ba88: 0x0  nop
    ctx->pc = 0x18ba88u;
    // NOP
    // 0x18ba8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ba8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18ba90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18BA90u;
    {
        const bool branch_taken_0x18ba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BA90u;
            // 0x18ba94: 0xe6400064  swc1        $f0, 0x64($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba90) {
            ctx->pc = 0x18BAB0u;
            goto label_18bab0;
        }
    }
    ctx->pc = 0x18BA98u;
label_18ba98:
    // 0x18ba98: 0xc0656c4  jal         func_195B10
    ctx->pc = 0x18BA98u;
    SET_GPR_U32(ctx, 31, 0x18BAA0u);
    ctx->pc = 0x195B10u;
    if (runtime->hasFunction(0x195B10u)) {
        auto targetFn = runtime->lookupFunction(0x195B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAA0u; }
        if (ctx->pc != 0x18BAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead_0x195b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAA0u; }
        if (ctx->pc != 0x18BAA0u) { return; }
    }
    ctx->pc = 0x18BAA0u;
    // 0x18baa0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18baa4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x18baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x18baa8: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x18baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
    // 0x18baac: 0xae4200bc  sw          $v0, 0xBC($s2)
    ctx->pc = 0x18baacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
label_18bab0:
    // 0x18bab0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x18BAB0u;
    SET_GPR_U32(ctx, 31, 0x18BAB8u);
    ctx->pc = 0x18BAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAB0u;
            // 0x18bab4: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAB8u; }
        if (ctx->pc != 0x18BAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAB8u; }
        if (ctx->pc != 0x18BAB8u) { return; }
    }
    ctx->pc = 0x18BAB8u;
    // 0x18bab8: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x18bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18babc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18bac0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x18BAC0u;
    SET_GPR_U32(ctx, 31, 0x18BAC8u);
    ctx->pc = 0x18BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAC0u;
            // 0x18bac4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAC8u; }
        if (ctx->pc != 0x18BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAC8u; }
        if (ctx->pc != 0x18BAC8u) { return; }
    }
    ctx->pc = 0x18BAC8u;
    // 0x18bac8: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x18bac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18bacc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18bad0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x18BAD0u;
    SET_GPR_U32(ctx, 31, 0x18BAD8u);
    ctx->pc = 0x18BAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAD0u;
            // 0x18bad4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAD8u; }
        if (ctx->pc != 0x18BAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAD8u; }
        if (ctx->pc != 0x18BAD8u) { return; }
    }
    ctx->pc = 0x18BAD8u;
    // 0x18bad8: 0xc64c0058  lwc1        $f12, 0x58($s2)
    ctx->pc = 0x18bad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18badc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18badcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18bae0: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x18BAE0u;
    SET_GPR_U32(ctx, 31, 0x18BAE8u);
    ctx->pc = 0x18BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAE0u;
            // 0x18bae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAE8u; }
        if (ctx->pc != 0x18BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAE8u; }
        if (ctx->pc != 0x18BAE8u) { return; }
    }
    ctx->pc = 0x18BAE8u;
    // 0x18bae8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18baec: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x18baecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x18baf0: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x18BAF0u;
    SET_GPR_U32(ctx, 31, 0x18BAF8u);
    ctx->pc = 0x18BAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BAF0u;
            // 0x18baf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAF8u; }
        if (ctx->pc != 0x18BAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BAF8u; }
        if (ctx->pc != 0x18BAF8u) { return; }
    }
    ctx->pc = 0x18BAF8u;
    // 0x18baf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18bafc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x18bafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18bb00: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x18BB00u;
    SET_GPR_U32(ctx, 31, 0x18BB08u);
    ctx->pc = 0x18BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB00u;
            // 0x18bb04: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB08u; }
        if (ctx->pc != 0x18BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB08u; }
        if (ctx->pc != 0x18BB08u) { return; }
    }
    ctx->pc = 0x18BB08u;
    // 0x18bb08: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bb0c: 0x26440098  addiu       $a0, $s2, 0x98
    ctx->pc = 0x18bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x18bb10: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x18bb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bb14: 0x2645009c  addiu       $a1, $s2, 0x9C
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
    // 0x18bb18: 0xc64d0064  lwc1        $f13, 0x64($s2)
    ctx->pc = 0x18bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18bb1c: 0xc0636f0  jal         func_18DBC0
    ctx->pc = 0x18BB1Cu;
    SET_GPR_U32(ctx, 31, 0x18BB24u);
    ctx->pc = 0x18BB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB1Cu;
            // 0x18bb20: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DBC0u;
    if (runtime->hasFunction(0x18DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB24u; }
        if (ctx->pc != 0x18BB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x18dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BB24u; }
        if (ctx->pc != 0x18BB24u) { return; }
    }
    ctx->pc = 0x18BB24u;
    // 0x18bb24: 0x100006be  b           . + 4 + (0x6BE << 2)
    ctx->pc = 0x18BB24u;
    {
        const bool branch_taken_0x18bb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb24) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18BB2Cu;
    // 0x18bb2c: 0x0  nop
    ctx->pc = 0x18bb2cu;
    // NOP
label_18bb30:
    // 0x18bb30: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x18bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x18bb34: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18BB34u;
    {
        const bool branch_taken_0x18bb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb34) {
            ctx->pc = 0x18BBA0u;
            goto label_18bba0;
        }
    }
    ctx->pc = 0x18BB3Cu;
    // 0x18bb3c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18bb40: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x18bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x18bb44: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x18bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bb48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x18bb48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x18bb4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18bb4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bb50: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x18bb54: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x18bb54u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x18bb58: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x18bb5c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x18bb5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x18bb60: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x18bb60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x18bb64: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x18bb64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18bb68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18bb6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18bb6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bb70: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x18bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bb74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18bb74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bb78: 0x0  nop
    ctx->pc = 0x18bb78u;
    // NOP
    // 0x18bb7c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x18bb7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x18bb80: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x18bb80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18bb84: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bb88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18bb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bb8c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x18BB8Cu;
    {
        const bool branch_taken_0x18bb8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18bb8c) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BB94u;
    // 0x18bb94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18BB94u;
    {
        const bool branch_taken_0x18bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BB94u;
            // 0x18bb98: 0xae4000c8  sw          $zero, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb94) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BB9Cu;
    // 0x18bb9c: 0x0  nop
    ctx->pc = 0x18bb9cu;
    // NOP
label_18bba0:
    // 0x18bba0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18bba4: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x18bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bba8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x18bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x18bbac: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x18bbacu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x18bbb0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x18bbb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18bbb4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x18bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x18bbb8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x18bbb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x18bbbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18bbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bbc0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x18bbc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18bbc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18bbc8: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x18bbc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18bbcc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18bbd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18bbd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bbd4: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x18bbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bbd8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x18bbd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18bbdc: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x18bbdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18bbe0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bbe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18bbe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bbe8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18BBE8u;
    {
        const bool branch_taken_0x18bbe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BBE8u;
            // 0x18bbec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbe8) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BBF0u;
    // 0x18bbf0: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x18bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x18bbf4: 0x0  nop
    ctx->pc = 0x18bbf4u;
    // NOP
label_18bbf8:
    // 0x18bbf8: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x18bbfc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18bc00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18bc04: 0xae4400c4  sw          $a0, 0xC4($s2)
    ctx->pc = 0x18bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 4));
    // 0x18bc08: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x18bc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x18bc0c: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x18BC0Cu;
    {
        const bool branch_taken_0x18bc0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18bc0c) {
            ctx->pc = 0x18BCC8u;
            goto label_18bcc8;
        }
    }
    ctx->pc = 0x18BC14u;
    // 0x18bc14: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x18bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bc18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18bc18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bc1c: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18bc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bc20: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BC20u;
    SET_GPR_U32(ctx, 31, 0x18BC28u);
    ctx->pc = 0x18BC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC20u;
            // 0x18bc24: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC28u; }
        if (ctx->pc != 0x18BC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC28u; }
        if (ctx->pc != 0x18BC28u) { return; }
    }
    ctx->pc = 0x18BC28u;
    // 0x18bc28: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BC28u;
    SET_GPR_U32(ctx, 31, 0x18BC30u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC30u; }
        if (ctx->pc != 0x18BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC30u; }
        if (ctx->pc != 0x18BC30u) { return; }
    }
    ctx->pc = 0x18BC30u;
    // 0x18bc30: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bc34: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bc38: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bc38u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bc3c: 0x0  nop
    ctx->pc = 0x18bc3cu;
    // NOP
    // 0x18bc40: 0x0  nop
    ctx->pc = 0x18bc40u;
    // NOP
    // 0x18bc44: 0x1010  mfhi        $v0
    ctx->pc = 0x18bc44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bc48: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BC48u;
    SET_GPR_U32(ctx, 31, 0x18BC50u);
    ctx->pc = 0x18BC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC48u;
            // 0x18bc4c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC50u; }
        if (ctx->pc != 0x18BC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC50u; }
        if (ctx->pc != 0x18BC50u) { return; }
    }
    ctx->pc = 0x18BC50u;
    // 0x18bc50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc58: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bc58u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bc5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18bc5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bc60: 0x0  nop
    ctx->pc = 0x18bc60u;
    // NOP
    // 0x18bc64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18bc64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18bc68: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bc6c: 0x1810  mfhi        $v1
    ctx->pc = 0x18bc6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18bc70: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BC70u;
    SET_GPR_U32(ctx, 31, 0x18BC78u);
    ctx->pc = 0x18BC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC70u;
            // 0x18bc74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC78u; }
        if (ctx->pc != 0x18BC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC78u; }
        if (ctx->pc != 0x18BC78u) { return; }
    }
    ctx->pc = 0x18BC78u;
    // 0x18bc78: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BC78u;
    SET_GPR_U32(ctx, 31, 0x18BC80u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC80u; }
        if (ctx->pc != 0x18BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC80u; }
        if (ctx->pc != 0x18BC80u) { return; }
    }
    ctx->pc = 0x18BC80u;
    // 0x18bc80: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bc84: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bc88: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bc88u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bc8c: 0x0  nop
    ctx->pc = 0x18bc8cu;
    // NOP
    // 0x18bc90: 0x0  nop
    ctx->pc = 0x18bc90u;
    // NOP
    // 0x18bc94: 0x1010  mfhi        $v0
    ctx->pc = 0x18bc94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bc98: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BC98u;
    SET_GPR_U32(ctx, 31, 0x18BCA0u);
    ctx->pc = 0x18BC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC98u;
            // 0x18bc9c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCA0u; }
        if (ctx->pc != 0x18BCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCA0u; }
        if (ctx->pc != 0x18BCA0u) { return; }
    }
    ctx->pc = 0x18BCA0u;
    // 0x18bca0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bca8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bca8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bcac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18bcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bcb0: 0x0  nop
    ctx->pc = 0x18bcb0u;
    // NOP
    // 0x18bcb4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18bcb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18bcb8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bcbc: 0x1810  mfhi        $v1
    ctx->pc = 0x18bcbcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18bcc0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BCC0u;
    SET_GPR_U32(ctx, 31, 0x18BCC8u);
    ctx->pc = 0x18BCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCC0u;
            // 0x18bcc4: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCC8u; }
        if (ctx->pc != 0x18BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCC8u; }
        if (ctx->pc != 0x18BCC8u) { return; }
    }
    ctx->pc = 0x18BCC8u;
label_18bcc8:
    // 0x18bcc8: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x18bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x18bccc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x18bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18bcd0: 0x148300d5  bne         $a0, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x18BCD0u;
    {
        const bool branch_taken_0x18bcd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18bcd0) {
            ctx->pc = 0x18C028u;
            goto label_18c028;
        }
    }
    ctx->pc = 0x18BCD8u;
    // 0x18bcd8: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bcdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18bcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bce0: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bce4: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BCE4u;
    SET_GPR_U32(ctx, 31, 0x18BCECu);
    ctx->pc = 0x18BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BCE4u;
            // 0x18bce8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCECu; }
        if (ctx->pc != 0x18BCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCECu; }
        if (ctx->pc != 0x18BCECu) { return; }
    }
    ctx->pc = 0x18BCECu;
    // 0x18bcec: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BCECu;
    SET_GPR_U32(ctx, 31, 0x18BCF4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCF4u; }
        if (ctx->pc != 0x18BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BCF4u; }
        if (ctx->pc != 0x18BCF4u) { return; }
    }
    ctx->pc = 0x18BCF4u;
    // 0x18bcf4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bcf8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bcfc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bcfcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bd00: 0x0  nop
    ctx->pc = 0x18bd00u;
    // NOP
    // 0x18bd04: 0x0  nop
    ctx->pc = 0x18bd04u;
    // NOP
    // 0x18bd08: 0x1010  mfhi        $v0
    ctx->pc = 0x18bd08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bd0c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BD0Cu;
    SET_GPR_U32(ctx, 31, 0x18BD14u);
    ctx->pc = 0x18BD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD0Cu;
            // 0x18bd10: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD14u; }
        if (ctx->pc != 0x18BD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD14u; }
        if (ctx->pc != 0x18BD14u) { return; }
    }
    ctx->pc = 0x18BD14u;
    // 0x18bd14: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd1c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bd1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bd20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18bd20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bd24: 0x0  nop
    ctx->pc = 0x18bd24u;
    // NOP
    // 0x18bd28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18bd28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18bd2c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bd30: 0x1810  mfhi        $v1
    ctx->pc = 0x18bd30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18bd34: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BD34u;
    SET_GPR_U32(ctx, 31, 0x18BD3Cu);
    ctx->pc = 0x18BD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD34u;
            // 0x18bd38: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD3Cu; }
        if (ctx->pc != 0x18BD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD3Cu; }
        if (ctx->pc != 0x18BD3Cu) { return; }
    }
    ctx->pc = 0x18BD3Cu;
    // 0x18bd3c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BD3Cu;
    SET_GPR_U32(ctx, 31, 0x18BD44u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD44u; }
        if (ctx->pc != 0x18BD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD44u; }
        if (ctx->pc != 0x18BD44u) { return; }
    }
    ctx->pc = 0x18BD44u;
    // 0x18bd44: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bd48: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bd4c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bd4cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bd50: 0x0  nop
    ctx->pc = 0x18bd50u;
    // NOP
    // 0x18bd54: 0x0  nop
    ctx->pc = 0x18bd54u;
    // NOP
    // 0x18bd58: 0x1010  mfhi        $v0
    ctx->pc = 0x18bd58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bd5c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BD5Cu;
    SET_GPR_U32(ctx, 31, 0x18BD64u);
    ctx->pc = 0x18BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD5Cu;
            // 0x18bd60: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD64u; }
        if (ctx->pc != 0x18BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD64u; }
        if (ctx->pc != 0x18BD64u) { return; }
    }
    ctx->pc = 0x18BD64u;
    // 0x18bd64: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd6c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bd6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bd70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18bd70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bd74: 0x0  nop
    ctx->pc = 0x18bd74u;
    // NOP
    // 0x18bd78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18bd78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18bd7c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bd80: 0x1810  mfhi        $v1
    ctx->pc = 0x18bd80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18bd84: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BD84u;
    SET_GPR_U32(ctx, 31, 0x18BD8Cu);
    ctx->pc = 0x18BD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD84u;
            // 0x18bd88: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD8Cu; }
        if (ctx->pc != 0x18BD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD8Cu; }
        if (ctx->pc != 0x18BD8Cu) { return; }
    }
    ctx->pc = 0x18BD8Cu;
    // 0x18bd8c: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x18bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bd90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18bd90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bd94: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bd98: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BD98u;
    SET_GPR_U32(ctx, 31, 0x18BDA0u);
    ctx->pc = 0x18BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD98u;
            // 0x18bd9c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDA0u; }
        if (ctx->pc != 0x18BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDA0u; }
        if (ctx->pc != 0x18BDA0u) { return; }
    }
    ctx->pc = 0x18BDA0u;
    // 0x18bda0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BDA0u;
    SET_GPR_U32(ctx, 31, 0x18BDA8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDA8u; }
        if (ctx->pc != 0x18BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDA8u; }
        if (ctx->pc != 0x18BDA8u) { return; }
    }
    ctx->pc = 0x18BDA8u;
    // 0x18bda8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bdac: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bdb0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bdb0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bdb4: 0x0  nop
    ctx->pc = 0x18bdb4u;
    // NOP
    // 0x18bdb8: 0x0  nop
    ctx->pc = 0x18bdb8u;
    // NOP
    // 0x18bdbc: 0x1010  mfhi        $v0
    ctx->pc = 0x18bdbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bdc0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BDC0u;
    SET_GPR_U32(ctx, 31, 0x18BDC8u);
    ctx->pc = 0x18BDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDC0u;
            // 0x18bdc4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDC8u; }
        if (ctx->pc != 0x18BDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDC8u; }
        if (ctx->pc != 0x18BDC8u) { return; }
    }
    ctx->pc = 0x18BDC8u;
    // 0x18bdc8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bdcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdd0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bdd0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bdd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18bdd8: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18bddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bde0: 0x1010  mfhi        $v0
    ctx->pc = 0x18bde0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bde4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18bde4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18bde8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BDE8u;
    SET_GPR_U32(ctx, 31, 0x18BDF0u);
    ctx->pc = 0x18BDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDE8u;
            // 0x18bdec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDF0u; }
        if (ctx->pc != 0x18BDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDF0u; }
        if (ctx->pc != 0x18BDF0u) { return; }
    }
    ctx->pc = 0x18BDF0u;
    // 0x18bdf0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BDF0u;
    SET_GPR_U32(ctx, 31, 0x18BDF8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDF8u; }
        if (ctx->pc != 0x18BDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDF8u; }
        if (ctx->pc != 0x18BDF8u) { return; }
    }
    ctx->pc = 0x18BDF8u;
    // 0x18bdf8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bdfc: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18be00: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18be00u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18be04: 0x0  nop
    ctx->pc = 0x18be04u;
    // NOP
    // 0x18be08: 0x0  nop
    ctx->pc = 0x18be08u;
    // NOP
    // 0x18be0c: 0x1010  mfhi        $v0
    ctx->pc = 0x18be0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18be10: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BE10u;
    SET_GPR_U32(ctx, 31, 0x18BE18u);
    ctx->pc = 0x18BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE10u;
            // 0x18be14: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE18u; }
        if (ctx->pc != 0x18BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE18u; }
        if (ctx->pc != 0x18BE18u) { return; }
    }
    ctx->pc = 0x18BE18u;
    // 0x18be18: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18be1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be20: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18be20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18be24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18be24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18be28: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18be2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18be2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18be30: 0x1010  mfhi        $v0
    ctx->pc = 0x18be30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18be34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18be34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18be38: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BE38u;
    SET_GPR_U32(ctx, 31, 0x18BE40u);
    ctx->pc = 0x18BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE38u;
            // 0x18be3c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE40u; }
        if (ctx->pc != 0x18BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE40u; }
        if (ctx->pc != 0x18BE40u) { return; }
    }
    ctx->pc = 0x18BE40u;
    // 0x18be40: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BE40u;
    SET_GPR_U32(ctx, 31, 0x18BE48u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE48u; }
        if (ctx->pc != 0x18BE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE48u; }
        if (ctx->pc != 0x18BE48u) { return; }
    }
    ctx->pc = 0x18BE48u;
    // 0x18be48: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18be48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18be4c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18be50: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18be50u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18be54: 0x0  nop
    ctx->pc = 0x18be54u;
    // NOP
    // 0x18be58: 0x0  nop
    ctx->pc = 0x18be58u;
    // NOP
    // 0x18be5c: 0x1010  mfhi        $v0
    ctx->pc = 0x18be5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18be60: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BE60u;
    SET_GPR_U32(ctx, 31, 0x18BE68u);
    ctx->pc = 0x18BE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE60u;
            // 0x18be64: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE68u; }
        if (ctx->pc != 0x18BE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE68u; }
        if (ctx->pc != 0x18BE68u) { return; }
    }
    ctx->pc = 0x18BE68u;
    // 0x18be68: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18be6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18be6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be70: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18be70u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18be74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18be74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18be78: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18be7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18be7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18be80: 0x1010  mfhi        $v0
    ctx->pc = 0x18be80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18be84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18be84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18be88: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BE88u;
    SET_GPR_U32(ctx, 31, 0x18BE90u);
    ctx->pc = 0x18BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE88u;
            // 0x18be8c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE90u; }
        if (ctx->pc != 0x18BE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE90u; }
        if (ctx->pc != 0x18BE90u) { return; }
    }
    ctx->pc = 0x18BE90u;
    // 0x18be90: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BE90u;
    SET_GPR_U32(ctx, 31, 0x18BE98u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE98u; }
        if (ctx->pc != 0x18BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE98u; }
        if (ctx->pc != 0x18BE98u) { return; }
    }
    ctx->pc = 0x18BE98u;
    // 0x18be98: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18be9c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bea0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bea0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bea4: 0x0  nop
    ctx->pc = 0x18bea4u;
    // NOP
    // 0x18bea8: 0x0  nop
    ctx->pc = 0x18bea8u;
    // NOP
    // 0x18beac: 0x1010  mfhi        $v0
    ctx->pc = 0x18beacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18beb0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BEB0u;
    SET_GPR_U32(ctx, 31, 0x18BEB8u);
    ctx->pc = 0x18BEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEB0u;
            // 0x18beb4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEB8u; }
        if (ctx->pc != 0x18BEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEB8u; }
        if (ctx->pc != 0x18BEB8u) { return; }
    }
    ctx->pc = 0x18BEB8u;
    // 0x18beb8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bebc: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bec0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bec0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bec8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18becc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18bed0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18bed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18bed4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18bed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bed8: 0x1010  mfhi        $v0
    ctx->pc = 0x18bed8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bedc: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BEDCu;
    SET_GPR_U32(ctx, 31, 0x18BEE4u);
    ctx->pc = 0x18BEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEDCu;
            // 0x18bee0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEE4u; }
        if (ctx->pc != 0x18BEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEE4u; }
        if (ctx->pc != 0x18BEE4u) { return; }
    }
    ctx->pc = 0x18BEE4u;
    // 0x18bee4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BEE4u;
    SET_GPR_U32(ctx, 31, 0x18BEECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEECu; }
        if (ctx->pc != 0x18BEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEECu; }
        if (ctx->pc != 0x18BEECu) { return; }
    }
    ctx->pc = 0x18BEECu;
    // 0x18beec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bef0: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bef4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bef4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bef8: 0x0  nop
    ctx->pc = 0x18bef8u;
    // NOP
    // 0x18befc: 0x0  nop
    ctx->pc = 0x18befcu;
    // NOP
    // 0x18bf00: 0x1010  mfhi        $v0
    ctx->pc = 0x18bf00u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bf04: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BF04u;
    SET_GPR_U32(ctx, 31, 0x18BF0Cu);
    ctx->pc = 0x18BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF04u;
            // 0x18bf08: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF0Cu; }
        if (ctx->pc != 0x18BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF0Cu; }
        if (ctx->pc != 0x18BF0Cu) { return; }
    }
    ctx->pc = 0x18BF0Cu;
    // 0x18bf0c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bf10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf14: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bf14u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bf18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18bf1c: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bf20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18bf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bf24: 0x1010  mfhi        $v0
    ctx->pc = 0x18bf24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bf28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18bf28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18bf2c: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BF2Cu;
    SET_GPR_U32(ctx, 31, 0x18BF34u);
    ctx->pc = 0x18BF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF2Cu;
            // 0x18bf30: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF34u; }
        if (ctx->pc != 0x18BF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF34u; }
        if (ctx->pc != 0x18BF34u) { return; }
    }
    ctx->pc = 0x18BF34u;
    // 0x18bf34: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BF34u;
    SET_GPR_U32(ctx, 31, 0x18BF3Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF3Cu; }
        if (ctx->pc != 0x18BF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF3Cu; }
        if (ctx->pc != 0x18BF3Cu) { return; }
    }
    ctx->pc = 0x18BF3Cu;
    // 0x18bf3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bf40: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bf44: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bf44u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bf48: 0x0  nop
    ctx->pc = 0x18bf48u;
    // NOP
    // 0x18bf4c: 0x0  nop
    ctx->pc = 0x18bf4cu;
    // NOP
    // 0x18bf50: 0x1010  mfhi        $v0
    ctx->pc = 0x18bf50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bf54: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BF54u;
    SET_GPR_U32(ctx, 31, 0x18BF5Cu);
    ctx->pc = 0x18BF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF54u;
            // 0x18bf58: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF5Cu; }
        if (ctx->pc != 0x18BF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF5Cu; }
        if (ctx->pc != 0x18BF5Cu) { return; }
    }
    ctx->pc = 0x18BF5Cu;
    // 0x18bf5c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bf60: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bf64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bf64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18bf70: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x18bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x18bf74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18bf74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18bf78: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18bf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bf7c: 0x1010  mfhi        $v0
    ctx->pc = 0x18bf7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bf80: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BF80u;
    SET_GPR_U32(ctx, 31, 0x18BF88u);
    ctx->pc = 0x18BF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF80u;
            // 0x18bf84: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF88u; }
        if (ctx->pc != 0x18BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF88u; }
        if (ctx->pc != 0x18BF88u) { return; }
    }
    ctx->pc = 0x18BF88u;
    // 0x18bf88: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BF88u;
    SET_GPR_U32(ctx, 31, 0x18BF90u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF90u; }
        if (ctx->pc != 0x18BF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF90u; }
        if (ctx->pc != 0x18BF90u) { return; }
    }
    ctx->pc = 0x18BF90u;
    // 0x18bf90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bf94: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bf98: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bf98u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bf9c: 0x0  nop
    ctx->pc = 0x18bf9cu;
    // NOP
    // 0x18bfa0: 0x0  nop
    ctx->pc = 0x18bfa0u;
    // NOP
    // 0x18bfa4: 0x1010  mfhi        $v0
    ctx->pc = 0x18bfa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bfa8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BFA8u;
    SET_GPR_U32(ctx, 31, 0x18BFB0u);
    ctx->pc = 0x18BFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFA8u;
            // 0x18bfac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFB0u; }
        if (ctx->pc != 0x18BFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFB0u; }
        if (ctx->pc != 0x18BFB0u) { return; }
    }
    ctx->pc = 0x18BFB0u;
    // 0x18bfb0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bfb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfb8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18bfb8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bfbc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18bfc0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18bfc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18bfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18bfc8: 0x1010  mfhi        $v0
    ctx->pc = 0x18bfc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bfcc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18bfccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18bfd0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18BFD0u;
    SET_GPR_U32(ctx, 31, 0x18BFD8u);
    ctx->pc = 0x18BFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFD0u;
            // 0x18bfd4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFD8u; }
        if (ctx->pc != 0x18BFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFD8u; }
        if (ctx->pc != 0x18BFD8u) { return; }
    }
    ctx->pc = 0x18BFD8u;
    // 0x18bfd8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BFD8u;
    SET_GPR_U32(ctx, 31, 0x18BFE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFE0u; }
        if (ctx->pc != 0x18BFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFE0u; }
        if (ctx->pc != 0x18BFE0u) { return; }
    }
    ctx->pc = 0x18BFE0u;
    // 0x18bfe0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18bfe4: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18bfe8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18bfe8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18bfec: 0x0  nop
    ctx->pc = 0x18bfecu;
    // NOP
    // 0x18bff0: 0x0  nop
    ctx->pc = 0x18bff0u;
    // NOP
    // 0x18bff4: 0x1010  mfhi        $v0
    ctx->pc = 0x18bff4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bff8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18BFF8u;
    SET_GPR_U32(ctx, 31, 0x18C000u);
    ctx->pc = 0x18BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFF8u;
            // 0x18bffc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C000u; }
        if (ctx->pc != 0x18C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C000u; }
        if (ctx->pc != 0x18C000u) { return; }
    }
    ctx->pc = 0x18C000u;
    // 0x18c000: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c008: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c008u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c00c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18c010: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18c010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c018: 0x1010  mfhi        $v0
    ctx->pc = 0x18c018u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c01c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c01cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c020: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C020u;
    SET_GPR_U32(ctx, 31, 0x18C028u);
    ctx->pc = 0x18C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C020u;
            // 0x18c024: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C028u; }
        if (ctx->pc != 0x18C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C028u; }
        if (ctx->pc != 0x18C028u) { return; }
    }
    ctx->pc = 0x18C028u;
label_18c028:
    // 0x18c028: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x18c028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x18c02c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c030: 0x148300d5  bne         $a0, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x18C030u;
    {
        const bool branch_taken_0x18c030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18c030) {
            ctx->pc = 0x18C388u;
            goto label_18c388;
        }
    }
    ctx->pc = 0x18C038u;
    // 0x18c038: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x18c038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c03c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18c03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c040: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18c040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c044: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C044u;
    SET_GPR_U32(ctx, 31, 0x18C04Cu);
    ctx->pc = 0x18C048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C044u;
            // 0x18c048: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C04Cu; }
        if (ctx->pc != 0x18C04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C04Cu; }
        if (ctx->pc != 0x18C04Cu) { return; }
    }
    ctx->pc = 0x18C04Cu;
    // 0x18c04c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C04Cu;
    SET_GPR_U32(ctx, 31, 0x18C054u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C054u; }
        if (ctx->pc != 0x18C054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C054u; }
        if (ctx->pc != 0x18C054u) { return; }
    }
    ctx->pc = 0x18C054u;
    // 0x18c054: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c058: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c05c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c05cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c060: 0x0  nop
    ctx->pc = 0x18c060u;
    // NOP
    // 0x18c064: 0x0  nop
    ctx->pc = 0x18c064u;
    // NOP
    // 0x18c068: 0x1010  mfhi        $v0
    ctx->pc = 0x18c068u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c06c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C06Cu;
    SET_GPR_U32(ctx, 31, 0x18C074u);
    ctx->pc = 0x18C070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C06Cu;
            // 0x18c070: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C074u; }
        if (ctx->pc != 0x18C074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C074u; }
        if (ctx->pc != 0x18C074u) { return; }
    }
    ctx->pc = 0x18C074u;
    // 0x18c074: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c07c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c07cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c080: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18c080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c084: 0x0  nop
    ctx->pc = 0x18c084u;
    // NOP
    // 0x18c088: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c088u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c08c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c090: 0x1810  mfhi        $v1
    ctx->pc = 0x18c090u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18c094: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C094u;
    SET_GPR_U32(ctx, 31, 0x18C09Cu);
    ctx->pc = 0x18C098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C094u;
            // 0x18c098: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C09Cu; }
        if (ctx->pc != 0x18C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C09Cu; }
        if (ctx->pc != 0x18C09Cu) { return; }
    }
    ctx->pc = 0x18C09Cu;
    // 0x18c09c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C09Cu;
    SET_GPR_U32(ctx, 31, 0x18C0A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0A4u; }
        if (ctx->pc != 0x18C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0A4u; }
        if (ctx->pc != 0x18C0A4u) { return; }
    }
    ctx->pc = 0x18C0A4u;
    // 0x18c0a4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c0a8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c0ac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c0acu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c0b0: 0x0  nop
    ctx->pc = 0x18c0b0u;
    // NOP
    // 0x18c0b4: 0x0  nop
    ctx->pc = 0x18c0b4u;
    // NOP
    // 0x18c0b8: 0x1010  mfhi        $v0
    ctx->pc = 0x18c0b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c0bc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C0BCu;
    SET_GPR_U32(ctx, 31, 0x18C0C4u);
    ctx->pc = 0x18C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0BCu;
            // 0x18c0c0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0C4u; }
        if (ctx->pc != 0x18C0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0C4u; }
        if (ctx->pc != 0x18C0C4u) { return; }
    }
    ctx->pc = 0x18C0C4u;
    // 0x18c0c4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c0ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c0d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18c0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c0d4: 0x0  nop
    ctx->pc = 0x18c0d4u;
    // NOP
    // 0x18c0d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c0d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c0dc: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c0e0: 0x1810  mfhi        $v1
    ctx->pc = 0x18c0e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18c0e4: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C0E4u;
    SET_GPR_U32(ctx, 31, 0x18C0ECu);
    ctx->pc = 0x18C0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0E4u;
            // 0x18c0e8: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0ECu; }
        if (ctx->pc != 0x18C0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C0ECu; }
        if (ctx->pc != 0x18C0ECu) { return; }
    }
    ctx->pc = 0x18C0ECu;
    // 0x18c0ec: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x18c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c0f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18c0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c0f4: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c0f8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C0F8u;
    SET_GPR_U32(ctx, 31, 0x18C100u);
    ctx->pc = 0x18C0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0F8u;
            // 0x18c0fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C100u; }
        if (ctx->pc != 0x18C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C100u; }
        if (ctx->pc != 0x18C100u) { return; }
    }
    ctx->pc = 0x18C100u;
    // 0x18c100: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C100u;
    SET_GPR_U32(ctx, 31, 0x18C108u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C108u; }
        if (ctx->pc != 0x18C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C108u; }
        if (ctx->pc != 0x18C108u) { return; }
    }
    ctx->pc = 0x18C108u;
    // 0x18c108: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c10c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c110: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c110u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c114: 0x0  nop
    ctx->pc = 0x18c114u;
    // NOP
    // 0x18c118: 0x0  nop
    ctx->pc = 0x18c118u;
    // NOP
    // 0x18c11c: 0x1010  mfhi        $v0
    ctx->pc = 0x18c11cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c120: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C120u;
    SET_GPR_U32(ctx, 31, 0x18C128u);
    ctx->pc = 0x18C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C120u;
            // 0x18c124: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C128u; }
        if (ctx->pc != 0x18C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C128u; }
        if (ctx->pc != 0x18C128u) { return; }
    }
    ctx->pc = 0x18C128u;
    // 0x18c128: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c130: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c130u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c134: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c138: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18c138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c13c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c140: 0x1010  mfhi        $v0
    ctx->pc = 0x18c140u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c144: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c144u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c148: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C148u;
    SET_GPR_U32(ctx, 31, 0x18C150u);
    ctx->pc = 0x18C14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C148u;
            // 0x18c14c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C150u; }
        if (ctx->pc != 0x18C150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C150u; }
        if (ctx->pc != 0x18C150u) { return; }
    }
    ctx->pc = 0x18C150u;
    // 0x18c150: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C150u;
    SET_GPR_U32(ctx, 31, 0x18C158u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C158u; }
        if (ctx->pc != 0x18C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C158u; }
        if (ctx->pc != 0x18C158u) { return; }
    }
    ctx->pc = 0x18C158u;
    // 0x18c158: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c15c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c160: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c160u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c164: 0x0  nop
    ctx->pc = 0x18c164u;
    // NOP
    // 0x18c168: 0x0  nop
    ctx->pc = 0x18c168u;
    // NOP
    // 0x18c16c: 0x1010  mfhi        $v0
    ctx->pc = 0x18c16cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c170: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C170u;
    SET_GPR_U32(ctx, 31, 0x18C178u);
    ctx->pc = 0x18C174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C170u;
            // 0x18c174: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C178u; }
        if (ctx->pc != 0x18C178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C178u; }
        if (ctx->pc != 0x18C178u) { return; }
    }
    ctx->pc = 0x18C178u;
    // 0x18c178: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c180: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c180u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c184: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c188: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c18c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c190: 0x1010  mfhi        $v0
    ctx->pc = 0x18c190u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c194: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c194u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c198: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C198u;
    SET_GPR_U32(ctx, 31, 0x18C1A0u);
    ctx->pc = 0x18C19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C198u;
            // 0x18c19c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1A0u; }
        if (ctx->pc != 0x18C1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1A0u; }
        if (ctx->pc != 0x18C1A0u) { return; }
    }
    ctx->pc = 0x18C1A0u;
    // 0x18c1a0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C1A0u;
    SET_GPR_U32(ctx, 31, 0x18C1A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1A8u; }
        if (ctx->pc != 0x18C1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1A8u; }
        if (ctx->pc != 0x18C1A8u) { return; }
    }
    ctx->pc = 0x18C1A8u;
    // 0x18c1a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c1ac: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c1b0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c1b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c1b4: 0x0  nop
    ctx->pc = 0x18c1b4u;
    // NOP
    // 0x18c1b8: 0x0  nop
    ctx->pc = 0x18c1b8u;
    // NOP
    // 0x18c1bc: 0x1010  mfhi        $v0
    ctx->pc = 0x18c1bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c1c0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C1C0u;
    SET_GPR_U32(ctx, 31, 0x18C1C8u);
    ctx->pc = 0x18C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C1C0u;
            // 0x18c1c4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1C8u; }
        if (ctx->pc != 0x18C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1C8u; }
        if (ctx->pc != 0x18C1C8u) { return; }
    }
    ctx->pc = 0x18C1C8u;
    // 0x18c1c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c1d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c1d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c1d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c1d8: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c1dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c1e0: 0x1010  mfhi        $v0
    ctx->pc = 0x18c1e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c1e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c1e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c1e8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C1E8u;
    SET_GPR_U32(ctx, 31, 0x18C1F0u);
    ctx->pc = 0x18C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C1E8u;
            // 0x18c1ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1F0u; }
        if (ctx->pc != 0x18C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1F0u; }
        if (ctx->pc != 0x18C1F0u) { return; }
    }
    ctx->pc = 0x18C1F0u;
    // 0x18c1f0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C1F0u;
    SET_GPR_U32(ctx, 31, 0x18C1F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1F8u; }
        if (ctx->pc != 0x18C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C1F8u; }
        if (ctx->pc != 0x18C1F8u) { return; }
    }
    ctx->pc = 0x18C1F8u;
    // 0x18c1f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c1fc: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c200: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c200u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c204: 0x0  nop
    ctx->pc = 0x18c204u;
    // NOP
    // 0x18c208: 0x0  nop
    ctx->pc = 0x18c208u;
    // NOP
    // 0x18c20c: 0x1010  mfhi        $v0
    ctx->pc = 0x18c20cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c210: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C210u;
    SET_GPR_U32(ctx, 31, 0x18C218u);
    ctx->pc = 0x18C214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C210u;
            // 0x18c214: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C218u; }
        if (ctx->pc != 0x18C218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C218u; }
        if (ctx->pc != 0x18C218u) { return; }
    }
    ctx->pc = 0x18C218u;
    // 0x18c218: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c21c: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c220: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c220u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c228: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x18c228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x18c22c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x18c230: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18c230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18c234: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18c234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c238: 0x1010  mfhi        $v0
    ctx->pc = 0x18c238u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c23c: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C23Cu;
    SET_GPR_U32(ctx, 31, 0x18C244u);
    ctx->pc = 0x18C240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C23Cu;
            // 0x18c240: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C244u; }
        if (ctx->pc != 0x18C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C244u; }
        if (ctx->pc != 0x18C244u) { return; }
    }
    ctx->pc = 0x18C244u;
    // 0x18c244: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C244u;
    SET_GPR_U32(ctx, 31, 0x18C24Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C24Cu; }
        if (ctx->pc != 0x18C24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C24Cu; }
        if (ctx->pc != 0x18C24Cu) { return; }
    }
    ctx->pc = 0x18C24Cu;
    // 0x18c24c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c250: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c254: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c254u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c258: 0x0  nop
    ctx->pc = 0x18c258u;
    // NOP
    // 0x18c25c: 0x0  nop
    ctx->pc = 0x18c25cu;
    // NOP
    // 0x18c260: 0x1010  mfhi        $v0
    ctx->pc = 0x18c260u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c264: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C264u;
    SET_GPR_U32(ctx, 31, 0x18C26Cu);
    ctx->pc = 0x18C268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C264u;
            // 0x18c268: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C26Cu; }
        if (ctx->pc != 0x18C26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C26Cu; }
        if (ctx->pc != 0x18C26Cu) { return; }
    }
    ctx->pc = 0x18C26Cu;
    // 0x18c26c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c274: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c274u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c278: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x18c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x18c27c: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c280: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c284: 0x1010  mfhi        $v0
    ctx->pc = 0x18c284u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c288: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c288u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c28c: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C28Cu;
    SET_GPR_U32(ctx, 31, 0x18C294u);
    ctx->pc = 0x18C290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C28Cu;
            // 0x18c290: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C294u; }
        if (ctx->pc != 0x18C294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C294u; }
        if (ctx->pc != 0x18C294u) { return; }
    }
    ctx->pc = 0x18C294u;
    // 0x18c294: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C294u;
    SET_GPR_U32(ctx, 31, 0x18C29Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C29Cu; }
        if (ctx->pc != 0x18C29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C29Cu; }
        if (ctx->pc != 0x18C29Cu) { return; }
    }
    ctx->pc = 0x18C29Cu;
    // 0x18c29c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c2a0: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c2a4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c2a4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c2a8: 0x0  nop
    ctx->pc = 0x18c2a8u;
    // NOP
    // 0x18c2ac: 0x0  nop
    ctx->pc = 0x18c2acu;
    // NOP
    // 0x18c2b0: 0x1010  mfhi        $v0
    ctx->pc = 0x18c2b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c2b4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C2B4u;
    SET_GPR_U32(ctx, 31, 0x18C2BCu);
    ctx->pc = 0x18C2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C2B4u;
            // 0x18c2b8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2BCu; }
        if (ctx->pc != 0x18C2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2BCu; }
        if (ctx->pc != 0x18C2BCu) { return; }
    }
    ctx->pc = 0x18C2BCu;
    // 0x18c2bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c2c0: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c2c4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c2c4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c2d0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x18c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x18c2d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18c2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18c2d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18c2d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c2dc: 0x1010  mfhi        $v0
    ctx->pc = 0x18c2dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c2e0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C2E0u;
    SET_GPR_U32(ctx, 31, 0x18C2E8u);
    ctx->pc = 0x18C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C2E0u;
            // 0x18c2e4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2E8u; }
        if (ctx->pc != 0x18C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2E8u; }
        if (ctx->pc != 0x18C2E8u) { return; }
    }
    ctx->pc = 0x18C2E8u;
    // 0x18c2e8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C2E8u;
    SET_GPR_U32(ctx, 31, 0x18C2F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2F0u; }
        if (ctx->pc != 0x18C2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2F0u; }
        if (ctx->pc != 0x18C2F0u) { return; }
    }
    ctx->pc = 0x18C2F0u;
    // 0x18c2f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c2f4: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c2f8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c2f8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c2fc: 0x0  nop
    ctx->pc = 0x18c2fcu;
    // NOP
    // 0x18c300: 0x0  nop
    ctx->pc = 0x18c300u;
    // NOP
    // 0x18c304: 0x1010  mfhi        $v0
    ctx->pc = 0x18c304u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c308: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C308u;
    SET_GPR_U32(ctx, 31, 0x18C310u);
    ctx->pc = 0x18C30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C308u;
            // 0x18c30c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C310u; }
        if (ctx->pc != 0x18C310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C310u; }
        if (ctx->pc != 0x18C310u) { return; }
    }
    ctx->pc = 0x18C310u;
    // 0x18c310: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c318: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c318u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c31c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x18c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x18c320: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c328: 0x1010  mfhi        $v0
    ctx->pc = 0x18c328u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c32c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c32cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c330: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C330u;
    SET_GPR_U32(ctx, 31, 0x18C338u);
    ctx->pc = 0x18C334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C330u;
            // 0x18c334: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C338u; }
        if (ctx->pc != 0x18C338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C338u; }
        if (ctx->pc != 0x18C338u) { return; }
    }
    ctx->pc = 0x18C338u;
    // 0x18c338: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C338u;
    SET_GPR_U32(ctx, 31, 0x18C340u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C340u; }
        if (ctx->pc != 0x18C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C340u; }
        if (ctx->pc != 0x18C340u) { return; }
    }
    ctx->pc = 0x18C340u;
    // 0x18c340: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18c340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c344: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18c348: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18c348u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c34c: 0x0  nop
    ctx->pc = 0x18c34cu;
    // NOP
    // 0x18c350: 0x0  nop
    ctx->pc = 0x18c350u;
    // NOP
    // 0x18c354: 0x1010  mfhi        $v0
    ctx->pc = 0x18c354u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c358: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18C358u;
    SET_GPR_U32(ctx, 31, 0x18C360u);
    ctx->pc = 0x18C35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C358u;
            // 0x18c35c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C360u; }
        if (ctx->pc != 0x18C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C360u; }
        if (ctx->pc != 0x18C360u) { return; }
    }
    ctx->pc = 0x18C360u;
    // 0x18c360: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18c360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c368: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18c368u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18c36c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x18c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x18c370: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18c370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18c374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c378: 0x1010  mfhi        $v0
    ctx->pc = 0x18c378u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c37c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18c37cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18c380: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18C380u;
    SET_GPR_U32(ctx, 31, 0x18C388u);
    ctx->pc = 0x18C384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C380u;
            // 0x18c384: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C388u; }
        if (ctx->pc != 0x18C388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C388u; }
        if (ctx->pc != 0x18C388u) { return; }
    }
    ctx->pc = 0x18C388u;
label_18c388:
    // 0x18c388: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x18c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x18c38c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x18c38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x18c390: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x18C390u;
    {
        const bool branch_taken_0x18c390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c390) {
            ctx->pc = 0x18C468u;
            goto label_18c468;
        }
    }
    ctx->pc = 0x18C398u;
    // 0x18c398: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x18c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x18c39c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18c3a0: 0xae4300ac  sw          $v1, 0xAC($s2)
    ctx->pc = 0x18c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
    // 0x18c3a4: 0x8e4300ac  lw          $v1, 0xAC($s2)
    ctx->pc = 0x18c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x18c3a8: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18C3A8u;
    {
        const bool branch_taken_0x18c3a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18c3a8) {
            ctx->pc = 0x18C400u;
            goto label_18c400;
        }
    }
    ctx->pc = 0x18C3B0u;
    // 0x18c3b0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x18c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18c3b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x18c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x18c3b8: 0x24423530  addiu       $v0, $v0, 0x3530
    ctx->pc = 0x18c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
    // 0x18c3bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c3c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c3c4: 0xc056f7c  jal         func_15BDF0
    ctx->pc = 0x18C3C4u;
    SET_GPR_U32(ctx, 31, 0x18C3CCu);
    ctx->pc = 0x18C3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3C4u;
            // 0x18c3c8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BDF0u;
    if (runtime->hasFunction(0x15BDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3CCu; }
        if (ctx->pc != 0x18C3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getGameMode_0x15bdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3CCu; }
        if (ctx->pc != 0x18C3CCu) { return; }
    }
    ctx->pc = 0x18C3CCu;
    // 0x18c3cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c3d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C3D0u;
    {
        const bool branch_taken_0x18c3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18C3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3D0u;
            // 0x18c3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3d0) {
            ctx->pc = 0x18C3E0u;
            goto label_18c3e0;
        }
    }
    ctx->pc = 0x18C3D8u;
    // 0x18c3d8: 0xc065fb8  jal         func_197EE0
    ctx->pc = 0x18C3D8u;
    SET_GPR_U32(ctx, 31, 0x18C3E0u);
    ctx->pc = 0x197EE0u;
    if (runtime->hasFunction(0x197EE0u)) {
        auto targetFn = runtime->lookupFunction(0x197EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3E0u; }
        if (ctx->pc != 0x18C3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameEntryInit_0x197ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3E0u; }
        if (ctx->pc != 0x18C3E0u) { return; }
    }
    ctx->pc = 0x18C3E0u;
label_18c3e0:
    // 0x18c3e0: 0xc06369c  jal         func_18DA70
    ctx->pc = 0x18C3E0u;
    SET_GPR_U32(ctx, 31, 0x18C3E8u);
    ctx->pc = 0x18C3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3E0u;
            // 0x18c3e4: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA70u;
    if (runtime->hasFunction(0x18DA70u)) {
        auto targetFn = runtime->lookupFunction(0x18DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3E8u; }
        if (ctx->pc != 0x18C3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayer_0x18da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3E8u; }
        if (ctx->pc != 0x18C3E8u) { return; }
    }
    ctx->pc = 0x18C3E8u;
    // 0x18c3e8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x18c3ec: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x18c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x18c3f0: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x18c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
    // 0x18c3f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18C3F4u;
    {
        const bool branch_taken_0x18c3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3F4u;
            // 0x18c3f8: 0xae4000b0  sw          $zero, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3f4) {
            ctx->pc = 0x18C468u;
            goto label_18c468;
        }
    }
    ctx->pc = 0x18C3FCu;
    // 0x18c3fc: 0x0  nop
    ctx->pc = 0x18c3fcu;
    // NOP
label_18c400:
    // 0x18c400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c404: 0xae430094  sw          $v1, 0x94($s2)
    ctx->pc = 0x18c404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 3));
    // 0x18c408: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x18c408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x18c40c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18c410: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x18c410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
    // 0x18c414: 0x8c23161c  lw          $v1, 0x161C($at)
    ctx->pc = 0x18c414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x18c418: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x18c418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    // 0x18c41c: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x18c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18c420: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C420u;
    {
        const bool branch_taken_0x18c420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C420u;
            // 0x18c424: 0x3c04c158  lui         $a0, 0xC158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c420) {
            ctx->pc = 0x18C448u;
            goto label_18c448;
        }
    }
    ctx->pc = 0x18C428u;
    // 0x18c428: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x18c428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x18c42c: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x18c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
    // 0x18c430: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x18c430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x18c434: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x18c434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x18c438: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x18c438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x18c43c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18C43Cu;
    {
        const bool branch_taken_0x18c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C43Cu;
            // 0x18c440: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c43c) {
            ctx->pc = 0x18C468u;
            goto label_18c468;
        }
    }
    ctx->pc = 0x18C444u;
    // 0x18c444: 0x0  nop
    ctx->pc = 0x18c444u;
    // NOP
label_18c448:
    // 0x18c448: 0x3c034158  lui         $v1, 0x4158
    ctx->pc = 0x18c448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16728 << 16));
    // 0x18c44c: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x18c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x18c450: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x18c454: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x18c454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x18c458: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x18c458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x18c45c: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x18c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x18c460: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x18c460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x18c464: 0x0  nop
    ctx->pc = 0x18c464u;
    // NOP
label_18c468:
    // 0x18c468: 0x1000046d  b           . + 4 + (0x46D << 2)
    ctx->pc = 0x18C468u;
    {
        const bool branch_taken_0x18c468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c468) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18C470u;
label_18c470:
    // 0x18c470: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x18c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x18c474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C474u;
    {
        const bool branch_taken_0x18c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c474) {
            ctx->pc = 0x18C488u;
            goto label_18c488;
        }
    }
    ctx->pc = 0x18C47Cu;
    // 0x18c47c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18c480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C480u;
    {
        const bool branch_taken_0x18c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C480u;
            // 0x18c484: 0xae4200bc  sw          $v0, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c480) {
            ctx->pc = 0x18C490u;
            goto label_18c490;
        }
    }
    ctx->pc = 0x18C488u;
label_18c488:
    // 0x18c488: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x18c488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x18c48c: 0x0  nop
    ctx->pc = 0x18c48cu;
    // NOP
label_18c490:
    // 0x18c490: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x18c490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18c494: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x18C494u;
    {
        const bool branch_taken_0x18c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c494) {
            ctx->pc = 0x18C708u;
            goto label_18c708;
        }
    }
    ctx->pc = 0x18C49Cu;
    // 0x18c49c: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x18c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18c4a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c4a4: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18C4A4u;
    {
        const bool branch_taken_0x18c4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4A4u;
            // 0x18c4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4a4) {
            ctx->pc = 0x18C538u;
            goto label_18c538;
        }
    }
    ctx->pc = 0x18C4ACu;
    // 0x18c4ac: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18C4ACu;
    {
        const bool branch_taken_0x18c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c4ac) {
            ctx->pc = 0x18C500u;
            goto label_18c500;
        }
    }
    ctx->pc = 0x18C4B4u;
    // 0x18c4b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C4B4u;
    {
        const bool branch_taken_0x18c4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c4b4) {
            ctx->pc = 0x18C4C8u;
            goto label_18c4c8;
        }
    }
    ctx->pc = 0x18C4BCu;
    // 0x18c4bc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x18C4BCu;
    {
        const bool branch_taken_0x18c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c4bc) {
            ctx->pc = 0x18C560u;
            goto label_18c560;
        }
    }
    ctx->pc = 0x18C4C4u;
    // 0x18c4c4: 0x0  nop
    ctx->pc = 0x18c4c4u;
    // NOP
label_18c4c8:
    // 0x18c4c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c4cc: 0xc42221d8  lwc1        $f2, 0x21D8($at)
    ctx->pc = 0x18c4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c4d0: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x18c4d4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x18c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x18c4d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x18c4d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x18c4dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c4e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c4e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c4e8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18c4e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x18c4ec: 0x0  nop
    ctx->pc = 0x18c4ecu;
    // NOP
    // 0x18c4f0: 0x0  nop
    ctx->pc = 0x18c4f0u;
    // NOP
    // 0x18c4f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18C4F4u;
    {
        const bool branch_taken_0x18c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C4F4u;
            // 0x18c4f8: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4f4) {
            ctx->pc = 0x18C560u;
            goto label_18c560;
        }
    }
    ctx->pc = 0x18C4FCu;
    // 0x18c4fc: 0x0  nop
    ctx->pc = 0x18c4fcu;
    // NOP
label_18c500:
    // 0x18c500: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c504: 0xc42221d8  lwc1        $f2, 0x21D8($at)
    ctx->pc = 0x18c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c508: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x18c508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x18c50c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x18c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x18c510: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c510u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c514: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c51c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c520: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18c520u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x18c524: 0x0  nop
    ctx->pc = 0x18c524u;
    // NOP
    // 0x18c528: 0x0  nop
    ctx->pc = 0x18c528u;
    // NOP
    // 0x18c52c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18C52Cu;
    {
        const bool branch_taken_0x18c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C52Cu;
            // 0x18c530: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c52c) {
            ctx->pc = 0x18C560u;
            goto label_18c560;
        }
    }
    ctx->pc = 0x18C534u;
    // 0x18c534: 0x0  nop
    ctx->pc = 0x18c534u;
    // NOP
label_18c538:
    // 0x18c538: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c53c: 0xc42221d8  lwc1        $f2, 0x21D8($at)
    ctx->pc = 0x18c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c540: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x18c540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x18c544: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x18c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x18c548: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x18c548u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x18c54c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c54cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c554: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c558: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18c558u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x18c55c: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x18c55cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18c560:
    // 0x18c560: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c564: 0x8c2221d8  lw          $v0, 0x21D8($at)
    ctx->pc = 0x18c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x18c568: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x18c568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    // 0x18c56c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c570: 0x8c2225a0  lw          $v0, 0x25A0($at)
    ctx->pc = 0x18c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9632)));
    // 0x18c574: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18C574u;
    {
        const bool branch_taken_0x18c574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C574u;
            // 0x18c578: 0x3c023fe8  lui         $v0, 0x3FE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16360 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c574) {
            ctx->pc = 0x18C5B0u;
            goto label_18c5b0;
        }
    }
    ctx->pc = 0x18C57Cu;
    // 0x18c57c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18c57cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18c580: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x18C580u;
    SET_GPR_U32(ctx, 31, 0x18C588u);
    ctx->pc = 0x18C584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C580u;
            // 0x18c584: 0x2983c  dsll32      $s3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C588u; }
        if (ctx->pc != 0x18C588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C588u; }
        if (ctx->pc != 0x18C588u) { return; }
    }
    ctx->pc = 0x18C588u;
    // 0x18c588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18c588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c58c: 0xc040880  jal         func_102200
    ctx->pc = 0x18C58Cu;
    SET_GPR_U32(ctx, 31, 0x18C594u);
    ctx->pc = 0x18C590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C58Cu;
            // 0x18c590: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C594u; }
        if (ctx->pc != 0x18C594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C594u; }
        if (ctx->pc != 0x18C594u) { return; }
    }
    ctx->pc = 0x18C594u;
    // 0x18c594: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x18C594u;
    SET_GPR_U32(ctx, 31, 0x18C59Cu);
    ctx->pc = 0x18C598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C594u;
            // 0x18c598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C59Cu; }
        if (ctx->pc != 0x18C59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C59Cu; }
        if (ctx->pc != 0x18C59Cu) { return; }
    }
    ctx->pc = 0x18C59Cu;
    // 0x18c59c: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x18c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c5a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c5a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18C5A4u;
    {
        const bool branch_taken_0x18c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5A4u;
            // 0x18c5a8: 0xe6400064  swc1        $f0, 0x64($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5a4) {
            ctx->pc = 0x18C5F0u;
            goto label_18c5f0;
        }
    }
    ctx->pc = 0x18C5ACu;
    // 0x18c5ac: 0x0  nop
    ctx->pc = 0x18c5acu;
    // NOP
label_18c5b0:
    // 0x18c5b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c5b4: 0x8c2225a8  lw          $v0, 0x25A8($at)
    ctx->pc = 0x18c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9640)));
    // 0x18c5b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18C5B8u;
    {
        const bool branch_taken_0x18c5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5B8u;
            // 0x18c5bc: 0x3c023fe8  lui         $v0, 0x3FE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16360 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c5b8) {
            ctx->pc = 0x18C5F0u;
            goto label_18c5f0;
        }
    }
    ctx->pc = 0x18C5C0u;
    // 0x18c5c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18c5c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18c5c4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x18C5C4u;
    SET_GPR_U32(ctx, 31, 0x18C5CCu);
    ctx->pc = 0x18C5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5C4u;
            // 0x18c5c8: 0x2983c  dsll32      $s3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5CCu; }
        if (ctx->pc != 0x18C5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5CCu; }
        if (ctx->pc != 0x18C5CCu) { return; }
    }
    ctx->pc = 0x18C5CCu;
    // 0x18c5cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5d0: 0xc040880  jal         func_102200
    ctx->pc = 0x18C5D0u;
    SET_GPR_U32(ctx, 31, 0x18C5D8u);
    ctx->pc = 0x18C5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5D0u;
            // 0x18c5d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5D8u; }
        if (ctx->pc != 0x18C5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5D8u; }
        if (ctx->pc != 0x18C5D8u) { return; }
    }
    ctx->pc = 0x18C5D8u;
    // 0x18c5d8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x18C5D8u;
    SET_GPR_U32(ctx, 31, 0x18C5E0u);
    ctx->pc = 0x18C5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C5D8u;
            // 0x18c5dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5E0u; }
        if (ctx->pc != 0x18C5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5E0u; }
        if (ctx->pc != 0x18C5E0u) { return; }
    }
    ctx->pc = 0x18C5E0u;
    // 0x18c5e0: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x18c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c5e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c5e8: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x18c5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x18c5ec: 0x0  nop
    ctx->pc = 0x18c5ecu;
    // NOP
label_18c5f0:
    // 0x18c5f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c5f4: 0x8c2225b0  lw          $v0, 0x25B0($at)
    ctx->pc = 0x18c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9648)));
    // 0x18c5f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C5F8u;
    {
        const bool branch_taken_0x18c5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5f8) {
            ctx->pc = 0x18C640u;
            goto label_18c640;
        }
    }
    ctx->pc = 0x18C600u;
    // 0x18c600: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c604: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x18c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x18c608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c60c: 0x0  nop
    ctx->pc = 0x18c60cu;
    // NOP
    // 0x18c610: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x18c610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x18c614: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x18c614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x18c618: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c61c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c61cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c620: 0x450100d3  bc1t        . + 4 + (0xD3 << 2)
    ctx->pc = 0x18C620u;
    {
        const bool branch_taken_0x18c620 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C620u;
            // 0x18c624: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c620) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C628u;
    // 0x18c628: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c628u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c630: 0x0  nop
    ctx->pc = 0x18c630u;
    // NOP
    // 0x18c634: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c638: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x18C638u;
    {
        const bool branch_taken_0x18c638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C638u;
            // 0x18c63c: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c638) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C640u;
label_18c640:
    // 0x18c640: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c644: 0x8c2225b8  lw          $v0, 0x25B8($at)
    ctx->pc = 0x18c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
    // 0x18c648: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C648u;
    {
        const bool branch_taken_0x18c648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c648) {
            ctx->pc = 0x18C690u;
            goto label_18c690;
        }
    }
    ctx->pc = 0x18C650u;
    // 0x18c650: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c654: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18c658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c65c: 0x0  nop
    ctx->pc = 0x18c65cu;
    // NOP
    // 0x18c660: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x18c660u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x18c664: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x18c664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x18c668: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c66c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c670: 0x450000bf  bc1f        . + 4 + (0xBF << 2)
    ctx->pc = 0x18C670u;
    {
        const bool branch_taken_0x18c670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C670u;
            // 0x18c674: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c670) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C678u;
    // 0x18c678: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c678u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c680: 0x0  nop
    ctx->pc = 0x18c680u;
    // NOP
    // 0x18c684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c688: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x18C688u;
    {
        const bool branch_taken_0x18c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C688u;
            // 0x18c68c: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c688) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C690u;
label_18c690:
    // 0x18c690: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x18c690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x18c694: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c698: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c698u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6a0: 0x0  nop
    ctx->pc = 0x18c6a0u;
    // NOP
    // 0x18c6a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c6a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c6a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18C6A8u;
    {
        const bool branch_taken_0x18c6a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6A8u;
            // 0x18c6ac: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6a8) {
            ctx->pc = 0x18C6C8u;
            goto label_18c6c8;
        }
    }
    ctx->pc = 0x18C6B0u;
    // 0x18c6b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c6b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6b8: 0x0  nop
    ctx->pc = 0x18c6b8u;
    // NOP
    // 0x18c6bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c6c0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x18C6C0u;
    {
        const bool branch_taken_0x18c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6C0u;
            // 0x18c6c4: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6c0) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C6C8u;
label_18c6c8:
    // 0x18c6c8: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x18c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x18c6cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c6ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6d4: 0x0  nop
    ctx->pc = 0x18c6d4u;
    // NOP
    // 0x18c6d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c6d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c6dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C6DCu;
    {
        const bool branch_taken_0x18c6dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6DCu;
            // 0x18c6e0: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6dc) {
            ctx->pc = 0x18C700u;
            goto label_18c700;
        }
    }
    ctx->pc = 0x18C6E4u;
    // 0x18c6e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c6e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6ec: 0x0  nop
    ctx->pc = 0x18c6ecu;
    // NOP
    // 0x18c6f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c6f4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x18C6F4u;
    {
        const bool branch_taken_0x18c6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C6F4u;
            // 0x18c6f8: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6f4) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C6FCu;
    // 0x18c6fc: 0x0  nop
    ctx->pc = 0x18c6fcu;
    // NOP
label_18c700:
    // 0x18c700: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x18C700u;
    {
        const bool branch_taken_0x18c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C700u;
            // 0x18c704: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c700) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C708u;
label_18c708:
    // 0x18c708: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x18c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18c70c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c710: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x18C710u;
    {
        const bool branch_taken_0x18c710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C710u;
            // 0x18c714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c710) {
            ctx->pc = 0x18C7A0u;
            goto label_18c7a0;
        }
    }
    ctx->pc = 0x18C718u;
    // 0x18c718: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18C718u;
    {
        const bool branch_taken_0x18c718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c718) {
            ctx->pc = 0x18C768u;
            goto label_18c768;
        }
    }
    ctx->pc = 0x18C720u;
    // 0x18c720: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C720u;
    {
        const bool branch_taken_0x18c720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c720) {
            ctx->pc = 0x18C730u;
            goto label_18c730;
        }
    }
    ctx->pc = 0x18C728u;
    // 0x18c728: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x18C728u;
    {
        const bool branch_taken_0x18c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c728) {
            ctx->pc = 0x18C7C8u;
            goto label_18c7c8;
        }
    }
    ctx->pc = 0x18C730u;
label_18c730:
    // 0x18c730: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c734: 0xc42221a8  lwc1        $f2, 0x21A8($at)
    ctx->pc = 0x18c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c738: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x18c738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x18c73c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x18c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x18c740: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x18c740u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x18c744: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c74c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c750: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18c750u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x18c754: 0x0  nop
    ctx->pc = 0x18c754u;
    // NOP
    // 0x18c758: 0x0  nop
    ctx->pc = 0x18c758u;
    // NOP
    // 0x18c75c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18C75Cu;
    {
        const bool branch_taken_0x18c75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C75Cu;
            // 0x18c760: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c75c) {
            ctx->pc = 0x18C7C8u;
            goto label_18c7c8;
        }
    }
    ctx->pc = 0x18C764u;
    // 0x18c764: 0x0  nop
    ctx->pc = 0x18c764u;
    // NOP
label_18c768:
    // 0x18c768: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c76c: 0xc42221a8  lwc1        $f2, 0x21A8($at)
    ctx->pc = 0x18c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c770: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x18c770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x18c774: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x18c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x18c778: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c778u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c77c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c784: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c788: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18c788u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x18c78c: 0x0  nop
    ctx->pc = 0x18c78cu;
    // NOP
    // 0x18c790: 0x0  nop
    ctx->pc = 0x18c790u;
    // NOP
    // 0x18c794: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18C794u;
    {
        const bool branch_taken_0x18c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C794u;
            // 0x18c798: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c794) {
            ctx->pc = 0x18C7C8u;
            goto label_18c7c8;
        }
    }
    ctx->pc = 0x18C79Cu;
    // 0x18c79c: 0x0  nop
    ctx->pc = 0x18c79cu;
    // NOP
label_18c7a0:
    // 0x18c7a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c7a4: 0xc42221a8  lwc1        $f2, 0x21A8($at)
    ctx->pc = 0x18c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 8616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c7a8: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x18c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x18c7ac: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x18c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x18c7b0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x18c7b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x18c7b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c7bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18c7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18c7c0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x18c7c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x18c7c4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x18c7c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18c7c8:
    // 0x18c7c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c7cc: 0x8c2221a8  lw          $v0, 0x21A8($at)
    ctx->pc = 0x18c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x18c7d0: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x18c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    // 0x18c7d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c7d8: 0x8c222530  lw          $v0, 0x2530($at)
    ctx->pc = 0x18c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9520)));
    // 0x18c7dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18C7DCu;
    {
        const bool branch_taken_0x18c7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7DCu;
            // 0x18c7e0: 0x3c023fe8  lui         $v0, 0x3FE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16360 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7dc) {
            ctx->pc = 0x18C818u;
            goto label_18c818;
        }
    }
    ctx->pc = 0x18C7E4u;
    // 0x18c7e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18c7e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18c7e8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x18C7E8u;
    SET_GPR_U32(ctx, 31, 0x18C7F0u);
    ctx->pc = 0x18C7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7E8u;
            // 0x18c7ec: 0x2983c  dsll32      $s3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7F0u; }
        if (ctx->pc != 0x18C7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7F0u; }
        if (ctx->pc != 0x18C7F0u) { return; }
    }
    ctx->pc = 0x18C7F0u;
    // 0x18c7f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7f4: 0xc040880  jal         func_102200
    ctx->pc = 0x18C7F4u;
    SET_GPR_U32(ctx, 31, 0x18C7FCu);
    ctx->pc = 0x18C7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7F4u;
            // 0x18c7f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7FCu; }
        if (ctx->pc != 0x18C7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7FCu; }
        if (ctx->pc != 0x18C7FCu) { return; }
    }
    ctx->pc = 0x18C7FCu;
    // 0x18c7fc: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x18C7FCu;
    SET_GPR_U32(ctx, 31, 0x18C804u);
    ctx->pc = 0x18C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7FCu;
            // 0x18c800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C804u; }
        if (ctx->pc != 0x18C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C804u; }
        if (ctx->pc != 0x18C804u) { return; }
    }
    ctx->pc = 0x18C804u;
    // 0x18c804: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x18c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c80c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18C80Cu;
    {
        const bool branch_taken_0x18c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C80Cu;
            // 0x18c810: 0xe6400064  swc1        $f0, 0x64($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c80c) {
            ctx->pc = 0x18C858u;
            goto label_18c858;
        }
    }
    ctx->pc = 0x18C814u;
    // 0x18c814: 0x0  nop
    ctx->pc = 0x18c814u;
    // NOP
label_18c818:
    // 0x18c818: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c81c: 0x8c222538  lw          $v0, 0x2538($at)
    ctx->pc = 0x18c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9528)));
    // 0x18c820: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18C820u;
    {
        const bool branch_taken_0x18c820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C820u;
            // 0x18c824: 0x3c023fe8  lui         $v0, 0x3FE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16360 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c820) {
            ctx->pc = 0x18C858u;
            goto label_18c858;
        }
    }
    ctx->pc = 0x18C828u;
    // 0x18c828: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18c828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18c82c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x18C82Cu;
    SET_GPR_U32(ctx, 31, 0x18C834u);
    ctx->pc = 0x18C830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C82Cu;
            // 0x18c830: 0x2983c  dsll32      $s3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C834u; }
        if (ctx->pc != 0x18C834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C834u; }
        if (ctx->pc != 0x18C834u) { return; }
    }
    ctx->pc = 0x18C834u;
    // 0x18c834: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c838: 0xc040880  jal         func_102200
    ctx->pc = 0x18C838u;
    SET_GPR_U32(ctx, 31, 0x18C840u);
    ctx->pc = 0x18C83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C838u;
            // 0x18c83c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C840u; }
        if (ctx->pc != 0x18C840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C840u; }
        if (ctx->pc != 0x18C840u) { return; }
    }
    ctx->pc = 0x18C840u;
    // 0x18c840: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x18C840u;
    SET_GPR_U32(ctx, 31, 0x18C848u);
    ctx->pc = 0x18C844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C840u;
            // 0x18c844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C848u; }
        if (ctx->pc != 0x18C848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C848u; }
        if (ctx->pc != 0x18C848u) { return; }
    }
    ctx->pc = 0x18C848u;
    // 0x18c848: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x18c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c84c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c84cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c850: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x18c850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x18c854: 0x0  nop
    ctx->pc = 0x18c854u;
    // NOP
label_18c858:
    // 0x18c858: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c85c: 0x8c222540  lw          $v0, 0x2540($at)
    ctx->pc = 0x18c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9536)));
    // 0x18c860: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C860u;
    {
        const bool branch_taken_0x18c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c860) {
            ctx->pc = 0x18C8A8u;
            goto label_18c8a8;
        }
    }
    ctx->pc = 0x18C868u;
    // 0x18c868: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c86c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x18c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x18c870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c874: 0x0  nop
    ctx->pc = 0x18c874u;
    // NOP
    // 0x18c878: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x18c878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x18c87c: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x18c87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x18c880: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18c880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c884: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c888: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x18C888u;
    {
        const bool branch_taken_0x18c888 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C888u;
            // 0x18c88c: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c888) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C890u;
    // 0x18c890: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c890u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c898: 0x0  nop
    ctx->pc = 0x18c898u;
    // NOP
    // 0x18c89c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c89cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c8a0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x18C8A0u;
    {
        const bool branch_taken_0x18c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8A0u;
            // 0x18c8a4: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8a0) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C8A8u;
label_18c8a8:
    // 0x18c8a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18c8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18c8ac: 0x8c222548  lw          $v0, 0x2548($at)
    ctx->pc = 0x18c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9544)));
    // 0x18c8b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18C8B0u;
    {
        const bool branch_taken_0x18c8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c8b0) {
            ctx->pc = 0x18C8F8u;
            goto label_18c8f8;
        }
    }
    ctx->pc = 0x18C8B8u;
    // 0x18c8b8: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c8bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18c8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c8c4: 0x0  nop
    ctx->pc = 0x18c8c4u;
    // NOP
    // 0x18c8c8: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x18c8c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x18c8cc: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x18c8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x18c8d0: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c8d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c8d8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x18C8D8u;
    {
        const bool branch_taken_0x18c8d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8D8u;
            // 0x18c8dc: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8d8) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C8E0u;
    // 0x18c8e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c8e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c8e8: 0x0  nop
    ctx->pc = 0x18c8e8u;
    // NOP
    // 0x18c8ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c8ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c8f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18C8F0u;
    {
        const bool branch_taken_0x18c8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8F0u;
            // 0x18c8f4: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8f0) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C8F8u;
label_18c8f8:
    // 0x18c8f8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x18c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x18c8fc: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x18c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c900: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c900u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c908: 0x0  nop
    ctx->pc = 0x18c908u;
    // NOP
    // 0x18c90c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c910: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x18C910u;
    {
        const bool branch_taken_0x18c910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C910u;
            // 0x18c914: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c910) {
            ctx->pc = 0x18C930u;
            goto label_18c930;
        }
    }
    ctx->pc = 0x18C918u;
    // 0x18c918: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c918u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c91c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c920: 0x0  nop
    ctx->pc = 0x18c920u;
    // NOP
    // 0x18c924: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c928: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18C928u;
    {
        const bool branch_taken_0x18c928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C928u;
            // 0x18c92c: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c928) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C930u;
label_18c930:
    // 0x18c930: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x18c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x18c934: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c934u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c93c: 0x0  nop
    ctx->pc = 0x18c93cu;
    // NOP
    // 0x18c940: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c944: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C944u;
    {
        const bool branch_taken_0x18c944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C944u;
            // 0x18c948: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c944) {
            ctx->pc = 0x18C968u;
            goto label_18c968;
        }
    }
    ctx->pc = 0x18C94Cu;
    // 0x18c94c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c94cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c954: 0x0  nop
    ctx->pc = 0x18c954u;
    // NOP
    // 0x18c958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18c958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18c95c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18C95Cu;
    {
        const bool branch_taken_0x18c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C95Cu;
            // 0x18c960: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c95c) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C964u;
    // 0x18c964: 0x0  nop
    ctx->pc = 0x18c964u;
    // NOP
label_18c968:
    // 0x18c968: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x18c968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x18c96c: 0x0  nop
    ctx->pc = 0x18c96cu;
    // NOP
label_18c970:
    // 0x18c970: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x18c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x18c974: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18C974u;
    {
        const bool branch_taken_0x18c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c974) {
            ctx->pc = 0x18C9E0u;
            goto label_18c9e0;
        }
    }
    ctx->pc = 0x18C97Cu;
    // 0x18c97c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18c980: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x18c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x18c984: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x18c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c988: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c988u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c98c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18c98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c990: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x18c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x18c994: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x18c994u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c998: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x18c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x18c99c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x18c99cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x18c9a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18c9a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x18c9a4: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x18c9a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18c9a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18c9ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c9b0: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x18c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18c9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c9b8: 0x0  nop
    ctx->pc = 0x18c9b8u;
    // NOP
    // 0x18c9bc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x18c9bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x18c9c0: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x18c9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18c9c4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18c9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c9c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c9cc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x18C9CCu;
    {
        const bool branch_taken_0x18c9cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c9cc) {
            ctx->pc = 0x18CA38u;
            goto label_18ca38;
        }
    }
    ctx->pc = 0x18C9D4u;
    // 0x18c9d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18C9D4u;
    {
        const bool branch_taken_0x18c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C9D4u;
            // 0x18c9d8: 0xae4000c8  sw          $zero, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9d4) {
            ctx->pc = 0x18CA38u;
            goto label_18ca38;
        }
    }
    ctx->pc = 0x18C9DCu;
    // 0x18c9dc: 0x0  nop
    ctx->pc = 0x18c9dcu;
    // NOP
label_18c9e0:
    // 0x18c9e0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x18c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x18c9e4: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x18c9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18c9e8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x18c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x18c9ec: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x18c9ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c9f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18c9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18c9f4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x18c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x18c9f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18c9f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18c9fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ca00: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x18ca00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18ca04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ca08: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x18ca08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x18ca0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18ca10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca14: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x18ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ca18: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x18ca18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x18ca1c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x18ca1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x18ca20: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x18ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18CA28u;
    {
        const bool branch_taken_0x18ca28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA28u;
            // 0x18ca2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca28) {
            ctx->pc = 0x18CA38u;
            goto label_18ca38;
        }
    }
    ctx->pc = 0x18CA30u;
    // 0x18ca30: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x18ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x18ca34: 0x0  nop
    ctx->pc = 0x18ca34u;
    // NOP
label_18ca38:
    // 0x18ca38: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x18ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x18ca3c: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca44: 0x0  nop
    ctx->pc = 0x18ca44u;
    // NOP
    // 0x18ca48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ca48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CA4Cu;
    {
        const bool branch_taken_0x18ca4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ca4c) {
            ctx->pc = 0x18CA58u;
            goto label_18ca58;
        }
    }
    ctx->pc = 0x18CA54u;
    // 0x18ca54: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x18ca54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_18ca58:
    // 0x18ca58: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x18ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x18ca5c: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18ca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca64: 0x0  nop
    ctx->pc = 0x18ca64u;
    // NOP
    // 0x18ca68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ca68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CA6Cu;
    {
        const bool branch_taken_0x18ca6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ca6c) {
            ctx->pc = 0x18CA78u;
            goto label_18ca78;
        }
    }
    ctx->pc = 0x18CA74u;
    // 0x18ca74: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x18ca74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_18ca78:
    // 0x18ca78: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x18ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x18ca7c: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x18ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca84: 0x0  nop
    ctx->pc = 0x18ca84u;
    // NOP
    // 0x18ca88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ca88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CA8Cu;
    {
        const bool branch_taken_0x18ca8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ca8c) {
            ctx->pc = 0x18CA98u;
            goto label_18ca98;
        }
    }
    ctx->pc = 0x18CA94u;
    // 0x18ca94: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x18ca94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_18ca98:
    // 0x18ca98: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x18ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x18ca9c: 0xc6410064  lwc1        $f1, 0x64($s2)
    ctx->pc = 0x18ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18caa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18caa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18caa4: 0x0  nop
    ctx->pc = 0x18caa4u;
    // NOP
    // 0x18caa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18caa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18caac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18CAACu;
    {
        const bool branch_taken_0x18caac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18caac) {
            ctx->pc = 0x18CAB8u;
            goto label_18cab8;
        }
    }
    ctx->pc = 0x18CAB4u;
    // 0x18cab4: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x18cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_18cab8:
    // 0x18cab8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x18CAB8u;
    SET_GPR_U32(ctx, 31, 0x18CAC0u);
    ctx->pc = 0x18CABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAB8u;
            // 0x18cabc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAC0u; }
        if (ctx->pc != 0x18CAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAC0u; }
        if (ctx->pc != 0x18CAC0u) { return; }
    }
    ctx->pc = 0x18CAC0u;
    // 0x18cac0: 0xc64c0050  lwc1        $f12, 0x50($s2)
    ctx->pc = 0x18cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18cac4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18cac8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x18CAC8u;
    SET_GPR_U32(ctx, 31, 0x18CAD0u);
    ctx->pc = 0x18CACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAC8u;
            // 0x18cacc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAD0u; }
        if (ctx->pc != 0x18CAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAD0u; }
        if (ctx->pc != 0x18CAD0u) { return; }
    }
    ctx->pc = 0x18CAD0u;
    // 0x18cad0: 0xc64c0054  lwc1        $f12, 0x54($s2)
    ctx->pc = 0x18cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18cad4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18cad8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x18CAD8u;
    SET_GPR_U32(ctx, 31, 0x18CAE0u);
    ctx->pc = 0x18CADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAD8u;
            // 0x18cadc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAE0u; }
        if (ctx->pc != 0x18CAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAE0u; }
        if (ctx->pc != 0x18CAE0u) { return; }
    }
    ctx->pc = 0x18CAE0u;
    // 0x18cae0: 0xc64c0058  lwc1        $f12, 0x58($s2)
    ctx->pc = 0x18cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18cae4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18cae8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x18CAE8u;
    SET_GPR_U32(ctx, 31, 0x18CAF0u);
    ctx->pc = 0x18CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAE8u;
            // 0x18caec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAF0u; }
        if (ctx->pc != 0x18CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CAF0u; }
        if (ctx->pc != 0x18CAF0u) { return; }
    }
    ctx->pc = 0x18CAF0u;
    // 0x18caf0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x18caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18caf4: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x18caf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x18caf8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x18CAF8u;
    SET_GPR_U32(ctx, 31, 0x18CB00u);
    ctx->pc = 0x18CAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAF8u;
            // 0x18cafc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB00u; }
        if (ctx->pc != 0x18CB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB00u; }
        if (ctx->pc != 0x18CB00u) { return; }
    }
    ctx->pc = 0x18CB00u;
    // 0x18cb00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18cb04: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x18cb08: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x18CB08u;
    SET_GPR_U32(ctx, 31, 0x18CB10u);
    ctx->pc = 0x18CB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB08u;
            // 0x18cb0c: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB10u; }
        if (ctx->pc != 0x18CB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB10u; }
        if (ctx->pc != 0x18CB10u) { return; }
    }
    ctx->pc = 0x18CB10u;
    // 0x18cb10: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x18cb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb14: 0x26440098  addiu       $a0, $s2, 0x98
    ctx->pc = 0x18cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x18cb18: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x18cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb1c: 0x2645009c  addiu       $a1, $s2, 0x9C
    ctx->pc = 0x18cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
    // 0x18cb20: 0xc64d0064  lwc1        $f13, 0x64($s2)
    ctx->pc = 0x18cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18cb24: 0xc0636f0  jal         func_18DBC0
    ctx->pc = 0x18CB24u;
    SET_GPR_U32(ctx, 31, 0x18CB2Cu);
    ctx->pc = 0x18CB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB24u;
            // 0x18cb28: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DBC0u;
    if (runtime->hasFunction(0x18DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB2Cu; }
        if (ctx->pc != 0x18CB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x18dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB2Cu; }
        if (ctx->pc != 0x18CB2Cu) { return; }
    }
    ctx->pc = 0x18CB2Cu;
    // 0x18cb2c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x18cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x18cb30: 0x1c40007b  bgtz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x18CB30u;
    {
        const bool branch_taken_0x18cb30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18CB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB30u;
            // 0x18cb34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb30) {
            ctx->pc = 0x18CD20u;
            goto label_18cd20;
        }
    }
    ctx->pc = 0x18CB38u;
    // 0x18cb38: 0xc053f20  jal         func_14FC80
    ctx->pc = 0x18CB38u;
    SET_GPR_U32(ctx, 31, 0x18CB40u);
    ctx->pc = 0x14FC80u;
    if (runtime->hasFunction(0x14FC80u)) {
        auto targetFn = runtime->lookupFunction(0x14FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB40u; }
        if (ctx->pc != 0x18CB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserDel_0x14fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB40u; }
        if (ctx->pc != 0x18CB40u) { return; }
    }
    ctx->pc = 0x18CB40u;
    // 0x18cb40: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x18cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x18cb44: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x18cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x18cb48: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb4c: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18cb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb50: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18cb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18cb54: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CB54u;
    SET_GPR_U32(ctx, 31, 0x18CB5Cu);
    ctx->pc = 0x18CB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB54u;
            // 0x18cb58: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB5Cu; }
        if (ctx->pc != 0x18CB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB5Cu; }
        if (ctx->pc != 0x18CB5Cu) { return; }
    }
    ctx->pc = 0x18CB5Cu;
    // 0x18cb5c: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb60: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x18cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x18cb64: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb68: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18cb68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18cb6c: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CB6Cu;
    SET_GPR_U32(ctx, 31, 0x18CB74u);
    ctx->pc = 0x18CB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB6Cu;
            // 0x18cb70: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB74u; }
        if (ctx->pc != 0x18CB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB74u; }
        if (ctx->pc != 0x18CB74u) { return; }
    }
    ctx->pc = 0x18CB74u;
    // 0x18cb74: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb78: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x18cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x18cb7c: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb80: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18cb80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18cb84: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CB84u;
    SET_GPR_U32(ctx, 31, 0x18CB8Cu);
    ctx->pc = 0x18CB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB84u;
            // 0x18cb88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB8Cu; }
        if (ctx->pc != 0x18CB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB8Cu; }
        if (ctx->pc != 0x18CB8Cu) { return; }
    }
    ctx->pc = 0x18CB8Cu;
    // 0x18cb8c: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18cb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb90: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x18cb94: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cb98: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18cb98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18cb9c: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CB9Cu;
    SET_GPR_U32(ctx, 31, 0x18CBA4u);
    ctx->pc = 0x18CBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB9Cu;
            // 0x18cba0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBA4u; }
        if (ctx->pc != 0x18CBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBA4u; }
        if (ctx->pc != 0x18CBA4u) { return; }
    }
    ctx->pc = 0x18CBA4u;
    // 0x18cba4: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x18cba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18cba8: 0xc055124  jal         func_154490
    ctx->pc = 0x18CBA8u;
    SET_GPR_U32(ctx, 31, 0x18CBB0u);
    ctx->pc = 0x18CBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBA8u;
            // 0x18cbac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBB0u; }
        if (ctx->pc != 0x18CBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBB0u; }
        if (ctx->pc != 0x18CBB0u) { return; }
    }
    ctx->pc = 0x18CBB0u;
    // 0x18cbb0: 0xc060718  jal         func_181C60
    ctx->pc = 0x18CBB0u;
    SET_GPR_U32(ctx, 31, 0x18CBB8u);
    ctx->pc = 0x18CBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBB0u;
            // 0x18cbb4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBB8u; }
        if (ctx->pc != 0x18CBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBB8u; }
        if (ctx->pc != 0x18CBB8u) { return; }
    }
    ctx->pc = 0x18CBB8u;
    // 0x18cbb8: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18cbbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18cbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18cbc0: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x18cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18cbc4: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18CBC4u;
    SET_GPR_U32(ctx, 31, 0x18CBCCu);
    ctx->pc = 0x18CBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBC4u;
            // 0x18cbc8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBCCu; }
        if (ctx->pc != 0x18CBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBCCu; }
        if (ctx->pc != 0x18CBCCu) { return; }
    }
    ctx->pc = 0x18CBCCu;
    // 0x18cbcc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CBCCu;
    SET_GPR_U32(ctx, 31, 0x18CBD4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBD4u; }
        if (ctx->pc != 0x18CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBD4u; }
        if (ctx->pc != 0x18CBD4u) { return; }
    }
    ctx->pc = 0x18CBD4u;
    // 0x18cbd4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18cbd8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18cbdc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18cbdcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18cbe0: 0x0  nop
    ctx->pc = 0x18cbe0u;
    // NOP
    // 0x18cbe4: 0x0  nop
    ctx->pc = 0x18cbe4u;
    // NOP
    // 0x18cbe8: 0x1010  mfhi        $v0
    ctx->pc = 0x18cbe8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18cbec: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CBECu;
    SET_GPR_U32(ctx, 31, 0x18CBF4u);
    ctx->pc = 0x18CBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CBECu;
            // 0x18cbf0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBF4u; }
        if (ctx->pc != 0x18CBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CBF4u; }
        if (ctx->pc != 0x18CBF4u) { return; }
    }
    ctx->pc = 0x18CBF4u;
    // 0x18cbf4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18cbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbfc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18cbfcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18cc00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18cc00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18cc04: 0x0  nop
    ctx->pc = 0x18cc04u;
    // NOP
    // 0x18cc08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18cc08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18cc0c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18cc10: 0x1810  mfhi        $v1
    ctx->pc = 0x18cc10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18cc14: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18CC14u;
    SET_GPR_U32(ctx, 31, 0x18CC1Cu);
    ctx->pc = 0x18CC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC14u;
            // 0x18cc18: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC1Cu; }
        if (ctx->pc != 0x18CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC1Cu; }
        if (ctx->pc != 0x18CC1Cu) { return; }
    }
    ctx->pc = 0x18CC1Cu;
    // 0x18cc1c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CC1Cu;
    SET_GPR_U32(ctx, 31, 0x18CC24u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC24u; }
        if (ctx->pc != 0x18CC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC24u; }
        if (ctx->pc != 0x18CC24u) { return; }
    }
    ctx->pc = 0x18CC24u;
    // 0x18cc24: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18cc28: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18cc2c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18cc2cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18cc30: 0x0  nop
    ctx->pc = 0x18cc30u;
    // NOP
    // 0x18cc34: 0x0  nop
    ctx->pc = 0x18cc34u;
    // NOP
    // 0x18cc38: 0x1010  mfhi        $v0
    ctx->pc = 0x18cc38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18cc3c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CC3Cu;
    SET_GPR_U32(ctx, 31, 0x18CC44u);
    ctx->pc = 0x18CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC3Cu;
            // 0x18cc40: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC44u; }
        if (ctx->pc != 0x18CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC44u; }
        if (ctx->pc != 0x18CC44u) { return; }
    }
    ctx->pc = 0x18CC44u;
    // 0x18cc44: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18cc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc4c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18cc4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18cc50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18cc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18cc54: 0x0  nop
    ctx->pc = 0x18cc54u;
    // NOP
    // 0x18cc58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18cc58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18cc5c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18cc60: 0x1810  mfhi        $v1
    ctx->pc = 0x18cc60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18cc64: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18CC64u;
    SET_GPR_U32(ctx, 31, 0x18CC6Cu);
    ctx->pc = 0x18CC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC64u;
            // 0x18cc68: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC6Cu; }
        if (ctx->pc != 0x18CC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC6Cu; }
        if (ctx->pc != 0x18CC6Cu) { return; }
    }
    ctx->pc = 0x18CC6Cu;
    // 0x18cc6c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CC6Cu;
    SET_GPR_U32(ctx, 31, 0x18CC74u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC74u; }
        if (ctx->pc != 0x18CC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC74u; }
        if (ctx->pc != 0x18CC74u) { return; }
    }
    ctx->pc = 0x18CC74u;
    // 0x18cc74: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18cc78: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18cc7c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18cc7cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18cc80: 0x0  nop
    ctx->pc = 0x18cc80u;
    // NOP
    // 0x18cc84: 0x0  nop
    ctx->pc = 0x18cc84u;
    // NOP
    // 0x18cc88: 0x1010  mfhi        $v0
    ctx->pc = 0x18cc88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18cc8c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CC8Cu;
    SET_GPR_U32(ctx, 31, 0x18CC94u);
    ctx->pc = 0x18CC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CC8Cu;
            // 0x18cc90: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC94u; }
        if (ctx->pc != 0x18CC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CC94u; }
        if (ctx->pc != 0x18CC94u) { return; }
    }
    ctx->pc = 0x18CC94u;
    // 0x18cc94: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18cc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18cc9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18cca0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18cca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18cca4: 0x0  nop
    ctx->pc = 0x18cca4u;
    // NOP
    // 0x18cca8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18cca8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18ccac: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18ccb0: 0x1810  mfhi        $v1
    ctx->pc = 0x18ccb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18ccb4: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18CCB4u;
    SET_GPR_U32(ctx, 31, 0x18CCBCu);
    ctx->pc = 0x18CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCB4u;
            // 0x18ccb8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCBCu; }
        if (ctx->pc != 0x18CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCBCu; }
        if (ctx->pc != 0x18CCBCu) { return; }
    }
    ctx->pc = 0x18CCBCu;
    // 0x18ccbc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CCBCu;
    SET_GPR_U32(ctx, 31, 0x18CCC4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCC4u; }
        if (ctx->pc != 0x18CCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCC4u; }
        if (ctx->pc != 0x18CCC4u) { return; }
    }
    ctx->pc = 0x18CCC4u;
    // 0x18ccc4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18ccc8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18cccc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18ccccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18ccd0: 0x0  nop
    ctx->pc = 0x18ccd0u;
    // NOP
    // 0x18ccd4: 0x0  nop
    ctx->pc = 0x18ccd4u;
    // NOP
    // 0x18ccd8: 0x1010  mfhi        $v0
    ctx->pc = 0x18ccd8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18ccdc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18CCDCu;
    SET_GPR_U32(ctx, 31, 0x18CCE4u);
    ctx->pc = 0x18CCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCDCu;
            // 0x18cce0: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCE4u; }
        if (ctx->pc != 0x18CCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCE4u; }
        if (ctx->pc != 0x18CCE4u) { return; }
    }
    ctx->pc = 0x18CCE4u;
    // 0x18cce4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x18cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18cce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ccec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18ccecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18ccf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18ccf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18ccf4: 0x0  nop
    ctx->pc = 0x18ccf4u;
    // NOP
    // 0x18ccf8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18ccf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18ccfc: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x18ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18cd00: 0x1810  mfhi        $v1
    ctx->pc = 0x18cd00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18cd04: 0xc053740  jal         func_14DD00
    ctx->pc = 0x18CD04u;
    SET_GPR_U32(ctx, 31, 0x18CD0Cu);
    ctx->pc = 0x18CD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD04u;
            // 0x18cd08: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD0Cu; }
        if (ctx->pc != 0x18CD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD0Cu; }
        if (ctx->pc != 0x18CD0Cu) { return; }
    }
    ctx->pc = 0x18CD0Cu;
    // 0x18cd0c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18cd10: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x18cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
    // 0x18cd14: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x18CD14u;
    {
        const bool branch_taken_0x18cd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CD14u;
            // 0x18cd18: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd14) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18CD1Cu;
    // 0x18cd1c: 0x0  nop
    ctx->pc = 0x18cd1cu;
    // NOP
label_18cd20:
    // 0x18cd20: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18cd24: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x18cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x18cd28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18cd2c: 0x2484ff60  addiu       $a0, $a0, -0xA0
    ctx->pc = 0x18cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
    // 0x18cd30: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x18cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x18cd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18cd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd38: 0x0  nop
    ctx->pc = 0x18cd38u;
    // NOP
    // 0x18cd3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18cd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18cd40: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x18cd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x18cd44: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18cd48: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x18cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x18cd4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18cd4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd50: 0x0  nop
    ctx->pc = 0x18cd50u;
    // NOP
    // 0x18cd54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18cd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18cd58: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x18cd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x18cd5c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x18cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18cd60: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x18cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x18cd64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18cd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd68: 0x0  nop
    ctx->pc = 0x18cd68u;
    // NOP
    // 0x18cd6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18cd6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18cd70: 0xe640008c  swc1        $f0, 0x8C($s2)
    ctx->pc = 0x18cd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x18cd74: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x18cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x18cd78: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x18cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x18cd7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18cd7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd80: 0x0  nop
    ctx->pc = 0x18cd80u;
    // NOP
    // 0x18cd84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18cd84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18cd88: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x18cd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x18cd8c: 0x8e460070  lw          $a2, 0x70($s2)
    ctx->pc = 0x18cd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18cd90: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x18cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x18cd94: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x18cd98: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18cd9c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x18cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18cda0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CDA0u;
    {
        const bool branch_taken_0x18cda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18CDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDA0u;
            // 0x18cda4: 0x853821  addu        $a3, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cda0) {
            ctx->pc = 0x18CDC8u;
            goto label_18cdc8;
        }
    }
    ctx->pc = 0x18CDA8u;
    // 0x18cda8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18cda8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18cdac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18cdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdb0: 0x26450084  addiu       $a1, $s2, 0x84
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x18cdb4: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x18cdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x18cdb8: 0xc053c88  jal         func_14F220
    ctx->pc = 0x18CDB8u;
    SET_GPR_U32(ctx, 31, 0x18CDC0u);
    ctx->pc = 0x18CDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDB8u;
            // 0x18cdbc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDC0u; }
        if (ctx->pc != 0x18CDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDC0u; }
        if (ctx->pc != 0x18CDC0u) { return; }
    }
    ctx->pc = 0x18CDC0u;
    // 0x18cdc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18CDC0u;
    {
        const bool branch_taken_0x18cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdc0) {
            ctx->pc = 0x18CDE0u;
            goto label_18cde0;
        }
    }
    ctx->pc = 0x18CDC8u;
label_18cdc8:
    // 0x18cdc8: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18cdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18cdcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18cdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdd0: 0x26450084  addiu       $a1, $s2, 0x84
    ctx->pc = 0x18cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x18cdd4: 0x24c6d640  addiu       $a2, $a2, -0x29C0
    ctx->pc = 0x18cdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
    // 0x18cdd8: 0xc053c88  jal         func_14F220
    ctx->pc = 0x18CDD8u;
    SET_GPR_U32(ctx, 31, 0x18CDE0u);
    ctx->pc = 0x18CDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CDD8u;
            // 0x18cddc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (runtime->hasFunction(0x14F220u)) {
        auto targetFn = runtime->lookupFunction(0x14F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDE0u; }
        if (ctx->pc != 0x18CDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Src_0x14f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CDE0u; }
        if (ctx->pc != 0x18CDE0u) { return; }
    }
    ctx->pc = 0x18CDE0u;
label_18cde0:
    // 0x18cde0: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x18cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18cde4: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x18CDE4u;
    {
        const bool branch_taken_0x18cde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cde4) {
            ctx->pc = 0x18D208u;
            goto label_18d208;
        }
    }
    ctx->pc = 0x18CDECu;
    // 0x18cdec: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x18cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x18cdf0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CDF0u;
    {
        const bool branch_taken_0x18cdf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cdf0) {
            ctx->pc = 0x18CE00u;
            goto label_18ce00;
        }
    }
    ctx->pc = 0x18CDF8u;
    // 0x18cdf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cdfc: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x18cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_18ce00:
    // 0x18ce00: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x18ce04: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x18CE04u;
    {
        const bool branch_taken_0x18ce04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce04) {
            ctx->pc = 0x18CF30u;
            goto label_18cf30;
        }
    }
    ctx->pc = 0x18CE0Cu;
    // 0x18ce0c: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18ce10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ce14: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x18CE14u;
    {
        const bool branch_taken_0x18ce14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18CE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE14u;
            // 0x18ce18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce14) {
            ctx->pc = 0x18CED0u;
            goto label_18ced0;
        }
    }
    ctx->pc = 0x18CE1Cu;
    // 0x18ce1c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18CE1Cu;
    {
        const bool branch_taken_0x18ce1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ce1c) {
            ctx->pc = 0x18CE98u;
            goto label_18ce98;
        }
    }
    ctx->pc = 0x18CE24u;
    // 0x18ce24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CE24u;
    {
        const bool branch_taken_0x18ce24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce24) {
            ctx->pc = 0x18CE38u;
            goto label_18ce38;
        }
    }
    ctx->pc = 0x18CE2Cu;
    // 0x18ce2c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x18CE2Cu;
    {
        const bool branch_taken_0x18ce2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce2c) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CE34u;
    // 0x18ce34: 0x0  nop
    ctx->pc = 0x18ce34u;
    // NOP
label_18ce38:
    // 0x18ce38: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x18ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18ce3c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x18ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18ce40: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x18ce40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x18ce44: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CE44u;
    {
        const bool branch_taken_0x18ce44 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE44u;
            // 0x18ce48: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce44) {
            ctx->pc = 0x18CE58u;
            goto label_18ce58;
        }
    }
    ctx->pc = 0x18CE4Cu;
    // 0x18ce4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CE4Cu;
    {
        const bool branch_taken_0x18ce4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce4c) {
            ctx->pc = 0x18CE58u;
            goto label_18ce58;
        }
    }
    ctx->pc = 0x18CE54u;
    // 0x18ce54: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_18ce58:
    // 0x18ce58: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x18CE58u;
    {
        const bool branch_taken_0x18ce58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ce58) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CE60u;
    // 0x18ce60: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ce64: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x18ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18ce68: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18ce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ce6c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18ce6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18ce70: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CE70u;
    SET_GPR_U32(ctx, 31, 0x18CE78u);
    ctx->pc = 0x18CE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE70u;
            // 0x18ce74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE78u; }
        if (ctx->pc != 0x18CE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE78u; }
        if (ctx->pc != 0x18CE78u) { return; }
    }
    ctx->pc = 0x18CE78u;
    // 0x18ce78: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x18CE78u;
    SET_GPR_U32(ctx, 31, 0x18CE80u);
    ctx->pc = 0x18CE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE78u;
            // 0x18ce7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE80u; }
        if (ctx->pc != 0x18CE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Shot_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE80u; }
        if (ctx->pc != 0x18CE80u) { return; }
    }
    ctx->pc = 0x18CE80u;
    // 0x18ce80: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x18ce80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18ce84: 0xc055124  jal         func_154490
    ctx->pc = 0x18CE84u;
    SET_GPR_U32(ctx, 31, 0x18CE8Cu);
    ctx->pc = 0x18CE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CE84u;
            // 0x18ce88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE8Cu; }
        if (ctx->pc != 0x18CE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE8Cu; }
        if (ctx->pc != 0x18CE8Cu) { return; }
    }
    ctx->pc = 0x18CE8Cu;
    // 0x18ce8c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x18CE8Cu;
    {
        const bool branch_taken_0x18ce8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce8c) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CE94u;
    // 0x18ce94: 0x0  nop
    ctx->pc = 0x18ce94u;
    // NOP
label_18ce98:
    // 0x18ce98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x18ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18ce9c: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cea0: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cea4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18cea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18cea8: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CEA8u;
    SET_GPR_U32(ctx, 31, 0x18CEB0u);
    ctx->pc = 0x18CEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEA8u;
            // 0x18ceac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEB0u; }
        if (ctx->pc != 0x18CEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEB0u; }
        if (ctx->pc != 0x18CEB0u) { return; }
    }
    ctx->pc = 0x18CEB0u;
    // 0x18ceb0: 0xc054b3c  jal         func_152CF0
    ctx->pc = 0x18CEB0u;
    SET_GPR_U32(ctx, 31, 0x18CEB8u);
    ctx->pc = 0x18CEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEB0u;
            // 0x18ceb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152CF0u;
    if (runtime->hasFunction(0x152CF0u)) {
        auto targetFn = runtime->lookupFunction(0x152CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEB8u; }
        if (ctx->pc != 0x18CEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Laser_0x152cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEB8u; }
        if (ctx->pc != 0x18CEB8u) { return; }
    }
    ctx->pc = 0x18CEB8u;
    // 0x18ceb8: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x18ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18cebc: 0xc055124  jal         func_154490
    ctx->pc = 0x18CEBCu;
    SET_GPR_U32(ctx, 31, 0x18CEC4u);
    ctx->pc = 0x18CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEBCu;
            // 0x18cec0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEC4u; }
        if (ctx->pc != 0x18CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEC4u; }
        if (ctx->pc != 0x18CEC4u) { return; }
    }
    ctx->pc = 0x18CEC4u;
    // 0x18cec4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x18CEC4u;
    {
        const bool branch_taken_0x18cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cec4) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CECCu;
    // 0x18cecc: 0x0  nop
    ctx->pc = 0x18ceccu;
    // NOP
label_18ced0:
    // 0x18ced0: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x18ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18ced4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x18ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18ced8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x18ced8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x18cedc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CEDCu;
    {
        const bool branch_taken_0x18cedc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18CEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CEDCu;
            // 0x18cee0: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cedc) {
            ctx->pc = 0x18CEF0u;
            goto label_18cef0;
        }
    }
    ctx->pc = 0x18CEE4u;
    // 0x18cee4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CEE4u;
    {
        const bool branch_taken_0x18cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cee4) {
            ctx->pc = 0x18CEF0u;
            goto label_18cef0;
        }
    }
    ctx->pc = 0x18CEECu;
    // 0x18ceec: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_18cef0:
    // 0x18cef0: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x18CEF0u;
    {
        const bool branch_taken_0x18cef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cef0) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CEF8u;
    // 0x18cef8: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18cef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cefc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x18cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18cf00: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cf04: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18cf04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18cf08: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CF08u;
    SET_GPR_U32(ctx, 31, 0x18CF10u);
    ctx->pc = 0x18CF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF08u;
            // 0x18cf0c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF10u; }
        if (ctx->pc != 0x18CF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF10u; }
        if (ctx->pc != 0x18CF10u) { return; }
    }
    ctx->pc = 0x18CF10u;
    // 0x18cf10: 0xc054c7c  jal         func_1531F0
    ctx->pc = 0x18CF10u;
    SET_GPR_U32(ctx, 31, 0x18CF18u);
    ctx->pc = 0x18CF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF10u;
            // 0x18cf14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1531F0u;
    if (runtime->hasFunction(0x1531F0u)) {
        auto targetFn = runtime->lookupFunction(0x1531F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF18u; }
        if (ctx->pc != 0x18CF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Missile_0x1531f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF18u; }
        if (ctx->pc != 0x18CF18u) { return; }
    }
    ctx->pc = 0x18CF18u;
    // 0x18cf18: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x18cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18cf1c: 0xc055124  jal         func_154490
    ctx->pc = 0x18CF1Cu;
    SET_GPR_U32(ctx, 31, 0x18CF24u);
    ctx->pc = 0x18CF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF1Cu;
            // 0x18cf20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF24u; }
        if (ctx->pc != 0x18CF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF24u; }
        if (ctx->pc != 0x18CF24u) { return; }
    }
    ctx->pc = 0x18CF24u;
    // 0x18cf24: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x18CF24u;
    {
        const bool branch_taken_0x18cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cf24) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CF2Cu;
    // 0x18cf2c: 0x0  nop
    ctx->pc = 0x18cf2cu;
    // NOP
label_18cf30:
    // 0x18cf30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18cf34: 0x8c2221d0  lw          $v0, 0x21D0($at)
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8656)));
    // 0x18cf38: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18CF38u;
    {
        const bool branch_taken_0x18cf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF38u;
            // 0x18cf3c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf38) {
            ctx->pc = 0x18CF68u;
            goto label_18cf68;
        }
    }
    ctx->pc = 0x18CF40u;
    // 0x18cf40: 0x8c2221c0  lw          $v0, 0x21C0($at)
    ctx->pc = 0x18cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8640)));
    // 0x18cf44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CF44u;
    {
        const bool branch_taken_0x18cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf44) {
            ctx->pc = 0x18CF68u;
            goto label_18cf68;
        }
    }
    ctx->pc = 0x18CF4Cu;
    // 0x18cf4c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18cf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18cf50: 0x8c2221b8  lw          $v0, 0x21B8($at)
    ctx->pc = 0x18cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8632)));
    // 0x18cf54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CF54u;
    {
        const bool branch_taken_0x18cf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF54u;
            // 0x18cf58: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf54) {
            ctx->pc = 0x18CF68u;
            goto label_18cf68;
        }
    }
    ctx->pc = 0x18CF5Cu;
    // 0x18cf5c: 0x8c2221b0  lw          $v0, 0x21B0($at)
    ctx->pc = 0x18cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8624)));
    // 0x18cf60: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x18CF60u;
    {
        const bool branch_taken_0x18cf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cf60) {
            ctx->pc = 0x18D0F8u;
            goto label_18d0f8;
        }
    }
    ctx->pc = 0x18CF68u;
label_18cf68:
    // 0x18cf68: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18cf6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cf70: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x18CF70u;
    {
        const bool branch_taken_0x18cf70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF70u;
            // 0x18cf74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf70) {
            ctx->pc = 0x18D090u;
            goto label_18d090;
        }
    }
    ctx->pc = 0x18CF78u;
    // 0x18cf78: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18CF78u;
    {
        const bool branch_taken_0x18cf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18cf78) {
            ctx->pc = 0x18D028u;
            goto label_18d028;
        }
    }
    ctx->pc = 0x18CF80u;
    // 0x18cf80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF80u;
    {
        const bool branch_taken_0x18cf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cf80) {
            ctx->pc = 0x18CF90u;
            goto label_18cf90;
        }
    }
    ctx->pc = 0x18CF88u;
    // 0x18cf88: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x18CF88u;
    {
        const bool branch_taken_0x18cf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cf88) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CF90u;
label_18cf90:
    // 0x18cf90: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18cf94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18cf98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18cf98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18cf9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x18cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18cfa0: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x18cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    // 0x18cfa4: 0x1010  mfhi        $v0
    ctx->pc = 0x18cfa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18cfa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18CFA8u;
    {
        const bool branch_taken_0x18cfa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cfa8) {
            ctx->pc = 0x18CFD8u;
            goto label_18cfd8;
        }
    }
    ctx->pc = 0x18CFB0u;
    // 0x18cfb0: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cfb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cfb8: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18cfbc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18cfbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18cfc0: 0xc05d080  jal         func_174200
    ctx->pc = 0x18CFC0u;
    SET_GPR_U32(ctx, 31, 0x18CFC8u);
    ctx->pc = 0x18CFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFC0u;
            // 0x18cfc4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFC8u; }
        if (ctx->pc != 0x18CFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFC8u; }
        if (ctx->pc != 0x18CFC8u) { return; }
    }
    ctx->pc = 0x18CFC8u;
    // 0x18cfc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18cfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18cfcc: 0x8c2521d8  lw          $a1, 0x21D8($at)
    ctx->pc = 0x18cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x18cfd0: 0xc054f50  jal         func_153D40
    ctx->pc = 0x18CFD0u;
    SET_GPR_U32(ctx, 31, 0x18CFD8u);
    ctx->pc = 0x18CFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFD0u;
            // 0x18cfd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153D40u;
    if (runtime->hasFunction(0x153D40u)) {
        auto targetFn = runtime->lookupFunction(0x153D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFD8u; }
        if (ctx->pc != 0x18CFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateShot_0x153d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFD8u; }
        if (ctx->pc != 0x18CFD8u) { return; }
    }
    ctx->pc = 0x18CFD8u;
label_18cfd8:
    // 0x18cfd8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x18cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18cfdc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x18cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x18cfe0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18cfe0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18cfe4: 0x0  nop
    ctx->pc = 0x18cfe4u;
    // NOP
    // 0x18cfe8: 0x0  nop
    ctx->pc = 0x18cfe8u;
    // NOP
    // 0x18cfec: 0x1010  mfhi        $v0
    ctx->pc = 0x18cfecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18cff0: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x18CFF0u;
    {
        const bool branch_taken_0x18cff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cff0) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18CFF8u;
    // 0x18cff8: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cffc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x18cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18d000: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d004: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d008: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D008u;
    SET_GPR_U32(ctx, 31, 0x18D010u);
    ctx->pc = 0x18D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D008u;
            // 0x18d00c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D010u; }
        if (ctx->pc != 0x18D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D010u; }
        if (ctx->pc != 0x18D010u) { return; }
    }
    ctx->pc = 0x18D010u;
    // 0x18d010: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d014: 0x8c2521d8  lw          $a1, 0x21D8($at)
    ctx->pc = 0x18d014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x18d018: 0xc054ef0  jal         func_153BC0
    ctx->pc = 0x18D018u;
    SET_GPR_U32(ctx, 31, 0x18D020u);
    ctx->pc = 0x18D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D018u;
            // 0x18d01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BC0u;
    if (runtime->hasFunction(0x153BC0u)) {
        auto targetFn = runtime->lookupFunction(0x153BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D020u; }
        if (ctx->pc != 0x18D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMissile_0x153bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D020u; }
        if (ctx->pc != 0x18D020u) { return; }
    }
    ctx->pc = 0x18D020u;
    // 0x18d020: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x18D020u;
    {
        const bool branch_taken_0x18d020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d020) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18D028u;
label_18d028:
    // 0x18d028: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d02c: 0x8c2521d8  lw          $a1, 0x21D8($at)
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x18d030: 0xc054e98  jal         func_153A60
    ctx->pc = 0x18D030u;
    SET_GPR_U32(ctx, 31, 0x18D038u);
    ctx->pc = 0x18D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D030u;
            // 0x18d034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153A60u;
    if (runtime->hasFunction(0x153A60u)) {
        auto targetFn = runtime->lookupFunction(0x153A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D038u; }
        if (ctx->pc != 0x18D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateLaser_0x153a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D038u; }
        if (ctx->pc != 0x18D038u) { return; }
    }
    ctx->pc = 0x18D038u;
    // 0x18d038: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x18d038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d03c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18d040: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x18d040u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)3u)));
    // 0x18d044: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D044u;
    {
        const bool branch_taken_0x18d044 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D044u;
            // 0x18d048: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d044) {
            ctx->pc = 0x18D058u;
            goto label_18d058;
        }
    }
    ctx->pc = 0x18D04Cu;
    // 0x18d04c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D04Cu;
    {
        const bool branch_taken_0x18d04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d04c) {
            ctx->pc = 0x18D058u;
            goto label_18d058;
        }
    }
    ctx->pc = 0x18D054u;
    // 0x18d054: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18d054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_18d058:
    // 0x18d058: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18D058u;
    {
        const bool branch_taken_0x18d058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d058) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18D060u;
    // 0x18d060: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d064: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d068: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d06c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d070: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D070u;
    SET_GPR_U32(ctx, 31, 0x18D078u);
    ctx->pc = 0x18D074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D070u;
            // 0x18d074: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D078u; }
        if (ctx->pc != 0x18D078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D078u; }
        if (ctx->pc != 0x18D078u) { return; }
    }
    ctx->pc = 0x18D078u;
    // 0x18d078: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d07c: 0x8c2521d8  lw          $a1, 0x21D8($at)
    ctx->pc = 0x18d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x18d080: 0xc054dc8  jal         func_153720
    ctx->pc = 0x18D080u;
    SET_GPR_U32(ctx, 31, 0x18D088u);
    ctx->pc = 0x18D084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D080u;
            // 0x18d084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (runtime->hasFunction(0x153720u)) {
        auto targetFn = runtime->lookupFunction(0x153720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D088u; }
        if (ctx->pc != 0x18D088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateShot2_0x153720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D088u; }
        if (ctx->pc != 0x18D088u) { return; }
    }
    ctx->pc = 0x18D088u;
    // 0x18d088: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18D088u;
    {
        const bool branch_taken_0x18d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d088) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18D090u;
label_18d090:
    // 0x18d090: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x18d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d094: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x18d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18d098: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18d098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18d09c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18d09cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18d0a0: 0x0  nop
    ctx->pc = 0x18d0a0u;
    // NOP
    // 0x18d0a4: 0x0  nop
    ctx->pc = 0x18d0a4u;
    // NOP
    // 0x18d0a8: 0x1010  mfhi        $v0
    ctx->pc = 0x18d0a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18d0ac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18D0ACu;
    {
        const bool branch_taken_0x18d0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0ACu;
            // 0x18d0b0: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0ac) {
            ctx->pc = 0x18D0E0u;
            goto label_18d0e0;
        }
    }
    ctx->pc = 0x18D0B4u;
    // 0x18d0b4: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d0b8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x18d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18d0bc: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d0c0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d0c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d0c4: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D0C4u;
    SET_GPR_U32(ctx, 31, 0x18D0CCu);
    ctx->pc = 0x18D0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0C4u;
            // 0x18d0c8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0CCu; }
        if (ctx->pc != 0x18D0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0CCu; }
        if (ctx->pc != 0x18D0CCu) { return; }
    }
    ctx->pc = 0x18D0CCu;
    // 0x18d0cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d0d0: 0x8c2521d8  lw          $a1, 0x21D8($at)
    ctx->pc = 0x18d0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x18d0d4: 0xc054d3c  jal         func_1534F0
    ctx->pc = 0x18D0D4u;
    SET_GPR_U32(ctx, 31, 0x18D0DCu);
    ctx->pc = 0x18D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0D4u;
            // 0x18d0d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1534F0u;
    if (runtime->hasFunction(0x1534F0u)) {
        auto targetFn = runtime->lookupFunction(0x1534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0DCu; }
        if (ctx->pc != 0x18D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMissile2_0x1534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0DCu; }
        if (ctx->pc != 0x18D0DCu) { return; }
    }
    ctx->pc = 0x18D0DCu;
    // 0x18d0dc: 0x0  nop
    ctx->pc = 0x18d0dcu;
    // NOP
label_18d0e0:
    // 0x18d0e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d0e4: 0x8c2521d8  lw          $a1, 0x21D8($at)
    ctx->pc = 0x18d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8664)));
    // 0x18d0e8: 0xc054cdc  jal         func_153370
    ctx->pc = 0x18D0E8u;
    SET_GPR_U32(ctx, 31, 0x18D0F0u);
    ctx->pc = 0x18D0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0E8u;
            // 0x18d0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0F0u; }
        if (ctx->pc != 0x18D0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateLaser2_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0F0u; }
        if (ctx->pc != 0x18D0F0u) { return; }
    }
    ctx->pc = 0x18D0F0u;
    // 0x18d0f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18D0F0u;
    {
        const bool branch_taken_0x18d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d0f0) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18D0F8u;
label_18d0f8:
    // 0x18d0f8: 0xc053f20  jal         func_14FC80
    ctx->pc = 0x18D0F8u;
    SET_GPR_U32(ctx, 31, 0x18D100u);
    ctx->pc = 0x18D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0F8u;
            // 0x18d0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC80u;
    if (runtime->hasFunction(0x14FC80u)) {
        auto targetFn = runtime->lookupFunction(0x14FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D100u; }
        if (ctx->pc != 0x18D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserDel_0x14fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D100u; }
        if (ctx->pc != 0x18D100u) { return; }
    }
    ctx->pc = 0x18D100u;
    // 0x18d100: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x18d100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x18d104: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x18d104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_18d108:
    // 0x18d108: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d10c: 0x8c2221c8  lw          $v0, 0x21C8($at)
    ctx->pc = 0x18d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8648)));
    // 0x18d110: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D110u;
    {
        const bool branch_taken_0x18d110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d110) {
            ctx->pc = 0x18D160u;
            goto label_18d160;
        }
    }
    ctx->pc = 0x18D118u;
    // 0x18d118: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x18d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x18d11c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D11Cu;
    {
        const bool branch_taken_0x18d11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D11Cu;
            // 0x18d120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d11c) {
            ctx->pc = 0x18D160u;
            goto label_18d160;
        }
    }
    ctx->pc = 0x18D124u;
    // 0x18d124: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x18D124u;
    SET_GPR_U32(ctx, 31, 0x18D12Cu);
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D12Cu; }
        if (ctx->pc != 0x18D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D12Cu; }
        if (ctx->pc != 0x18D12Cu) { return; }
    }
    ctx->pc = 0x18D12Cu;
    // 0x18d12c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18D12Cu;
    {
        const bool branch_taken_0x18d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d12c) {
            ctx->pc = 0x18D160u;
            goto label_18d160;
        }
    }
    ctx->pc = 0x18D134u;
    // 0x18d134: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x18d138: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x18d138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x18d13c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d144: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x18d144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18d148: 0xae4500b0  sw          $a1, 0xB0($s2)
    ctx->pc = 0x18d148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 5));
    // 0x18d14c: 0xae4300bc  sw          $v1, 0xBC($s2)
    ctx->pc = 0x18d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 3));
    // 0x18d150: 0xc056f54  jal         func_15BD50
    ctx->pc = 0x18D150u;
    SET_GPR_U32(ctx, 31, 0x18D158u);
    ctx->pc = 0x18D154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D150u;
            // 0x18d154: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD50u;
    if (runtime->hasFunction(0x15BD50u)) {
        auto targetFn = runtime->lookupFunction(0x15BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D158u; }
        if (ctx->pc != 0x18D158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCutinStart_0x15bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D158u; }
        if (ctx->pc != 0x18D158u) { return; }
    }
    ctx->pc = 0x18D158u;
    // 0x18d158: 0xc053e24  jal         func_14F890
    ctx->pc = 0x18D158u;
    SET_GPR_U32(ctx, 31, 0x18D160u);
    ctx->pc = 0x18D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D158u;
            // 0x18d15c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F890u;
    if (runtime->hasFunction(0x14F890u)) {
        auto targetFn = runtime->lookupFunction(0x14F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D160u; }
        if (ctx->pc != 0x18D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CutInVertexInit_0x14f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D160u; }
        if (ctx->pc != 0x18D160u) { return; }
    }
    ctx->pc = 0x18D160u;
label_18d160:
    // 0x18d160: 0xc056f38  jal         func_15BCE0
    ctx->pc = 0x18D160u;
    SET_GPR_U32(ctx, 31, 0x18D168u);
    ctx->pc = 0x18D164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D160u;
            // 0x18d164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BCE0u;
    if (runtime->hasFunction(0x15BCE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D168u; }
        if (ctx->pc != 0x18D168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isWeaponStart_0x15bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D168u; }
        if (ctx->pc != 0x18D168u) { return; }
    }
    ctx->pc = 0x18D168u;
    // 0x18d168: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D168u;
    {
        const bool branch_taken_0x18d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D168u;
            // 0x18d16c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d168) {
            ctx->pc = 0x18D190u;
            goto label_18d190;
        }
    }
    ctx->pc = 0x18D170u;
    // 0x18d170: 0xc056f38  jal         func_15BCE0
    ctx->pc = 0x18D170u;
    SET_GPR_U32(ctx, 31, 0x18D178u);
    ctx->pc = 0x15BCE0u;
    if (runtime->hasFunction(0x15BCE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D178u; }
        if (ctx->pc != 0x18D178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isWeaponStart_0x15bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D178u; }
        if (ctx->pc != 0x18D178u) { return; }
    }
    ctx->pc = 0x18D178u;
    // 0x18d178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D178u;
    {
        const bool branch_taken_0x18d178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D178u;
            // 0x18d17c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d178) {
            ctx->pc = 0x18D190u;
            goto label_18d190;
        }
    }
    ctx->pc = 0x18D180u;
    // 0x18d180: 0xc054b5c  jal         func_152D70
    ctx->pc = 0x18D180u;
    SET_GPR_U32(ctx, 31, 0x18D188u);
    ctx->pc = 0x152D70u;
    if (runtime->hasFunction(0x152D70u)) {
        auto targetFn = runtime->lookupFunction(0x152D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D188u; }
        if (ctx->pc != 0x18D188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Super_0x152d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D188u; }
        if (ctx->pc != 0x18D188u) { return; }
    }
    ctx->pc = 0x18D188u;
    // 0x18d188: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x18D188u;
    {
        const bool branch_taken_0x18d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d188) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D190u;
label_18d190:
    // 0x18d190: 0xc056f38  jal         func_15BCE0
    ctx->pc = 0x18D190u;
    SET_GPR_U32(ctx, 31, 0x18D198u);
    ctx->pc = 0x18D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D190u;
            // 0x18d194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BCE0u;
    if (runtime->hasFunction(0x15BCE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D198u; }
        if (ctx->pc != 0x18D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isWeaponStart_0x15bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D198u; }
        if (ctx->pc != 0x18D198u) { return; }
    }
    ctx->pc = 0x18D198u;
    // 0x18d198: 0x10400121  beqz        $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x18D198u;
    {
        const bool branch_taken_0x18d198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d198) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D1A0u;
    // 0x18d1a0: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x18d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18d1a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d1a8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x18D1A8u;
    {
        const bool branch_taken_0x18d1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1A8u;
            // 0x18d1ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1a8) {
            ctx->pc = 0x18D1F0u;
            goto label_18d1f0;
        }
    }
    ctx->pc = 0x18D1B0u;
    // 0x18d1b0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D1B0u;
    {
        const bool branch_taken_0x18d1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d1b0) {
            ctx->pc = 0x18D1D8u;
            goto label_18d1d8;
        }
    }
    ctx->pc = 0x18D1B8u;
    // 0x18d1b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1B8u;
    {
        const bool branch_taken_0x18d1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d1b8) {
            ctx->pc = 0x18D1C8u;
            goto label_18d1c8;
        }
    }
    ctx->pc = 0x18D1C0u;
    // 0x18d1c0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x18D1C0u;
    {
        const bool branch_taken_0x18d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d1c0) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D1C8u;
label_18d1c8:
    // 0x18d1c8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x18d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x18d1cc: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x18D1CCu;
    {
        const bool branch_taken_0x18d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1CCu;
            // 0x18d1d0: 0xae4300c0  sw          $v1, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1cc) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D1D4u;
    // 0x18d1d4: 0x0  nop
    ctx->pc = 0x18d1d4u;
    // NOP
label_18d1d8:
    // 0x18d1d8: 0xc053f20  jal         func_14FC80
    ctx->pc = 0x18D1D8u;
    SET_GPR_U32(ctx, 31, 0x18D1E0u);
    ctx->pc = 0x18D1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1D8u;
            // 0x18d1dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC80u;
    if (runtime->hasFunction(0x14FC80u)) {
        auto targetFn = runtime->lookupFunction(0x14FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1E0u; }
        if (ctx->pc != 0x18D1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserDel_0x14fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1E0u; }
        if (ctx->pc != 0x18D1E0u) { return; }
    }
    ctx->pc = 0x18D1E0u;
    // 0x18d1e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d1e4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x18D1E4u;
    {
        const bool branch_taken_0x18d1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1E4u;
            // 0x18d1e8: 0xae4300c0  sw          $v1, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1e4) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D1ECu;
    // 0x18d1ec: 0x0  nop
    ctx->pc = 0x18d1ecu;
    // NOP
label_18d1f0:
    // 0x18d1f0: 0xc053f20  jal         func_14FC80
    ctx->pc = 0x18D1F0u;
    SET_GPR_U32(ctx, 31, 0x18D1F8u);
    ctx->pc = 0x18D1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1F0u;
            // 0x18d1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC80u;
    if (runtime->hasFunction(0x14FC80u)) {
        auto targetFn = runtime->lookupFunction(0x14FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1F8u; }
        if (ctx->pc != 0x18D1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserDel_0x14fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D1F8u; }
        if (ctx->pc != 0x18D1F8u) { return; }
    }
    ctx->pc = 0x18D1F8u;
    // 0x18d1f8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x18d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x18d1fc: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x18D1FCu;
    {
        const bool branch_taken_0x18d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1FCu;
            // 0x18d200: 0xae4300c0  sw          $v1, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1fc) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D204u;
    // 0x18d204: 0x0  nop
    ctx->pc = 0x18d204u;
    // NOP
label_18d208:
    // 0x18d208: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x18d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x18d20c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D20Cu;
    {
        const bool branch_taken_0x18d20c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18d20c) {
            ctx->pc = 0x18D220u;
            goto label_18d220;
        }
    }
    ctx->pc = 0x18D214u;
    // 0x18d214: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d218: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x18d218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x18d21c: 0x0  nop
    ctx->pc = 0x18d21cu;
    // NOP
label_18d220:
    // 0x18d220: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x18d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x18d224: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x18D224u;
    {
        const bool branch_taken_0x18d224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d224) {
            ctx->pc = 0x18D350u;
            goto label_18d350;
        }
    }
    ctx->pc = 0x18D22Cu;
    // 0x18d22c: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x18d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18d230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d234: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x18D234u;
    {
        const bool branch_taken_0x18d234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D234u;
            // 0x18d238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d234) {
            ctx->pc = 0x18D2F0u;
            goto label_18d2f0;
        }
    }
    ctx->pc = 0x18D23Cu;
    // 0x18d23c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18D23Cu;
    {
        const bool branch_taken_0x18d23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d23c) {
            ctx->pc = 0x18D2B8u;
            goto label_18d2b8;
        }
    }
    ctx->pc = 0x18D244u;
    // 0x18d244: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D244u;
    {
        const bool branch_taken_0x18d244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d244) {
            ctx->pc = 0x18D258u;
            goto label_18d258;
        }
    }
    ctx->pc = 0x18D24Cu;
    // 0x18d24c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x18D24Cu;
    {
        const bool branch_taken_0x18d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d24c) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D254u;
    // 0x18d254: 0x0  nop
    ctx->pc = 0x18d254u;
    // NOP
label_18d258:
    // 0x18d258: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x18d258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d25c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x18d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18d260: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x18d260u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x18d264: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D264u;
    {
        const bool branch_taken_0x18d264 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D264u;
            // 0x18d268: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d264) {
            ctx->pc = 0x18D278u;
            goto label_18d278;
        }
    }
    ctx->pc = 0x18D26Cu;
    // 0x18d26c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D26Cu;
    {
        const bool branch_taken_0x18d26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d26c) {
            ctx->pc = 0x18D278u;
            goto label_18d278;
        }
    }
    ctx->pc = 0x18D274u;
    // 0x18d274: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_18d278:
    // 0x18d278: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x18D278u;
    {
        const bool branch_taken_0x18d278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d278) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D280u;
    // 0x18d280: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d284: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x18d284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18d288: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d28c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d28cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d290: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D290u;
    SET_GPR_U32(ctx, 31, 0x18D298u);
    ctx->pc = 0x18D294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D290u;
            // 0x18d294: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D298u; }
        if (ctx->pc != 0x18D298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D298u; }
        if (ctx->pc != 0x18D298u) { return; }
    }
    ctx->pc = 0x18D298u;
    // 0x18d298: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x18D298u;
    SET_GPR_U32(ctx, 31, 0x18D2A0u);
    ctx->pc = 0x18D29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D298u;
            // 0x18d29c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2A0u; }
        if (ctx->pc != 0x18D2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Shot_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2A0u; }
        if (ctx->pc != 0x18D2A0u) { return; }
    }
    ctx->pc = 0x18D2A0u;
    // 0x18d2a0: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x18d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18d2a4: 0xc055124  jal         func_154490
    ctx->pc = 0x18D2A4u;
    SET_GPR_U32(ctx, 31, 0x18D2ACu);
    ctx->pc = 0x18D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2A4u;
            // 0x18d2a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2ACu; }
        if (ctx->pc != 0x18D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2ACu; }
        if (ctx->pc != 0x18D2ACu) { return; }
    }
    ctx->pc = 0x18D2ACu;
    // 0x18d2ac: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x18D2ACu;
    {
        const bool branch_taken_0x18d2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2ac) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D2B4u;
    // 0x18d2b4: 0x0  nop
    ctx->pc = 0x18d2b4u;
    // NOP
label_18d2b8:
    // 0x18d2b8: 0xc054b3c  jal         func_152CF0
    ctx->pc = 0x18D2B8u;
    SET_GPR_U32(ctx, 31, 0x18D2C0u);
    ctx->pc = 0x18D2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2B8u;
            // 0x18d2bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152CF0u;
    if (runtime->hasFunction(0x152CF0u)) {
        auto targetFn = runtime->lookupFunction(0x152CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2C0u; }
        if (ctx->pc != 0x18D2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Laser_0x152cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2C0u; }
        if (ctx->pc != 0x18D2C0u) { return; }
    }
    ctx->pc = 0x18D2C0u;
    // 0x18d2c0: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d2c4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x18d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18d2c8: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d2cc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d2d0: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D2D0u;
    SET_GPR_U32(ctx, 31, 0x18D2D8u);
    ctx->pc = 0x18D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2D0u;
            // 0x18d2d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2D8u; }
        if (ctx->pc != 0x18D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2D8u; }
        if (ctx->pc != 0x18D2D8u) { return; }
    }
    ctx->pc = 0x18D2D8u;
    // 0x18d2d8: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x18d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18d2dc: 0xc055124  jal         func_154490
    ctx->pc = 0x18D2DCu;
    SET_GPR_U32(ctx, 31, 0x18D2E4u);
    ctx->pc = 0x18D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2DCu;
            // 0x18d2e0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2E4u; }
        if (ctx->pc != 0x18D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2E4u; }
        if (ctx->pc != 0x18D2E4u) { return; }
    }
    ctx->pc = 0x18D2E4u;
    // 0x18d2e4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x18D2E4u;
    {
        const bool branch_taken_0x18d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2e4) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D2ECu;
    // 0x18d2ec: 0x0  nop
    ctx->pc = 0x18d2ecu;
    // NOP
label_18d2f0:
    // 0x18d2f0: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x18d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d2f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x18d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18d2f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x18d2f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x18d2fc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D2FCu;
    {
        const bool branch_taken_0x18d2fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2FCu;
            // 0x18d300: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2fc) {
            ctx->pc = 0x18D310u;
            goto label_18d310;
        }
    }
    ctx->pc = 0x18D304u;
    // 0x18d304: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D304u;
    {
        const bool branch_taken_0x18d304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d304) {
            ctx->pc = 0x18D310u;
            goto label_18d310;
        }
    }
    ctx->pc = 0x18D30Cu;
    // 0x18d30c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_18d310:
    // 0x18d310: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x18D310u;
    {
        const bool branch_taken_0x18d310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D310u;
            // 0x18d314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d310) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D318u;
    // 0x18d318: 0xc054c7c  jal         func_1531F0
    ctx->pc = 0x18D318u;
    SET_GPR_U32(ctx, 31, 0x18D320u);
    ctx->pc = 0x1531F0u;
    if (runtime->hasFunction(0x1531F0u)) {
        auto targetFn = runtime->lookupFunction(0x1531F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D320u; }
        if (ctx->pc != 0x18D320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Missile_0x1531f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D320u; }
        if (ctx->pc != 0x18D320u) { return; }
    }
    ctx->pc = 0x18D320u;
    // 0x18d320: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d324: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x18d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18d328: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d32c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d32cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d330: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D330u;
    SET_GPR_U32(ctx, 31, 0x18D338u);
    ctx->pc = 0x18D334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D330u;
            // 0x18d334: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D338u; }
        if (ctx->pc != 0x18D338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D338u; }
        if (ctx->pc != 0x18D338u) { return; }
    }
    ctx->pc = 0x18D338u;
    // 0x18d338: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x18d338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x18d33c: 0xc055124  jal         func_154490
    ctx->pc = 0x18D33Cu;
    SET_GPR_U32(ctx, 31, 0x18D344u);
    ctx->pc = 0x18D340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D33Cu;
            // 0x18d340: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D344u; }
        if (ctx->pc != 0x18D344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D344u; }
        if (ctx->pc != 0x18D344u) { return; }
    }
    ctx->pc = 0x18D344u;
    // 0x18d344: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x18D344u;
    {
        const bool branch_taken_0x18d344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d344) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D34Cu;
    // 0x18d34c: 0x0  nop
    ctx->pc = 0x18d34cu;
    // NOP
label_18d350:
    // 0x18d350: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d354: 0x8c2221a0  lw          $v0, 0x21A0($at)
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8608)));
    // 0x18d358: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18D358u;
    {
        const bool branch_taken_0x18d358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D358u;
            // 0x18d35c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d358) {
            ctx->pc = 0x18D388u;
            goto label_18d388;
        }
    }
    ctx->pc = 0x18D360u;
    // 0x18d360: 0x8c222190  lw          $v0, 0x2190($at)
    ctx->pc = 0x18d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8592)));
    // 0x18d364: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D364u;
    {
        const bool branch_taken_0x18d364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d364) {
            ctx->pc = 0x18D388u;
            goto label_18d388;
        }
    }
    ctx->pc = 0x18D36Cu;
    // 0x18d36c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d370: 0x8c222188  lw          $v0, 0x2188($at)
    ctx->pc = 0x18d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8584)));
    // 0x18d374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D374u;
    {
        const bool branch_taken_0x18d374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D374u;
            // 0x18d378: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d374) {
            ctx->pc = 0x18D388u;
            goto label_18d388;
        }
    }
    ctx->pc = 0x18D37Cu;
    // 0x18d37c: 0x8c222180  lw          $v0, 0x2180($at)
    ctx->pc = 0x18d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8576)));
    // 0x18d380: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x18D380u;
    {
        const bool branch_taken_0x18d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d380) {
            ctx->pc = 0x18D518u;
            goto label_18d518;
        }
    }
    ctx->pc = 0x18D388u;
label_18d388:
    // 0x18d388: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x18d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18d38c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d390: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x18D390u;
    {
        const bool branch_taken_0x18d390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D390u;
            // 0x18d394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d390) {
            ctx->pc = 0x18D4B0u;
            goto label_18d4b0;
        }
    }
    ctx->pc = 0x18D398u;
    // 0x18d398: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18D398u;
    {
        const bool branch_taken_0x18d398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d398) {
            ctx->pc = 0x18D448u;
            goto label_18d448;
        }
    }
    ctx->pc = 0x18D3A0u;
    // 0x18d3a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D3A0u;
    {
        const bool branch_taken_0x18d3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d3a0) {
            ctx->pc = 0x18D3B0u;
            goto label_18d3b0;
        }
    }
    ctx->pc = 0x18D3A8u;
    // 0x18d3a8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x18D3A8u;
    {
        const bool branch_taken_0x18d3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d3a8) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D3B0u;
label_18d3b0:
    // 0x18d3b0: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x18d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d3b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d3b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18d3b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18d3bc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x18d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18d3c0: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x18d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    // 0x18d3c4: 0x1010  mfhi        $v0
    ctx->pc = 0x18d3c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18d3c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18D3C8u;
    {
        const bool branch_taken_0x18d3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d3c8) {
            ctx->pc = 0x18D3F8u;
            goto label_18d3f8;
        }
    }
    ctx->pc = 0x18D3D0u;
    // 0x18d3d0: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d3d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d3d8: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d3dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d3e0: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D3E0u;
    SET_GPR_U32(ctx, 31, 0x18D3E8u);
    ctx->pc = 0x18D3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3E0u;
            // 0x18d3e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D3E8u; }
        if (ctx->pc != 0x18D3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D3E8u; }
        if (ctx->pc != 0x18D3E8u) { return; }
    }
    ctx->pc = 0x18D3E8u;
    // 0x18d3e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d3ec: 0x8c2521a8  lw          $a1, 0x21A8($at)
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x18d3f0: 0xc054f50  jal         func_153D40
    ctx->pc = 0x18D3F0u;
    SET_GPR_U32(ctx, 31, 0x18D3F8u);
    ctx->pc = 0x18D3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3F0u;
            // 0x18d3f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153D40u;
    if (runtime->hasFunction(0x153D40u)) {
        auto targetFn = runtime->lookupFunction(0x153D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D3F8u; }
        if (ctx->pc != 0x18D3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateShot_0x153d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D3F8u; }
        if (ctx->pc != 0x18D3F8u) { return; }
    }
    ctx->pc = 0x18D3F8u;
label_18d3f8:
    // 0x18d3f8: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d3fc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x18d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x18d400: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18d400u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18d404: 0x0  nop
    ctx->pc = 0x18d404u;
    // NOP
    // 0x18d408: 0x0  nop
    ctx->pc = 0x18d408u;
    // NOP
    // 0x18d40c: 0x1010  mfhi        $v0
    ctx->pc = 0x18d40cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18d410: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x18D410u;
    {
        const bool branch_taken_0x18d410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d410) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D418u;
    // 0x18d418: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d41c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x18d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18d420: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d424: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d428: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D428u;
    SET_GPR_U32(ctx, 31, 0x18D430u);
    ctx->pc = 0x18D42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D428u;
            // 0x18d42c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D430u; }
        if (ctx->pc != 0x18D430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D430u; }
        if (ctx->pc != 0x18D430u) { return; }
    }
    ctx->pc = 0x18D430u;
    // 0x18d430: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d434: 0x8c2521a8  lw          $a1, 0x21A8($at)
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x18d438: 0xc054ef0  jal         func_153BC0
    ctx->pc = 0x18D438u;
    SET_GPR_U32(ctx, 31, 0x18D440u);
    ctx->pc = 0x18D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D438u;
            // 0x18d43c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BC0u;
    if (runtime->hasFunction(0x153BC0u)) {
        auto targetFn = runtime->lookupFunction(0x153BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D440u; }
        if (ctx->pc != 0x18D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMissile_0x153bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D440u; }
        if (ctx->pc != 0x18D440u) { return; }
    }
    ctx->pc = 0x18D440u;
    // 0x18d440: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x18D440u;
    {
        const bool branch_taken_0x18d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d440) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D448u;
label_18d448:
    // 0x18d448: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d44c: 0x8c2521a8  lw          $a1, 0x21A8($at)
    ctx->pc = 0x18d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x18d450: 0xc054e98  jal         func_153A60
    ctx->pc = 0x18D450u;
    SET_GPR_U32(ctx, 31, 0x18D458u);
    ctx->pc = 0x18D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D450u;
            // 0x18d454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153A60u;
    if (runtime->hasFunction(0x153A60u)) {
        auto targetFn = runtime->lookupFunction(0x153A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D458u; }
        if (ctx->pc != 0x18D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateLaser_0x153a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D458u; }
        if (ctx->pc != 0x18D458u) { return; }
    }
    ctx->pc = 0x18D458u;
    // 0x18d458: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x18d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d45c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x18d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18d460: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x18d460u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)3u)));
    // 0x18d464: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D464u;
    {
        const bool branch_taken_0x18d464 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D464u;
            // 0x18d468: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d464) {
            ctx->pc = 0x18D478u;
            goto label_18d478;
        }
    }
    ctx->pc = 0x18D46Cu;
    // 0x18d46c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D46Cu;
    {
        const bool branch_taken_0x18d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d46c) {
            ctx->pc = 0x18D478u;
            goto label_18d478;
        }
    }
    ctx->pc = 0x18D474u;
    // 0x18d474: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_18d478:
    // 0x18d478: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18D478u;
    {
        const bool branch_taken_0x18d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d478) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D480u;
    // 0x18d480: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d484: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d488: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d48c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d490: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D490u;
    SET_GPR_U32(ctx, 31, 0x18D498u);
    ctx->pc = 0x18D494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D490u;
            // 0x18d494: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D498u; }
        if (ctx->pc != 0x18D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D498u; }
        if (ctx->pc != 0x18D498u) { return; }
    }
    ctx->pc = 0x18D498u;
    // 0x18d498: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d49c: 0x8c2521a8  lw          $a1, 0x21A8($at)
    ctx->pc = 0x18d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x18d4a0: 0xc054dc8  jal         func_153720
    ctx->pc = 0x18D4A0u;
    SET_GPR_U32(ctx, 31, 0x18D4A8u);
    ctx->pc = 0x18D4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4A0u;
            // 0x18d4a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (runtime->hasFunction(0x153720u)) {
        auto targetFn = runtime->lookupFunction(0x153720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4A8u; }
        if (ctx->pc != 0x18D4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateShot2_0x153720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4A8u; }
        if (ctx->pc != 0x18D4A8u) { return; }
    }
    ctx->pc = 0x18D4A8u;
    // 0x18d4a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18D4A8u;
    {
        const bool branch_taken_0x18d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4a8) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D4B0u;
label_18d4b0:
    // 0x18d4b0: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x18d4b4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x18d4b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18d4bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18d4bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18d4c0: 0x0  nop
    ctx->pc = 0x18d4c0u;
    // NOP
    // 0x18d4c4: 0x0  nop
    ctx->pc = 0x18d4c4u;
    // NOP
    // 0x18d4c8: 0x1010  mfhi        $v0
    ctx->pc = 0x18d4c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18d4cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18D4CCu;
    {
        const bool branch_taken_0x18d4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4CCu;
            // 0x18d4d0: 0xae4300a0  sw          $v1, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4cc) {
            ctx->pc = 0x18D500u;
            goto label_18d500;
        }
    }
    ctx->pc = 0x18D4D4u;
    // 0x18d4d4: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x18d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d4d8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x18d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18d4dc: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x18d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d4e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18d4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x18d4e4: 0xc05d080  jal         func_174200
    ctx->pc = 0x18D4E4u;
    SET_GPR_U32(ctx, 31, 0x18D4ECu);
    ctx->pc = 0x18D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4E4u;
            // 0x18d4e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4ECu; }
        if (ctx->pc != 0x18D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4ECu; }
        if (ctx->pc != 0x18D4ECu) { return; }
    }
    ctx->pc = 0x18D4ECu;
    // 0x18d4ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d4f0: 0x8c2521a8  lw          $a1, 0x21A8($at)
    ctx->pc = 0x18d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x18d4f4: 0xc054d3c  jal         func_1534F0
    ctx->pc = 0x18D4F4u;
    SET_GPR_U32(ctx, 31, 0x18D4FCu);
    ctx->pc = 0x18D4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D4F4u;
            // 0x18d4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1534F0u;
    if (runtime->hasFunction(0x1534F0u)) {
        auto targetFn = runtime->lookupFunction(0x1534F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4FCu; }
        if (ctx->pc != 0x18D4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMissile2_0x1534f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D4FCu; }
        if (ctx->pc != 0x18D4FCu) { return; }
    }
    ctx->pc = 0x18D4FCu;
    // 0x18d4fc: 0x0  nop
    ctx->pc = 0x18d4fcu;
    // NOP
label_18d500:
    // 0x18d500: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d504: 0x8c2521a8  lw          $a1, 0x21A8($at)
    ctx->pc = 0x18d504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8616)));
    // 0x18d508: 0xc054cdc  jal         func_153370
    ctx->pc = 0x18D508u;
    SET_GPR_U32(ctx, 31, 0x18D510u);
    ctx->pc = 0x18D50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D508u;
            // 0x18d50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D510u; }
        if (ctx->pc != 0x18D510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateLaser2_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D510u; }
        if (ctx->pc != 0x18D510u) { return; }
    }
    ctx->pc = 0x18D510u;
    // 0x18d510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18D510u;
    {
        const bool branch_taken_0x18d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d510) {
            ctx->pc = 0x18D528u;
            goto label_18d528;
        }
    }
    ctx->pc = 0x18D518u;
label_18d518:
    // 0x18d518: 0xc053f20  jal         func_14FC80
    ctx->pc = 0x18D518u;
    SET_GPR_U32(ctx, 31, 0x18D520u);
    ctx->pc = 0x18D51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D518u;
            // 0x18d51c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC80u;
    if (runtime->hasFunction(0x14FC80u)) {
        auto targetFn = runtime->lookupFunction(0x14FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D520u; }
        if (ctx->pc != 0x18D520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserDel_0x14fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D520u; }
        if (ctx->pc != 0x18D520u) { return; }
    }
    ctx->pc = 0x18D520u;
    // 0x18d520: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x18d520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x18d524: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x18d524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_18d528:
    // 0x18d528: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18d528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18d52c: 0x8c222198  lw          $v0, 0x2198($at)
    ctx->pc = 0x18d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8600)));
    // 0x18d530: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D530u;
    {
        const bool branch_taken_0x18d530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d530) {
            ctx->pc = 0x18D580u;
            goto label_18d580;
        }
    }
    ctx->pc = 0x18D538u;
    // 0x18d538: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x18d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x18d53c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D53Cu;
    {
        const bool branch_taken_0x18d53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D53Cu;
            // 0x18d540: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d53c) {
            ctx->pc = 0x18D580u;
            goto label_18d580;
        }
    }
    ctx->pc = 0x18D544u;
    // 0x18d544: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x18D544u;
    SET_GPR_U32(ctx, 31, 0x18D54Cu);
    ctx->pc = 0x15BD00u;
    if (runtime->hasFunction(0x15BD00u)) {
        auto targetFn = runtime->lookupFunction(0x15BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D54Cu; }
        if (ctx->pc != 0x18D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isCutin_0x15bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D54Cu; }
        if (ctx->pc != 0x18D54Cu) { return; }
    }
    ctx->pc = 0x18D54Cu;
    // 0x18d54c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18D54Cu;
    {
        const bool branch_taken_0x18d54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d54c) {
            ctx->pc = 0x18D580u;
            goto label_18d580;
        }
    }
    ctx->pc = 0x18D554u;
    // 0x18d554: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x18d554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x18d558: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x18d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x18d55c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d560: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18d560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d564: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x18d564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18d568: 0xae4500b0  sw          $a1, 0xB0($s2)
    ctx->pc = 0x18d568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 5));
    // 0x18d56c: 0xae4300bc  sw          $v1, 0xBC($s2)
    ctx->pc = 0x18d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 3));
    // 0x18d570: 0xc056f54  jal         func_15BD50
    ctx->pc = 0x18D570u;
    SET_GPR_U32(ctx, 31, 0x18D578u);
    ctx->pc = 0x18D574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D570u;
            // 0x18d574: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BD50u;
    if (runtime->hasFunction(0x15BD50u)) {
        auto targetFn = runtime->lookupFunction(0x15BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D578u; }
        if (ctx->pc != 0x18D578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCutinStart_0x15bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D578u; }
        if (ctx->pc != 0x18D578u) { return; }
    }
    ctx->pc = 0x18D578u;
    // 0x18d578: 0xc053e24  jal         func_14F890
    ctx->pc = 0x18D578u;
    SET_GPR_U32(ctx, 31, 0x18D580u);
    ctx->pc = 0x18D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D578u;
            // 0x18d57c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F890u;
    if (runtime->hasFunction(0x14F890u)) {
        auto targetFn = runtime->lookupFunction(0x14F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D580u; }
        if (ctx->pc != 0x18D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CutInVertexInit_0x14f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D580u; }
        if (ctx->pc != 0x18D580u) { return; }
    }
    ctx->pc = 0x18D580u;
label_18d580:
    // 0x18d580: 0xc056f38  jal         func_15BCE0
    ctx->pc = 0x18D580u;
    SET_GPR_U32(ctx, 31, 0x18D588u);
    ctx->pc = 0x18D584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D580u;
            // 0x18d584: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BCE0u;
    if (runtime->hasFunction(0x15BCE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D588u; }
        if (ctx->pc != 0x18D588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isWeaponStart_0x15bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D588u; }
        if (ctx->pc != 0x18D588u) { return; }
    }
    ctx->pc = 0x18D588u;
    // 0x18d588: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D588u;
    {
        const bool branch_taken_0x18d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D588u;
            // 0x18d58c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d588) {
            ctx->pc = 0x18D5B0u;
            goto label_18d5b0;
        }
    }
    ctx->pc = 0x18D590u;
    // 0x18d590: 0xc056f38  jal         func_15BCE0
    ctx->pc = 0x18D590u;
    SET_GPR_U32(ctx, 31, 0x18D598u);
    ctx->pc = 0x15BCE0u;
    if (runtime->hasFunction(0x15BCE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D598u; }
        if (ctx->pc != 0x18D598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isWeaponStart_0x15bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D598u; }
        if (ctx->pc != 0x18D598u) { return; }
    }
    ctx->pc = 0x18D598u;
    // 0x18d598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D598u;
    {
        const bool branch_taken_0x18d598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D598u;
            // 0x18d59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d598) {
            ctx->pc = 0x18D5B0u;
            goto label_18d5b0;
        }
    }
    ctx->pc = 0x18D5A0u;
    // 0x18d5a0: 0xc054b5c  jal         func_152D70
    ctx->pc = 0x18D5A0u;
    SET_GPR_U32(ctx, 31, 0x18D5A8u);
    ctx->pc = 0x152D70u;
    if (runtime->hasFunction(0x152D70u)) {
        auto targetFn = runtime->lookupFunction(0x152D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5A8u; }
        if (ctx->pc != 0x18D5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWeapon_Super_0x152d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5A8u; }
        if (ctx->pc != 0x18D5A8u) { return; }
    }
    ctx->pc = 0x18D5A8u;
    // 0x18d5a8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18D5A8u;
    {
        const bool branch_taken_0x18d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5a8) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D5B0u;
label_18d5b0:
    // 0x18d5b0: 0xc056f38  jal         func_15BCE0
    ctx->pc = 0x18D5B0u;
    SET_GPR_U32(ctx, 31, 0x18D5B8u);
    ctx->pc = 0x18D5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5B0u;
            // 0x18d5b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BCE0u;
    if (runtime->hasFunction(0x15BCE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5B8u; }
        if (ctx->pc != 0x18D5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isWeaponStart_0x15bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D5B8u; }
        if (ctx->pc != 0x18D5B8u) { return; }
    }
    ctx->pc = 0x18D5B8u;
    // 0x18d5b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18D5B8u;
    {
        const bool branch_taken_0x18d5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5b8) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D5C0u;
    // 0x18d5c0: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x18d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x18d5c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d5c8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x18D5C8u;
    {
        const bool branch_taken_0x18d5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18D5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5C8u;
            // 0x18d5cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5c8) {
            ctx->pc = 0x18D610u;
            goto label_18d610;
        }
    }
    ctx->pc = 0x18D5D0u;
    // 0x18d5d0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18D5D0u;
    {
        const bool branch_taken_0x18d5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d5d0) {
            ctx->pc = 0x18D5F8u;
            goto label_18d5f8;
        }
    }
    ctx->pc = 0x18D5D8u;
    // 0x18d5d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D5D8u;
    {
        const bool branch_taken_0x18d5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5d8) {
            ctx->pc = 0x18D5E8u;
            goto label_18d5e8;
        }
    }
    ctx->pc = 0x18D5E0u;
    // 0x18d5e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18D5E0u;
    {
        const bool branch_taken_0x18d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d5e0) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D5E8u;
label_18d5e8:
    // 0x18d5e8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x18d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x18d5ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18D5ECu;
    {
        const bool branch_taken_0x18d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5ECu;
            // 0x18d5f0: 0xae4300c0  sw          $v1, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d5ec) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D5F4u;
    // 0x18d5f4: 0x0  nop
    ctx->pc = 0x18d5f4u;
    // NOP
label_18d5f8:
    // 0x18d5f8: 0xc053f20  jal         func_14FC80
    ctx->pc = 0x18D5F8u;
    SET_GPR_U32(ctx, 31, 0x18D600u);
    ctx->pc = 0x18D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D5F8u;
            // 0x18d5fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC80u;
    if (runtime->hasFunction(0x14FC80u)) {
        auto targetFn = runtime->lookupFunction(0x14FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D600u; }
        if (ctx->pc != 0x18D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserDel_0x14fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D600u; }
        if (ctx->pc != 0x18D600u) { return; }
    }
    ctx->pc = 0x18D600u;
    // 0x18d600: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d604: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D604u;
    {
        const bool branch_taken_0x18d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D604u;
            // 0x18d608: 0xae4300c0  sw          $v1, 0xC0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d604) {
            ctx->pc = 0x18D620u;
            goto label_18d620;
        }
    }
    ctx->pc = 0x18D60Cu;
    // 0x18d60c: 0x0  nop
    ctx->pc = 0x18d60cu;
    // NOP
label_18d610:
    // 0x18d610: 0xc053f20  jal         func_14FC80
    ctx->pc = 0x18D610u;
    SET_GPR_U32(ctx, 31, 0x18D618u);
    ctx->pc = 0x18D614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D610u;
            // 0x18d614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC80u;
    if (runtime->hasFunction(0x14FC80u)) {
        auto targetFn = runtime->lookupFunction(0x14FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D618u; }
        if (ctx->pc != 0x18D618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotLaserDel_0x14fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D618u; }
        if (ctx->pc != 0x18D618u) { return; }
    }
    ctx->pc = 0x18D618u;
    // 0x18d618: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x18d618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x18d61c: 0xae4300c0  sw          $v1, 0xC0($s2)
    ctx->pc = 0x18d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
label_18d620:
    // 0x18d620: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d624: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18d624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d628: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d62c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18d62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18d630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d638: 0x3e00008  jr          $ra
    ctx->pc = 0x18D638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D638u;
            // 0x18d63c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B238u: goto label_18b238;
            case 0x18B290u: goto label_18b290;
            case 0x18B2B8u: goto label_18b2b8;
            case 0x18B2F8u: goto label_18b2f8;
            case 0x18B318u: goto label_18b318;
            case 0x18B350u: goto label_18b350;
            case 0x18B388u: goto label_18b388;
            case 0x18B3C0u: goto label_18b3c0;
            case 0x18B3F8u: goto label_18b3f8;
            case 0x18B430u: goto label_18b430;
            case 0x18B468u: goto label_18b468;
            case 0x18B4C8u: goto label_18b4c8;
            case 0x18B530u: goto label_18b530;
            case 0x18B550u: goto label_18b550;
            case 0x18B578u: goto label_18b578;
            case 0x18B580u: goto label_18b580;
            case 0x18B5D8u: goto label_18b5d8;
            case 0x18B5F8u: goto label_18b5f8;
            case 0x18B620u: goto label_18b620;
            case 0x18B628u: goto label_18b628;
            case 0x18B660u: goto label_18b660;
            case 0x18B698u: goto label_18b698;
            case 0x18B6D0u: goto label_18b6d0;
            case 0x18B708u: goto label_18b708;
            case 0x18B740u: goto label_18b740;
            case 0x18B778u: goto label_18b778;
            case 0x18B7D8u: goto label_18b7d8;
            case 0x18B838u: goto label_18b838;
            case 0x18B888u: goto label_18b888;
            case 0x18B8C0u: goto label_18b8c0;
            case 0x18B8D0u: goto label_18b8d0;
            case 0x18B8E8u: goto label_18b8e8;
            case 0x18B948u: goto label_18b948;
            case 0x18B980u: goto label_18b980;
            case 0x18B9A0u: goto label_18b9a0;
            case 0x18B9A8u: goto label_18b9a8;
            case 0x18BA18u: goto label_18ba18;
            case 0x18BA68u: goto label_18ba68;
            case 0x18BA98u: goto label_18ba98;
            case 0x18BAB0u: goto label_18bab0;
            case 0x18BB30u: goto label_18bb30;
            case 0x18BBA0u: goto label_18bba0;
            case 0x18BBF8u: goto label_18bbf8;
            case 0x18BCC8u: goto label_18bcc8;
            case 0x18C028u: goto label_18c028;
            case 0x18C388u: goto label_18c388;
            case 0x18C3E0u: goto label_18c3e0;
            case 0x18C400u: goto label_18c400;
            case 0x18C448u: goto label_18c448;
            case 0x18C468u: goto label_18c468;
            case 0x18C470u: goto label_18c470;
            case 0x18C488u: goto label_18c488;
            case 0x18C490u: goto label_18c490;
            case 0x18C4C8u: goto label_18c4c8;
            case 0x18C500u: goto label_18c500;
            case 0x18C538u: goto label_18c538;
            case 0x18C560u: goto label_18c560;
            case 0x18C5B0u: goto label_18c5b0;
            case 0x18C5F0u: goto label_18c5f0;
            case 0x18C640u: goto label_18c640;
            case 0x18C690u: goto label_18c690;
            case 0x18C6C8u: goto label_18c6c8;
            case 0x18C700u: goto label_18c700;
            case 0x18C708u: goto label_18c708;
            case 0x18C730u: goto label_18c730;
            case 0x18C768u: goto label_18c768;
            case 0x18C7A0u: goto label_18c7a0;
            case 0x18C7C8u: goto label_18c7c8;
            case 0x18C818u: goto label_18c818;
            case 0x18C858u: goto label_18c858;
            case 0x18C8A8u: goto label_18c8a8;
            case 0x18C8F8u: goto label_18c8f8;
            case 0x18C930u: goto label_18c930;
            case 0x18C968u: goto label_18c968;
            case 0x18C970u: goto label_18c970;
            case 0x18C9E0u: goto label_18c9e0;
            case 0x18CA38u: goto label_18ca38;
            case 0x18CA58u: goto label_18ca58;
            case 0x18CA78u: goto label_18ca78;
            case 0x18CA98u: goto label_18ca98;
            case 0x18CAB8u: goto label_18cab8;
            case 0x18CD20u: goto label_18cd20;
            case 0x18CDC8u: goto label_18cdc8;
            case 0x18CDE0u: goto label_18cde0;
            case 0x18CE00u: goto label_18ce00;
            case 0x18CE38u: goto label_18ce38;
            case 0x18CE58u: goto label_18ce58;
            case 0x18CE98u: goto label_18ce98;
            case 0x18CED0u: goto label_18ced0;
            case 0x18CEF0u: goto label_18cef0;
            case 0x18CF30u: goto label_18cf30;
            case 0x18CF68u: goto label_18cf68;
            case 0x18CF90u: goto label_18cf90;
            case 0x18CFD8u: goto label_18cfd8;
            case 0x18D028u: goto label_18d028;
            case 0x18D058u: goto label_18d058;
            case 0x18D090u: goto label_18d090;
            case 0x18D0E0u: goto label_18d0e0;
            case 0x18D0F8u: goto label_18d0f8;
            case 0x18D108u: goto label_18d108;
            case 0x18D160u: goto label_18d160;
            case 0x18D190u: goto label_18d190;
            case 0x18D1C8u: goto label_18d1c8;
            case 0x18D1D8u: goto label_18d1d8;
            case 0x18D1F0u: goto label_18d1f0;
            case 0x18D208u: goto label_18d208;
            case 0x18D220u: goto label_18d220;
            case 0x18D258u: goto label_18d258;
            case 0x18D278u: goto label_18d278;
            case 0x18D2B8u: goto label_18d2b8;
            case 0x18D2F0u: goto label_18d2f0;
            case 0x18D310u: goto label_18d310;
            case 0x18D350u: goto label_18d350;
            case 0x18D388u: goto label_18d388;
            case 0x18D3B0u: goto label_18d3b0;
            case 0x18D3F8u: goto label_18d3f8;
            case 0x18D448u: goto label_18d448;
            case 0x18D478u: goto label_18d478;
            case 0x18D4B0u: goto label_18d4b0;
            case 0x18D500u: goto label_18d500;
            case 0x18D518u: goto label_18d518;
            case 0x18D528u: goto label_18d528;
            case 0x18D580u: goto label_18d580;
            case 0x18D5B0u: goto label_18d5b0;
            case 0x18D5E8u: goto label_18d5e8;
            case 0x18D5F8u: goto label_18d5f8;
            case 0x18D610u: goto label_18d610;
            case 0x18D620u: goto label_18d620;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D640u;
}
