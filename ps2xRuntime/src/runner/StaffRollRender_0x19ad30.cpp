#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StaffRollRender
// Address: 0x19ad30 - 0x19ae84
void StaffRollRender_0x19ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StaffRollRender_0x19ad30");
#endif

    ctx->pc = 0x19ad30u;

    // 0x19ad30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19ad34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19ad34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19ad38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19ad3c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19ad3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19ad40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19ad40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19ad44: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19ad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19ad48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19ad4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19ad50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19ad54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ad54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ad58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ad5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ad60: 0x8c233540  lw          $v1, 0x3540($at)
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x19ad64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AD64u;
    {
        const bool branch_taken_0x19ad64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD64u;
            // 0x19ad68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad64) {
            ctx->pc = 0x19AD78u;
            goto label_19ad78;
        }
    }
    ctx->pc = 0x19AD6Cu;
    // 0x19ad6c: 0xc065e08  jal         func_197820
    ctx->pc = 0x19AD6Cu;
    SET_GPR_U32(ctx, 31, 0x19AD74u);
    ctx->pc = 0x197820u;
    if (runtime->hasFunction(0x197820u)) {
        auto targetFn = runtime->lookupFunction(0x197820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD74u; }
        if (ctx->pc != 0x19AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameEntry_0x197820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD74u; }
        if (ctx->pc != 0x19AD74u) { return; }
    }
    ctx->pc = 0x19AD74u;
    // 0x19ad74: 0x0  nop
    ctx->pc = 0x19ad74u;
    // NOP
label_19ad78:
    // 0x19ad78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19ad7c: 0x8c233544  lw          $v1, 0x3544($at)
    ctx->pc = 0x19ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13636)));
    // 0x19ad80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AD80u;
    {
        const bool branch_taken_0x19ad80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD80u;
            // 0x19ad84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad80) {
            ctx->pc = 0x19AD90u;
            goto label_19ad90;
        }
    }
    ctx->pc = 0x19AD88u;
    // 0x19ad88: 0xc065e08  jal         func_197820
    ctx->pc = 0x19AD88u;
    SET_GPR_U32(ctx, 31, 0x19AD90u);
    ctx->pc = 0x197820u;
    if (runtime->hasFunction(0x197820u)) {
        auto targetFn = runtime->lookupFunction(0x197820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD90u; }
        if (ctx->pc != 0x19AD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameEntry_0x197820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD90u; }
        if (ctx->pc != 0x19AD90u) { return; }
    }
    ctx->pc = 0x19AD90u;
label_19ad90:
    // 0x19ad90: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x19ad90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x19ad94: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x19ad94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x19ad98: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x19ad9c: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x19ad9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x19ada0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19ada0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ada4: 0x26941a00  addiu       $s4, $s4, 0x1A00
    ctx->pc = 0x19ada4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6656));
    // 0x19ada8: 0x26731960  addiu       $s3, $s3, 0x1960
    ctx->pc = 0x19ada8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6496));
    // 0x19adac: 0x26521980  addiu       $s2, $s2, 0x1980
    ctx->pc = 0x19adacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6528));
    // 0x19adb0: 0x2631a900  addiu       $s1, $s1, -0x5700
    ctx->pc = 0x19adb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945024));
    // 0x19adb4: 0x27b000a4  addiu       $s0, $sp, 0xA4
    ctx->pc = 0x19adb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x19adb8: 0x27b600ac  addiu       $s6, $sp, 0xAC
    ctx->pc = 0x19adb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x19adbc: 0x27b700a8  addiu       $s7, $sp, 0xA8
    ctx->pc = 0x19adbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x19adc0: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x19adc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19adc4: 0x0  nop
    ctx->pc = 0x19adc4u;
    // NOP
