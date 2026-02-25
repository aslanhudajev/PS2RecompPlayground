#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _Cdvd_cbLoop
// Address: 0x1037a0 - 0x103870
void ps2__Cdvd_cbLoop_0x1037a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__Cdvd_cbLoop_0x1037a0");
#endif

    ctx->pc = 0x1037a0u;

label_1037a0:
    // 0x1037a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1037a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1037a4:
    // 0x1037a4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1037a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1037a8:
    // 0x1037a8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1037a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1037ac:
    // 0x1037ac: 0x3c1e0022  lui         $fp, 0x22
    ctx->pc = 0x1037acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)34 << 16));
label_1037b0:
    // 0x1037b0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1037b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1037b4:
    // 0x1037b4: 0x3c170021  lui         $s7, 0x21
    ctx->pc = 0x1037b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33 << 16));
label_1037b8:
    // 0x1037b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1037b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1037bc:
    // 0x1037bc: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x1037bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
label_1037c0:
    // 0x1037c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1037c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1037c4:
    // 0x1037c4: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1037c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1037c8:
    // 0x1037c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1037c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1037cc:
    // 0x1037cc: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x1037ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
label_1037d0:
    // 0x1037d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1037d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1037d4:
    // 0x1037d4: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x1037d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_1037d8:
    // 0x1037d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1037d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1037dc:
    // 0x1037dc: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1037dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
label_1037e0:
    // 0x1037e0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1037e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1037e4:
    // 0x1037e4: 0x3c110021  lui         $s1, 0x21
    ctx->pc = 0x1037e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
label_1037e8:
    // 0x1037e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1037e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1037ec:
    // 0x1037ec: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1037ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1037f0:
    // 0x1037f0: 0xc04bb28  jal         func_12ECA0
label_1037f4:
    if (ctx->pc == 0x1037F4u) {
        ctx->pc = 0x1037F4u;
            // 0x1037f4: 0x8c44da20  lw          $a0, -0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957600)));
        ctx->pc = 0x1037F8u;
        goto label_1037f8;
    }
    ctx->pc = 0x1037F0u;
    SET_GPR_U32(ctx, 31, 0x1037F8u);
    ctx->pc = 0x1037F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1037F0u;
            // 0x1037f4: 0x8c44da20  lw          $a0, -0x25E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1037F8u; }
        if (ctx->pc != 0x1037F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1037F8u; }
        if (ctx->pc != 0x1037F8u) { return; }
    }
    ctx->pc = 0x1037F8u;
label_1037f8:
    // 0x1037f8: 0x8e83da58  lw          $v1, -0x25A8($s4)
    ctx->pc = 0x1037f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294957656)));
label_1037fc:
    // 0x1037fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1037fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103800:
    // 0x103800: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_103804:
    if (ctx->pc == 0x103804u) {
        ctx->pc = 0x103804u;
            // 0x103804: 0x8ee2da10  lw          $v0, -0x25F0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294957584)));
        ctx->pc = 0x103808u;
        goto label_103808;
    }
    ctx->pc = 0x103800u;
    {
        const bool branch_taken_0x103800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103800u;
            // 0x103804: 0x8ee2da10  lw          $v0, -0x25F0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294957584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103800) {
            ctx->pc = 0x103824u;
            goto label_103824;
        }
    }
    ctx->pc = 0x103808u;
label_103808:
    // 0x103808: 0xae60da34  sw          $zero, -0x25CC($s3)
    ctx->pc = 0x103808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294957620), GPR_U32(ctx, 0));
label_10380c:
    // 0x10380c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_103810:
    // 0x103810: 0xae80da58  sw          $zero, -0x25A8($s4)
    ctx->pc = 0x103810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294957656), GPR_U32(ctx, 0));
label_103814:
    // 0x103814: 0x0  nop
    ctx->pc = 0x103814u;
    // NOP
label_103818:
    // 0x103818: 0xc04baa8  jal         func_12EAA0
