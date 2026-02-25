#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage6Boss_Hontai
// Address: 0x1c4580 - 0x1c47a8
void CreateStage6Boss_Hontai_0x1c4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage6Boss_Hontai_0x1c4580");
#endif

    ctx->pc = 0x1c4580u;

    // 0x1c4580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4584: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1c4584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c4588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c458c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4590: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C4590u;
    SET_GPR_U32(ctx, 31, 0x1C4598u);
    ctx->pc = 0x1C4594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4590u;
            // 0x1c4594: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4598u; }
        if (ctx->pc != 0x1C4598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4598u; }
        if (ctx->pc != 0x1C4598u) { return; }
    }
    ctx->pc = 0x1C4598u;
    // 0x1c4598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c459c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1c45a0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1c45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1c45a4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1C45A4u;
    SET_GPR_U32(ctx, 31, 0x1C45ACu);
    ctx->pc = 0x1C45A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45A4u;
            // 0x1c45a8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45ACu; }
        if (ctx->pc != 0x1C45ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45ACu; }
        if (ctx->pc != 0x1C45ACu) { return; }
    }
    ctx->pc = 0x1C45ACu;
    // 0x1c45ac: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C45ACu;
    SET_GPR_U32(ctx, 31, 0x1C45B4u);
    ctx->pc = 0x1C45B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45ACu;
            // 0x1c45b0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45B4u; }
        if (ctx->pc != 0x1C45B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45B4u; }
        if (ctx->pc != 0x1C45B4u) { return; }
    }
    ctx->pc = 0x1C45B4u;
    // 0x1c45b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c45b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45b8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1C45B8u;
    SET_GPR_U32(ctx, 31, 0x1C45C0u);
    ctx->pc = 0x1C45BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45B8u;
            // 0x1c45bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45C0u; }
        if (ctx->pc != 0x1C45C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45C0u; }
        if (ctx->pc != 0x1C45C0u) { return; }
    }
    ctx->pc = 0x1C45C0u;
    // 0x1c45c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c45c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c45c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c45c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c45c8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1C45C8u;
    SET_GPR_U32(ctx, 31, 0x1C45D0u);
    ctx->pc = 0x1C45CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45C8u;
            // 0x1c45cc: 0xac221c80  sw          $v0, 0x1C80($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45D0u; }
        if (ctx->pc != 0x1C45D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45D0u; }
        if (ctx->pc != 0x1C45D0u) { return; }
    }
    ctx->pc = 0x1C45D0u;
    // 0x1c45d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c45d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c45d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c45d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45d8: 0xac221c84  sw          $v0, 0x1C84($at)
    ctx->pc = 0x1c45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7300), GPR_U32(ctx, 2));
    // 0x1c45dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c45dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c45e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c45e4: 0x8c271c80  lw          $a3, 0x1C80($at)
    ctx->pc = 0x1c45e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7296)));
    // 0x1c45e8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c45e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c45ec: 0x8c281c84  lw          $t0, 0x1C84($at)
    ctx->pc = 0x1c45ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7300)));
    // 0x1c45f0: 0xc060614  jal         func_181850
    ctx->pc = 0x1C45F0u;
    SET_GPR_U32(ctx, 31, 0x1C45F8u);
    ctx->pc = 0x1C45F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45F0u;
            // 0x1c45f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45F8u; }
        if (ctx->pc != 0x1C45F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C45F8u; }
        if (ctx->pc != 0x1C45F8u) { return; }
    }
    ctx->pc = 0x1C45F8u;
    // 0x1c45f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c45f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45fc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1C45FCu;
    SET_GPR_U32(ctx, 31, 0x1C4604u);
    ctx->pc = 0x1C4600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45FCu;
            // 0x1c4600: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4604u; }
        if (ctx->pc != 0x1C4604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4604u; }
        if (ctx->pc != 0x1C4604u) { return; }
    }
    ctx->pc = 0x1C4604u;
    // 0x1c4604: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1c4604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1c4608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c460c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4610: 0xc060604  jal         func_181810
    ctx->pc = 0x1C4610u;
    SET_GPR_U32(ctx, 31, 0x1C4618u);
    ctx->pc = 0x1C4614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4610u;
            // 0x1c4614: 0x24c6aa68  addiu       $a2, $a2, -0x5598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4618u; }
        if (ctx->pc != 0x1C4618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4618u; }
        if (ctx->pc != 0x1C4618u) { return; }
    }
    ctx->pc = 0x1C4618u;
    // 0x1c4618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c461c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4620: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1C4620u;
    SET_GPR_U32(ctx, 31, 0x1C4628u);
    ctx->pc = 0x1C4624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4620u;
            // 0x1c4624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4628u; }
        if (ctx->pc != 0x1C4628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4628u; }
        if (ctx->pc != 0x1C4628u) { return; }
    }
    ctx->pc = 0x1C4628u;
    // 0x1c4628: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1c4628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1c462c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1C462Cu;
    SET_GPR_U32(ctx, 31, 0x1C4634u);
    ctx->pc = 0x1C4630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C462Cu;
            // 0x1c4630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4634u; }
        if (ctx->pc != 0x1C4634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4634u; }
        if (ctx->pc != 0x1C4634u) { return; }
    }
    ctx->pc = 0x1C4634u;
    // 0x1c4634: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1C4634u;
    SET_GPR_U32(ctx, 31, 0x1C463Cu);
    ctx->pc = 0x1C4638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4634u;
            // 0x1c4638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C463Cu; }
        if (ctx->pc != 0x1C463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C463Cu; }
        if (ctx->pc != 0x1C463Cu) { return; }
    }
    ctx->pc = 0x1C463Cu;
    // 0x1c463c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C463Cu;
    SET_GPR_U32(ctx, 31, 0x1C4644u);
    ctx->pc = 0x1C4640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C463Cu;
            // 0x1c4640: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4644u; }
        if (ctx->pc != 0x1C4644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4644u; }
        if (ctx->pc != 0x1C4644u) { return; }
    }
    ctx->pc = 0x1C4644u;
    // 0x1c4644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4648: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1c4648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1c464c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1c464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1c4650: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1C4650u;
    SET_GPR_U32(ctx, 31, 0x1C4658u);
    ctx->pc = 0x1C4654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4650u;
            // 0x1c4654: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4658u; }
        if (ctx->pc != 0x1C4658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4658u; }
        if (ctx->pc != 0x1C4658u) { return; }
    }
    ctx->pc = 0x1C4658u;
    // 0x1c4658: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C4658u;
    SET_GPR_U32(ctx, 31, 0x1C4660u);
    ctx->pc = 0x1C465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4658u;
            // 0x1c465c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4660u; }
        if (ctx->pc != 0x1C4660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4660u; }
        if (ctx->pc != 0x1C4660u) { return; }
    }
    ctx->pc = 0x1C4660u;
    // 0x1c4660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4664: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1C4664u;
    SET_GPR_U32(ctx, 31, 0x1C466Cu);
    ctx->pc = 0x1C4668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4664u;
            // 0x1c4668: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C466Cu; }
        if (ctx->pc != 0x1C466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C466Cu; }
        if (ctx->pc != 0x1C466Cu) { return; }
    }
    ctx->pc = 0x1C466Cu;
    // 0x1c466c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4670: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4674: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1C4674u;
    SET_GPR_U32(ctx, 31, 0x1C467Cu);
    ctx->pc = 0x1C4678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4674u;
            // 0x1c4678: 0xac221c80  sw          $v0, 0x1C80($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C467Cu; }
        if (ctx->pc != 0x1C467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C467Cu; }
        if (ctx->pc != 0x1C467Cu) { return; }
    }
    ctx->pc = 0x1C467Cu;
    // 0x1c467c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c467cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4680: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4684: 0xac221c84  sw          $v0, 0x1C84($at)
    ctx->pc = 0x1c4684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7300), GPR_U32(ctx, 2));
    // 0x1c4688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c468c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c468cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4690: 0x8c271c80  lw          $a3, 0x1C80($at)
    ctx->pc = 0x1c4690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7296)));
    // 0x1c4694: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4698: 0x8c281c84  lw          $t0, 0x1C84($at)
    ctx->pc = 0x1c4698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7300)));
    // 0x1c469c: 0xc060614  jal         func_181850
    ctx->pc = 0x1C469Cu;
    SET_GPR_U32(ctx, 31, 0x1C46A4u);
    ctx->pc = 0x1C46A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C469Cu;
            // 0x1c46a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46A4u; }
        if (ctx->pc != 0x1C46A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46A4u; }
        if (ctx->pc != 0x1C46A4u) { return; }
    }
    ctx->pc = 0x1C46A4u;
    // 0x1c46a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c46a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46a8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1C46A8u;
    SET_GPR_U32(ctx, 31, 0x1C46B0u);
    ctx->pc = 0x1C46ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46A8u;
            // 0x1c46ac: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B0u; }
        if (ctx->pc != 0x1C46B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B0u; }
        if (ctx->pc != 0x1C46B0u) { return; }
    }
    ctx->pc = 0x1C46B0u;
    // 0x1c46b0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1c46b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1c46b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c46b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c46b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c46bc: 0xc060604  jal         func_181810
    ctx->pc = 0x1C46BCu;
    SET_GPR_U32(ctx, 31, 0x1C46C4u);
    ctx->pc = 0x1C46C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46BCu;
            // 0x1c46c0: 0x24c6aa68  addiu       $a2, $a2, -0x5598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46C4u; }
        if (ctx->pc != 0x1C46C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46C4u; }
        if (ctx->pc != 0x1C46C4u) { return; }
    }
    ctx->pc = 0x1C46C4u;
    // 0x1c46c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c46c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c46c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46cc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1C46CCu;
    SET_GPR_U32(ctx, 31, 0x1C46D4u);
    ctx->pc = 0x1C46D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46CCu;
            // 0x1c46d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46D4u; }
        if (ctx->pc != 0x1C46D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46D4u; }
        if (ctx->pc != 0x1C46D4u) { return; }
    }
    ctx->pc = 0x1C46D4u;
    // 0x1c46d4: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1c46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1c46d8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1C46D8u;
    SET_GPR_U32(ctx, 31, 0x1C46E0u);
    ctx->pc = 0x1C46DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46D8u;
            // 0x1c46dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E0u; }
        if (ctx->pc != 0x1C46E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E0u; }
        if (ctx->pc != 0x1C46E0u) { return; }
    }
    ctx->pc = 0x1C46E0u;
    // 0x1c46e0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1C46E0u;
    SET_GPR_U32(ctx, 31, 0x1C46E8u);
    ctx->pc = 0x1C46E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46E0u;
            // 0x1c46e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E8u; }
        if (ctx->pc != 0x1C46E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E8u; }
        if (ctx->pc != 0x1C46E8u) { return; }
    }
    ctx->pc = 0x1C46E8u;
    // 0x1c46e8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1C46E8u;
    SET_GPR_U32(ctx, 31, 0x1C46F0u);
    ctx->pc = 0x1C46ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46E8u;
            // 0x1c46ec: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46F0u; }
        if (ctx->pc != 0x1C46F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46F0u; }
        if (ctx->pc != 0x1C46F0u) { return; }
    }
    ctx->pc = 0x1C46F0u;
    // 0x1c46f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c46f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46f4: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1c46f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1c46f8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1c46f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1c46fc: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1C46FCu;
    SET_GPR_U32(ctx, 31, 0x1C4704u);
    ctx->pc = 0x1C4700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46FCu;
            // 0x1c4700: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4704u; }
        if (ctx->pc != 0x1C4704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4704u; }
        if (ctx->pc != 0x1C4704u) { return; }
    }
    ctx->pc = 0x1C4704u;
    // 0x1c4704: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1C4704u;
    SET_GPR_U32(ctx, 31, 0x1C470Cu);
    ctx->pc = 0x1C4708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4704u;
            // 0x1c4708: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C470Cu; }
        if (ctx->pc != 0x1C470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C470Cu; }
        if (ctx->pc != 0x1C470Cu) { return; }
    }
    ctx->pc = 0x1C470Cu;
    // 0x1c470c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c470cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4710: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1C4710u;
    SET_GPR_U32(ctx, 31, 0x1C4718u);
    ctx->pc = 0x1C4714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4710u;
            // 0x1c4714: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4718u; }
        if (ctx->pc != 0x1C4718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4718u; }
        if (ctx->pc != 0x1C4718u) { return; }
    }
    ctx->pc = 0x1C4718u;
    // 0x1c4718: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c471c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c471cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4720: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1C4720u;
    SET_GPR_U32(ctx, 31, 0x1C4728u);
    ctx->pc = 0x1C4724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4720u;
            // 0x1c4724: 0xac221c80  sw          $v0, 0x1C80($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4728u; }
        if (ctx->pc != 0x1C4728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4728u; }
        if (ctx->pc != 0x1C4728u) { return; }
    }
    ctx->pc = 0x1C4728u;
    // 0x1c4728: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c472c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c472cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4730: 0xac221c84  sw          $v0, 0x1C84($at)
    ctx->pc = 0x1c4730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7300), GPR_U32(ctx, 2));
    // 0x1c4734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4738: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c473c: 0x8c271c80  lw          $a3, 0x1C80($at)
    ctx->pc = 0x1c473cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7296)));
    // 0x1c4740: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c4744: 0x8c281c84  lw          $t0, 0x1C84($at)
    ctx->pc = 0x1c4744u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7300)));
    // 0x1c4748: 0xc060614  jal         func_181850
    ctx->pc = 0x1C4748u;
    SET_GPR_U32(ctx, 31, 0x1C4750u);
    ctx->pc = 0x1C474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4748u;
            // 0x1c474c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4750u; }
        if (ctx->pc != 0x1C4750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4750u; }
        if (ctx->pc != 0x1C4750u) { return; }
    }
    ctx->pc = 0x1C4750u;
    // 0x1c4750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4754: 0xc06060c  jal         func_181830
    ctx->pc = 0x1C4754u;
    SET_GPR_U32(ctx, 31, 0x1C475Cu);
    ctx->pc = 0x1C4758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4754u;
            // 0x1c4758: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C475Cu; }
        if (ctx->pc != 0x1C475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C475Cu; }
        if (ctx->pc != 0x1C475Cu) { return; }
    }
    ctx->pc = 0x1C475Cu;
    // 0x1c475c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1c475cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1c4760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c4764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4768: 0xc060604  jal         func_181810
    ctx->pc = 0x1C4768u;
    SET_GPR_U32(ctx, 31, 0x1C4770u);
    ctx->pc = 0x1C476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4768u;
            // 0x1c476c: 0x24c6aa68  addiu       $a2, $a2, -0x5598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4770u; }
        if (ctx->pc != 0x1C4770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4770u; }
        if (ctx->pc != 0x1C4770u) { return; }
    }
    ctx->pc = 0x1C4770u;
    // 0x1c4770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4778: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1C4778u;
    SET_GPR_U32(ctx, 31, 0x1C4780u);
    ctx->pc = 0x1C477Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4778u;
            // 0x1c477c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4780u; }
        if (ctx->pc != 0x1C4780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4780u; }
        if (ctx->pc != 0x1C4780u) { return; }
    }
    ctx->pc = 0x1C4780u;
    // 0x1c4780: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1c4784: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1C4784u;
    SET_GPR_U32(ctx, 31, 0x1C478Cu);
    ctx->pc = 0x1C4788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4784u;
            // 0x1c4788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C478Cu; }
        if (ctx->pc != 0x1C478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C478Cu; }
        if (ctx->pc != 0x1C478Cu) { return; }
    }
    ctx->pc = 0x1C478Cu;
    // 0x1c478c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1C478Cu;
    SET_GPR_U32(ctx, 31, 0x1C4794u);
    ctx->pc = 0x1C4790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C478Cu;
            // 0x1c4790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4794u; }
        if (ctx->pc != 0x1C4794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4794u; }
        if (ctx->pc != 0x1C4794u) { return; }
    }
    ctx->pc = 0x1C4794u;
    // 0x1c4794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c479c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c479cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c47a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C47A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C47A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47A0u;
            // 0x1c47a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C47A8u;
}
