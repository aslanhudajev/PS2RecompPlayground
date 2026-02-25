#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimAddF
// Address: 0x1717c0 - 0x171afc
void wrsPrimAddF_0x1717c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimAddF_0x1717c0");
#endif

    ctx->pc = 0x1717c0u;

    // 0x1717c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1717c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1717c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1717c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1717c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1717c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1717cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1717ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1717d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1717d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1717d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1717d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1717d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1717d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1717dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1717dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717e0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1717e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1717e4: 0xc042054  jal         func_108150
    ctx->pc = 0x1717E4u;
    SET_GPR_U32(ctx, 31, 0x1717ECu);
    ctx->pc = 0x1717E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717E4u;
            // 0x1717e8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108150u;
    if (runtime->hasFunction(0x108150u)) {
        auto targetFn = runtime->lookupFunction(0x108150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ECu; }
        if (ctx->pc != 0x1717ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkPacketSize_0x108150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ECu; }
        if (ctx->pc != 0x1717ECu) { return; }
    }
    ctx->pc = 0x1717ECu;
    // 0x1717ec: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1717ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1717f0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1717f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1717f4: 0xc042ace  jal         func_10AB38
    ctx->pc = 0x1717F4u;
    SET_GPR_U32(ctx, 31, 0x1717FCu);
    ctx->pc = 0x1717F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717F4u;
            // 0x1717f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB38u;
    if (runtime->hasFunction(0x10AB38u)) {
        auto targetFn = runtime->lookupFunction(0x10AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717FCu; }
        if (ctx->pc != 0x1717FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkNumPtoV_0x10ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717FCu; }
        if (ctx->pc != 0x1717FCu) { return; }
    }
    ctx->pc = 0x1717FCu;
    // 0x1717fc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1717fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x171800: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x171800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x171804: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x171804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x171808: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x171808u;
    SET_GPR_U32(ctx, 31, 0x171810u);
    ctx->pc = 0x17180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171808u;
            // 0x17180c: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171810u; }
        if (ctx->pc != 0x171810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171810u; }
        if (ctx->pc != 0x171810u) { return; }
    }
    ctx->pc = 0x171810u;
    // 0x171810: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171814: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x171814u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x171818: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x171818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x17181c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17181cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x171820: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x171820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171824: 0x24e73970  addiu       $a3, $a3, 0x3970
    ctx->pc = 0x171824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14704));
    // 0x171828: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x171828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17182c: 0x2463f980  addiu       $v1, $v1, -0x680
    ctx->pc = 0x17182cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965632));
    // 0x171830: 0x24423980  addiu       $v0, $v0, 0x3980
    ctx->pc = 0x171830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14720));
    // 0x171834: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x171838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17183c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x17183cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x171840: 0x38890001  xori        $t1, $a0, 0x1
    ctx->pc = 0x171840u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x171844: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x171844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x171848: 0x922c0  sll         $a0, $t1, 11
    ctx->pc = 0x171848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x17184c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x17184cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x171850: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x171850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x171854: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171858: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x171858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x17185c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x171860: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x171860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x171864: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x171864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171868: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x171868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x17186c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x17186cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x171870: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x171870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x171874: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x171874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x171878: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x171878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17187c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x17187cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x171880: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x171880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171884: 0xc0420a6  jal         func_108298
    ctx->pc = 0x171884u;
    SET_GPR_U32(ctx, 31, 0x17188Cu);
    ctx->pc = 0x171888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171884u;
            // 0x171888: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17188Cu; }
        if (ctx->pc != 0x17188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17188Cu; }
        if (ctx->pc != 0x17188Cu) { return; }
    }
    ctx->pc = 0x17188Cu;
    // 0x17188c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17188cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171890: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x171894: 0xc0420f8  jal         func_1083E0
    ctx->pc = 0x171894u;
    SET_GPR_U32(ctx, 31, 0x17189Cu);
    ctx->pc = 0x171898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171894u;
            // 0x171898: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083E0u;
    if (runtime->hasFunction(0x1083E0u)) {
        auto targetFn = runtime->lookupFunction(0x1083E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17189Cu; }
        if (ctx->pc != 0x17189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPrimR_0x1083e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17189Cu; }
        if (ctx->pc != 0x17189Cu) { return; }
    }
    ctx->pc = 0x17189Cu;
    // 0x17189c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17189cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1718a0: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1718a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1718a4: 0xc0420a6  jal         func_108298
    ctx->pc = 0x1718A4u;
    SET_GPR_U32(ctx, 31, 0x1718ACu);
    ctx->pc = 0x1718A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718A4u;
            // 0x1718a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718ACu; }
        if (ctx->pc != 0x1718ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718ACu; }
        if (ctx->pc != 0x1718ACu) { return; }
    }
    ctx->pc = 0x1718ACu;
    // 0x1718ac: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1718acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1718b0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1718b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1718b4: 0xc04278e  jal         func_109E38
    ctx->pc = 0x1718B4u;
    SET_GPR_U32(ctx, 31, 0x1718BCu);
    ctx->pc = 0x1718B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718B4u;
            // 0x1718b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E38u;
    if (runtime->hasFunction(0x109E38u)) {
        auto targetFn = runtime->lookupFunction(0x109E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718BCu; }
        if (ctx->pc != 0x1718BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetAlphaEnvFunc_0x109e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718BCu; }
        if (ctx->pc != 0x1718BCu) { return; }
    }
    ctx->pc = 0x1718BCu;
    // 0x1718bc: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x1718bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x1718c0: 0xde840010  ld          $a0, 0x10($s4)
    ctx->pc = 0x1718c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1718c4: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x1718c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x1718c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1718c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1718cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1718ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1718d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1718d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1718d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1718d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1718d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1718d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1718dc: 0x419b8  dsll        $v1, $a0, 6
    ctx->pc = 0x1718dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 6);
    // 0x1718e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1718e0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1718e4: 0x31d7e  dsrl32      $v1, $v1, 21
    ctx->pc = 0x1718e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 21));
    // 0x1718e8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1718e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x1718ec: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1718ecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
    // 0x1718f0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1718f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1718f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1718f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1718f8: 0xfe820010  sd          $v0, 0x10($s4)
    ctx->pc = 0x1718f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 2));
    // 0x1718fc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1718fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x171900: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x171900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171904: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x171904u;
    {
        const bool branch_taken_0x171904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171904u;
            // 0x171908: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171904) {
            ctx->pc = 0x171978u;
            goto label_171978;
        }
    }
    ctx->pc = 0x17190Cu;
    // 0x17190c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17190cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171910:
    // 0x171910: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x171910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171914: 0xc042a66  jal         func_10A998
    ctx->pc = 0x171914u;
    SET_GPR_U32(ctx, 31, 0x17191Cu);
    ctx->pc = 0x171918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171914u;
            // 0x171918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A998u;
    if (runtime->hasFunction(0x10A998u)) {
        auto targetFn = runtime->lookupFunction(0x10A998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17191Cu; }
        if (ctx->pc != 0x17191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexRgba_0x10a998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17191Cu; }
        if (ctx->pc != 0x17191Cu) { return; }
    }
    ctx->pc = 0x17191Cu;
    // 0x17191c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17191cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x171920: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x171920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x171924: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x171928: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x17192c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171930: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x171930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171934: 0xa0620040  sb          $v0, 0x40($v1)
    ctx->pc = 0x171934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x171938: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17193c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171940: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x171940u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x171944: 0xa0620041  sb          $v0, 0x41($v1)
    ctx->pc = 0x171944u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x171948: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17194c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171950: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x171950u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x171954: 0xa0620042  sb          $v0, 0x42($v1)
    ctx->pc = 0x171954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x171958: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17195c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171960: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x171960u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x171964: 0xa0620043  sb          $v0, 0x43($v1)
    ctx->pc = 0x171964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 2));
    // 0x171968: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x171968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17196c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17196cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171970: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x171970u;
    {
        const bool branch_taken_0x171970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171970u;
            // 0x171974: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171970) {
            ctx->pc = 0x171910u;
            goto label_171910;
        }
    }
    ctx->pc = 0x171978u;
