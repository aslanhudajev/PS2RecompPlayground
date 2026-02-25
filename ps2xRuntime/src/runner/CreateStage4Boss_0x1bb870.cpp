#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage4Boss
// Address: 0x1bb870 - 0x1bb95c
void CreateStage4Boss_0x1bb870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage4Boss_0x1bb870");
#endif

    ctx->pc = 0x1bb870u;

    // 0x1bb870: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1bb874: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1bb878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bb87c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bb880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb884: 0x2463b990  addiu       $v1, $v1, -0x4670
    ctx->pc = 0x1bb884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949264));
    // 0x1bb888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb88c: 0x2442bbc0  addiu       $v0, $v0, -0x4440
    ctx->pc = 0x1bb88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949824));
    // 0x1bb890: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1bb890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1bb894: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb898: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1bb898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1bb89c: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1bb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1bb8a0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1bb8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1bb8a4: 0x2463f230  addiu       $v1, $v1, -0xDD0
    ctx->pc = 0x1bb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963760));
    // 0x1bb8a8: 0x2442b960  addiu       $v0, $v0, -0x46A0
    ctx->pc = 0x1bb8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949216));
    // 0x1bb8ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1bb8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8b0: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x1bb8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x1bb8b4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1bb8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bb8b8: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1bb8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1bb8bc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1BB8BCu;
    SET_GPR_U32(ctx, 31, 0x1BB8C4u);
    ctx->pc = 0x1BB8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8BCu;
            // 0x1bb8c0: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8C4u; }
        if (ctx->pc != 0x1BB8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8C4u; }
        if (ctx->pc != 0x1BB8C4u) { return; }
    }
    ctx->pc = 0x1BB8C4u;
    // 0x1bb8c4: 0xc060544  jal         func_181510
    ctx->pc = 0x1BB8C4u;
    SET_GPR_U32(ctx, 31, 0x1BB8CCu);
    ctx->pc = 0x1BB8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8C4u;
            // 0x1bb8c8: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8CCu; }
        if (ctx->pc != 0x1BB8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8CCu; }
        if (ctx->pc != 0x1BB8CCu) { return; }
    }
    ctx->pc = 0x1BB8CCu;
    // 0x1bb8cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1bb8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1bb8d0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1bb8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1bb8d4: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1bb8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb8d8: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x1bb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x1bb8dc: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x1bb8dcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x1bb8e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bb8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb8e4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1bb8e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb8e8: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1bb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x1bb8ec: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1bb8ecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb8f0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1bb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1bb8f4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1bb8f4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb8f8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1bb8f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1bb8fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bb8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bb900: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1bb900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bb904: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1bb904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bb908: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1bb90c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1bb90cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1bb910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bb910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bb914: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1bb914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1bb918: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1bb918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1bb91c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb920: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1bb920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1bb924: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bb924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb928: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1bb928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1bb92c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1bb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1bb930: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1bb930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1bb934: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1bb934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1bb938: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x1bb938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x1bb93c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1bb93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1bb940: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1BB940u;
    SET_GPR_U32(ctx, 31, 0x1BB948u);
    ctx->pc = 0x1BB944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB940u;
            // 0x1bb944: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB948u; }
        if (ctx->pc != 0x1BB948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB948u; }
        if (ctx->pc != 0x1BB948u) { return; }
    }
    ctx->pc = 0x1BB948u;
    // 0x1bb948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bb948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb94c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb94cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb954: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB954u;
            // 0x1bb958: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB95Cu;
}
