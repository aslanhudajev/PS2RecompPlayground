#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage1Boss
// Address: 0x1615f0 - 0x1619ec
void CreateStage1Boss_0x1615f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage1Boss_0x1615f0");
#endif

    ctx->pc = 0x1615f0u;

    // 0x1615f0: 0x27bdf9d0  addiu       $sp, $sp, -0x630
    ctx->pc = 0x1615f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965712));
    // 0x1615f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1615f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1615f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1615fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1615fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161604: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x161604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161608: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x161608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16160c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x16160Cu;
    SET_GPR_U32(ctx, 31, 0x161614u);
    ctx->pc = 0x161610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16160Cu;
            // 0x161610: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161614u; }
        if (ctx->pc != 0x161614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161614u; }
        if (ctx->pc != 0x161614u) { return; }
    }
    ctx->pc = 0x161614u;
    // 0x161614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161618: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x161618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16161c: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x16161Cu;
    SET_GPR_U32(ctx, 31, 0x161624u);
    ctx->pc = 0x161620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16161Cu;
            // 0x161620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161624u; }
        if (ctx->pc != 0x161624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161624u; }
        if (ctx->pc != 0x161624u) { return; }
    }
    ctx->pc = 0x161624u;
    // 0x161624: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x161624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x161628: 0x27b00500  addiu       $s0, $sp, 0x500
    ctx->pc = 0x161628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x16162c: 0x24421a20  addiu       $v0, $v0, 0x1A20
    ctx->pc = 0x16162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6688));
    // 0x161630: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x161630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x161634: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x161634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x161638: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x161638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x16163c: 0x244221c0  addiu       $v0, $v0, 0x21C0
    ctx->pc = 0x16163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8640));
    // 0x161640: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x161640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x161644: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x161644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x161648: 0x24426970  addiu       $v0, $v0, 0x6970
    ctx->pc = 0x161648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26992));
    // 0x16164c: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x16164cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x161650: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x161650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x161654: 0x244219f0  addiu       $v0, $v0, 0x19F0
    ctx->pc = 0x161654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6640));
    // 0x161658: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x161658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x16165c: 0xc060694  jal         func_181A50
    ctx->pc = 0x16165Cu;
    SET_GPR_U32(ctx, 31, 0x161664u);
    ctx->pc = 0x161660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16165Cu;
            // 0x161660: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161664u; }
        if (ctx->pc != 0x161664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161664u; }
        if (ctx->pc != 0x161664u) { return; }
    }
    ctx->pc = 0x161664u;
    // 0x161664: 0xc060544  jal         func_181510
    ctx->pc = 0x161664u;
    SET_GPR_U32(ctx, 31, 0x16166Cu);
    ctx->pc = 0x161668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161664u;
            // 0x161668: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16166Cu; }
        if (ctx->pc != 0x16166Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16166Cu; }
        if (ctx->pc != 0x16166Cu) { return; }
    }
    ctx->pc = 0x16166Cu;
    // 0x16166c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x161670: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161674: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x161674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161678: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x161678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x16167c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16167cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161684: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x161684u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161688: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x161688u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16168c: 0x0  nop
    ctx->pc = 0x16168cu;
    // NOP
    // 0x161690: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x161690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x161694: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x161694u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x161698: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x16169c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16169cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1616a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1616a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1616a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1616a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1616a8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1616a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1616ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1616acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1616b0: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1616b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1616b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1616b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1616b8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1616b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1616bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1616bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1616c0: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1616c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1616c4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1616c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1616c8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1616c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1616cc: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1616ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1616d0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1616d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1616d4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1616d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1616d8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1616D8u;
    SET_GPR_U32(ctx, 31, 0x1616E0u);
    ctx->pc = 0x1616DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1616D8u;
            // 0x1616dc: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616E0u; }
        if (ctx->pc != 0x1616E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1616E0u; }
        if (ctx->pc != 0x1616E0u) { return; }
    }
    ctx->pc = 0x1616E0u;
    // 0x1616e0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1616e4: 0x27b003d0  addiu       $s0, $sp, 0x3D0
    ctx->pc = 0x1616e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x1616e8: 0x24631a20  addiu       $v1, $v1, 0x1A20
    ctx->pc = 0x1616e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
    // 0x1616ec: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1616ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1616f0: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1616f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1616f4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1616f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1616f8: 0x24632800  addiu       $v1, $v1, 0x2800
    ctx->pc = 0x1616f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10240));
    // 0x1616fc: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1616fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x161700: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x161700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x161704: 0x24636970  addiu       $v1, $v1, 0x6970
    ctx->pc = 0x161704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26992));
    // 0x161708: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x161708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x16170c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x16170cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x161710: 0x246319f0  addiu       $v1, $v1, 0x19F0
    ctx->pc = 0x161710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6640));
    // 0x161714: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x161714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x161718: 0xc060694  jal         func_181A50
    ctx->pc = 0x161718u;
    SET_GPR_U32(ctx, 31, 0x161720u);
    ctx->pc = 0x16171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161718u;
            // 0x16171c: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161720u; }
        if (ctx->pc != 0x161720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161720u; }
        if (ctx->pc != 0x161720u) { return; }
    }
    ctx->pc = 0x161720u;
    // 0x161720: 0xc060544  jal         func_181510
    ctx->pc = 0x161720u;
    SET_GPR_U32(ctx, 31, 0x161728u);
    ctx->pc = 0x161724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161720u;
            // 0x161724: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161728u; }
        if (ctx->pc != 0x161728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161728u; }
        if (ctx->pc != 0x161728u) { return; }
    }
    ctx->pc = 0x161728u;
    // 0x161728: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x161728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16172c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16172cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x161730: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x161730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161734: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x161734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x161738: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x161738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16173c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161740: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x161740u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161744: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x161744u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161748: 0x0  nop
    ctx->pc = 0x161748u;
    // NOP
    // 0x16174c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16174cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x161750: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x161750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x161754: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x161758: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x161758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16175c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16175cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x161760: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x161760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x161764: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x161764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x161768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16176c: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x16176cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x161770: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161774: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x161774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x161778: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16177c: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x16177cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x161780: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x161780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x161784: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x161784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x161788: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x161788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x16178c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x16178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x161790: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x161790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x161794: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x161794u;
    SET_GPR_U32(ctx, 31, 0x16179Cu);
    ctx->pc = 0x161798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161794u;
            // 0x161798: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16179Cu; }
        if (ctx->pc != 0x16179Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16179Cu; }
        if (ctx->pc != 0x16179Cu) { return; }
    }
    ctx->pc = 0x16179Cu;
    // 0x16179c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x16179cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1617a0: 0x27b002a0  addiu       $s0, $sp, 0x2A0
    ctx->pc = 0x1617a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1617a4: 0x24631a20  addiu       $v1, $v1, 0x1A20
    ctx->pc = 0x1617a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
    // 0x1617a8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1617a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1617ac: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x1617acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x1617b0: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1617b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1617b4: 0x24632e40  addiu       $v1, $v1, 0x2E40
    ctx->pc = 0x1617b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11840));
    // 0x1617b8: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x1617b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x1617bc: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1617bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1617c0: 0x24636970  addiu       $v1, $v1, 0x6970
    ctx->pc = 0x1617c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26992));
    // 0x1617c4: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x1617c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x1617c8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x1617c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x1617cc: 0x246319f0  addiu       $v1, $v1, 0x19F0
    ctx->pc = 0x1617ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6640));
    // 0x1617d0: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x1617d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x1617d4: 0xc060694  jal         func_181A50
    ctx->pc = 0x1617D4u;
    SET_GPR_U32(ctx, 31, 0x1617DCu);
    ctx->pc = 0x1617D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1617D4u;
            // 0x1617d8: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617DCu; }
        if (ctx->pc != 0x1617DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617DCu; }
        if (ctx->pc != 0x1617DCu) { return; }
    }
    ctx->pc = 0x1617DCu;
    // 0x1617dc: 0xc060544  jal         func_181510
    ctx->pc = 0x1617DCu;
    SET_GPR_U32(ctx, 31, 0x1617E4u);
    ctx->pc = 0x1617E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1617DCu;
            // 0x1617e0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617E4u; }
        if (ctx->pc != 0x1617E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617E4u; }
        if (ctx->pc != 0x1617E4u) { return; }
    }
    ctx->pc = 0x1617E4u;
    // 0x1617e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1617e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1617e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1617e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1617ec: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1617ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1617f0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1617f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1617f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1617f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1617f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1617f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617fc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1617fcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161800: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x161800u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161804: 0x0  nop
    ctx->pc = 0x161804u;
    // NOP
    // 0x161808: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x161808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16180c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16180cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x161810: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x161814: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x161814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x161818: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16181c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16181cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x161820: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x161820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x161824: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161828: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x161828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x16182c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161830: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x161830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x161834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x161834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161838: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x161838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x16183c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x16183cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x161840: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x161840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x161844: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x161844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x161848: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x161848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x16184c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x16184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x161850: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x161850u;
    SET_GPR_U32(ctx, 31, 0x161858u);
    ctx->pc = 0x161854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161850u;
            // 0x161854: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161858u; }
        if (ctx->pc != 0x161858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161858u; }
        if (ctx->pc != 0x161858u) { return; }
    }
    ctx->pc = 0x161858u;
    // 0x161858: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x161858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x16185c: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x16185cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x161860: 0x24631a20  addiu       $v1, $v1, 0x1A20
    ctx->pc = 0x161860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
    // 0x161864: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x161864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x161868: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x161868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x16186c: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x16186cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x161870: 0x246335e0  addiu       $v1, $v1, 0x35E0
    ctx->pc = 0x161870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13792));
    // 0x161874: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x161874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
    // 0x161878: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x161878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x16187c: 0x24636970  addiu       $v1, $v1, 0x6970
    ctx->pc = 0x16187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26992));
    // 0x161880: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x161880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x161884: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x161884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x161888: 0x246319f0  addiu       $v1, $v1, 0x19F0
    ctx->pc = 0x161888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6640));
    // 0x16188c: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x16188cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
    // 0x161890: 0xc060694  jal         func_181A50
    ctx->pc = 0x161890u;
    SET_GPR_U32(ctx, 31, 0x161898u);
    ctx->pc = 0x161894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161890u;
            // 0x161894: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161898u; }
        if (ctx->pc != 0x161898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161898u; }
        if (ctx->pc != 0x161898u) { return; }
    }
    ctx->pc = 0x161898u;
    // 0x161898: 0xc060544  jal         func_181510
    ctx->pc = 0x161898u;
    SET_GPR_U32(ctx, 31, 0x1618A0u);
    ctx->pc = 0x16189Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161898u;
            // 0x16189c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618A0u; }
        if (ctx->pc != 0x1618A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618A0u; }
        if (ctx->pc != 0x1618A0u) { return; }
    }
    ctx->pc = 0x1618A0u;
    // 0x1618a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1618a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1618a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1618a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1618a8: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1618a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1618ac: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1618acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1618b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1618b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1618b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1618b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618b8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1618b8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1618bc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1618bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1618c0: 0x0  nop
    ctx->pc = 0x1618c0u;
    // NOP
    // 0x1618c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1618c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1618c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1618c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1618cc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1618ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1618d0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1618d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1618d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1618d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1618d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1618d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1618dc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1618dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1618e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1618e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1618e4: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1618e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1618e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1618e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1618ec: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1618ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1618f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1618f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1618f4: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1618f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1618f8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1618f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1618fc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1618fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x161900: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x161900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x161904: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x161904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x161908: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x161908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x16190c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x16190Cu;
    SET_GPR_U32(ctx, 31, 0x161914u);
    ctx->pc = 0x161910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16190Cu;
            // 0x161910: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161914u; }
        if (ctx->pc != 0x161914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161914u; }
        if (ctx->pc != 0x161914u) { return; }
    }
    ctx->pc = 0x161914u;
    // 0x161914: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x161914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x161918: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16191c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x16191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x161920: 0x24421a20  addiu       $v0, $v0, 0x1A20
    ctx->pc = 0x161920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6688));
    // 0x161924: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x161924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x161928: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x161928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x16192c: 0x24423d80  addiu       $v0, $v0, 0x3D80
    ctx->pc = 0x16192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15744));
    // 0x161930: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x161930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x161934: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x161938: 0x24426980  addiu       $v0, $v0, 0x6980
    ctx->pc = 0x161938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x16193c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x16193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x161940: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x161940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x161944: 0x244219f0  addiu       $v0, $v0, 0x19F0
    ctx->pc = 0x161944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6640));
    // 0x161948: 0xc060694  jal         func_181A50
    ctx->pc = 0x161948u;
    SET_GPR_U32(ctx, 31, 0x161950u);
    ctx->pc = 0x16194Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161948u;
            // 0x16194c: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161950u; }
        if (ctx->pc != 0x161950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161950u; }
        if (ctx->pc != 0x161950u) { return; }
    }
    ctx->pc = 0x161950u;
    // 0x161950: 0xc060544  jal         func_181510
    ctx->pc = 0x161950u;
    SET_GPR_U32(ctx, 31, 0x161958u);
    ctx->pc = 0x161954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161950u;
            // 0x161954: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161958u; }
        if (ctx->pc != 0x161958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161958u; }
        if (ctx->pc != 0x161958u) { return; }
    }
    ctx->pc = 0x161958u;
    // 0x161958: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x161958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16195c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x16195cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x161960: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x161960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161964: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x161964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x161968: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x161968u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x16196c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161970: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x161970u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161974: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x161974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x161978: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x161978u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16197c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x16197cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x161980: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x161980u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161984: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x161984u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x161988: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x161988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16198c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161990: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x161990u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x161994: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x161998: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x161998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x16199c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16199cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1619a0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1619a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1619a4: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1619a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1619a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1619a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1619ac: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1619acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1619b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1619b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1619b4: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1619b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1619b8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1619b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x1619bc: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1619bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1619c0: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1619c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x1619c4: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x1619c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
    // 0x1619c8: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1619c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1619cc: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1619CCu;
    SET_GPR_U32(ctx, 31, 0x1619D4u);
    ctx->pc = 0x1619D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1619CCu;
            // 0x1619d0: 0xafa00128  sw          $zero, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619D4u; }
        if (ctx->pc != 0x1619D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619D4u; }
        if (ctx->pc != 0x1619D4u) { return; }
    }
    ctx->pc = 0x1619D4u;
    // 0x1619d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1619d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1619d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1619d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1619dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1619dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1619e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1619e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1619e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1619E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1619E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1619E4u;
            // 0x1619e8: 0x27bd0630  addiu       $sp, $sp, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1619ECu;
}
