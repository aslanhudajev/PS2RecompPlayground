#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: decBs0
// Address: 0x18a590 - 0x18a75c
void decBs0_0x18a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("decBs0_0x18a590");
#endif

    ctx->pc = 0x18a590u;

    // 0x18a590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18a594: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18a598: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18a598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18a59c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a5a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18a5a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a5a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x18a5a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a5ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a5b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a5b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a5b8: 0xc04adc2  jal         func_12B708
    ctx->pc = 0x18A5B8u;
    SET_GPR_U32(ctx, 31, 0x18A5C0u);
    ctx->pc = 0x18A5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5B8u;
            // 0x18a5bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B708u;
    if (runtime->hasFunction(0x12B708u)) {
        auto targetFn = runtime->lookupFunction(0x12B708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5C0u; }
        if (ctx->pc != 0x18A5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsEnd_0x12b708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5C0u; }
        if (ctx->pc != 0x18A5C0u) { return; }
    }
    ctx->pc = 0x18A5C0u;
    // 0x18a5c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18a5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a5c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18a5c4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x18a5c8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x18A5C8u;
    {
        const bool branch_taken_0x18a5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5c8) {
            ctx->pc = 0x18A728u;
            goto label_18a728;
        }
    }
    ctx->pc = 0x18A5D0u;
label_18a5d0:
    // 0x18a5d0: 0xc062a54  jal         func_18A950
    ctx->pc = 0x18A5D0u;
    SET_GPR_U32(ctx, 31, 0x18A5D8u);
    ctx->pc = 0x18A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5D0u;
            // 0x18a5d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A950u;
    if (runtime->hasFunction(0x18A950u)) {
        auto targetFn = runtime->lookupFunction(0x18A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5D8u; }
        if (ctx->pc != 0x18A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x18a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5D8u; }
        if (ctx->pc != 0x18A5D8u) { return; }
    }
    ctx->pc = 0x18A5D8u;
    // 0x18a5d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a5dc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A5DCu;
    {
        const bool branch_taken_0x18a5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5DCu;
            // 0x18a5e0: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5dc) {
            ctx->pc = 0x18A600u;
            goto label_18a600;
        }
    }
    ctx->pc = 0x18A5E4u;
    // 0x18a5e4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a5e8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x18A5E8u;
    SET_GPR_U32(ctx, 31, 0x18A5F0u);
    ctx->pc = 0x18A5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A5E8u;
            // 0x18a5ec: 0x248426e0  addiu       $a0, $a0, 0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5F0u; }
        if (ctx->pc != 0x18A5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A5F0u; }
        if (ctx->pc != 0x18A5F0u) { return; }
    }
    ctx->pc = 0x18A5F0u;
    // 0x18a5f0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x18A5F0u;
    {
        const bool branch_taken_0x18a5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a5f0) {
            ctx->pc = 0x18A728u;
            goto label_18a728;
        }
    }
    ctx->pc = 0x18A5F8u;
label_18a5f8:
    // 0x18a5f8: 0xc062138  jal         func_1884E0
    ctx->pc = 0x18A5F8u;
    SET_GPR_U32(ctx, 31, 0x18A600u);
    ctx->pc = 0x1884E0u;
    if (runtime->hasFunction(0x1884E0u)) {
        auto targetFn = runtime->lookupFunction(0x1884E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A600u; }
        if (ctx->pc != 0x18A600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x1884e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A600u; }
        if (ctx->pc != 0x18A600u) { return; }
    }
    ctx->pc = 0x18A600u;
