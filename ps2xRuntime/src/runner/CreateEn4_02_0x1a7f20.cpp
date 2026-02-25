#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_02
// Address: 0x1a7f20 - 0x1a802c
void CreateEn4_02_0x1a7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_02_0x1a7f20");
#endif

    ctx->pc = 0x1a7f20u;

    // 0x1a7f20: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1a7f24: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1a7f28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a7f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a7f2c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1a7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1a7f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a7f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a7f34: 0x24638060  addiu       $v1, $v1, -0x7FA0
    ctx->pc = 0x1a7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934624));
    // 0x1a7f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a7f3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a7f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7f44: 0x24428330  addiu       $v0, $v0, -0x7CD0
    ctx->pc = 0x1a7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935344));
    // 0x1a7f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7f4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a7f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f50: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1a7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1a7f54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a7f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7f58: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1a7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1a7f5c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1a7f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1a7f60: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1a7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1a7f64: 0x246394f0  addiu       $v1, $v1, -0x6B10
    ctx->pc = 0x1a7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939888));
    // 0x1a7f68: 0x24428030  addiu       $v0, $v0, -0x7FD0
    ctx->pc = 0x1a7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934576));
    // 0x1a7f6c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1a7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1a7f70: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1a7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1a7f74: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1a7f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1a7f78: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1a7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1a7f7c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A7F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F84u);
    ctx->pc = 0x1A7F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F7Cu;
            // 0x1a7f80: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F84u; }
        if (ctx->pc != 0x1A7F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F84u; }
        if (ctx->pc != 0x1A7F84u) { return; }
    }
    ctx->pc = 0x1A7F84u;
    // 0x1a7f84: 0xc060544  jal         func_181510
    ctx->pc = 0x1A7F84u;
    SET_GPR_U32(ctx, 31, 0x1A7F8Cu);
    ctx->pc = 0x1A7F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7F84u;
            // 0x1a7f88: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F8Cu; }
        if (ctx->pc != 0x1A7F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F8Cu; }
        if (ctx->pc != 0x1A7F8Cu) { return; }
    }
    ctx->pc = 0x1A7F8Cu;
    // 0x1a7f8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a7f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a7f90: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1a7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1a7f94: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a7f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a7f98: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1a7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1a7f9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a7f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a7fa0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a7fa0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7fa4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a7fa4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7fa8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7fac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a7facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a7fb0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a7fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a7fb4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a7fb8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1a7fb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a7fbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a7fc0: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1a7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1a7fc4: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1a7fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1a7fc8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a7fcc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a7fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a7fd0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1a7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1a7fd4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7FD4u;
    {
        const bool branch_taken_0x1a7fd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7FD4u;
            // 0x1a7fd8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fd4) {
            ctx->pc = 0x1A7FE8u;
            goto label_1a7fe8;
        }
    }
    ctx->pc = 0x1A7FDCu;
    // 0x1a7fdc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A7FDCu;
    {
        const bool branch_taken_0x1a7fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fdc) {
            ctx->pc = 0x1A8008u;
            goto label_1a8008;
        }
    }
    ctx->pc = 0x1A7FE4u;
    // 0x1a7fe4: 0x0  nop
    ctx->pc = 0x1a7fe4u;
    // NOP
label_1a7fe8:
    // 0x1a7fe8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1a7fec: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a7fecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1a7ff0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1a7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1a7ff4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a7ff8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a7ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a7ffc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a8000: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a8000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a8004: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a8004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1a8008:
    // 0x1a8008: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A8008u;
    SET_GPR_U32(ctx, 31, 0x1A8010u);
    ctx->pc = 0x1A800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8008u;
            // 0x1a800c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8010u; }
        if (ctx->pc != 0x1A8010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8010u; }
        if (ctx->pc != 0x1A8010u) { return; }
    }
    ctx->pc = 0x1A8010u;
    // 0x1a8010: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a8018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a801c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a801cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a8020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8024: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8024u;
            // 0x1a8028: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7FE8u: goto label_1a7fe8;
            case 0x1A8008u: goto label_1a8008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A802Cu;
}
