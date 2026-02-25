#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateWeapon_Super
// Address: 0x152d70 - 0x152eb8
void CreateWeapon_Super_0x152d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateWeapon_Super_0x152d70");
#endif

    ctx->pc = 0x152d70u;

    // 0x152d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152d74: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x152d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x152d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152d7c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x152d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152d84: 0xc055008  jal         func_154020
    ctx->pc = 0x152D84u;
    SET_GPR_U32(ctx, 31, 0x152D8Cu);
    ctx->pc = 0x152D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152D84u;
            // 0x152d88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154020u;
    if (runtime->hasFunction(0x154020u)) {
        auto targetFn = runtime->lookupFunction(0x154020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D8Cu; }
        if (ctx->pc != 0x152D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlLaser2_0x154020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D8Cu; }
        if (ctx->pc != 0x152D8Cu) { return; }
    }
    ctx->pc = 0x152D8Cu;
    // 0x152d8c: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152D8Cu;
    SET_GPR_U32(ctx, 31, 0x152D94u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D94u; }
        if (ctx->pc != 0x152D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152D94u; }
        if (ctx->pc != 0x152D94u) { return; }
    }
    ctx->pc = 0x152D94u;
    // 0x152d94: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x152d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x152d98: 0x2408ffe8  addiu       $t0, $zero, -0x18
    ctx->pc = 0x152d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x152d9c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x152d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x152da0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x152da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152da4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152da8: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x152da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x152dac: 0x8e090098  lw          $t1, 0x98($s0)
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x152db0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x152db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152db8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x152db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x152dbc: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x152dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x152dc0: 0x8e09009c  lw          $t1, 0x9C($s0)
    ctx->pc = 0x152dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x152dc4: 0x2529ffd0  addiu       $t1, $t1, -0x30
    ctx->pc = 0x152dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967248));
    // 0x152dc8: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x152dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
    // 0x152dcc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x152dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x152dd0: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x152dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x152dd4: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x152dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    // 0x152dd8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x152dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x152ddc: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x152ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x152de0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x152de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x152de4: 0xc055008  jal         func_154020
    ctx->pc = 0x152DE4u;
    SET_GPR_U32(ctx, 31, 0x152DECu);
    ctx->pc = 0x152DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152DE4u;
            // 0x152de8: 0xac46003c  sw          $a2, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154020u;
    if (runtime->hasFunction(0x154020u)) {
        auto targetFn = runtime->lookupFunction(0x154020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DECu; }
        if (ctx->pc != 0x152DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlLaser2_0x154020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DECu; }
        if (ctx->pc != 0x152DECu) { return; }
    }
    ctx->pc = 0x152DECu;
    // 0x152dec: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152DECu;
    SET_GPR_U32(ctx, 31, 0x152DF4u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DF4u; }
        if (ctx->pc != 0x152DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152DF4u; }
        if (ctx->pc != 0x152DF4u) { return; }
    }
    ctx->pc = 0x152DF4u;
    // 0x152df4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x152df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x152df8: 0x2409ffec  addiu       $t1, $zero, -0x14
    ctx->pc = 0x152df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x152dfc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x152dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x152e00: 0x2408ffe8  addiu       $t0, $zero, -0x18
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x152e04: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152e08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x152e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152e0c: 0x8e0a0098  lw          $t2, 0x98($s0)
    ctx->pc = 0x152e0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x152e10: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x152e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x152e14: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x152e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e1c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x152e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x152e20: 0xac4a0008  sw          $t2, 0x8($v0)
    ctx->pc = 0x152e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 10));
    // 0x152e24: 0x8e0a009c  lw          $t2, 0x9C($s0)
    ctx->pc = 0x152e24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x152e28: 0x254affd0  addiu       $t2, $t2, -0x30
    ctx->pc = 0x152e28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967248));
    // 0x152e2c: 0xac4a000c  sw          $t2, 0xC($v0)
    ctx->pc = 0x152e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 10));
    // 0x152e30: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x152e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x152e34: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x152e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x152e38: 0xac470030  sw          $a3, 0x30($v0)
    ctx->pc = 0x152e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 7));
    // 0x152e3c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x152e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x152e40: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x152e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x152e44: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x152e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x152e48: 0xc055008  jal         func_154020
    ctx->pc = 0x152E48u;
    SET_GPR_U32(ctx, 31, 0x152E50u);
    ctx->pc = 0x152E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152E48u;
            // 0x152e4c: 0xac46003c  sw          $a2, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154020u;
    if (runtime->hasFunction(0x154020u)) {
        auto targetFn = runtime->lookupFunction(0x154020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E50u; }
        if (ctx->pc != 0x152E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMzlLaser2_0x154020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E50u; }
        if (ctx->pc != 0x152E50u) { return; }
    }
    ctx->pc = 0x152E50u;
    // 0x152e50: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152E50u;
    SET_GPR_U32(ctx, 31, 0x152E58u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E58u; }
        if (ctx->pc != 0x152E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152E58u; }
        if (ctx->pc != 0x152E58u) { return; }
    }
    ctx->pc = 0x152E58u;
    // 0x152e58: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x152e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x152e5c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x152e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x152e60: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x152e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x152e64: 0x2406ffe8  addiu       $a2, $zero, -0x18
    ctx->pc = 0x152e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x152e68: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152e70: 0x8e080098  lw          $t0, 0x98($s0)
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x152e74: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x152e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x152e78: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x152e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x152e7c: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x152e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x152e80: 0x8e08009c  lw          $t0, 0x9C($s0)
    ctx->pc = 0x152e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x152e84: 0x2508ffd0  addiu       $t0, $t0, -0x30
    ctx->pc = 0x152e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
    // 0x152e88: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x152e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x152e8c: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x152e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x152e90: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x152e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x152e94: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x152e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x152e98: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x152e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x152e9c: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x152e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x152ea0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x152ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x152ea4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x152ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x152ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x152EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EB0u;
            // 0x152eb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152EB8u;
}