label_18a600:
    // 0x18a600: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a604: 0xc062aec  jal         func_18ABB0
    ctx->pc = 0x18A604u;
    SET_GPR_U32(ctx, 31, 0x18A60Cu);
    ctx->pc = 0x18A608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A604u;
            // 0x18a608: 0x2484fd80  addiu       $a0, $a0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ABB0u;
    if (runtime->hasFunction(0x18ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x18ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A60Cu; }
        if (ctx->pc != 0x18A60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufGetData_0x18abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A60Cu; }
        if (ctx->pc != 0x18A60Cu) { return; }
    }
    ctx->pc = 0x18A60Cu;
    // 0x18a60c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x18a60cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a610: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18a610u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x18a614: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A614u;
    {
        const bool branch_taken_0x18a614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A614u;
            // 0x18a618: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a614) {
            ctx->pc = 0x18A5F8u;
            goto label_18a5f8;
        }
    }
    ctx->pc = 0x18A61Cu;
    // 0x18a61c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18a61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a620: 0xc04ad78  jal         func_12B5E0
    ctx->pc = 0x18A620u;
    SET_GPR_U32(ctx, 31, 0x18A628u);
    ctx->pc = 0x18A624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A620u;
            // 0x18a624: 0x24060654  addiu       $a2, $zero, 0x654 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1620));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B5E0u;
    if (runtime->hasFunction(0x12B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x12B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A628u; }
        if (ctx->pc != 0x18A628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegGetPicture_0x12b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A628u; }
        if (ctx->pc != 0x18A628u) { return; }
    }
    ctx->pc = 0x18A628u;
    // 0x18a628: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A628u;
    {
        const bool branch_taken_0x18a628 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A628u;
            // 0x18a62c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a628) {
            ctx->pc = 0x18A638u;
            goto label_18a638;
        }
    }
    ctx->pc = 0x18A630u;
    // 0x18a630: 0xc062048  jal         func_188120
    ctx->pc = 0x18A630u;
    SET_GPR_U32(ctx, 31, 0x18A638u);
    ctx->pc = 0x18A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A630u;
            // 0x18a634: 0x24842700  addiu       $a0, $a0, 0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188120u;
    if (runtime->hasFunction(0x188120u)) {
        auto targetFn = runtime->lookupFunction(0x188120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A638u; }
        if (ctx->pc != 0x18A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x188120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A638u; }
        if (ctx->pc != 0x18A638u) { return; }
    }
    ctx->pc = 0x18A638u;
label_18a638:
    // 0x18a638: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x18a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x18a63c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x18A63Cu;
    {
        const bool branch_taken_0x18a63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A63Cu;
            // 0x18a640: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a63c) {
            ctx->pc = 0x18A6F8u;
            goto label_18a6f8;
        }
    }
    ctx->pc = 0x18A644u;
    // 0x18a644: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x18a644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18a648: 0x8c22fd90  lw          $v0, -0x270($at)
    ctx->pc = 0x18a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966672)));
    // 0x18a64c: 0x8ed20004  lw          $s2, 0x4($s6)
    ctx->pc = 0x18a64cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x18a650: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x18a650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a654: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x18A654u;
    {
        const bool branch_taken_0x18a654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A654u;
            // 0x18a658: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a654) {
            ctx->pc = 0x18A6F8u;
            goto label_18a6f8;
        }
    }
    ctx->pc = 0x18A65Cu;
    // 0x18a65c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18a65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a660: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18a660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a664: 0x0  nop
    ctx->pc = 0x18a664u;
    // NOP
label_18a668:
    // 0x18a668: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18a668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18a66c: 0x8c23fd84  lw          $v1, -0x27C($at)
    ctx->pc = 0x18a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966660)));
    // 0x18a670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a674: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18a674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a678: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18a678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a67c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18a67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18a680: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a684: 0x8c22fd80  lw          $v0, -0x280($at)
    ctx->pc = 0x18a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966656)));
    // 0x18a688: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x18a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x18a68c: 0xc061ed4  jal         func_187B50
    ctx->pc = 0x18A68Cu;
    SET_GPR_U32(ctx, 31, 0x18A694u);
    ctx->pc = 0x18A690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A68Cu;
            // 0x18a690: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B50u;
    if (runtime->hasFunction(0x187B50u)) {
        auto targetFn = runtime->lookupFunction(0x187B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A694u; }
        if (ctx->pc != 0x18A694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setImageTag_0x187b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A694u; }
        if (ctx->pc != 0x18A694u) { return; }
    }
    ctx->pc = 0x18A694u;
    // 0x18a694: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18a694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18a698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a69c: 0x8c23fd84  lw          $v1, -0x27C($at)
    ctx->pc = 0x18a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966660)));
    // 0x18a6a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18a6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6a4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18a6a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18a6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18a6ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a6b0: 0x8c22fd80  lw          $v0, -0x280($at)
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966656)));
    // 0x18a6b4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x18a6b8: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x18a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18a6bc: 0x34216740  ori         $at, $at, 0x6740
    ctx->pc = 0x18a6bcu;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)26432u)));
    // 0x18a6c0: 0xc061ed4  jal         func_187B50
    ctx->pc = 0x18A6C0u;
    SET_GPR_U32(ctx, 31, 0x18A6C8u);
    ctx->pc = 0x18A6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6C0u;
            // 0x18a6c4: 0x612021  addu        $a0, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B50u;
    if (runtime->hasFunction(0x187B50u)) {
        auto targetFn = runtime->lookupFunction(0x187B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A6C8u; }
        if (ctx->pc != 0x18A6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setImageTag_0x187b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A6C8u; }
        if (ctx->pc != 0x18A6C8u) { return; }
    }
    ctx->pc = 0x18A6C8u;
    // 0x18a6c8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x18a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x18a6cc: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x18a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x18a6d0: 0x3442ce40  ori         $v0, $v0, 0xCE40
    ctx->pc = 0x18a6d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52800u)));
    // 0x18a6d4: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x18a6d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20480u)));
    // 0x18a6d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18a6dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18a6e0: 0x8c22fd90  lw          $v0, -0x270($at)
    ctx->pc = 0x18a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966672)));
    // 0x18a6e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18a6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18a6e8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x18a6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a6ec: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x18A6ECu;
    {
        const bool branch_taken_0x18a6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6ECu;
            // 0x18a6f0: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6ec) {
            ctx->pc = 0x18A668u;
            goto label_18a668;
        }
    }
    ctx->pc = 0x18A6F4u;
    // 0x18a6f4: 0x0  nop
    ctx->pc = 0x18a6f4u;
    // NOP
