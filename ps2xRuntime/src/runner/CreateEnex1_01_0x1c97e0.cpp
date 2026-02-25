#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_01
// Address: 0x1c97e0 - 0x1c995c
void CreateEnex1_01_0x1c97e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_01_0x1c97e0");
#endif

    ctx->pc = 0x1c97e0u;

    // 0x1c97e0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c97e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1c97e4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1c97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1c97e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c97e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c97ec: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1c97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1c97f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c97f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c97f4: 0x24639990  addiu       $v1, $v1, -0x6670
    ctx->pc = 0x1c97f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941072));
    // 0x1c97f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c97f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c97fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c97fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9804: 0x24429cc0  addiu       $v0, $v0, -0x6340
    ctx->pc = 0x1c9804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941888));
    // 0x1c9808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c980c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c980cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9810: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1c9810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1c9814: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c9814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9818: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1c9818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1c981c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1c981cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1c9820: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1c9820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1c9824: 0x2463c2d0  addiu       $v1, $v1, -0x3D30
    ctx->pc = 0x1c9824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951632));
    // 0x1c9828: 0x24429960  addiu       $v0, $v0, -0x66A0
    ctx->pc = 0x1c9828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941024));
    // 0x1c982c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1c982cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1c9830: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c9834: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1c9834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1c9838: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1c9838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1c983c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C983Cu;
    SET_GPR_U32(ctx, 31, 0x1C9844u);
    ctx->pc = 0x1C9840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C983Cu;
            // 0x1c9840: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9844u; }
        if (ctx->pc != 0x1C9844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9844u; }
        if (ctx->pc != 0x1C9844u) { return; }
    }
    ctx->pc = 0x1C9844u;
    // 0x1c9844: 0xc060544  jal         func_181510
    ctx->pc = 0x1C9844u;
    SET_GPR_U32(ctx, 31, 0x1C984Cu);
    ctx->pc = 0x1C9848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9844u;
            // 0x1c9848: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C984Cu; }
        if (ctx->pc != 0x1C984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C984Cu; }
        if (ctx->pc != 0x1C984Cu) { return; }
    }
    ctx->pc = 0x1C984Cu;
    // 0x1c984c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c984cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9850: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1c9850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1c9854: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x1c9854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x1c9858: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c9858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c985c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c985cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c9860: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1c9860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1c9864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9868: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1c9868u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c986c: 0x0  nop
    ctx->pc = 0x1c986cu;
    // NOP
    // 0x1c9870: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1c9870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1c9874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9878: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c9878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c987c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1c987cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1c9880: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9880u;
    {
        const bool branch_taken_0x1c9880 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9880u;
            // 0x1c9884: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9880) {
            ctx->pc = 0x1C98E8u;
            goto label_1c98e8;
        }
    }
    ctx->pc = 0x1C9888u;
    // 0x1c9888: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9888u;
    {
        const bool branch_taken_0x1c9888 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9888) {
            ctx->pc = 0x1C9898u;
            goto label_1c9898;
        }
    }
    ctx->pc = 0x1C9890u;
    // 0x1c9890: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1C9890u;
    {
        const bool branch_taken_0x1c9890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9890) {
            ctx->pc = 0x1C9938u;
            goto label_1c9938;
        }
    }
    ctx->pc = 0x1C9898u;
label_1c9898:
    // 0x1c9898: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1c9898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1c989c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1c989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1c98a0: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x1c98a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x1c98a4: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1c98a8: 0x3c04bf00  lui         $a0, 0xBF00
    ctx->pc = 0x1c98a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48896 << 16));
    // 0x1c98ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c98acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c98b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c98b4: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1c98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1c98b8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c98bc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c98c0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1c98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1c98c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c98c8: 0xac450128  sw          $a1, 0x128($v0)
    ctx->pc = 0x1c98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 5));
    // 0x1c98cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c98d0: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1c98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1c98d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c98d8: 0xac440114  sw          $a0, 0x114($v0)
    ctx->pc = 0x1c98d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 4));
    // 0x1c98dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c98e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C98E0u;
    {
        const bool branch_taken_0x1c98e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98E0u;
            // 0x1c98e4: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98e0) {
            ctx->pc = 0x1C9938u;
            goto label_1c9938;
        }
    }
    ctx->pc = 0x1C98E8u;
label_1c98e8:
    // 0x1c98e8: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1c98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x1c98ec: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1c98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1c98f0: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x1c98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x1c98f4: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1c98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1c98f8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1c98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1c98fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c98fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c9900: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c9900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9904: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1c9904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1c9908: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c9908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c990c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c990cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c9910: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1c9910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1c9914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9918: 0xac450128  sw          $a1, 0x128($v0)
    ctx->pc = 0x1c9918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 5));
    // 0x1c991c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9920: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1c9920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1c9924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9928: 0xac440114  sw          $a0, 0x114($v0)
    ctx->pc = 0x1c9928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 4));
    // 0x1c992c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9930: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x1c9930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    // 0x1c9934: 0x0  nop
    ctx->pc = 0x1c9934u;
    // NOP
label_1c9938:
    // 0x1c9938: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1C9938u;
    SET_GPR_U32(ctx, 31, 0x1C9940u);
    ctx->pc = 0x1C993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9938u;
            // 0x1c993c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9940u; }
        if (ctx->pc != 0x1C9940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9940u; }
        if (ctx->pc != 0x1C9940u) { return; }
    }
    ctx->pc = 0x1C9940u;
    // 0x1c9940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c9940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c9944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c9948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c994c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c994cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9954u;
            // 0x1c9958: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9898u: goto label_1c9898;
            case 0x1C98E8u: goto label_1c98e8;
            case 0x1C9938u: goto label_1c9938;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C995Cu;
}
