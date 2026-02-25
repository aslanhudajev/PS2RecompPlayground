#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn2_02
// Address: 0x18e0e0 - 0x18e25c
void CreateEn2_02_0x18e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn2_02_0x18e0e0");
#endif

    ctx->pc = 0x18e0e0u;

    // 0x18e0e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x18e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x18e0e4: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x18e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x18e0e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18e0ec: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18e0f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18e0f4: 0x2463e290  addiu       $v1, $v1, -0x1D70
    ctx->pc = 0x18e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959760));
    // 0x18e0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e0fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18e0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e104: 0x2442e560  addiu       $v0, $v0, -0x1AA0
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960480));
    // 0x18e108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e10c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18e10cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e110: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x18e110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x18e114: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18e114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e118: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x18e118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x18e11c: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x18e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x18e120: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18e124: 0x2463f9c0  addiu       $v1, $v1, -0x640
    ctx->pc = 0x18e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965696));
    // 0x18e128: 0x2442e260  addiu       $v0, $v0, -0x1DA0
    ctx->pc = 0x18e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959712));
    // 0x18e12c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x18e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x18e130: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x18e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x18e134: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x18e134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x18e138: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x18e138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x18e13c: 0xc060694  jal         func_181A50
    ctx->pc = 0x18E13Cu;
    SET_GPR_U32(ctx, 31, 0x18E144u);
    ctx->pc = 0x18E140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E13Cu;
            // 0x18e140: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E144u; }
        if (ctx->pc != 0x18E144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E144u; }
        if (ctx->pc != 0x18E144u) { return; }
    }
    ctx->pc = 0x18E144u;
    // 0x18e144: 0xc060544  jal         func_181510
    ctx->pc = 0x18E144u;
    SET_GPR_U32(ctx, 31, 0x18E14Cu);
    ctx->pc = 0x18E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E144u;
            // 0x18e148: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E14Cu; }
        if (ctx->pc != 0x18E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E14Cu; }
        if (ctx->pc != 0x18E14Cu) { return; }
    }
    ctx->pc = 0x18E14Cu;
    // 0x18e14c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18e150: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x18e150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x18e154: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x18e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18e158: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x18e158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x18e15c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x18e15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18e160: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e164: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x18e164u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e168: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x18e168u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e170: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18e170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18e174: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18e174u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18e178: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x18e17c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x18e17cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18e180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18e184: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x18e184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x18e188: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x18e188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x18e18c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x18e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e190: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x18e190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x18e194: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x18e194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x18e198: 0x12620017  beq         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18E198u;
    {
        const bool branch_taken_0x18e198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E198u;
            // 0x18e19c: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e198) {
            ctx->pc = 0x18E1F8u;
            goto label_18e1f8;
        }
    }
    ctx->pc = 0x18E1A0u;
    // 0x18e1a0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E1A0u;
    {
        const bool branch_taken_0x18e1a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1a0) {
            ctx->pc = 0x18E1B0u;
            goto label_18e1b0;
        }
    }
    ctx->pc = 0x18E1A8u;
    // 0x18e1a8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x18E1A8u;
    {
        const bool branch_taken_0x18e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1a8) {
            ctx->pc = 0x18E238u;
            goto label_18e238;
        }
    }
    ctx->pc = 0x18E1B0u;
label_18e1b0:
    // 0x18e1b0: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x18e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x18e1b4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x18e1b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18e1b8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x18e1bc: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x18e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x18e1c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18e1c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x18e1c4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x18e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x18e1c8: 0x3c02be0f  lui         $v0, 0xBE0F
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48655 << 16));
    // 0x18e1cc: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x18e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x18e1d0: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x18e1d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)23593u)));
    // 0x18e1d4: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x18e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x18e1d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18e1dc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x18e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x18e1e0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x18e1e0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18e1e4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x18e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x18e1e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e1ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18E1ECu;
    {
        const bool branch_taken_0x18e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1ECu;
            // 0x18e1f0: 0xac430114  sw          $v1, 0x114($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1ec) {
            ctx->pc = 0x18E238u;
            goto label_18e238;
        }
    }
    ctx->pc = 0x18E1F4u;
    // 0x18e1f4: 0x0  nop
    ctx->pc = 0x18e1f4u;
    // NOP
label_18e1f8:
    // 0x18e1f8: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x18e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x18e1fc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x18e1fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x18e200: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x18e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x18e204: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x18e204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x18e208: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x18e208u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x18e20c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x18e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x18e210: 0x3c023e0f  lui         $v0, 0x3E0F
    ctx->pc = 0x18e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15887 << 16));
    // 0x18e214: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x18e214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x18e218: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x18e218u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)23593u)));
    // 0x18e21c: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x18e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x18e220: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18e220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18e224: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x18e224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x18e228: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x18e228u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x18e22c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x18e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x18e230: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e234: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x18e234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
label_18e238:
    // 0x18e238: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x18E238u;
    SET_GPR_U32(ctx, 31, 0x18E240u);
    ctx->pc = 0x18E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E238u;
            // 0x18e23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E240u; }
        if (ctx->pc != 0x18E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E240u; }
        if (ctx->pc != 0x18E240u) { return; }
    }
    ctx->pc = 0x18E240u;
    // 0x18e240: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18e240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e244: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e248: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e24c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e254: 0x3e00008  jr          $ra
    ctx->pc = 0x18E254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E254u;
            // 0x18e258: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E1B0u: goto label_18e1b0;
            case 0x18E1F8u: goto label_18e1f8;
            case 0x18E238u: goto label_18e238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E25Cu;
}
