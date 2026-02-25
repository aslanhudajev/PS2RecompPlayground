#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage2Boss_Hontai
// Address: 0x1751c0 - 0x175540
void CreateStage2Boss_Hontai_0x1751c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage2Boss_Hontai_0x1751c0");
#endif

    ctx->pc = 0x1751c0u;

    // 0x1751c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1751c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1751c4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1751c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1751c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1751cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1751ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1751d0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1751D0u;
    SET_GPR_U32(ctx, 31, 0x1751D8u);
    ctx->pc = 0x1751D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751D0u;
            // 0x1751d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751D8u; }
        if (ctx->pc != 0x1751D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751D8u; }
        if (ctx->pc != 0x1751D8u) { return; }
    }
    ctx->pc = 0x1751D8u;
    // 0x1751d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1751d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751dc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1751dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1751e0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1751e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1751e4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1751E4u;
    SET_GPR_U32(ctx, 31, 0x1751ECu);
    ctx->pc = 0x1751E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751E4u;
            // 0x1751e8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751ECu; }
        if (ctx->pc != 0x1751ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751ECu; }
        if (ctx->pc != 0x1751ECu) { return; }
    }
    ctx->pc = 0x1751ECu;
    // 0x1751ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1751ECu;
    SET_GPR_U32(ctx, 31, 0x1751F4u);
    ctx->pc = 0x1751F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751ECu;
            // 0x1751f0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751F4u; }
        if (ctx->pc != 0x1751F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1751F4u; }
        if (ctx->pc != 0x1751F4u) { return; }
    }
    ctx->pc = 0x1751F4u;
    // 0x1751f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1751f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751f8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1751F8u;
    SET_GPR_U32(ctx, 31, 0x175200u);
    ctx->pc = 0x1751FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1751F8u;
            // 0x1751fc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175200u; }
        if (ctx->pc != 0x175200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175200u; }
        if (ctx->pc != 0x175200u) { return; }
    }
    ctx->pc = 0x175200u;
    // 0x175200: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175204: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x175204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175208: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x175208u;
    SET_GPR_U32(ctx, 31, 0x175210u);
    ctx->pc = 0x17520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175208u;
            // 0x17520c: 0xac2227b0  sw          $v0, 0x27B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175210u; }
        if (ctx->pc != 0x175210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175210u; }
        if (ctx->pc != 0x175210u) { return; }
    }
    ctx->pc = 0x175210u;
    // 0x175210: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175214: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175218: 0xac2227b4  sw          $v0, 0x27B4($at)
    ctx->pc = 0x175218u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10164), GPR_U32(ctx, 2));
    // 0x17521c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17521cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175220: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175224: 0x8c2727b0  lw          $a3, 0x27B0($at)
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10160)));
    // 0x175228: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17522c: 0x8c2827b4  lw          $t0, 0x27B4($at)
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10164)));
    // 0x175230: 0xc060614  jal         func_181850
    ctx->pc = 0x175230u;
    SET_GPR_U32(ctx, 31, 0x175238u);
    ctx->pc = 0x175234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175230u;
            // 0x175234: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175238u; }
        if (ctx->pc != 0x175238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175238u; }
        if (ctx->pc != 0x175238u) { return; }
    }
    ctx->pc = 0x175238u;
    // 0x175238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17523c: 0xc06060c  jal         func_181830
    ctx->pc = 0x17523Cu;
    SET_GPR_U32(ctx, 31, 0x175244u);
    ctx->pc = 0x175240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17523Cu;
            // 0x175240: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175244u; }
        if (ctx->pc != 0x175244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175244u; }
        if (ctx->pc != 0x175244u) { return; }
    }
    ctx->pc = 0x175244u;
    // 0x175244: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x175244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x175248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17524c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175250: 0xc060604  jal         func_181810
    ctx->pc = 0x175250u;
    SET_GPR_U32(ctx, 31, 0x175258u);
    ctx->pc = 0x175254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175250u;
            // 0x175254: 0x24c6a070  addiu       $a2, $a2, -0x5F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175258u; }
        if (ctx->pc != 0x175258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175258u; }
        if (ctx->pc != 0x175258u) { return; }
    }
    ctx->pc = 0x175258u;
    // 0x175258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17525c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17525cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175260: 0xc0605dc  jal         func_181770
    ctx->pc = 0x175260u;
    SET_GPR_U32(ctx, 31, 0x175268u);
    ctx->pc = 0x175264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175260u;
            // 0x175264: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175268u; }
        if (ctx->pc != 0x175268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175268u; }
        if (ctx->pc != 0x175268u) { return; }
    }
    ctx->pc = 0x175268u;
    // 0x175268: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x175268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x17526c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x17526Cu;
    SET_GPR_U32(ctx, 31, 0x175274u);
    ctx->pc = 0x175270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17526Cu;
            // 0x175270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175274u; }
        if (ctx->pc != 0x175274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175274u; }
        if (ctx->pc != 0x175274u) { return; }
    }
    ctx->pc = 0x175274u;
    // 0x175274: 0xc0605cc  jal         func_181730
    ctx->pc = 0x175274u;
    SET_GPR_U32(ctx, 31, 0x17527Cu);
    ctx->pc = 0x175278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175274u;
            // 0x175278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17527Cu; }
        if (ctx->pc != 0x17527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17527Cu; }
        if (ctx->pc != 0x17527Cu) { return; }
    }
    ctx->pc = 0x17527Cu;
    // 0x17527c: 0xc060694  jal         func_181A50
    ctx->pc = 0x17527Cu;
    SET_GPR_U32(ctx, 31, 0x175284u);
    ctx->pc = 0x175280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17527Cu;
            // 0x175280: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175284u; }
        if (ctx->pc != 0x175284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175284u; }
        if (ctx->pc != 0x175284u) { return; }
    }
    ctx->pc = 0x175284u;
    // 0x175284: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175288: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x175288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x17528c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x175290: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x175290u;
    SET_GPR_U32(ctx, 31, 0x175298u);
    ctx->pc = 0x175294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175290u;
            // 0x175294: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175298u; }
        if (ctx->pc != 0x175298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175298u; }
        if (ctx->pc != 0x175298u) { return; }
    }
    ctx->pc = 0x175298u;
    // 0x175298: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x175298u;
    SET_GPR_U32(ctx, 31, 0x1752A0u);
    ctx->pc = 0x17529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175298u;
            // 0x17529c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752A0u; }
        if (ctx->pc != 0x1752A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752A0u; }
        if (ctx->pc != 0x1752A0u) { return; }
    }
    ctx->pc = 0x1752A0u;
    // 0x1752a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1752a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752a4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1752A4u;
    SET_GPR_U32(ctx, 31, 0x1752ACu);
    ctx->pc = 0x1752A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752A4u;
            // 0x1752a8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752ACu; }
        if (ctx->pc != 0x1752ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752ACu; }
        if (ctx->pc != 0x1752ACu) { return; }
    }
    ctx->pc = 0x1752ACu;
    // 0x1752ac: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1752b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1752b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1752b4: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1752B4u;
    SET_GPR_U32(ctx, 31, 0x1752BCu);
    ctx->pc = 0x1752B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752B4u;
            // 0x1752b8: 0xac2227b0  sw          $v0, 0x27B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752BCu; }
        if (ctx->pc != 0x1752BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752BCu; }
        if (ctx->pc != 0x1752BCu) { return; }
    }
    ctx->pc = 0x1752BCu;
    // 0x1752bc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1752bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1752c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1752c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752c4: 0xac2227b4  sw          $v0, 0x27B4($at)
    ctx->pc = 0x1752c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10164), GPR_U32(ctx, 2));
    // 0x1752c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1752c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752cc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1752ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1752d0: 0x8c2727b0  lw          $a3, 0x27B0($at)
    ctx->pc = 0x1752d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10160)));
    // 0x1752d4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1752d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1752d8: 0x8c2827b4  lw          $t0, 0x27B4($at)
    ctx->pc = 0x1752d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10164)));
    // 0x1752dc: 0xc060614  jal         func_181850
    ctx->pc = 0x1752DCu;
    SET_GPR_U32(ctx, 31, 0x1752E4u);
    ctx->pc = 0x1752E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752DCu;
            // 0x1752e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752E4u; }
        if (ctx->pc != 0x1752E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752E4u; }
        if (ctx->pc != 0x1752E4u) { return; }
    }
    ctx->pc = 0x1752E4u;
    // 0x1752e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1752e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752e8: 0xc06060c  jal         func_181830
    ctx->pc = 0x1752E8u;
    SET_GPR_U32(ctx, 31, 0x1752F0u);
    ctx->pc = 0x1752ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752E8u;
            // 0x1752ec: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752F0u; }
        if (ctx->pc != 0x1752F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1752F0u; }
        if (ctx->pc != 0x1752F0u) { return; }
    }
    ctx->pc = 0x1752F0u;
    // 0x1752f0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1752f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1752f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1752f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1752f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1752fc: 0xc060604  jal         func_181810
    ctx->pc = 0x1752FCu;
    SET_GPR_U32(ctx, 31, 0x175304u);
    ctx->pc = 0x175300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1752FCu;
            // 0x175300: 0x24c6a070  addiu       $a2, $a2, -0x5F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175304u; }
        if (ctx->pc != 0x175304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175304u; }
        if (ctx->pc != 0x175304u) { return; }
    }
    ctx->pc = 0x175304u;
    // 0x175304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17530c: 0xc0605dc  jal         func_181770
    ctx->pc = 0x17530Cu;
    SET_GPR_U32(ctx, 31, 0x175314u);
    ctx->pc = 0x175310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17530Cu;
            // 0x175310: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175314u; }
        if (ctx->pc != 0x175314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175314u; }
        if (ctx->pc != 0x175314u) { return; }
    }
    ctx->pc = 0x175314u;
    // 0x175314: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x175314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x175318: 0xc046376  jal         func_118DD8
    ctx->pc = 0x175318u;
    SET_GPR_U32(ctx, 31, 0x175320u);
    ctx->pc = 0x17531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175318u;
            // 0x17531c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175320u; }
        if (ctx->pc != 0x175320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175320u; }
        if (ctx->pc != 0x175320u) { return; }
    }
    ctx->pc = 0x175320u;
    // 0x175320: 0xc0605cc  jal         func_181730
    ctx->pc = 0x175320u;
    SET_GPR_U32(ctx, 31, 0x175328u);
    ctx->pc = 0x175324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175320u;
            // 0x175324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175328u; }
        if (ctx->pc != 0x175328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175328u; }
        if (ctx->pc != 0x175328u) { return; }
    }
    ctx->pc = 0x175328u;
    // 0x175328: 0xc060694  jal         func_181A50
    ctx->pc = 0x175328u;
    SET_GPR_U32(ctx, 31, 0x175330u);
    ctx->pc = 0x17532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175328u;
            // 0x17532c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175330u; }
        if (ctx->pc != 0x175330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175330u; }
        if (ctx->pc != 0x175330u) { return; }
    }
    ctx->pc = 0x175330u;
    // 0x175330: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175334: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x175334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x175338: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x175338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x17533c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x17533Cu;
    SET_GPR_U32(ctx, 31, 0x175344u);
    ctx->pc = 0x175340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17533Cu;
            // 0x175340: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175344u; }
        if (ctx->pc != 0x175344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175344u; }
        if (ctx->pc != 0x175344u) { return; }
    }
    ctx->pc = 0x175344u;
    // 0x175344: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x175344u;
    SET_GPR_U32(ctx, 31, 0x17534Cu);
    ctx->pc = 0x175348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175344u;
            // 0x175348: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17534Cu; }
        if (ctx->pc != 0x17534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17534Cu; }
        if (ctx->pc != 0x17534Cu) { return; }
    }
    ctx->pc = 0x17534Cu;
    // 0x17534c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17534cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175350: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x175350u;
    SET_GPR_U32(ctx, 31, 0x175358u);
    ctx->pc = 0x175354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175350u;
            // 0x175354: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175358u; }
        if (ctx->pc != 0x175358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175358u; }
        if (ctx->pc != 0x175358u) { return; }
    }
    ctx->pc = 0x175358u;
    // 0x175358: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17535c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175360: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x175360u;
    SET_GPR_U32(ctx, 31, 0x175368u);
    ctx->pc = 0x175364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175360u;
            // 0x175364: 0xac2227b0  sw          $v0, 0x27B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175368u; }
        if (ctx->pc != 0x175368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175368u; }
        if (ctx->pc != 0x175368u) { return; }
    }
    ctx->pc = 0x175368u;
    // 0x175368: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17536c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17536cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175370: 0xac2227b4  sw          $v0, 0x27B4($at)
    ctx->pc = 0x175370u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10164), GPR_U32(ctx, 2));
    // 0x175374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175378: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17537c: 0x8c2727b0  lw          $a3, 0x27B0($at)
    ctx->pc = 0x17537cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10160)));
    // 0x175380: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175384: 0x8c2827b4  lw          $t0, 0x27B4($at)
    ctx->pc = 0x175384u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10164)));
    // 0x175388: 0xc060614  jal         func_181850
    ctx->pc = 0x175388u;
    SET_GPR_U32(ctx, 31, 0x175390u);
    ctx->pc = 0x17538Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175388u;
            // 0x17538c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175390u; }
        if (ctx->pc != 0x175390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175390u; }
        if (ctx->pc != 0x175390u) { return; }
    }
    ctx->pc = 0x175390u;
    // 0x175390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175394: 0xc06060c  jal         func_181830
    ctx->pc = 0x175394u;
    SET_GPR_U32(ctx, 31, 0x17539Cu);
    ctx->pc = 0x175398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175394u;
            // 0x175398: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17539Cu; }
        if (ctx->pc != 0x17539Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17539Cu; }
        if (ctx->pc != 0x17539Cu) { return; }
    }
    ctx->pc = 0x17539Cu;
    // 0x17539c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17539cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1753a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1753a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1753a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1753a8: 0xc060604  jal         func_181810
    ctx->pc = 0x1753A8u;
    SET_GPR_U32(ctx, 31, 0x1753B0u);
    ctx->pc = 0x1753ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753A8u;
            // 0x1753ac: 0x24c6a070  addiu       $a2, $a2, -0x5F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753B0u; }
        if (ctx->pc != 0x1753B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753B0u; }
        if (ctx->pc != 0x1753B0u) { return; }
    }
    ctx->pc = 0x1753B0u;
    // 0x1753b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1753b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1753b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753b8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1753B8u;
    SET_GPR_U32(ctx, 31, 0x1753C0u);
    ctx->pc = 0x1753BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753B8u;
            // 0x1753bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753C0u; }
        if (ctx->pc != 0x1753C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753C0u; }
        if (ctx->pc != 0x1753C0u) { return; }
    }
    ctx->pc = 0x1753C0u;
    // 0x1753c0: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1753c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1753c4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1753C4u;
    SET_GPR_U32(ctx, 31, 0x1753CCu);
    ctx->pc = 0x1753C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753C4u;
            // 0x1753c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753CCu; }
        if (ctx->pc != 0x1753CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753CCu; }
        if (ctx->pc != 0x1753CCu) { return; }
    }
    ctx->pc = 0x1753CCu;
    // 0x1753cc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1753CCu;
    SET_GPR_U32(ctx, 31, 0x1753D4u);
    ctx->pc = 0x1753D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753CCu;
            // 0x1753d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753D4u; }
        if (ctx->pc != 0x1753D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753D4u; }
        if (ctx->pc != 0x1753D4u) { return; }
    }
    ctx->pc = 0x1753D4u;
    // 0x1753d4: 0xc060694  jal         func_181A50
    ctx->pc = 0x1753D4u;
    SET_GPR_U32(ctx, 31, 0x1753DCu);
    ctx->pc = 0x1753D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753D4u;
            // 0x1753d8: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753DCu; }
        if (ctx->pc != 0x1753DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753DCu; }
        if (ctx->pc != 0x1753DCu) { return; }
    }
    ctx->pc = 0x1753DCu;
    // 0x1753dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1753dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753e0: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1753e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1753e4: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1753e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1753e8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1753E8u;
    SET_GPR_U32(ctx, 31, 0x1753F0u);
    ctx->pc = 0x1753ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753E8u;
            // 0x1753ec: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753F0u; }
        if (ctx->pc != 0x1753F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753F0u; }
        if (ctx->pc != 0x1753F0u) { return; }
    }
    ctx->pc = 0x1753F0u;
    // 0x1753f0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1753F0u;
    SET_GPR_U32(ctx, 31, 0x1753F8u);
    ctx->pc = 0x1753F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753F0u;
            // 0x1753f4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753F8u; }
        if (ctx->pc != 0x1753F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753F8u; }
        if (ctx->pc != 0x1753F8u) { return; }
    }
    ctx->pc = 0x1753F8u;
    // 0x1753f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1753f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753fc: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1753FCu;
    SET_GPR_U32(ctx, 31, 0x175404u);
    ctx->pc = 0x175400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1753FCu;
            // 0x175400: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175404u; }
        if (ctx->pc != 0x175404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175404u; }
        if (ctx->pc != 0x175404u) { return; }
    }
    ctx->pc = 0x175404u;
    // 0x175404: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175408: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x175408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17540c: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x17540Cu;
    SET_GPR_U32(ctx, 31, 0x175414u);
    ctx->pc = 0x175410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17540Cu;
            // 0x175410: 0xac2227b0  sw          $v0, 0x27B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175414u; }
        if (ctx->pc != 0x175414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175414u; }
        if (ctx->pc != 0x175414u) { return; }
    }
    ctx->pc = 0x175414u;
    // 0x175414: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175418: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x175418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17541c: 0xac2227b4  sw          $v0, 0x27B4($at)
    ctx->pc = 0x17541cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10164), GPR_U32(ctx, 2));
    // 0x175420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175424: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x175424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175428: 0x8c2727b0  lw          $a3, 0x27B0($at)
    ctx->pc = 0x175428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10160)));
    // 0x17542c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17542cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x175430: 0x8c2827b4  lw          $t0, 0x27B4($at)
    ctx->pc = 0x175430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10164)));
    // 0x175434: 0xc060614  jal         func_181850
    ctx->pc = 0x175434u;
    SET_GPR_U32(ctx, 31, 0x17543Cu);
    ctx->pc = 0x175438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175434u;
            // 0x175438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17543Cu; }
        if (ctx->pc != 0x17543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17543Cu; }
        if (ctx->pc != 0x17543Cu) { return; }
    }
    ctx->pc = 0x17543Cu;
    // 0x17543c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175440: 0xc06060c  jal         func_181830
    ctx->pc = 0x175440u;
    SET_GPR_U32(ctx, 31, 0x175448u);
    ctx->pc = 0x175444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175440u;
            // 0x175444: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175448u; }
        if (ctx->pc != 0x175448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175448u; }
        if (ctx->pc != 0x175448u) { return; }
    }
    ctx->pc = 0x175448u;
    // 0x175448: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x175448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17544c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x175450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175454: 0xc060604  jal         func_181810
    ctx->pc = 0x175454u;
    SET_GPR_U32(ctx, 31, 0x17545Cu);
    ctx->pc = 0x175458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175454u;
            // 0x175458: 0x24c6a070  addiu       $a2, $a2, -0x5F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17545Cu; }
        if (ctx->pc != 0x17545Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17545Cu; }
        if (ctx->pc != 0x17545Cu) { return; }
    }
    ctx->pc = 0x17545Cu;
    // 0x17545c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175464: 0xc0605dc  jal         func_181770
    ctx->pc = 0x175464u;
    SET_GPR_U32(ctx, 31, 0x17546Cu);
    ctx->pc = 0x175468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175464u;
            // 0x175468: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17546Cu; }
        if (ctx->pc != 0x17546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17546Cu; }
        if (ctx->pc != 0x17546Cu) { return; }
    }
    ctx->pc = 0x17546Cu;
    // 0x17546c: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x17546cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x175470: 0xc046376  jal         func_118DD8
    ctx->pc = 0x175470u;
    SET_GPR_U32(ctx, 31, 0x175478u);
    ctx->pc = 0x175474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175470u;
            // 0x175474: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175478u; }
        if (ctx->pc != 0x175478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175478u; }
        if (ctx->pc != 0x175478u) { return; }
    }
    ctx->pc = 0x175478u;
    // 0x175478: 0xc0605cc  jal         func_181730
    ctx->pc = 0x175478u;
    SET_GPR_U32(ctx, 31, 0x175480u);
    ctx->pc = 0x17547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175478u;
            // 0x17547c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175480u; }
        if (ctx->pc != 0x175480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175480u; }
        if (ctx->pc != 0x175480u) { return; }
    }
    ctx->pc = 0x175480u;
    // 0x175480: 0xc060694  jal         func_181A50
    ctx->pc = 0x175480u;
    SET_GPR_U32(ctx, 31, 0x175488u);
    ctx->pc = 0x175484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175480u;
            // 0x175484: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175488u; }
        if (ctx->pc != 0x175488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175488u; }
        if (ctx->pc != 0x175488u) { return; }
    }
    ctx->pc = 0x175488u;
    // 0x175488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x175488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17548c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x17548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x175490: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x175490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x175494: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x175494u;
    SET_GPR_U32(ctx, 31, 0x17549Cu);
    ctx->pc = 0x175498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175494u;
            // 0x175498: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17549Cu; }
        if (ctx->pc != 0x17549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17549Cu; }
        if (ctx->pc != 0x17549Cu) { return; }
    }
    ctx->pc = 0x17549Cu;
    // 0x17549c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x17549Cu;
    SET_GPR_U32(ctx, 31, 0x1754A4u);
    ctx->pc = 0x1754A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17549Cu;
            // 0x1754a0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754A4u; }
        if (ctx->pc != 0x1754A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754A4u; }
        if (ctx->pc != 0x1754A4u) { return; }
    }
    ctx->pc = 0x1754A4u;
    // 0x1754a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1754a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754a8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1754A8u;
    SET_GPR_U32(ctx, 31, 0x1754B0u);
    ctx->pc = 0x1754ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1754A8u;
            // 0x1754ac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754B0u; }
        if (ctx->pc != 0x1754B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754B0u; }
        if (ctx->pc != 0x1754B0u) { return; }
    }
    ctx->pc = 0x1754B0u;
    // 0x1754b0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1754b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1754b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1754b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1754b8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1754B8u;
    SET_GPR_U32(ctx, 31, 0x1754C0u);
    ctx->pc = 0x1754BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1754B8u;
            // 0x1754bc: 0xac2227b0  sw          $v0, 0x27B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754C0u; }
        if (ctx->pc != 0x1754C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754C0u; }
        if (ctx->pc != 0x1754C0u) { return; }
    }
    ctx->pc = 0x1754C0u;
    // 0x1754c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1754c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1754c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1754c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754c8: 0xac2227b4  sw          $v0, 0x27B4($at)
    ctx->pc = 0x1754c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10164), GPR_U32(ctx, 2));
    // 0x1754cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1754ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754d0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1754d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1754d4: 0x8c2727b0  lw          $a3, 0x27B0($at)
    ctx->pc = 0x1754d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10160)));
    // 0x1754d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1754d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1754dc: 0x8c2827b4  lw          $t0, 0x27B4($at)
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10164)));
    // 0x1754e0: 0xc060614  jal         func_181850
    ctx->pc = 0x1754E0u;
    SET_GPR_U32(ctx, 31, 0x1754E8u);
    ctx->pc = 0x1754E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1754E0u;
            // 0x1754e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754E8u; }
        if (ctx->pc != 0x1754E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754E8u; }
        if (ctx->pc != 0x1754E8u) { return; }
    }
    ctx->pc = 0x1754E8u;
    // 0x1754e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1754e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754ec: 0xc06060c  jal         func_181830
    ctx->pc = 0x1754ECu;
    SET_GPR_U32(ctx, 31, 0x1754F4u);
    ctx->pc = 0x1754F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1754ECu;
            // 0x1754f0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754F4u; }
        if (ctx->pc != 0x1754F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1754F4u; }
        if (ctx->pc != 0x1754F4u) { return; }
    }
    ctx->pc = 0x1754F4u;
    // 0x1754f4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1754f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1754f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1754f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1754fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175500: 0xc060604  jal         func_181810
    ctx->pc = 0x175500u;
    SET_GPR_U32(ctx, 31, 0x175508u);
    ctx->pc = 0x175504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175500u;
            // 0x175504: 0x24c6a070  addiu       $a2, $a2, -0x5F90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175508u; }
        if (ctx->pc != 0x175508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175508u; }
        if (ctx->pc != 0x175508u) { return; }
    }
    ctx->pc = 0x175508u;
    // 0x175508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x175508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17550c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175510: 0xc0605dc  jal         func_181770
    ctx->pc = 0x175510u;
    SET_GPR_U32(ctx, 31, 0x175518u);
    ctx->pc = 0x175514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175510u;
            // 0x175514: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175518u; }
        if (ctx->pc != 0x175518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175518u; }
        if (ctx->pc != 0x175518u) { return; }
    }
    ctx->pc = 0x175518u;
    // 0x175518: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x175518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x17551c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x17551Cu;
    SET_GPR_U32(ctx, 31, 0x175524u);
    ctx->pc = 0x175520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17551Cu;
            // 0x175520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175524u; }
        if (ctx->pc != 0x175524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175524u; }
        if (ctx->pc != 0x175524u) { return; }
    }
    ctx->pc = 0x175524u;
    // 0x175524: 0xc0605cc  jal         func_181730
    ctx->pc = 0x175524u;
    SET_GPR_U32(ctx, 31, 0x17552Cu);
    ctx->pc = 0x175528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175524u;
            // 0x175528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17552Cu; }
        if (ctx->pc != 0x17552Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17552Cu; }
        if (ctx->pc != 0x17552Cu) { return; }
    }
    ctx->pc = 0x17552Cu;
    // 0x17552c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175538: 0x3e00008  jr          $ra
    ctx->pc = 0x175538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175538u;
            // 0x17553c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175540u;
}
