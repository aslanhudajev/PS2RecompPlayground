#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseMovie
// Address: 0x102578 - 0x1025cc
void initialiseMovie_0x102578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102578u;

    // 0x102578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10257c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x10257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x102580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102584: 0xc04a90c  jal         func_12A430
    ctx->pc = 0x102584u;
    SET_GPR_U32(ctx, 31, 0x10258Cu);
    ctx->pc = 0x102588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102584u;
            // 0x102588: 0x3c0500c0  lui         $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A430u;
    if (runtime->hasFunction(0x12A430u)) {
        auto targetFn = runtime->lookupFunction(0x12A430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10258Cu; }
        if (ctx->pc != 0x10258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x12a430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10258Cu; }
        if (ctx->pc != 0x10258Cu) { return; }
    }
    ctx->pc = 0x10258Cu;
    // 0x10258c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10258Cu;
    {
        const bool branch_taken_0x10258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10258Cu;
            // 0x102590: 0xaf8280b8  sw          $v0, -0x7F48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10258c) {
            ctx->pc = 0x1025A8u;
            goto label_1025a8;
        }
    }
    ctx->pc = 0x102594u;
    // 0x102594: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x102594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x102598: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x102598u;
    SET_GPR_U32(ctx, 31, 0x1025A0u);
    ctx->pc = 0x10259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102598u;
            // 0x10259c: 0x24842e28  addiu       $a0, $a0, 0x2E28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025A0u; }
        if (ctx->pc != 0x1025A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025A0u; }
        if (ctx->pc != 0x1025A0u) { return; }
    }
    ctx->pc = 0x1025A0u;
    // 0x1025a0: 0xc049d20  jal         func_127480
    ctx->pc = 0x1025A0u;
    SET_GPR_U32(ctx, 31, 0x1025A8u);
    ctx->pc = 0x1025A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1025A0u;
            // 0x1025a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127480u;
    if (runtime->hasFunction(0x127480u)) {
        auto targetFn = runtime->lookupFunction(0x127480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025A8u; }
        if (ctx->pc != 0x1025A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        exit_0x127480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025A8u; }
        if (ctx->pc != 0x1025A8u) { return; }
    }
    ctx->pc = 0x1025A8u;
label_1025a8:
    // 0x1025a8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1025a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1025ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1025acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025b0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1025B0u;
    SET_GPR_U32(ctx, 31, 0x1025B8u);
    ctx->pc = 0x1025B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1025B0u;
            // 0x1025b4: 0x24842e48  addiu       $a0, $a0, 0x2E48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025B8u; }
        if (ctx->pc != 0x1025B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025B8u; }
        if (ctx->pc != 0x1025B8u) { return; }
    }
    ctx->pc = 0x1025B8u;
    // 0x1025b8: 0x8f8480b8  lw          $a0, -0x7F48($gp)
    ctx->pc = 0x1025b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x1025bc: 0x3c0500c0  lui         $a1, 0xC0
    ctx->pc = 0x1025bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)192 << 16));
    // 0x1025c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1025c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1025c4: 0x80462c6  j           func_118B18
    ctx->pc = 0x1025C4u;
    ctx->pc = 0x1025C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1025C4u;
            // 0x1025c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118B18u;
    if (runtime->hasFunction(0x118B18u)) {
        auto targetFn = runtime->lookupFunction(0x118B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        movplayInit_0x118b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1025CCu;
}
