#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: anime_init
// Address: 0x119890 - 0x119a58
void anime_init_0x119890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("anime_init_0x119890");
#endif

    ctx->pc = 0x119890u;

    // 0x119890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x119890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119894: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x119894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x119898: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11989c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1198a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1198a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1198a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198a8: 0xdc45e750  ld          $a1, -0x18B0($v0)
    ctx->pc = 0x1198a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960976)));
    // 0x1198ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1198acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1198b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1198b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1198b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1198b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1198b8: 0xc047220  jal         func_11C880
    ctx->pc = 0x1198B8u;
    SET_GPR_U32(ctx, 31, 0x1198C0u);
    ctx->pc = 0x1198BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198B8u;
            // 0x1198bc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C880u;
    if (runtime->hasFunction(0x11C880u)) {
        auto targetFn = runtime->lookupFunction(0x11C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198C0u; }
        if (ctx->pc != 0x1198C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetHead_0x11c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198C0u; }
        if (ctx->pc != 0x1198C0u) { return; }
    }
    ctx->pc = 0x1198C0u;
    // 0x1198c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1198C0u;
    {
        const bool branch_taken_0x1198c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198C0u;
            // 0x1198c4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198c0) {
            ctx->pc = 0x119914u;
            goto label_119914;
        }
    }
    ctx->pc = 0x1198C8u;
    // 0x1198c8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1198c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1198cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1198ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198d0: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1198D0u;
    SET_GPR_U32(ctx, 31, 0x1198D8u);
    ctx->pc = 0x1198D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198D0u;
            // 0x1198d4: 0xdc45e768  ld          $a1, -0x1898($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198D8u; }
        if (ctx->pc != 0x1198D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198D8u; }
        if (ctx->pc != 0x1198D8u) { return; }
    }
    ctx->pc = 0x1198D8u;
    // 0x1198d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1198D8u;
    {
        const bool branch_taken_0x1198d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198D8u;
            // 0x1198dc: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198d8) {
            ctx->pc = 0x119914u;
            goto label_119914;
        }
    }
    ctx->pc = 0x1198E0u;
    // 0x1198e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1198e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1198e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1198e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198e8: 0xc047220  jal         func_11C880
    ctx->pc = 0x1198E8u;
    SET_GPR_U32(ctx, 31, 0x1198F0u);
    ctx->pc = 0x1198ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198E8u;
            // 0x1198ec: 0xdc45e758  ld          $a1, -0x18A8($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C880u;
    if (runtime->hasFunction(0x11C880u)) {
        auto targetFn = runtime->lookupFunction(0x11C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198F0u; }
        if (ctx->pc != 0x1198F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetHead_0x11c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198F0u; }
        if (ctx->pc != 0x1198F0u) { return; }
    }
    ctx->pc = 0x1198F0u;
    // 0x1198f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1198f4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1198F4u;
    {
        const bool branch_taken_0x1198f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198F4u;
            // 0x1198f8: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198f4) {
            ctx->pc = 0x119914u;
            goto label_119914;
        }
    }
    ctx->pc = 0x1198FCu;
    // 0x1198fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1198fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119900: 0xc047220  jal         func_11C880
    ctx->pc = 0x119900u;
    SET_GPR_U32(ctx, 31, 0x119908u);
    ctx->pc = 0x119904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119900u;
            // 0x119904: 0xdc45e760  ld          $a1, -0x18A0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C880u;
    if (runtime->hasFunction(0x11C880u)) {
        auto targetFn = runtime->lookupFunction(0x11C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119908u; }
        if (ctx->pc != 0x119908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetHead_0x11c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119908u; }
        if (ctx->pc != 0x119908u) { return; }
    }
    ctx->pc = 0x119908u;
    // 0x119908: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x119908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11990c: 0x56800005  bnel        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11990Cu;
    {
        const bool branch_taken_0x11990c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x11990c) {
            ctx->pc = 0x119910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11990Cu;
            // 0x119910: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119924u;
            goto label_119924;
        }
    }
    ctx->pc = 0x119914u;
label_119914:
    // 0x119914: 0xc046618  jal         func_119860
    ctx->pc = 0x119914u;
    SET_GPR_U32(ctx, 31, 0x11991Cu);
    ctx->pc = 0x119918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119914u;
            // 0x119918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119860u;
    if (runtime->hasFunction(0x119860u)) {
        auto targetFn = runtime->lookupFunction(0x119860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11991Cu; }
        if (ctx->pc != 0x11991Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_anime_err_0x119860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11991Cu; }
        if (ctx->pc != 0x11991Cu) { return; }
    }
    ctx->pc = 0x11991Cu;
    // 0x11991c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11991Cu;
    {
        const bool branch_taken_0x11991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11991Cu;
            // 0x119920: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11991c) {
            ctx->pc = 0x119A3Cu;
            goto label_119a3c;
        }
    }
    ctx->pc = 0x119924u;
