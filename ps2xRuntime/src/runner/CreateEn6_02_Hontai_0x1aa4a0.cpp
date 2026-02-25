#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_02_Hontai
// Address: 0x1aa4a0 - 0x1aa598
void CreateEn6_02_Hontai_0x1aa4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_02_Hontai_0x1aa4a0");
#endif

    ctx->pc = 0x1aa4a0u;

    // 0x1aa4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa4a4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1aa4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1aa4a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa4ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa4b0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AA4B0u;
    SET_GPR_U32(ctx, 31, 0x1AA4B8u);
    ctx->pc = 0x1AA4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4B0u;
            // 0x1aa4b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4B8u; }
        if (ctx->pc != 0x1AA4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4B8u; }
        if (ctx->pc != 0x1AA4B8u) { return; }
    }
    ctx->pc = 0x1AA4B8u;
    // 0x1aa4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4bc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1aa4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1aa4c0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1aa4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1aa4c4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1AA4C4u;
    SET_GPR_U32(ctx, 31, 0x1AA4CCu);
    ctx->pc = 0x1AA4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4C4u;
            // 0x1aa4c8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4CCu; }
        if (ctx->pc != 0x1AA4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4CCu; }
        if (ctx->pc != 0x1AA4CCu) { return; }
    }
    ctx->pc = 0x1AA4CCu;
    // 0x1aa4cc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AA4CCu;
    SET_GPR_U32(ctx, 31, 0x1AA4D4u);
    ctx->pc = 0x1AA4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4CCu;
            // 0x1aa4d0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4D4u; }
        if (ctx->pc != 0x1AA4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4D4u; }
        if (ctx->pc != 0x1AA4D4u) { return; }
    }
    ctx->pc = 0x1AA4D4u;
    // 0x1aa4d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1aa4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4e0: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1AA4E0u;
    SET_GPR_U32(ctx, 31, 0x1AA4E8u);
    ctx->pc = 0x1AA4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4E0u;
            // 0x1aa4e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4E8u; }
        if (ctx->pc != 0x1AA4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4E8u; }
        if (ctx->pc != 0x1AA4E8u) { return; }
    }
    ctx->pc = 0x1AA4E8u;
    // 0x1aa4e8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1AA4E8u;
    SET_GPR_U32(ctx, 31, 0x1AA4F0u);
    ctx->pc = 0x1AA4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4E8u;
            // 0x1aa4ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4F0u; }
        if (ctx->pc != 0x1AA4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4F0u; }
        if (ctx->pc != 0x1AA4F0u) { return; }
    }
    ctx->pc = 0x1AA4F0u;
    // 0x1aa4f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aa4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aa4f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1aa4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa4f8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1AA4F8u;
    SET_GPR_U32(ctx, 31, 0x1AA500u);
    ctx->pc = 0x1AA4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4F8u;
            // 0x1aa4fc: 0xac221af8  sw          $v0, 0x1AF8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA500u; }
        if (ctx->pc != 0x1AA500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA500u; }
        if (ctx->pc != 0x1AA500u) { return; }
    }
    ctx->pc = 0x1AA500u;
    // 0x1aa500: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aa500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aa504: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aa504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa508: 0xac221afc  sw          $v0, 0x1AFC($at)
    ctx->pc = 0x1aa508u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6908), GPR_U32(ctx, 2));
    // 0x1aa50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa510: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aa510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aa514: 0x8c271af8  lw          $a3, 0x1AF8($at)
    ctx->pc = 0x1aa514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6904)));
    // 0x1aa518: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1aa518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1aa51c: 0x8c281afc  lw          $t0, 0x1AFC($at)
    ctx->pc = 0x1aa51cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6908)));
    // 0x1aa520: 0xc060614  jal         func_181850
    ctx->pc = 0x1AA520u;
    SET_GPR_U32(ctx, 31, 0x1AA528u);
    ctx->pc = 0x1AA524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA520u;
            // 0x1aa524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA528u; }
        if (ctx->pc != 0x1AA528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA528u; }
        if (ctx->pc != 0x1AA528u) { return; }
    }
    ctx->pc = 0x1AA528u;
    // 0x1aa528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa52c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1AA52Cu;
    SET_GPR_U32(ctx, 31, 0x1AA534u);
    ctx->pc = 0x1AA530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA52Cu;
            // 0x1aa530: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA534u; }
        if (ctx->pc != 0x1AA534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA534u; }
        if (ctx->pc != 0x1AA534u) { return; }
    }
    ctx->pc = 0x1AA534u;
    // 0x1aa534: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1aa534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1aa538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa53c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa540: 0xc060604  jal         func_181810
    ctx->pc = 0x1AA540u;
    SET_GPR_U32(ctx, 31, 0x1AA548u);
    ctx->pc = 0x1AA544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA540u;
            // 0x1aa544: 0x24c6a980  addiu       $a2, $a2, -0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA548u; }
        if (ctx->pc != 0x1AA548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA548u; }
        if (ctx->pc != 0x1AA548u) { return; }
    }
    ctx->pc = 0x1AA548u;
    // 0x1aa548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa54c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa550: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1AA550u;
    SET_GPR_U32(ctx, 31, 0x1AA558u);
    ctx->pc = 0x1AA554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA550u;
            // 0x1aa554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA558u; }
        if (ctx->pc != 0x1AA558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA558u; }
        if (ctx->pc != 0x1AA558u) { return; }
    }
    ctx->pc = 0x1AA558u;
    // 0x1aa558: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1aa558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1aa55c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1AA55Cu;
    SET_GPR_U32(ctx, 31, 0x1AA564u);
    ctx->pc = 0x1AA560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA55Cu;
            // 0x1aa560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA564u; }
        if (ctx->pc != 0x1AA564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA564u; }
        if (ctx->pc != 0x1AA564u) { return; }
    }
    ctx->pc = 0x1AA564u;
    // 0x1aa564: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1AA564u;
    SET_GPR_U32(ctx, 31, 0x1AA56Cu);
    ctx->pc = 0x1AA568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA564u;
            // 0x1aa568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA56Cu; }
        if (ctx->pc != 0x1AA56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA56Cu; }
        if (ctx->pc != 0x1AA56Cu) { return; }
    }
    ctx->pc = 0x1AA56Cu;
    // 0x1aa56c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aa56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa574: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1aa574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aa578: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1aa578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1aa57c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1AA57Cu;
    SET_GPR_U32(ctx, 31, 0x1AA584u);
    ctx->pc = 0x1AA580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA57Cu;
            // 0x1aa580: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA584u; }
        if (ctx->pc != 0x1AA584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA584u; }
        if (ctx->pc != 0x1AA584u) { return; }
    }
    ctx->pc = 0x1AA584u;
    // 0x1aa584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa58c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa590: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA590u;
            // 0x1aa594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA598u;
}
