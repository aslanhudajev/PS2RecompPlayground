#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_01_Hontai
// Address: 0x1a43d0 - 0x1a44c8
void CreateEn4_01_Hontai_0x1a43d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_01_Hontai_0x1a43d0");
#endif

    ctx->pc = 0x1a43d0u;

    // 0x1a43d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a43d4: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1a43d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1a43d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a43d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a43dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a43dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a43e0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A43E0u;
    SET_GPR_U32(ctx, 31, 0x1A43E8u);
    ctx->pc = 0x1A43E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43E0u;
            // 0x1a43e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43E8u; }
        if (ctx->pc != 0x1A43E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43E8u; }
        if (ctx->pc != 0x1A43E8u) { return; }
    }
    ctx->pc = 0x1A43E8u;
    // 0x1a43e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a43e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43ec: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a43f0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a43f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a43f4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A43F4u;
    SET_GPR_U32(ctx, 31, 0x1A43FCu);
    ctx->pc = 0x1A43F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43F4u;
            // 0x1a43f8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43FCu; }
        if (ctx->pc != 0x1A43FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A43FCu; }
        if (ctx->pc != 0x1A43FCu) { return; }
    }
    ctx->pc = 0x1A43FCu;
    // 0x1a43fc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A43FCu;
    SET_GPR_U32(ctx, 31, 0x1A4404u);
    ctx->pc = 0x1A4400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A43FCu;
            // 0x1a4400: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4404u; }
        if (ctx->pc != 0x1A4404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4404u; }
        if (ctx->pc != 0x1A4404u) { return; }
    }
    ctx->pc = 0x1A4404u;
    // 0x1a4404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a4404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4408: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a440c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4410: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1A4410u;
    SET_GPR_U32(ctx, 31, 0x1A4418u);
    ctx->pc = 0x1A4414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4410u;
            // 0x1a4414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4418u; }
        if (ctx->pc != 0x1A4418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4418u; }
        if (ctx->pc != 0x1A4418u) { return; }
    }
    ctx->pc = 0x1A4418u;
    // 0x1a4418: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1A4418u;
    SET_GPR_U32(ctx, 31, 0x1A4420u);
    ctx->pc = 0x1A441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4418u;
            // 0x1a441c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4420u; }
        if (ctx->pc != 0x1A4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4420u; }
        if (ctx->pc != 0x1A4420u) { return; }
    }
    ctx->pc = 0x1A4420u;
    // 0x1a4420: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a4420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a4424: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a4424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a4428: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1A4428u;
    SET_GPR_U32(ctx, 31, 0x1A4430u);
    ctx->pc = 0x1A442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4428u;
            // 0x1a442c: 0xac221ad0  sw          $v0, 0x1AD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4430u; }
        if (ctx->pc != 0x1A4430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4430u; }
        if (ctx->pc != 0x1A4430u) { return; }
    }
    ctx->pc = 0x1A4430u;
    // 0x1a4430: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a4430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a4434: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a4434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4438: 0xac221ad4  sw          $v0, 0x1AD4($at)
    ctx->pc = 0x1a4438u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6868), GPR_U32(ctx, 2));
    // 0x1a443c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a443cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4440: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a4440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a4444: 0x8c271ad0  lw          $a3, 0x1AD0($at)
    ctx->pc = 0x1a4444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6864)));
    // 0x1a4448: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a4448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a444c: 0x8c281ad4  lw          $t0, 0x1AD4($at)
    ctx->pc = 0x1a444cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6868)));
    // 0x1a4450: 0xc060614  jal         func_181850
    ctx->pc = 0x1A4450u;
    SET_GPR_U32(ctx, 31, 0x1A4458u);
    ctx->pc = 0x1A4454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4450u;
            // 0x1a4454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4458u; }
        if (ctx->pc != 0x1A4458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4458u; }
        if (ctx->pc != 0x1A4458u) { return; }
    }
    ctx->pc = 0x1A4458u;
    // 0x1a4458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a445c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A445Cu;
    SET_GPR_U32(ctx, 31, 0x1A4464u);
    ctx->pc = 0x1A4460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A445Cu;
            // 0x1a4460: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4464u; }
        if (ctx->pc != 0x1A4464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4464u; }
        if (ctx->pc != 0x1A4464u) { return; }
    }
    ctx->pc = 0x1A4464u;
    // 0x1a4464: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a4464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a4468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a446c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4470: 0xc060604  jal         func_181810
    ctx->pc = 0x1A4470u;
    SET_GPR_U32(ctx, 31, 0x1A4478u);
    ctx->pc = 0x1A4474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4470u;
            // 0x1a4474: 0x24c6a958  addiu       $a2, $a2, -0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4478u; }
        if (ctx->pc != 0x1A4478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4478u; }
        if (ctx->pc != 0x1A4478u) { return; }
    }
    ctx->pc = 0x1A4478u;
    // 0x1a4478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a447c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a447cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4480: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A4480u;
    SET_GPR_U32(ctx, 31, 0x1A4488u);
    ctx->pc = 0x1A4484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4480u;
            // 0x1a4484: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4488u; }
        if (ctx->pc != 0x1A4488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4488u; }
        if (ctx->pc != 0x1A4488u) { return; }
    }
    ctx->pc = 0x1A4488u;
    // 0x1a4488: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a4488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a448c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A448Cu;
    SET_GPR_U32(ctx, 31, 0x1A4494u);
    ctx->pc = 0x1A4490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A448Cu;
            // 0x1a4490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4494u; }
        if (ctx->pc != 0x1A4494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4494u; }
        if (ctx->pc != 0x1A4494u) { return; }
    }
    ctx->pc = 0x1A4494u;
    // 0x1a4494: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A4494u;
    SET_GPR_U32(ctx, 31, 0x1A449Cu);
    ctx->pc = 0x1A4498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4494u;
            // 0x1a4498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A449Cu; }
        if (ctx->pc != 0x1A449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A449Cu; }
        if (ctx->pc != 0x1A449Cu) { return; }
    }
    ctx->pc = 0x1A449Cu;
    // 0x1a449c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a44a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a44a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a44a4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1a44a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a44a8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1a44a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a44ac: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1A44ACu;
    SET_GPR_U32(ctx, 31, 0x1A44B4u);
    ctx->pc = 0x1A44B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44ACu;
            // 0x1a44b0: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44B4u; }
        if (ctx->pc != 0x1A44B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A44B4u; }
        if (ctx->pc != 0x1A44B4u) { return; }
    }
    ctx->pc = 0x1A44B4u;
    // 0x1a44b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a44b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a44b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a44b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a44bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a44bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a44c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A44C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A44C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A44C0u;
            // 0x1a44c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A44C8u;
}
