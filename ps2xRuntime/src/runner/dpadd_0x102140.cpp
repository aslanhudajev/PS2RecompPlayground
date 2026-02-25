#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dpadd
// Address: 0x102140 - 0x102198
void dpadd_0x102140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dpadd_0x102140");
#endif

    ctx->pc = 0x102140u;

    // 0x102140: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x102140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x102144: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x102144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x102148: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x102148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x10214c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x10214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x102150: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x102150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x102154: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x102154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x102158: 0xc040798  jal         func_101E60
    ctx->pc = 0x102158u;
    SET_GPR_U32(ctx, 31, 0x102160u);
    ctx->pc = 0x10215Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102158u;
            // 0x10215c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102160u; }
        if (ctx->pc != 0x102160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102160u; }
        if (ctx->pc != 0x102160u) { return; }
    }
    ctx->pc = 0x102160u;
    // 0x102160: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x102160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102164: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x102164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x102168: 0xc040798  jal         func_101E60
    ctx->pc = 0x102168u;
    SET_GPR_U32(ctx, 31, 0x102170u);
    ctx->pc = 0x10216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102168u;
            // 0x10216c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102170u; }
        if (ctx->pc != 0x102170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102170u; }
        if (ctx->pc != 0x102170u) { return; }
    }
    ctx->pc = 0x102170u;
    // 0x102170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102174: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x102174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x102178: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x102178u;
    SET_GPR_U32(ctx, 31, 0x102180u);
    ctx->pc = 0x10217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102178u;
            // 0x10217c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102180u; }
        if (ctx->pc != 0x102180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102180u; }
        if (ctx->pc != 0x102180u) { return; }
    }
    ctx->pc = 0x102180u;
    // 0x102180: 0xc04074c  jal         func_101D30
    ctx->pc = 0x102180u;
    SET_GPR_U32(ctx, 31, 0x102188u);
    ctx->pc = 0x102184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102180u;
            // 0x102184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101D30u;
    if (runtime->hasFunction(0x101D30u)) {
        auto targetFn = runtime->lookupFunction(0x101D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102188u; }
        if (ctx->pc != 0x102188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x101d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102188u; }
        if (ctx->pc != 0x102188u) { return; }
    }
    ctx->pc = 0x102188u;
    // 0x102188: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x102188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10218c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x10218cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102190: 0x3e00008  jr          $ra
    ctx->pc = 0x102190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102190u;
            // 0x102194: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102198u;
}
