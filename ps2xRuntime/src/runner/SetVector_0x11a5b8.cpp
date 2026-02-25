#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetVector
// Address: 0x11a5b8 - 0x11a770
void SetVector_0x11a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVector_0x11a5b8");
#endif

    ctx->pc = 0x11a5b8u;

    // 0x11a5b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11a5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11a5bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11a5c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a5c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11a5c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11a5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a5d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a5d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a5d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a5dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x11a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11a5e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a5e4: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x11A5E4u;
    {
        const bool branch_taken_0x11a5e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5E4u;
            // 0x11a5e8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5e4) {
            ctx->pc = 0x11A748u;
            goto label_11a748;
        }
    }
    ctx->pc = 0x11A5ECu;
    // 0x11a5ec: 0x0  nop
    ctx->pc = 0x11a5ecu;
    // NOP
label_11a5f0:
    // 0x11a5f0: 0xc047258  jal         func_11C960
    ctx->pc = 0x11A5F0u;
    SET_GPR_U32(ctx, 31, 0x11A5F8u);
    ctx->pc = 0x11A5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5F0u;
            // 0x11a5f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C960u;
    if (runtime->hasFunction(0x11C960u)) {
        auto targetFn = runtime->lookupFunction(0x11C960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5F8u; }
        if (ctx->pc != 0x11A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetShare_0x11c960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A5F8u; }
        if (ctx->pc != 0x11A5F8u) { return; }
    }
    ctx->pc = 0x11A5F8u;
    // 0x11a5f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5fc: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A5FCu;
    {
        const bool branch_taken_0x11a5fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a5fc) {
            ctx->pc = 0x11A600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A5FCu;
            // 0x11a600: 0x8e64001c  lw          $a0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A614u;
            goto label_11a614;
        }
    }
    ctx->pc = 0x11A604u;
    // 0x11a604: 0xc046962  jal         func_11A588
    ctx->pc = 0x11A604u;
    SET_GPR_U32(ctx, 31, 0x11A60Cu);
    ctx->pc = 0x11A608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A604u;
            // 0x11a608: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A60Cu; }
        if (ctx->pc != 0x11A60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A60Cu; }
        if (ctx->pc != 0x11A60Cu) { return; }
    }
    ctx->pc = 0x11A60Cu;
    // 0x11a60c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x11A60Cu;
    {
        const bool branch_taken_0x11a60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A60Cu;
            // 0x11a610: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a60c) {
            ctx->pc = 0x11A750u;
            goto label_11a750;
        }
    }
    ctx->pc = 0x11A614u;
label_11a614:
    // 0x11a614: 0xc0471a4  jal         func_11C690
    ctx->pc = 0x11A614u;
    SET_GPR_U32(ctx, 31, 0x11A61Cu);
    ctx->pc = 0x11A618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A614u;
            // 0x11a618: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C690u;
    if (runtime->hasFunction(0x11C690u)) {
        auto targetFn = runtime->lookupFunction(0x11C690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A61Cu; }
        if (ctx->pc != 0x11A61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMatrix_0x11c690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A61Cu; }
        if (ctx->pc != 0x11A61Cu) { return; }
    }
    ctx->pc = 0x11A61Cu;
    // 0x11a61c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11a61cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a620: 0x56800005  bnel        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A620u;
    {
        const bool branch_taken_0x11a620 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a620) {
            ctx->pc = 0x11A624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A620u;
            // 0x11a624: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A638u;
            goto label_11a638;
        }
    }
    ctx->pc = 0x11A628u;
    // 0x11a628: 0xc046962  jal         func_11A588
    ctx->pc = 0x11A628u;
    SET_GPR_U32(ctx, 31, 0x11A630u);
    ctx->pc = 0x11A62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A628u;
            // 0x11a62c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A630u; }
        if (ctx->pc != 0x11A630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A630u; }
        if (ctx->pc != 0x11A630u) { return; }
    }
    ctx->pc = 0x11A630u;
    // 0x11a630: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11A630u;
    {
        const bool branch_taken_0x11a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A630u;
            // 0x11a634: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a630) {
            ctx->pc = 0x11A750u;
            goto label_11a750;
        }
    }
    ctx->pc = 0x11A638u;
