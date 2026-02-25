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
// Address: 0x128468 - 0x1284cc
void _sliceB_0x128468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sliceB_0x128468");
#endif

    ctx->pc = 0x128468u;

    // 0x128468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12846c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x12846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x128470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128478: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128478u;
    SET_GPR_U32(ctx, 31, 0x128480u);
    ctx->pc = 0x12847Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128478u;
            // 0x12847c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128480u; }
        if (ctx->pc != 0x128480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128480u; }
        if (ctx->pc != 0x128480u) { return; }
    }
    ctx->pc = 0x128480u;
    // 0x128480: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x128480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x128484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128488: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128488u;
    SET_GPR_U32(ctx, 31, 0x128490u);
    ctx->pc = 0x12848Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128488u;
            // 0x12848c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128490u; }
        if (ctx->pc != 0x128490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128490u; }
        if (ctx->pc != 0x128490u) { return; }
    }
    ctx->pc = 0x128490u;
    // 0x128490: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x128490u;
    {
        const bool branch_taken_0x128490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128490u;
            // 0x128494: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128490) {
            ctx->pc = 0x1284BCu;
            goto label_1284bc;
        }
    }
    ctx->pc = 0x128498u;
    // 0x128498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12849c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12849Cu;
    SET_GPR_U32(ctx, 31, 0x1284A4u);
    ctx->pc = 0x1284A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12849Cu;
            // 0x1284a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284A4u; }
        if (ctx->pc != 0x1284A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284A4u; }
        if (ctx->pc != 0x1284A4u) { return; }
    }
    ctx->pc = 0x1284A4u;
    // 0x1284a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1284a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284a8: 0xc04a06a  jal         func_1281A8
    ctx->pc = 0x1284A8u;
    SET_GPR_U32(ctx, 31, 0x1284B0u);
    ctx->pc = 0x1284ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1284A8u;
            // 0x1284ac: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284B0u; }
        if (ctx->pc != 0x1284B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284B0u; }
        if (ctx->pc != 0x1284B0u) { return; }
    }
    ctx->pc = 0x1284B0u;
    // 0x1284b0: 0xc04a270  jal         func_1289C0
    ctx->pc = 0x1284B0u;
    SET_GPR_U32(ctx, 31, 0x1284B8u);
    ctx->pc = 0x1284B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1284B0u;
            // 0x1284b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1289C0u;
    if (runtime->hasFunction(0x1289C0u)) {
        auto targetFn = runtime->lookupFunction(0x1289C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284B8u; }
        if (ctx->pc != 0x1284B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x1289c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284B8u; }
        if (ctx->pc != 0x1284B8u) { return; }
    }
    ctx->pc = 0x1284B8u;
    // 0x1284b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1284b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1284bc:
    // 0x1284bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1284bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1284c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1284c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1284c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1284C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1284C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284C4u;
            // 0x1284c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1284BCu: goto label_1284bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1284CCu;
}
