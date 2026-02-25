#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn7_02
// Address: 0x1b0020 - 0x1b01b4
void CreateEn7_02_0x1b0020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn7_02_0x1b0020");
#endif

    ctx->pc = 0x1b0020u;

    // 0x1b0020: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b0020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b0024: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b0024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b0028: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b0028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b002c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b002cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b0030: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b0030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0034: 0x246301f0  addiu       $v1, $v1, 0x1F0
    ctx->pc = 0x1b0034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x1b0038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b003c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b003cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0044: 0x24420440  addiu       $v0, $v0, 0x440
    ctx->pc = 0x1b0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
    // 0x1b0048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b004c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b004cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0050: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1b0050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1b0054: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b0054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0058: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1b0058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1b005c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b005cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b0060: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b0060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1b0064: 0x24631370  addiu       $v1, $v1, 0x1370
    ctx->pc = 0x1b0064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4976));
    // 0x1b0068: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x1b0068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x1b006c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1b006cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1b0070: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1b0070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1b0074: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1b0074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1b0078: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1b0078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1b007c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B007Cu;
    SET_GPR_U32(ctx, 31, 0x1B0084u);
    ctx->pc = 0x1B0080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B007Cu;
            // 0x1b0080: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0084u; }
        if (ctx->pc != 0x1B0084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0084u; }
        if (ctx->pc != 0x1B0084u) { return; }
    }
    ctx->pc = 0x1B0084u;
    // 0x1b0084: 0xc060544  jal         func_181510
    ctx->pc = 0x1B0084u;
    SET_GPR_U32(ctx, 31, 0x1B008Cu);
    ctx->pc = 0x1B0088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0084u;
            // 0x1b0088: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B008Cu; }
        if (ctx->pc != 0x1B008Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B008Cu; }
        if (ctx->pc != 0x1B008Cu) { return; }
    }
    ctx->pc = 0x1B008Cu;
    // 0x1b008c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b0090: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1b0090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1b0094: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b0094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0098: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1b0098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1b009c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b009cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b00a0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1b00a0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b00a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b00a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b00a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b00ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b00acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b00b0: 0x2e610007  sltiu       $at, $s3, 0x7
    ctx->pc = 0x1b00b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b00b4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b00b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b00b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b00b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b00bc: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1b00bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b00c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b00c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b00c4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1b00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1b00c8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1b00c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1b00cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b00d0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1b00d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b00d4: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B00D4u;
    {
        const bool branch_taken_0x1b00d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B00D4u;
            // 0x1b00d8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00d4) {
            ctx->pc = 0x1B0190u;
            goto label_1b0190;
        }
    }
    ctx->pc = 0x1B00DCu;
    // 0x1b00dc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1b00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1b00e0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1b00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1b00e4: 0x24632a00  addiu       $v1, $v1, 0x2A00
    ctx->pc = 0x1b00e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10752));
    // 0x1b00e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b00ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b00f0: 0x400008  jr          $v0
    ctx->pc = 0x1B00F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B00F8u: goto label_1b00f8;
            case 0x1B0128u: goto label_1b0128;
            case 0x1B0160u: goto label_1b0160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B00F8u;
label_1b00f8:
    // 0x1b00f8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1b00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1b00fc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1b00fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1b0100: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b0100u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1b0104: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x1b0104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x1b0108: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b0108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b010c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b010cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b0110: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b0110u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b0114: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b0114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b0118: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b0118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b011c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0120: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B0120u;
    {
        const bool branch_taken_0x1b0120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0120u;
            // 0x1b0124: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0120) {
            ctx->pc = 0x1B0190u;
            goto label_1b0190;
        }
    }
    ctx->pc = 0x1B0128u;
label_1b0128:
    // 0x1b0128: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b012c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1b012cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1b0130: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1b0130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1b0134: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1b0134u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1b0138: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1b0138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1b013c: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x1b013cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x1b0140: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b0140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b0144: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b0144u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b0148: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b0148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b014c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b014cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b0150: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0154: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B0154u;
    {
        const bool branch_taken_0x1b0154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0154u;
            // 0x1b0158: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0154) {
            ctx->pc = 0x1B0190u;
            goto label_1b0190;
        }
    }
    ctx->pc = 0x1B015Cu;
    // 0x1b015c: 0x0  nop
    ctx->pc = 0x1b015cu;
    // NOP
label_1b0160:
    // 0x1b0160: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1b0160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1b0164: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1b0164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1b0168: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1b0168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1b016c: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1b016cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1b0170: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1b0170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1b0174: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1b0174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1b0178: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b0178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b017c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b017cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b0180: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1b0180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1b0184: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1b0184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1b0188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b018c: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1b018cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
label_1b0190:
    // 0x1b0190: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B0190u;
    SET_GPR_U32(ctx, 31, 0x1B0198u);
    ctx->pc = 0x1B0194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0190u;
            // 0x1b0194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0198u; }
        if (ctx->pc != 0x1B0198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0198u; }
        if (ctx->pc != 0x1B0198u) { return; }
    }
    ctx->pc = 0x1B0198u;
    // 0x1b0198: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b0198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b019c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b019cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b01a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b01a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b01a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b01a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b01a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b01a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b01ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B01ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B01B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01ACu;
            // 0x1b01b0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B00F8u: goto label_1b00f8;
            case 0x1B0128u: goto label_1b0128;
            case 0x1B0160u: goto label_1b0160;
            case 0x1B0190u: goto label_1b0190;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B01B4u;
}
