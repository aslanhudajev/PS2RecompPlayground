#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn7_02_Hontai
// Address: 0x1b02d0 - 0x1b03c8
void CreateEn7_02_Hontai_0x1b02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn7_02_Hontai_0x1b02d0");
#endif

    ctx->pc = 0x1b02d0u;

    // 0x1b02d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b02d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b02d4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1b02d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1b02d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b02d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b02dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b02dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b02e0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B02E0u;
    SET_GPR_U32(ctx, 31, 0x1B02E8u);
    ctx->pc = 0x1B02E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02E0u;
            // 0x1b02e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02E8u; }
        if (ctx->pc != 0x1B02E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02E8u; }
        if (ctx->pc != 0x1B02E8u) { return; }
    }
    ctx->pc = 0x1B02E8u;
    // 0x1b02e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b02e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02ec: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b02ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b02f0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b02f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b02f4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B02F4u;
    SET_GPR_U32(ctx, 31, 0x1B02FCu);
    ctx->pc = 0x1B02F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02F4u;
            // 0x1b02f8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02FCu; }
        if (ctx->pc != 0x1B02FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B02FCu; }
        if (ctx->pc != 0x1B02FCu) { return; }
    }
    ctx->pc = 0x1B02FCu;
    // 0x1b02fc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B02FCu;
    SET_GPR_U32(ctx, 31, 0x1B0304u);
    ctx->pc = 0x1B0300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02FCu;
            // 0x1b0300: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0304u; }
        if (ctx->pc != 0x1B0304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0304u; }
        if (ctx->pc != 0x1B0304u) { return; }
    }
    ctx->pc = 0x1B0304u;
    // 0x1b0304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0308: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b0308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b030c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0310: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1B0310u;
    SET_GPR_U32(ctx, 31, 0x1B0318u);
    ctx->pc = 0x1B0314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0310u;
            // 0x1b0314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0318u; }
        if (ctx->pc != 0x1B0318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0318u; }
        if (ctx->pc != 0x1B0318u) { return; }
    }
    ctx->pc = 0x1B0318u;
    // 0x1b0318: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1B0318u;
    SET_GPR_U32(ctx, 31, 0x1B0320u);
    ctx->pc = 0x1B031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0318u;
            // 0x1b031c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0320u; }
        if (ctx->pc != 0x1B0320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0320u; }
        if (ctx->pc != 0x1B0320u) { return; }
    }
    ctx->pc = 0x1B0320u;
    // 0x1b0320: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b0320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b0324: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b0324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0328: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1B0328u;
    SET_GPR_U32(ctx, 31, 0x1B0330u);
    ctx->pc = 0x1B032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0328u;
            // 0x1b032c: 0xac221b30  sw          $v0, 0x1B30($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0330u; }
        if (ctx->pc != 0x1B0330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0330u; }
        if (ctx->pc != 0x1B0330u) { return; }
    }
    ctx->pc = 0x1B0330u;
    // 0x1b0330: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b0330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b0334: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0338: 0xac221b34  sw          $v0, 0x1B34($at)
    ctx->pc = 0x1b0338u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6964), GPR_U32(ctx, 2));
    // 0x1b033c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b033cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0340: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b0344: 0x8c271b30  lw          $a3, 0x1B30($at)
    ctx->pc = 0x1b0344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6960)));
    // 0x1b0348: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b0348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b034c: 0x8c281b34  lw          $t0, 0x1B34($at)
    ctx->pc = 0x1b034cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6964)));
    // 0x1b0350: 0xc060614  jal         func_181850
    ctx->pc = 0x1B0350u;
    SET_GPR_U32(ctx, 31, 0x1B0358u);
    ctx->pc = 0x1B0354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0350u;
            // 0x1b0354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0358u; }
        if (ctx->pc != 0x1B0358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0358u; }
        if (ctx->pc != 0x1B0358u) { return; }
    }
    ctx->pc = 0x1B0358u;
    // 0x1b0358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b035c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B035Cu;
    SET_GPR_U32(ctx, 31, 0x1B0364u);
    ctx->pc = 0x1B0360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B035Cu;
            // 0x1b0360: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0364u; }
        if (ctx->pc != 0x1B0364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0364u; }
        if (ctx->pc != 0x1B0364u) { return; }
    }
    ctx->pc = 0x1B0364u;
    // 0x1b0364: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b0364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b0368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b036c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0370: 0xc060604  jal         func_181810
    ctx->pc = 0x1B0370u;
    SET_GPR_U32(ctx, 31, 0x1B0378u);
    ctx->pc = 0x1B0374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0370u;
            // 0x1b0374: 0x24c6a9b8  addiu       $a2, $a2, -0x5648 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0378u; }
        if (ctx->pc != 0x1B0378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0378u; }
        if (ctx->pc != 0x1B0378u) { return; }
    }
    ctx->pc = 0x1B0378u;
    // 0x1b0378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b037c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0380: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B0380u;
    SET_GPR_U32(ctx, 31, 0x1B0388u);
    ctx->pc = 0x1B0384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0380u;
            // 0x1b0384: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0388u; }
        if (ctx->pc != 0x1B0388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0388u; }
        if (ctx->pc != 0x1B0388u) { return; }
    }
    ctx->pc = 0x1B0388u;
    // 0x1b0388: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b0388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b038c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B038Cu;
    SET_GPR_U32(ctx, 31, 0x1B0394u);
    ctx->pc = 0x1B0390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B038Cu;
            // 0x1b0390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0394u; }
        if (ctx->pc != 0x1B0394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0394u; }
        if (ctx->pc != 0x1B0394u) { return; }
    }
    ctx->pc = 0x1B0394u;
    // 0x1b0394: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B0394u;
    SET_GPR_U32(ctx, 31, 0x1B039Cu);
    ctx->pc = 0x1B0398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0394u;
            // 0x1b0398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B039Cu; }
        if (ctx->pc != 0x1B039Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B039Cu; }
        if (ctx->pc != 0x1B039Cu) { return; }
    }
    ctx->pc = 0x1B039Cu;
    // 0x1b039c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b03a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b03a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b03a4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b03a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b03a8: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b03a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b03ac: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1B03ACu;
    SET_GPR_U32(ctx, 31, 0x1B03B4u);
    ctx->pc = 0x1B03B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03ACu;
            // 0x1b03b0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03B4u; }
        if (ctx->pc != 0x1B03B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B03B4u; }
        if (ctx->pc != 0x1B03B4u) { return; }
    }
    ctx->pc = 0x1B03B4u;
    // 0x1b03b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b03b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b03b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b03b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b03bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b03bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b03c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B03C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B03C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03C0u;
            // 0x1b03c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B03C8u;
}
