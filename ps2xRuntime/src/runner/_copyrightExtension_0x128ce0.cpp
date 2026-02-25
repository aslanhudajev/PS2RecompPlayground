#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _copyrightExtension
// Address: 0x128ce0 - 0x128d70
void _copyrightExtension_0x128ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_copyrightExtension_0x128ce0");
#endif

    ctx->pc = 0x128ce0u;

    // 0x128ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128ce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128cec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128cf0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128CF0u;
    SET_GPR_U32(ctx, 31, 0x128CF8u);
    ctx->pc = 0x128CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128CF0u;
            // 0x128cf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128CF8u; }
        if (ctx->pc != 0x128CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128CF8u; }
        if (ctx->pc != 0x128CF8u) { return; }
    }
    ctx->pc = 0x128CF8u;
    // 0x128cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cfc: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128CFCu;
    SET_GPR_U32(ctx, 31, 0x128D04u);
    ctx->pc = 0x128D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128CFCu;
            // 0x128d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D04u; }
        if (ctx->pc != 0x128D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D04u; }
        if (ctx->pc != 0x128D04u) { return; }
    }
    ctx->pc = 0x128D04u;
    // 0x128d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d08: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128D08u;
    SET_GPR_U32(ctx, 31, 0x128D10u);
    ctx->pc = 0x128D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D08u;
            // 0x128d0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D10u; }
        if (ctx->pc != 0x128D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D10u; }
        if (ctx->pc != 0x128D10u) { return; }
    }
    ctx->pc = 0x128D10u;
    // 0x128d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d14: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128D14u;
    SET_GPR_U32(ctx, 31, 0x128D1Cu);
    ctx->pc = 0x128D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D14u;
            // 0x128d18: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D1Cu; }
        if (ctx->pc != 0x128D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D1Cu; }
        if (ctx->pc != 0x128D1Cu) { return; }
    }
    ctx->pc = 0x128D1Cu;
    // 0x128d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d20: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128D20u;
    SET_GPR_U32(ctx, 31, 0x128D28u);
    ctx->pc = 0x128D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D20u;
            // 0x128d24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D28u; }
        if (ctx->pc != 0x128D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D28u; }
        if (ctx->pc != 0x128D28u) { return; }
    }
    ctx->pc = 0x128D28u;
    // 0x128d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d2c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128D2Cu;
    SET_GPR_U32(ctx, 31, 0x128D34u);
    ctx->pc = 0x128D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D2Cu;
            // 0x128d30: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D34u; }
        if (ctx->pc != 0x128D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D34u; }
        if (ctx->pc != 0x128D34u) { return; }
    }
    ctx->pc = 0x128D34u;
    // 0x128d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d38: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128D38u;
    SET_GPR_U32(ctx, 31, 0x128D40u);
    ctx->pc = 0x128D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D38u;
            // 0x128d3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D40u; }
        if (ctx->pc != 0x128D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D40u; }
        if (ctx->pc != 0x128D40u) { return; }
    }
    ctx->pc = 0x128D40u;
    // 0x128d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d44: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128D44u;
    SET_GPR_U32(ctx, 31, 0x128D4Cu);
    ctx->pc = 0x128D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D44u;
            // 0x128d48: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D4Cu; }
        if (ctx->pc != 0x128D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D4Cu; }
        if (ctx->pc != 0x128D4Cu) { return; }
    }
    ctx->pc = 0x128D4Cu;
    // 0x128d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d50: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128D50u;
    SET_GPR_U32(ctx, 31, 0x128D58u);
    ctx->pc = 0x128D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D50u;
            // 0x128d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D58u; }
        if (ctx->pc != 0x128D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128D58u; }
        if (ctx->pc != 0x128D58u) { return; }
    }
    ctx->pc = 0x128D58u;
    // 0x128d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128d64: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x128d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x128d68: 0x804a0a6  j           func_128298
    ctx->pc = 0x128D68u;
    ctx->pc = 0x128D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128D68u;
            // 0x128d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _nextBit_0x128298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x128D70u;
}
