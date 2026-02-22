#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _quantMatrixExtension
// Address: 0x124888 - 0x124934
void _quantMatrixExtension_0x124888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124888u;

    // 0x124888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12488c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x124894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124898: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124898u;
    SET_GPR_U32(ctx, 31, 0x1248A0u);
    ctx->pc = 0x12489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124898u;
            // 0x12489c: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248A0u; }
        if (ctx->pc != 0x1248A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248A0u; }
        if (ctx->pc != 0x1248A0u) { return; }
    }
    ctx->pc = 0x1248A0u;
    // 0x1248a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1248A0u;
    {
        const bool branch_taken_0x1248a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248A0u;
            // 0x1248a4: 0xae0220a0  sw          $v0, 0x20A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248a0) {
            ctx->pc = 0x1248C0u;
            goto label_1248c0;
        }
    }
    ctx->pc = 0x1248A8u;
    // 0x1248a8: 0xc048e84  jal         func_123A10
    ctx->pc = 0x1248A8u;
    SET_GPR_U32(ctx, 31, 0x1248B0u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248B0u; }
        if (ctx->pc != 0x1248B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248B0u; }
        if (ctx->pc != 0x1248B0u) { return; }
    }
    ctx->pc = 0x1248B0u;
    // 0x1248b0: 0xc048e78  jal         func_1239E0
    ctx->pc = 0x1248B0u;
    SET_GPR_U32(ctx, 31, 0x1248B8u);
    ctx->pc = 0x1248B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248B0u;
            // 0x1248b4: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1239E0u;
    if (runtime->hasFunction(0x1239E0u)) {
        auto targetFn = runtime->lookupFunction(0x1239E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248B8u; }
        if (ctx->pc != 0x1248B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248B8u; }
        if (ctx->pc != 0x1248B8u) { return; }
    }
    ctx->pc = 0x1248B8u;
    // 0x1248b8: 0xc048e84  jal         func_123A10
    ctx->pc = 0x1248B8u;
    SET_GPR_U32(ctx, 31, 0x1248C0u);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248C0u; }
        if (ctx->pc != 0x1248C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248C0u; }
        if (ctx->pc != 0x1248C0u) { return; }
    }
    ctx->pc = 0x1248C0u;
label_1248c0:
    // 0x1248c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1248c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1248c4: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1248C4u;
    SET_GPR_U32(ctx, 31, 0x1248CCu);
    ctx->pc = 0x1248C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248C4u;
            // 0x1248c8: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248CCu; }
        if (ctx->pc != 0x1248CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248CCu; }
        if (ctx->pc != 0x1248CCu) { return; }
    }
    ctx->pc = 0x1248CCu;
    // 0x1248cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1248CCu;
    {
        const bool branch_taken_0x1248cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248CCu;
            // 0x1248d0: 0xae0220a4  sw          $v0, 0x20A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248cc) {
            ctx->pc = 0x1248ECu;
            goto label_1248ec;
        }
    }
    ctx->pc = 0x1248D4u;
    // 0x1248d4: 0xc048e84  jal         func_123A10
    ctx->pc = 0x1248D4u;
    SET_GPR_U32(ctx, 31, 0x1248DCu);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248DCu; }
        if (ctx->pc != 0x1248DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248DCu; }
        if (ctx->pc != 0x1248DCu) { return; }
    }
    ctx->pc = 0x1248DCu;
    // 0x1248dc: 0xc048e78  jal         func_1239E0
    ctx->pc = 0x1248DCu;
    SET_GPR_U32(ctx, 31, 0x1248E4u);
    ctx->pc = 0x1248E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248DCu;
            // 0x1248e0: 0x3c045800  lui         $a0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1239E0u;
    if (runtime->hasFunction(0x1239E0u)) {
        auto targetFn = runtime->lookupFunction(0x1239E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248E4u; }
        if (ctx->pc != 0x1248E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248E4u; }
        if (ctx->pc != 0x1248E4u) { return; }
    }
    ctx->pc = 0x1248E4u;
    // 0x1248e4: 0xc048e84  jal         func_123A10
    ctx->pc = 0x1248E4u;
    SET_GPR_U32(ctx, 31, 0x1248ECu);
    ctx->pc = 0x123A10u;
    if (runtime->hasFunction(0x123A10u)) {
        auto targetFn = runtime->lookupFunction(0x123A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248ECu; }
        if (ctx->pc != 0x1248ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248ECu; }
        if (ctx->pc != 0x1248ECu) { return; }
    }
    ctx->pc = 0x1248ECu;
label_1248ec:
    // 0x1248ec: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1248ECu;
    SET_GPR_U32(ctx, 31, 0x1248F4u);
    ctx->pc = 0x1248F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248ECu;
            // 0x1248f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248F4u; }
        if (ctx->pc != 0x1248F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248F4u; }
        if (ctx->pc != 0x1248F4u) { return; }
    }
    ctx->pc = 0x1248F4u;
    // 0x1248f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1248F4u;
    {
        const bool branch_taken_0x1248f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248F4u;
            // 0x1248f8: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248f4) {
            ctx->pc = 0x124904u;
            goto label_124904;
        }
    }
    ctx->pc = 0x1248FCu;
    // 0x1248fc: 0xc048006  jal         func_120018
    ctx->pc = 0x1248FCu;
    SET_GPR_U32(ctx, 31, 0x124904u);
    ctx->pc = 0x124900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248FCu;
            // 0x124900: 0x24844fd0  addiu       $a0, $a0, 0x4FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124904u; }
        if (ctx->pc != 0x124904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124904u; }
        if (ctx->pc != 0x124904u) { return; }
    }
    ctx->pc = 0x124904u;
label_124904:
    // 0x124904: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124904u;
    SET_GPR_U32(ctx, 31, 0x12490Cu);
    ctx->pc = 0x124908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124904u;
            // 0x124908: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12490Cu; }
        if (ctx->pc != 0x12490Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12490Cu; }
        if (ctx->pc != 0x12490Cu) { return; }
    }
    ctx->pc = 0x12490Cu;
    // 0x12490c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12490Cu;
    {
        const bool branch_taken_0x12490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12490Cu;
            // 0x124910: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12490c) {
            ctx->pc = 0x124928u;
            goto label_124928;
        }
    }
    ctx->pc = 0x124914u;
    // 0x124914: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12491c: 0x24844ff8  addiu       $a0, $a0, 0x4FF8
    ctx->pc = 0x12491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20472));
    // 0x124920: 0x8048006  j           func_120018
    ctx->pc = 0x124920u;
    ctx->pc = 0x124924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124920u;
            // 0x124924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Error_0x120018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x124928u;
label_124928:
    // 0x124928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12492c: 0x3e00008  jr          $ra
    ctx->pc = 0x12492Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12492Cu;
            // 0x124930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1248C0u: goto label_1248c0;
            case 0x1248ECu: goto label_1248ec;
            case 0x124904u: goto label_124904;
            case 0x124928u: goto label_124928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124934u;
}
