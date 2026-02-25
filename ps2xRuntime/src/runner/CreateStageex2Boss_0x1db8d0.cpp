#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStageex2Boss
// Address: 0x1db8d0 - 0x1db9bc
void CreateStageex2Boss_0x1db8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStageex2Boss_0x1db8d0");
#endif

    ctx->pc = 0x1db8d0u;

    // 0x1db8d0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1db8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1db8d4: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1db8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1db8d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1db8dc: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1db8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1db8e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db8e4: 0x2463b9f0  addiu       $v1, $v1, -0x4610
    ctx->pc = 0x1db8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949360));
    // 0x1db8e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db8ec: 0x2442bc20  addiu       $v0, $v0, -0x43E0
    ctx->pc = 0x1db8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949920));
    // 0x1db8f0: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1db8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1db8f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db8f8: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1db8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1db8fc: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1db8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1db900: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1db904: 0x2463f7c0  addiu       $v1, $v1, -0x840
    ctx->pc = 0x1db904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965184));
    // 0x1db908: 0x2442b9c0  addiu       $v0, $v0, -0x4640
    ctx->pc = 0x1db908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x1db90c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1db90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db910: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x1db910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x1db914: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1db914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1db918: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1db918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1db91c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1DB91Cu;
    SET_GPR_U32(ctx, 31, 0x1DB924u);
    ctx->pc = 0x1DB920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB91Cu;
            // 0x1db920: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB924u; }
        if (ctx->pc != 0x1DB924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB924u; }
        if (ctx->pc != 0x1DB924u) { return; }
    }
    ctx->pc = 0x1DB924u;
    // 0x1db924: 0xc060544  jal         func_181510
    ctx->pc = 0x1DB924u;
    SET_GPR_U32(ctx, 31, 0x1DB92Cu);
    ctx->pc = 0x1DB928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB924u;
            // 0x1db928: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB92Cu; }
        if (ctx->pc != 0x1DB92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB92Cu; }
        if (ctx->pc != 0x1DB92Cu) { return; }
    }
    ctx->pc = 0x1DB92Cu;
    // 0x1db92c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1db930: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1db930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1db934: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1db934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db938: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1db938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1db93c: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x1db93cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x1db940: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1db940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db944: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1db944u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1db948: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1db948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1db94c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1db94cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db950: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1db950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1db954: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1db954u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db958: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1db958u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1db95c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1db95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1db960: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1db964: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1db964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1db968: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1db968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1db96c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1db96cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1db970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1db970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1db974: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1db974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1db978: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1db978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1db97c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1db97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db980: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1db980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1db984: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1db984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db988: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1db988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1db98c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1db98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1db990: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1db990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1db994: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1db994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1db998: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x1db998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x1db99c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1db99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1db9a0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1DB9A0u;
    SET_GPR_U32(ctx, 31, 0x1DB9A8u);
    ctx->pc = 0x1DB9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9A0u;
            // 0x1db9a4: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9A8u; }
        if (ctx->pc != 0x1DB9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DB9A8u; }
        if (ctx->pc != 0x1DB9A8u) { return; }
    }
    ctx->pc = 0x1DB9A8u;
    // 0x1db9a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB9B4u;
            // 0x1db9b8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB9BCu;
}
