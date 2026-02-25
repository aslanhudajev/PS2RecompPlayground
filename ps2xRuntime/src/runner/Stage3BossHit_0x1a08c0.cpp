#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossHit
// Address: 0x1a08c0 - 0x1a0a38
void Stage3BossHit_0x1a08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossHit_0x1a08c0");
#endif

    ctx->pc = 0x1a08c0u;

    // 0x1a08c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a08c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a08c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a08c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a08c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a08cc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a08d0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a08d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a08d4: 0x14e00034  bnez        $a3, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A08D4u;
    {
        const bool branch_taken_0x1a08d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A08D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08D4u;
            // 0x1a08d8: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08d4) {
            ctx->pc = 0x1A09A8u;
            goto label_1a09a8;
        }
    }
    ctx->pc = 0x1A08DCu;
    // 0x1a08dc: 0x14c00032  bnez        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A08DCu;
    {
        const bool branch_taken_0x1a08dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A08E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08DCu;
            // 0x1a08e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08dc) {
            ctx->pc = 0x1A09A8u;
            goto label_1a09a8;
        }
    }
    ctx->pc = 0x1A08E4u;
    // 0x1a08e4: 0xc060718  jal         func_181C60
    ctx->pc = 0x1A08E4u;
    SET_GPR_U32(ctx, 31, 0x1A08ECu);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08ECu; }
        if (ctx->pc != 0x1A08ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08ECu; }
        if (ctx->pc != 0x1A08ECu) { return; }
    }
    ctx->pc = 0x1A08ECu;
    // 0x1a08ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a08ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a08f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a08f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a08f4: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x1a08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x1a08f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A08F8u;
    {
        const bool branch_taken_0x1a08f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08F8u;
            // 0x1a08fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08f8) {
            ctx->pc = 0x1A0920u;
            goto label_1a0920;
        }
    }
    ctx->pc = 0x1A0900u;
    // 0x1a0900: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1A0900u;
    SET_GPR_U32(ctx, 31, 0x1A0908u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0908u; }
        if (ctx->pc != 0x1A0908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0908u; }
        if (ctx->pc != 0x1A0908u) { return; }
    }
    ctx->pc = 0x1A0908u;
    // 0x1a0908: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1a0908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1a090c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1a090cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1a0910: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1a0910u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8192u)));
    // 0x1a0914: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a0914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0918: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x1a0918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x1a091c: 0x0  nop
    ctx->pc = 0x1a091cu;
    // NOP
label_1a0920:
    // 0x1a0920: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a0924: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1a0928: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0928u;
    {
        const bool branch_taken_0x1a0928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0928u;
            // 0x1a092c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0928) {
            ctx->pc = 0x1A0950u;
            goto label_1a0950;
        }
    }
    ctx->pc = 0x1A0930u;
    // 0x1a0930: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1A0930u;
    SET_GPR_U32(ctx, 31, 0x1A0938u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0938u; }
        if (ctx->pc != 0x1A0938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0938u; }
        if (ctx->pc != 0x1A0938u) { return; }
    }
    ctx->pc = 0x1A0938u;
    // 0x1a0938: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1a093c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1a093cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1a0940: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1a0940u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8192u)));
    // 0x1a0944: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a0944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0948: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x1a0948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x1a094c: 0x0  nop
    ctx->pc = 0x1a094cu;
    // NOP