label_18a6f8:
    // 0x18a6f8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a6fc: 0xc062b04  jal         func_18AC10
    ctx->pc = 0x18A6FCu;
    SET_GPR_U32(ctx, 31, 0x18A704u);
    ctx->pc = 0x18A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A6FCu;
            // 0x18a700: 0x2484fd80  addiu       $a0, $a0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AC10u;
    if (runtime->hasFunction(0x18AC10u)) {
        auto targetFn = runtime->lookupFunction(0x18AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A704u; }
        if (ctx->pc != 0x18A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIncCount_0x18ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A704u; }
        if (ctx->pc != 0x18A704u) { return; }
    }
    ctx->pc = 0x18A704u;
    // 0x18a704: 0xc062138  jal         func_1884E0
    ctx->pc = 0x18A704u;
    SET_GPR_U32(ctx, 31, 0x18A70Cu);
    ctx->pc = 0x1884E0u;
    if (runtime->hasFunction(0x1884E0u)) {
        auto targetFn = runtime->lookupFunction(0x1884E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A70Cu; }
        if (ctx->pc != 0x18A70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x1884e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A70Cu; }
        if (ctx->pc != 0x18A70Cu) { return; }
    }
    ctx->pc = 0x18A70Cu;
    // 0x18a70c: 0xc04adc2  jal         func_12B708
    ctx->pc = 0x18A70Cu;
    SET_GPR_U32(ctx, 31, 0x18A714u);
    ctx->pc = 0x18A710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A70Cu;
            // 0x18a710: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B708u;
    if (runtime->hasFunction(0x12B708u)) {
        auto targetFn = runtime->lookupFunction(0x12B708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A714u; }
        if (ctx->pc != 0x18A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsEnd_0x12b708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A714u; }
        if (ctx->pc != 0x18A714u) { return; }
    }
    ctx->pc = 0x18A714u;
    // 0x18a714: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18a714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a718: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18a718u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x18a71c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x18A71Cu;
    {
        const bool branch_taken_0x18a71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a71c) {
            ctx->pc = 0x18A5D0u;
            goto label_18a5d0;
        }
    }
    ctx->pc = 0x18A724u;
    // 0x18a724: 0x0  nop
    ctx->pc = 0x18a724u;
    // NOP
label_18a728:
    // 0x18a728: 0xc04adca  jal         func_12B728
    ctx->pc = 0x18A728u;
    SET_GPR_U32(ctx, 31, 0x18A730u);
    ctx->pc = 0x18A72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A728u;
            // 0x18a72c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B728u;
    if (runtime->hasFunction(0x12B728u)) {
        auto targetFn = runtime->lookupFunction(0x12B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A730u; }
        if (ctx->pc != 0x18A730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegReset_0x12b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A730u; }
        if (ctx->pc != 0x18A730u) { return; }
    }
    ctx->pc = 0x18A730u;
    // 0x18a730: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x18a730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a734: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18a734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a738: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18a738u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a73c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18a73cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a740: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18a740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a744: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a748: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a74c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a754: 0x3e00008  jr          $ra
    ctx->pc = 0x18A754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A754u;
            // 0x18a758: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A5D0u: goto label_18a5d0;
            case 0x18A5F8u: goto label_18a5f8;
            case 0x18A600u: goto label_18a600;
            case 0x18A638u: goto label_18a638;
            case 0x18A668u: goto label_18a668;
            case 0x18A6F8u: goto label_18a6f8;
            case 0x18A728u: goto label_18a728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A75Cu;
}
