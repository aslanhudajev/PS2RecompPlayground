#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage8TrueBoss
// Address: 0x1ecf10 - 0x1ed008
void CreateStage8TrueBoss_0x1ecf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage8TrueBoss_0x1ecf10");
#endif

    ctx->pc = 0x1ecf10u;

    // 0x1ecf10: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1ecf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1ecf14: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ecf18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ecf1c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ecf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ecf20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecf24: 0x2463d040  addiu       $v1, $v1, -0x2FC0
    ctx->pc = 0x1ecf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955072));
    // 0x1ecf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ecf2c: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x1ecf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x1ecf30: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1ecf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1ecf34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ecf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf38: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1ecf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1ecf3c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ecf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ecf40: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ecf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ecf44: 0x2463edd0  addiu       $v1, $v1, -0x1230
    ctx->pc = 0x1ecf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962640));
    // 0x1ecf48: 0x2442d010  addiu       $v0, $v0, -0x2FF0
    ctx->pc = 0x1ecf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955024));
    // 0x1ecf4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ecf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf50: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x1ecf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x1ecf54: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1ecf58: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1ecf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1ecf5c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1ECF5Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF64u);
    ctx->pc = 0x1ECF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF5Cu;
            // 0x1ecf60: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF64u; }
        if (ctx->pc != 0x1ECF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF64u; }
        if (ctx->pc != 0x1ECF64u) { return; }
    }
    ctx->pc = 0x1ECF64u;
    // 0x1ecf64: 0xc060544  jal         func_181510
    ctx->pc = 0x1ECF64u;
    SET_GPR_U32(ctx, 31, 0x1ECF6Cu);
    ctx->pc = 0x1ECF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF64u;
            // 0x1ecf68: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF6Cu; }
        if (ctx->pc != 0x1ECF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF6Cu; }
        if (ctx->pc != 0x1ECF6Cu) { return; }
    }
    ctx->pc = 0x1ECF6Cu;
    // 0x1ecf6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ecf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ecf70: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1ecf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1ecf74: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1ecf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ecf78: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1ecf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1ecf7c: 0x34464000  ori         $a2, $v0, 0x4000
    ctx->pc = 0x1ecf7cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x1ecf80: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ecf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecf84: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1ecf84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ecf88: 0x3c02bc2b  lui         $v0, 0xBC2B
    ctx->pc = 0x1ecf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48171 << 16));
    // 0x1ecf8c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1ecf8cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecf90: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1ecf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1ecf94: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ecf94u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf98: 0x3c054461  lui         $a1, 0x4461
    ctx->pc = 0x1ecf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17505 << 16));
    // 0x1ecf9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ecf9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecfa0: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x1ecfa0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)37542u)));
    // 0x1ecfa4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ecfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ecfa8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ecfa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1ecfac: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ecfacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1ecfb0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1ecfb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ecfb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecfb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecfb8: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1ecfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1ecfbc: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1ecfbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1ecfc0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ecfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecfc4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1ecfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1ecfc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ecfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecfcc: 0xac650128  sw          $a1, 0x128($v1)
    ctx->pc = 0x1ecfccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 5));
    // 0x1ecfd0: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1ecfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x1ecfd4: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1ecfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1ecfd8: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1ecfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1ecfdc: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1ecfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1ecfe0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1ecfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1ecfe4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1ECFE4u;
    SET_GPR_U32(ctx, 31, 0x1ECFECu);
    ctx->pc = 0x1ECFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFE4u;
            // 0x1ecfe8: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFECu; }
        if (ctx->pc != 0x1ECFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFECu; }
        if (ctx->pc != 0x1ECFECu) { return; }
    }
    ctx->pc = 0x1ECFECu;
    // 0x1ecfec: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x1ecfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x1ecff0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1ecff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1ecff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed000: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED000u;
            // 0x1ed004: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED008u;
}
