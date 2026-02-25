#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateChip_Mid
// Address: 0x1ec2b0 - 0x1ec3f0
void CreateChip_Mid_0x1ec2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateChip_Mid_0x1ec2b0");
#endif

    ctx->pc = 0x1ec2b0u;

    // 0x1ec2b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec2b4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ec2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ec2b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ec2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ec2bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec2c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec2c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec2cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ec2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2d0: 0x8c233830  lw          $v1, 0x3830($at)
    ctx->pc = 0x1ec2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ec2d4: 0x28610201  slti        $at, $v1, 0x201
    ctx->pc = 0x1ec2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1ec2d8: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EC2D8u;
    {
        const bool branch_taken_0x1ec2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2D8u;
            // 0x1ec2dc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2d8) {
            ctx->pc = 0x1EC3D8u;
            goto label_1ec3d8;
        }
    }
    ctx->pc = 0x1EC2E0u;
    // 0x1ec2e0: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC2E0u;
    SET_GPR_U32(ctx, 31, 0x1EC2E8u);
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2E8u; }
        if (ctx->pc != 0x1EC2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2E8u; }
        if (ctx->pc != 0x1EC2E8u) { return; }
    }
    ctx->pc = 0x1EC2E8u;
    // 0x1ec2e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2f0: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC2F0u;
    SET_GPR_U32(ctx, 31, 0x1EC2F8u);
    ctx->pc = 0x1EC2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2F0u;
            // 0x1ec2f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2F8u; }
        if (ctx->pc != 0x1EC2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2F8u; }
        if (ctx->pc != 0x1EC2F8u) { return; }
    }
    ctx->pc = 0x1EC2F8u;
    // 0x1ec2f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec300: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC300u;
    SET_GPR_U32(ctx, 31, 0x1EC308u);
    ctx->pc = 0x1EC304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC300u;
            // 0x1ec304: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC308u; }
        if (ctx->pc != 0x1EC308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC308u; }
        if (ctx->pc != 0x1EC308u) { return; }
    }
    ctx->pc = 0x1EC308u;
    // 0x1ec308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec30c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec310: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC310u;
    SET_GPR_U32(ctx, 31, 0x1EC318u);
    ctx->pc = 0x1EC314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC310u;
            // 0x1ec314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC318u; }
        if (ctx->pc != 0x1EC318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC318u; }
        if (ctx->pc != 0x1EC318u) { return; }
    }
    ctx->pc = 0x1EC318u;
    // 0x1ec318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec31c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec320: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC320u;
    SET_GPR_U32(ctx, 31, 0x1EC328u);
    ctx->pc = 0x1EC324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC320u;
            // 0x1ec324: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC328u; }
        if (ctx->pc != 0x1EC328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC328u; }
        if (ctx->pc != 0x1EC328u) { return; }
    }
    ctx->pc = 0x1EC328u;
    // 0x1ec328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec32c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec330: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC330u;
    SET_GPR_U32(ctx, 31, 0x1EC338u);
    ctx->pc = 0x1EC334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC330u;
            // 0x1ec334: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC338u; }
        if (ctx->pc != 0x1EC338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC338u; }
        if (ctx->pc != 0x1EC338u) { return; }
    }
    ctx->pc = 0x1EC338u;
    // 0x1ec338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec33c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec340: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC340u;
    SET_GPR_U32(ctx, 31, 0x1EC348u);
    ctx->pc = 0x1EC344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC340u;
            // 0x1ec344: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC348u; }
        if (ctx->pc != 0x1EC348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC348u; }
        if (ctx->pc != 0x1EC348u) { return; }
    }
    ctx->pc = 0x1EC348u;
    // 0x1ec348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec34c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec350: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC350u;
    SET_GPR_U32(ctx, 31, 0x1EC358u);
    ctx->pc = 0x1EC354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC350u;
            // 0x1ec354: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC358u; }
        if (ctx->pc != 0x1EC358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC358u; }
        if (ctx->pc != 0x1EC358u) { return; }
    }
    ctx->pc = 0x1EC358u;
    // 0x1ec358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec35c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec360: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC360u;
    SET_GPR_U32(ctx, 31, 0x1EC368u);
    ctx->pc = 0x1EC364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC360u;
            // 0x1ec364: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC368u; }
        if (ctx->pc != 0x1EC368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC368u; }
        if (ctx->pc != 0x1EC368u) { return; }
    }
    ctx->pc = 0x1EC368u;
    // 0x1ec368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec36c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec370: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC370u;
    SET_GPR_U32(ctx, 31, 0x1EC378u);
    ctx->pc = 0x1EC374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC370u;
            // 0x1ec374: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC378u; }
        if (ctx->pc != 0x1EC378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC378u; }
        if (ctx->pc != 0x1EC378u) { return; }
    }
    ctx->pc = 0x1EC378u;
    // 0x1ec378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec37c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec380: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC380u;
    SET_GPR_U32(ctx, 31, 0x1EC388u);
    ctx->pc = 0x1EC384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC380u;
            // 0x1ec384: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC388u; }
        if (ctx->pc != 0x1EC388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC388u; }
        if (ctx->pc != 0x1EC388u) { return; }
    }
    ctx->pc = 0x1EC388u;
    // 0x1ec388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec38c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec390: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC390u;
    SET_GPR_U32(ctx, 31, 0x1EC398u);
    ctx->pc = 0x1EC394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC390u;
            // 0x1ec394: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC398u; }
        if (ctx->pc != 0x1EC398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC398u; }
        if (ctx->pc != 0x1EC398u) { return; }
    }
    ctx->pc = 0x1EC398u;
    // 0x1ec398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec39c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3a0: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC3A0u;
    SET_GPR_U32(ctx, 31, 0x1EC3A8u);
    ctx->pc = 0x1EC3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3A0u;
            // 0x1ec3a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3A8u; }
        if (ctx->pc != 0x1EC3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3A8u; }
        if (ctx->pc != 0x1EC3A8u) { return; }
    }
    ctx->pc = 0x1EC3A8u;
    // 0x1ec3a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3b0: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC3B0u;
    SET_GPR_U32(ctx, 31, 0x1EC3B8u);
    ctx->pc = 0x1EC3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3B0u;
            // 0x1ec3b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3B8u; }
        if (ctx->pc != 0x1EC3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3B8u; }
        if (ctx->pc != 0x1EC3B8u) { return; }
    }
    ctx->pc = 0x1EC3B8u;
    // 0x1ec3b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3c0: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC3C0u;
    SET_GPR_U32(ctx, 31, 0x1EC3C8u);
    ctx->pc = 0x1EC3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3C0u;
            // 0x1ec3c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3C8u; }
        if (ctx->pc != 0x1EC3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3C8u; }
        if (ctx->pc != 0x1EC3C8u) { return; }
    }
    ctx->pc = 0x1EC3C8u;
    // 0x1ec3c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3d0: 0xc07b118  jal         func_1EC460
    ctx->pc = 0x1EC3D0u;
    SET_GPR_U32(ctx, 31, 0x1EC3D8u);
    ctx->pc = 0x1EC3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3D0u;
            // 0x1ec3d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC460u;
    if (runtime->hasFunction(0x1EC460u)) {
        auto targetFn = runtime->lookupFunction(0x1EC460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3D8u; }
        if (ctx->pc != 0x1EC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_Mid_0x1ec460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3D8u; }
        if (ctx->pc != 0x1EC3D8u) { return; }
    }
    ctx->pc = 0x1EC3D8u;
label_1ec3d8:
    // 0x1ec3d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ec3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec3dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec3e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3E8u;
            // 0x1ec3ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC3D8u: goto label_1ec3d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC3F0u;
}
