#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpcmp
// Address: 0x129208 - 0x129254
void dpcmp_0x129208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129208u;

    // 0x129208: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x129208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12920c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x12920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x129210: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x129210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x129214: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x129214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129218: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x129218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x12921c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x129220: 0xc04a250  jal         func_128940
    ctx->pc = 0x129220u;
    SET_GPR_U32(ctx, 31, 0x129228u);
    ctx->pc = 0x129224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129220u;
            // 0x129224: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129228u; }
        if (ctx->pc != 0x129228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129228u; }
        if (ctx->pc != 0x129228u) { return; }
    }
    ctx->pc = 0x129228u;
    // 0x129228: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x129228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12922c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x129230: 0xc04a250  jal         func_128940
    ctx->pc = 0x129230u;
    SET_GPR_U32(ctx, 31, 0x129238u);
    ctx->pc = 0x129234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129230u;
            // 0x129234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129238u; }
        if (ctx->pc != 0x129238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129238u; }
        if (ctx->pc != 0x129238u) { return; }
    }
    ctx->pc = 0x129238u;
    // 0x129238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12923c: 0xc04a43c  jal         func_1290F0
    ctx->pc = 0x12923Cu;
    SET_GPR_U32(ctx, 31, 0x129244u);
    ctx->pc = 0x129240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12923Cu;
            // 0x129240: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1290F0u;
    if (runtime->hasFunction(0x1290F0u)) {
        auto targetFn = runtime->lookupFunction(0x1290F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129244u; }
        if (ctx->pc != 0x129244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_d_0x1290f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129244u; }
        if (ctx->pc != 0x129244u) { return; }
    }
    ctx->pc = 0x129244u;
    // 0x129244: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x129244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129248: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x129248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12924c: 0x3e00008  jr          $ra
    ctx->pc = 0x12924Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12924Cu;
            // 0x129250: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129254u;
}
