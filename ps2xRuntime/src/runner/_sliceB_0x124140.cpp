#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sliceB
// Address: 0x124140 - 0x1241ac
void _sliceB_0x124140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sliceB_0x124140");
#endif

    ctx->pc = 0x124140u;

    // 0x124140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124144: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x124148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12414c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x124150: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124150u;
    SET_GPR_U32(ctx, 31, 0x124158u);
    ctx->pc = 0x124154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124150u;
            // 0x124154: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124158u; }
        if (ctx->pc != 0x124158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124158u; }
        if (ctx->pc != 0x124158u) { return; }
    }
    ctx->pc = 0x124158u;
    // 0x124158: 0xae021a40  sw          $v0, 0x1A40($s0)
    ctx->pc = 0x124158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6720), GPR_U32(ctx, 2));
    // 0x12415c: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x12415Cu;
    SET_GPR_U32(ctx, 31, 0x124164u);
    ctx->pc = 0x124160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12415Cu;
            // 0x124160: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124164u; }
        if (ctx->pc != 0x124164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124164u; }
        if (ctx->pc != 0x124164u) { return; }
    }
    ctx->pc = 0x124164u;
    // 0x124164: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124164u;
    {
        const bool branch_taken_0x124164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124164u;
            // 0x124168: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124164) {
            ctx->pc = 0x124190u;
            goto label_124190;
        }
    }
    ctx->pc = 0x12416Cu;
    // 0x12416c: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x12416Cu;
    SET_GPR_U32(ctx, 31, 0x124174u);
    ctx->pc = 0x124170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12416Cu;
            // 0x124170: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124174u; }
        if (ctx->pc != 0x124174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124174u; }
        if (ctx->pc != 0x124174u) { return; }
    }
    ctx->pc = 0x124174u;
    // 0x124174: 0xae0220c0  sw          $v0, 0x20C0($s0)
    ctx->pc = 0x124174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8384), GPR_U32(ctx, 2));
    // 0x124178: 0xc048f96  jal         func_123E58
    ctx->pc = 0x124178u;
    SET_GPR_U32(ctx, 31, 0x124180u);
    ctx->pc = 0x12417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124178u;
            // 0x12417c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124180u; }
        if (ctx->pc != 0x124180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124180u; }
        if (ctx->pc != 0x124180u) { return; }
    }
    ctx->pc = 0x124180u;
    // 0x124180: 0xc0491a2  jal         func_124688
    ctx->pc = 0x124180u;
    SET_GPR_U32(ctx, 31, 0x124188u);
    ctx->pc = 0x124688u;
    if (runtime->hasFunction(0x124688u)) {
        auto targetFn = runtime->lookupFunction(0x124688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124188u; }
        if (ctx->pc != 0x124188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x124688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124188u; }
        if (ctx->pc != 0x124188u) { return; }
    }
    ctx->pc = 0x124188u;
    // 0x124188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124188u;
    {
        const bool branch_taken_0x124188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124188u;
            // 0x12418c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124188) {
            ctx->pc = 0x12419Cu;
            goto label_12419c;
        }
    }
    ctx->pc = 0x124190u;
label_124190:
    // 0x124190: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124194: 0xac4020c0  sw          $zero, 0x20C0($v0)
    ctx->pc = 0x124194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8384), GPR_U32(ctx, 0));
    // 0x124198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x124198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12419c:
    // 0x12419c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12419cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1241a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1241a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1241a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1241A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1241A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1241A4u;
            // 0x1241a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124190u: goto label_124190;
            case 0x12419Cu: goto label_12419c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1241ACu;
}
