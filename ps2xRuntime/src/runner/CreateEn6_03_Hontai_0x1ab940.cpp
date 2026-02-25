#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_03_Hontai
// Address: 0x1ab940 - 0x1aba38
void CreateEn6_03_Hontai_0x1ab940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_03_Hontai_0x1ab940");
#endif

    ctx->pc = 0x1ab940u;

    // 0x1ab940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab944: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1ab948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab94c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab950: 0xc060694  jal         func_181A50
    ctx->pc = 0x1AB950u;
    SET_GPR_U32(ctx, 31, 0x1AB958u);
    ctx->pc = 0x1AB954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB950u;
            // 0x1ab954: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB958u; }
        if (ctx->pc != 0x1AB958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB958u; }
        if (ctx->pc != 0x1AB958u) { return; }
    }
    ctx->pc = 0x1AB958u;
    // 0x1ab958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ab958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab95c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1ab960: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1ab960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1ab964: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1AB964u;
    SET_GPR_U32(ctx, 31, 0x1AB96Cu);
    ctx->pc = 0x1AB968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB964u;
            // 0x1ab968: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB96Cu; }
        if (ctx->pc != 0x1AB96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB96Cu; }
        if (ctx->pc != 0x1AB96Cu) { return; }
    }
    ctx->pc = 0x1AB96Cu;
    // 0x1ab96c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1AB96Cu;
    SET_GPR_U32(ctx, 31, 0x1AB974u);
    ctx->pc = 0x1AB970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB96Cu;
            // 0x1ab970: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB974u; }
        if (ctx->pc != 0x1AB974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB974u; }
        if (ctx->pc != 0x1AB974u) { return; }
    }
    ctx->pc = 0x1AB974u;
    // 0x1ab974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ab974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab978: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ab978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab980: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1AB980u;
    SET_GPR_U32(ctx, 31, 0x1AB988u);
    ctx->pc = 0x1AB984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB980u;
            // 0x1ab984: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB988u; }
        if (ctx->pc != 0x1AB988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB988u; }
        if (ctx->pc != 0x1AB988u) { return; }
    }
    ctx->pc = 0x1AB988u;
    // 0x1ab988: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1AB988u;
    SET_GPR_U32(ctx, 31, 0x1AB990u);
    ctx->pc = 0x1AB98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB988u;
            // 0x1ab98c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB990u; }
        if (ctx->pc != 0x1AB990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB990u; }
        if (ctx->pc != 0x1AB990u) { return; }
    }
    ctx->pc = 0x1AB990u;
    // 0x1ab990: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ab994: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab998: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1AB998u;
    SET_GPR_U32(ctx, 31, 0x1AB9A0u);
    ctx->pc = 0x1AB99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB998u;
            // 0x1ab99c: 0xac221b00  sw          $v0, 0x1B00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9A0u; }
        if (ctx->pc != 0x1AB9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9A0u; }
        if (ctx->pc != 0x1AB9A0u) { return; }
    }
    ctx->pc = 0x1AB9A0u;
    // 0x1ab9a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ab9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ab9a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ab9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9a8: 0xac221b04  sw          $v0, 0x1B04($at)
    ctx->pc = 0x1ab9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6916), GPR_U32(ctx, 2));
    // 0x1ab9ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ab9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ab9b4: 0x8c271b00  lw          $a3, 0x1B00($at)
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6912)));
    // 0x1ab9b8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1ab9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1ab9bc: 0x8c281b04  lw          $t0, 0x1B04($at)
    ctx->pc = 0x1ab9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6916)));
    // 0x1ab9c0: 0xc060614  jal         func_181850
    ctx->pc = 0x1AB9C0u;
    SET_GPR_U32(ctx, 31, 0x1AB9C8u);
    ctx->pc = 0x1AB9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9C0u;
            // 0x1ab9c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9C8u; }
        if (ctx->pc != 0x1AB9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9C8u; }
        if (ctx->pc != 0x1AB9C8u) { return; }
    }
    ctx->pc = 0x1AB9C8u;
    // 0x1ab9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9cc: 0xc06060c  jal         func_181830
    ctx->pc = 0x1AB9CCu;
    SET_GPR_U32(ctx, 31, 0x1AB9D4u);
    ctx->pc = 0x1AB9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9CCu;
            // 0x1ab9d0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9D4u; }
        if (ctx->pc != 0x1AB9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9D4u; }
        if (ctx->pc != 0x1AB9D4u) { return; }
    }
    ctx->pc = 0x1AB9D4u;
    // 0x1ab9d4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1ab9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1ab9d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab9e0: 0xc060604  jal         func_181810
    ctx->pc = 0x1AB9E0u;
    SET_GPR_U32(ctx, 31, 0x1AB9E8u);
    ctx->pc = 0x1AB9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9E0u;
            // 0x1ab9e4: 0x24c6a988  addiu       $a2, $a2, -0x5678 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9E8u; }
        if (ctx->pc != 0x1AB9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9E8u; }
        if (ctx->pc != 0x1AB9E8u) { return; }
    }
    ctx->pc = 0x1AB9E8u;
    // 0x1ab9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9f0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1AB9F0u;
    SET_GPR_U32(ctx, 31, 0x1AB9F8u);
    ctx->pc = 0x1AB9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9F0u;
            // 0x1ab9f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9F8u; }
        if (ctx->pc != 0x1AB9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9F8u; }
        if (ctx->pc != 0x1AB9F8u) { return; }
    }
    ctx->pc = 0x1AB9F8u;
    // 0x1ab9f8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1ab9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1ab9fc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1AB9FCu;
    SET_GPR_U32(ctx, 31, 0x1ABA04u);
    ctx->pc = 0x1ABA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9FCu;
            // 0x1aba00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA04u; }
        if (ctx->pc != 0x1ABA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA04u; }
        if (ctx->pc != 0x1ABA04u) { return; }
    }
    ctx->pc = 0x1ABA04u;
    // 0x1aba04: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1ABA04u;
    SET_GPR_U32(ctx, 31, 0x1ABA0Cu);
    ctx->pc = 0x1ABA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA04u;
            // 0x1aba08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA0Cu; }
        if (ctx->pc != 0x1ABA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA0Cu; }
        if (ctx->pc != 0x1ABA0Cu) { return; }
    }
    ctx->pc = 0x1ABA0Cu;
    // 0x1aba0c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1aba0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aba10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aba14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba1c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1ABA1Cu;
    SET_GPR_U32(ctx, 31, 0x1ABA24u);
    ctx->pc = 0x1ABA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA1Cu;
            // 0x1aba20: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA24u; }
        if (ctx->pc != 0x1ABA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA24u; }
        if (ctx->pc != 0x1ABA24u) { return; }
    }
    ctx->pc = 0x1ABA24u;
    // 0x1aba24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aba24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aba28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aba28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aba2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aba2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aba30: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA30u;
            // 0x1aba34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABA38u;
}
