#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage7Boss_Hontai
// Address: 0x1b8030 - 0x1b8548
void CreateStage7Boss_Hontai_0x1b8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage7Boss_Hontai_0x1b8030");
#endif

    ctx->pc = 0x1b8030u;

    // 0x1b8030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8034: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1b8034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1b8038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b803c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8040: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B8040u;
    SET_GPR_U32(ctx, 31, 0x1B8048u);
    ctx->pc = 0x1B8044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8040u;
            // 0x1b8044: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8048u; }
        if (ctx->pc != 0x1B8048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8048u; }
        if (ctx->pc != 0x1B8048u) { return; }
    }
    ctx->pc = 0x1B8048u;
    // 0x1b8048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b804c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b8050: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b8054: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B8054u;
    SET_GPR_U32(ctx, 31, 0x1B805Cu);
    ctx->pc = 0x1B8058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8054u;
            // 0x1b8058: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B805Cu; }
        if (ctx->pc != 0x1B805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B805Cu; }
        if (ctx->pc != 0x1B805Cu) { return; }
    }
    ctx->pc = 0x1B805Cu;
    // 0x1b805c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B805Cu;
    SET_GPR_U32(ctx, 31, 0x1B8064u);
    ctx->pc = 0x1B8060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B805Cu;
            // 0x1b8060: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8064u; }
        if (ctx->pc != 0x1B8064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8064u; }
        if (ctx->pc != 0x1B8064u) { return; }
    }
    ctx->pc = 0x1B8064u;
    // 0x1b8064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8068: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B8068u;
    SET_GPR_U32(ctx, 31, 0x1B8070u);
    ctx->pc = 0x1B806Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8068u;
            // 0x1b806c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8070u; }
        if (ctx->pc != 0x1B8070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8070u; }
        if (ctx->pc != 0x1B8070u) { return; }
    }
    ctx->pc = 0x1B8070u;
    // 0x1b8070: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8074: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8078: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B8078u;
    SET_GPR_U32(ctx, 31, 0x1B8080u);
    ctx->pc = 0x1B807Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8078u;
            // 0x1b807c: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8080u; }
        if (ctx->pc != 0x1B8080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8080u; }
        if (ctx->pc != 0x1B8080u) { return; }
    }
    ctx->pc = 0x1B8080u;
    // 0x1b8080: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8088: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b8088u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b808c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8090: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8094: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b8094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b8098: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b809c: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b809cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b80a0: 0xc060614  jal         func_181850
    ctx->pc = 0x1B80A0u;
    SET_GPR_U32(ctx, 31, 0x1B80A8u);
    ctx->pc = 0x1B80A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80A0u;
            // 0x1b80a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80A8u; }
        if (ctx->pc != 0x1B80A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80A8u; }
        if (ctx->pc != 0x1B80A8u) { return; }
    }
    ctx->pc = 0x1B80A8u;
    // 0x1b80a8: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B80A8u;
    SET_GPR_U32(ctx, 31, 0x1B80B0u);
    ctx->pc = 0x1B80ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80A8u;
            // 0x1b80ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80B0u; }
        if (ctx->pc != 0x1B80B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80B0u; }
        if (ctx->pc != 0x1B80B0u) { return; }
    }
    ctx->pc = 0x1B80B0u;
    // 0x1b80b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b80b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b80b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b80b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b80b8: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B80B8u;
    SET_GPR_U32(ctx, 31, 0x1B80C0u);
    ctx->pc = 0x1B80BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80B8u;
            // 0x1b80bc: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80C0u; }
        if (ctx->pc != 0x1B80C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80C0u; }
        if (ctx->pc != 0x1B80C0u) { return; }
    }
    ctx->pc = 0x1B80C0u;
    // 0x1b80c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b80c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b80c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b80c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80c8: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b80cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b80ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b80d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b80d4: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b80d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b80d8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b80d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b80dc: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b80dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b80e0: 0xc060614  jal         func_181850
    ctx->pc = 0x1B80E0u;
    SET_GPR_U32(ctx, 31, 0x1B80E8u);
    ctx->pc = 0x1B80E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80E0u;
            // 0x1b80e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80E8u; }
        if (ctx->pc != 0x1B80E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80E8u; }
        if (ctx->pc != 0x1B80E8u) { return; }
    }
    ctx->pc = 0x1B80E8u;
    // 0x1b80e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b80e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80ec: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B80ECu;
    SET_GPR_U32(ctx, 31, 0x1B80F4u);
    ctx->pc = 0x1B80F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80ECu;
            // 0x1b80f0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80F4u; }
        if (ctx->pc != 0x1B80F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80F4u; }
        if (ctx->pc != 0x1B80F4u) { return; }
    }
    ctx->pc = 0x1B80F4u;
    // 0x1b80f4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b80f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b80f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b80f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b80fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8100: 0xc060604  jal         func_181810
    ctx->pc = 0x1B8100u;
    SET_GPR_U32(ctx, 31, 0x1B8108u);
    ctx->pc = 0x1B8104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8100u;
            // 0x1b8104: 0x24c6a9e8  addiu       $a2, $a2, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8108u; }
        if (ctx->pc != 0x1B8108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8108u; }
        if (ctx->pc != 0x1B8108u) { return; }
    }
    ctx->pc = 0x1B8108u;
    // 0x1b8108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b810c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b810cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8110: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B8110u;
    SET_GPR_U32(ctx, 31, 0x1B8118u);
    ctx->pc = 0x1B8114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8110u;
            // 0x1b8114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8118u; }
        if (ctx->pc != 0x1B8118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8118u; }
        if (ctx->pc != 0x1B8118u) { return; }
    }
    ctx->pc = 0x1B8118u;
    // 0x1b8118: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b8118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b811c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B811Cu;
    SET_GPR_U32(ctx, 31, 0x1B8124u);
    ctx->pc = 0x1B8120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B811Cu;
            // 0x1b8120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8124u; }
        if (ctx->pc != 0x1B8124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8124u; }
        if (ctx->pc != 0x1B8124u) { return; }
    }
    ctx->pc = 0x1B8124u;
    // 0x1b8124: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B8124u;
    SET_GPR_U32(ctx, 31, 0x1B812Cu);
    ctx->pc = 0x1B8128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8124u;
            // 0x1b8128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B812Cu; }
        if (ctx->pc != 0x1B812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B812Cu; }
        if (ctx->pc != 0x1B812Cu) { return; }
    }
    ctx->pc = 0x1B812Cu;
    // 0x1b812c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B812Cu;
    SET_GPR_U32(ctx, 31, 0x1B8134u);
    ctx->pc = 0x1B8130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B812Cu;
            // 0x1b8130: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8134u; }
        if (ctx->pc != 0x1B8134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8134u; }
        if (ctx->pc != 0x1B8134u) { return; }
    }
    ctx->pc = 0x1B8134u;
    // 0x1b8134: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8138: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b8138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b813c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b8140: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B8140u;
    SET_GPR_U32(ctx, 31, 0x1B8148u);
    ctx->pc = 0x1B8144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8140u;
            // 0x1b8144: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8148u; }
        if (ctx->pc != 0x1B8148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8148u; }
        if (ctx->pc != 0x1B8148u) { return; }
    }
    ctx->pc = 0x1B8148u;
    // 0x1b8148: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B8148u;
    SET_GPR_U32(ctx, 31, 0x1B8150u);
    ctx->pc = 0x1B814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8148u;
            // 0x1b814c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8150u; }
        if (ctx->pc != 0x1B8150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8150u; }
        if (ctx->pc != 0x1B8150u) { return; }
    }
    ctx->pc = 0x1B8150u;
    // 0x1b8150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8154: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B8154u;
    SET_GPR_U32(ctx, 31, 0x1B815Cu);
    ctx->pc = 0x1B8158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8154u;
            // 0x1b8158: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B815Cu; }
        if (ctx->pc != 0x1B815Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B815Cu; }
        if (ctx->pc != 0x1B815Cu) { return; }
    }
    ctx->pc = 0x1B815Cu;
    // 0x1b815c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b815cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8160: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8164: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B8164u;
    SET_GPR_U32(ctx, 31, 0x1B816Cu);
    ctx->pc = 0x1B8168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8164u;
            // 0x1b8168: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B816Cu; }
        if (ctx->pc != 0x1B816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B816Cu; }
        if (ctx->pc != 0x1B816Cu) { return; }
    }
    ctx->pc = 0x1B816Cu;
    // 0x1b816c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b816cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8170: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b8170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8174: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b8174u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b8178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b817c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b817cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8180: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b8180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b8184: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8188: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b818c: 0xc060614  jal         func_181850
    ctx->pc = 0x1B818Cu;
    SET_GPR_U32(ctx, 31, 0x1B8194u);
    ctx->pc = 0x1B8190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B818Cu;
            // 0x1b8190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8194u; }
        if (ctx->pc != 0x1B8194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8194u; }
        if (ctx->pc != 0x1B8194u) { return; }
    }
    ctx->pc = 0x1B8194u;
    // 0x1b8194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8198: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B8198u;
    SET_GPR_U32(ctx, 31, 0x1B81A0u);
    ctx->pc = 0x1B819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8198u;
            // 0x1b819c: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81A0u; }
        if (ctx->pc != 0x1B81A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81A0u; }
        if (ctx->pc != 0x1B81A0u) { return; }
    }
    ctx->pc = 0x1B81A0u;
    // 0x1b81a0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b81a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b81a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b81ac: 0xc060604  jal         func_181810
    ctx->pc = 0x1B81ACu;
    SET_GPR_U32(ctx, 31, 0x1B81B4u);
    ctx->pc = 0x1B81B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81ACu;
            // 0x1b81b0: 0x24c6a9e8  addiu       $a2, $a2, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81B4u; }
        if (ctx->pc != 0x1B81B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81B4u; }
        if (ctx->pc != 0x1B81B4u) { return; }
    }
    ctx->pc = 0x1B81B4u;
    // 0x1b81b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b81b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81bc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B81BCu;
    SET_GPR_U32(ctx, 31, 0x1B81C4u);
    ctx->pc = 0x1B81C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81BCu;
            // 0x1b81c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81C4u; }
        if (ctx->pc != 0x1B81C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81C4u; }
        if (ctx->pc != 0x1B81C4u) { return; }
    }
    ctx->pc = 0x1B81C4u;
    // 0x1b81c4: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b81c8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B81C8u;
    SET_GPR_U32(ctx, 31, 0x1B81D0u);
    ctx->pc = 0x1B81CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81C8u;
            // 0x1b81cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81D0u; }
        if (ctx->pc != 0x1B81D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81D0u; }
        if (ctx->pc != 0x1B81D0u) { return; }
    }
    ctx->pc = 0x1B81D0u;
    // 0x1b81d0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B81D0u;
    SET_GPR_U32(ctx, 31, 0x1B81D8u);
    ctx->pc = 0x1B81D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81D0u;
            // 0x1b81d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81D8u; }
        if (ctx->pc != 0x1B81D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81D8u; }
        if (ctx->pc != 0x1B81D8u) { return; }
    }
    ctx->pc = 0x1B81D8u;
    // 0x1b81d8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B81D8u;
    SET_GPR_U32(ctx, 31, 0x1B81E0u);
    ctx->pc = 0x1B81DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81D8u;
            // 0x1b81dc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81E0u; }
        if (ctx->pc != 0x1B81E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81E0u; }
        if (ctx->pc != 0x1B81E0u) { return; }
    }
    ctx->pc = 0x1B81E0u;
    // 0x1b81e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b81e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b81e4: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b81e8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b81e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b81ec: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B81ECu;
    SET_GPR_U32(ctx, 31, 0x1B81F4u);
    ctx->pc = 0x1B81F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81ECu;
            // 0x1b81f0: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81F4u; }
        if (ctx->pc != 0x1B81F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81F4u; }
        if (ctx->pc != 0x1B81F4u) { return; }
    }
    ctx->pc = 0x1B81F4u;
    // 0x1b81f4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B81F4u;
    SET_GPR_U32(ctx, 31, 0x1B81FCu);
    ctx->pc = 0x1B81F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81F4u;
            // 0x1b81f8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81FCu; }
        if (ctx->pc != 0x1B81FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81FCu; }
        if (ctx->pc != 0x1B81FCu) { return; }
    }
    ctx->pc = 0x1B81FCu;
    // 0x1b81fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b81fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8200: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B8200u;
    SET_GPR_U32(ctx, 31, 0x1B8208u);
    ctx->pc = 0x1B8204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8200u;
            // 0x1b8204: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8208u; }
        if (ctx->pc != 0x1B8208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8208u; }
        if (ctx->pc != 0x1B8208u) { return; }
    }
    ctx->pc = 0x1B8208u;
    // 0x1b8208: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b820c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8210: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B8210u;
    SET_GPR_U32(ctx, 31, 0x1B8218u);
    ctx->pc = 0x1B8214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8210u;
            // 0x1b8214: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8218u; }
        if (ctx->pc != 0x1B8218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8218u; }
        if (ctx->pc != 0x1B8218u) { return; }
    }
    ctx->pc = 0x1B8218u;
    // 0x1b8218: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b821c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b821cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8220: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b8220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b8224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8228: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b822c: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b822cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b8230: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8234: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b8234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b8238: 0xc060614  jal         func_181850
    ctx->pc = 0x1B8238u;
    SET_GPR_U32(ctx, 31, 0x1B8240u);
    ctx->pc = 0x1B823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8238u;
            // 0x1b823c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8240u; }
        if (ctx->pc != 0x1B8240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8240u; }
        if (ctx->pc != 0x1B8240u) { return; }
    }
    ctx->pc = 0x1B8240u;
    // 0x1b8240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8244: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B8244u;
    SET_GPR_U32(ctx, 31, 0x1B824Cu);
    ctx->pc = 0x1B8248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8244u;
            // 0x1b8248: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B824Cu; }
        if (ctx->pc != 0x1B824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B824Cu; }
        if (ctx->pc != 0x1B824Cu) { return; }
    }
    ctx->pc = 0x1B824Cu;
    // 0x1b824c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b8250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8258: 0xc060604  jal         func_181810
    ctx->pc = 0x1B8258u;
    SET_GPR_U32(ctx, 31, 0x1B8260u);
    ctx->pc = 0x1B825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8258u;
            // 0x1b825c: 0x24c6a9e8  addiu       $a2, $a2, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8260u; }
        if (ctx->pc != 0x1B8260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8260u; }
        if (ctx->pc != 0x1B8260u) { return; }
    }
    ctx->pc = 0x1B8260u;
    // 0x1b8260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8268: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B8268u;
    SET_GPR_U32(ctx, 31, 0x1B8270u);
    ctx->pc = 0x1B826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8268u;
            // 0x1b826c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8270u; }
        if (ctx->pc != 0x1B8270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8270u; }
        if (ctx->pc != 0x1B8270u) { return; }
    }
    ctx->pc = 0x1B8270u;
    // 0x1b8270: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b8274: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B8274u;
    SET_GPR_U32(ctx, 31, 0x1B827Cu);
    ctx->pc = 0x1B8278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8274u;
            // 0x1b8278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B827Cu; }
        if (ctx->pc != 0x1B827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B827Cu; }
        if (ctx->pc != 0x1B827Cu) { return; }
    }
    ctx->pc = 0x1B827Cu;
    // 0x1b827c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B827Cu;
    SET_GPR_U32(ctx, 31, 0x1B8284u);
    ctx->pc = 0x1B8280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B827Cu;
            // 0x1b8280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8284u; }
        if (ctx->pc != 0x1B8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8284u; }
        if (ctx->pc != 0x1B8284u) { return; }
    }
    ctx->pc = 0x1B8284u;
    // 0x1b8284: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B8284u;
    SET_GPR_U32(ctx, 31, 0x1B828Cu);
    ctx->pc = 0x1B8288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8284u;
            // 0x1b8288: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B828Cu; }
        if (ctx->pc != 0x1B828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B828Cu; }
        if (ctx->pc != 0x1B828Cu) { return; }
    }
    ctx->pc = 0x1B828Cu;
    // 0x1b828c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b828cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8290: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b8290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b8294: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b8294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b8298: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B8298u;
    SET_GPR_U32(ctx, 31, 0x1B82A0u);
    ctx->pc = 0x1B829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8298u;
            // 0x1b829c: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82A0u; }
        if (ctx->pc != 0x1B82A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82A0u; }
        if (ctx->pc != 0x1B82A0u) { return; }
    }
    ctx->pc = 0x1B82A0u;
    // 0x1b82a0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B82A0u;
    SET_GPR_U32(ctx, 31, 0x1B82A8u);
    ctx->pc = 0x1B82A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82A0u;
            // 0x1b82a4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82A8u; }
        if (ctx->pc != 0x1B82A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82A8u; }
        if (ctx->pc != 0x1B82A8u) { return; }
    }
    ctx->pc = 0x1B82A8u;
    // 0x1b82a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b82a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82ac: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B82ACu;
    SET_GPR_U32(ctx, 31, 0x1B82B4u);
    ctx->pc = 0x1B82B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82ACu;
            // 0x1b82b0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82B4u; }
        if (ctx->pc != 0x1B82B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82B4u; }
        if (ctx->pc != 0x1B82B4u) { return; }
    }
    ctx->pc = 0x1B82B4u;
    // 0x1b82b4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b82b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b82b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b82b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b82bc: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B82BCu;
    SET_GPR_U32(ctx, 31, 0x1B82C4u);
    ctx->pc = 0x1B82C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82BCu;
            // 0x1b82c0: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82C4u; }
        if (ctx->pc != 0x1B82C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82C4u; }
        if (ctx->pc != 0x1B82C4u) { return; }
    }
    ctx->pc = 0x1B82C4u;
    // 0x1b82c4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b82c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b82c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b82c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82cc: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b82d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b82d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82d4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b82d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b82d8: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b82d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b82dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b82dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b82e0: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b82e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b82e4: 0xc060614  jal         func_181850
    ctx->pc = 0x1B82E4u;
    SET_GPR_U32(ctx, 31, 0x1B82ECu);
    ctx->pc = 0x1B82E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82E4u;
            // 0x1b82e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82ECu; }
        if (ctx->pc != 0x1B82ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82ECu; }
        if (ctx->pc != 0x1B82ECu) { return; }
    }
    ctx->pc = 0x1B82ECu;
    // 0x1b82ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b82ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b82f0: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B82F0u;
    SET_GPR_U32(ctx, 31, 0x1B82F8u);
    ctx->pc = 0x1B82F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B82F0u;
            // 0x1b82f4: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82F8u; }
        if (ctx->pc != 0x1B82F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B82F8u; }
        if (ctx->pc != 0x1B82F8u) { return; }
    }
    ctx->pc = 0x1B82F8u;
    // 0x1b82f8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b82f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b82fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b82fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8304: 0xc060604  jal         func_181810
    ctx->pc = 0x1B8304u;
    SET_GPR_U32(ctx, 31, 0x1B830Cu);
    ctx->pc = 0x1B8308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8304u;
            // 0x1b8308: 0x24c6a9e8  addiu       $a2, $a2, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B830Cu; }
        if (ctx->pc != 0x1B830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B830Cu; }
        if (ctx->pc != 0x1B830Cu) { return; }
    }
    ctx->pc = 0x1B830Cu;
    // 0x1b830c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8314: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B8314u;
    SET_GPR_U32(ctx, 31, 0x1B831Cu);
    ctx->pc = 0x1B8318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8314u;
            // 0x1b8318: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B831Cu; }
        if (ctx->pc != 0x1B831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B831Cu; }
        if (ctx->pc != 0x1B831Cu) { return; }
    }
    ctx->pc = 0x1B831Cu;
    // 0x1b831c: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b8320: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B8320u;
    SET_GPR_U32(ctx, 31, 0x1B8328u);
    ctx->pc = 0x1B8324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8320u;
            // 0x1b8324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8328u; }
        if (ctx->pc != 0x1B8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8328u; }
        if (ctx->pc != 0x1B8328u) { return; }
    }
    ctx->pc = 0x1B8328u;
    // 0x1b8328: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B8328u;
    SET_GPR_U32(ctx, 31, 0x1B8330u);
    ctx->pc = 0x1B832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8328u;
            // 0x1b832c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8330u; }
        if (ctx->pc != 0x1B8330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8330u; }
        if (ctx->pc != 0x1B8330u) { return; }
    }
    ctx->pc = 0x1B8330u;
    // 0x1b8330: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B8330u;
    SET_GPR_U32(ctx, 31, 0x1B8338u);
    ctx->pc = 0x1B8334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8330u;
            // 0x1b8334: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8338u; }
        if (ctx->pc != 0x1B8338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8338u; }
        if (ctx->pc != 0x1B8338u) { return; }
    }
    ctx->pc = 0x1B8338u;
    // 0x1b8338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b833c: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b833cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b8340: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b8340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b8344: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B8344u;
    SET_GPR_U32(ctx, 31, 0x1B834Cu);
    ctx->pc = 0x1B8348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8344u;
            // 0x1b8348: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B834Cu; }
        if (ctx->pc != 0x1B834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B834Cu; }
        if (ctx->pc != 0x1B834Cu) { return; }
    }
    ctx->pc = 0x1B834Cu;
    // 0x1b834c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B834Cu;
    SET_GPR_U32(ctx, 31, 0x1B8354u);
    ctx->pc = 0x1B8350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B834Cu;
            // 0x1b8350: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8354u; }
        if (ctx->pc != 0x1B8354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8354u; }
        if (ctx->pc != 0x1B8354u) { return; }
    }
    ctx->pc = 0x1B8354u;
    // 0x1b8354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8358: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B8358u;
    SET_GPR_U32(ctx, 31, 0x1B8360u);
    ctx->pc = 0x1B835Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8358u;
            // 0x1b835c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8360u; }
        if (ctx->pc != 0x1B8360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8360u; }
        if (ctx->pc != 0x1B8360u) { return; }
    }
    ctx->pc = 0x1B8360u;
    // 0x1b8360: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8364: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8368: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B8368u;
    SET_GPR_U32(ctx, 31, 0x1B8370u);
    ctx->pc = 0x1B836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8368u;
            // 0x1b836c: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8370u; }
        if (ctx->pc != 0x1B8370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8370u; }
        if (ctx->pc != 0x1B8370u) { return; }
    }
    ctx->pc = 0x1B8370u;
    // 0x1b8370: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8374: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b8374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8378: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b8378u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b837c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b837cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8380: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8384: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b8384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b8388: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b838c: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b838cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b8390: 0xc060614  jal         func_181850
    ctx->pc = 0x1B8390u;
    SET_GPR_U32(ctx, 31, 0x1B8398u);
    ctx->pc = 0x1B8394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8390u;
            // 0x1b8394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8398u; }
        if (ctx->pc != 0x1B8398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8398u; }
        if (ctx->pc != 0x1B8398u) { return; }
    }
    ctx->pc = 0x1B8398u;
    // 0x1b8398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b839c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B839Cu;
    SET_GPR_U32(ctx, 31, 0x1B83A4u);
    ctx->pc = 0x1B83A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B839Cu;
            // 0x1b83a0: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83A4u; }
        if (ctx->pc != 0x1B83A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83A4u; }
        if (ctx->pc != 0x1B83A4u) { return; }
    }
    ctx->pc = 0x1B83A4u;
    // 0x1b83a4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b83a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b83a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b83a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b83acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b83b0: 0xc060604  jal         func_181810
    ctx->pc = 0x1B83B0u;
    SET_GPR_U32(ctx, 31, 0x1B83B8u);
    ctx->pc = 0x1B83B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83B0u;
            // 0x1b83b4: 0x24c6a9e8  addiu       $a2, $a2, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83B8u; }
        if (ctx->pc != 0x1B83B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83B8u; }
        if (ctx->pc != 0x1B83B8u) { return; }
    }
    ctx->pc = 0x1B83B8u;
    // 0x1b83b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b83b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b83bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83c0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B83C0u;
    SET_GPR_U32(ctx, 31, 0x1B83C8u);
    ctx->pc = 0x1B83C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83C0u;
            // 0x1b83c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83C8u; }
        if (ctx->pc != 0x1B83C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83C8u; }
        if (ctx->pc != 0x1B83C8u) { return; }
    }
    ctx->pc = 0x1B83C8u;
    // 0x1b83c8: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b83cc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B83CCu;
    SET_GPR_U32(ctx, 31, 0x1B83D4u);
    ctx->pc = 0x1B83D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83CCu;
            // 0x1b83d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83D4u; }
        if (ctx->pc != 0x1B83D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83D4u; }
        if (ctx->pc != 0x1B83D4u) { return; }
    }
    ctx->pc = 0x1B83D4u;
    // 0x1b83d4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B83D4u;
    SET_GPR_U32(ctx, 31, 0x1B83DCu);
    ctx->pc = 0x1B83D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83D4u;
            // 0x1b83d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83DCu; }
        if (ctx->pc != 0x1B83DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83DCu; }
        if (ctx->pc != 0x1B83DCu) { return; }
    }
    ctx->pc = 0x1B83DCu;
    // 0x1b83dc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B83DCu;
    SET_GPR_U32(ctx, 31, 0x1B83E4u);
    ctx->pc = 0x1B83E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83DCu;
            // 0x1b83e0: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83E4u; }
        if (ctx->pc != 0x1B83E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83E4u; }
        if (ctx->pc != 0x1B83E4u) { return; }
    }
    ctx->pc = 0x1B83E4u;
    // 0x1b83e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b83e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b83e8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b83ec: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b83ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b83f0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B83F0u;
    SET_GPR_U32(ctx, 31, 0x1B83F8u);
    ctx->pc = 0x1B83F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83F0u;
            // 0x1b83f4: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83F8u; }
        if (ctx->pc != 0x1B83F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B83F8u; }
        if (ctx->pc != 0x1B83F8u) { return; }
    }
    ctx->pc = 0x1B83F8u;
    // 0x1b83f8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B83F8u;
    SET_GPR_U32(ctx, 31, 0x1B8400u);
    ctx->pc = 0x1B83FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B83F8u;
            // 0x1b83fc: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8400u; }
        if (ctx->pc != 0x1B8400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8400u; }
        if (ctx->pc != 0x1B8400u) { return; }
    }
    ctx->pc = 0x1B8400u;
    // 0x1b8400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8404: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B8404u;
    SET_GPR_U32(ctx, 31, 0x1B840Cu);
    ctx->pc = 0x1B8408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8404u;
            // 0x1b8408: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B840Cu; }
        if (ctx->pc != 0x1B840Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B840Cu; }
        if (ctx->pc != 0x1B840Cu) { return; }
    }
    ctx->pc = 0x1B840Cu;
    // 0x1b840c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b840cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8410: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b8410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8414: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B8414u;
    SET_GPR_U32(ctx, 31, 0x1B841Cu);
    ctx->pc = 0x1B8418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8414u;
            // 0x1b8418: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B841Cu; }
        if (ctx->pc != 0x1B841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B841Cu; }
        if (ctx->pc != 0x1B841Cu) { return; }
    }
    ctx->pc = 0x1B841Cu;
    // 0x1b841c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b841cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8420: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b8420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8424: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b8424u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b8428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b842c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8430: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b8430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b8434: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b8434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b8438: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b8438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b843c: 0xc060614  jal         func_181850
    ctx->pc = 0x1B843Cu;
    SET_GPR_U32(ctx, 31, 0x1B8444u);
    ctx->pc = 0x1B8440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B843Cu;
            // 0x1b8440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8444u; }
        if (ctx->pc != 0x1B8444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8444u; }
        if (ctx->pc != 0x1B8444u) { return; }
    }
    ctx->pc = 0x1B8444u;
    // 0x1b8444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8448: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B8448u;
    SET_GPR_U32(ctx, 31, 0x1B8450u);
    ctx->pc = 0x1B844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8448u;
            // 0x1b844c: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8450u; }
        if (ctx->pc != 0x1B8450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8450u; }
        if (ctx->pc != 0x1B8450u) { return; }
    }
    ctx->pc = 0x1B8450u;
    // 0x1b8450: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b8450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b8454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b845c: 0xc060604  jal         func_181810
    ctx->pc = 0x1B845Cu;
    SET_GPR_U32(ctx, 31, 0x1B8464u);
    ctx->pc = 0x1B8460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B845Cu;
            // 0x1b8460: 0x24c6a9e8  addiu       $a2, $a2, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8464u; }
        if (ctx->pc != 0x1B8464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8464u; }
        if (ctx->pc != 0x1B8464u) { return; }
    }
    ctx->pc = 0x1B8464u;
    // 0x1b8464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b846c: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B846Cu;
    SET_GPR_U32(ctx, 31, 0x1B8474u);
    ctx->pc = 0x1B8470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B846Cu;
            // 0x1b8470: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8474u; }
        if (ctx->pc != 0x1B8474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8474u; }
        if (ctx->pc != 0x1B8474u) { return; }
    }
    ctx->pc = 0x1B8474u;
    // 0x1b8474: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b8474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b8478: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B8478u;
    SET_GPR_U32(ctx, 31, 0x1B8480u);
    ctx->pc = 0x1B847Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8478u;
            // 0x1b847c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8480u; }
        if (ctx->pc != 0x1B8480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8480u; }
        if (ctx->pc != 0x1B8480u) { return; }
    }
    ctx->pc = 0x1B8480u;
    // 0x1b8480: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B8480u;
    SET_GPR_U32(ctx, 31, 0x1B8488u);
    ctx->pc = 0x1B8484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8480u;
            // 0x1b8484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8488u; }
        if (ctx->pc != 0x1B8488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8488u; }
        if (ctx->pc != 0x1B8488u) { return; }
    }
    ctx->pc = 0x1B8488u;
    // 0x1b8488: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B8488u;
    SET_GPR_U32(ctx, 31, 0x1B8490u);
    ctx->pc = 0x1B848Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8488u;
            // 0x1b848c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8490u; }
        if (ctx->pc != 0x1B8490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8490u; }
        if (ctx->pc != 0x1B8490u) { return; }
    }
    ctx->pc = 0x1B8490u;
    // 0x1b8490: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8494: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1b8494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1b8498: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1b849c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1B849Cu;
    SET_GPR_U32(ctx, 31, 0x1B84A4u);
    ctx->pc = 0x1B84A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B849Cu;
            // 0x1b84a0: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84A4u; }
        if (ctx->pc != 0x1B84A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84A4u; }
        if (ctx->pc != 0x1B84A4u) { return; }
    }
    ctx->pc = 0x1B84A4u;
    // 0x1b84a4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B84A4u;
    SET_GPR_U32(ctx, 31, 0x1B84ACu);
    ctx->pc = 0x1B84A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84A4u;
            // 0x1b84a8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84ACu; }
        if (ctx->pc != 0x1B84ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84ACu; }
        if (ctx->pc != 0x1B84ACu) { return; }
    }
    ctx->pc = 0x1B84ACu;
    // 0x1b84ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b84acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84b0: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1B84B0u;
    SET_GPR_U32(ctx, 31, 0x1B84B8u);
    ctx->pc = 0x1B84B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84B0u;
            // 0x1b84b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84B8u; }
        if (ctx->pc != 0x1B84B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84B8u; }
        if (ctx->pc != 0x1B84B8u) { return; }
    }
    ctx->pc = 0x1B84B8u;
    // 0x1b84b8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b84b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b84bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b84c0: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1B84C0u;
    SET_GPR_U32(ctx, 31, 0x1B84C8u);
    ctx->pc = 0x1B84C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84C0u;
            // 0x1b84c4: 0xac221ba8  sw          $v0, 0x1BA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84C8u; }
        if (ctx->pc != 0x1B84C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84C8u; }
        if (ctx->pc != 0x1B84C8u) { return; }
    }
    ctx->pc = 0x1B84C8u;
    // 0x1b84c8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b84cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b84ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84d0: 0xac221bac  sw          $v0, 0x1BAC($at)
    ctx->pc = 0x1b84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7084), GPR_U32(ctx, 2));
    // 0x1b84d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84d8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b84d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b84dc: 0x8c271ba8  lw          $a3, 0x1BA8($at)
    ctx->pc = 0x1b84dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7080)));
    // 0x1b84e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1b84e4: 0x8c281bac  lw          $t0, 0x1BAC($at)
    ctx->pc = 0x1b84e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7084)));
    // 0x1b84e8: 0xc060614  jal         func_181850
    ctx->pc = 0x1B84E8u;
    SET_GPR_U32(ctx, 31, 0x1B84F0u);
    ctx->pc = 0x1B84ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84E8u;
            // 0x1b84ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84F0u; }
        if (ctx->pc != 0x1B84F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84F0u; }
        if (ctx->pc != 0x1B84F0u) { return; }
    }
    ctx->pc = 0x1B84F0u;
    // 0x1b84f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b84f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f4: 0xc06060c  jal         func_181830
    ctx->pc = 0x1B84F4u;
    SET_GPR_U32(ctx, 31, 0x1B84FCu);
    ctx->pc = 0x1B84F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B84F4u;
            // 0x1b84f8: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84FCu; }
        if (ctx->pc != 0x1B84FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B84FCu; }
        if (ctx->pc != 0x1B84FCu) { return; }
    }
    ctx->pc = 0x1B84FCu;
    // 0x1b84fc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1b84fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1b8500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8508: 0xc060604  jal         func_181810
    ctx->pc = 0x1B8508u;
    SET_GPR_U32(ctx, 31, 0x1B8510u);
    ctx->pc = 0x1B850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8508u;
            // 0x1b850c: 0x24c6a9e8  addiu       $a2, $a2, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8510u; }
        if (ctx->pc != 0x1B8510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8510u; }
        if (ctx->pc != 0x1B8510u) { return; }
    }
    ctx->pc = 0x1B8510u;
    // 0x1b8510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8518: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1B8518u;
    SET_GPR_U32(ctx, 31, 0x1B8520u);
    ctx->pc = 0x1B851Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8518u;
            // 0x1b851c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8520u; }
        if (ctx->pc != 0x1B8520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8520u; }
        if (ctx->pc != 0x1B8520u) { return; }
    }
    ctx->pc = 0x1B8520u;
    // 0x1b8520: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b8524: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1B8524u;
    SET_GPR_U32(ctx, 31, 0x1B852Cu);
    ctx->pc = 0x1B8528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8524u;
            // 0x1b8528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B852Cu; }
        if (ctx->pc != 0x1B852Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B852Cu; }
        if (ctx->pc != 0x1B852Cu) { return; }
    }
    ctx->pc = 0x1B852Cu;
    // 0x1b852c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1B852Cu;
    SET_GPR_U32(ctx, 31, 0x1B8534u);
    ctx->pc = 0x1B8530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B852Cu;
            // 0x1b8530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8534u; }
        if (ctx->pc != 0x1B8534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8534u; }
        if (ctx->pc != 0x1B8534u) { return; }
    }
    ctx->pc = 0x1B8534u;
    // 0x1b8534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b853c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b853cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8540: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8540u;
            // 0x1b8544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8548u;
}