label_171978:
    // 0x171978: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17197c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x17197cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171980: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x171980u;
    {
        const bool branch_taken_0x171980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171980u;
            // 0x171984: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171980) {
            ctx->pc = 0x171A70u;
            goto label_171a70;
        }
    }
    ctx->pc = 0x171988u;
    // 0x171988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17198c: 0x0  nop
    ctx->pc = 0x17198cu;
    // NOP
label_171990:
    // 0x171990: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x171990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171994: 0xc042a98  jal         func_10AA60
    ctx->pc = 0x171994u;
    SET_GPR_U32(ctx, 31, 0x17199Cu);
    ctx->pc = 0x171998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171994u;
            // 0x171998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA60u;
    if (runtime->hasFunction(0x10AA60u)) {
        auto targetFn = runtime->lookupFunction(0x10AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17199Cu; }
        if (ctx->pc != 0x17199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexXyzf_0x10aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17199Cu; }
        if (ctx->pc != 0x17199Cu) { return; }
    }
    ctx->pc = 0x17199Cu;
    // 0x17199c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17199cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1719a0: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x1719a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x1719a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1719a8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1719a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1719ac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1719acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1719b0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1719b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1719b4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1719b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1719b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1719b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1719bc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1719bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1719c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1719c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1719c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1719c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1719c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1719c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1719cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1719ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1719d0: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x1719d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1719d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1719d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1719d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1719d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1719dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1719dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1719e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1719e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1719e4: 0x0  nop
    ctx->pc = 0x1719e4u;
    // NOP
    // 0x1719e8: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x1719e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x1719ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1719ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1719f0: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x1719f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x1719f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1719f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1719f8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1719f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1719fc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1719fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171a04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171a04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171a08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171a0c: 0x0  nop
    ctx->pc = 0x171a0cu;
    // NOP
    // 0x171a10: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x171a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x171a14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x171a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x171a18: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x171a18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x171a1c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x171a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x171a20: 0xdc440040  ld          $a0, 0x40($v0)
    ctx->pc = 0x171a20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171a24: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x171a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x171a28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x171a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a2c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x171a2cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x171a30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171a34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171a38: 0x0  nop
    ctx->pc = 0x171a38u;
    // NOP
    // 0x171a3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x171a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171a40: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x171a40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x171a44: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x171a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x171a48: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x171a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x171a4c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x171a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171a50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171a50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x171a54: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x171a54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x171a58: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x171a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x171a5c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x171a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x171a60: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x171a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171a64: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x171A64u;
    {
        const bool branch_taken_0x171a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A64u;
            // 0x171a68: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a64) {
            ctx->pc = 0x171990u;
            goto label_171990;
        }
    }
    ctx->pc = 0x171A6Cu;
    // 0x171a6c: 0x0  nop
    ctx->pc = 0x171a6cu;
    // NOP
