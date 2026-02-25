#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ExpTitleMain
// Address: 0x1ea130 - 0x1ea68c
void ExpTitleMain_0x1ea130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ExpTitleMain_0x1ea130");
#endif

    ctx->pc = 0x1ea130u;

    // 0x1ea130: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1ea130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1ea134: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ea134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ea138: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ea138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ea13c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ea13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ea140: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ea140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ea144: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ea148: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea14c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1ea14cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea154: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ea154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea15c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea160: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ea160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea168: 0xc07ac94  jal         func_1EB250
    ctx->pc = 0x1EA168u;
    SET_GPR_U32(ctx, 31, 0x1EA170u);
    ctx->pc = 0x1EA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA168u;
            // 0x1ea16c: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB250u;
    if (runtime->hasFunction(0x1EB250u)) {
        auto targetFn = runtime->lookupFunction(0x1EB250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA170u; }
        if (ctx->pc != 0x1EA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExpTitleInit_0x1eb250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA170u; }
        if (ctx->pc != 0x1EA170u) { return; }
    }
    ctx->pc = 0x1EA170u;
    // 0x1ea170: 0xc0607ac  jal         func_181EB0
    ctx->pc = 0x1EA170u;
    SET_GPR_U32(ctx, 31, 0x1EA178u);
    ctx->pc = 0x181EB0u;
    if (runtime->hasFunction(0x181EB0u)) {
        auto targetFn = runtime->lookupFunction(0x181EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA178u; }
        if (ctx->pc != 0x1EA178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderInit_0x181eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA178u; }
        if (ctx->pc != 0x1EA178u) { return; }
    }
    ctx->pc = 0x1EA178u;
    // 0x1ea178: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EA178u;
    SET_GPR_U32(ctx, 31, 0x1EA180u);
    ctx->pc = 0x1EA17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA178u;
            // 0x1ea17c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA180u; }
        if (ctx->pc != 0x1EA180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA180u; }
        if (ctx->pc != 0x1EA180u) { return; }
    }
    ctx->pc = 0x1EA180u;
    // 0x1ea180: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea184: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea188: 0xac202e38  sw          $zero, 0x2E38($at)
    ctx->pc = 0x1ea188u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11832), GPR_U32(ctx, 0));
    // 0x1ea18c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea190: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea194: 0x27b600d4  addiu       $s6, $sp, 0xD4
    ctx->pc = 0x1ea194u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ea198: 0xac202e40  sw          $zero, 0x2E40($at)
    ctx->pc = 0x1ea198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11840), GPR_U32(ctx, 0));
    // 0x1ea19c: 0x27b700dc  addiu       $s7, $sp, 0xDC
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1ea1a0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea1a4: 0x27be00d8  addiu       $fp, $sp, 0xD8
    ctx->pc = 0x1ea1a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1ea1a8: 0xac202e48  sw          $zero, 0x2E48($at)
    ctx->pc = 0x1ea1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11848), GPR_U32(ctx, 0));
    // 0x1ea1ac: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ea1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ea1b0: 0xac202e50  sw          $zero, 0x2E50($at)
    ctx->pc = 0x1ea1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11856), GPR_U32(ctx, 0));
    // 0x1ea1b4: 0x0  nop
    ctx->pc = 0x1ea1b4u;
    // NOP
label_1ea1b8:
    // 0x1ea1b8: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1EA1B8u;
    SET_GPR_U32(ctx, 31, 0x1EA1C0u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1C0u; }
        if (ctx->pc != 0x1EA1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1C0u; }
        if (ctx->pc != 0x1EA1C0u) { return; }
    }
    ctx->pc = 0x1EA1C0u;
    // 0x1ea1c0: 0xc06069c  jal         func_181A70
    ctx->pc = 0x1EA1C0u;
    SET_GPR_U32(ctx, 31, 0x1EA1C8u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1C8u; }
        if (ctx->pc != 0x1EA1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1C8u; }
        if (ctx->pc != 0x1EA1C8u) { return; }
    }
    ctx->pc = 0x1EA1C8u;
    // 0x1ea1c8: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x1EA1C8u;
    SET_GPR_U32(ctx, 31, 0x1EA1D0u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1D0u; }
        if (ctx->pc != 0x1EA1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1D0u; }
        if (ctx->pc != 0x1EA1D0u) { return; }
    }
    ctx->pc = 0x1EA1D0u;
    // 0x1ea1d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ea1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea1d4: 0x126200d8  beq         $s3, $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x1EA1D4u;
    {
        const bool branch_taken_0x1ea1d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EA1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1D4u;
            // 0x1ea1d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1d4) {
            ctx->pc = 0x1EA538u;
            goto label_1ea538;
        }
    }
    ctx->pc = 0x1EA1DCu;
    // 0x1ea1dc: 0x1262005e  beq         $s3, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1EA1DCu;
    {
        const bool branch_taken_0x1ea1dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EA1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1DCu;
            // 0x1ea1e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1dc) {
            ctx->pc = 0x1EA358u;
            goto label_1ea358;
        }
    }
    ctx->pc = 0x1EA1E4u;
    // 0x1ea1e4: 0x1264001a  beq         $s3, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EA1E4u;
    {
        const bool branch_taken_0x1ea1e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EA1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1E4u;
            // 0x1ea1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1e4) {
            ctx->pc = 0x1EA250u;
            goto label_1ea250;
        }
    }
    ctx->pc = 0x1EA1ECu;
    // 0x1ea1ec: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EA1ECu;
    {
        const bool branch_taken_0x1ea1ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ea1ec) {
            ctx->pc = 0x1EA228u;
            goto label_1ea228;
        }
    }
    ctx->pc = 0x1EA1F4u;
    // 0x1ea1f4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA1F4u;
    {
        const bool branch_taken_0x1ea1f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea1f4) {
            ctx->pc = 0x1EA208u;
            goto label_1ea208;
        }
    }
    ctx->pc = 0x1EA1FCu;
    // 0x1ea1fc: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x1EA1FCu;
    {
        const bool branch_taken_0x1ea1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea1fc) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA204u;
    // 0x1ea204: 0x0  nop
    ctx->pc = 0x1ea204u;
    // NOP