label_11a638:
    // 0x11a638: 0x5840001c  blezl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11A638u;
    {
        const bool branch_taken_0x11a638 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11a638) {
            ctx->pc = 0x11A63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A638u;
            // 0x11a63c: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A6ACu;
            goto label_11a6ac;
        }
    }
    ctx->pc = 0x11A640u;
    // 0x11a640: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x11a640u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a644: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11a648: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11a648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a64c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x11A64Cu;
    {
        const bool branch_taken_0x11a64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a64c) {
            ctx->pc = 0x11A650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A64Cu;
            // 0x11a650: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A6ACu;
            goto label_11a6ac;
        }
    }
    ctx->pc = 0x11A654u;
    // 0x11a654: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x11a654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_11a658:
    // 0x11a658: 0xc047264  jal         func_11C990
    ctx->pc = 0x11A658u;
    SET_GPR_U32(ctx, 31, 0x11A660u);
    ctx->pc = 0x11A65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A658u;
            // 0x11a65c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C990u;
    if (runtime->hasFunction(0x11C990u)) {
        auto targetFn = runtime->lookupFunction(0x11C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A660u; }
        if (ctx->pc != 0x11A660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetDst_0x11c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A660u; }
        if (ctx->pc != 0x11A660u) { return; }
    }
    ctx->pc = 0x11A660u;
    // 0x11a660: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x11a660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11a664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a668: 0xc047260  jal         func_11C980
    ctx->pc = 0x11A668u;
    SET_GPR_U32(ctx, 31, 0x11A670u);
    ctx->pc = 0x11A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A668u;
            // 0x11a66c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C980u;
    if (runtime->hasFunction(0x11C980u)) {
        auto targetFn = runtime->lookupFunction(0x11C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A670u; }
        if (ctx->pc != 0x11A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetSrc_0x11c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A670u; }
        if (ctx->pc != 0x11A670u) { return; }
    }
    ctx->pc = 0x11A670u;
    // 0x11a670: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11A670u;
    {
        const bool branch_taken_0x11a670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a670) {
            ctx->pc = 0x11A6F8u;
            goto label_11a6f8;
        }
    }
    ctx->pc = 0x11A678u;
    // 0x11a678: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11A678u;
    {
        const bool branch_taken_0x11a678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A678u;
            // 0x11a67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a678) {
            ctx->pc = 0x11A6F8u;
            goto label_11a6f8;
        }
    }
    ctx->pc = 0x11A680u;
    // 0x11a680: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11a680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a684: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x11a684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x11a688: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x11A688u;
    SET_GPR_U32(ctx, 31, 0x11A690u);
    ctx->pc = 0x11A68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A688u;
            // 0x11a68c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A690u; }
        if (ctx->pc != 0x11A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A690u; }
        if (ctx->pc != 0x11A690u) { return; }
    }
    ctx->pc = 0x11A690u;
    // 0x11a690: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a694: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11a694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11a698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a69c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11a69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a6a0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11A6A0u;
    {
        const bool branch_taken_0x11a6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a6a0) {
            ctx->pc = 0x11A6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6A0u;
            // 0x11a6a4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A658u;
            goto label_11a658;
        }
    }
    ctx->pc = 0x11A6A8u;
    // 0x11a6a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x11a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_11a6ac:
    // 0x11a6ac: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11A6ACu;
    {
        const bool branch_taken_0x11a6ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11a6ac) {
            ctx->pc = 0x11A6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6ACu;
            // 0x11a6b0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A734u;
            goto label_11a734;
        }
    }
    ctx->pc = 0x11A6B4u;
    // 0x11a6b4: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11a6b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11a6bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11a6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a6c0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x11A6C0u;
    {
        const bool branch_taken_0x11a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a6c0) {
            ctx->pc = 0x11A6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6C0u;
            // 0x11a6c4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A734u;
            goto label_11a734;
        }
    }
    ctx->pc = 0x11A6C8u;
    // 0x11a6c8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x11a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x11a6cc: 0x0  nop
    ctx->pc = 0x11a6ccu;
    // NOP
