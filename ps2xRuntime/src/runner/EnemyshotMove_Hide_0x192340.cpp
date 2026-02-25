#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Hide
// Address: 0x192340 - 0x192444
void EnemyshotMove_Hide_0x192340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Hide_0x192340");
#endif

    ctx->pc = 0x192340u;

    // 0x192340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192344: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x192344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x192348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19234c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19234cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192354: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x192354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19235c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x19235Cu;
    {
        const bool branch_taken_0x19235c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19235Cu;
            // 0x192360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19235c) {
            ctx->pc = 0x192398u;
            goto label_192398;
        }
    }
    ctx->pc = 0x192364u;
    // 0x192364: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x192364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192368: 0x3c02c3a0  lui         $v0, 0xC3A0
    ctx->pc = 0x192368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50080 << 16));
    // 0x19236c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19236cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192370: 0x0  nop
    ctx->pc = 0x192370u;
    // NOP
    // 0x192374: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x192374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192378: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x192378u;
    {
        const bool branch_taken_0x192378 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192378u;
            // 0x19237c: 0x3c0243a0  lui         $v0, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192378) {
            ctx->pc = 0x192398u;
            goto label_192398;
        }
    }
    ctx->pc = 0x192380u;
    // 0x192380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192384: 0x0  nop
    ctx->pc = 0x192384u;
    // NOP
    // 0x192388: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x192388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19238c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x19238Cu;
    {
        const bool branch_taken_0x19238c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19238c) {
            ctx->pc = 0x1923A8u;
            goto label_1923a8;
        }
    }
    ctx->pc = 0x192394u;
    // 0x192394: 0x0  nop
    ctx->pc = 0x192394u;
    // NOP
label_192398:
    // 0x192398: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192398u;
    SET_GPR_U32(ctx, 31, 0x1923A0u);
    ctx->pc = 0x19239Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192398u;
            // 0x19239c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1923A0u; }
        if (ctx->pc != 0x1923A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1923A0u; }
        if (ctx->pc != 0x1923A0u) { return; }
    }
    ctx->pc = 0x1923A0u;
    // 0x1923a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1923A0u;
    {
        const bool branch_taken_0x1923a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1923a0) {
            ctx->pc = 0x192428u;
            goto label_192428;
        }
    }
    ctx->pc = 0x1923A8u;
label_1923a8:
    // 0x1923a8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1923a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1923ac: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1923ACu;
    {
        const bool branch_taken_0x1923ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1923ac) {
            ctx->pc = 0x1923C8u;
            goto label_1923c8;
        }
    }
    ctx->pc = 0x1923B4u;
    // 0x1923b4: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1923B4u;
    SET_GPR_U32(ctx, 31, 0x1923BCu);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1923BCu; }
        if (ctx->pc != 0x1923BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1923BCu; }
        if (ctx->pc != 0x1923BCu) { return; }
    }
    ctx->pc = 0x1923BCu;
    // 0x1923bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1923BCu;
    {
        const bool branch_taken_0x1923bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1923bc) {
            ctx->pc = 0x192428u;
            goto label_192428;
        }
    }
    ctx->pc = 0x1923C4u;
    // 0x1923c4: 0x0  nop
    ctx->pc = 0x1923c4u;
    // NOP
label_1923c8:
    // 0x1923c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1923c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1923cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1923ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1923d0: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x1923d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x1923d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1923d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1923d8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x1923d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1923dc: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1923dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1923e0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1923e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1923e4: 0x24c64280  addiu       $a2, $a2, 0x4280
    ctx->pc = 0x1923e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17024));
    // 0x1923e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1923e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1923ec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1923ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1923f0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1923f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1923f4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1923f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1923f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1923f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1923fc: 0x0  nop
    ctx->pc = 0x1923fcu;
    // NOP
    // 0x192400: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x192400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x192404: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x192404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x192408: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x192408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19240c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x19240cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x192410: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x192410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x192414: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x192414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192418: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19241c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x19241Cu;
    SET_GPR_U32(ctx, 31, 0x192424u);
    ctx->pc = 0x192420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19241Cu;
            // 0x192420: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192424u; }
        if (ctx->pc != 0x192424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192424u; }
        if (ctx->pc != 0x192424u) { return; }
    }
    ctx->pc = 0x192424u;
    // 0x192424: 0x0  nop
    ctx->pc = 0x192424u;
    // NOP
label_192428:
    // 0x192428: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x192428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19242c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x192430: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x192430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x192434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19243c: 0x3e00008  jr          $ra
    ctx->pc = 0x19243Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19243Cu;
            // 0x192440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192398u: goto label_192398;
            case 0x1923A8u: goto label_1923a8;
            case 0x1923C8u: goto label_1923c8;
            case 0x192428u: goto label_192428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192444u;
}