label_171a70:
    // 0x171a70: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171a74: 0x8c237670  lw          $v1, 0x7670($at)
    ctx->pc = 0x171a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171a78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x171a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x171a7c: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x171a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x171a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a84: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x171a84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171a88: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x171a88u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x171a8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x171a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171a90: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x171A90u;
    SET_GPR_U32(ctx, 31, 0x171A98u);
    ctx->pc = 0x171A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A90u;
            // 0x171a94: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A98u; }
        if (ctx->pc != 0x171A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpGetTailChain_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A98u; }
        if (ctx->pc != 0x171A98u) { return; }
    }
    ctx->pc = 0x171A98u;
    // 0x171a98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x171a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a9c: 0xc041ca6  jal         func_107298
    ctx->pc = 0x171A9Cu;
    SET_GPR_U32(ctx, 31, 0x171AA4u);
    ctx->pc = 0x171AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A9Cu;
            // 0x171aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AA4u; }
        if (ctx->pc != 0x171AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AA4u; }
        if (ctx->pc != 0x171AA4u) { return; }
    }
    ctx->pc = 0x171AA4u;
    // 0x171aa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171aa8: 0xc041ca6  jal         func_107298
    ctx->pc = 0x171AA8u;
    SET_GPR_U32(ctx, 31, 0x171AB0u);
    ctx->pc = 0x171AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171AA8u;
            // 0x171aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AB0u; }
        if (ctx->pc != 0x171AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171AB0u; }
        if (ctx->pc != 0x171AB0u) { return; }
    }
    ctx->pc = 0x171AB0u;
    // 0x171ab0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171ab4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x171ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x171ab8: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x171ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171abc: 0x24633970  addiu       $v1, $v1, 0x3970
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14704));
    // 0x171ac0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x171ac0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x171ac4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x171ac4u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x171ac8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x171ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x171acc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x171accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171ad0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171ad4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x171ad8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x171ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x171adc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x171adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171ae0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x171ae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171ae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x171ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171ae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171af4: 0x3e00008  jr          $ra
    ctx->pc = 0x171AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AF4u;
            // 0x171af8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171910u: goto label_171910;
            case 0x171978u: goto label_171978;
            case 0x171990u: goto label_171990;
            case 0x171A70u: goto label_171a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171AFCu;
}