label_11a6d0:
    // 0x11a6d0: 0xc047264  jal         func_11C990
    ctx->pc = 0x11A6D0u;
    SET_GPR_U32(ctx, 31, 0x11A6D8u);
    ctx->pc = 0x11A6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6D0u;
            // 0x11a6d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C990u;
    if (runtime->hasFunction(0x11C990u)) {
        auto targetFn = runtime->lookupFunction(0x11C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6D8u; }
        if (ctx->pc != 0x11A6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetDst_0x11c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6D8u; }
        if (ctx->pc != 0x11A6D8u) { return; }
    }
    ctx->pc = 0x11A6D8u;
    // 0x11a6d8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x11a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x11a6dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6e0: 0xc047260  jal         func_11C980
    ctx->pc = 0x11A6E0u;
    SET_GPR_U32(ctx, 31, 0x11A6E8u);
    ctx->pc = 0x11A6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6E0u;
            // 0x11a6e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C980u;
    if (runtime->hasFunction(0x11C980u)) {
        auto targetFn = runtime->lookupFunction(0x11C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6E8u; }
        if (ctx->pc != 0x11A6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetSrc_0x11c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6E8u; }
        if (ctx->pc != 0x11A6E8u) { return; }
    }
    ctx->pc = 0x11A6E8u;
    // 0x11a6e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A6E8u;
    {
        const bool branch_taken_0x11a6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a6e8) {
            ctx->pc = 0x11A6F8u;
            goto label_11a6f8;
        }
    }
    ctx->pc = 0x11A6F0u;
    // 0x11a6f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A6F0u;
    {
        const bool branch_taken_0x11a6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6F0u;
            // 0x11a6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6f0) {
            ctx->pc = 0x11A708u;
            goto label_11a708;
        }
    }
    ctx->pc = 0x11A6F8u;
label_11a6f8:
    // 0x11a6f8: 0xc046962  jal         func_11A588
    ctx->pc = 0x11A6F8u;
    SET_GPR_U32(ctx, 31, 0x11A700u);
    ctx->pc = 0x11A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6F8u;
            // 0x11a6fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (runtime->hasFunction(0x11A588u)) {
        auto targetFn = runtime->lookupFunction(0x11A588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A700u; }
        if (ctx->pc != 0x11A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_share_err_0x11a588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A700u; }
        if (ctx->pc != 0x11A700u) { return; }
    }
    ctx->pc = 0x11A700u;
    // 0x11a700: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11A700u;
    {
        const bool branch_taken_0x11a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A700u;
            // 0x11a704: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a700) {
            ctx->pc = 0x11A750u;
            goto label_11a750;
        }
    }
    ctx->pc = 0x11A708u;
label_11a708:
    // 0x11a708: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11a708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a70c: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x11a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x11a710: 0xc04b6be  jal         func_12DAF8
    ctx->pc = 0x11A710u;
    SET_GPR_U32(ctx, 31, 0x11A718u);
    ctx->pc = 0x11A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A710u;
            // 0x11a714: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAF8u;
    if (runtime->hasFunction(0x12DAF8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A718u; }
        if (ctx->pc != 0x11A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x12daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A718u; }
        if (ctx->pc != 0x11A718u) { return; }
    }
    ctx->pc = 0x11A718u;
    // 0x11a718: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x11a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11a71c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x11a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11a720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a724: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11a724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a728: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11A728u;
    {
        const bool branch_taken_0x11a728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a728) {
            ctx->pc = 0x11A72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A728u;
            // 0x11a72c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A6D0u;
            goto label_11a6d0;
        }
    }
    ctx->pc = 0x11A730u;
    // 0x11a730: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x11a730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_11a734:
    // 0x11a734: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x11a734u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x11a738: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a73c: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x11a73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a740: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x11A740u;
    {
        const bool branch_taken_0x11a740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a740) {
            ctx->pc = 0x11A5F0u;
            goto label_11a5f0;
        }
    }
    ctx->pc = 0x11A748u;
label_11a748:
    // 0x11a748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a74c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11a74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11a750:
    // 0x11a750: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11a750u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a754: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a758: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a758u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a75c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a75cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a760: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a768: 0x3e00008  jr          $ra
    ctx->pc = 0x11A768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A768u;
            // 0x11a76c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A5F0u: goto label_11a5f0;
            case 0x11A614u: goto label_11a614;
            case 0x11A638u: goto label_11a638;
            case 0x11A658u: goto label_11a658;
            case 0x11A6ACu: goto label_11a6ac;
            case 0x11A6D0u: goto label_11a6d0;
            case 0x11A6F8u: goto label_11a6f8;
            case 0x11A708u: goto label_11a708;
            case 0x11A734u: goto label_11a734;
            case 0x11A748u: goto label_11a748;
            case 0x11A750u: goto label_11a750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A770u;
}
