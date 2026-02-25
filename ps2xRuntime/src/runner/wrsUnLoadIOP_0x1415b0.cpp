#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsUnLoadIOP
// Address: 0x1415b0 - 0x141668
void wrsUnLoadIOP_0x1415b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsUnLoadIOP_0x1415b0");
#endif

    ctx->pc = 0x1415b0u;

    // 0x1415b0: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x1415b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1415b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1415b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1415bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1415bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1415c0: 0xc04c52a  jal         func_1314A8
    ctx->pc = 0x1415C0u;
    SET_GPR_U32(ctx, 31, 0x1415C8u);
    ctx->pc = 0x1415C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1415C0u;
            // 0x1415c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314A8u;
    if (runtime->hasFunction(0x1314A8u)) {
        auto targetFn = runtime->lookupFunction(0x1314A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415C8u; }
        if (ctx->pc != 0x1415C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x1314a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415C8u; }
        if (ctx->pc != 0x1415C8u) { return; }
    }
    ctx->pc = 0x1415C8u;
    // 0x1415c8: 0xc04d6ee  jal         func_135BB8
    ctx->pc = 0x1415C8u;
    SET_GPR_U32(ctx, 31, 0x1415D0u);
    ctx->pc = 0x135BB8u;
    if (runtime->hasFunction(0x135BB8u)) {
        auto targetFn = runtime->lookupFunction(0x135BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415D0u; }
        if (ctx->pc != 0x1415D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x135bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415D0u; }
        if (ctx->pc != 0x1415D0u) { return; }
    }
    ctx->pc = 0x1415D0u;
    // 0x1415d0: 0xc04d8a6  jal         func_136298
    ctx->pc = 0x1415D0u;
    SET_GPR_U32(ctx, 31, 0x1415D8u);
    ctx->pc = 0x136298u;
    if (runtime->hasFunction(0x136298u)) {
        auto targetFn = runtime->lookupFunction(0x136298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415D8u; }
        if (ctx->pc != 0x1415D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadFileReset_0x136298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1415D8u; }
        if (ctx->pc != 0x1415D8u) { return; }
    }
    ctx->pc = 0x1415D8u;
    // 0x1415d8: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x1415d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x1415dc: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1415dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1415e0: 0x2610790c  addiu       $s0, $s0, 0x790C
    ctx->pc = 0x1415e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30988));
    // 0x1415e4: 0x0  nop
    ctx->pc = 0x1415e4u;
    // NOP
label_1415e8:
    // 0x1415e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1415e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1415ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1415f0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1415F0u;
    {
        const bool branch_taken_0x1415f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1415F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1415F0u;
            // 0x1415f4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415f0) {
            ctx->pc = 0x141648u;
            goto label_141648;
        }
    }
    ctx->pc = 0x1415F8u;
    // 0x1415f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1415f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415fc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1415FCu;
    SET_GPR_U32(ctx, 31, 0x141604u);
    ctx->pc = 0x141600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1415FCu;
            // 0x141600: 0x248406c8  addiu       $a0, $a0, 0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141604u; }
        if (ctx->pc != 0x141604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141604u; }
        if (ctx->pc != 0x141604u) { return; }
    }
    ctx->pc = 0x141604u;
    // 0x141604: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x141604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14160c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14160cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141610: 0xc04d936  jal         func_1364D8
    ctx->pc = 0x141610u;
    SET_GPR_U32(ctx, 31, 0x141618u);
    ctx->pc = 0x141614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141610u;
            // 0x141614: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1364D8u;
    if (runtime->hasFunction(0x1364D8u)) {
        auto targetFn = runtime->lookupFunction(0x1364D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141618u; }
        if (ctx->pc != 0x141618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifStopModule_0x1364d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141618u; }
        if (ctx->pc != 0x141618u) { return; }
    }
    ctx->pc = 0x141618u;
    // 0x141618: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14161c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14161cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141620: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x141620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    // 0x141624: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141624u;
    SET_GPR_U32(ctx, 31, 0x14162Cu);
    ctx->pc = 0x141628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141624u;
            // 0x141628: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14162Cu; }
        if (ctx->pc != 0x14162Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14162Cu; }
        if (ctx->pc != 0x14162Cu) { return; }
    }
    ctx->pc = 0x14162Cu;
    // 0x14162c: 0xc04d9b8  jal         func_1366E0
    ctx->pc = 0x14162Cu;
    SET_GPR_U32(ctx, 31, 0x141634u);
    ctx->pc = 0x141630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14162Cu;
            // 0x141630: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1366E0u;
    if (runtime->hasFunction(0x1366E0u)) {
        auto targetFn = runtime->lookupFunction(0x1366E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141634u; }
        if (ctx->pc != 0x141634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifUnloadModule_0x1366e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141634u; }
        if (ctx->pc != 0x141634u) { return; }
    }
    ctx->pc = 0x141634u;
    // 0x141634: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x141638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14163c: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x141640: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141640u;
    SET_GPR_U32(ctx, 31, 0x141648u);
    ctx->pc = 0x141644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141640u;
            // 0x141644: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141648u; }
        if (ctx->pc != 0x141648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141648u; }
        if (ctx->pc != 0x141648u) { return; }
    }
    ctx->pc = 0x141648u;
label_141648:
    // 0x141648: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x141648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14164c: 0x621ffe6  bgez        $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14164Cu;
    {
        const bool branch_taken_0x14164c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x141650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14164Cu;
            // 0x141650: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14164c) {
            ctx->pc = 0x1415E8u;
            goto label_1415e8;
        }
    }
    ctx->pc = 0x141654u;
    // 0x141654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14165c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14165cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141660: 0x3e00008  jr          $ra
    ctx->pc = 0x141660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141660u;
            // 0x141664: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1415E8u: goto label_1415e8;
            case 0x141648u: goto label_141648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141668u;
}
