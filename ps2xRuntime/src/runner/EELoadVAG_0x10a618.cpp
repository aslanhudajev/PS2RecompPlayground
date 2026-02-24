#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EELoadVAG
// Address: 0x10a618 - 0x10a8bc
void EELoadVAG_0x10a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EELoadVAG_0x10a618");
#endif

    ctx->pc = 0x10a618u;

    // 0x10a618: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10a618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10a61c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10a620: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10a620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a624: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10a628: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a62c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10a630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a634: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10a634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a638: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10a63c: 0x248434b8  addiu       $a0, $a0, 0x34B8
    ctx->pc = 0x10a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13496));
    // 0x10a640: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a644: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x10a644u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a648: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a64c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A64Cu;
    SET_GPR_U32(ctx, 31, 0x10A654u);
    ctx->pc = 0x10A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A64Cu;
            // 0x10a650: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A654u; }
        if (ctx->pc != 0x10A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A654u; }
        if (ctx->pc != 0x10A654u) { return; }
    }
    ctx->pc = 0x10A654u;
    // 0x10a654: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a658: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10a658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a65c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A65Cu;
    SET_GPR_U32(ctx, 31, 0x10A664u);
    ctx->pc = 0x10A660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A65Cu;
            // 0x10a660: 0x248434d8  addiu       $a0, $a0, 0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A664u; }
        if (ctx->pc != 0x10A664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A664u; }
        if (ctx->pc != 0x10A664u) { return; }
    }
    ctx->pc = 0x10A664u;
    // 0x10a664: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a668: 0xc0444ea  jal         func_1113A8
    ctx->pc = 0x10A668u;
    SET_GPR_U32(ctx, 31, 0x10A670u);
    ctx->pc = 0x10A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A668u;
            // 0x10a66c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1113A8u;
    if (runtime->hasFunction(0x1113A8u)) {
        auto targetFn = runtime->lookupFunction(0x1113A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A670u; }
        if (ctx->pc != 0x10A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1113a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A670u; }
        if (ctx->pc != 0x10A670u) { return; }
    }
    ctx->pc = 0x10A670u;
    // 0x10a670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a674: 0x56150004  bnel        $s0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A674u;
    {
        const bool branch_taken_0x10a674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x10a674) {
            ctx->pc = 0x10A678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A674u;
            // 0x10a678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A688u;
            goto label_10a688;
        }
    }
    ctx->pc = 0x10A67Cu;
    // 0x10a67c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a680: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x10A680u;
    {
        const bool branch_taken_0x10a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A680u;
            // 0x10a684: 0x248434f0  addiu       $a0, $a0, 0x34F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a680) {
            ctx->pc = 0x10A7C0u;
            goto label_10a7c0;
        }
    }
    ctx->pc = 0x10A688u;
label_10a688:
    // 0x10a688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a68c: 0xc0445ec  jal         func_1117B0
    ctx->pc = 0x10A68Cu;
    SET_GPR_U32(ctx, 31, 0x10A694u);
    ctx->pc = 0x10A690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A68Cu;
            // 0x10a690: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1117B0u;
    if (runtime->hasFunction(0x1117B0u)) {
        auto targetFn = runtime->lookupFunction(0x1117B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A694u; }
        if (ctx->pc != 0x10A694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A694u; }
        if (ctx->pc != 0x10A694u) { return; }
    }
    ctx->pc = 0x10A694u;
    // 0x10a694: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10a694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a698: 0x5e600004  bgtzl       $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A698u;
    {
        const bool branch_taken_0x10a698 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x10a698) {
            ctx->pc = 0x10A69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A698u;
            // 0x10a69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A6ACu;
            goto label_10a6ac;
        }
    }
    ctx->pc = 0x10A6A0u;
    // 0x10a6a0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a6a4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x10A6A4u;
    {
        const bool branch_taken_0x10a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6A4u;
            // 0x10a6a8: 0x24843508  addiu       $a0, $a0, 0x3508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6a4) {
            ctx->pc = 0x10A7C0u;
            goto label_10a7c0;
        }
    }
    ctx->pc = 0x10A6ACu;
