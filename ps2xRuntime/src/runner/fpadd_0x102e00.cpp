#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fpadd
// Address: 0x102e00 - 0x102e58
void fpadd_0x102e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fpadd_0x102e00");
#endif

    ctx->pc = 0x102e00u;

    // 0x102e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x102e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x102e04: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x102e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x102e08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102e0c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x102e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x102e10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e14: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x102e14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x102e18: 0xc040ace  jal         func_102B38
    ctx->pc = 0x102E18u;
    SET_GPR_U32(ctx, 31, 0x102E20u);
    ctx->pc = 0x102E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102E18u;
            // 0x102e1c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E20u; }
        if (ctx->pc != 0x102E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E20u; }
        if (ctx->pc != 0x102E20u) { return; }
    }
    ctx->pc = 0x102E20u;
    // 0x102e20: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x102e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x102e24: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x102e28: 0xc040ace  jal         func_102B38
    ctx->pc = 0x102E28u;
    SET_GPR_U32(ctx, 31, 0x102E30u);
    ctx->pc = 0x102E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102E28u;
            // 0x102e2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E30u; }
        if (ctx->pc != 0x102E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E30u; }
        if (ctx->pc != 0x102E30u) { return; }
    }
    ctx->pc = 0x102E30u;
    // 0x102e30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x102e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102e38: 0xc040af2  jal         func_102BC8
    ctx->pc = 0x102E38u;
    SET_GPR_U32(ctx, 31, 0x102E40u);
    ctx->pc = 0x102E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102E38u;
            // 0x102e3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102BC8u;
    if (runtime->hasFunction(0x102BC8u)) {
        auto targetFn = runtime->lookupFunction(0x102BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E40u; }
        if (ctx->pc != 0x102E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x102bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E40u; }
        if (ctx->pc != 0x102E40u) { return; }
    }
    ctx->pc = 0x102E40u;
    // 0x102e40: 0xc040a8a  jal         func_102A28
    ctx->pc = 0x102E40u;
    SET_GPR_U32(ctx, 31, 0x102E48u);
    ctx->pc = 0x102E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102E40u;
            // 0x102e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A28u;
    if (runtime->hasFunction(0x102A28u)) {
        auto targetFn = runtime->lookupFunction(0x102A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E48u; }
        if (ctx->pc != 0x102E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x102a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E48u; }
        if (ctx->pc != 0x102E48u) { return; }
    }
    ctx->pc = 0x102E48u;
    // 0x102e48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x102e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102e4c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x102e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102e50: 0x3e00008  jr          $ra
    ctx->pc = 0x102E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102E50u;
            // 0x102e54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102E58u;
}
