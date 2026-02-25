#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateWeapon_Laser
// Address: 0x152cf0 - 0x152d70
void CreateWeapon_Laser_0x152cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateWeapon_Laser_0x152cf0");
#endif

    ctx->pc = 0x152cf0u;

    // 0x152cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152cf4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x152cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x152cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152cfc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x152cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152d00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152d04: 0xc055008  jal         func_154020
    ctx->pc = 0x152D04u;
    SET_GPR_U32(ctx, 31, 0x152D0Cu);
    ctx->pc = 0x152D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152D04u;
            // 0x152d08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154020u;
    if (runtime->hasFunction(0x154020u)) {
        auto targetFn = runtime->lookupFunction(0x154020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D0Cu; }
        if (ctx->pc != 0x152D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlLaser2_0x154020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D0Cu; }
        if (ctx->pc != 0x152D0Cu) { return; }
    }
    ctx->pc = 0x152D0Cu;
    // 0x152d0c: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152D0Cu;
    SET_GPR_U32(ctx, 31, 0x152D14u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D14u; }
        if (ctx->pc != 0x152D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D14u; }
        if (ctx->pc != 0x152D14u) { return; }
    }
    ctx->pc = 0x152D14u;
    // 0x152d14: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x152d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x152d18: 0x2406ffe8  addiu       $a2, $zero, -0x18
    ctx->pc = 0x152d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x152d1c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x152d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x152d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152d24: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152d28: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x152d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x152d2c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x152d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x152d30: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x152d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x152d34: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x152d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x152d38: 0x8e07009c  lw          $a3, 0x9C($s0)
    ctx->pc = 0x152d38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x152d3c: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x152d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x152d40: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x152d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x152d44: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x152d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x152d48: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x152d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x152d4c: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x152d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x152d50: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x152d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x152d54: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x152d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x152d58: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x152d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x152d5c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x152d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x152d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152d68: 0x3e00008  jr          $ra
    ctx->pc = 0x152D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152D68u;
            // 0x152d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152D70u;
}
