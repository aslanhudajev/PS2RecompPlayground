#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Ryushi_Add
// Address: 0x193370 - 0x19344c
void EnemyshotMove_Ryushi_Add_0x193370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Ryushi_Add_0x193370");
#endif

    ctx->pc = 0x193370u;

    // 0x193370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193378: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19337c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19337Cu;
    {
        const bool branch_taken_0x19337c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19337c) {
            ctx->pc = 0x193438u;
            goto label_193438;
        }
    }
    ctx->pc = 0x193384u;
    // 0x193384: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x193384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193388: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x19338c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19338cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193390: 0x0  nop
    ctx->pc = 0x193390u;
    // NOP
    // 0x193394: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193398: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x193398u;
    {
        const bool branch_taken_0x193398 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193398u;
            // 0x19339c: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193398) {
            ctx->pc = 0x1933F8u;
            goto label_1933f8;
        }
    }
    ctx->pc = 0x1933A0u;
    // 0x1933a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1933a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1933a4: 0x0  nop
    ctx->pc = 0x1933a4u;
    // NOP
    // 0x1933a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1933a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1933ac: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1933ACu;
    {
        const bool branch_taken_0x1933ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1933ac) {
            ctx->pc = 0x1933F8u;
            goto label_1933f8;
        }
    }
    ctx->pc = 0x1933B4u;
    // 0x1933b4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1933b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1933b8: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x1933b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x1933bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1933bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1933c0: 0x0  nop
    ctx->pc = 0x1933c0u;
    // NOP
    // 0x1933c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1933c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1933c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1933C8u;
    {
        const bool branch_taken_0x1933c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1933CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1933C8u;
            // 0x1933cc: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933c8) {
            ctx->pc = 0x1933F8u;
            goto label_1933f8;
        }
    }
    ctx->pc = 0x1933D0u;
    // 0x1933d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1933d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1933d4: 0x0  nop
    ctx->pc = 0x1933d4u;
    // NOP
    // 0x1933d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1933d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1933dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1933DCu;
    {
        const bool branch_taken_0x1933dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1933dc) {
            ctx->pc = 0x1933F8u;
            goto label_1933f8;
        }
    }
    ctx->pc = 0x1933E4u;
    // 0x1933e4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1933e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1933e8: 0x28610259  slti        $at, $v1, 0x259
    ctx->pc = 0x1933e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x1933ec: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1933ECu;
    {
        const bool branch_taken_0x1933ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1933ec) {
            ctx->pc = 0x193408u;
            goto label_193408;
        }
    }
    ctx->pc = 0x1933F4u;
    // 0x1933f4: 0x0  nop
    ctx->pc = 0x1933f4u;
    // NOP
label_1933f8:
    // 0x1933f8: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1933F8u;
    SET_GPR_U32(ctx, 31, 0x193400u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193400u; }
        if (ctx->pc != 0x193400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193400u; }
        if (ctx->pc != 0x193400u) { return; }
    }
    ctx->pc = 0x193400u;
    // 0x193400: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x193400u;
    {
        const bool branch_taken_0x193400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193400) {
            ctx->pc = 0x193440u;
            goto label_193440;
        }
    }
    ctx->pc = 0x193408u;
label_193408:
    // 0x193408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x193408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19340c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x19340cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x193410: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193414: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x193414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x193418: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x193418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x19341c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x19341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193420: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x193420u;
    {
        const bool branch_taken_0x193420 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x193420) {
            ctx->pc = 0x193440u;
            goto label_193440;
        }
    }
    ctx->pc = 0x193428u;
    // 0x193428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19342c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19342Cu;
    {
        const bool branch_taken_0x19342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19342Cu;
            // 0x193430: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19342c) {
            ctx->pc = 0x193440u;
            goto label_193440;
        }
    }
    ctx->pc = 0x193434u;
    // 0x193434: 0x0  nop
    ctx->pc = 0x193434u;
    // NOP
label_193438:
    // 0x193438: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193438u;
    SET_GPR_U32(ctx, 31, 0x193440u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193440u; }
        if (ctx->pc != 0x193440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193440u; }
        if (ctx->pc != 0x193440u) { return; }
    }
    ctx->pc = 0x193440u;
label_193440:
    // 0x193440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193444: 0x3e00008  jr          $ra
    ctx->pc = 0x193444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193444u;
            // 0x193448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1933F8u: goto label_1933f8;
            case 0x193408u: goto label_193408;
            case 0x193438u: goto label_193438;
            case 0x193440u: goto label_193440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19344Cu;
}