label_19adc8:
    // 0x19adc8: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x19adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x19adcc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x19adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19add0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19add0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19add4: 0x0  nop
    ctx->pc = 0x19add4u;
    // NOP
    // 0x19add8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19add8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19addc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x19ADDCu;
    {
        const bool branch_taken_0x19addc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19ADE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADDCu;
            // 0x19ade0: 0x3c03c428  lui         $v1, 0xC428 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50216 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19addc) {
            ctx->pc = 0x19AE38u;
            goto label_19ae38;
        }
    }
    ctx->pc = 0x19ADE4u;
    // 0x19ade4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ade4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ade8: 0x0  nop
    ctx->pc = 0x19ade8u;
    // NOP
    // 0x19adec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19adecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19adf0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x19ADF0u;
    {
        const bool branch_taken_0x19adf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19adf0) {
            ctx->pc = 0x19AE38u;
            goto label_19ae38;
        }
    }
    ctx->pc = 0x19ADF8u;
    // 0x19adf8: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x19adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x19adfc: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x19adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    // 0x19ae00: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x19ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
    // 0x19ae04: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x19AE04u;
    SET_GPR_U32(ctx, 31, 0x19AE0Cu);
    ctx->pc = 0x19AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE04u;
            // 0x19ae08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE0Cu; }
        if (ctx->pc != 0x19AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE0Cu; }
        if (ctx->pc != 0x19AE0Cu) { return; }
    }
    ctx->pc = 0x19AE0Cu;
    // 0x19ae0c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x19ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x19ae10: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19ae14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ae18: 0xc066ba8  jal         func_19AEA0
    ctx->pc = 0x19AE18u;
    SET_GPR_U32(ctx, 31, 0x19AE20u);
    ctx->pc = 0x19AE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE18u;
            // 0x19ae1c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AEA0u;
    if (runtime->hasFunction(0x19AEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19AEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE20u; }
        if (ctx->pc != 0x19AE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x19aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE20u; }
        if (ctx->pc != 0x19AE20u) { return; }
    }
    ctx->pc = 0x19AE20u;
    // 0x19ae20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x19ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19ae24: 0xc066ba4  jal         func_19AE90
    ctx->pc = 0x19AE24u;
    SET_GPR_U32(ctx, 31, 0x19AE2Cu);
    ctx->pc = 0x19AE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE24u;
            // 0x19ae28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AE90u;
    if (runtime->hasFunction(0x19AE90u)) {
        auto targetFn = runtime->lookupFunction(0x19AE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE2Cu; }
        if (ctx->pc != 0x19AE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x19ae90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE2Cu; }
        if (ctx->pc != 0x19AE2Cu) { return; }
    }
    ctx->pc = 0x19AE2Cu;
    // 0x19ae2c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x19AE2Cu;
    SET_GPR_U32(ctx, 31, 0x19AE34u);
    ctx->pc = 0x19AE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE2Cu;
            // 0x19ae30: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE34u; }
        if (ctx->pc != 0x19AE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE34u; }
        if (ctx->pc != 0x19AE34u) { return; }
    }
    ctx->pc = 0x19AE34u;
    // 0x19ae34: 0x0  nop
    ctx->pc = 0x19ae34u;
    // NOP
label_19ae38:
    // 0x19ae38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19ae38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x19ae3c: 0x2aa30004  slti        $v1, $s5, 0x4
    ctx->pc = 0x19ae3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19ae40: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x19ae40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x19ae44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x19ae44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x19ae48: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x19ae48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x19ae4c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x19AE4Cu;
    {
        const bool branch_taken_0x19ae4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE4Cu;
            // 0x19ae50: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae4c) {
            ctx->pc = 0x19ADC8u;
            goto label_19adc8;
        }
    }
    ctx->pc = 0x19AE54u;
    // 0x19ae54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19ae58: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19ae58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19ae5c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19ae5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ae60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19ae60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ae64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19ae64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ae68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19ae68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ae6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19ae6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ae70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ae70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ae74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ae74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ae78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ae78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ae7c: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE7Cu;
            // 0x19ae80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AD78u: goto label_19ad78;
            case 0x19AD90u: goto label_19ad90;
            case 0x19ADC8u: goto label_19adc8;
            case 0x19AE38u: goto label_19ae38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AE84u;
}
