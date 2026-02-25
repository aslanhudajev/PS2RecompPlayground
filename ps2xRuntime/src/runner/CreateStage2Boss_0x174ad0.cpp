#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage2Boss
// Address: 0x174ad0 - 0x174f3c
void CreateStage2Boss_0x174ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage2Boss_0x174ad0");
#endif

    ctx->pc = 0x174ad0u;

    // 0x174ad0: 0x27bdf9b0  addiu       $sp, $sp, -0x650
    ctx->pc = 0x174ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965680));
    // 0x174ad4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x174ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x174ad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174adc: 0x2442a068  addiu       $v0, $v0, -0x5F98
    ctx->pc = 0x174adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942824));
    // 0x174ae0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174ae4: 0x27a30648  addiu       $v1, $sp, 0x648
    ctx->pc = 0x174ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1608));
    // 0x174ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174aec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x174aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x174af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174af8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x174af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174afc: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x174afcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b00: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x174b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b04: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x174B04u;
    SET_GPR_U32(ctx, 31, 0x174B0Cu);
    ctx->pc = 0x174B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B04u;
            // 0x174b08: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B0Cu; }
        if (ctx->pc != 0x174B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B0Cu; }
        if (ctx->pc != 0x174B0Cu) { return; }
    }
    ctx->pc = 0x174B0Cu;
    // 0x174b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174b14: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x174B14u;
    SET_GPR_U32(ctx, 31, 0x174B1Cu);
    ctx->pc = 0x174B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B14u;
            // 0x174b18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B1Cu; }
        if (ctx->pc != 0x174B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B1Cu; }
        if (ctx->pc != 0x174B1Cu) { return; }
    }
    ctx->pc = 0x174B1Cu;
    // 0x174b1c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x174b20: 0x27b20510  addiu       $s2, $sp, 0x510
    ctx->pc = 0x174b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x174b24: 0x24424f70  addiu       $v0, $v0, 0x4F70
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20336));
    // 0x174b28: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x174b2c: 0xae4200f0  sw          $v0, 0xF0($s2)
    ctx->pc = 0x174b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 2));
    // 0x174b30: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x174b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x174b34: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x174b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
    // 0x174b38: 0xae4200f4  sw          $v0, 0xF4($s2)
    ctx->pc = 0x174b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 2));
    // 0x174b3c: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x174b40: 0x2442cf70  addiu       $v0, $v0, -0x3090
    ctx->pc = 0x174b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954864));
    // 0x174b44: 0xae4200f8  sw          $v0, 0xF8($s2)
    ctx->pc = 0x174b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 2));
    // 0x174b48: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x174b4c: 0x24424f40  addiu       $v0, $v0, 0x4F40
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20288));
    // 0x174b50: 0xae4200fc  sw          $v0, 0xFC($s2)
    ctx->pc = 0x174b50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 2));
    // 0x174b54: 0xc060694  jal         func_181A50
    ctx->pc = 0x174B54u;
    SET_GPR_U32(ctx, 31, 0x174B5Cu);
    ctx->pc = 0x174B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B54u;
            // 0x174b58: 0xae400100  sw          $zero, 0x100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B5Cu; }
        if (ctx->pc != 0x174B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B5Cu; }
        if (ctx->pc != 0x174B5Cu) { return; }
    }
    ctx->pc = 0x174B5Cu;
    // 0x174b5c: 0xc060544  jal         func_181510
    ctx->pc = 0x174B5Cu;
    SET_GPR_U32(ctx, 31, 0x174B64u);
    ctx->pc = 0x174B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B5Cu;
            // 0x174b60: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B64u; }
        if (ctx->pc != 0x174B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B64u; }
        if (ctx->pc != 0x174B64u) { return; }
    }
    ctx->pc = 0x174B64u;
    // 0x174b64: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x174b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x174b68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x174b6c: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x174b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174b70: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x174b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x174b74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x174b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b7c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x174b7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174b80: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x174b80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174b84: 0x0  nop
    ctx->pc = 0x174b84u;
    // NOP
    // 0x174b88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174b8c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x174b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x174b90: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x174b94: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x174b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x174b98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174b98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174b9c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x174b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x174ba0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x174ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x174ba4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174ba8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x174ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x174bac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174bb0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x174bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174bb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174bb8: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x174bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x174bbc: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x174bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x174bc0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x174bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x174bc4: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x174bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x174bc8: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x174bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x174bcc: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x174bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x174bd0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x174BD0u;
    SET_GPR_U32(ctx, 31, 0x174BD8u);
    ctx->pc = 0x174BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174BD0u;
            // 0x174bd4: 0xae4000e8  sw          $zero, 0xE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD8u; }
        if (ctx->pc != 0x174BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BD8u; }
        if (ctx->pc != 0x174BD8u) { return; }
    }
    ctx->pc = 0x174BD8u;
    // 0x174bd8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x174bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x174bdc: 0x27b203e0  addiu       $s2, $sp, 0x3E0
    ctx->pc = 0x174bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x174be0: 0x24634f70  addiu       $v1, $v1, 0x4F70
    ctx->pc = 0x174be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20336));
    // 0x174be4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x174be8: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x174be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x174bec: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x174becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x174bf0: 0x246361f0  addiu       $v1, $v1, 0x61F0
    ctx->pc = 0x174bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25072));
    // 0x174bf4: 0xae4300f4  sw          $v1, 0xF4($s2)
    ctx->pc = 0x174bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 3));
    // 0x174bf8: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x174bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x174bfc: 0x2463cf70  addiu       $v1, $v1, -0x3090
    ctx->pc = 0x174bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954864));
    // 0x174c00: 0xae4300f8  sw          $v1, 0xF8($s2)
    ctx->pc = 0x174c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 3));
    // 0x174c04: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x174c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x174c08: 0x24634f40  addiu       $v1, $v1, 0x4F40
    ctx->pc = 0x174c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20288));
    // 0x174c0c: 0xae4300fc  sw          $v1, 0xFC($s2)
    ctx->pc = 0x174c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 3));
    // 0x174c10: 0xc060694  jal         func_181A50
    ctx->pc = 0x174C10u;
    SET_GPR_U32(ctx, 31, 0x174C18u);
    ctx->pc = 0x174C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C10u;
            // 0x174c14: 0xae420100  sw          $v0, 0x100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C18u; }
        if (ctx->pc != 0x174C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C18u; }
        if (ctx->pc != 0x174C18u) { return; }
    }
    ctx->pc = 0x174C18u;
    // 0x174c18: 0xc060544  jal         func_181510
    ctx->pc = 0x174C18u;
    SET_GPR_U32(ctx, 31, 0x174C20u);
    ctx->pc = 0x174C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C18u;
            // 0x174c1c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C20u; }
        if (ctx->pc != 0x174C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C20u; }
        if (ctx->pc != 0x174C20u) { return; }
    }
    ctx->pc = 0x174C20u;
    // 0x174c20: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x174c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x174c24: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x174c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x174c28: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x174c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174c2c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x174c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x174c30: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x174c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c38: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x174c38u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174c3c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x174c3cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174c40: 0x0  nop
    ctx->pc = 0x174c40u;
    // NOP
    // 0x174c44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174c48: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x174c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x174c4c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174c4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x174c50: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x174c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x174c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174c58: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x174c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x174c5c: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x174c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x174c60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174c64: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x174c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x174c68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174c6c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x174c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174c70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174c74: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x174c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x174c78: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x174c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x174c7c: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x174c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x174c80: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x174c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x174c84: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x174c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x174c88: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x174c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x174c8c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x174C8Cu;
    SET_GPR_U32(ctx, 31, 0x174C94u);
    ctx->pc = 0x174C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174C8Cu;
            // 0x174c90: 0xae4000e8  sw          $zero, 0xE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C94u; }
        if (ctx->pc != 0x174C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174C94u; }
        if (ctx->pc != 0x174C94u) { return; }
    }
    ctx->pc = 0x174C94u;
    // 0x174c94: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x174c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x174c98: 0x27b202b0  addiu       $s2, $sp, 0x2B0
    ctx->pc = 0x174c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x174c9c: 0x24634f70  addiu       $v1, $v1, 0x4F70
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20336));
    // 0x174ca0: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x174ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x174ca4: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x174ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x174ca8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x174ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x174cac: 0x24636d30  addiu       $v1, $v1, 0x6D30
    ctx->pc = 0x174cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27952));
    // 0x174cb0: 0xae4300f4  sw          $v1, 0xF4($s2)
    ctx->pc = 0x174cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 3));
    // 0x174cb4: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x174cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x174cb8: 0x2463cf70  addiu       $v1, $v1, -0x3090
    ctx->pc = 0x174cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954864));
    // 0x174cbc: 0xae4300f8  sw          $v1, 0xF8($s2)
    ctx->pc = 0x174cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 3));
    // 0x174cc0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x174cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x174cc4: 0x24634f40  addiu       $v1, $v1, 0x4F40
    ctx->pc = 0x174cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20288));
    // 0x174cc8: 0xae4300fc  sw          $v1, 0xFC($s2)
    ctx->pc = 0x174cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 3));
    // 0x174ccc: 0xc060694  jal         func_181A50
    ctx->pc = 0x174CCCu;
    SET_GPR_U32(ctx, 31, 0x174CD4u);
    ctx->pc = 0x174CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CCCu;
            // 0x174cd0: 0xae420100  sw          $v0, 0x100($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CD4u; }
        if (ctx->pc != 0x174CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CD4u; }
        if (ctx->pc != 0x174CD4u) { return; }
    }
    ctx->pc = 0x174CD4u;
    // 0x174cd4: 0xc060544  jal         func_181510
    ctx->pc = 0x174CD4u;
    SET_GPR_U32(ctx, 31, 0x174CDCu);
    ctx->pc = 0x174CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CD4u;
            // 0x174cd8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CDCu; }
        if (ctx->pc != 0x174CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CDCu; }
        if (ctx->pc != 0x174CDCu) { return; }
    }
    ctx->pc = 0x174CDCu;
    // 0x174cdc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x174cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x174ce0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x174ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x174ce4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x174ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174ce8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x174ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x174cec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x174cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174cf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cf4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x174cf4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174cf8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x174cf8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174cfc: 0x0  nop
    ctx->pc = 0x174cfcu;
    // NOP
    // 0x174d00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174d04: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x174d04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x174d08: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174d08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x174d0c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x174d0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x174d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174d14: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x174d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x174d18: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x174d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x174d1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174d20: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x174d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x174d24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174d28: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x174d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174d2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x174d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174d30: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x174d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x174d34: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x174d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x174d38: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x174d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x174d3c: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x174d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x174d40: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x174d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x174d44: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x174d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x174d48: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x174D48u;
    SET_GPR_U32(ctx, 31, 0x174D50u);
    ctx->pc = 0x174D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D48u;
            // 0x174d4c: 0xae4000e8  sw          $zero, 0xE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D50u; }
        if (ctx->pc != 0x174D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D50u; }
        if (ctx->pc != 0x174D50u) { return; }
    }
    ctx->pc = 0x174D50u;
    // 0x174d50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x174d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d54: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x174d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x174d58: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x174d5c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x174D5Cu;
    SET_GPR_U32(ctx, 31, 0x174D64u);
    ctx->pc = 0x174D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D5Cu;
            // 0x174d60: 0xdfa50648  ld          $a1, 0x648($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D64u; }
        if (ctx->pc != 0x174D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D64u; }
        if (ctx->pc != 0x174D64u) { return; }
    }
    ctx->pc = 0x174D64u;
    // 0x174d64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d68: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x174D68u;
    SET_GPR_U32(ctx, 31, 0x174D70u);
    ctx->pc = 0x174D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D68u;
            // 0x174d6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D70u; }
        if (ctx->pc != 0x174D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D70u; }
        if (ctx->pc != 0x174D70u) { return; }
    }
    ctx->pc = 0x174D70u;
    // 0x174d70: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x174d74: 0x27b30180  addiu       $s3, $sp, 0x180
    ctx->pc = 0x174d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x174d78: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x174d78u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x174d7c: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x174d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x174d80: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x174d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x174d84: 0x24634f70  addiu       $v1, $v1, 0x4F70
    ctx->pc = 0x174d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20336));
    // 0x174d88: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x174d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x174d8c: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x174d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
    // 0x174d90: 0x24427500  addiu       $v0, $v0, 0x7500
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x174d94: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x174d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x174d98: 0xae6200f4  sw          $v0, 0xF4($s3)
    ctx->pc = 0x174d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 2));
    // 0x174d9c: 0x2463cf70  addiu       $v1, $v1, -0x3090
    ctx->pc = 0x174d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954864));
    // 0x174da0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x174da4: 0x24424f40  addiu       $v0, $v0, 0x4F40
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20288));
    // 0x174da8: 0xae6300f8  sw          $v1, 0xF8($s3)
    ctx->pc = 0x174da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 3));
    // 0x174dac: 0xae6200fc  sw          $v0, 0xFC($s3)
    ctx->pc = 0x174dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 2));
    // 0x174db0: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x174db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x174db4: 0xc060694  jal         func_181A50
    ctx->pc = 0x174DB4u;
    SET_GPR_U32(ctx, 31, 0x174DBCu);
    ctx->pc = 0x174DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174DB4u;
            // 0x174db8: 0xae720100  sw          $s2, 0x100($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DBCu; }
        if (ctx->pc != 0x174DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DBCu; }
        if (ctx->pc != 0x174DBCu) { return; }
    }
    ctx->pc = 0x174DBCu;
    // 0x174dbc: 0xc060544  jal         func_181510
    ctx->pc = 0x174DBCu;
    SET_GPR_U32(ctx, 31, 0x174DC4u);
    ctx->pc = 0x174DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174DBCu;
            // 0x174dc0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC4u; }
        if (ctx->pc != 0x174DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC4u; }
        if (ctx->pc != 0x174DC4u) { return; }
    }
    ctx->pc = 0x174DC4u;
    // 0x174dc4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x174dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x174dc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x174dcc: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x174dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174dd0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x174dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x174dd4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x174dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174dd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ddc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x174ddcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174de0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x174de0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174de4: 0x0  nop
    ctx->pc = 0x174de4u;
    // NOP
    // 0x174de8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174dec: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x174decu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x174df0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174df0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x174df4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x174df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x174df8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174df8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174dfc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x174dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x174e00: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x174e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x174e04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x174e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x174e08: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x174e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x174e0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x174e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x174e10: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x174e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174e14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x174e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x174e18: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x174e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x174e1c: 0xae6000d0  sw          $zero, 0xD0($s3)
    ctx->pc = 0x174e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
    // 0x174e20: 0xae6000d4  sw          $zero, 0xD4($s3)
    ctx->pc = 0x174e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
    // 0x174e24: 0xae6000d8  sw          $zero, 0xD8($s3)
    ctx->pc = 0x174e24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 0));
    // 0x174e28: 0xae6000e4  sw          $zero, 0xE4($s3)
    ctx->pc = 0x174e28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 0));
    // 0x174e2c: 0xae6000e0  sw          $zero, 0xE0($s3)
    ctx->pc = 0x174e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 0));
    // 0x174e30: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x174E30u;
    SET_GPR_U32(ctx, 31, 0x174E38u);
    ctx->pc = 0x174E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E30u;
            // 0x174e34: 0xae6000e8  sw          $zero, 0xE8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E38u; }
        if (ctx->pc != 0x174E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E38u; }
        if (ctx->pc != 0x174E38u) { return; }
    }
    ctx->pc = 0x174E38u;
    // 0x174e38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x174e38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x174e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x174e40: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x174e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x174e44: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x174E44u;
    SET_GPR_U32(ctx, 31, 0x174E4Cu);
    ctx->pc = 0x174E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E44u;
            // 0x174e48: 0xdfa50648  ld          $a1, 0x648($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E4Cu; }
        if (ctx->pc != 0x174E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E4Cu; }
        if (ctx->pc != 0x174E4Cu) { return; }
    }
    ctx->pc = 0x174E4Cu;
    // 0x174e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e50: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x174E50u;
    SET_GPR_U32(ctx, 31, 0x174E58u);
    ctx->pc = 0x174E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E50u;
            // 0x174e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E58u; }
        if (ctx->pc != 0x174E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E58u; }
        if (ctx->pc != 0x174E58u) { return; }
    }
    ctx->pc = 0x174E58u;
    // 0x174e58: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x174e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x174e5c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x174e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x174e60: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x174e60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x174e64: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x174e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x174e68: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x174e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x174e6c: 0x24847cc0  addiu       $a0, $a0, 0x7CC0
    ctx->pc = 0x174e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31936));
    // 0x174e70: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x174e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x174e74: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x174e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x174e78: 0x24a54f70  addiu       $a1, $a1, 0x4F70
    ctx->pc = 0x174e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20336));
    // 0x174e7c: 0x2463cf80  addiu       $v1, $v1, -0x3080
    ctx->pc = 0x174e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954880));
    // 0x174e80: 0x24424f40  addiu       $v0, $v0, 0x4F40
    ctx->pc = 0x174e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20288));
    // 0x174e84: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x174e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
    // 0x174e88: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x174e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x174e8c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x174e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x174e90: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x174e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x174e94: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x174e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x174e98: 0xc060694  jal         func_181A50
    ctx->pc = 0x174E98u;
    SET_GPR_U32(ctx, 31, 0x174EA0u);
    ctx->pc = 0x174E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E98u;
            // 0x174e9c: 0xafb20150  sw          $s2, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EA0u; }
        if (ctx->pc != 0x174EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EA0u; }
        if (ctx->pc != 0x174EA0u) { return; }
    }
    ctx->pc = 0x174EA0u;
    // 0x174ea0: 0xc060544  jal         func_181510
    ctx->pc = 0x174EA0u;
    SET_GPR_U32(ctx, 31, 0x174EA8u);
    ctx->pc = 0x174EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174EA0u;
            // 0x174ea4: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EA8u; }
        if (ctx->pc != 0x174EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174EA8u; }
        if (ctx->pc != 0x174EA8u) { return; }
    }
    ctx->pc = 0x174EA8u;
    // 0x174ea8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x174ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x174eac: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x174eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x174eb0: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x174eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174eb4: 0x3c05457a  lui         $a1, 0x457A
    ctx->pc = 0x174eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17786 << 16));
    // 0x174eb8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x174eb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x174ebc: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x174ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x174ec0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x174ec0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174ec4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x174ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174ec8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x174ec8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174ecc: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x174eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x174ed0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x174ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x174ed4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x174ed4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x174ed8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174edc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x174edcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x174ee0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174ee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x174ee4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x174ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x174ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174eec: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x174eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x174ef0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x174ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x174ef4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x174ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174ef8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x174ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x174efc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x174efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174f00: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x174f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x174f04: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x174f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x174f08: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x174f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x174f0c: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x174f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x174f10: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x174f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x174f14: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x174f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x174f18: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x174F18u;
    SET_GPR_U32(ctx, 31, 0x174F20u);
    ctx->pc = 0x174F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F18u;
            // 0x174f1c: 0xafa00138  sw          $zero, 0x138($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F20u; }
        if (ctx->pc != 0x174F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F20u; }
        if (ctx->pc != 0x174F20u) { return; }
    }
    ctx->pc = 0x174F20u;
    // 0x174f20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174f34: 0x3e00008  jr          $ra
    ctx->pc = 0x174F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F34u;
            // 0x174f38: 0x27bd0650  addiu       $sp, $sp, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174F3Cu;
}