label_1a0950:
    // 0x1a0950: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0958: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1a095c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A095Cu;
    SET_GPR_U32(ctx, 31, 0x1A0964u);
    ctx->pc = 0x1A0960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A095Cu;
            // 0x1a0960: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0964u; }
        if (ctx->pc != 0x1A0964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0964u; }
        if (ctx->pc != 0x1A0964u) { return; }
    }
    ctx->pc = 0x1A0964u;
    // 0x1a0964: 0xc055d84  jal         func_157610
    ctx->pc = 0x1A0964u;
    SET_GPR_U32(ctx, 31, 0x1A096Cu);
    ctx->pc = 0x1A0968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0964u;
            // 0x1a0968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157610u;
    if (runtime->hasFunction(0x157610u)) {
        auto targetFn = runtime->lookupFunction(0x157610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A096Cu; }
        if (ctx->pc != 0x1A096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetExStageState_0x157610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A096Cu; }
        if (ctx->pc != 0x1A096Cu) { return; }
    }
    ctx->pc = 0x1A096Cu;
    // 0x1a096c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A096Cu;
    SET_GPR_U32(ctx, 31, 0x1A0974u);
    ctx->pc = 0x1A0970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A096Cu;
            // 0x1a0970: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0974u; }
        if (ctx->pc != 0x1A0974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0974u; }
        if (ctx->pc != 0x1A0974u) { return; }
    }
    ctx->pc = 0x1A0974u;
    // 0x1a0974: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A0974u;
    SET_GPR_U32(ctx, 31, 0x1A097Cu);
    ctx->pc = 0x1A0978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0974u;
            // 0x1a0978: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A097Cu; }
        if (ctx->pc != 0x1A097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A097Cu; }
        if (ctx->pc != 0x1A097Cu) { return; }
    }
    ctx->pc = 0x1A097Cu;
    // 0x1a097c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A097Cu;
    SET_GPR_U32(ctx, 31, 0x1A0984u);
    ctx->pc = 0x1A0980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A097Cu;
            // 0x1a0980: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0984u; }
        if (ctx->pc != 0x1A0984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0984u; }
        if (ctx->pc != 0x1A0984u) { return; }
    }
    ctx->pc = 0x1A0984u;
    // 0x1a0984: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A0984u;
    SET_GPR_U32(ctx, 31, 0x1A098Cu);
    ctx->pc = 0x1A0988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0984u;
            // 0x1a0988: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A098Cu; }
        if (ctx->pc != 0x1A098Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A098Cu; }
        if (ctx->pc != 0x1A098Cu) { return; }
    }
    ctx->pc = 0x1A098Cu;
    // 0x1a098c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A098Cu;
    SET_GPR_U32(ctx, 31, 0x1A0994u);
    ctx->pc = 0x1A0990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A098Cu;
            // 0x1a0990: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0994u; }
        if (ctx->pc != 0x1A0994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0994u; }
        if (ctx->pc != 0x1A0994u) { return; }
    }
    ctx->pc = 0x1A0994u;
    // 0x1a0994: 0xc05d110  jal         func_174440
    ctx->pc = 0x1A0994u;
    SET_GPR_U32(ctx, 31, 0x1A099Cu);
    ctx->pc = 0x1A0998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0994u;
            // 0x1a0998: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A099Cu; }
        if (ctx->pc != 0x1A099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A099Cu; }
        if (ctx->pc != 0x1A099Cu) { return; }
    }
    ctx->pc = 0x1A099Cu;
    // 0x1a099c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A099Cu;
    {
        const bool branch_taken_0x1a099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a099c) {
            ctx->pc = 0x1A0A28u;
            goto label_1a0a28;
        }
    }
    ctx->pc = 0x1A09A4u;
    // 0x1a09a4: 0x0  nop
    ctx->pc = 0x1a09a4u;
    // NOP
label_1a09a8:
    // 0x1a09a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a09ac: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A09ACu;
    {
        const bool branch_taken_0x1a09ac = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1a09ac) {
            ctx->pc = 0x1A09C0u;
            goto label_1a09c0;
        }
    }
    ctx->pc = 0x1A09B4u;
    // 0x1a09b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a09b8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A09B8u;
    {
        const bool branch_taken_0x1a09b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a09b8) {
            ctx->pc = 0x1A09D0u;
            goto label_1a09d0;
        }
    }
    ctx->pc = 0x1A09C0u;
label_1a09c0:
    // 0x1a09c0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1a09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a09c4: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1a09c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a09c8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A09C8u;
    {
        const bool branch_taken_0x1a09c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a09c8) {
            ctx->pc = 0x1A0A28u;
            goto label_1a0a28;
        }
    }
    ctx->pc = 0x1A09D0u;
label_1a09d0:
    // 0x1a09d0: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1a09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1a09d4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A09D4u;
    {
        const bool branch_taken_0x1a09d4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a09d4) {
            ctx->pc = 0x1A09F0u;
            goto label_1a09f0;
        }
    }
    ctx->pc = 0x1A09DCu;
    // 0x1a09dc: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x1a09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1a09e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a09e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a09e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a09e8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a09e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a09ec: 0x0  nop
    ctx->pc = 0x1a09ecu;
    // NOP
label_1a09f0:
    // 0x1a09f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a09f4: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A09F4u;
    {
        const bool branch_taken_0x1a09f4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a09f4) {
            ctx->pc = 0x1A0A28u;
            goto label_1a0a28;
        }
    }
    ctx->pc = 0x1A09FCu;
    // 0x1a09fc: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1a09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1a0a00: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1a0a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1a0a04: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1a0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1a0a08: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a0a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a0a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0a10: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1a0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1a0a14: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1a0a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a0a18: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a0a1c: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1a0a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1a0a20: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A0A20u;
    SET_GPR_U32(ctx, 31, 0x1A0A28u);
    ctx->pc = 0x1A0A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A20u;
            // 0x1a0a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A28u; }
        if (ctx->pc != 0x1A0A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A28u; }
        if (ctx->pc != 0x1A0A28u) { return; }
    }
    ctx->pc = 0x1A0A28u;
label_1a0a28:
    // 0x1a0a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A30u;
            // 0x1a0a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0920u: goto label_1a0920;
            case 0x1A0950u: goto label_1a0950;
            case 0x1A09A8u: goto label_1a09a8;
            case 0x1A09C0u: goto label_1a09c0;
            case 0x1A09D0u: goto label_1a09d0;
            case 0x1A09F0u: goto label_1a09f0;
            case 0x1A0A28u: goto label_1a0a28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0A38u;
}
