#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _Cdvd_cbLoop
// Address: 0x1177b0 - 0x11786c
void ps2__Cdvd_cbLoop_0x1177b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1177b0u;

label_1177b0:
    // 0x1177b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1177b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1177b4:
    // 0x1177b4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1177b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1177b8:
    // 0x1177b8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1177b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1177bc:
    // 0x1177bc: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x1177bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
label_1177c0:
    // 0x1177c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1177c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1177c4:
    // 0x1177c4: 0x3c170017  lui         $s7, 0x17
    ctx->pc = 0x1177c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)23 << 16));
label_1177c8:
    // 0x1177c8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1177c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1177cc:
    // 0x1177cc: 0x3c160018  lui         $s6, 0x18
    ctx->pc = 0x1177ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)24 << 16));
label_1177d0:
    // 0x1177d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1177d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1177d4:
    // 0x1177d4: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x1177d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
label_1177d8:
    // 0x1177d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1177d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1177dc:
    // 0x1177dc: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x1177dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
label_1177e0:
    // 0x1177e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1177e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1177e4:
    // 0x1177e4: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x1177e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
label_1177e8:
    // 0x1177e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1177e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1177ec:
    // 0x1177ec: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
label_1177f0:
    // 0x1177f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1177f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1177f4:
    // 0x1177f4: 0x3c110018  lui         $s1, 0x18
    ctx->pc = 0x1177f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24 << 16));
label_1177f8:
    // 0x1177f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1177f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1177fc:
    // 0x1177fc: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x1177fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
label_117800:
    // 0x117800: 0xc0438b8  jal         func_10E2E0
label_117804:
    if (ctx->pc == 0x117804u) {
        ctx->pc = 0x117804u;
            // 0x117804: 0x8fc4fca0  lw          $a0, -0x360($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966432)));
        ctx->pc = 0x117808u;
        goto label_117808;
    }
    ctx->pc = 0x117800u;
    SET_GPR_U32(ctx, 31, 0x117808u);
    ctx->pc = 0x117804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117800u;
            // 0x117804: 0x8fc4fca0  lw          $a0, -0x360($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117808u; }
        if (ctx->pc != 0x117808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117808u; }
        if (ctx->pc != 0x117808u) { return; }
    }
    ctx->pc = 0x117808u;
label_117808:
    // 0x117808: 0x8e63fcd4  lw          $v1, -0x32C($s3)
    ctx->pc = 0x117808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966484)));
label_11780c:
    // 0x11780c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117810:
    // 0x117810: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_117814:
    if (ctx->pc == 0x117814u) {
        ctx->pc = 0x117814u;
            // 0x117814: 0x8ea2fc90  lw          $v0, -0x370($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294966416)));
        ctx->pc = 0x117818u;
        goto label_117818;
    }
    ctx->pc = 0x117810u;
    {
        const bool branch_taken_0x117810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117810u;
            // 0x117814: 0x8ea2fc90  lw          $v0, -0x370($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294966416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117810) {
            ctx->pc = 0x117830u;
            goto label_117830;
        }
    }
    ctx->pc = 0x117818u;
label_117818:
    // 0x117818: 0xae40fcb0  sw          $zero, -0x350($s2)
    ctx->pc = 0x117818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966448), GPR_U32(ctx, 0));
label_11781c:
    // 0x11781c: 0xae60fcd4  sw          $zero, -0x32C($s3)
    ctx->pc = 0x11781cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966484), GPR_U32(ctx, 0));
label_117820:
    // 0x117820: 0xaee0fc94  sw          $zero, -0x36C($s7)
    ctx->pc = 0x117820u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294966420), GPR_U32(ctx, 0));
label_117824:
    // 0x117824: 0xc043838  jal         func_10E0E0
label_117828:
    if (ctx->pc == 0x117828u) {
        ctx->pc = 0x117828u;
            // 0x117828: 0xaec0c08c  sw          $zero, -0x3F74($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294951052), GPR_U32(ctx, 0));
        ctx->pc = 0x11782Cu;
        goto label_11782c;
    }
    ctx->pc = 0x117824u;
    SET_GPR_U32(ctx, 31, 0x11782Cu);
    ctx->pc = 0x117828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117824u;
            // 0x117828: 0xaec0c08c  sw          $zero, -0x3F74($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294951052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0E0u;
    if (runtime->hasFunction(0x10E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11782Cu; }
        if (ctx->pc != 0x11782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExitDeleteThread_0x10e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11782Cu; }
        if (ctx->pc != 0x11782Cu) { return; }
    }
    ctx->pc = 0x11782Cu;
label_11782c:
    // 0x11782c: 0x8ea2fc90  lw          $v0, -0x370($s5)
    ctx->pc = 0x11782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294966416)));
label_117830:
    // 0x117830: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_117834:
    if (ctx->pc == 0x117834u) {
        ctx->pc = 0x117834u;
            // 0x117834: 0x26844218  addiu       $a0, $s4, 0x4218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16920));
        ctx->pc = 0x117838u;
        goto label_117838;
    }
    ctx->pc = 0x117830u;
    {
        const bool branch_taken_0x117830 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x117834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117830u;
            // 0x117834: 0x26844218  addiu       $a0, $s4, 0x4218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117830) {
            ctx->pc = 0x117844u;
            goto label_117844;
        }
    }
    ctx->pc = 0x117838u;
label_117838:
    // 0x117838: 0x8e25c080  lw          $a1, -0x3F80($s1)
    ctx->pc = 0x117838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951040)));
