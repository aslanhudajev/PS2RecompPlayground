#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStageex1Boss
// Address: 0x1d5720 - 0x1d5b0c
void CreateStageex1Boss_0x1d5720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStageex1Boss_0x1d5720");
#endif

    ctx->pc = 0x1d5720u;

    // 0x1d5720: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x1d5720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
    // 0x1d5724: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d5728: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d5728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d572c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5734: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x1d5734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x1d5738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d573c: 0x244262b0  addiu       $v0, $v0, 0x62B0
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1d5740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5744: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d5744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5748: 0x27b00500  addiu       $s0, $sp, 0x500
    ctx->pc = 0x1d5748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x1d574c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d574cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5750: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1d5750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1d5754: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1d5754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1d5758: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1d5758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1d575c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1d575cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1d5760: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x1d5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x1d5764: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5768: 0x24425b10  addiu       $v0, $v0, 0x5B10
    ctx->pc = 0x1d5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23312));
    // 0x1d576c: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1d576cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1d5770: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x1d5770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x1d5774: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D5774u;
    SET_GPR_U32(ctx, 31, 0x1D577Cu);
    ctx->pc = 0x1D5778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5774u;
            // 0x1d5778: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D577Cu; }
        if (ctx->pc != 0x1D577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D577Cu; }
        if (ctx->pc != 0x1D577Cu) { return; }
    }
    ctx->pc = 0x1D577Cu;
    // 0x1d577c: 0xc060544  jal         func_181510
    ctx->pc = 0x1D577Cu;
    SET_GPR_U32(ctx, 31, 0x1D5784u);
    ctx->pc = 0x1D5780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D577Cu;
            // 0x1d5780: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5784u; }
        if (ctx->pc != 0x1D5784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5784u; }
        if (ctx->pc != 0x1D5784u) { return; }
    }
    ctx->pc = 0x1D5784u;
    // 0x1d5784: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d5784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d5788: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d5788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1d578c: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1d578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5790: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1d5790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1d5794: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d5794u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1d5798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d579c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d579cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d57a0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d57a0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d57a4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d57a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d57a8: 0x0  nop
    ctx->pc = 0x1d57a8u;
    // NOP
    // 0x1d57ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d57acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d57b0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d57b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d57b4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d57b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d57b8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1d57b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d57bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d57bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d57c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d57c4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d57c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d57cc: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1d57ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1d57d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d57d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d57d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d57d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d57dc: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1d57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1d57e0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d57e4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1d57e8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1d57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1d57ec: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d57f0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d57f4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1D57F4u;
    SET_GPR_U32(ctx, 31, 0x1D57FCu);
    ctx->pc = 0x1D57F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57F4u;
            // 0x1d57f8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57FCu; }
        if (ctx->pc != 0x1D57FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57FCu; }
        if (ctx->pc != 0x1D57FCu) { return; }
    }
    ctx->pc = 0x1D57FCu;
    // 0x1d57fc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d5800: 0x27b003d0  addiu       $s0, $sp, 0x3D0
    ctx->pc = 0x1d5800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x1d5804: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x1d5804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x1d5808: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1d5808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1d580c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1d580cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1d5810: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d5814: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x1d5814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
    // 0x1d5818: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1d5818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1d581c: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1d581cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1d5820: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x1d5824: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1d5824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1d5828: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d5828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d582c: 0x24635b10  addiu       $v1, $v1, 0x5B10
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x1d5830: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1d5830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1d5834: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D5834u;
    SET_GPR_U32(ctx, 31, 0x1D583Cu);
    ctx->pc = 0x1D5838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5834u;
            // 0x1d5838: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D583Cu; }
        if (ctx->pc != 0x1D583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D583Cu; }
        if (ctx->pc != 0x1D583Cu) { return; }
    }
    ctx->pc = 0x1D583Cu;
    // 0x1d583c: 0xc060544  jal         func_181510
    ctx->pc = 0x1D583Cu;
    SET_GPR_U32(ctx, 31, 0x1D5844u);
    ctx->pc = 0x1D5840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D583Cu;
            // 0x1d5840: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5844u; }
        if (ctx->pc != 0x1D5844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5844u; }
        if (ctx->pc != 0x1D5844u) { return; }
    }
    ctx->pc = 0x1D5844u;
    // 0x1d5844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d5844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d5848: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d5848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1d584c: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1d584cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5850: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1d5854: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d5854u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1d5858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d585c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d585cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d5860: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d5860u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5864: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d5864u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5868: 0x0  nop
    ctx->pc = 0x1d5868u;
    // NOP
    // 0x1d586c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d586cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d5870: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d5870u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d5874: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d5878: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1d5878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d587c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d587cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d5880: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d5880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d5884: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d5884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d5888: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d588c: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1d588cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1d5890: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5894: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d5894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d5898: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d589c: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1d589cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1d58a0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d58a4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1d58a8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1d58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1d58ac: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d58acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d58b0: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d58b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d58b4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1D58B4u;
    SET_GPR_U32(ctx, 31, 0x1D58BCu);
    ctx->pc = 0x1D58B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58B4u;
            // 0x1d58b8: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58BCu; }
        if (ctx->pc != 0x1D58BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58BCu; }
        if (ctx->pc != 0x1D58BCu) { return; }
    }
    ctx->pc = 0x1D58BCu;
    // 0x1d58bc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d58c0: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1d58c4: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x1d58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x1d58c8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1d58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1d58cc: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1d58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1d58d0: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d58d4: 0x24636f40  addiu       $v1, $v1, 0x6F40
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28480));
    // 0x1d58d8: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1d58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1d58dc: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1d58e0: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x1d58e4: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1d58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1d58e8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d58ec: 0x24635b10  addiu       $v1, $v1, 0x5B10
    ctx->pc = 0x1d58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x1d58f0: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1d58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1d58f4: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D58F4u;
    SET_GPR_U32(ctx, 31, 0x1D58FCu);
    ctx->pc = 0x1D58F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58F4u;
            // 0x1d58f8: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58FCu; }
        if (ctx->pc != 0x1D58FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58FCu; }
        if (ctx->pc != 0x1D58FCu) { return; }
    }
    ctx->pc = 0x1D58FCu;
    // 0x1d58fc: 0xc060544  jal         func_181510
    ctx->pc = 0x1D58FCu;
    SET_GPR_U32(ctx, 31, 0x1D5904u);
    ctx->pc = 0x1D5900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58FCu;
            // 0x1d5900: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5904u; }
        if (ctx->pc != 0x1D5904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5904u; }
        if (ctx->pc != 0x1D5904u) { return; }
    }
    ctx->pc = 0x1D5904u;
    // 0x1d5904: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d5904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d5908: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d5908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1d590c: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1d590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5910: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x1d5914: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d5914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d5918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d591c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d591cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5920: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d5920u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5924: 0x0  nop
    ctx->pc = 0x1d5924u;
    // NOP
    // 0x1d5928: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d5928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d592c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d592cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d5930: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d5934: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1d5934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d5938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d593c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d593cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d5940: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d5940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d5944: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5948: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1d5948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1d594c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5950: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d5950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d5954: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5958: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1d5958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1d595c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d595cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d5960: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d5960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1d5964: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1d5964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1d5968: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d5968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d596c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d5970: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1D5970u;
    SET_GPR_U32(ctx, 31, 0x1D5978u);
    ctx->pc = 0x1D5974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5970u;
            // 0x1d5974: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5978u; }
        if (ctx->pc != 0x1D5978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5978u; }
        if (ctx->pc != 0x1D5978u) { return; }
    }
    ctx->pc = 0x1D5978u;
    // 0x1d5978: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d597c: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5980: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x1d5980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
    // 0x1d5984: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1d5988: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1d5988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1d598c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d598cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d5990: 0x24637770  addiu       $v1, $v1, 0x7770
    ctx->pc = 0x1d5990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30576));
    // 0x1d5994: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1d5994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1d5998: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1d5998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1d599c: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x1d599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x1d59a0: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1d59a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1d59a4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d59a8: 0x24635b10  addiu       $v1, $v1, 0x5B10
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x1d59ac: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1d59acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1d59b0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D59B0u;
    SET_GPR_U32(ctx, 31, 0x1D59B8u);
    ctx->pc = 0x1D59B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59B0u;
            // 0x1d59b4: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59B8u; }
        if (ctx->pc != 0x1D59B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59B8u; }
        if (ctx->pc != 0x1D59B8u) { return; }
    }
    ctx->pc = 0x1D59B8u;
    // 0x1d59b8: 0xc060544  jal         func_181510
    ctx->pc = 0x1D59B8u;
    SET_GPR_U32(ctx, 31, 0x1D59C0u);
    ctx->pc = 0x1D59BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D59B8u;
            // 0x1d59bc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59C0u; }
        if (ctx->pc != 0x1D59C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D59C0u; }
        if (ctx->pc != 0x1D59C0u) { return; }
    }
    ctx->pc = 0x1D59C0u;
    // 0x1d59c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d59c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d59c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1d59c8: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1d59c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d59cc: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1d59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x1d59d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1d59d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d59d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d59d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59d8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d59d8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d59dc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d59dcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d59e0: 0x0  nop
    ctx->pc = 0x1d59e0u;
    // NOP
    // 0x1d59e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d59e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d59e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d59e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d59ec: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d59ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d59f0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1d59f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1d59f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d59f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d59f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d59fc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d59fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d5a00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5a04: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1d5a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1d5a08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5a0c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1d5a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d5a10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5a14: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1d5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1d5a18: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d5a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d5a1c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d5a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1d5a20: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1d5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1d5a24: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1d5a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1d5a28: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d5a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1d5a2c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1D5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A34u);
    ctx->pc = 0x1D5A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A2Cu;
            // 0x1d5a30: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A34u; }
        if (ctx->pc != 0x1D5A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A34u; }
        if (ctx->pc != 0x1D5A34u) { return; }
    }
    ctx->pc = 0x1D5A34u;
    // 0x1d5a34: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1d5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1d5a38: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1d5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1d5a3c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5a40: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x1d5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1d5a44: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1d5a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1d5a48: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5a4c: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x1d5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
    // 0x1d5a50: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1d5a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x1d5a54: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1d5a58: 0x2442b130  addiu       $v0, $v0, -0x4ED0
    ctx->pc = 0x1d5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947120));
    // 0x1d5a5c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1d5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1d5a60: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5a64: 0x24425b10  addiu       $v0, $v0, 0x5B10
    ctx->pc = 0x1d5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23312));
    // 0x1d5a68: 0xc060694  jal         func_181A50
    ctx->pc = 0x1D5A68u;
    SET_GPR_U32(ctx, 31, 0x1D5A70u);
    ctx->pc = 0x1D5A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A68u;
            // 0x1d5a6c: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A70u; }
        if (ctx->pc != 0x1D5A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A70u; }
        if (ctx->pc != 0x1D5A70u) { return; }
    }
    ctx->pc = 0x1D5A70u;
    // 0x1d5a70: 0xc060544  jal         func_181510
    ctx->pc = 0x1D5A70u;
    SET_GPR_U32(ctx, 31, 0x1D5A78u);
    ctx->pc = 0x1D5A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5A70u;
            // 0x1d5a74: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A78u; }
        if (ctx->pc != 0x1D5A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A78u; }
        if (ctx->pc != 0x1D5A78u) { return; }
    }
    ctx->pc = 0x1D5A78u;
    // 0x1d5a78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d5a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1d5a7c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1d5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1d5a80: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1d5a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5a84: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1d5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1d5a88: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x1d5a88u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x1d5a8c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5a90: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d5a90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d5a94: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1d5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1d5a98: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1d5a98u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5a9c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1d5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1d5aa0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1d5aa0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5aa4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1d5aa4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1d5aa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d5aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d5aac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d5ab0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d5ab0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d5ab4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5ab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1d5ab8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1d5ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1d5abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d5ac0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1d5ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1d5ac4: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1d5ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1d5ac8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5acc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1d5accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1d5ad0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1d5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5ad4: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1d5ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1d5ad8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1d5ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x1d5adc: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1d5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1d5ae0: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1d5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x1d5ae4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1d5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x1d5ae8: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1d5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1d5aec: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1D5AECu;
    SET_GPR_U32(ctx, 31, 0x1D5AF4u);
    ctx->pc = 0x1D5AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AECu;
            // 0x1d5af0: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5AF4u; }
        if (ctx->pc != 0x1D5AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5AF4u; }
        if (ctx->pc != 0x1D5AF4u) { return; }
    }
    ctx->pc = 0x1D5AF4u;
    // 0x1d5af4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d5af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5af8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5B04u;
            // 0x1d5b08: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5B0Cu;
}
