#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn8_kirai_Hontai
// Address: 0x1e5950 - 0x1e5a20
void CreateEn8_kirai_Hontai_0x1e5950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn8_kirai_Hontai_0x1e5950");
#endif

    ctx->pc = 0x1e5950u;

    // 0x1e5950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5954: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1e5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1e5958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e595c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5960: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E5960u;
    SET_GPR_U32(ctx, 31, 0x1E5968u);
    ctx->pc = 0x1E5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5960u;
            // 0x1e5964: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5968u; }
        if (ctx->pc != 0x1E5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5968u; }
        if (ctx->pc != 0x1E5968u) { return; }
    }
    ctx->pc = 0x1E5968u;
    // 0x1e5968: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e5968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e596c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1e596cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1e5970: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1e5970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1e5974: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E5974u;
    SET_GPR_U32(ctx, 31, 0x1E597Cu);
    ctx->pc = 0x1E5978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5974u;
            // 0x1e5978: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E597Cu; }
        if (ctx->pc != 0x1E597Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E597Cu; }
        if (ctx->pc != 0x1E597Cu) { return; }
    }
    ctx->pc = 0x1E597Cu;
    // 0x1e597c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E597Cu;
    SET_GPR_U32(ctx, 31, 0x1E5984u);
    ctx->pc = 0x1E5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E597Cu;
            // 0x1e5980: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5984u; }
        if (ctx->pc != 0x1E5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5984u; }
        if (ctx->pc != 0x1E5984u) { return; }
    }
    ctx->pc = 0x1E5984u;
    // 0x1e5984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5988: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1E5988u;
    SET_GPR_U32(ctx, 31, 0x1E5990u);
    ctx->pc = 0x1E598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5988u;
            // 0x1e598c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5990u; }
        if (ctx->pc != 0x1E5990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5990u; }
        if (ctx->pc != 0x1E5990u) { return; }
    }
    ctx->pc = 0x1E5990u;
    // 0x1e5990: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e5990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e5994: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5998: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1E5998u;
    SET_GPR_U32(ctx, 31, 0x1E59A0u);
    ctx->pc = 0x1E599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5998u;
            // 0x1e599c: 0xac222e00  sw          $v0, 0x2E00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59A0u; }
        if (ctx->pc != 0x1E59A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59A0u; }
        if (ctx->pc != 0x1E59A0u) { return; }
    }
    ctx->pc = 0x1E59A0u;
    // 0x1e59a0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e59a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e59a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e59a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59a8: 0xac222e04  sw          $v0, 0x2E04($at)
    ctx->pc = 0x1e59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11780), GPR_U32(ctx, 2));
    // 0x1e59ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e59acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59b0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e59b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e59b4: 0x8c272e00  lw          $a3, 0x2E00($at)
    ctx->pc = 0x1e59b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11776)));
    // 0x1e59b8: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e59bc: 0x8c282e04  lw          $t0, 0x2E04($at)
    ctx->pc = 0x1e59bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11780)));
    // 0x1e59c0: 0xc060614  jal         func_181850
    ctx->pc = 0x1E59C0u;
    SET_GPR_U32(ctx, 31, 0x1E59C8u);
    ctx->pc = 0x1E59C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59C0u;
            // 0x1e59c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59C8u; }
        if (ctx->pc != 0x1E59C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59C8u; }
        if (ctx->pc != 0x1E59C8u) { return; }
    }
    ctx->pc = 0x1E59C8u;
    // 0x1e59c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e59c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59cc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E59CCu;
    SET_GPR_U32(ctx, 31, 0x1E59D4u);
    ctx->pc = 0x1E59D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59CCu;
            // 0x1e59d0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59D4u; }
        if (ctx->pc != 0x1E59D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59D4u; }
        if (ctx->pc != 0x1E59D4u) { return; }
    }
    ctx->pc = 0x1E59D4u;
    // 0x1e59d4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e59d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e59d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e59d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e59dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e59e0: 0xc060604  jal         func_181810
    ctx->pc = 0x1E59E0u;
    SET_GPR_U32(ctx, 31, 0x1E59E8u);
    ctx->pc = 0x1E59E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59E0u;
            // 0x1e59e4: 0x24c6ab78  addiu       $a2, $a2, -0x5488 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59E8u; }
        if (ctx->pc != 0x1E59E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59E8u; }
        if (ctx->pc != 0x1E59E8u) { return; }
    }
    ctx->pc = 0x1E59E8u;
    // 0x1e59e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e59e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e59ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e59f0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E59F0u;
    SET_GPR_U32(ctx, 31, 0x1E59F8u);
    ctx->pc = 0x1E59F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59F0u;
            // 0x1e59f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59F8u; }
        if (ctx->pc != 0x1E59F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59F8u; }
        if (ctx->pc != 0x1E59F8u) { return; }
    }
    ctx->pc = 0x1E59F8u;
    // 0x1e59f8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1e59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1e59fc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E59FCu;
    SET_GPR_U32(ctx, 31, 0x1E5A04u);
    ctx->pc = 0x1E5A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59FCu;
            // 0x1e5a00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A04u; }
        if (ctx->pc != 0x1E5A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A04u; }
        if (ctx->pc != 0x1E5A04u) { return; }
    }
    ctx->pc = 0x1E5A04u;
    // 0x1e5a04: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E5A04u;
    SET_GPR_U32(ctx, 31, 0x1E5A0Cu);
    ctx->pc = 0x1E5A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A04u;
            // 0x1e5a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A0Cu; }
        if (ctx->pc != 0x1E5A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A0Cu; }
        if (ctx->pc != 0x1E5A0Cu) { return; }
    }
    ctx->pc = 0x1E5A0Cu;
    // 0x1e5a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A18u;
            // 0x1e5a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5A20u;
}
