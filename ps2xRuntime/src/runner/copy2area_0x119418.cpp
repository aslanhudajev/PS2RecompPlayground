#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: copy2area
// Address: 0x119418 - 0x119550
void copy2area_0x119418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119418u;

    // 0x119418: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x119418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11941c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x119420: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119424: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x119424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11942c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119430: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x119430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x119434: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x119434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119438: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x119438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11943c: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x11943cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x119440: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119444: 0x216f021  addu        $fp, $s0, $s6
    ctx->pc = 0x119444u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x119448: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11944c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x11944cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119450: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119454: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x119454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119458: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x119458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11945c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x11945cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119460: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119464: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x119464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119468: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x119468u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x11946c: 0x14e0002c  bnez        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x11946Cu;
    {
        const bool branch_taken_0x11946c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x119470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11946Cu;
            // 0x119470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11946c) {
            ctx->pc = 0x119520u;
            goto label_119520;
        }
    }
    ctx->pc = 0x119474u;
    // 0x119474: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x119474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x119478: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x119478u;
    {
        const bool branch_taken_0x119478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119478u;
            // 0x11947c: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119478) {
            ctx->pc = 0x1194BCu;
            goto label_1194bc;
        }
    }
    ctx->pc = 0x119480u;
    // 0x119480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119488: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x119488u;
    SET_GPR_U32(ctx, 31, 0x119490u);
    ctx->pc = 0x11948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119488u;
            // 0x11948c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119490u; }
        if (ctx->pc != 0x119490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119490u; }
        if (ctx->pc != 0x119490u) { return; }
    }
    ctx->pc = 0x119490u;
    // 0x119490: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x119490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x119494: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119498: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x119498u;
    SET_GPR_U32(ctx, 31, 0x1194A0u);
    ctx->pc = 0x11949Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119498u;
            // 0x11949c: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194A0u; }
        if (ctx->pc != 0x1194A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194A0u; }
        if (ctx->pc != 0x1194A0u) { return; }
    }
    ctx->pc = 0x1194A0u;
    // 0x1194a0: 0x2f02021  addu        $a0, $s7, $s0
    ctx->pc = 0x1194a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1194a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1194a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194a8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1194a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1194ac: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x1194ACu;
    SET_GPR_U32(ctx, 31, 0x1194B4u);
    ctx->pc = 0x1194B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1194ACu;
            // 0x1194b0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194B4u; }
        if (ctx->pc != 0x1194B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194B4u; }
        if (ctx->pc != 0x1194B4u) { return; }
    }
    ctx->pc = 0x1194B4u;
    // 0x1194b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1194B4u;
    {
        const bool branch_taken_0x1194b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194B4u;
            // 0x1194b8: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194b4) {
            ctx->pc = 0x119520u;
            goto label_119520;
        }
    }
    ctx->pc = 0x1194BCu;
label_1194bc:
    // 0x1194bc: 0x2d3102a  slt         $v0, $s6, $s3
    ctx->pc = 0x1194bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1194c0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1194C0u;
    {
        const bool branch_taken_0x1194c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1194C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194C0u;
            // 0x1194c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194c0) {
            ctx->pc = 0x119500u;
            goto label_119500;
        }
    }
    ctx->pc = 0x1194C8u;
    // 0x1194c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1194c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194cc: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x1194CCu;
    SET_GPR_U32(ctx, 31, 0x1194D4u);
    ctx->pc = 0x1194D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1194CCu;
            // 0x1194d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194D4u; }
        if (ctx->pc != 0x1194D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194D4u; }
        if (ctx->pc != 0x1194D4u) { return; }
    }
    ctx->pc = 0x1194D4u;
    // 0x1194d4: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x1194d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1194d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1194d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194dc: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x1194DCu;
    SET_GPR_U32(ctx, 31, 0x1194E4u);
    ctx->pc = 0x1194E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1194DCu;
            // 0x1194e0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194E4u; }
        if (ctx->pc != 0x1194E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194E4u; }
        if (ctx->pc != 0x1194E4u) { return; }
    }
    ctx->pc = 0x1194E4u;
    // 0x1194e4: 0x2b12821  addu        $a1, $s5, $s1
    ctx->pc = 0x1194e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1194e8: 0x2d33023  subu        $a2, $s6, $s3
    ctx->pc = 0x1194e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1194ec: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x1194ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1194f0: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x1194F0u;
    SET_GPR_U32(ctx, 31, 0x1194F8u);
    ctx->pc = 0x1194F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1194F0u;
            // 0x1194f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194F8u; }
        if (ctx->pc != 0x1194F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1194F8u; }
        if (ctx->pc != 0x1194F8u) { return; }
    }
    ctx->pc = 0x1194F8u;
    // 0x1194f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1194F8u;
    {
        const bool branch_taken_0x1194f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1194F8u;
            // 0x1194fc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194f8) {
            ctx->pc = 0x119520u;
            goto label_119520;
        }
    }
    ctx->pc = 0x119500u;
label_119500:
    // 0x119500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119504: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x119504u;
    SET_GPR_U32(ctx, 31, 0x11950Cu);
    ctx->pc = 0x119508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119504u;
            // 0x119508: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11950Cu; }
        if (ctx->pc != 0x11950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11950Cu; }
        if (ctx->pc != 0x11950Cu) { return; }
    }
    ctx->pc = 0x11950Cu;
    // 0x11950c: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x11950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x119510: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x119510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119514: 0xc04ac33  jal         func_12B0CC
    ctx->pc = 0x119514u;
    SET_GPR_U32(ctx, 31, 0x11951Cu);
    ctx->pc = 0x119518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119514u;
            // 0x119518: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B0CCu;
    if (runtime->hasFunction(0x12B0CCu)) {
        auto targetFn = runtime->lookupFunction(0x12B0CCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11951Cu; }
        if (ctx->pc != 0x11951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x12b0cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11951Cu; }
        if (ctx->pc != 0x11951Cu) { return; }
    }
    ctx->pc = 0x11951Cu;
    // 0x11951c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x11951cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_119520:
    // 0x119520: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x119520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119524: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x119524u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119528: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x119528u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11952c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11952cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119530: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119534: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119534u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119538: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11953c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11953cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119540: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119548: 0x3e00008  jr          $ra
    ctx->pc = 0x119548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119548u;
            // 0x11954c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1194BCu: goto label_1194bc;
            case 0x119500u: goto label_119500;
            case 0x119520u: goto label_119520;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119550u;
}
