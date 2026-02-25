#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawYajirushi
// Address: 0x15d530 - 0x15d5fc
void drawYajirushi_0x15d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawYajirushi_0x15d530");
#endif

    ctx->pc = 0x15d530u;

    // 0x15d530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d534: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d538: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d53c: 0x24429c68  addiu       $v0, $v0, -0x6398
    ctx->pc = 0x15d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941800));
    // 0x15d540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d54c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d550: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x15d550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x15d554: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D554u;
    SET_GPR_U32(ctx, 31, 0x15D55Cu);
    ctx->pc = 0x15D558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D554u;
            // 0x15d558: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D55Cu; }
        if (ctx->pc != 0x15D55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D55Cu; }
        if (ctx->pc != 0x15D55Cu) { return; }
    }
    ctx->pc = 0x15D55Cu;
    // 0x15d55c: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15D55Cu;
    {
        const bool branch_taken_0x15d55c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D55Cu;
            // 0x15d560: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d55c) {
            ctx->pc = 0x15D5A8u;
            goto label_15d5a8;
        }
    }
    ctx->pc = 0x15D564u;
    // 0x15d564: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D564u;
    {
        const bool branch_taken_0x15d564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D564u;
            // 0x15d568: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d564) {
            ctx->pc = 0x15D588u;
            goto label_15d588;
        }
    }
    ctx->pc = 0x15D56Cu;
    // 0x15d56c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d570: 0x24634730  addiu       $v1, $v1, 0x4730
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18224));
    // 0x15d574: 0x244246b0  addiu       $v0, $v0, 0x46B0
    ctx->pc = 0x15d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18096));
    // 0x15d578: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d57c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15D57Cu;
    {
        const bool branch_taken_0x15d57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D57Cu;
            // 0x15d580: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d57c) {
            ctx->pc = 0x15D5E0u;
            goto label_15d5e0;
        }
    }
    ctx->pc = 0x15D584u;
    // 0x15d584: 0x0  nop
    ctx->pc = 0x15d584u;
    // NOP
label_15d588:
    // 0x15d588: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d58c: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x15d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x15d590: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x15d590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x15d594: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d598: 0x244246f0  addiu       $v0, $v0, 0x46F0
    ctx->pc = 0x15d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18160));
    // 0x15d59c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15D59Cu;
    {
        const bool branch_taken_0x15d59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D59Cu;
            // 0x15d5a0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d59c) {
            ctx->pc = 0x15D5E0u;
            goto label_15d5e0;
        }
    }
    ctx->pc = 0x15D5A4u;
    // 0x15d5a4: 0x0  nop
    ctx->pc = 0x15d5a4u;
    // NOP
label_15d5a8:
    // 0x15d5a8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D5A8u;
    {
        const bool branch_taken_0x15d5a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5A8u;
            // 0x15d5ac: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5a8) {
            ctx->pc = 0x15D5C8u;
            goto label_15d5c8;
        }
    }
    ctx->pc = 0x15D5B0u;
    // 0x15d5b0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d5b4: 0x24634750  addiu       $v1, $v1, 0x4750
    ctx->pc = 0x15d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18256));
    // 0x15d5b8: 0x244246d0  addiu       $v0, $v0, 0x46D0
    ctx->pc = 0x15d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18128));
    // 0x15d5bc: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d5c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D5C0u;
    {
        const bool branch_taken_0x15d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5C0u;
            // 0x15d5c4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5c0) {
            ctx->pc = 0x15D5E0u;
            goto label_15d5e0;
        }
    }
    ctx->pc = 0x15D5C8u;
label_15d5c8:
    // 0x15d5c8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d5cc: 0x24424790  addiu       $v0, $v0, 0x4790
    ctx->pc = 0x15d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18320));
    // 0x15d5d0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x15d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x15d5d4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d5d8: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x15d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x15d5dc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x15d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_15d5e0:
    // 0x15d5e0: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D5E0u;
    SET_GPR_U32(ctx, 31, 0x15D5E8u);
    ctx->pc = 0x15D5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5E0u;
            // 0x15d5e4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5E8u; }
        if (ctx->pc != 0x15D5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D5E8u; }
        if (ctx->pc != 0x15D5E8u) { return; }
    }
    ctx->pc = 0x15D5E8u;
    // 0x15d5e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5F4u;
            // 0x15d5f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D588u: goto label_15d588;
            case 0x15D5A8u: goto label_15d5a8;
            case 0x15D5C8u: goto label_15d5c8;
            case 0x15D5E0u: goto label_15d5e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D5FCu;
}
