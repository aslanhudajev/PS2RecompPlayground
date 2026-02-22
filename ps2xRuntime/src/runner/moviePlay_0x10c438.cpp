#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: moviePlay
// Address: 0x10c438 - 0x10c4b0
void moviePlay_0x10c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10c438u;

    // 0x10c438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10c43c: 0xaf858408  sw          $a1, -0x7BF8($gp)
    ctx->pc = 0x10c43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935560), GPR_U32(ctx, 5));
    // 0x10c440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c44c: 0xaf8083f8  sw          $zero, -0x7C08($gp)
    ctx->pc = 0x10c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935544), GPR_U32(ctx, 0));
    // 0x10c450: 0xc0430fa  jal         func_10C3E8
    ctx->pc = 0x10C450u;
    SET_GPR_U32(ctx, 31, 0x10C458u);
    ctx->pc = 0x10C454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C450u;
            // 0x10c454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3E8u;
    if (runtime->hasFunction(0x10C3E8u)) {
        auto targetFn = runtime->lookupFunction(0x10C3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C458u; }
        if (ctx->pc != 0x10C458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memTest_0x10c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C458u; }
        if (ctx->pc != 0x10C458u) { return; }
    }
    ctx->pc = 0x10C458u;
    // 0x10c458: 0x3c080011  lui         $t0, 0x11
    ctx->pc = 0x10c458u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17 << 16));
    // 0x10c45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10c464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c468: 0x2508c4b0  addiu       $t0, $t0, -0x3B50
    ctx->pc = 0x10c468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952112));
    // 0x10c46c: 0xc0462d8  jal         func_118B60
    ctx->pc = 0x10C46Cu;
    SET_GPR_U32(ctx, 31, 0x10C474u);
    ctx->pc = 0x10C470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C46Cu;
            // 0x10c470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118B60u;
    if (runtime->hasFunction(0x118B60u)) {
        auto targetFn = runtime->lookupFunction(0x118B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C474u; }
        if (ctx->pc != 0x10C474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        playmovie_0x118b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C474u; }
        if (ctx->pc != 0x10C474u) { return; }
    }
    ctx->pc = 0x10C474u;
    // 0x10c474: 0xc0430fa  jal         func_10C3E8
    ctx->pc = 0x10C474u;
    SET_GPR_U32(ctx, 31, 0x10C47Cu);
    ctx->pc = 0x10C478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C474u;
            // 0x10c478: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3E8u;
    if (runtime->hasFunction(0x10C3E8u)) {
        auto targetFn = runtime->lookupFunction(0x10C3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C47Cu; }
        if (ctx->pc != 0x10C47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memTest_0x10c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C47Cu; }
        if (ctx->pc != 0x10C47Cu) { return; }
    }
    ctx->pc = 0x10C47Cu;
    // 0x10c47c: 0xc040b2e  jal         func_102CB8
    ctx->pc = 0x10C47Cu;
    SET_GPR_U32(ctx, 31, 0x10C484u);
    ctx->pc = 0x102CB8u;
    if (runtime->hasFunction(0x102CB8u)) {
        auto targetFn = runtime->lookupFunction(0x102CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C484u; }
        if (ctx->pc != 0x10C484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        reInitialiseDrawDisplay_0x102cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C484u; }
        if (ctx->pc != 0x10C484u) { return; }
    }
    ctx->pc = 0x10C484u;
    // 0x10c484: 0xc0430fa  jal         func_10C3E8
    ctx->pc = 0x10C484u;
    SET_GPR_U32(ctx, 31, 0x10C48Cu);
    ctx->pc = 0x10C488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C484u;
            // 0x10c488: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3E8u;
    if (runtime->hasFunction(0x10C3E8u)) {
        auto targetFn = runtime->lookupFunction(0x10C3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C48Cu; }
        if (ctx->pc != 0x10C48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memTest_0x10c3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C48Cu; }
        if (ctx->pc != 0x10C48Cu) { return; }
    }
    ctx->pc = 0x10C48Cu;
    // 0x10c48c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10c490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c494: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10C494u;
    SET_GPR_U32(ctx, 31, 0x10C49Cu);
    ctx->pc = 0x10C498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C494u;
            // 0x10c498: 0x24845ef0  addiu       $a0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C49Cu; }
        if (ctx->pc != 0x10C49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C49Cu; }
        if (ctx->pc != 0x10C49Cu) { return; }
    }
    ctx->pc = 0x10C49Cu;
    // 0x10c49c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c4a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c4a8: 0x80430fa  j           func_10C3E8
    ctx->pc = 0x10C4A8u;
    ctx->pc = 0x10C4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4A8u;
            // 0x10c4ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3E8u;
    if (runtime->hasFunction(0x10C3E8u)) {
        auto targetFn = runtime->lookupFunction(0x10C3E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memTest_0x10c3e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C4B0u;
}
