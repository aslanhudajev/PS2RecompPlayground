#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_04
// Address: 0x19efa0 - 0x19f0f8
void CreateEn3_04_0x19efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_04_0x19efa0");
#endif

    ctx->pc = 0x19efa0u;

    // 0x19efa0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x19efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x19efa4: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19efa8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19efac: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19efacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19efb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19efb4: 0x2463f130  addiu       $v1, $v1, -0xED0
    ctx->pc = 0x19efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963504));
    // 0x19efb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19efbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19efbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19efc4: 0x2442f420  addiu       $v0, $v0, -0xBE0
    ctx->pc = 0x19efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964256));
    // 0x19efc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19efcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19efccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efd0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x19efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x19efd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19efd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efd8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x19efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x19efdc: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x19efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x19efe0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19efe4: 0x24630340  addiu       $v1, $v1, 0x340
    ctx->pc = 0x19efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x19efe8: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x19efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x19efec: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x19efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x19eff0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x19eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x19eff4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x19eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x19eff8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x19eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x19effc: 0xc060694  jal         func_181A50
    ctx->pc = 0x19EFFCu;
    SET_GPR_U32(ctx, 31, 0x19F004u);
    ctx->pc = 0x19F000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EFFCu;
            // 0x19f000: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F004u; }
        if (ctx->pc != 0x19F004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F004u; }
        if (ctx->pc != 0x19F004u) { return; }
    }
    ctx->pc = 0x19F004u;
    // 0x19f004: 0xc060544  jal         func_181510
    ctx->pc = 0x19F004u;
    SET_GPR_U32(ctx, 31, 0x19F00Cu);
    ctx->pc = 0x19F008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F004u;
            // 0x19f008: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F00Cu; }
        if (ctx->pc != 0x19F00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F00Cu; }
        if (ctx->pc != 0x19F00Cu) { return; }
    }
    ctx->pc = 0x19F00Cu;
    // 0x19f00c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19f010: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x19f010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x19f014: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x19f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19f018: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19f018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19f01c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19f01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19f020: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f024: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x19f024u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f028: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x19f028u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f02c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x19f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x19f030: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19f030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19f034: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x19f034u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x19f038: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f038u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19f03c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x19f03cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x19f040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19f044: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x19f044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x19f048: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x19f048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x19f04c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f050: 0x1262001b  beq         $s3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19F050u;
    {
        const bool branch_taken_0x19f050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F050u;
            // 0x19f054: 0xe4600124  swc1        $f0, 0x124($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f050) {
            ctx->pc = 0x19F0C0u;
            goto label_19f0c0;
        }
    }
    ctx->pc = 0x19F058u;
    // 0x19f058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f05c: 0x12620012  beq         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19F05Cu;
    {
        const bool branch_taken_0x19f05c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F05Cu;
            // 0x19f060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f05c) {
            ctx->pc = 0x19F0A8u;
            goto label_19f0a8;
        }
    }
    ctx->pc = 0x19F064u;
    // 0x19f064: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F064u;
    {
        const bool branch_taken_0x19f064 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f064) {
            ctx->pc = 0x19F098u;
            goto label_19f098;
        }
    }
    ctx->pc = 0x19F06Cu;
    // 0x19f06c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F06Cu;
    {
        const bool branch_taken_0x19f06c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f06c) {
            ctx->pc = 0x19F080u;
            goto label_19f080;
        }
    }
    ctx->pc = 0x19F074u;
    // 0x19f074: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19F074u;
    {
        const bool branch_taken_0x19f074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f074) {
            ctx->pc = 0x19F0C8u;
            goto label_19f0c8;
        }
    }
    ctx->pc = 0x19F07Cu;
    // 0x19f07c: 0x0  nop
    ctx->pc = 0x19f07cu;
    // NOP
label_19f080:
    // 0x19f080: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x19f080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
    // 0x19f084: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x19f084u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x19f088: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x19f088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x19f08c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19F08Cu;
    {
        const bool branch_taken_0x19f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F08Cu;
            // 0x19f090: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f08c) {
            ctx->pc = 0x19F0C8u;
            goto label_19f0c8;
        }
    }
    ctx->pc = 0x19F094u;
    // 0x19f094: 0x0  nop
    ctx->pc = 0x19f094u;
    // NOP
label_19f098:
    // 0x19f098: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19f098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19f09c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x19f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x19f0a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19F0A0u;
    {
        const bool branch_taken_0x19f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0A0u;
            // 0x19f0a4: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0a0) {
            ctx->pc = 0x19F0C8u;
            goto label_19f0c8;
        }
    }
    ctx->pc = 0x19F0A8u;
label_19f0a8:
    // 0x19f0a8: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x19f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x19f0ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19f0acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x19f0b0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x19f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x19f0b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F0B4u;
    {
        const bool branch_taken_0x19f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0B4u;
            // 0x19f0b8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0b4) {
            ctx->pc = 0x19F0C8u;
            goto label_19f0c8;
        }
    }
    ctx->pc = 0x19F0BCu;
    // 0x19f0bc: 0x0  nop
    ctx->pc = 0x19f0bcu;
    // NOP
label_19f0c0:
    // 0x19f0c0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x19f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x19f0c4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x19f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_19f0c8:
    // 0x19f0c8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x19f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x19f0cc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x19f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x19f0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0d4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x19F0D4u;
    SET_GPR_U32(ctx, 31, 0x19F0DCu);
    ctx->pc = 0x19F0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0D4u;
            // 0x19f0d8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F0DCu; }
        if (ctx->pc != 0x19F0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F0DCu; }
        if (ctx->pc != 0x19F0DCu) { return; }
    }
    ctx->pc = 0x19F0DCu;
    // 0x19f0dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f0e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f0e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f0e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f0e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f0e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f0e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f0ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F0F0u;
            // 0x19f0f4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F080u: goto label_19f080;
            case 0x19F098u: goto label_19f098;
            case 0x19F0A8u: goto label_19f0a8;
            case 0x19F0C0u: goto label_19f0c0;
            case 0x19F0C8u: goto label_19f0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F0F8u;
}