label_10a6ac:
    // 0x10a6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6b0: 0xc0445ec  jal         func_1117B0
    ctx->pc = 0x10A6B0u;
    SET_GPR_U32(ctx, 31, 0x10A6B8u);
    ctx->pc = 0x10A6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6B0u;
            // 0x10a6b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1117B0u;
    if (runtime->hasFunction(0x1117B0u)) {
        auto targetFn = runtime->lookupFunction(0x1117B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6B8u; }
        if (ctx->pc != 0x10A6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6B8u; }
        if (ctx->pc != 0x10A6B8u) { return; }
    }
    ctx->pc = 0x10A6B8u;
    // 0x10a6b8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x10a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10a6bc: 0xc04a90c  jal         func_12A430
    ctx->pc = 0x10A6BCu;
    SET_GPR_U32(ctx, 31, 0x10A6C4u);
    ctx->pc = 0x10A6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6BCu;
            // 0x10a6c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A430u;
    if (runtime->hasFunction(0x12A430u)) {
        auto targetFn = runtime->lookupFunction(0x12A430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6C4u; }
        if (ctx->pc != 0x10A6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6C4u; }
        if (ctx->pc != 0x10A6C4u) { return; }
    }
    ctx->pc = 0x10A6C4u;
    // 0x10a6c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10a6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6c8: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A6C8u;
    {
        const bool branch_taken_0x10a6c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a6c8) {
            ctx->pc = 0x10A6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6C8u;
            // 0x10a6cc: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A6DCu;
            goto label_10a6dc;
        }
    }
    ctx->pc = 0x10A6D0u;
    // 0x10a6d0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a6d4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x10A6D4u;
    {
        const bool branch_taken_0x10a6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6D4u;
            // 0x10a6d8: 0x24843520  addiu       $a0, $a0, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6d4) {
            ctx->pc = 0x10A7C0u;
            goto label_10a7c0;
        }
    }
    ctx->pc = 0x10A6DCu;
