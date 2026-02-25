#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn3_01_Hontai
// Address: 0x19b5a0 - 0x19b698
void CreateEn3_01_Hontai_0x19b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn3_01_Hontai_0x19b5a0");
#endif

    ctx->pc = 0x19b5a0u;

    // 0x19b5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b5a4: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x19b5a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b5ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b5b0: 0xc060694  jal         func_181A50
    ctx->pc = 0x19B5B0u;
    SET_GPR_U32(ctx, 31, 0x19B5B8u);
    ctx->pc = 0x19B5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5B0u;
            // 0x19b5b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5B8u; }
        if (ctx->pc != 0x19B5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5B8u; }
        if (ctx->pc != 0x19B5B8u) { return; }
    }
    ctx->pc = 0x19B5B8u;
    // 0x19b5b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19b5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5bc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x19b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x19b5c0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x19b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x19b5c4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x19B5C4u;
    SET_GPR_U32(ctx, 31, 0x19B5CCu);
    ctx->pc = 0x19B5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5C4u;
            // 0x19b5c8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5CCu; }
        if (ctx->pc != 0x19B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5CCu; }
        if (ctx->pc != 0x19B5CCu) { return; }
    }
    ctx->pc = 0x19B5CCu;
    // 0x19b5cc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x19B5CCu;
    SET_GPR_U32(ctx, 31, 0x19B5D4u);
    ctx->pc = 0x19B5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5CCu;
            // 0x19b5d0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5D4u; }
        if (ctx->pc != 0x19B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5D4u; }
        if (ctx->pc != 0x19B5D4u) { return; }
    }
    ctx->pc = 0x19B5D4u;
    // 0x19b5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b5e0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x19B5E0u;
    SET_GPR_U32(ctx, 31, 0x19B5E8u);
    ctx->pc = 0x19B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5E0u;
            // 0x19b5e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5E8u; }
        if (ctx->pc != 0x19B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5E8u; }
        if (ctx->pc != 0x19B5E8u) { return; }
    }
    ctx->pc = 0x19B5E8u;
    // 0x19b5e8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x19B5E8u;
    SET_GPR_U32(ctx, 31, 0x19B5F0u);
    ctx->pc = 0x19B5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5E8u;
            // 0x19b5ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5F0u; }
        if (ctx->pc != 0x19B5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B5F0u; }
        if (ctx->pc != 0x19B5F0u) { return; }
    }
    ctx->pc = 0x19B5F0u;
    // 0x19b5f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19b5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19b5f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b5f8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x19B5F8u;
    SET_GPR_U32(ctx, 31, 0x19B600u);
    ctx->pc = 0x19B5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5F8u;
            // 0x19b5fc: 0xac221a80  sw          $v0, 0x1A80($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B600u; }
        if (ctx->pc != 0x19B600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B600u; }
        if (ctx->pc != 0x19B600u) { return; }
    }
    ctx->pc = 0x19B600u;
    // 0x19b600: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19b600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19b604: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19b604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b608: 0xac221a84  sw          $v0, 0x1A84($at)
    ctx->pc = 0x19b608u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6788), GPR_U32(ctx, 2));
    // 0x19b60c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b610: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19b614: 0x8c271a80  lw          $a3, 0x1A80($at)
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6784)));
    // 0x19b618: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19b618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19b61c: 0x8c281a84  lw          $t0, 0x1A84($at)
    ctx->pc = 0x19b61cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6788)));
    // 0x19b620: 0xc060614  jal         func_181850
    ctx->pc = 0x19B620u;
    SET_GPR_U32(ctx, 31, 0x19B628u);
    ctx->pc = 0x19B624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B620u;
            // 0x19b624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B628u; }
        if (ctx->pc != 0x19B628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B628u; }
        if (ctx->pc != 0x19B628u) { return; }
    }
    ctx->pc = 0x19B628u;
    // 0x19b628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b62c: 0xc06060c  jal         func_181830
    ctx->pc = 0x19B62Cu;
    SET_GPR_U32(ctx, 31, 0x19B634u);
    ctx->pc = 0x19B630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B62Cu;
            // 0x19b630: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B634u; }
        if (ctx->pc != 0x19B634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B634u; }
        if (ctx->pc != 0x19B634u) { return; }
    }
    ctx->pc = 0x19B634u;
    // 0x19b634: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x19b638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b640: 0xc060604  jal         func_181810
    ctx->pc = 0x19B640u;
    SET_GPR_U32(ctx, 31, 0x19B648u);
    ctx->pc = 0x19B644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B640u;
            // 0x19b644: 0x24c6a910  addiu       $a2, $a2, -0x56F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B648u; }
        if (ctx->pc != 0x19B648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B648u; }
        if (ctx->pc != 0x19B648u) { return; }
    }
    ctx->pc = 0x19B648u;
    // 0x19b648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b650: 0xc0605dc  jal         func_181770
    ctx->pc = 0x19B650u;
    SET_GPR_U32(ctx, 31, 0x19B658u);
    ctx->pc = 0x19B654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B650u;
            // 0x19b654: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B658u; }
        if (ctx->pc != 0x19B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B658u; }
        if (ctx->pc != 0x19B658u) { return; }
    }
    ctx->pc = 0x19B658u;
    // 0x19b658: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x19b658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x19b65c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x19B65Cu;
    SET_GPR_U32(ctx, 31, 0x19B664u);
    ctx->pc = 0x19B660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B65Cu;
            // 0x19b660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B664u; }
        if (ctx->pc != 0x19B664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B664u; }
        if (ctx->pc != 0x19B664u) { return; }
    }
    ctx->pc = 0x19B664u;
    // 0x19b664: 0xc0605cc  jal         func_181730
    ctx->pc = 0x19B664u;
    SET_GPR_U32(ctx, 31, 0x19B66Cu);
    ctx->pc = 0x19B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B664u;
            // 0x19b668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B66Cu; }
        if (ctx->pc != 0x19B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B66Cu; }
        if (ctx->pc != 0x19B66Cu) { return; }
    }
    ctx->pc = 0x19B66Cu;
    // 0x19b66c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b674: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x19b674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19b678: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19b67c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x19B67Cu;
    SET_GPR_U32(ctx, 31, 0x19B684u);
    ctx->pc = 0x19B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B67Cu;
            // 0x19b680: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B684u; }
        if (ctx->pc != 0x19B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B684u; }
        if (ctx->pc != 0x19B684u) { return; }
    }
    ctx->pc = 0x19B684u;
    // 0x19b684: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b690: 0x3e00008  jr          $ra
    ctx->pc = 0x19B690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B690u;
            // 0x19b694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B698u;
}