label_119924:
    // 0x119924: 0xc043530  jal         func_10D4C0
    ctx->pc = 0x119924u;
    SET_GPR_U32(ctx, 31, 0x11992Cu);
    ctx->pc = 0x119928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119924u;
            // 0x119928: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4C0u;
    if (runtime->hasFunction(0x10D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11992Cu; }
        if (ctx->pc != 0x11992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlloc_0x10d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11992Cu; }
        if (ctx->pc != 0x11992Cu) { return; }
    }
    ctx->pc = 0x11992Cu;
    // 0x11992c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x11992cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x119930: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x119930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x119934: 0xc043530  jal         func_10D4C0
    ctx->pc = 0x119934u;
    SET_GPR_U32(ctx, 31, 0x11993Cu);
    ctx->pc = 0x119938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119934u;
            // 0x119938: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4C0u;
    if (runtime->hasFunction(0x10D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11993Cu; }
        if (ctx->pc != 0x11993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlloc_0x10d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11993Cu; }
        if (ctx->pc != 0x11993Cu) { return; }
    }
    ctx->pc = 0x11993Cu;
    // 0x11993c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x11993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x119940: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x119940u;
    {
        const bool branch_taken_0x119940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119940u;
            // 0x119944: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119940) {
            ctx->pc = 0x1199BCu;
            goto label_1199bc;
        }
    }
    ctx->pc = 0x119948u;
    // 0x119948: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11994c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11994Cu;
    {
        const bool branch_taken_0x11994c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x119950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11994Cu;
            // 0x119950: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11994c) {
            ctx->pc = 0x1199A8u;
            goto label_1199a8;
        }
    }
    ctx->pc = 0x119954u;
    // 0x119954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_119958:
    // 0x119958: 0xc04722e  jal         func_11C8B8
    ctx->pc = 0x119958u;
    SET_GPR_U32(ctx, 31, 0x119960u);
    ctx->pc = 0x11995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119958u;
            // 0x11995c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C8B8u;
    if (runtime->hasFunction(0x11C8B8u)) {
        auto targetFn = runtime->lookupFunction(0x11C8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119960u; }
        if (ctx->pc != 0x119960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetKeyHead_0x11c8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119960u; }
        if (ctx->pc != 0x119960u) { return; }
    }
    ctx->pc = 0x119960u;
    // 0x119960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119964: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x119964u;
    {
        const bool branch_taken_0x119964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x119968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119964u;
            // 0x119968: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119964) {
            ctx->pc = 0x1199CCu;
            goto label_1199cc;
        }
    }
    ctx->pc = 0x11996Cu;
    // 0x11996c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x11996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x119970: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x119970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119978: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11997c: 0xc04723a  jal         func_11C8E8
    ctx->pc = 0x11997Cu;
    SET_GPR_U32(ctx, 31, 0x119984u);
    ctx->pc = 0x119980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11997Cu;
            // 0x119980: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C8E8u;
    if (runtime->hasFunction(0x11C8E8u)) {
        auto targetFn = runtime->lookupFunction(0x11C8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119984u; }
        if (ctx->pc != 0x119984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetFrame_0x11c8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119984u; }
        if (ctx->pc != 0x119984u) { return; }
    }
    ctx->pc = 0x119984u;
    // 0x119984: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x119984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x119988: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x119988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11998c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11998Cu;
    {
        const bool branch_taken_0x11998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11998Cu;
            // 0x119990: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11998c) {
            ctx->pc = 0x1199CCu;
            goto label_1199cc;
        }
    }
    ctx->pc = 0x119994u;
    // 0x119994: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x119994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x119998: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x119998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11999c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11999cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1199a0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1199A0u;
    {
        const bool branch_taken_0x1199a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1199a0) {
            ctx->pc = 0x1199A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1199A0u;
            // 0x1199a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119958u;
            goto label_119958;
        }
    }
    ctx->pc = 0x1199A8u;
label_1199a8:
    // 0x1199a8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1199a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1199ac: 0xc043530  jal         func_10D4C0
    ctx->pc = 0x1199ACu;
    SET_GPR_U32(ctx, 31, 0x1199B4u);
    ctx->pc = 0x1199B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1199ACu;
            // 0x1199b0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4C0u;
    if (runtime->hasFunction(0x10D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199B4u; }
        if (ctx->pc != 0x1199B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlloc_0x10d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199B4u; }
        if (ctx->pc != 0x1199B4u) { return; }
    }
    ctx->pc = 0x1199B4u;
    // 0x1199b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1199B4u;
    {
        const bool branch_taken_0x1199b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1199B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199B4u;
            // 0x1199b8: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199b4) {
            ctx->pc = 0x1199DCu;
            goto label_1199dc;
        }
    }
    ctx->pc = 0x1199BCu;