label_1ea208:
    // 0x1ea208: 0xc0607cc  jal         func_181F30
    ctx->pc = 0x1EA208u;
    SET_GPR_U32(ctx, 31, 0x1EA210u);
    ctx->pc = 0x181F30u;
    if (runtime->hasFunction(0x181F30u)) {
        auto targetFn = runtime->lookupFunction(0x181F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA210u; }
        if (ctx->pc != 0x1EA210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFadeing_0x181f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA210u; }
        if (ctx->pc != 0x1EA210u) { return; }
    }
    ctx->pc = 0x1EA210u;
    // 0x1ea210: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1EA210u;
    {
        const bool branch_taken_0x1ea210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA210u;
            // 0x1ea214: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea210) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA218u;
    // 0x1ea218: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA218u;
    SET_GPR_U32(ctx, 31, 0x1EA220u);
    ctx->pc = 0x1EA21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA218u;
            // 0x1ea21c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA220u; }
        if (ctx->pc != 0x1EA220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA220u; }
        if (ctx->pc != 0x1EA220u) { return; }
    }
    ctx->pc = 0x1EA220u;
    // 0x1ea220: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1EA220u;
    {
        const bool branch_taken_0x1ea220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea220) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA228u;
label_1ea228:
    // 0x1ea228: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x1EA228u;
    SET_GPR_U32(ctx, 31, 0x1EA230u);
    ctx->pc = 0x1EA22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA228u;
            // 0x1ea22c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA760u;
    if (runtime->hasFunction(0x1EA760u)) {
        auto targetFn = runtime->lookupFunction(0x1EA760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA230u; }
        if (ctx->pc != 0x1EA230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienExpLogoDraw_0x1ea760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA230u; }
        if (ctx->pc != 0x1EA230u) { return; }
    }
    ctx->pc = 0x1EA230u;
    // 0x1ea230: 0xc07a9ac  jal         func_1EA6B0
    ctx->pc = 0x1EA230u;
    SET_GPR_U32(ctx, 31, 0x1EA238u);
    ctx->pc = 0x1EA234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA230u;
            // 0x1ea234: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6B0u;
    if (runtime->hasFunction(0x1EA6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA238u; }
        if (ctx->pc != 0x1EA238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienLogoDraw_0x1ea6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA238u; }
        if (ctx->pc != 0x1EA238u) { return; }
    }
    ctx->pc = 0x1EA238u;
    // 0x1ea238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ea238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea23c: 0x28410033  slti        $at, $v0, 0x33
    ctx->pc = 0x1ea23cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1ea240: 0x142000c7  bnez        $at, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1EA240u;
    {
        const bool branch_taken_0x1ea240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA240u;
            // 0x1ea244: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea240) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA248u;
    // 0x1ea248: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1EA248u;
    {
        const bool branch_taken_0x1ea248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA248u;
            // 0x1ea24c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea248) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA250u;
label_1ea250:
    // 0x1ea250: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea254: 0x8c2323e8  lw          $v1, 0x23E8($at)
    ctx->pc = 0x1ea254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9192)));
    // 0x1ea258: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea25c: 0x8c222378  lw          $v0, 0x2378($at)
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9080)));
    // 0x1ea260: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ea260u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ea264: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA264u;
    {
        const bool branch_taken_0x1ea264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea264) {
            ctx->pc = 0x1EA288u;
            goto label_1ea288;
        }
    }
    ctx->pc = 0x1EA26Cu;
    // 0x1ea26c: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA26Cu;
    {
        const bool branch_taken_0x1ea26c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1ea26c) {
            ctx->pc = 0x1EA288u;
            goto label_1ea288;
        }
    }
    ctx->pc = 0x1EA274u;
    // 0x1ea274: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA274u;
    SET_GPR_U32(ctx, 31, 0x1EA27Cu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA27Cu; }
        if (ctx->pc != 0x1EA27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA27Cu; }
        if (ctx->pc != 0x1EA27Cu) { return; }
    }
    ctx->pc = 0x1EA27Cu;
    // 0x1ea27c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1EA27Cu;
    {
        const bool branch_taken_0x1ea27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA27Cu;
            // 0x1ea280: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea27c) {
            ctx->pc = 0x1EA340u;
            goto label_1ea340;
        }
    }
    ctx->pc = 0x1EA284u;
    // 0x1ea284: 0x0  nop
    ctx->pc = 0x1ea284u;
    // NOP
