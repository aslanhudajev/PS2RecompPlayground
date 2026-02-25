#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn7_01
// Address: 0x1af100 - 0x1af28c
void CreateEn7_01_0x1af100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn7_01_0x1af100");
#endif

    ctx->pc = 0x1af100u;

    // 0x1af100: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1af100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1af104: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1af104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1af108: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1af10c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1af10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1af110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1af110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1af114: 0x2463f2c0  addiu       $v1, $v1, -0xD40
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963904));
    // 0x1af118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af11c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1af11cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af124: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x1af124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x1af128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af12c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1af12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af130: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1af130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1af134: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1af134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af138: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1af138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1af13c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1af13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1af140: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1af140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1af144: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1af144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1af148: 0x2442f290  addiu       $v0, $v0, -0xD70
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
    // 0x1af14c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1af14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1af150: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1af150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1af154: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1af154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1af158: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1af158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1af15c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AF15Cu;
    SET_GPR_U32(ctx, 31, 0x1AF164u);
    ctx->pc = 0x1AF160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF15Cu;
            // 0x1af160: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF164u; }
        if (ctx->pc != 0x1AF164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF164u; }
        if (ctx->pc != 0x1AF164u) { return; }
    }
    ctx->pc = 0x1AF164u;
    // 0x1af164: 0xc060544  jal         func_181510
    ctx->pc = 0x1AF164u;
    SET_GPR_U32(ctx, 31, 0x1AF16Cu);
    ctx->pc = 0x1AF168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF164u;
            // 0x1af168: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF16Cu; }
        if (ctx->pc != 0x1AF16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF16Cu; }
        if (ctx->pc != 0x1AF16Cu) { return; }
    }
    ctx->pc = 0x1AF16Cu;
    // 0x1af16c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1af16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1af170: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1af170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1af174: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1af174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af178: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1af178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1af17c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1af17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1af180: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1af180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af184: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1af184u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af188: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1af188u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af18c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1af18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1af190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1af194: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1af194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1af198: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1af19c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1af19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1af1a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1af1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1af1a4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1af1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1af1a8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1af1a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1af1ac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1af1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af1b0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1af1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1af1b4: 0x12620024  beq         $s3, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1AF1B4u;
    {
        const bool branch_taken_0x1af1b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1B4u;
            // 0x1af1b8: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1b4) {
            ctx->pc = 0x1AF248u;
            goto label_1af248;
        }
    }
    ctx->pc = 0x1AF1BCu;
    // 0x1af1bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af1c0: 0x12620021  beq         $s3, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AF1C0u;
    {
        const bool branch_taken_0x1af1c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF1C0u;
            // 0x1af1c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1c0) {
            ctx->pc = 0x1AF248u;
            goto label_1af248;
        }
    }
    ctx->pc = 0x1AF1C8u;
    // 0x1af1c8: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF1C8u;
    {
        const bool branch_taken_0x1af1c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af1c8) {
            ctx->pc = 0x1AF218u;
            goto label_1af218;
        }
    }
    ctx->pc = 0x1AF1D0u;
    // 0x1af1d0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF1D0u;
    {
        const bool branch_taken_0x1af1d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af1d0) {
            ctx->pc = 0x1AF1E0u;
            goto label_1af1e0;
        }
    }
    ctx->pc = 0x1AF1D8u;
    // 0x1af1d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1AF1D8u;
    {
        const bool branch_taken_0x1af1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af1d8) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF1E0u;
label_1af1e0:
    // 0x1af1e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1af1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1af1e4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1af1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1af1e8: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x1af1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x1af1ec: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1af1ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1af1f0: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1af1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1af1f4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1af1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1af1f8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1af1f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1af1fc: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1af1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1af200: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1af200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1af204: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1af204u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1af208: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1af208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1af20c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1AF20Cu;
    {
        const bool branch_taken_0x1af20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF20Cu;
            // 0x1af210: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af20c) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF214u;
    // 0x1af214: 0x0  nop
    ctx->pc = 0x1af214u;
    // NOP
label_1af218:
    // 0x1af218: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1af218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1af21c: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1af21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1af220: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1af220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1af224: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1af224u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1af228: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x1af228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x1af22c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1af22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1af230: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1af230u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1af234: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1af234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1af238: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1af238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x1af23c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AF23Cu;
    {
        const bool branch_taken_0x1af23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF23Cu;
            // 0x1af240: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af23c) {
            ctx->pc = 0x1AF268u;
            goto label_1af268;
        }
    }
    ctx->pc = 0x1AF244u;
    // 0x1af244: 0x0  nop
    ctx->pc = 0x1af244u;
    // NOP
label_1af248:
    // 0x1af248: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1af24c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1af24cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1af250: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1af250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1af254: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1af254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1af258: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1af258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1af25c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1af25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1af260: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1af260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1af264: 0x0  nop
    ctx->pc = 0x1af264u;
    // NOP
label_1af268:
    // 0x1af268: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1AF268u;
    SET_GPR_U32(ctx, 31, 0x1AF270u);
    ctx->pc = 0x1AF26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF268u;
            // 0x1af26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF270u; }
        if (ctx->pc != 0x1AF270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF270u; }
        if (ctx->pc != 0x1AF270u) { return; }
    }
    ctx->pc = 0x1AF270u;
    // 0x1af270: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1af274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af284: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF284u;
            // 0x1af288: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF1E0u: goto label_1af1e0;
            case 0x1AF218u: goto label_1af218;
            case 0x1AF248u: goto label_1af248;
            case 0x1AF268u: goto label_1af268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF28Cu;
}
