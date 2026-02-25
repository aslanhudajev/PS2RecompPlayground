#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEnex1_02_Hontai
// Address: 0x1cc620 - 0x1cc718
void CreateEnex1_02_Hontai_0x1cc620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEnex1_02_Hontai_0x1cc620");
#endif

    ctx->pc = 0x1cc620u;

    // 0x1cc620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc624: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1cc624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1cc628: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc630: 0xc060694  jal         func_181A50
    ctx->pc = 0x1CC630u;
    SET_GPR_U32(ctx, 31, 0x1CC638u);
    ctx->pc = 0x1CC634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC630u;
            // 0x1cc634: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC638u; }
        if (ctx->pc != 0x1CC638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC638u; }
        if (ctx->pc != 0x1CC638u) { return; }
    }
    ctx->pc = 0x1CC638u;
    // 0x1cc638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc63c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1cc640: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1cc640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1cc644: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1CC644u;
    SET_GPR_U32(ctx, 31, 0x1CC64Cu);
    ctx->pc = 0x1CC648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC644u;
            // 0x1cc648: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC64Cu; }
        if (ctx->pc != 0x1CC64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC64Cu; }
        if (ctx->pc != 0x1CC64Cu) { return; }
    }
    ctx->pc = 0x1CC64Cu;
    // 0x1cc64c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1CC64Cu;
    SET_GPR_U32(ctx, 31, 0x1CC654u);
    ctx->pc = 0x1CC650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC64Cu;
            // 0x1cc650: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC654u; }
        if (ctx->pc != 0x1CC654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC654u; }
        if (ctx->pc != 0x1CC654u) { return; }
    }
    ctx->pc = 0x1CC654u;
    // 0x1cc654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc658: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc660: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1CC660u;
    SET_GPR_U32(ctx, 31, 0x1CC668u);
    ctx->pc = 0x1CC664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC660u;
            // 0x1cc664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC668u; }
        if (ctx->pc != 0x1CC668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC668u; }
        if (ctx->pc != 0x1CC668u) { return; }
    }
    ctx->pc = 0x1CC668u;
    // 0x1cc668: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1CC668u;
    SET_GPR_U32(ctx, 31, 0x1CC670u);
    ctx->pc = 0x1CC66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC668u;
            // 0x1cc66c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC670u; }
        if (ctx->pc != 0x1CC670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC670u; }
        if (ctx->pc != 0x1CC670u) { return; }
    }
    ctx->pc = 0x1CC670u;
    // 0x1cc670: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cc674: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc678: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1CC678u;
    SET_GPR_U32(ctx, 31, 0x1CC680u);
    ctx->pc = 0x1CC67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC678u;
            // 0x1cc67c: 0xac221d18  sw          $v0, 0x1D18($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC680u; }
        if (ctx->pc != 0x1CC680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC680u; }
        if (ctx->pc != 0x1CC680u) { return; }
    }
    ctx->pc = 0x1CC680u;
    // 0x1cc680: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cc680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cc684: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc688: 0xac221d1c  sw          $v0, 0x1D1C($at)
    ctx->pc = 0x1cc688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7452), GPR_U32(ctx, 2));
    // 0x1cc68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc690: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cc690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cc694: 0x8c271d18  lw          $a3, 0x1D18($at)
    ctx->pc = 0x1cc694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7448)));
    // 0x1cc698: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1cc698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1cc69c: 0x8c281d1c  lw          $t0, 0x1D1C($at)
    ctx->pc = 0x1cc69cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7452)));
    // 0x1cc6a0: 0xc060614  jal         func_181850
    ctx->pc = 0x1CC6A0u;
    SET_GPR_U32(ctx, 31, 0x1CC6A8u);
    ctx->pc = 0x1CC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6A0u;
            // 0x1cc6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6A8u; }
        if (ctx->pc != 0x1CC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6A8u; }
        if (ctx->pc != 0x1CC6A8u) { return; }
    }
    ctx->pc = 0x1CC6A8u;
    // 0x1cc6a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6ac: 0xc06060c  jal         func_181830
    ctx->pc = 0x1CC6ACu;
    SET_GPR_U32(ctx, 31, 0x1CC6B4u);
    ctx->pc = 0x1CC6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6ACu;
            // 0x1cc6b0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6B4u; }
        if (ctx->pc != 0x1CC6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6B4u; }
        if (ctx->pc != 0x1CC6B4u) { return; }
    }
    ctx->pc = 0x1CC6B4u;
    // 0x1cc6b4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cc6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cc6b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc6c0: 0xc060604  jal         func_181810
    ctx->pc = 0x1CC6C0u;
    SET_GPR_U32(ctx, 31, 0x1CC6C8u);
    ctx->pc = 0x1CC6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6C0u;
            // 0x1cc6c4: 0x24c6aaa8  addiu       $a2, $a2, -0x5558 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6C8u; }
        if (ctx->pc != 0x1CC6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6C8u; }
        if (ctx->pc != 0x1CC6C8u) { return; }
    }
    ctx->pc = 0x1CC6C8u;
    // 0x1cc6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6d0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1CC6D0u;
    SET_GPR_U32(ctx, 31, 0x1CC6D8u);
    ctx->pc = 0x1CC6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6D0u;
            // 0x1cc6d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6D8u; }
        if (ctx->pc != 0x1CC6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6D8u; }
        if (ctx->pc != 0x1CC6D8u) { return; }
    }
    ctx->pc = 0x1CC6D8u;
    // 0x1cc6d8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1cc6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1cc6dc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1CC6DCu;
    SET_GPR_U32(ctx, 31, 0x1CC6E4u);
    ctx->pc = 0x1CC6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6DCu;
            // 0x1cc6e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6E4u; }
        if (ctx->pc != 0x1CC6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6E4u; }
        if (ctx->pc != 0x1CC6E4u) { return; }
    }
    ctx->pc = 0x1CC6E4u;
    // 0x1cc6e4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1CC6E4u;
    SET_GPR_U32(ctx, 31, 0x1CC6ECu);
    ctx->pc = 0x1CC6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6E4u;
            // 0x1cc6e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6ECu; }
        if (ctx->pc != 0x1CC6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6ECu; }
        if (ctx->pc != 0x1CC6ECu) { return; }
    }
    ctx->pc = 0x1CC6ECu;
    // 0x1cc6ec: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1cc6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cc6f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc6f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6f8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1cc6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cc6fc: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1CC6FCu;
    SET_GPR_U32(ctx, 31, 0x1CC704u);
    ctx->pc = 0x1CC700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6FCu;
            // 0x1cc700: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC704u; }
        if (ctx->pc != 0x1CC704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC704u; }
        if (ctx->pc != 0x1CC704u) { return; }
    }
    ctx->pc = 0x1CC704u;
    // 0x1cc704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc70c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc710: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC710u;
            // 0x1cc714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC718u;
}