label_1ea288:
    // 0x1ea288: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea28c: 0x8c2323e0  lw          $v1, 0x23E0($at)
    ctx->pc = 0x1ea28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9184)));
    // 0x1ea290: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea294: 0x8c222370  lw          $v0, 0x2370($at)
    ctx->pc = 0x1ea294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9072)));
    // 0x1ea298: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ea298u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ea29c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA29Cu;
    {
        const bool branch_taken_0x1ea29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea29c) {
            ctx->pc = 0x1EA2C0u;
            goto label_1ea2c0;
        }
    }
    ctx->pc = 0x1EA2A4u;
    // 0x1ea2a4: 0x1e400006  bgtz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA2A4u;
    {
        const bool branch_taken_0x1ea2a4 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1EA2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2A4u;
            // 0x1ea2a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2a4) {
            ctx->pc = 0x1EA2C0u;
            goto label_1ea2c0;
        }
    }
    ctx->pc = 0x1EA2ACu;
    // 0x1ea2ac: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA2ACu;
    SET_GPR_U32(ctx, 31, 0x1EA2B4u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2B4u; }
        if (ctx->pc != 0x1EA2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2B4u; }
        if (ctx->pc != 0x1EA2B4u) { return; }
    }
    ctx->pc = 0x1EA2B4u;
    // 0x1ea2b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1EA2B4u;
    {
        const bool branch_taken_0x1ea2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2B4u;
            // 0x1ea2b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2b4) {
            ctx->pc = 0x1EA340u;
            goto label_1ea340;
        }
    }
    ctx->pc = 0x1EA2BCu;
    // 0x1ea2bc: 0x0  nop
    ctx->pc = 0x1ea2bcu;
    // NOP
label_1ea2c0:
    // 0x1ea2c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea2c4: 0x8c272418  lw          $a3, 0x2418($at)
    ctx->pc = 0x1ea2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1ea2c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea2cc: 0x8c2623a8  lw          $a2, 0x23A8($at)
    ctx->pc = 0x1ea2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1ea2d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea2d4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1ea2d4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1ea2d8: 0x8c252408  lw          $a1, 0x2408($at)
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x1ea2dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea2e0: 0x8c242398  lw          $a0, 0x2398($at)
    ctx->pc = 0x1ea2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x1ea2e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea2e8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1ea2e8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1ea2ec: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x1ea2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x1ea2f0: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1ea2f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x1ea2f4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea2f8: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x1ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x1ea2fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ea2fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ea300: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ea300u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1ea304: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EA304u;
    {
        const bool branch_taken_0x1ea304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA304u;
            // 0x1ea308: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea304) {
            ctx->pc = 0x1EA340u;
            goto label_1ea340;
        }
    }
    ctx->pc = 0x1EA30Cu;
    // 0x1ea30c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA30Cu;
    SET_GPR_U32(ctx, 31, 0x1EA314u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA314u; }
        if (ctx->pc != 0x1EA314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA314u; }
        if (ctx->pc != 0x1EA314u) { return; }
    }
    ctx->pc = 0x1EA314u;
    // 0x1ea314: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA314u;
    {
        const bool branch_taken_0x1ea314 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA314u;
            // 0x1ea318: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea314) {
            ctx->pc = 0x1EA330u;
            goto label_1ea330;
        }
    }
    ctx->pc = 0x1EA31Cu;
    // 0x1ea31c: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EA31Cu;
    SET_GPR_U32(ctx, 31, 0x1EA324u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA324u; }
        if (ctx->pc != 0x1EA324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA324u; }
        if (ctx->pc != 0x1EA324u) { return; }
    }
    ctx->pc = 0x1EA324u;
    // 0x1ea324: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea328: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA328u;
    {
        const bool branch_taken_0x1ea328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA328u;
            // 0x1ea32c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea328) {
            ctx->pc = 0x1EA340u;
            goto label_1ea340;
        }
    }
    ctx->pc = 0x1EA330u;
label_1ea330:
    // 0x1ea330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea334: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA334u;
    {
        const bool branch_taken_0x1ea334 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea334) {
            ctx->pc = 0x1EA340u;
            goto label_1ea340;
        }
    }
    ctx->pc = 0x1EA33Cu;
    // 0x1ea33c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1ea33cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea340:
    // 0x1ea340: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x1EA340u;
    SET_GPR_U32(ctx, 31, 0x1EA348u);
    ctx->pc = 0x1EA344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA340u;
            // 0x1ea344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA760u;
    if (runtime->hasFunction(0x1EA760u)) {
        auto targetFn = runtime->lookupFunction(0x1EA760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA348u; }
        if (ctx->pc != 0x1EA348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienExpLogoDraw_0x1ea760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA348u; }
        if (ctx->pc != 0x1EA348u) { return; }
    }
    ctx->pc = 0x1EA348u;
    // 0x1ea348: 0xc07a9ac  jal         func_1EA6B0
    ctx->pc = 0x1EA348u;
    SET_GPR_U32(ctx, 31, 0x1EA350u);
    ctx->pc = 0x1EA34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA348u;
            // 0x1ea34c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6B0u;
    if (runtime->hasFunction(0x1EA6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA350u; }
        if (ctx->pc != 0x1EA350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienLogoDraw_0x1ea6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA350u; }
        if (ctx->pc != 0x1EA350u) { return; }
    }
    ctx->pc = 0x1EA350u;
    // 0x1ea350: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1EA350u;
    {
        const bool branch_taken_0x1ea350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea350) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA358u;