label_10381c:
    if (ctx->pc == 0x10381Cu) {
        ctx->pc = 0x10381Cu;
            // 0x10381c: 0xafc038d4  sw          $zero, 0x38D4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 14548), GPR_U32(ctx, 0));
        ctx->pc = 0x103820u;
        goto label_103820;
    }
    ctx->pc = 0x103818u;
    SET_GPR_U32(ctx, 31, 0x103820u);
    ctx->pc = 0x10381Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103818u;
            // 0x10381c: 0xafc038d4  sw          $zero, 0x38D4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 14548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EAA0u;
    if (runtime->hasFunction(0x12EAA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103820u; }
        if (ctx->pc != 0x103820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExitDeleteThread_0x12eaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103820u; }
        if (ctx->pc != 0x103820u) { return; }
    }
    ctx->pc = 0x103820u;
label_103820:
    // 0x103820: 0x8ee2da10  lw          $v0, -0x25F0($s7)
    ctx->pc = 0x103820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294957584)));
label_103824:
    // 0x103824: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_103828:
    if (ctx->pc == 0x103828u) {
        ctx->pc = 0x103828u;
            // 0x103828: 0x26c4c300  addiu       $a0, $s6, -0x3D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951680));
        ctx->pc = 0x10382Cu;
        goto label_10382c;
    }
    ctx->pc = 0x103824u;
    {
        const bool branch_taken_0x103824 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x103828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103824u;
            // 0x103828: 0x26c4c300  addiu       $a0, $s6, -0x3D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103824) {
            ctx->pc = 0x103838u;
            goto label_103838;
        }
    }
    ctx->pc = 0x10382Cu;
label_10382c:
    // 0x10382c: 0x8e4538c0  lw          $a1, 0x38C0($s2)
    ctx->pc = 0x10382cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14528)));
label_103830:
    // 0x103830: 0xc04c340  jal         func_130D00
label_103834:
    if (ctx->pc == 0x103834u) {
        ctx->pc = 0x103834u;
            // 0x103834: 0x8e26da5c  lw          $a2, -0x25A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957660)));
        ctx->pc = 0x103838u;
        goto label_103838;
    }
    ctx->pc = 0x103830u;
    SET_GPR_U32(ctx, 31, 0x103838u);
    ctx->pc = 0x103834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103830u;
            // 0x103834: 0x8e26da5c  lw          $a2, -0x25A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957660)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103838u; }
        if (ctx->pc != 0x103838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x130d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103838u; }
        if (ctx->pc != 0x103838u) { return; }
    }
    ctx->pc = 0x103838u;
label_103838:
    // 0x103838: 0x8e4338c0  lw          $v1, 0x38C0($s2)
    ctx->pc = 0x103838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14528)));
label_10383c:
    // 0x10383c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_103840:
    if (ctx->pc == 0x103840u) {
        ctx->pc = 0x103844u;
        goto label_103844;
    }
    ctx->pc = 0x10383Cu;
    {
        const bool branch_taken_0x10383c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10383c) {
            ctx->pc = 0x103864u;
            goto label_103864;
        }
    }
    ctx->pc = 0x103844u;
label_103844:
    // 0x103844: 0x8e22da5c  lw          $v0, -0x25A4($s1)
    ctx->pc = 0x103844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957660)));
label_103848:
    // 0x103848: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10384c:
    if (ctx->pc == 0x10384Cu) {
        ctx->pc = 0x103850u;
        goto label_103850;
    }
    ctx->pc = 0x103848u;
    {
        const bool branch_taken_0x103848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103848) {
            ctx->pc = 0x103864u;
            goto label_103864;
        }
    }
    ctx->pc = 0x103850u;
label_103850:
    // 0x103850: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x103850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_103854:
    // 0x103854: 0x8ebc38c4  lw          $gp, 0x38C4($s5)
    ctx->pc = 0x103854u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14532)));
label_103858:
    // 0x103858: 0x60f809  jalr        $v1
