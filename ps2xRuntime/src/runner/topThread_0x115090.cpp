#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: topThread
// Address: 0x115090 - 0x115168
void topThread_0x115090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("topThread_0x115090");
#endif

    ctx->pc = 0x115090u;

    // 0x115090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x115090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x115094: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x115094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11509c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1150a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1150a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1150a4: 0x3c160018  lui         $s6, 0x18
    ctx->pc = 0x1150a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)24 << 16));
    // 0x1150a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1150a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1150ac: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x1150acu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x1150b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1150b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1150b4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1150b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1150b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1150b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1150bc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1150bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1150c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1150c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1150c4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1150c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1150c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1150c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1150cc: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x1150ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_1150d0:
    // 0x1150d0: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x1150D0u;
    SET_GPR_U32(ctx, 31, 0x1150D8u);
    ctx->pc = 0x1150D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1150D0u;
            // 0x1150d4: 0x8ec4a2f0  lw          $a0, -0x5D10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294943472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1150D8u; }
        if (ctx->pc != 0x1150D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1150D8u; }
        if (ctx->pc != 0x1150D8u) { return; }
    }
    ctx->pc = 0x1150D8u;
    // 0x1150d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1150d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1150dc: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1150dcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)511u)));
    // 0x1150e0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1150e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1150e4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1150e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1150e8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1150e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1150ec: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1150ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1150f0: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1150f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1150f4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1150f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1150f8: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1150F8u;
    {
        const bool branch_taken_0x1150f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1150FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1150F8u;
            // 0x1150fc: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150f8) {
            ctx->pc = 0x115138u;
            goto label_115138;
        }
    }
    ctx->pc = 0x115100u;
    // 0x115100: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115100u;
    {
        const bool branch_taken_0x115100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x115104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115100u;
            // 0x115104: 0x26a44020  addiu       $a0, $s5, 0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115100) {
            ctx->pc = 0x115118u;
            goto label_115118;
        }
    }
    ctx->pc = 0x115108u;
    // 0x115108: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115108u;
    {
        const bool branch_taken_0x115108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115108u;
            // 0x11510c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115108) {
            ctx->pc = 0x115128u;
            goto label_115128;
        }
    }
    ctx->pc = 0x115110u;
    // 0x115110: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115110u;
    {
        const bool branch_taken_0x115110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115110) {
            ctx->pc = 0x115158u;
            goto label_115158;
        }
    }
    ctx->pc = 0x115118u;
label_115118:
    // 0x115118: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x115118u;
    {
        const bool branch_taken_0x115118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x11511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115118u;
            // 0x11511c: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115118) {
            ctx->pc = 0x115148u;
            goto label_115148;
        }
    }
    ctx->pc = 0x115120u;
    // 0x115120: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x115120u;
    {
        const bool branch_taken_0x115120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115120) {
            ctx->pc = 0x115158u;
            goto label_115158;
        }
    }
    ctx->pc = 0x115128u;
label_115128:
    // 0x115128: 0xc043874  jal         func_10E1D0
    ctx->pc = 0x115128u;
    SET_GPR_U32(ctx, 31, 0x115130u);
    ctx->pc = 0x11512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115128u;
            // 0x11512c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E1D0u;
    if (runtime->hasFunction(0x10E1D0u)) {
        auto targetFn = runtime->lookupFunction(0x10E1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115130u; }
        if (ctx->pc != 0x115130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x10e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115130u; }
        if (ctx->pc != 0x115130u) { return; }
    }
    ctx->pc = 0x115130u;
    // 0x115130: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x115130u;
    {
        const bool branch_taken_0x115130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115130) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115138u;
label_115138:
    // 0x115138: 0xc043854  jal         func_10E150
    ctx->pc = 0x115138u;
    SET_GPR_U32(ctx, 31, 0x115140u);
    ctx->pc = 0x11513Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115138u;
            // 0x11513c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E150u;
    if (runtime->hasFunction(0x10E150u)) {
        auto targetFn = runtime->lookupFunction(0x10E150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115140u; }
        if (ctx->pc != 0x115140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x10e150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115140u; }
        if (ctx->pc != 0x115140u) { return; }
    }
    ctx->pc = 0x115140u;
    // 0x115140: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x115140u;
    {
        const bool branch_taken_0x115140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115140) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115148u;
label_115148:
    // 0x115148: 0xc043884  jal         func_10E210
    ctx->pc = 0x115148u;
    SET_GPR_U32(ctx, 31, 0x115150u);
    ctx->pc = 0x11514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115148u;
            // 0x11514c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E210u;
    if (runtime->hasFunction(0x10E210u)) {
        auto targetFn = runtime->lookupFunction(0x10E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115150u; }
        if (ctx->pc != 0x115150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SuspendThread_0x10e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115150u; }
        if (ctx->pc != 0x115150u) { return; }
    }
    ctx->pc = 0x115150u;
    // 0x115150: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x115150u;
    {
        const bool branch_taken_0x115150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115150) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115158u;
label_115158:
    // 0x115158: 0xc043eea  jal         func_10FBA8
    ctx->pc = 0x115158u;
    SET_GPR_U32(ctx, 31, 0x115160u);
    ctx->pc = 0x10FBA8u;
    if (runtime->hasFunction(0x10FBA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FBA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115160u; }
        if (ctx->pc != 0x115160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x10fba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115160u; }
        if (ctx->pc != 0x115160u) { return; }
    }
    ctx->pc = 0x115160u;
    // 0x115160: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x115160u;
    {
        const bool branch_taken_0x115160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115160) {
            ctx->pc = 0x1150D0u;
            goto label_1150d0;
        }
    }
    ctx->pc = 0x115168u;
}
