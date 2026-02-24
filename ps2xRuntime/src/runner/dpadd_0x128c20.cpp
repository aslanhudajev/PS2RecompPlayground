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
// Address: 0x128c20 - 0x128c78
void dpadd_0x128c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dpadd_0x128c20");
#endif

    ctx->pc = 0x128c20u;

    // 0x128c20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x128c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x128c24: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x128c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x128c28: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x128c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x128c2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x128c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x128c30: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x128c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x128c34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x128c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x128c38: 0xc04a250  jal         func_128940
    ctx->pc = 0x128C38u;
    SET_GPR_U32(ctx, 31, 0x128C40u);
    ctx->pc = 0x128C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C38u;
            // 0x128c3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C40u; }
        if (ctx->pc != 0x128C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C40u; }
        if (ctx->pc != 0x128C40u) { return; }
    }
    ctx->pc = 0x128C40u;
    // 0x128c40: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x128c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x128c44: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x128c48: 0xc04a250  jal         func_128940
    ctx->pc = 0x128C48u;
    SET_GPR_U32(ctx, 31, 0x128C50u);
    ctx->pc = 0x128C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C48u;
            // 0x128c4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C50u; }
        if (ctx->pc != 0x128C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C50u; }
        if (ctx->pc != 0x128C50u) { return; }
    }
    ctx->pc = 0x128C50u;
    // 0x128c50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c54: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x128c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128c58: 0xc04a278  jal         func_1289E0
    ctx->pc = 0x128C58u;
    SET_GPR_U32(ctx, 31, 0x128C60u);
    ctx->pc = 0x128C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C58u;
            // 0x128c5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1289E0u;
    if (runtime->hasFunction(0x1289E0u)) {
        auto targetFn = runtime->lookupFunction(0x1289E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C60u; }
        if (ctx->pc != 0x128C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x1289e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C60u; }
        if (ctx->pc != 0x128C60u) { return; }
    }
    ctx->pc = 0x128C60u;
    // 0x128c60: 0xc04a204  jal         func_128810
    ctx->pc = 0x128C60u;
    SET_GPR_U32(ctx, 31, 0x128C68u);
    ctx->pc = 0x128C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C60u;
            // 0x128c64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128810u;
    if (runtime->hasFunction(0x128810u)) {
        auto targetFn = runtime->lookupFunction(0x128810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C68u; }
        if (ctx->pc != 0x128C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x128810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C68u; }
        if (ctx->pc != 0x128C68u) { return; }
    }
    ctx->pc = 0x128C68u;
    // 0x128c68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x128c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128c6c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x128c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128c70: 0x3e00008  jr          $ra
    ctx->pc = 0x128C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C70u;
            // 0x128c74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128C78u;
}
