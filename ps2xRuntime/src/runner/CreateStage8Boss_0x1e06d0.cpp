#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage8Boss
// Address: 0x1e06d0 - 0x1e07c4
void CreateStage8Boss_0x1e06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage8Boss_0x1e06d0");
#endif

    ctx->pc = 0x1e06d0u;

    // 0x1e06d0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1e06d4: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e06d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e06d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e06d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e06dc: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e06e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e06e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e06e4: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x1e06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1e06e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e06e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e06ec: 0x24420a90  addiu       $v0, $v0, 0xA90
    ctx->pc = 0x1e06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2704));
    // 0x1e06f0: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1e06f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1e06f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e06f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06f8: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1e06f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1e06fc: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e0700: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1e0704: 0x246324b0  addiu       $v1, $v1, 0x24B0
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9392));
    // 0x1e0708: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x1e0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x1e070c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0710: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x1e0710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
    // 0x1e0714: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1e0714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e0718: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1e0718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1e071c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E071Cu;
    SET_GPR_U32(ctx, 31, 0x1E0724u);
    ctx->pc = 0x1E0720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E071Cu;
            // 0x1e0720: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0724u; }
        if (ctx->pc != 0x1E0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0724u; }
        if (ctx->pc != 0x1E0724u) { return; }
    }
    ctx->pc = 0x1E0724u;
    // 0x1e0724: 0xc060544  jal         func_181510
    ctx->pc = 0x1E0724u;
    SET_GPR_U32(ctx, 31, 0x1E072Cu);
    ctx->pc = 0x1E0728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0724u;
            // 0x1e0728: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E072Cu; }
        if (ctx->pc != 0x1E072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E072Cu; }
        if (ctx->pc != 0x1E072Cu) { return; }
    }
    ctx->pc = 0x1E072Cu;
    // 0x1e072c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e072cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e0730: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1e0730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1e0734: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1e0734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0738: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x1e0738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x1e073c: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x1e073cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1e0740: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e0740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0744: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1e0744u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e0748: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1e0748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x1e074c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1e074cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0750: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1e0750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1e0754: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e0754u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0758: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1e0758u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e075c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e075cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e0760: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e0764: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e0764u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e0768: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e076c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1e076cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0774: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x1e0774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1e0778: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e0778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e077c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0780: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1e0780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1e0784: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e0784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0788: 0xac600128  sw          $zero, 0x128($v1)
    ctx->pc = 0x1e0788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 0));
    // 0x1e078c: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1e078cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1e0790: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1e0790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1e0794: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1e0794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1e0798: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x1e0798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x1e079c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1e079cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1e07a0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1E07A0u;
    SET_GPR_U32(ctx, 31, 0x1E07A8u);
    ctx->pc = 0x1E07A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07A0u;
            // 0x1e07a4: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07A8u; }
        if (ctx->pc != 0x1E07A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07A8u; }
        if (ctx->pc != 0x1E07A8u) { return; }
    }
    ctx->pc = 0x1E07A8u;
    // 0x1e07a8: 0x24031770  addiu       $v1, $zero, 0x1770
    ctx->pc = 0x1e07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x1e07ac: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e07acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e07b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e07b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e07b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e07b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e07b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e07b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e07bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E07BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E07C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07BCu;
            // 0x1e07c0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E07C4u;
}
