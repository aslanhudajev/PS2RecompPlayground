#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShienExpLogoDraw
// Address: 0x1ea760 - 0x1ea810
void ShienExpLogoDraw_0x1ea760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShienExpLogoDraw_0x1ea760");
#endif

    ctx->pc = 0x1ea760u;

    // 0x1ea760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ea760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ea764: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ea764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ea76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea774: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA774u;
    {
        const bool branch_taken_0x1ea774 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea774) {
            ctx->pc = 0x1EA788u;
            goto label_1ea788;
        }
    }
    ctx->pc = 0x1EA77Cu;
    // 0x1ea77c: 0xc07ac74  jal         func_1EB1D0
    ctx->pc = 0x1EA77Cu;
    SET_GPR_U32(ctx, 31, 0x1EA784u);
    ctx->pc = 0x1EB1D0u;
    if (runtime->hasFunction(0x1EB1D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EB1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA784u; }
        if (ctx->pc != 0x1EA784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RgbAnim_0x1eb1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA784u; }
        if (ctx->pc != 0x1EA784u) { return; }
    }
    ctx->pc = 0x1EA784u;
    // 0x1ea784: 0x0  nop
    ctx->pc = 0x1ea784u;
    // NOP
label_1ea788:
    // 0x1ea788: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA788u;
    {
        const bool branch_taken_0x1ea788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA788u;
            // 0x1ea78c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea788) {
            ctx->pc = 0x1EA798u;
            goto label_1ea798;
        }
    }
    ctx->pc = 0x1EA790u;
    // 0x1ea790: 0xc07ab40  jal         func_1EAD00
    ctx->pc = 0x1EA790u;
    SET_GPR_U32(ctx, 31, 0x1EA798u);
    ctx->pc = 0x1EAD00u;
    if (runtime->hasFunction(0x1EAD00u)) {
        auto targetFn = runtime->lookupFunction(0x1EAD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA798u; }
        if (ctx->pc != 0x1EA798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VertexAnim_0x1ead00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA798u; }
        if (ctx->pc != 0x1EA798u) { return; }
    }
    ctx->pc = 0x1EA798u;
label_1ea798:
    // 0x1ea798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea79c: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA79Cu;
    {
        const bool branch_taken_0x1ea79c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ea79c) {
            ctx->pc = 0x1EA7B0u;
            goto label_1ea7b0;
        }
    }
    ctx->pc = 0x1EA7A4u;
    // 0x1ea7a4: 0xc07ab40  jal         func_1EAD00
    ctx->pc = 0x1EA7A4u;
    SET_GPR_U32(ctx, 31, 0x1EA7ACu);
    ctx->pc = 0x1EAD00u;
    if (runtime->hasFunction(0x1EAD00u)) {
        auto targetFn = runtime->lookupFunction(0x1EAD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7ACu; }
        if (ctx->pc != 0x1EA7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VertexAnim_0x1ead00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7ACu; }
        if (ctx->pc != 0x1EA7ACu) { return; }
    }
    ctx->pc = 0x1EA7ACu;
    // 0x1ea7ac: 0x0  nop
    ctx->pc = 0x1ea7acu;
    // NOP
label_1ea7b0:
    // 0x1ea7b0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea7b4: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x1ea7b8: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1ea7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ea7bc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1ea7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1ea7c0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea7c4: 0x24423310  addiu       $v0, $v0, 0x3310
    ctx->pc = 0x1ea7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13072));
    // 0x1ea7c8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1ea7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1ea7cc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea7d0: 0x24423350  addiu       $v0, $v0, 0x3350
    ctx->pc = 0x1ea7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13136));
    // 0x1ea7d4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EA7D4u;
    SET_GPR_U32(ctx, 31, 0x1EA7DCu);
    ctx->pc = 0x1EA7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7D4u;
            // 0x1ea7d8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7DCu; }
        if (ctx->pc != 0x1EA7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7DCu; }
        if (ctx->pc != 0x1EA7DCu) { return; }
    }
    ctx->pc = 0x1EA7DCu;
    // 0x1ea7dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ea7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ea7e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea7e4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ea7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ea7e8: 0xc07a9a8  jal         func_1EA6A0
    ctx->pc = 0x1EA7E8u;
    SET_GPR_U32(ctx, 31, 0x1EA7F0u);
    ctx->pc = 0x1EA7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7E8u;
            // 0x1ea7ec: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6A0u;
    if (runtime->hasFunction(0x1EA6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7F0u; }
        if (ctx->pc != 0x1EA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ea6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7F0u; }
        if (ctx->pc != 0x1EA7F0u) { return; }
    }
    ctx->pc = 0x1EA7F0u;
    // 0x1ea7f0: 0xc07a9a4  jal         func_1EA690
    ctx->pc = 0x1EA7F0u;
    SET_GPR_U32(ctx, 31, 0x1EA7F8u);
    ctx->pc = 0x1EA7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7F0u;
            // 0x1ea7f4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA690u;
    if (runtime->hasFunction(0x1EA690u)) {
        auto targetFn = runtime->lookupFunction(0x1EA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7F8u; }
        if (ctx->pc != 0x1EA7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ea690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7F8u; }
        if (ctx->pc != 0x1EA7F8u) { return; }
    }
    ctx->pc = 0x1EA7F8u;
    // 0x1ea7f8: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x1EA7F8u;
    SET_GPR_U32(ctx, 31, 0x1EA800u);
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA800u; }
        if (ctx->pc != 0x1EA800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA800u; }
        if (ctx->pc != 0x1EA800u) { return; }
    }
    ctx->pc = 0x1EA800u;
    // 0x1ea800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea808: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA808u;
            // 0x1ea80c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA788u: goto label_1ea788;
            case 0x1EA798u: goto label_1ea798;
            case 0x1EA7B0u: goto label_1ea7b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA810u;
}
