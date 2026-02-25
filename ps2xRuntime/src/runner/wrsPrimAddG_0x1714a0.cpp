#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimAddG
// Address: 0x1714a0 - 0x1717c0
void wrsPrimAddG_0x1714a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimAddG_0x1714a0");
#endif

    ctx->pc = 0x1714a0u;

    // 0x1714a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1714a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1714a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1714a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1714a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1714ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1714acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1714b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1714b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1714b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1714b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1714b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1714bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1714bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1714c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1714c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1714c4: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x1714c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1714c8: 0xc042054  jal         func_108150
    ctx->pc = 0x1714C8u;
    SET_GPR_U32(ctx, 31, 0x1714D0u);
    ctx->pc = 0x1714CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1714C8u;
            // 0x1714cc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108150u;
    if (runtime->hasFunction(0x108150u)) {
        auto targetFn = runtime->lookupFunction(0x108150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714D0u; }
        if (ctx->pc != 0x1714D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkPacketSize_0x108150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714D0u; }
        if (ctx->pc != 0x1714D0u) { return; }
    }
    ctx->pc = 0x1714D0u;
    // 0x1714d0: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1714d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1714d4: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x1714d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1714d8: 0xc042ace  jal         func_10AB38
    ctx->pc = 0x1714D8u;
    SET_GPR_U32(ctx, 31, 0x1714E0u);
    ctx->pc = 0x1714DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1714D8u;
            // 0x1714dc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB38u;
    if (runtime->hasFunction(0x10AB38u)) {
        auto targetFn = runtime->lookupFunction(0x10AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714E0u; }
        if (ctx->pc != 0x1714E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkNumPtoV_0x10ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714E0u; }
        if (ctx->pc != 0x1714E0u) { return; }
    }
    ctx->pc = 0x1714E0u;
    // 0x1714e0: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1714e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1714e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1714e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1714e8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1714ec: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x1714ECu;
    SET_GPR_U32(ctx, 31, 0x1714F4u);
    ctx->pc = 0x1714F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1714ECu;
            // 0x1714f0: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714F4u; }
        if (ctx->pc != 0x1714F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1714F4u; }
        if (ctx->pc != 0x1714F4u) { return; }
    }
    ctx->pc = 0x1714F4u;
    // 0x1714f4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1714f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1714f8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1714f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1714fc: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x1714fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171500: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x171500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x171504: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x171504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171508: 0x24e73970  addiu       $a3, $a3, 0x3970
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14704));
    // 0x17150c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x171510: 0x2463f980  addiu       $v1, $v1, -0x680
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965632));
    // 0x171514: 0x24423980  addiu       $v0, $v0, 0x3980
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14720));
    // 0x171518: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x171518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17151c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17151cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171520: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x171520u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x171524: 0x38890001  xori        $t1, $a0, 0x1
    ctx->pc = 0x171524u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x171528: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x171528u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x17152c: 0x922c0  sll         $a0, $t1, 11
    ctx->pc = 0x17152cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x171530: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x171530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x171534: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x171534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x171538: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x171538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17153c: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x17153cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x171540: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x171544: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x171544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x171548: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x171548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17154c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x171550: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x171550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x171554: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x171558: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x171558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x17155c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x17155cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x171560: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x171560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x171564: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x171564u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171568: 0xc0420a6  jal         func_108298
    ctx->pc = 0x171568u;
    SET_GPR_U32(ctx, 31, 0x171570u);
    ctx->pc = 0x17156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171568u;
            // 0x17156c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171570u; }
        if (ctx->pc != 0x171570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171570u; }
        if (ctx->pc != 0x171570u) { return; }
    }
    ctx->pc = 0x171570u;
    // 0x171570: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x171570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x171574: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x171574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x171578: 0xc0420f8  jal         func_1083E0
    ctx->pc = 0x171578u;
    SET_GPR_U32(ctx, 31, 0x171580u);
    ctx->pc = 0x17157Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171578u;
            // 0x17157c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083E0u;
    if (runtime->hasFunction(0x1083E0u)) {
        auto targetFn = runtime->lookupFunction(0x1083E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171580u; }
        if (ctx->pc != 0x171580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPrimR_0x1083e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171580u; }
        if (ctx->pc != 0x171580u) { return; }
    }
    ctx->pc = 0x171580u;
    // 0x171580: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x171580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x171584: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x171588: 0xc0420a6  jal         func_108298
    ctx->pc = 0x171588u;
    SET_GPR_U32(ctx, 31, 0x171590u);
    ctx->pc = 0x17158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171588u;
            // 0x17158c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171590u; }
        if (ctx->pc != 0x171590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171590u; }
        if (ctx->pc != 0x171590u) { return; }
    }
    ctx->pc = 0x171590u;
    // 0x171590: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x171590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x171594: 0x8ea60024  lw          $a2, 0x24($s5)
    ctx->pc = 0x171594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x171598: 0xc04278e  jal         func_109E38
    ctx->pc = 0x171598u;
    SET_GPR_U32(ctx, 31, 0x1715A0u);
    ctx->pc = 0x17159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171598u;
            // 0x17159c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E38u;
    if (runtime->hasFunction(0x109E38u)) {
        auto targetFn = runtime->lookupFunction(0x109E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715A0u; }
        if (ctx->pc != 0x1715A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetAlphaEnvFunc_0x109e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1715A0u; }
        if (ctx->pc != 0x1715A0u) { return; }
    }
    ctx->pc = 0x1715A0u;
    // 0x1715a0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x1715a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x1715a4: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x1715a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1715a8: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x1715a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x1715ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1715acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1715b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1715b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1715b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1715b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1715b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1715b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1715bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1715bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1715c0: 0x419b8  dsll        $v1, $a0, 6
    ctx->pc = 0x1715c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 6);
    // 0x1715c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1715c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1715c8: 0x31d7e  dsrl32      $v1, $v1, 21
    ctx->pc = 0x1715c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 21));
    // 0x1715cc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1715ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x1715d0: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1715d0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
    // 0x1715d4: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1715d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1715d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1715d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1715dc: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x1715dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x1715e0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1715e4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1715e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1715e8: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x1715E8u;
    {
        const bool branch_taken_0x1715e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1715E8u;
            // 0x1715ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715e8) {
            ctx->pc = 0x171730u;
            goto label_171730;
        }
    }
    ctx->pc = 0x1715F0u;
    // 0x1715f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1715f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1715f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1715f8:
    // 0x1715f8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1715f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1715fc: 0xc042a66  jal         func_10A998
    ctx->pc = 0x1715FCu;
    SET_GPR_U32(ctx, 31, 0x171604u);
    ctx->pc = 0x171600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1715FCu;
            // 0x171600: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A998u;
    if (runtime->hasFunction(0x10A998u)) {
        auto targetFn = runtime->lookupFunction(0x10A998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171604u; }
        if (ctx->pc != 0x171604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexRgba_0x10a998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171604u; }
        if (ctx->pc != 0x171604u) { return; }
    }
    ctx->pc = 0x171604u;
    // 0x171604: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x171604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x171608: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x171608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17160c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x17160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x171610: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171614: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x171614u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171618: 0xa0620040  sb          $v0, 0x40($v1)
    ctx->pc = 0x171618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x17161c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x171620: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171624: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x171624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x171628: 0xa0620041  sb          $v0, 0x41($v1)
    ctx->pc = 0x171628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x17162c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x171630: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171634: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x171634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x171638: 0xa0620042  sb          $v0, 0x42($v1)
    ctx->pc = 0x171638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x17163c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x171640: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171644: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x171644u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x171648: 0xa0620043  sb          $v0, 0x43($v1)
    ctx->pc = 0x171648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 2));
    // 0x17164c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x17164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x171650: 0xc042a98  jal         func_10AA60
    ctx->pc = 0x171650u;
    SET_GPR_U32(ctx, 31, 0x171658u);
    ctx->pc = 0x171654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171650u;
            // 0x171654: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA60u;
    if (runtime->hasFunction(0x10AA60u)) {
        auto targetFn = runtime->lookupFunction(0x10AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171658u; }
        if (ctx->pc != 0x171658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexXyzf_0x10aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171658u; }
        if (ctx->pc != 0x171658u) { return; }
    }
    ctx->pc = 0x171658u;
    // 0x171658: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x171658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17165c: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x17165cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x171660: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x171660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x171664: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x171664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x171668: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x171668u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17166c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x17166cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x171670: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x171670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x171674: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x171674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x171678: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x171678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17167c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x171680: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x171680u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x171684: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x171684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x171688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x171688u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x17168c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17168cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x171690: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x171690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171694: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x171694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171698: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17169c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17169cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1716a0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1716a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1716a4: 0x0  nop
    ctx->pc = 0x1716a4u;
    // NOP
    // 0x1716a8: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x1716a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x1716ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1716acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1716b0: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x1716b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x1716b4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1716b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1716b8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1716b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1716bc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1716bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1716c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1716c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1716c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1716c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1716c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1716cc: 0x0  nop
    ctx->pc = 0x1716ccu;
    // NOP
    // 0x1716d0: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x1716d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x1716d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1716d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1716d8: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x1716d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x1716dc: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1716e0: 0xdc440040  ld          $a0, 0x40($v0)
    ctx->pc = 0x1716e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1716e4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1716e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1716e8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1716e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1716ecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1716f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1716f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1716f4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1716f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1716f8: 0x0  nop
    ctx->pc = 0x1716f8u;
    // NOP
    // 0x1716fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1716fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171700: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x171700u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x171704: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x171704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x171708: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x171708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x17170c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17170cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171710: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171710u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x171714: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x171714u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x171718: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x171718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x17171c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x17171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x171720: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x171720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171724: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x171724u;
    {
        const bool branch_taken_0x171724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171724u;
            // 0x171728: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171724) {
            ctx->pc = 0x1715F8u;
            goto label_1715f8;
        }
    }
    ctx->pc = 0x17172Cu;
    // 0x17172c: 0x0  nop
    ctx->pc = 0x17172cu;
    // NOP