label_11783c:
    // 0x11783c: 0xc043ef8  jal         func_10FBE0
label_117840:
    if (ctx->pc == 0x117840u) {
        ctx->pc = 0x117840u;
            // 0x117840: 0x8e06fcd8  lw          $a2, -0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966488)));
        ctx->pc = 0x117844u;
        goto label_117844;
    }
    ctx->pc = 0x11783Cu;
    SET_GPR_U32(ctx, 31, 0x117844u);
    ctx->pc = 0x117840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11783Cu;
            // 0x117840: 0x8e06fcd8  lw          $a2, -0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FBE0u;
    if (runtime->hasFunction(0x10FBE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117844u; }
        if (ctx->pc != 0x117844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x10fbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117844u; }
        if (ctx->pc != 0x117844u) { return; }
    }
    ctx->pc = 0x117844u;
label_117844:
    // 0x117844: 0x8e23c080  lw          $v1, -0x3F80($s1)
    ctx->pc = 0x117844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951040)));
label_117848:
    // 0x117848: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_11784c:
    if (ctx->pc == 0x11784Cu) {
        ctx->pc = 0x117850u;
        goto label_117850;
    }
    ctx->pc = 0x117848u;
    {
        const bool branch_taken_0x117848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117848) {
            ctx->pc = 0x117864u;
            goto label_117864;
        }
    }
    ctx->pc = 0x117850u;
label_117850:
    // 0x117850: 0x8e02fcd8  lw          $v0, -0x328($s0)
    ctx->pc = 0x117850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966488)));
label_117854:
    // 0x117854: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_117858:
    if (ctx->pc == 0x117858u) {
        ctx->pc = 0x11785Cu;
        goto label_11785c;
    }
    ctx->pc = 0x117854u;
    {
        const bool branch_taken_0x117854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117854) {
            ctx->pc = 0x117864u;
            goto label_117864;
        }
    }
    ctx->pc = 0x11785Cu;
label_11785c:
    // 0x11785c: 0x60f809  jalr        $v1
label_117860:
    if (ctx->pc == 0x117860u) {
        ctx->pc = 0x117860u;
            // 0x117860: 0x8e04fcd8  lw          $a0, -0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966488)));
        ctx->pc = 0x117864u;
        goto label_117864;
    }
    ctx->pc = 0x11785Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x117864u);
        ctx->pc = 0x117860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11785Cu;
            // 0x117860: 0x8e04fcd8  lw          $a0, -0x328($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966488)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1177B0u: goto label_1177b0;
            case 0x1177B4u: goto label_1177b4;
            case 0x1177B8u: goto label_1177b8;
            case 0x1177BCu: goto label_1177bc;
            case 0x1177C0u: goto label_1177c0;
            case 0x1177C4u: goto label_1177c4;
            case 0x1177C8u: goto label_1177c8;
            case 0x1177CCu: goto label_1177cc;
            case 0x1177D0u: goto label_1177d0;
            case 0x1177D4u: goto label_1177d4;
            case 0x1177D8u: goto label_1177d8;
            case 0x1177DCu: goto label_1177dc;
            case 0x1177E0u: goto label_1177e0;
            case 0x1177E4u: goto label_1177e4;
            case 0x1177E8u: goto label_1177e8;
            case 0x1177ECu: goto label_1177ec;
            case 0x1177F0u: goto label_1177f0;
            case 0x1177F4u: goto label_1177f4;
            case 0x1177F8u: goto label_1177f8;
            case 0x1177FCu: goto label_1177fc;
            case 0x117800u: goto label_117800;
            case 0x117804u: goto label_117804;
            case 0x117808u: goto label_117808;
            case 0x11780Cu: goto label_11780c;
            case 0x117810u: goto label_117810;
            case 0x117814u: goto label_117814;
            case 0x117818u: goto label_117818;
            case 0x11781Cu: goto label_11781c;
            case 0x117820u: goto label_117820;
            case 0x117824u: goto label_117824;
            case 0x117828u: goto label_117828;
            case 0x11782Cu: goto label_11782c;
            case 0x117830u: goto label_117830;
            case 0x117834u: goto label_117834;
            case 0x117838u: goto label_117838;
            case 0x11783Cu: goto label_11783c;
            case 0x117840u: goto label_117840;
            case 0x117844u: goto label_117844;
            case 0x117848u: goto label_117848;
            case 0x11784Cu: goto label_11784c;
            case 0x117850u: goto label_117850;
            case 0x117854u: goto label_117854;
            case 0x117858u: goto label_117858;
            case 0x11785Cu: goto label_11785c;
            case 0x117860u: goto label_117860;
            case 0x117864u: goto label_117864;
            case 0x117868u: goto label_117868;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117864u; }
            if (ctx->pc != 0x117864u) { return; }
        }
    }
    ctx->pc = 0x117864u;
label_117864:
    // 0x117864: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_117868:
    if (ctx->pc == 0x117868u) {
        ctx->pc = 0x117868u;
            // 0x117868: 0xae40fcb0  sw          $zero, -0x350($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294966448), GPR_U32(ctx, 0));
        ctx->pc = 0x11786Cu;
        goto label_fallthrough_0x117864;
    }
    ctx->pc = 0x117864u;
    {
        const bool branch_taken_0x117864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117864u;
            // 0x117868: 0xae40fcb0  sw          $zero, -0x350($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294966448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117864) {
            ctx->pc = 0x117800u;
            goto label_117800;
        }
    }
label_fallthrough_0x117864:
    ctx->pc = 0x11786Cu;
}
