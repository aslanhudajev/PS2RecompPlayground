#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sequenceDisplayExtension
// Address: 0x12c8b0 - 0x12c93c
void _sequenceDisplayExtension_0x12c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sequenceDisplayExtension_0x12c8b0");
#endif

    ctx->pc = 0x12c8b0u;

    // 0x12c8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c8b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c8b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c8bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c8c0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C8C0u;
    SET_GPR_U32(ctx, 31, 0x12C8C8u);
    ctx->pc = 0x12C8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8C0u;
            // 0x12c8c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8C8u; }
        if (ctx->pc != 0x12C8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8C8u; }
        if (ctx->pc != 0x12C8C8u) { return; }
    }
    ctx->pc = 0x12C8C8u;
    // 0x12c8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8cc: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C8CCu;
    SET_GPR_U32(ctx, 31, 0x12C8D4u);
    ctx->pc = 0x12C8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8CCu;
            // 0x12c8d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8D4u; }
        if (ctx->pc != 0x12C8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8D4u; }
        if (ctx->pc != 0x12C8D4u) { return; }
    }
    ctx->pc = 0x12C8D4u;
    // 0x12c8d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12C8D4u;
    {
        const bool branch_taken_0x12c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8D4u;
            // 0x12c8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8d4) {
            ctx->pc = 0x12C900u;
            goto label_12c900;
        }
    }
    ctx->pc = 0x12C8DCu;
    // 0x12c8dc: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C8DCu;
    SET_GPR_U32(ctx, 31, 0x12C8E4u);
    ctx->pc = 0x12C8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8DCu;
            // 0x12c8e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8E4u; }
        if (ctx->pc != 0x12C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8E4u; }
        if (ctx->pc != 0x12C8E4u) { return; }
    }
    ctx->pc = 0x12C8E4u;
    // 0x12c8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8e8: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C8E8u;
    SET_GPR_U32(ctx, 31, 0x12C8F0u);
    ctx->pc = 0x12C8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8E8u;
            // 0x12c8ec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8F0u; }
        if (ctx->pc != 0x12C8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8F0u; }
        if (ctx->pc != 0x12C8F0u) { return; }
    }
    ctx->pc = 0x12C8F0u;
    // 0x12c8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c8f4: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C8F4u;
    SET_GPR_U32(ctx, 31, 0x12C8FCu);
    ctx->pc = 0x12C8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8F4u;
            // 0x12c8f8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8FCu; }
        if (ctx->pc != 0x12C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C8FCu; }
        if (ctx->pc != 0x12C8FCu) { return; }
    }
    ctx->pc = 0x12C8FCu;
    // 0x12c8fc: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x12c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_12c900:
    // 0x12c900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c904: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C904u;
    SET_GPR_U32(ctx, 31, 0x12C90Cu);
    ctx->pc = 0x12C908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C904u;
            // 0x12c908: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C90Cu; }
        if (ctx->pc != 0x12C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C90Cu; }
        if (ctx->pc != 0x12C90Cu) { return; }
    }
    ctx->pc = 0x12C90Cu;
    // 0x12c90c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x12c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x12c910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c914: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C914u;
    SET_GPR_U32(ctx, 31, 0x12C91Cu);
    ctx->pc = 0x12C918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C914u;
            // 0x12c918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C91Cu; }
        if (ctx->pc != 0x12C91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C91Cu; }
        if (ctx->pc != 0x12C91Cu) { return; }
    }
    ctx->pc = 0x12C91Cu;
    // 0x12c91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c920: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C920u;
    SET_GPR_U32(ctx, 31, 0x12C928u);
    ctx->pc = 0x12C924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C920u;
            // 0x12c924: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C928u; }
        if (ctx->pc != 0x12C928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C928u; }
        if (ctx->pc != 0x12C928u) { return; }
    }
    ctx->pc = 0x12C928u;
    // 0x12c928: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x12c928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x12c92c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c934: 0x3e00008  jr          $ra
    ctx->pc = 0x12C934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C934u;
            // 0x12c938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C900u: goto label_12c900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C93Cu;
}
