#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _extrainfo
// Address: 0x1289c0 - 0x128a08
void _extrainfo_0x1289c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_extrainfo_0x1289c0");
#endif

    ctx->pc = 0x1289c0u;

    // 0x1289c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1289c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1289c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1289c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1289c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1289c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1289cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1289CCu;
    {
        const bool branch_taken_0x1289cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289CCu;
            // 0x1289d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289cc) {
            ctx->pc = 0x1289E0u;
            goto label_1289e0;
        }
    }
    ctx->pc = 0x1289D4u;
    // 0x1289d4: 0x0  nop
    ctx->pc = 0x1289d4u;
    // NOP
label_1289d8:
    // 0x1289d8: 0xc04a06a  jal         func_1281A8
    ctx->pc = 0x1289D8u;
    SET_GPR_U32(ctx, 31, 0x1289E0u);
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289E0u; }
        if (ctx->pc != 0x1289E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289E0u; }
        if (ctx->pc != 0x1289E0u) { return; }
    }
    ctx->pc = 0x1289E0u;
label_1289e0:
    // 0x1289e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1289e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289e4: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x1289E4u;
    SET_GPR_U32(ctx, 31, 0x1289ECu);
    ctx->pc = 0x1289E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1289E4u;
            // 0x1289e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289ECu; }
        if (ctx->pc != 0x1289ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289ECu; }
        if (ctx->pc != 0x1289ECu) { return; }
    }
    ctx->pc = 0x1289ECu;
    // 0x1289ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1289ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1289F0u;
    {
        const bool branch_taken_0x1289f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289F0u;
            // 0x1289f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289f0) {
            ctx->pc = 0x1289D8u;
            goto label_1289d8;
        }
    }
    ctx->pc = 0x1289F8u;
    // 0x1289f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1289f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1289fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1289fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a00: 0x3e00008  jr          $ra
    ctx->pc = 0x128A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A00u;
            // 0x128a04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1289D8u: goto label_1289d8;
            case 0x1289E0u: goto label_1289e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128A08u;
}