label_1ea358:
    // 0x1ea358: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea35c: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x1ea35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x1ea360: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea364: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x1ea364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x1ea368: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ea368u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ea36c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA36Cu;
    {
        const bool branch_taken_0x1ea36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea36c) {
            ctx->pc = 0x1EA390u;
            goto label_1ea390;
        }
    }
    ctx->pc = 0x1EA374u;
    // 0x1ea374: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA374u;
    {
        const bool branch_taken_0x1ea374 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1EA378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA374u;
            // 0x1ea378: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea374) {
            ctx->pc = 0x1EA390u;
            goto label_1ea390;
        }
    }
    ctx->pc = 0x1EA37Cu;
    // 0x1ea37c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA37Cu;
    SET_GPR_U32(ctx, 31, 0x1EA384u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA384u; }
        if (ctx->pc != 0x1EA384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA384u; }
        if (ctx->pc != 0x1EA384u) { return; }
    }
    ctx->pc = 0x1EA384u;
    // 0x1ea384: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1EA384u;
    {
        const bool branch_taken_0x1ea384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA384u;
            // 0x1ea388: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea384) {
            ctx->pc = 0x1EA478u;
            goto label_1ea478;
        }
    }
    ctx->pc = 0x1EA38Cu;
    // 0x1ea38c: 0x0  nop
    ctx->pc = 0x1ea38cu;
    // NOP
label_1ea390:
    // 0x1ea390: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea394: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x1ea394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x1ea398: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea39c: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x1ea39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x1ea3a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ea3a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ea3a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA3A4u;
    {
        const bool branch_taken_0x1ea3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea3a4) {
            ctx->pc = 0x1EA3C8u;
            goto label_1ea3c8;
        }
    }
    ctx->pc = 0x1EA3ACu;
    // 0x1ea3ac: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA3ACu;
    {
        const bool branch_taken_0x1ea3ac = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x1EA3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3ACu;
            // 0x1ea3b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3ac) {
            ctx->pc = 0x1EA3C8u;
            goto label_1ea3c8;
        }
    }
    ctx->pc = 0x1EA3B4u;
    // 0x1ea3b4: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA3B4u;
    SET_GPR_U32(ctx, 31, 0x1EA3BCu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3BCu; }
        if (ctx->pc != 0x1EA3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3BCu; }
        if (ctx->pc != 0x1EA3BCu) { return; }
    }
    ctx->pc = 0x1EA3BCu;
    // 0x1ea3bc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1EA3BCu;
    {
        const bool branch_taken_0x1ea3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3BCu;
            // 0x1ea3c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3bc) {
            ctx->pc = 0x1EA478u;
            goto label_1ea478;
        }
    }
    ctx->pc = 0x1EA3C4u;
    // 0x1ea3c4: 0x0  nop
    ctx->pc = 0x1ea3c4u;
    // NOP
label_1ea3c8:
    // 0x1ea3c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea3cc: 0x8c272418  lw          $a3, 0x2418($at)
    ctx->pc = 0x1ea3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1ea3d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea3d4: 0x8c2623a8  lw          $a2, 0x23A8($at)
    ctx->pc = 0x1ea3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1ea3d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea3dc: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1ea3dcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1ea3e0: 0x8c252408  lw          $a1, 0x2408($at)
    ctx->pc = 0x1ea3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x1ea3e4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea3e8: 0x8c242398  lw          $a0, 0x2398($at)
    ctx->pc = 0x1ea3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x1ea3ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea3f0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1ea3f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1ea3f4: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x1ea3f8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1ea3f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x1ea3fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea400: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x1ea400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x1ea404: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ea404u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ea408: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ea408u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1ea40c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EA40Cu;
    {
        const bool branch_taken_0x1ea40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA40Cu;
            // 0x1ea410: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea40c) {
            ctx->pc = 0x1EA450u;
            goto label_1ea450;
        }
    }
    ctx->pc = 0x1EA414u;
    // 0x1ea414: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA414u;
    SET_GPR_U32(ctx, 31, 0x1EA41Cu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA41Cu; }
        if (ctx->pc != 0x1EA41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA41Cu; }
        if (ctx->pc != 0x1EA41Cu) { return; }
    }
    ctx->pc = 0x1EA41Cu;
    // 0x1ea41c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA41Cu;
    {
        const bool branch_taken_0x1ea41c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA41Cu;
            // 0x1ea420: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea41c) {
            ctx->pc = 0x1EA438u;
            goto label_1ea438;
        }
    }
    ctx->pc = 0x1EA424u;
    // 0x1ea424: 0xc060718  jal         func_181C60
    ctx->pc = 0x1EA424u;
    SET_GPR_U32(ctx, 31, 0x1EA42Cu);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA42Cu; }
        if (ctx->pc != 0x1EA42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA42Cu; }
        if (ctx->pc != 0x1EA42Cu) { return; }
    }
    ctx->pc = 0x1EA42Cu;
    // 0x1ea42c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1ea42cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea430: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA430u;
    {
        const bool branch_taken_0x1ea430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA430u;
            // 0x1ea434: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea430) {
            ctx->pc = 0x1EA478u;
            goto label_1ea478;
        }
    }
    ctx->pc = 0x1EA438u;
