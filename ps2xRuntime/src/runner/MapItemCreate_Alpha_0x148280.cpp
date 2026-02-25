#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapItemCreate_Alpha
// Address: 0x148280 - 0x14832c
void MapItemCreate_Alpha_0x148280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapItemCreate_Alpha_0x148280");
#endif

    ctx->pc = 0x148280u;

    // 0x148280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x148280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x148284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x148284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x148288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14828c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148290: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x148290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148298: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x148298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14829c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1482a0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1482a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482a4: 0xc053334  jal         func_14CCD0
    ctx->pc = 0x1482A4u;
    SET_GPR_U32(ctx, 31, 0x1482ACu);
    ctx->pc = 0x1482A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1482A4u;
            // 0x1482a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CCD0u;
    if (runtime->hasFunction(0x14CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x14CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482ACu; }
        if (ctx->pc != 0x1482ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemAlloc_Alpha_0x14ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482ACu; }
        if (ctx->pc != 0x1482ACu) { return; }
    }
    ctx->pc = 0x1482ACu;
    // 0x1482ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1482acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482b0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1482B0u;
    SET_GPR_U32(ctx, 31, 0x1482B8u);
    ctx->pc = 0x1482B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1482B0u;
            // 0x1482b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482B8u; }
        if (ctx->pc != 0x1482B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482B8u; }
        if (ctx->pc != 0x1482B8u) { return; }
    }
    ctx->pc = 0x1482B8u;
    // 0x1482b8: 0xc060544  jal         func_181510
    ctx->pc = 0x1482B8u;
    SET_GPR_U32(ctx, 31, 0x1482C0u);
    ctx->pc = 0x1482BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1482B8u;
            // 0x1482bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482C0u; }
        if (ctx->pc != 0x1482C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482C0u; }
        if (ctx->pc != 0x1482C0u) { return; }
    }
    ctx->pc = 0x1482C0u;
    // 0x1482c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1482c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1482c4: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1482c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x1482c8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1482c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1482cc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1482ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1482d0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1482d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1482d4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1482d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1482d8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1482D8u;
    SET_GPR_U32(ctx, 31, 0x1482E0u);
    ctx->pc = 0x1482DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1482D8u;
            // 0x1482dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482E0u; }
        if (ctx->pc != 0x1482E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482E0u; }
        if (ctx->pc != 0x1482E0u) { return; }
    }
    ctx->pc = 0x1482E0u;
    // 0x1482e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1482e4: 0x24850110  addiu       $a1, $a0, 0x110
    ctx->pc = 0x1482e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x1482e8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1482E8u;
    SET_GPR_U32(ctx, 31, 0x1482F0u);
    ctx->pc = 0x1482ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1482E8u;
            // 0x1482ec: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482F0u; }
        if (ctx->pc != 0x1482F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1482F0u; }
        if (ctx->pc != 0x1482F0u) { return; }
    }
    ctx->pc = 0x1482F0u;
    // 0x1482f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1482f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1482f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1482f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482f8: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1482F8u;
    SET_GPR_U32(ctx, 31, 0x148300u);
    ctx->pc = 0x1482FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1482F8u;
            // 0x1482fc: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148300u; }
        if (ctx->pc != 0x148300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148300u; }
        if (ctx->pc != 0x148300u) { return; }
    }
    ctx->pc = 0x148300u;
    // 0x148300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x148300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148304: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x148304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148308: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x148308u;
    SET_GPR_U32(ctx, 31, 0x148310u);
    ctx->pc = 0x14830Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148308u;
            // 0x14830c: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148310u; }
        if (ctx->pc != 0x148310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148310u; }
        if (ctx->pc != 0x148310u) { return; }
    }
    ctx->pc = 0x148310u;
    // 0x148310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x148310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14831c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14831cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148324: 0x3e00008  jr          $ra
    ctx->pc = 0x148324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148324u;
            // 0x148328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14832Cu;
}
