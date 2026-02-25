#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage3Boss
// Address: 0x1a0350 - 0x1a074c
void CreateStage3Boss_0x1a0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage3Boss_0x1a0350");
#endif

    ctx->pc = 0x1a0350u;

    // 0x1a0350: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x1a0350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
    // 0x1a0354: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a0354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a0358: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a035c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0364: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a0364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0368: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a0368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a036c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A036Cu;
    SET_GPR_U32(ctx, 31, 0x1A0374u);
    ctx->pc = 0x1A0370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A036Cu;
            // 0x1a0370: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0374u; }
        if (ctx->pc != 0x1A0374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0374u; }
        if (ctx->pc != 0x1A0374u) { return; }
    }
    ctx->pc = 0x1A0374u;
    // 0x1a0374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0378: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a0378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a037c: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1A037Cu;
    SET_GPR_U32(ctx, 31, 0x1A0384u);
    ctx->pc = 0x1A0380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A037Cu;
            // 0x1a0380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0384u; }
        if (ctx->pc != 0x1A0384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0384u; }
        if (ctx->pc != 0x1A0384u) { return; }
    }
    ctx->pc = 0x1A0384u;
    // 0x1a0384: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a0384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a0388: 0x27b00500  addiu       $s0, $sp, 0x500
    ctx->pc = 0x1a0388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x1a038c: 0x24420780  addiu       $v0, $v0, 0x780
    ctx->pc = 0x1a038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x1a0390: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1a0394: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1a0394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1a0398: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a0398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a039c: 0x24420fc0  addiu       $v0, $v0, 0xFC0
    ctx->pc = 0x1a039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
    // 0x1a03a0: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1a03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1a03a4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a03a8: 0x24423ff0  addiu       $v0, $v0, 0x3FF0
    ctx->pc = 0x1a03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16368));
    // 0x1a03ac: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x1a03acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x1a03b0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a03b4: 0x24420750  addiu       $v0, $v0, 0x750
    ctx->pc = 0x1a03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x1a03b8: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x1a03b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x1a03bc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A03BCu;
    SET_GPR_U32(ctx, 31, 0x1A03C4u);
    ctx->pc = 0x1A03C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03BCu;
            // 0x1a03c0: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03C4u; }
        if (ctx->pc != 0x1A03C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03C4u; }
        if (ctx->pc != 0x1A03C4u) { return; }
    }
    ctx->pc = 0x1A03C4u;
    // 0x1a03c4: 0xc060544  jal         func_181510
    ctx->pc = 0x1A03C4u;
    SET_GPR_U32(ctx, 31, 0x1A03CCu);
    ctx->pc = 0x1A03C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03C4u;
            // 0x1a03c8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03CCu; }
        if (ctx->pc != 0x1A03CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03CCu; }
        if (ctx->pc != 0x1A03CCu) { return; }
    }
    ctx->pc = 0x1A03CCu;
    // 0x1a03cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a03d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a03d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a03d4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a03d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a03d8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1a03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1a03dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a03dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a03e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a03e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03e4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a03e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a03e8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a03e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a03ec: 0x0  nop
    ctx->pc = 0x1a03ecu;
    // NOP
    // 0x1a03f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a03f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a03f4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a03f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a03f8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a03f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a03fc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1a03fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a0400: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a0400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a0404: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a0404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a0408: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a0408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a040c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0410: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1a0410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1a0414: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0418: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a041c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0420: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1a0420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1a0424: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a0424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a0428: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1a0428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1a042c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a042cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a0430: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a0430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a0434: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a0434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a0438: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A0438u;
    SET_GPR_U32(ctx, 31, 0x1A0440u);
    ctx->pc = 0x1A043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0438u;
            // 0x1a043c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0440u; }
        if (ctx->pc != 0x1A0440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0440u; }
        if (ctx->pc != 0x1A0440u) { return; }
    }
    ctx->pc = 0x1A0440u;
    // 0x1a0440: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a0440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a0444: 0x27b003d0  addiu       $s0, $sp, 0x3D0
    ctx->pc = 0x1a0444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x1a0448: 0x24630780  addiu       $v1, $v1, 0x780
    ctx->pc = 0x1a0448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1920));
    // 0x1a044c: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1a044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1a0450: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1a0450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1a0454: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a0454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a0458: 0x246313b0  addiu       $v1, $v1, 0x13B0
    ctx->pc = 0x1a0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5040));
    // 0x1a045c: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1a045cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1a0460: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a0464: 0x24633ff0  addiu       $v1, $v1, 0x3FF0
    ctx->pc = 0x1a0464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16368));
    // 0x1a0468: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1a0468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1a046c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a046cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a0470: 0x24630750  addiu       $v1, $v1, 0x750
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1a0474: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1a0474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1a0478: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A0478u;
    SET_GPR_U32(ctx, 31, 0x1A0480u);
    ctx->pc = 0x1A047Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0478u;
            // 0x1a047c: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0480u; }
        if (ctx->pc != 0x1A0480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0480u; }
        if (ctx->pc != 0x1A0480u) { return; }
    }
    ctx->pc = 0x1A0480u;
    // 0x1a0480: 0xc060544  jal         func_181510
    ctx->pc = 0x1A0480u;
    SET_GPR_U32(ctx, 31, 0x1A0488u);
    ctx->pc = 0x1A0484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0480u;
            // 0x1a0484: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0488u; }
        if (ctx->pc != 0x1A0488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0488u; }
        if (ctx->pc != 0x1A0488u) { return; }
    }
    ctx->pc = 0x1A0488u;
    // 0x1a0488: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a0488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a048c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a048cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a0490: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0494: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1a0494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1a0498: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a0498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a049c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04a0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a04a0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a04a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a04a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a04a8: 0x0  nop
    ctx->pc = 0x1a04a8u;
    // NOP
    // 0x1a04ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a04acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a04b0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a04b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a04b4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a04b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a04b8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1a04b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a04bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a04bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a04c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a04c4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a04c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a04cc: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1a04ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1a04d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a04d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a04d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a04d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a04dc: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1a04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1a04e0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a04e4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1a04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1a04e8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a04ec: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a04f0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a04f4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A04F4u;
    SET_GPR_U32(ctx, 31, 0x1A04FCu);
    ctx->pc = 0x1A04F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A04F4u;
            // 0x1a04f8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04FCu; }
        if (ctx->pc != 0x1A04FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04FCu; }
        if (ctx->pc != 0x1A04FCu) { return; }
    }
    ctx->pc = 0x1A04FCu;
    // 0x1a04fc: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a0500: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1a0504: 0x24630780  addiu       $v1, $v1, 0x780
    ctx->pc = 0x1a0504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1920));
    // 0x1a0508: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1a0508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a050c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1a050cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1a0510: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a0510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a0514: 0x246317a0  addiu       $v1, $v1, 0x17A0
    ctx->pc = 0x1a0514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6048));
    // 0x1a0518: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1a0518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1a051c: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a051cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a0520: 0x24633ff0  addiu       $v1, $v1, 0x3FF0
    ctx->pc = 0x1a0520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16368));
    // 0x1a0524: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1a0524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1a0528: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a0528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a052c: 0x24630750  addiu       $v1, $v1, 0x750
    ctx->pc = 0x1a052cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1a0530: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1a0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1a0534: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A0534u;
    SET_GPR_U32(ctx, 31, 0x1A053Cu);
    ctx->pc = 0x1A0538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0534u;
            // 0x1a0538: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A053Cu; }
        if (ctx->pc != 0x1A053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A053Cu; }
        if (ctx->pc != 0x1A053Cu) { return; }
    }
    ctx->pc = 0x1A053Cu;
    // 0x1a053c: 0xc060544  jal         func_181510
    ctx->pc = 0x1A053Cu;
    SET_GPR_U32(ctx, 31, 0x1A0544u);
    ctx->pc = 0x1A0540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A053Cu;
            // 0x1a0540: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0544u; }
        if (ctx->pc != 0x1A0544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0544u; }
        if (ctx->pc != 0x1A0544u) { return; }
    }
    ctx->pc = 0x1A0544u;
    // 0x1a0544: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a0544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a0548: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a0548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a054c: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0550: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1a0550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1a0554: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a0554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a0558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a055c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a055cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0560: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a0560u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0564: 0x0  nop
    ctx->pc = 0x1a0564u;
    // NOP
    // 0x1a0568: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a056c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a056cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a0570: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a0570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a0574: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1a0574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a0578: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a0578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a057c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a057cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a0580: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a0580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a0584: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0588: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1a0588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1a058c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0590: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a0590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a0594: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0598: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1a0598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1a059c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a059cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a05a0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1a05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1a05a4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a05a8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a05ac: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a05acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a05b0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A05B0u;
    SET_GPR_U32(ctx, 31, 0x1A05B8u);
    ctx->pc = 0x1A05B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05B0u;
            // 0x1a05b4: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05B8u; }
        if (ctx->pc != 0x1A05B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05B8u; }
        if (ctx->pc != 0x1A05B8u) { return; }
    }
    ctx->pc = 0x1A05B8u;
    // 0x1a05b8: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a05bc: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1a05bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1a05c0: 0x24630780  addiu       $v1, $v1, 0x780
    ctx->pc = 0x1a05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1920));
    // 0x1a05c4: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1a05c8: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1a05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1a05cc: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a05d0: 0x24631b90  addiu       $v1, $v1, 0x1B90
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7056));
    // 0x1a05d4: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1a05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1a05d8: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a05dc: 0x24633ff0  addiu       $v1, $v1, 0x3FF0
    ctx->pc = 0x1a05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16368));
    // 0x1a05e0: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1a05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1a05e4: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a05e8: 0x24630750  addiu       $v1, $v1, 0x750
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    // 0x1a05ec: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1a05ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1a05f0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A05F0u;
    SET_GPR_U32(ctx, 31, 0x1A05F8u);
    ctx->pc = 0x1A05F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05F0u;
            // 0x1a05f4: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05F8u; }
        if (ctx->pc != 0x1A05F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05F8u; }
        if (ctx->pc != 0x1A05F8u) { return; }
    }
    ctx->pc = 0x1A05F8u;
    // 0x1a05f8: 0xc060544  jal         func_181510
    ctx->pc = 0x1A05F8u;
    SET_GPR_U32(ctx, 31, 0x1A0600u);
    ctx->pc = 0x1A05FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05F8u;
            // 0x1a05fc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0600u; }
        if (ctx->pc != 0x1A0600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0600u; }
        if (ctx->pc != 0x1A0600u) { return; }
    }
    ctx->pc = 0x1A0600u;
    // 0x1a0600: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a0600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a0604: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a0604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a0608: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a0608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a060c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1a060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1a0610: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a0610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a0614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0618: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a0618u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a061c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a061cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0620: 0x0  nop
    ctx->pc = 0x1a0620u;
    // NOP
    // 0x1a0624: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a0624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a0628: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a0628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a062c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a062cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a0630: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1a0630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a0634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a0634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a0638: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a0638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a063c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a063cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a0640: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0644: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1a0644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1a0648: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a064c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1a0650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0654: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1a0654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1a0658: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1a0658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1a065c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1a065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1a0660: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1a0660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1a0664: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a0664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a0668: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a0668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a066c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A066Cu;
    SET_GPR_U32(ctx, 31, 0x1A0674u);
    ctx->pc = 0x1A0670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A066Cu;
            // 0x1a0670: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0674u; }
        if (ctx->pc != 0x1A0674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0674u; }
        if (ctx->pc != 0x1A0674u) { return; }
    }
    ctx->pc = 0x1A0674u;
    // 0x1a0674: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1a0674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1a0678: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a067c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a0680: 0x24420780  addiu       $v0, $v0, 0x780
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x1a0684: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1a0684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1a0688: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a0688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a068c: 0x24421f90  addiu       $v0, $v0, 0x1F90
    ctx->pc = 0x1a068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8080));
    // 0x1a0690: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1a0690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x1a0694: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a0694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a0698: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x1a0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x1a069c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1a069cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1a06a0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a06a4: 0x24420750  addiu       $v0, $v0, 0x750
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x1a06a8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A06A8u;
    SET_GPR_U32(ctx, 31, 0x1A06B0u);
    ctx->pc = 0x1A06ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06A8u;
            // 0x1a06ac: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06B0u; }
        if (ctx->pc != 0x1A06B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06B0u; }
        if (ctx->pc != 0x1A06B0u) { return; }
    }
    ctx->pc = 0x1A06B0u;
    // 0x1a06b0: 0xc060544  jal         func_181510
    ctx->pc = 0x1A06B0u;
    SET_GPR_U32(ctx, 31, 0x1A06B8u);
    ctx->pc = 0x1A06B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06B0u;
            // 0x1a06b4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06B8u; }
        if (ctx->pc != 0x1A06B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06B8u; }
        if (ctx->pc != 0x1A06B8u) { return; }
    }
    ctx->pc = 0x1A06B8u;
    // 0x1a06b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a06b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a06bc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1a06bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1a06c0: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1a06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a06c4: 0x3c02458c  lui         $v0, 0x458C
    ctx->pc = 0x1a06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17804 << 16));
    // 0x1a06c8: 0x3445a000  ori         $a1, $v0, 0xA000
    ctx->pc = 0x1a06c8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)40960u)));
    // 0x1a06cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a06ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a06d0: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1a06d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a06d4: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1a06d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1a06d8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1a06d8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a06dc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1a06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1a06e0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1a06e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a06e4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a06e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1a06e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a06e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a06ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a06f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1a06f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a06f4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a06f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1a06f8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1a06f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a06fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a06fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a0700: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1a0700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1a0704: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a0704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1a0708: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a070c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1a070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1a0710: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0714: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1a0714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1a0718: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1a0718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x1a071c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1a071cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1a0720: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1a0720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x1a0724: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1a0724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x1a0728: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1a0728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1a072c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1A072Cu;
    SET_GPR_U32(ctx, 31, 0x1A0734u);
    ctx->pc = 0x1A0730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A072Cu;
            // 0x1a0730: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0734u; }
        if (ctx->pc != 0x1A0734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0734u; }
        if (ctx->pc != 0x1A0734u) { return; }
    }
    ctx->pc = 0x1A0734u;
    // 0x1a0734: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a0734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a073c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a073cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0744: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0744u;
            // 0x1a0748: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A074Cu;
}