label_10385c:
    if (ctx->pc == 0x10385Cu) {
        ctx->pc = 0x10385Cu;
            // 0x10385c: 0x8e24da5c  lw          $a0, -0x25A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957660)));
        ctx->pc = 0x103860u;
        goto label_103860;
    }
    ctx->pc = 0x103858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103860u);
        ctx->pc = 0x10385Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103858u;
            // 0x10385c: 0x8e24da5c  lw          $a0, -0x25A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957660)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1037A0u: goto label_1037a0;
            case 0x1037A4u: goto label_1037a4;
            case 0x1037A8u: goto label_1037a8;
            case 0x1037ACu: goto label_1037ac;
            case 0x1037B0u: goto label_1037b0;
            case 0x1037B4u: goto label_1037b4;
            case 0x1037B8u: goto label_1037b8;
            case 0x1037BCu: goto label_1037bc;
            case 0x1037C0u: goto label_1037c0;
            case 0x1037C4u: goto label_1037c4;
            case 0x1037C8u: goto label_1037c8;
            case 0x1037CCu: goto label_1037cc;
            case 0x1037D0u: goto label_1037d0;
            case 0x1037D4u: goto label_1037d4;
            case 0x1037D8u: goto label_1037d8;
            case 0x1037DCu: goto label_1037dc;
            case 0x1037E0u: goto label_1037e0;
            case 0x1037E4u: goto label_1037e4;
            case 0x1037E8u: goto label_1037e8;
            case 0x1037ECu: goto label_1037ec;
            case 0x1037F0u: goto label_1037f0;
            case 0x1037F4u: goto label_1037f4;
            case 0x1037F8u: goto label_1037f8;
            case 0x1037FCu: goto label_1037fc;
            case 0x103800u: goto label_103800;
            case 0x103804u: goto label_103804;
            case 0x103808u: goto label_103808;
            case 0x10380Cu: goto label_10380c;
            case 0x103810u: goto label_103810;
            case 0x103814u: goto label_103814;
            case 0x103818u: goto label_103818;
            case 0x10381Cu: goto label_10381c;
            case 0x103820u: goto label_103820;
            case 0x103824u: goto label_103824;
            case 0x103828u: goto label_103828;
            case 0x10382Cu: goto label_10382c;
            case 0x103830u: goto label_103830;
            case 0x103834u: goto label_103834;
            case 0x103838u: goto label_103838;
            case 0x10383Cu: goto label_10383c;
            case 0x103840u: goto label_103840;
            case 0x103844u: goto label_103844;
            case 0x103848u: goto label_103848;
            case 0x10384Cu: goto label_10384c;
            case 0x103850u: goto label_103850;
            case 0x103854u: goto label_103854;
            case 0x103858u: goto label_103858;
            case 0x10385Cu: goto label_10385c;
            case 0x103860u: goto label_103860;
            case 0x103864u: goto label_103864;
            case 0x103868u: goto label_103868;
            case 0x10386Cu: goto label_10386c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x103860u; }
            if (ctx->pc != 0x103860u) { return; }
        }
    }
    ctx->pc = 0x103860u;
label_103860:
    // 0x103860: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x103860u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103864:
    // 0x103864: 0xae60da34  sw          $zero, -0x25CC($s3)
    ctx->pc = 0x103864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294957620), GPR_U32(ctx, 0));
label_103868:
    // 0x103868: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_10386c:
    if (ctx->pc == 0x10386Cu) {
        ctx->pc = 0x10386Cu;
            // 0x10386c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->pc = 0x103870u;
        goto label_fallthrough_0x103868;
    }
    ctx->pc = 0x103868u;
    {
        const bool branch_taken_0x103868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103868u;
            // 0x10386c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103868) {
            ctx->pc = 0x1037F0u;
            goto label_1037f0;
        }
    }
label_fallthrough_0x103868:
    ctx->pc = 0x103870u;
}
