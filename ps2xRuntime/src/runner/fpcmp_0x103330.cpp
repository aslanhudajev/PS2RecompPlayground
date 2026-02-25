#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fpcmp
// Address: 0x103330 - 0x10337c
void fpcmp_0x103330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fpcmp_0x103330");
#endif

    ctx->pc = 0x103330u;

    // 0x103330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x103330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x103334: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x103334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x103338: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x103338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10333c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x103340: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x103340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103344: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x103344u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x103348: 0xc040ace  jal         func_102B38
    ctx->pc = 0x103348u;
    SET_GPR_U32(ctx, 31, 0x103350u);
    ctx->pc = 0x10334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103348u;
            // 0x10334c: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103350u; }
        if (ctx->pc != 0x103350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103350u; }
        if (ctx->pc != 0x103350u) { return; }
    }
    ctx->pc = 0x103350u;
    // 0x103350: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x103350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x103354: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x103354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x103358: 0xc040ace  jal         func_102B38
    ctx->pc = 0x103358u;
    SET_GPR_U32(ctx, 31, 0x103360u);
    ctx->pc = 0x10335Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103358u;
            // 0x10335c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103360u; }
        if (ctx->pc != 0x103360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103360u; }
        if (ctx->pc != 0x103360u) { return; }
    }
    ctx->pc = 0x103360u;
    // 0x103360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103364: 0xc040c86  jal         func_103218
    ctx->pc = 0x103364u;
    SET_GPR_U32(ctx, 31, 0x10336Cu);
    ctx->pc = 0x103368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103364u;
            // 0x103368: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103218u;
    if (runtime->hasFunction(0x103218u)) {
        auto targetFn = runtime->lookupFunction(0x103218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10336Cu; }
        if (ctx->pc != 0x10336Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_f_0x103218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10336Cu; }
        if (ctx->pc != 0x10336Cu) { return; }
    }
    ctx->pc = 0x10336Cu;
    // 0x10336c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10336cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103370: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x103370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103374: 0x3e00008  jr          $ra
    ctx->pc = 0x103374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103374u;
            // 0x103378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10337Cu;
}