label_1ea438:
    // 0x1ea438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea43c: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EA43Cu;
    {
        const bool branch_taken_0x1ea43c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea43c) {
            ctx->pc = 0x1EA478u;
            goto label_1ea478;
        }
    }
    ctx->pc = 0x1EA444u;
    // 0x1ea444: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EA444u;
    {
        const bool branch_taken_0x1ea444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA444u;
            // 0x1ea448: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea444) {
            ctx->pc = 0x1EA478u;
            goto label_1ea478;
        }
    }
    ctx->pc = 0x1EA44Cu;
    // 0x1ea44c: 0x0  nop
    ctx->pc = 0x1ea44cu;
    // NOP
label_1ea450:
    // 0x1ea450: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea454: 0x8c232410  lw          $v1, 0x2410($at)
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x1ea458: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1ea45c: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x1ea460: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ea460u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ea464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA464u;
    {
        const bool branch_taken_0x1ea464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA464u;
            // 0x1ea468: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea464) {
            ctx->pc = 0x1EA478u;
            goto label_1ea478;
        }
    }
    ctx->pc = 0x1EA46Cu;
    // 0x1ea46c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1EA46Cu;
    SET_GPR_U32(ctx, 31, 0x1EA474u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA474u; }
        if (ctx->pc != 0x1EA474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA474u; }
        if (ctx->pc != 0x1EA474u) { return; }
    }
    ctx->pc = 0x1EA474u;
    // 0x1ea474: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea478:
    // 0x1ea478: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea47c: 0x244237d0  addiu       $v0, $v0, 0x37D0
    ctx->pc = 0x1ea47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14288));
    // 0x1ea480: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1ea480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1ea484: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ea484u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1ea488: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ea488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ea48c: 0x2442aba8  addiu       $v0, $v0, -0x5458
    ctx->pc = 0x1ea48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945704));
    // 0x1ea490: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1ea490u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1ea494: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea498: 0x244237b0  addiu       $v0, $v0, 0x37B0
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14256));
    // 0x1ea49c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EA49Cu;
    SET_GPR_U32(ctx, 31, 0x1EA4A4u);
    ctx->pc = 0x1EA4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA49Cu;
            // 0x1ea4a0: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4A4u; }
        if (ctx->pc != 0x1EA4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4A4u; }
        if (ctx->pc != 0x1EA4A4u) { return; }
    }
    ctx->pc = 0x1EA4A4u;
    // 0x1ea4a4: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ea4a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ea4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ea4ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ea4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ea4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea4b4: 0xc07a9a8  jal         func_1EA6A0
    ctx->pc = 0x1EA4B4u;
    SET_GPR_U32(ctx, 31, 0x1EA4BCu);
    ctx->pc = 0x1EA4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4B4u;
            // 0x1ea4b8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6A0u;
    if (runtime->hasFunction(0x1EA6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4BCu; }
        if (ctx->pc != 0x1EA4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ea6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4BCu; }
        if (ctx->pc != 0x1EA4BCu) { return; }
    }
    ctx->pc = 0x1EA4BCu;
    // 0x1ea4bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ea4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ea4c0: 0xc07a9a4  jal         func_1EA690
    ctx->pc = 0x1EA4C0u;
    SET_GPR_U32(ctx, 31, 0x1EA4C8u);
    ctx->pc = 0x1EA4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4C0u;
            // 0x1ea4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA690u;
    if (runtime->hasFunction(0x1EA690u)) {
        auto targetFn = runtime->lookupFunction(0x1EA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4C8u; }
        if (ctx->pc != 0x1EA4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ea690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4C8u; }
        if (ctx->pc != 0x1EA4C8u) { return; }
    }
    ctx->pc = 0x1EA4C8u;
    // 0x1ea4c8: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1EA4C8u;
    SET_GPR_U32(ctx, 31, 0x1EA4D0u);
    ctx->pc = 0x1EA4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4C8u;
            // 0x1ea4cc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4D0u; }
        if (ctx->pc != 0x1EA4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4D0u; }
        if (ctx->pc != 0x1EA4D0u) { return; }
    }
    ctx->pc = 0x1EA4D0u;
    // 0x1ea4d0: 0xc07adcc  jal         func_1EB730
    ctx->pc = 0x1EA4D0u;
    SET_GPR_U32(ctx, 31, 0x1EA4D8u);
    ctx->pc = 0x1EA4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4D0u;
            // 0x1ea4d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB730u;
    if (runtime->hasFunction(0x1EB730u)) {
        auto targetFn = runtime->lookupFunction(0x1EB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4D8u; }
        if (ctx->pc != 0x1EA4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1eb730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4D8u; }
        if (ctx->pc != 0x1EA4D8u) { return; }
    }
    ctx->pc = 0x1EA4D8u;
    // 0x1ea4d8: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x1EA4D8u;
    SET_GPR_U32(ctx, 31, 0x1EA4E0u);
    ctx->pc = 0x1EA4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4D8u;
            // 0x1ea4dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA760u;
    if (runtime->hasFunction(0x1EA760u)) {
        auto targetFn = runtime->lookupFunction(0x1EA760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4E0u; }
        if (ctx->pc != 0x1EA4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienExpLogoDraw_0x1ea760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4E0u; }
        if (ctx->pc != 0x1EA4E0u) { return; }
    }
    ctx->pc = 0x1EA4E0u;
    // 0x1ea4e0: 0xc07a9ac  jal         func_1EA6B0
    ctx->pc = 0x1EA4E0u;
    SET_GPR_U32(ctx, 31, 0x1EA4E8u);
    ctx->pc = 0x1EA4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4E0u;
            // 0x1ea4e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6B0u;
    if (runtime->hasFunction(0x1EA6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4E8u; }
        if (ctx->pc != 0x1EA4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienLogoDraw_0x1ea6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4E8u; }
        if (ctx->pc != 0x1EA4E8u) { return; }
    }
    ctx->pc = 0x1EA4E8u;
    // 0x1ea4e8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1ea4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1ea4ec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1ea4f0: 0x24843750  addiu       $a0, $a0, 0x3750
    ctx->pc = 0x1ea4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14160));
    // 0x1ea4f4: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x1ea4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1ea4f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ea4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ea4fc: 0x2463abb8  addiu       $v1, $v1, -0x5448
    ctx->pc = 0x1ea4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945720));
    // 0x1ea500: 0x27a200ac  addiu       $v0, $sp, 0xAC
    ctx->pc = 0x1ea500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1ea504: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea508: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ea508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ea50c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea510: 0xc07a9a8  jal         func_1EA6A0
    ctx->pc = 0x1EA510u;
    SET_GPR_U32(ctx, 31, 0x1EA518u);
    ctx->pc = 0x1EA514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA510u;
            // 0x1ea514: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6A0u;
    if (runtime->hasFunction(0x1EA6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA518u; }
        if (ctx->pc != 0x1EA518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ea6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA518u; }
        if (ctx->pc != 0x1EA518u) { return; }
    }
    ctx->pc = 0x1EA518u;
    // 0x1ea518: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ea518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea51c: 0xc07a9a4  jal         func_1EA690
    ctx->pc = 0x1EA51Cu;
    SET_GPR_U32(ctx, 31, 0x1EA524u);
    ctx->pc = 0x1EA520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA51Cu;
            // 0x1ea520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA690u;
    if (runtime->hasFunction(0x1EA690u)) {
        auto targetFn = runtime->lookupFunction(0x1EA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA524u; }
        if (ctx->pc != 0x1EA524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ea690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA524u; }
        if (ctx->pc != 0x1EA524u) { return; }
    }
    ctx->pc = 0x1EA524u;
    // 0x1ea524: 0xc05c2a8  jal         func_170AA0
    ctx->pc = 0x1EA524u;
    SET_GPR_U32(ctx, 31, 0x1EA52Cu);
    ctx->pc = 0x1EA528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA524u;
            // 0x1ea528: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AA0u;
    if (runtime->hasFunction(0x170AA0u)) {
        auto targetFn = runtime->lookupFunction(0x170AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA52Cu; }
        if (ctx->pc != 0x1EA52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFM_0x170aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA52Cu; }
        if (ctx->pc != 0x1EA52Cu) { return; }
    }
    ctx->pc = 0x1EA52Cu;
    // 0x1ea52c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EA52Cu;
    {
        const bool branch_taken_0x1ea52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea52c) {
            ctx->pc = 0x1EA560u;
            goto label_1ea560;
        }
    }
    ctx->pc = 0x1EA534u;
    // 0x1ea534: 0x0  nop
    ctx->pc = 0x1ea534u;
    // NOP
