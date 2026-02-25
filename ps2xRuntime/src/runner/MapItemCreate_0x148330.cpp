#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapItemCreate
// Address: 0x148330 - 0x1483dc
void MapItemCreate_0x148330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapItemCreate_0x148330");
#endif

    ctx->pc = 0x148330u;

    // 0x148330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x148330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x148334: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x148334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x148338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14833c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148340: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x148340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148344: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148348: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x148348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14834c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148350: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x148350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148354: 0xc053368  jal         func_14CDA0
    ctx->pc = 0x148354u;
    SET_GPR_U32(ctx, 31, 0x14835Cu);
    ctx->pc = 0x148358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148354u;
            // 0x148358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CDA0u;
    if (runtime->hasFunction(0x14CDA0u)) {
        auto targetFn = runtime->lookupFunction(0x14CDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14835Cu; }
        if (ctx->pc != 0x14835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemAlloc_0x14cda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14835Cu; }
        if (ctx->pc != 0x14835Cu) { return; }
    }
    ctx->pc = 0x14835Cu;
    // 0x14835c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148360: 0xc060694  jal         func_181A50
    ctx->pc = 0x148360u;
    SET_GPR_U32(ctx, 31, 0x148368u);
    ctx->pc = 0x148364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148360u;
            // 0x148364: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148368u; }
        if (ctx->pc != 0x148368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148368u; }
        if (ctx->pc != 0x148368u) { return; }
    }
    ctx->pc = 0x148368u;
    // 0x148368: 0xc060544  jal         func_181510
    ctx->pc = 0x148368u;
    SET_GPR_U32(ctx, 31, 0x148370u);
    ctx->pc = 0x14836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148368u;
            // 0x14836c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148370u; }
        if (ctx->pc != 0x148370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148370u; }
        if (ctx->pc != 0x148370u) { return; }
    }
    ctx->pc = 0x148370u;
    // 0x148370: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x148370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x148374: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x148374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x148378: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x148378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x14837c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x14837cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x148380: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x148380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x148384: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x148384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x148388: 0xc078a24  jal         func_1E2890
    ctx->pc = 0x148388u;
    SET_GPR_U32(ctx, 31, 0x148390u);
    ctx->pc = 0x14838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148388u;
            // 0x14838c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2890u;
    if (runtime->hasFunction(0x1E2890u)) {
        auto targetFn = runtime->lookupFunction(0x1E2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148390u; }
        if (ctx->pc != 0x148390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorSet_0x1e2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148390u; }
        if (ctx->pc != 0x148390u) { return; }
    }
    ctx->pc = 0x148390u;
    // 0x148390: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x148390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148394: 0x24850110  addiu       $a1, $a0, 0x110
    ctx->pc = 0x148394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x148398: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x148398u;
    SET_GPR_U32(ctx, 31, 0x1483A0u);
    ctx->pc = 0x14839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148398u;
            // 0x14839c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1483A0u; }
        if (ctx->pc != 0x1483A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1483A0u; }
        if (ctx->pc != 0x1483A0u) { return; }
    }
    ctx->pc = 0x1483A0u;
    // 0x1483a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1483a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1483a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1483a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483a8: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1483A8u;
    SET_GPR_U32(ctx, 31, 0x1483B0u);
    ctx->pc = 0x1483ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1483A8u;
            // 0x1483ac: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1483B0u; }
        if (ctx->pc != 0x1483B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1483B0u; }
        if (ctx->pc != 0x1483B0u) { return; }
    }
    ctx->pc = 0x1483B0u;
    // 0x1483b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1483b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1483b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483b8: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1483B8u;
    SET_GPR_U32(ctx, 31, 0x1483C0u);
    ctx->pc = 0x1483BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1483B8u;
            // 0x1483bc: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1483C0u; }
        if (ctx->pc != 0x1483C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1483C0u; }
        if (ctx->pc != 0x1483C0u) { return; }
    }
    ctx->pc = 0x1483C0u;
    // 0x1483c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1483c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1483c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1483c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1483c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1483c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1483cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1483ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1483d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1483d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1483d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1483D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1483D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1483D4u;
            // 0x1483d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1483DCu;
}
