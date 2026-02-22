#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoCallback
// Address: 0x119220 - 0x119340
void videoCallback_0x119220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119220u;

    // 0x119220: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x119220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x119224: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x119224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x119228: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x119228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11922c: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x11922cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)8u)));
    // 0x119230: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x119230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x119234: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x119234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119238: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x119238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11923c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x119240: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x119240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x119244: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x119244u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x119248: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x119248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11924c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11924cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119250: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x119250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x119254: 0x26d5e5c8  addiu       $s5, $s6, -0x1A38
    ctx->pc = 0x119254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960584));
    // 0x119258: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x119258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11925c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119260: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x119260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119264: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x119264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119268: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x119268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11926c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x11926cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
    // 0x119270: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x119270u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x119274: 0x37a8000c  ori         $t0, $sp, 0xC
    ctx->pc = 0x119274u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)12u)));
    // 0x119278: 0x8e91000c  lw          $s1, 0xC($s4)
    ctx->pc = 0x119278u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x11927c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11927cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x119280: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x119280u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x119284: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x119284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x119288: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x119288u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x11928c: 0xc046836  jal         func_11A0D8
    ctx->pc = 0x11928Cu;
    SET_GPR_U32(ctx, 31, 0x119294u);
    ctx->pc = 0x119290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11928Cu;
            // 0x119290: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0D8u;
    if (runtime->hasFunction(0x11A0D8u)) {
        auto targetFn = runtime->lookupFunction(0x11A0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119294u; }
        if (ctx->pc != 0x119294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x11a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119294u; }
        if (ctx->pc != 0x119294u) { return; }
    }
    ctx->pc = 0x119294u;
    // 0x119294: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x119294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119298: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x119298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11929c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x11929cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1192a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1192a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1192a4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1192a8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1192a8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1192ac: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1192acu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1192b0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1192b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1192b4: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1192b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1192b8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1192b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192bc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1192bcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x1192c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1192c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1192c4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1192c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192c8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1192c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192cc: 0xc046506  jal         func_119418
    ctx->pc = 0x1192CCu;
    SET_GPR_U32(ctx, 31, 0x1192D4u);
    ctx->pc = 0x1192D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1192CCu;
            // 0x1192d0: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119418u;
    if (runtime->hasFunction(0x119418u)) {
        auto targetFn = runtime->lookupFunction(0x119418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192D4u; }
        if (ctx->pc != 0x1192D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x119418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192D4u; }
        if (ctx->pc != 0x1192D4u) { return; }
    }
    ctx->pc = 0x1192D4u;
    // 0x1192d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1192d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d8: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1192D8u;
    {
        const bool branch_taken_0x1192d8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1192DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1192D8u;
            // 0x1192dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192d8) {
            ctx->pc = 0x119308u;
            goto label_119308;
        }
    }
    ctx->pc = 0x1192E0u;
    // 0x1192e0: 0xde860018  ld          $a2, 0x18($s4)
    ctx->pc = 0x1192e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1192e4: 0xde850010  ld          $a1, 0x10($s4)
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1192e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1192e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192ec: 0xc046856  jal         func_11A158
    ctx->pc = 0x1192ECu;
    SET_GPR_U32(ctx, 31, 0x1192F4u);
    ctx->pc = 0x1192F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1192ECu;
            // 0x1192f0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A158u;
    if (runtime->hasFunction(0x11A158u)) {
        auto targetFn = runtime->lookupFunction(0x11A158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192F4u; }
        if (ctx->pc != 0x1192F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecPutTs_0x11a158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192F4u; }
        if (ctx->pc != 0x1192F4u) { return; }
    }
    ctx->pc = 0x1192F4u;
    // 0x1192f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1192F4u;
    {
        const bool branch_taken_0x1192f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1192f4) {
            ctx->pc = 0x1192F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1192F4u;
            // 0x1192f8: 0x26c4e5c8  addiu       $a0, $s6, -0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960584));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11930Cu;
            goto label_11930c;
        }
    }
    ctx->pc = 0x1192FCu;
    // 0x1192fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x119300: 0xc04647a  jal         func_1191E8
    ctx->pc = 0x119300u;
    SET_GPR_U32(ctx, 31, 0x119308u);
    ctx->pc = 0x119304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119300u;
            // 0x119304: 0x24844458  addiu       $a0, $a0, 0x4458 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1191E8u;
    if (runtime->hasFunction(0x1191E8u)) {
        auto targetFn = runtime->lookupFunction(0x1191E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119308u; }
        if (ctx->pc != 0x119308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x1191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119308u; }
        if (ctx->pc != 0x119308u) { return; }
    }
    ctx->pc = 0x119308u;
label_119308:
    // 0x119308: 0x26c4e5c8  addiu       $a0, $s6, -0x1A38
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960584));
label_11930c:
    // 0x11930c: 0xc046838  jal         func_11A0E0
    ctx->pc = 0x11930Cu;
    SET_GPR_U32(ctx, 31, 0x119314u);
    ctx->pc = 0x119310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11930Cu;
            // 0x119310: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0E0u;
    if (runtime->hasFunction(0x11A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x11A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119314u; }
        if (ctx->pc != 0x119314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x11a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119314u; }
        if (ctx->pc != 0x119314u) { return; }
    }
    ctx->pc = 0x119314u;
    // 0x119314: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x119314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119318: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x119318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11931c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11931cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119320: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x119320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119324: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x119324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119328: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x119328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11932c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11932cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119330: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119334: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119338: 0x3e00008  jr          $ra
    ctx->pc = 0x119338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119338u;
            // 0x11933c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119308u: goto label_119308;
            case 0x11930Cu: goto label_11930c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119340u;
}