label_10a6dc:
    // 0x10a6dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6e0: 0x24843538  addiu       $a0, $a0, 0x3538
    ctx->pc = 0x10a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13624));
    // 0x10a6e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10a6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10a6e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6ec: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A6ECu;
    SET_GPR_U32(ctx, 31, 0x10A6F4u);
    ctx->pc = 0x10A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6ECu;
            // 0x10a6f0: 0x2672ffd0  addiu       $s2, $s3, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6F4u; }
        if (ctx->pc != 0x10A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6F4u; }
        if (ctx->pc != 0x10A6F4u) { return; }
    }
    ctx->pc = 0x10A6F4u;
    // 0x10a6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a6fc: 0xc04467a  jal         func_1119E8
    ctx->pc = 0x10A6FCu;
    SET_GPR_U32(ctx, 31, 0x10A704u);
    ctx->pc = 0x10A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6FCu;
            // 0x10a700: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1119E8u;
    if (runtime->hasFunction(0x1119E8u)) {
        auto targetFn = runtime->lookupFunction(0x1119E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A704u; }
        if (ctx->pc != 0x10A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A704u; }
        if (ctx->pc != 0x10A704u) { return; }
    }
    ctx->pc = 0x10A704u;
    // 0x10a704: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a70c: 0x24843578  addiu       $a0, $a0, 0x3578
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13688));
    // 0x10a710: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A710u;
    SET_GPR_U32(ctx, 31, 0x10A718u);
    ctx->pc = 0x10A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A710u;
            // 0x10a714: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A718u; }
        if (ctx->pc != 0x10A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A718u; }
        if (ctx->pc != 0x10A718u) { return; }
    }
    ctx->pc = 0x10A718u;
    // 0x10a718: 0xc042aa2  jal         func_10AA88
    ctx->pc = 0x10A718u;
    SET_GPR_U32(ctx, 31, 0x10A720u);
    ctx->pc = 0x10A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A718u;
            // 0x10a71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA88u;
    if (runtime->hasFunction(0x10AA88u)) {
        auto targetFn = runtime->lookupFunction(0x10AA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A720u; }
        if (ctx->pc != 0x10A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintVAGDetails_0x10aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A720u; }
        if (ctx->pc != 0x10A720u) { return; }
    }
    ctx->pc = 0x10A720u;
    // 0x10a720: 0xc042fde  jal         func_10BF78
    ctx->pc = 0x10A720u;
    SET_GPR_U32(ctx, 31, 0x10A728u);
    ctx->pc = 0x10A724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A720u;
            // 0x10a724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF78u;
    if (runtime->hasFunction(0x10BF78u)) {
        auto targetFn = runtime->lookupFunction(0x10BF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A728u; }
        if (ctx->pc != 0x10A728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPitchValue_0x10bf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A728u; }
        if (ctx->pc != 0x10A728u) { return; }
    }
    ctx->pc = 0x10A728u;
    // 0x10a728: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x10a728u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x10a72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a730: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x10a730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10a734: 0xc0445ec  jal         func_1117B0
    ctx->pc = 0x10A734u;
    SET_GPR_U32(ctx, 31, 0x10A73Cu);
    ctx->pc = 0x10A738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A734u;
            // 0x10a738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1117B0u;
    if (runtime->hasFunction(0x1117B0u)) {
        auto targetFn = runtime->lookupFunction(0x1117B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A73Cu; }
        if (ctx->pc != 0x10A73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x1117b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A73Cu; }
        if (ctx->pc != 0x10A73Cu) { return; }
    }
    ctx->pc = 0x10A73Cu;
    // 0x10a73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a744: 0xc04467a  jal         func_1119E8
    ctx->pc = 0x10A744u;
    SET_GPR_U32(ctx, 31, 0x10A74Cu);
    ctx->pc = 0x10A748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A744u;
            // 0x10a748: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1119E8u;
    if (runtime->hasFunction(0x1119E8u)) {
        auto targetFn = runtime->lookupFunction(0x1119E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A74Cu; }
        if (ctx->pc != 0x10A74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x1119e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A74Cu; }
        if (ctx->pc != 0x10A74Cu) { return; }
    }
    ctx->pc = 0x10A74Cu;
    // 0x10a74c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a754: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x10a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x10a758: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A758u;
    SET_GPR_U32(ctx, 31, 0x10A760u);
    ctx->pc = 0x10A75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A758u;
            // 0x10a75c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A760u; }
        if (ctx->pc != 0x10A760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A760u; }
        if (ctx->pc != 0x10A760u) { return; }
    }
    ctx->pc = 0x10A760u;
    // 0x10a760: 0xc04458c  jal         func_111630
    ctx->pc = 0x10A760u;
    SET_GPR_U32(ctx, 31, 0x10A768u);
    ctx->pc = 0x10A764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A760u;
            // 0x10a764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111630u;
    if (runtime->hasFunction(0x111630u)) {
        auto targetFn = runtime->lookupFunction(0x111630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A768u; }
        if (ctx->pc != 0x10A768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x111630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A768u; }
        if (ctx->pc != 0x10A768u) { return; }
    }
    ctx->pc = 0x10A768u;
    // 0x10a768: 0xc043948  jal         func_10E520
    ctx->pc = 0x10A768u;
    SET_GPR_U32(ctx, 31, 0x10A770u);
    ctx->pc = 0x10A76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A768u;
            // 0x10a76c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A770u; }
        if (ctx->pc != 0x10A770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A770u; }
        if (ctx->pc != 0x10A770u) { return; }
    }
    ctx->pc = 0x10A770u;
    // 0x10a770: 0xc045066  jal         func_114198
    ctx->pc = 0x10A770u;
    SET_GPR_U32(ctx, 31, 0x10A778u);
    ctx->pc = 0x10A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A770u;
            // 0x10a774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114198u;
    if (runtime->hasFunction(0x114198u)) {
        auto targetFn = runtime->lookupFunction(0x114198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A778u; }
        if (ctx->pc != 0x10A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A778u; }
        if (ctx->pc != 0x10A778u) { return; }
    }
    ctx->pc = 0x10A778u;
    // 0x10a778: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A778u;
    {
        const bool branch_taken_0x10a778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A778u;
            // 0x10a77c: 0xaf82838c  sw          $v0, -0x7C74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a778) {
            ctx->pc = 0x10A78Cu;
            goto label_10a78c;
        }
    }
    ctx->pc = 0x10A780u;
    // 0x10a780: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a784: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10A784u;
    {
        const bool branch_taken_0x10a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A784u;
            // 0x10a788: 0x248435c0  addiu       $a0, $a0, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a784) {
            ctx->pc = 0x10A7C0u;
            goto label_10a7c0;
        }
    }
    ctx->pc = 0x10A78Cu;
