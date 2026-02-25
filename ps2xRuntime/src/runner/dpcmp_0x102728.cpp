#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dpcmp
// Address: 0x102728 - 0x102774
void dpcmp_0x102728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dpcmp_0x102728");
#endif

    ctx->pc = 0x102728u;

    // 0x102728: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x102728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10272c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x10272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x102730: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x102730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x102734: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x102734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x102738: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x102738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10273c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x102740: 0xc040798  jal         func_101E60
    ctx->pc = 0x102740u;
    SET_GPR_U32(ctx, 31, 0x102748u);
    ctx->pc = 0x102744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102740u;
            // 0x102744: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102748u; }
        if (ctx->pc != 0x102748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102748u; }
        if (ctx->pc != 0x102748u) { return; }
    }
    ctx->pc = 0x102748u;
    // 0x102748: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x102748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10274c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x10274cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x102750: 0xc040798  jal         func_101E60
    ctx->pc = 0x102750u;
    SET_GPR_U32(ctx, 31, 0x102758u);
    ctx->pc = 0x102754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102750u;
            // 0x102754: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102758u; }
        if (ctx->pc != 0x102758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102758u; }
        if (ctx->pc != 0x102758u) { return; }
    }
    ctx->pc = 0x102758u;
    // 0x102758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10275c: 0xc040984  jal         func_102610
    ctx->pc = 0x10275Cu;
    SET_GPR_U32(ctx, 31, 0x102764u);
    ctx->pc = 0x102760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10275Cu;
            // 0x102760: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102610u;
    if (runtime->hasFunction(0x102610u)) {
        auto targetFn = runtime->lookupFunction(0x102610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102764u; }
        if (ctx->pc != 0x102764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_d_0x102610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102764u; }
        if (ctx->pc != 0x102764u) { return; }
    }
    ctx->pc = 0x102764u;
    // 0x102764: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x102764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x102768: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x102768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10276c: 0x3e00008  jr          $ra
    ctx->pc = 0x10276Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10276Cu;
            // 0x102770: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102774u;
}
