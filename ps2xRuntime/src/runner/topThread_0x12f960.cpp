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
// Address: 0x12f960 - 0x12fa38
void topThread_0x12f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("topThread_0x12f960");
#endif

    ctx->pc = 0x12f960u;

    // 0x12f960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12f964: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f96c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x12f96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x12f970: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x12f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x12f974: 0x3c160024  lui         $s6, 0x24
    ctx->pc = 0x12f974u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)36 << 16));
    // 0x12f978: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12f978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12f97c: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x12f97cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x12f980: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12f984: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12f984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f988: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12f98c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12f98cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f994: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12f994u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12f998: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12f99c: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x12f99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_12f9a0:
    // 0x12f9a0: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x12F9A0u;
    SET_GPR_U32(ctx, 31, 0x12F9A8u);
    ctx->pc = 0x12F9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9A0u;
            // 0x12f9a4: 0x8ec42470  lw          $a0, 0x2470($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9A8u; }
        if (ctx->pc != 0x12F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9A8u; }
        if (ctx->pc != 0x12F9A8u) { return; }
    }
    ctx->pc = 0x12F9A8u;
    // 0x12f9a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f9ac: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x12f9acu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)511u)));
    // 0x12f9b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x12f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12f9b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f9b8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x12f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x12f9bc: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x12f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x12f9c0: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x12f9c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x12f9c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f9c8: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x12F9C8u;
    {
        const bool branch_taken_0x12f9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x12F9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9C8u;
            // 0x12f9cc: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9c8) {
            ctx->pc = 0x12FA08u;
            goto label_12fa08;
        }
    }
    ctx->pc = 0x12F9D0u;
    // 0x12f9d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F9D0u;
    {
        const bool branch_taken_0x12f9d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9D0u;
            // 0x12f9d4: 0x26a4f6a8  addiu       $a0, $s5, -0x958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9d0) {
            ctx->pc = 0x12F9E8u;
            goto label_12f9e8;
        }
    }
    ctx->pc = 0x12F9D8u;
    // 0x12f9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F9D8u;
    {
        const bool branch_taken_0x12f9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9D8u;
            // 0x12f9dc: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9d8) {
            ctx->pc = 0x12F9F8u;
            goto label_12f9f8;
        }
    }
    ctx->pc = 0x12F9E0u;
    // 0x12f9e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12F9E0u;
    {
        const bool branch_taken_0x12f9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9e0) {
            ctx->pc = 0x12FA28u;
            goto label_12fa28;
        }
    }
    ctx->pc = 0x12F9E8u;
label_12f9e8:
    // 0x12f9e8: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x12F9E8u;
    {
        const bool branch_taken_0x12f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x12F9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9E8u;
            // 0x12f9ec: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9e8) {
            ctx->pc = 0x12FA18u;
            goto label_12fa18;
        }
    }
    ctx->pc = 0x12F9F0u;
    // 0x12f9f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12F9F0u;
    {
        const bool branch_taken_0x12f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9f0) {
            ctx->pc = 0x12FA28u;
            goto label_12fa28;
        }
    }
    ctx->pc = 0x12F9F8u;
label_12f9f8:
    // 0x12f9f8: 0xc04bae4  jal         func_12EB90
    ctx->pc = 0x12F9F8u;
    SET_GPR_U32(ctx, 31, 0x12FA00u);
    ctx->pc = 0x12F9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9F8u;
            // 0x12f9fc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EB90u;
    if (runtime->hasFunction(0x12EB90u)) {
        auto targetFn = runtime->lookupFunction(0x12EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA00u; }
        if (ctx->pc != 0x12FA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x12eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA00u; }
        if (ctx->pc != 0x12FA00u) { return; }
    }
    ctx->pc = 0x12FA00u;
    // 0x12fa00: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x12FA00u;
    {
        const bool branch_taken_0x12fa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fa00) {
            ctx->pc = 0x12F9A0u;
            goto label_12f9a0;
        }
    }
    ctx->pc = 0x12FA08u;
label_12fa08:
    // 0x12fa08: 0xc04bac4  jal         func_12EB10
    ctx->pc = 0x12FA08u;
    SET_GPR_U32(ctx, 31, 0x12FA10u);
    ctx->pc = 0x12FA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA08u;
            // 0x12fa0c: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EB10u;
    if (runtime->hasFunction(0x12EB10u)) {
        auto targetFn = runtime->lookupFunction(0x12EB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA10u; }
        if (ctx->pc != 0x12FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotateThreadReadyQueue_0x12eb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA10u; }
        if (ctx->pc != 0x12FA10u) { return; }
    }
    ctx->pc = 0x12FA10u;
    // 0x12fa10: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x12FA10u;
    {
        const bool branch_taken_0x12fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fa10) {
            ctx->pc = 0x12F9A0u;
            goto label_12f9a0;
        }
    }
    ctx->pc = 0x12FA18u;
label_12fa18:
    // 0x12fa18: 0xc04baf4  jal         func_12EBD0
    ctx->pc = 0x12FA18u;
    SET_GPR_U32(ctx, 31, 0x12FA20u);
    ctx->pc = 0x12FA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA18u;
            // 0x12fa1c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EBD0u;
    if (runtime->hasFunction(0x12EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x12EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA20u; }
        if (ctx->pc != 0x12FA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SuspendThread_0x12ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA20u; }
        if (ctx->pc != 0x12FA20u) { return; }
    }
    ctx->pc = 0x12FA20u;
    // 0x12fa20: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x12FA20u;
    {
        const bool branch_taken_0x12fa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fa20) {
            ctx->pc = 0x12F9A0u;
            goto label_12f9a0;
        }
    }
    ctx->pc = 0x12FA28u;
label_12fa28:
    // 0x12fa28: 0xc04c332  jal         func_130CC8
    ctx->pc = 0x12FA28u;
    SET_GPR_U32(ctx, 31, 0x12FA30u);
    ctx->pc = 0x130CC8u;
    if (runtime->hasFunction(0x130CC8u)) {
        auto targetFn = runtime->lookupFunction(0x130CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA30u; }
        if (ctx->pc != 0x12FA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x130cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA30u; }
        if (ctx->pc != 0x12FA30u) { return; }
    }
    ctx->pc = 0x12FA30u;
    // 0x12fa30: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x12FA30u;
    {
        const bool branch_taken_0x12fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fa30) {
            ctx->pc = 0x12F9A0u;
            goto label_12f9a0;
        }
    }
    ctx->pc = 0x12FA38u;
}