label_1ea538:
    // 0x1ea538: 0xc0607cc  jal         func_181F30
    ctx->pc = 0x1EA538u;
    SET_GPR_U32(ctx, 31, 0x1EA540u);
    ctx->pc = 0x181F30u;
    if (runtime->hasFunction(0x181F30u)) {
        auto targetFn = runtime->lookupFunction(0x181F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA540u; }
        if (ctx->pc != 0x1EA540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFadeing_0x181f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA540u; }
        if (ctx->pc != 0x1EA540u) { return; }
    }
    ctx->pc = 0x1EA540u;
    // 0x1ea540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA540u;
    {
        const bool branch_taken_0x1ea540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea540) {
            ctx->pc = 0x1EA550u;
            goto label_1ea550;
        }
    }
    ctx->pc = 0x1EA548u;
    // 0x1ea548: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ea548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea54c: 0x0  nop
    ctx->pc = 0x1ea54cu;
    // NOP
label_1ea550:
    // 0x1ea550: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x1EA550u;
    SET_GPR_U32(ctx, 31, 0x1EA558u);
    ctx->pc = 0x1EA554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA550u;
            // 0x1ea554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA760u;
    if (runtime->hasFunction(0x1EA760u)) {
        auto targetFn = runtime->lookupFunction(0x1EA760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA558u; }
        if (ctx->pc != 0x1EA558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienExpLogoDraw_0x1ea760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA558u; }
        if (ctx->pc != 0x1EA558u) { return; }
    }
    ctx->pc = 0x1EA558u;
    // 0x1ea558: 0xc07a9ac  jal         func_1EA6B0
    ctx->pc = 0x1EA558u;
    SET_GPR_U32(ctx, 31, 0x1EA560u);
    ctx->pc = 0x1EA55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA558u;
            // 0x1ea55c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6B0u;
    if (runtime->hasFunction(0x1EA6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA560u; }
        if (ctx->pc != 0x1EA560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShienLogoDraw_0x1ea6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA560u; }
        if (ctx->pc != 0x1EA560u) { return; }
    }
    ctx->pc = 0x1EA560u;
