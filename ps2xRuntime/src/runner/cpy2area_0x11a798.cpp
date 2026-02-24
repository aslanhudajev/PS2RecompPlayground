#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cpy2area
// Address: 0x11a798 - 0x11a8d0
void cpy2area_0x11a798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cpy2area_0x11a798");
#endif

    ctx->pc = 0x11a798u;

    // 0x11a798: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11a798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11a79c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11a7a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a7a4: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x11a7a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a7ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x11a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x11a7b4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x11a7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11a7bc: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x11a7c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11a7c4: 0x216f021  addu        $fp, $s0, $s6
    ctx->pc = 0x11a7c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x11a7c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a7cc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x11a7ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a7d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11a7d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11a7dc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x11a7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a7e4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x11a7e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7e8: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x11a7e8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x11a7ec: 0x14e0002c  bnez        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x11A7ECu;
    {
        const bool branch_taken_0x11a7ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7ECu;
            // 0x11a7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7ec) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A7F4u;
    // 0x11a7f4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x11a7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11a7f8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A7F8u;
    {
        const bool branch_taken_0x11a7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7F8u;
            // 0x11a7fc: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7f8) {
            ctx->pc = 0x11A83Cu;
            goto label_11a83c;
        }
    }
    ctx->pc = 0x11A800u;
    // 0x11a800: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a804: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a808: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A808u;
    SET_GPR_U32(ctx, 31, 0x11A810u);
    ctx->pc = 0x11A80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A808u;
            // 0x11a80c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A810u; }
        if (ctx->pc != 0x11A810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A810u; }
        if (ctx->pc != 0x11A810u) { return; }
    }
    ctx->pc = 0x11A810u;
    // 0x11a810: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x11a810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a814: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a818: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A818u;
    SET_GPR_U32(ctx, 31, 0x11A820u);
    ctx->pc = 0x11A81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A818u;
            // 0x11a81c: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A820u; }
        if (ctx->pc != 0x11A820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A820u; }
        if (ctx->pc != 0x11A820u) { return; }
    }
    ctx->pc = 0x11A820u;
    // 0x11a820: 0x2f02021  addu        $a0, $s7, $s0
    ctx->pc = 0x11a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x11a824: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a828: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x11a828u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x11a82c: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A82Cu;
    SET_GPR_U32(ctx, 31, 0x11A834u);
    ctx->pc = 0x11A830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A82Cu;
            // 0x11a830: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A834u; }
        if (ctx->pc != 0x11A834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A834u; }
        if (ctx->pc != 0x11A834u) { return; }
    }
    ctx->pc = 0x11A834u;
    // 0x11a834: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11A834u;
    {
        const bool branch_taken_0x11a834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A834u;
            // 0x11a838: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a834) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A83Cu;
label_11a83c:
    // 0x11a83c: 0x2d3102a  slt         $v0, $s6, $s3
    ctx->pc = 0x11a83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11a840: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11A840u;
    {
        const bool branch_taken_0x11a840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A840u;
            // 0x11a844: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a840) {
            ctx->pc = 0x11A880u;
            goto label_11a880;
        }
    }
    ctx->pc = 0x11A848u;
    // 0x11a848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a84c: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A84Cu;
    SET_GPR_U32(ctx, 31, 0x11A854u);
    ctx->pc = 0x11A850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A84Cu;
            // 0x11a850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A854u; }
        if (ctx->pc != 0x11A854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A854u; }
        if (ctx->pc != 0x11A854u) { return; }
    }
    ctx->pc = 0x11A854u;
    // 0x11a854: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x11a854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x11a858: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a85c: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A85Cu;
    SET_GPR_U32(ctx, 31, 0x11A864u);
    ctx->pc = 0x11A860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A85Cu;
            // 0x11a860: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A864u; }
        if (ctx->pc != 0x11A864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A864u; }
        if (ctx->pc != 0x11A864u) { return; }
    }
    ctx->pc = 0x11A864u;
    // 0x11a864: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x11a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x11a868: 0x2d33023  subu        $a2, $s6, $s3
    ctx->pc = 0x11a868u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x11a86c: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x11a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x11a870: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A870u;
    SET_GPR_U32(ctx, 31, 0x11A878u);
    ctx->pc = 0x11A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A870u;
            // 0x11a874: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A878u; }
        if (ctx->pc != 0x11A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A878u; }
        if (ctx->pc != 0x11A878u) { return; }
    }
    ctx->pc = 0x11A878u;
    // 0x11a878: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11A878u;
    {
        const bool branch_taken_0x11a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A878u;
            // 0x11a87c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a878) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A880u;
label_11a880:
    // 0x11a880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a884: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A884u;
    SET_GPR_U32(ctx, 31, 0x11A88Cu);
    ctx->pc = 0x11A888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A884u;
            // 0x11a888: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A88Cu; }
        if (ctx->pc != 0x11A88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A88Cu; }
        if (ctx->pc != 0x11A88Cu) { return; }
    }
    ctx->pc = 0x11A88Cu;
    // 0x11a88c: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x11a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x11a890: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a894: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x11A894u;
    SET_GPR_U32(ctx, 31, 0x11A89Cu);
    ctx->pc = 0x11A898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A894u;
            // 0x11a898: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A89Cu; }
        if (ctx->pc != 0x11A89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A89Cu; }
        if (ctx->pc != 0x11A89Cu) { return; }
    }
    ctx->pc = 0x11A89Cu;
    // 0x11a89c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x11a89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11a8a0:
    // 0x11a8a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a8a4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x11a8a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a8a8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x11a8a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a8ac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11a8acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a8b0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11a8b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a8b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a8b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a8b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a8bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a8c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a8c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8C8u;
            // 0x11a8cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A83Cu: goto label_11a83c;
            case 0x11A880u: goto label_11a880;
            case 0x11A8A0u: goto label_11a8a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A8D0u;
}