label_171730:
    // 0x171730: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171734: 0x8c237670  lw          $v1, 0x7670($at)
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171738: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x171738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17173c: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x171740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171744: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x171744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171748: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x171748u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x17174c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171750: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x171750u;
    SET_GPR_U32(ctx, 31, 0x171758u);
    ctx->pc = 0x171754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171750u;
            // 0x171754: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171758u; }
        if (ctx->pc != 0x171758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpGetTailChain_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171758u; }
        if (ctx->pc != 0x171758u) { return; }
    }
    ctx->pc = 0x171758u;
    // 0x171758: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17175c: 0xc041ca6  jal         func_107298
    ctx->pc = 0x17175Cu;
    SET_GPR_U32(ctx, 31, 0x171764u);
    ctx->pc = 0x171760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17175Cu;
            // 0x171760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171764u; }
        if (ctx->pc != 0x171764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171764u; }
        if (ctx->pc != 0x171764u) { return; }
    }
    ctx->pc = 0x171764u;
    // 0x171764: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x171764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171768: 0xc041ca6  jal         func_107298
    ctx->pc = 0x171768u;
    SET_GPR_U32(ctx, 31, 0x171770u);
    ctx->pc = 0x17176Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171768u;
            // 0x17176c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171770u; }
        if (ctx->pc != 0x171770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171770u; }
        if (ctx->pc != 0x171770u) { return; }
    }
    ctx->pc = 0x171770u;
    // 0x171770: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171774: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x171774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x171778: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x17177c: 0x24633970  addiu       $v1, $v1, 0x3970
    ctx->pc = 0x17177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14704));
    // 0x171780: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x171780u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x171784: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x171784u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x171788: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x171788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17178c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171790: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x171790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x171798: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x171798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17179c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17179cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1717a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1717a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1717a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1717a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1717a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1717a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1717ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1717acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1717b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1717b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1717b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1717b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1717b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1717B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1717BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1717B8u;
            // 0x1717bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1715F8u: goto label_1715f8;
            case 0x171730u: goto label_171730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1717C0u;
}