label_1ea560:
    // 0x1ea560: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ea560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ea564: 0x24633790  addiu       $v1, $v1, 0x3790
    ctx->pc = 0x1ea564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14224));
    // 0x1ea568: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1ea568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1ea56c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ea56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ea570: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x1ea570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ea574: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1ea574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1ea578: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1ea57c: 0x2463abb0  addiu       $v1, $v1, -0x5450
    ctx->pc = 0x1ea57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945712));
    // 0x1ea580: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ea580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ea584: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ea584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ea588: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1ea588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1ea58c: 0x24633770  addiu       $v1, $v1, 0x3770
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14192));
    // 0x1ea590: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EA590u;
    SET_GPR_U32(ctx, 31, 0x1EA598u);
    ctx->pc = 0x1EA594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA590u;
            // 0x1ea594: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA598u; }
        if (ctx->pc != 0x1EA598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA598u; }
        if (ctx->pc != 0x1EA598u) { return; }
    }
    ctx->pc = 0x1EA598u;
    // 0x1ea598: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1ea598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ea59c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ea59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ea5a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ea5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ea5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea5a8: 0xc07a9a8  jal         func_1EA6A0
    ctx->pc = 0x1EA5A8u;
    SET_GPR_U32(ctx, 31, 0x1EA5B0u);
    ctx->pc = 0x1EA5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5A8u;
            // 0x1ea5ac: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6A0u;
    if (runtime->hasFunction(0x1EA6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5B0u; }
        if (ctx->pc != 0x1EA5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ea6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5B0u; }
        if (ctx->pc != 0x1EA5B0u) { return; }
    }
    ctx->pc = 0x1EA5B0u;
    // 0x1ea5b0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ea5b4: 0xc07a9a4  jal         func_1EA690
    ctx->pc = 0x1EA5B4u;
    SET_GPR_U32(ctx, 31, 0x1EA5BCu);
    ctx->pc = 0x1EA5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5B4u;
            // 0x1ea5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA690u;
    if (runtime->hasFunction(0x1EA690u)) {
        auto targetFn = runtime->lookupFunction(0x1EA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5BCu; }
        if (ctx->pc != 0x1EA5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ea690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5BCu; }
        if (ctx->pc != 0x1EA5BCu) { return; }
    }
    ctx->pc = 0x1EA5BCu;
    // 0x1ea5bc: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1EA5BCu;
    SET_GPR_U32(ctx, 31, 0x1EA5C4u);
    ctx->pc = 0x1EA5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5BCu;
            // 0x1ea5c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5C4u; }
        if (ctx->pc != 0x1EA5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5C4u; }
        if (ctx->pc != 0x1EA5C4u) { return; }
    }
    ctx->pc = 0x1EA5C4u;
    // 0x1ea5c4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ea5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ea5c8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1ea5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1ea5cc: 0x24633810  addiu       $v1, $v1, 0x3810
    ctx->pc = 0x1ea5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14352));
    // 0x1ea5d0: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x1ea5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x1ea5d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ea5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ea5d8: 0x2484aba0  addiu       $a0, $a0, -0x5460
    ctx->pc = 0x1ea5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945696));
    // 0x1ea5dc: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x1ea5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1ea5e0: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ea5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ea5e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ea5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ea5e8: 0x246337f0  addiu       $v1, $v1, 0x37F0
    ctx->pc = 0x1ea5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14320));
    // 0x1ea5ec: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x1ea5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1ea5f0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1ea5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1ea5f4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EA5F4u;
    SET_GPR_U32(ctx, 31, 0x1EA5FCu);
    ctx->pc = 0x1EA5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5F4u;
            // 0x1ea5f8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5FCu; }
        if (ctx->pc != 0x1EA5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5FCu; }
        if (ctx->pc != 0x1EA5FCu) { return; }
    }
    ctx->pc = 0x1EA5FCu;
    // 0x1ea5fc: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x1ea5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ea600: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1ea600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ea604: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ea604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ea608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea60c: 0xc07a9a8  jal         func_1EA6A0
    ctx->pc = 0x1EA60Cu;
    SET_GPR_U32(ctx, 31, 0x1EA614u);
    ctx->pc = 0x1EA610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA60Cu;
            // 0x1ea610: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6A0u;
    if (runtime->hasFunction(0x1EA6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA614u; }
        if (ctx->pc != 0x1EA614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ea6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA614u; }
        if (ctx->pc != 0x1EA614u) { return; }
    }
    ctx->pc = 0x1EA614u;
    // 0x1ea614: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1ea614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ea618: 0xc07a9a4  jal         func_1EA690
    ctx->pc = 0x1EA618u;
    SET_GPR_U32(ctx, 31, 0x1EA620u);
    ctx->pc = 0x1EA61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA618u;
            // 0x1ea61c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA690u;
    if (runtime->hasFunction(0x1EA690u)) {
        auto targetFn = runtime->lookupFunction(0x1EA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA620u; }
        if (ctx->pc != 0x1EA620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ea690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA620u; }
        if (ctx->pc != 0x1EA620u) { return; }
    }
    ctx->pc = 0x1EA620u;
    // 0x1ea620: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x1EA620u;
    SET_GPR_U32(ctx, 31, 0x1EA628u);
    ctx->pc = 0x1EA624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA620u;
            // 0x1ea624: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA628u; }
        if (ctx->pc != 0x1EA628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA628u; }
        if (ctx->pc != 0x1EA628u) { return; }
    }
    ctx->pc = 0x1EA628u;
    // 0x1ea628: 0x16a0fee3  bnez        $s5, . + 4 + (-0x11D << 2)
    ctx->pc = 0x1EA628u;
    {
        const bool branch_taken_0x1ea628 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea628) {
            ctx->pc = 0x1EA1B8u;
            goto label_1ea1b8;
        }
    }
    ctx->pc = 0x1EA630u;
    // 0x1ea630: 0xc05cff0  jal         func_173FC0
    ctx->pc = 0x1EA630u;
    SET_GPR_U32(ctx, 31, 0x1EA638u);
    ctx->pc = 0x173FC0u;
    if (runtime->hasFunction(0x173FC0u)) {
        auto targetFn = runtime->lookupFunction(0x173FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA638u; }
        if (ctx->pc != 0x1EA638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stop_bgm_0x173fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA638u; }
        if (ctx->pc != 0x1EA638u) { return; }
    }
    ctx->pc = 0x1EA638u;
    // 0x1ea638: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1EA638u;
    SET_GPR_U32(ctx, 31, 0x1EA640u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA640u; }
        if (ctx->pc != 0x1EA640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA640u; }
        if (ctx->pc != 0x1EA640u) { return; }
    }
    ctx->pc = 0x1EA640u;
    // 0x1ea640: 0xc06069c  jal         func_181A70
    ctx->pc = 0x1EA640u;
    SET_GPR_U32(ctx, 31, 0x1EA648u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA648u; }
        if (ctx->pc != 0x1EA648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA648u; }
        if (ctx->pc != 0x1EA648u) { return; }
    }
    ctx->pc = 0x1EA648u;
    // 0x1ea648: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x1EA648u;
    SET_GPR_U32(ctx, 31, 0x1EA650u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA650u; }
        if (ctx->pc != 0x1EA650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA650u; }
        if (ctx->pc != 0x1EA650u) { return; }
    }
    ctx->pc = 0x1EA650u;
    // 0x1ea650: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1EA650u;
    SET_GPR_U32(ctx, 31, 0x1EA658u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA658u; }
        if (ctx->pc != 0x1EA658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA658u; }
        if (ctx->pc != 0x1EA658u) { return; }
    }
    ctx->pc = 0x1EA658u;
    // 0x1ea658: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ea658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea65c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ea65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ea660: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ea660u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea664: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ea664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea668: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ea668u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea66c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ea66cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea670: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea67c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea67cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea684: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA684u;
            // 0x1ea688: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA1B8u: goto label_1ea1b8;
            case 0x1EA208u: goto label_1ea208;
            case 0x1EA228u: goto label_1ea228;
            case 0x1EA250u: goto label_1ea250;
            case 0x1EA288u: goto label_1ea288;
            case 0x1EA2C0u: goto label_1ea2c0;
            case 0x1EA330u: goto label_1ea330;
            case 0x1EA340u: goto label_1ea340;
            case 0x1EA358u: goto label_1ea358;
            case 0x1EA390u: goto label_1ea390;
            case 0x1EA3C8u: goto label_1ea3c8;
            case 0x1EA438u: goto label_1ea438;
            case 0x1EA450u: goto label_1ea450;
            case 0x1EA478u: goto label_1ea478;
            case 0x1EA538u: goto label_1ea538;
            case 0x1EA550u: goto label_1ea550;
            case 0x1EA560u: goto label_1ea560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA68Cu;
}