label_10a78c:
    // 0x10a78c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a794: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A794u;
    SET_GPR_U32(ctx, 31, 0x10A79Cu);
    ctx->pc = 0x10A798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A794u;
            // 0x10a798: 0x248435e0  addiu       $a0, $a0, 0x35E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A79Cu; }
        if (ctx->pc != 0x10A79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A79Cu; }
        if (ctx->pc != 0x10A79Cu) { return; }
    }
    ctx->pc = 0x10A79Cu;
    // 0x10a79c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x10a79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10a7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10a7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a7a8: 0xc045c60  jal         func_117180
    ctx->pc = 0x10A7A8u;
    SET_GPR_U32(ctx, 31, 0x10A7B0u);
    ctx->pc = 0x10A7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7A8u;
            // 0x10a7ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117180u;
    if (runtime->hasFunction(0x117180u)) {
        auto targetFn = runtime->lookupFunction(0x117180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A7B0u; }
        if (ctx->pc != 0x10A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A7B0u; }
        if (ctx->pc != 0x10A7B0u) { return; }
    }
    ctx->pc = 0x10A7B0u;
    // 0x10a7b0: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A7B0u;
    {
        const bool branch_taken_0x10a7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x10A7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7B0u;
            // 0x10a7b4: 0x8f838388  lw          $v1, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7b0) {
            ctx->pc = 0x10A7D0u;
            goto label_10a7d0;
        }
    }
    ctx->pc = 0x10A7B8u;
    // 0x10a7b8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a7bc: 0x24843600  addiu       $a0, $a0, 0x3600
    ctx->pc = 0x10a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13824));
label_10a7c0:
    // 0x10a7c0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A7C0u;
    SET_GPR_U32(ctx, 31, 0x10A7C8u);
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A7C8u; }
        if (ctx->pc != 0x10A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A7C8u; }
        if (ctx->pc != 0x10A7C8u) { return; }
    }
    ctx->pc = 0x10A7C8u;
    // 0x10a7c8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x10A7C8u;
    {
        const bool branch_taken_0x10a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7C8u;
            // 0x10a7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7c8) {
            ctx->pc = 0x10A894u;
            goto label_10a894;
        }
    }
    ctx->pc = 0x10A7D0u;
label_10a7d0:
    // 0x10a7d0: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x10a7d0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
    // 0x10a7d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A7D4u;
    {
        const bool branch_taken_0x10a7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7D4u;
            // 0x10a7d8: 0x24620010  addiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7d4) {
            ctx->pc = 0x10A7E4u;
            goto label_10a7e4;
        }
    }
    ctx->pc = 0x10A7DCu;
    // 0x10a7dc: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x10a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10a7e0: 0xaf838388  sw          $v1, -0x7C78($gp)
    ctx->pc = 0x10a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 3));
label_10a7e4:
    // 0x10a7e4: 0x24705010  addiu       $s0, $v1, 0x5010
    ctx->pc = 0x10a7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20496));
    // 0x10a7e8: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x10a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x10a7ec: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x10a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10a7f0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a7f4: 0xaf838388  sw          $v1, -0x7C78($gp)
    ctx->pc = 0x10a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 3));
    // 0x10a7f8: 0x24843620  addiu       $a0, $a0, 0x3620
    ctx->pc = 0x10a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
    // 0x10a7fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10a7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a800: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A800u;
    SET_GPR_U32(ctx, 31, 0x10A808u);
    ctx->pc = 0x10A804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A800u;
            // 0x10a804: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A808u; }
        if (ctx->pc != 0x10A808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A808u; }
        if (ctx->pc != 0x10A808u) { return; }
    }
    ctx->pc = 0x10A808u;
    // 0x10a808: 0x8f88838c  lw          $t0, -0x7C74($gp)
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10a80c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x10a80cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a814: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x10a814u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32976u)));
    // 0x10a818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a81c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10a81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a820: 0xc045c80  jal         func_117200
    ctx->pc = 0x10A820u;
    SET_GPR_U32(ctx, 31, 0x10A828u);
    ctx->pc = 0x10A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A820u;
            // 0x10a824: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A828u; }
        if (ctx->pc != 0x10A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A828u; }
        if (ctx->pc != 0x10A828u) { return; }
    }
    ctx->pc = 0x10A828u;
    // 0x10a828: 0x54550005  bnel        $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A828u;
    {
        const bool branch_taken_0x10a828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x10a828) {
            ctx->pc = 0x10A82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A828u;
            // 0x10a82c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A840u;
            goto label_10a840;
        }
    }
    ctx->pc = 0x10A830u;
    // 0x10a830: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a834: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A834u;
    SET_GPR_U32(ctx, 31, 0x10A83Cu);
    ctx->pc = 0x10A838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A834u;
            // 0x10a838: 0x24843648  addiu       $a0, $a0, 0x3648 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A83Cu; }
        if (ctx->pc != 0x10A83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A83Cu; }
        if (ctx->pc != 0x10A83Cu) { return; }
    }
    ctx->pc = 0x10A83Cu;
    // 0x10a83c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a840:
    // 0x10a840: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x10a840u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33008u)));
    // 0x10a844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10a844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a848: 0xc045c80  jal         func_117200
    ctx->pc = 0x10A848u;
    SET_GPR_U32(ctx, 31, 0x10A850u);
    ctx->pc = 0x10A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A848u;
            // 0x10a84c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A850u; }
        if (ctx->pc != 0x10A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A850u; }
        if (ctx->pc != 0x10A850u) { return; }
    }
    ctx->pc = 0x10A850u;
    // 0x10a850: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A850u;
    {
        const bool branch_taken_0x10a850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x10A854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A850u;
            // 0x10a854: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a850) {
            ctx->pc = 0x10A860u;
            goto label_10a860;
        }
    }
    ctx->pc = 0x10A858u;
    // 0x10a858: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A858u;
    SET_GPR_U32(ctx, 31, 0x10A860u);
    ctx->pc = 0x10A85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A858u;
            // 0x10a85c: 0x24843668  addiu       $a0, $a0, 0x3668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A860u; }
        if (ctx->pc != 0x10A860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A860u; }
        if (ctx->pc != 0x10A860u) { return; }
    }
    ctx->pc = 0x10A860u;
