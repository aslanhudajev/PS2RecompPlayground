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
// Address: 0x129e10 - 0x129e5c
void fpcmp_0x129e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fpcmp_0x129e10");
#endif

    ctx->pc = 0x129e10u;

    // 0x129e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x129e14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x129e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x129e18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x129e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129e1c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x129e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x129e20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e24: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x129e24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x129e28: 0xc04a586  jal         func_129618
    ctx->pc = 0x129E28u;
    SET_GPR_U32(ctx, 31, 0x129E30u);
    ctx->pc = 0x129E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E28u;
            // 0x129e2c: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E30u; }
        if (ctx->pc != 0x129E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E30u; }
        if (ctx->pc != 0x129E30u) { return; }
    }
    ctx->pc = 0x129E30u;
    // 0x129e30: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x129e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129e34: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x129e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x129e38: 0xc04a586  jal         func_129618
    ctx->pc = 0x129E38u;
    SET_GPR_U32(ctx, 31, 0x129E40u);
    ctx->pc = 0x129E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E38u;
            // 0x129e3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E40u; }
        if (ctx->pc != 0x129E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E40u; }
        if (ctx->pc != 0x129E40u) { return; }
    }
    ctx->pc = 0x129E40u;
    // 0x129e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e44: 0xc04a73e  jal         func_129CF8
    ctx->pc = 0x129E44u;
    SET_GPR_U32(ctx, 31, 0x129E4Cu);
    ctx->pc = 0x129E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E44u;
            // 0x129e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129CF8u;
    if (runtime->hasFunction(0x129CF8u)) {
        auto targetFn = runtime->lookupFunction(0x129CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E4Cu; }
        if (ctx->pc != 0x129E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_f_0x129cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E4Cu; }
        if (ctx->pc != 0x129E4Cu) { return; }
    }
    ctx->pc = 0x129E4Cu;
    // 0x129e4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x129e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129e50: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x129e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129e54: 0x3e00008  jr          $ra
    ctx->pc = 0x129E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E54u;
            // 0x129e58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129E5Cu;
}
