#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRomLoadInit
// Address: 0x141510 - 0x1415ac
void wrsRomLoadInit_0x141510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRomLoadInit_0x141510");
#endif

    ctx->pc = 0x141510u;

    // 0x141510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141518:
    // 0x141518: 0xc050530  jal         func_1414C0
    ctx->pc = 0x141518u;
    SET_GPR_U32(ctx, 31, 0x141520u);
    ctx->pc = 0x1414C0u;
    if (runtime->hasFunction(0x1414C0u)) {
        auto targetFn = runtime->lookupFunction(0x1414C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141520u; }
        if (ctx->pc != 0x141520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomReady_0x1414c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141520u; }
        if (ctx->pc != 0x141520u) { return; }
    }
    ctx->pc = 0x141520u;
    // 0x141520: 0xc04127a  jal         func_1049E8
    ctx->pc = 0x141520u;
    SET_GPR_U32(ctx, 31, 0x141528u);
    ctx->pc = 0x141524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141520u;
            // 0x141524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1049E8u;
    if (runtime->hasFunction(0x1049E8u)) {
        auto targetFn = runtime->lookupFunction(0x1049E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141528u; }
        if (ctx->pc != 0x141528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdDiskReady_0x1049e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141528u; }
        if (ctx->pc != 0x141528u) { return; }
    }
    ctx->pc = 0x141528u;
    // 0x141528: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x141528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14152c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14152Cu;
    {
        const bool branch_taken_0x14152c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x141530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14152Cu;
            // 0x141530: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14152c) {
            ctx->pc = 0x141518u;
            goto label_141518;
        }
    }
    ctx->pc = 0x141534u;
    // 0x141534: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x141534u;
    {
        const bool branch_taken_0x141534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x141534) {
            ctx->pc = 0x141548u;
            goto label_141548;
        }
    }
    ctx->pc = 0x14153Cu;
    // 0x14153c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x14153Cu;
    {
        const bool branch_taken_0x14153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14153c) {
            ctx->pc = 0x141518u;
            goto label_141518;
        }
    }
    ctx->pc = 0x141544u;
    // 0x141544: 0x0  nop
    ctx->pc = 0x141544u;
    // NOP
label_141548:
    // 0x141548: 0xc041078  jal         func_1041E0
    ctx->pc = 0x141548u;
    SET_GPR_U32(ctx, 31, 0x141550u);
    ctx->pc = 0x14154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141548u;
            // 0x14154c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E0u;
    if (runtime->hasFunction(0x1041E0u)) {
        auto targetFn = runtime->lookupFunction(0x1041E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141550u; }
        if (ctx->pc != 0x141550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x1041e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141550u; }
        if (ctx->pc != 0x141550u) { return; }
    }
    ctx->pc = 0x141550u;
    // 0x141550: 0x0  nop
    ctx->pc = 0x141550u;
    // NOP
    // 0x141554: 0x0  nop
    ctx->pc = 0x141554u;
    // NOP
    // 0x141558: 0x0  nop
    ctx->pc = 0x141558u;
    // NOP
    // 0x14155c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14155Cu;
    {
        const bool branch_taken_0x14155c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14155c) {
            ctx->pc = 0x141548u;
            goto label_141548;
        }
    }
    ctx->pc = 0x141564u;
    // 0x141564: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x141564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x141568: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x141568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14156c: 0x24847860  addiu       $a0, $a0, 0x7860
    ctx->pc = 0x14156cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30816));
    // 0x141570: 0xc040fee  jal         func_103FB8
    ctx->pc = 0x141570u;
    SET_GPR_U32(ctx, 31, 0x141578u);
    ctx->pc = 0x141574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141570u;
            // 0x141574: 0x24a50320  addiu       $a1, $a1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103FB8u;
    if (runtime->hasFunction(0x103FB8u)) {
        auto targetFn = runtime->lookupFunction(0x103FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141578u; }
        if (ctx->pc != 0x141578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSearchFile_0x103fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141578u; }
        if (ctx->pc != 0x141578u) { return; }
    }
    ctx->pc = 0x141578u;
    // 0x141578: 0x1840ffe7  blez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x141578u;
    {
        const bool branch_taken_0x141578 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x141578) {
            ctx->pc = 0x141518u;
            goto label_141518;
        }
    }
    ctx->pc = 0x141580u;
    // 0x141580: 0xc0413a0  jal         func_104E80
    ctx->pc = 0x141580u;
    SET_GPR_U32(ctx, 31, 0x141588u);
    ctx->pc = 0x104E80u;
    if (runtime->hasFunction(0x104E80u)) {
        auto targetFn = runtime->lookupFunction(0x104E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141588u; }
        if (ctx->pc != 0x141588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x104e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141588u; }
        if (ctx->pc != 0x141588u) { return; }
    }
    ctx->pc = 0x141588u;
    // 0x141588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141588u;
    {
        const bool branch_taken_0x141588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14158Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141588u;
            // 0x14158c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141588) {
            ctx->pc = 0x1415A0u;
            goto label_1415a0;
        }
    }
    ctx->pc = 0x141590u;
    // 0x141590: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x141590u;
    SET_GPR_U32(ctx, 31, 0x141598u);
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141598u; }
        if (ctx->pc != 0x141598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141598u; }
        if (ctx->pc != 0x141598u) { return; }
    }
    ctx->pc = 0x141598u;
    // 0x141598: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x141598u;
    {
        const bool branch_taken_0x141598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141598) {
            ctx->pc = 0x141518u;
            goto label_141518;
        }
    }
    ctx->pc = 0x1415A0u;
label_1415a0:
    // 0x1415a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1415a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1415a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1415A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1415A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1415A4u;
            // 0x1415a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141518u: goto label_141518;
            case 0x141548u: goto label_141548;
            case 0x1415A0u: goto label_1415a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1415ACu;
}