label_10a860:
    // 0x10a860: 0xc045082  jal         func_114208
    ctx->pc = 0x10A860u;
    SET_GPR_U32(ctx, 31, 0x10A868u);
    ctx->pc = 0x10A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A860u;
            // 0x10a864: 0x8f84838c  lw          $a0, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114208u;
    if (runtime->hasFunction(0x114208u)) {
        auto targetFn = runtime->lookupFunction(0x114208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A868u; }
        if (ctx->pc != 0x10A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A868u; }
        if (ctx->pc != 0x10A868u) { return; }
    }
    ctx->pc = 0x10A868u;
    // 0x10a868: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A868u;
    {
        const bool branch_taken_0x10a868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a868) {
            ctx->pc = 0x10A86Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A868u;
            // 0x10a86c: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A880u;
            goto label_10a880;
        }
    }
    ctx->pc = 0x10A870u;
    // 0x10a870: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10a874: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A874u;
    SET_GPR_U32(ctx, 31, 0x10A87Cu);
    ctx->pc = 0x10A878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A874u;
            // 0x10a878: 0x24843688  addiu       $a0, $a0, 0x3688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A87Cu; }
        if (ctx->pc != 0x10A87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A87Cu; }
        if (ctx->pc != 0x10A87Cu) { return; }
    }
    ctx->pc = 0x10A87Cu;
    // 0x10a87c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
label_10a880:
    // 0x10a880: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10A880u;
    SET_GPR_U32(ctx, 31, 0x10A888u);
    ctx->pc = 0x10A884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A880u;
            // 0x10a884: 0x248436a8  addiu       $a0, $a0, 0x36A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A888u; }
        if (ctx->pc != 0x10A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A888u; }
        if (ctx->pc != 0x10A888u) { return; }
    }
    ctx->pc = 0x10A888u;
    // 0x10a888: 0xc04a996  jal         func_12A658
    ctx->pc = 0x10A888u;
    SET_GPR_U32(ctx, 31, 0x10A890u);
    ctx->pc = 0x10A88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A888u;
            // 0x10a88c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A658u;
    if (runtime->hasFunction(0x12A658u)) {
        auto targetFn = runtime->lookupFunction(0x12A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A890u; }
        if (ctx->pc != 0x10A890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x12a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A890u; }
        if (ctx->pc != 0x10A890u) { return; }
    }
    ctx->pc = 0x10A890u;
    // 0x10a890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10a890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a894:
    // 0x10a894: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10a894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a898: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a89c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10a89cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a8a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a8a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a8a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a8ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8B4u;
            // 0x10a8b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A688u: goto label_10a688;
            case 0x10A6ACu: goto label_10a6ac;
            case 0x10A6DCu: goto label_10a6dc;
            case 0x10A78Cu: goto label_10a78c;
            case 0x10A7C0u: goto label_10a7c0;
            case 0x10A7D0u: goto label_10a7d0;
            case 0x10A7E4u: goto label_10a7e4;
            case 0x10A840u: goto label_10a840;
            case 0x10A860u: goto label_10a860;
            case 0x10A880u: goto label_10a880;
            case 0x10A894u: goto label_10a894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A8BCu;
}
