#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotHitFunction_Weapon_Laser
// Address: 0x152870 - 0x152968
void ShotHitFunction_Weapon_Laser_0x152870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotHitFunction_Weapon_Laser_0x152870");
#endif

    ctx->pc = 0x152870u;

    // 0x152870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152874: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x152878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15287c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152880: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x152880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x152884: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152888: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x152888u;
    {
        const bool branch_taken_0x152888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152888) {
            ctx->pc = 0x152958u;
            goto label_152958;
        }
    }
    ctx->pc = 0x152890u;
    // 0x152890: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152894: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x152894u;
    {
        const bool branch_taken_0x152894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x152894) {
            ctx->pc = 0x152958u;
            goto label_152958;
        }
    }
    ctx->pc = 0x15289Cu;
    // 0x15289c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x15289cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1528a0: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1528A0u;
    {
        const bool branch_taken_0x1528a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1528a0) {
            ctx->pc = 0x152958u;
            goto label_152958;
        }
    }
    ctx->pc = 0x1528A8u;
    // 0x1528a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1528a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1528ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1528acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1528b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1528b4: 0xc060718  jal         func_181C60
    ctx->pc = 0x1528B4u;
    SET_GPR_U32(ctx, 31, 0x1528BCu);
    ctx->pc = 0x1528B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1528B4u;
            // 0x1528b8: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528BCu; }
        if (ctx->pc != 0x1528BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528BCu; }
        if (ctx->pc != 0x1528BCu) { return; }
    }
    ctx->pc = 0x1528BCu;
    // 0x1528bc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1528bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1528c0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1528c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1528c4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1528c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1528c8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1528c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1528cc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1528CCu;
    SET_GPR_U32(ctx, 31, 0x1528D4u);
    ctx->pc = 0x1528D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1528CCu;
            // 0x1528d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528D4u; }
        if (ctx->pc != 0x1528D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528D4u; }
        if (ctx->pc != 0x1528D4u) { return; }
    }
    ctx->pc = 0x1528D4u;
    // 0x1528d4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1528d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1528d8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1528d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1528dc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1528dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1528e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1528e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1528e4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1528E4u;
    SET_GPR_U32(ctx, 31, 0x1528ECu);
    ctx->pc = 0x1528E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1528E4u;
            // 0x1528e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528ECu; }
        if (ctx->pc != 0x1528ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1528ECu; }
        if (ctx->pc != 0x1528ECu) { return; }
    }
    ctx->pc = 0x1528ECu;
    // 0x1528ec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1528ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1528f0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1528f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1528f4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1528f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1528f8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1528f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1528fc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1528FCu;
    SET_GPR_U32(ctx, 31, 0x152904u);
    ctx->pc = 0x152900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1528FCu;
            // 0x152900: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152904u; }
        if (ctx->pc != 0x152904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152904u; }
        if (ctx->pc != 0x152904u) { return; }
    }
    ctx->pc = 0x152904u;
    // 0x152904: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x152904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152908: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x152908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15290c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x15290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152910: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x152910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x152914: 0xc05d080  jal         func_174200
    ctx->pc = 0x152914u;
    SET_GPR_U32(ctx, 31, 0x15291Cu);
    ctx->pc = 0x152918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152914u;
            // 0x152918: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15291Cu; }
        if (ctx->pc != 0x15291Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15291Cu; }
        if (ctx->pc != 0x15291Cu) { return; }
    }
    ctx->pc = 0x15291Cu;
    // 0x15291c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152920: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x152920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x152924: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x152924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152928: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x152928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15292c: 0xc05d080  jal         func_174200
    ctx->pc = 0x15292Cu;
    SET_GPR_U32(ctx, 31, 0x152934u);
    ctx->pc = 0x152930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15292Cu;
            // 0x152930: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152934u; }
        if (ctx->pc != 0x152934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152934u; }
        if (ctx->pc != 0x152934u) { return; }
    }
    ctx->pc = 0x152934u;
    // 0x152934: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x152934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152938: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x152938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x15293c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x15293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152940: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x152940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x152944: 0xc05d080  jal         func_174200
    ctx->pc = 0x152944u;
    SET_GPR_U32(ctx, 31, 0x15294Cu);
    ctx->pc = 0x152948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152944u;
            // 0x152948: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15294Cu; }
        if (ctx->pc != 0x15294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15294Cu; }
        if (ctx->pc != 0x15294Cu) { return; }
    }
    ctx->pc = 0x15294Cu;
    // 0x15294c: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x15294Cu;
    SET_GPR_U32(ctx, 31, 0x152954u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152954u; }
        if (ctx->pc != 0x152954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152954u; }
        if (ctx->pc != 0x152954u) { return; }
    }
    ctx->pc = 0x152954u;
    // 0x152954: 0x0  nop
    ctx->pc = 0x152954u;
    // NOP
label_152958:
    // 0x152958: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15295c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15295cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152960: 0x3e00008  jr          $ra
    ctx->pc = 0x152960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152960u;
            // 0x152964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152958u: goto label_152958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x152968u;
}
