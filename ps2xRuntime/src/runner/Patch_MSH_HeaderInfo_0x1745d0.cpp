#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Patch_MSH_HeaderInfo
// Address: 0x1745d0 - 0x1746bc
void Patch_MSH_HeaderInfo_0x1745d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Patch_MSH_HeaderInfo_0x1745d0");
#endif

    ctx->pc = 0x1745d0u;

    // 0x1745d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1745d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1745d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1745d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1745d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1745d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1745dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1745dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1745e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1745e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1745e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1745e8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1745e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1745ec: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1745ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1745f0: 0x24841a80  addiu       $a0, $a0, 0x1A80
    ctx->pc = 0x1745f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6784));
    // 0x1745f4: 0x26311a60  addiu       $s1, $s1, 0x1A60
    ctx->pc = 0x1745f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6752));
    // 0x1745f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1745f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1745fc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1745FCu;
    SET_GPR_U32(ctx, 31, 0x174604u);
    ctx->pc = 0x174600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1745FCu;
            // 0x174600: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174604u; }
        if (ctx->pc != 0x174604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174604u; }
        if (ctx->pc != 0x174604u) { return; }
    }
    ctx->pc = 0x174604u;
    // 0x174604: 0xc05d258  jal         func_174960
    ctx->pc = 0x174604u;
    SET_GPR_U32(ctx, 31, 0x17460Cu);
    ctx->pc = 0x174608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174604u;
            // 0x174608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174960u;
    if (runtime->hasFunction(0x174960u)) {
        auto targetFn = runtime->lookupFunction(0x174960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17460Cu; }
        if (ctx->pc != 0x17460Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load_File_0x174960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17460Cu; }
        if (ctx->pc != 0x17460Cu) { return; }
    }
    ctx->pc = 0x17460Cu;
    // 0x17460c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174610: 0xc05d124  jal         func_174490
    ctx->pc = 0x174610u;
    SET_GPR_U32(ctx, 31, 0x174618u);
    ctx->pc = 0x174614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174610u;
            // 0x174614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174490u;
    if (runtime->hasFunction(0x174490u)) {
        auto targetFn = runtime->lookupFunction(0x174490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174618u; }
        if (ctx->pc != 0x174618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Display_MSH_HeaderInfo_0x174490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174618u; }
        if (ctx->pc != 0x174618u) { return; }
    }
    ctx->pc = 0x174618u;
    // 0x174618: 0xc05ca1c  jal         func_172870
    ctx->pc = 0x174618u;
    SET_GPR_U32(ctx, 31, 0x174620u);
    ctx->pc = 0x17461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174618u;
            // 0x17461c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172870u;
    if (runtime->hasFunction(0x172870u)) {
        auto targetFn = runtime->lookupFunction(0x172870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174620u; }
        if (ctx->pc != 0x174620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetMSHSampleCount_0x172870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174620u; }
        if (ctx->pc != 0x174620u) { return; }
    }
    ctx->pc = 0x174620u;
    // 0x174620: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174624: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174628: 0xac222798  sw          $v0, 0x2798($at)
    ctx->pc = 0x174628u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10136), GPR_U32(ctx, 2));
    // 0x17462c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17462cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174630: 0x8c252798  lw          $a1, 0x2798($at)
    ctx->pc = 0x174630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10136)));
    // 0x174634: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174634u;
    SET_GPR_U32(ctx, 31, 0x17463Cu);
    ctx->pc = 0x174638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174634u;
            // 0x174638: 0x24841ac0  addiu       $a0, $a0, 0x1AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17463Cu; }
        if (ctx->pc != 0x17463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17463Cu; }
        if (ctx->pc != 0x17463Cu) { return; }
    }
    ctx->pc = 0x17463Cu;
    // 0x17463c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17463cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174640: 0x8c222798  lw          $v0, 0x2798($at)
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10136)));
    // 0x174644: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x174644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174648: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x174648u;
    {
        const bool branch_taken_0x174648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17464Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174648u;
            // 0x17464c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174648) {
            ctx->pc = 0x174688u;
            goto label_174688;
        }
    }
    ctx->pc = 0x174650u;
label_174650:
    // 0x174650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x174654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174658: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x174658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17465c: 0xc05ca00  jal         func_172800
    ctx->pc = 0x17465Cu;
    SET_GPR_U32(ctx, 31, 0x174664u);
    ctx->pc = 0x174660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17465Cu;
            // 0x174660: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172800u;
    if (runtime->hasFunction(0x172800u)) {
        auto targetFn = runtime->lookupFunction(0x172800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174664u; }
        if (ctx->pc != 0x174664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PatchMSH_0x172800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174664u; }
        if (ctx->pc != 0x174664u) { return; }
    }
    ctx->pc = 0x174664u;
    // 0x174664: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x174664u;
    SET_GPR_U32(ctx, 31, 0x17466Cu);
    ctx->pc = 0x174668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174664u;
            // 0x174668: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17466Cu; }
        if (ctx->pc != 0x17466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17466Cu; }
        if (ctx->pc != 0x17466Cu) { return; }
    }
    ctx->pc = 0x17466Cu;
    // 0x17466c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174670: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x174674: 0x8c222798  lw          $v0, 0x2798($at)
    ctx->pc = 0x174674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10136)));
    // 0x174678: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x174678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17467c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17467Cu;
    {
        const bool branch_taken_0x17467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17467c) {
            ctx->pc = 0x174650u;
            goto label_174650;
        }
    }
    ctx->pc = 0x174684u;
    // 0x174684: 0x0  nop
    ctx->pc = 0x174684u;
    // NOP
label_174688:
    // 0x174688: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17468c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174690: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174690u;
    SET_GPR_U32(ctx, 31, 0x174698u);
    ctx->pc = 0x174694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174690u;
            // 0x174694: 0x24841af0  addiu       $a0, $a0, 0x1AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174698u; }
        if (ctx->pc != 0x174698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174698u; }
        if (ctx->pc != 0x174698u) { return; }
    }
    ctx->pc = 0x174698u;
    // 0x174698: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x174698u;
    SET_GPR_U32(ctx, 31, 0x1746A0u);
    ctx->pc = 0x17469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174698u;
            // 0x17469c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746A0u; }
        if (ctx->pc != 0x1746A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746A0u; }
        if (ctx->pc != 0x1746A0u) { return; }
    }
    ctx->pc = 0x1746A0u;
    // 0x1746a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1746a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1746a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1746a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1746a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1746a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1746ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1746acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1746b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1746B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746B4u;
            // 0x1746b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174650u: goto label_174650;
            case 0x174688u: goto label_174688;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1746BCu;
}