label_1199bc:
    // 0x1199bc: 0xc046618  jal         func_119860
    ctx->pc = 0x1199BCu;
    SET_GPR_U32(ctx, 31, 0x1199C4u);
    ctx->pc = 0x1199C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1199BCu;
            // 0x1199c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119860u;
    if (runtime->hasFunction(0x119860u)) {
        auto targetFn = runtime->lookupFunction(0x119860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199C4u; }
        if (ctx->pc != 0x1199C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_anime_err_0x119860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199C4u; }
        if (ctx->pc != 0x1199C4u) { return; }
    }
    ctx->pc = 0x1199C4u;
    // 0x1199c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1199C4u;
    {
        const bool branch_taken_0x1199c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199C4u;
            // 0x1199c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199c4) {
            ctx->pc = 0x119A3Cu;
            goto label_119a3c;
        }
    }
    ctx->pc = 0x1199CCu;
label_1199cc:
    // 0x1199cc: 0xc046618  jal         func_119860
    ctx->pc = 0x1199CCu;
    SET_GPR_U32(ctx, 31, 0x1199D4u);
    ctx->pc = 0x1199D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1199CCu;
            // 0x1199d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119860u;
    if (runtime->hasFunction(0x119860u)) {
        auto targetFn = runtime->lookupFunction(0x119860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199D4u; }
        if (ctx->pc != 0x1199D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_anime_err_0x119860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199D4u; }
        if (ctx->pc != 0x1199D4u) { return; }
    }
    ctx->pc = 0x1199D4u;
    // 0x1199d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1199D4u;
    {
        const bool branch_taken_0x1199d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199D4u;
            // 0x1199d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d4) {
            ctx->pc = 0x119A3Cu;
            goto label_119a3c;
        }
    }
    ctx->pc = 0x1199DCu;
label_1199dc:
    // 0x1199dc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1199e0: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1199E0u;
    {
        const bool branch_taken_0x1199e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1199E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199E0u;
            // 0x1199e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199e0) {
            ctx->pc = 0x119A34u;
            goto label_119a34;
        }
    }
    ctx->pc = 0x1199E8u;
    // 0x1199e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1199e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199ec: 0x0  nop
    ctx->pc = 0x1199ecu;
    // NOP
label_1199f0:
    // 0x1199f0: 0xc04722e  jal         func_11C8B8
    ctx->pc = 0x1199F0u;
    SET_GPR_U32(ctx, 31, 0x1199F8u);
    ctx->pc = 0x1199F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1199F0u;
            // 0x1199f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C8B8u;
    if (runtime->hasFunction(0x11C8B8u)) {
        auto targetFn = runtime->lookupFunction(0x11C8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199F8u; }
        if (ctx->pc != 0x1199F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetKeyHead_0x11c8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199F8u; }
        if (ctx->pc != 0x1199F8u) { return; }
    }
    ctx->pc = 0x1199F8u;
    // 0x1199f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1199f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199fc: 0x1080fff3  beqz        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1199FCu;
    {
        const bool branch_taken_0x1199fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1199fc) {
            ctx->pc = 0x1199CCu;
            goto label_1199cc;
        }
    }
    ctx->pc = 0x119A04u;
    // 0x119a04: 0xc04723e  jal         func_11C8F8
    ctx->pc = 0x119A04u;
    SET_GPR_U32(ctx, 31, 0x119A0Cu);
    ctx->pc = 0x119A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A04u;
            // 0x119a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C8F8u;
    if (runtime->hasFunction(0x11C8F8u)) {
        auto targetFn = runtime->lookupFunction(0x11C8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A0Cu; }
        if (ctx->pc != 0x119A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugAnimeGetValue_0x11c8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A0Cu; }
        if (ctx->pc != 0x119A0Cu) { return; }
    }
    ctx->pc = 0x119A0Cu;
    // 0x119a0c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x119a10: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x119a14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x119a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x119a18: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x119A18u;
    {
        const bool branch_taken_0x119a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A18u;
            // 0x119a1c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a18) {
            ctx->pc = 0x1199CCu;
            goto label_1199cc;
        }
    }
    ctx->pc = 0x119A20u;
    // 0x119a20: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x119a24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x119a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x119a28: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x119a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x119a2c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x119A2Cu;
    {
        const bool branch_taken_0x119a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119a2c) {
            ctx->pc = 0x119A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119A2Cu;
            // 0x119a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1199F0u;
            goto label_1199f0;
        }
    }
    ctx->pc = 0x119A34u;
label_119a34:
    // 0x119a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x119a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_119a3c:
    // 0x119a3c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119a3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119a40: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119a44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119a48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119a50: 0x3e00008  jr          $ra
    ctx->pc = 0x119A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119A50u;
            // 0x119a54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119914u: goto label_119914;
            case 0x119924u: goto label_119924;
            case 0x119958u: goto label_119958;
            case 0x1199A8u: goto label_1199a8;
            case 0x1199BCu: goto label_1199bc;
            case 0x1199CCu: goto label_1199cc;
            case 0x1199DCu: goto label_1199dc;
            case 0x1199F0u: goto label_1199f0;
            case 0x119A34u: goto label_119a34;
            case 0x119A3Cu: goto label_119a3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119A58u;
}
