#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRomReady
// Address: 0x1414c0 - 0x141510
void wrsRomReady_0x1414c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRomReady_0x1414c0");
#endif

    ctx->pc = 0x1414c0u;

    // 0x1414c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1414c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1414c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1414c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1414c8:
    // 0x1414c8: 0xc041078  jal         func_1041E0
    ctx->pc = 0x1414C8u;
    SET_GPR_U32(ctx, 31, 0x1414D0u);
    ctx->pc = 0x1414CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1414C8u;
            // 0x1414cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E0u;
    if (runtime->hasFunction(0x1041E0u)) {
        auto targetFn = runtime->lookupFunction(0x1041E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414D0u; }
        if (ctx->pc != 0x1414D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x1041e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414D0u; }
        if (ctx->pc != 0x1414D0u) { return; }
    }
    ctx->pc = 0x1414D0u;
    // 0x1414d0: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1414D0u;
    {
        const bool branch_taken_0x1414d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1414d0) {
            ctx->pc = 0x1414C8u;
            goto label_1414c8;
        }
    }
    ctx->pc = 0x1414D8u;
    // 0x1414d8: 0xc041374  jal         func_104DD0
    ctx->pc = 0x1414D8u;
    SET_GPR_U32(ctx, 31, 0x1414E0u);
    ctx->pc = 0x104DD0u;
    if (runtime->hasFunction(0x104DD0u)) {
        auto targetFn = runtime->lookupFunction(0x104DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414E0u; }
        if (ctx->pc != 0x1414E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStandby_0x104dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414E0u; }
        if (ctx->pc != 0x1414E0u) { return; }
    }
    ctx->pc = 0x1414E0u;
    // 0x1414e0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1414E0u;
    {
        const bool branch_taken_0x1414e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1414e0) {
            ctx->pc = 0x1414C8u;
            goto label_1414c8;
        }
    }
    ctx->pc = 0x1414E8u;
label_1414e8:
    // 0x1414e8: 0xc041078  jal         func_1041E0
    ctx->pc = 0x1414E8u;
    SET_GPR_U32(ctx, 31, 0x1414F0u);
    ctx->pc = 0x1414ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1414E8u;
            // 0x1414ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E0u;
    if (runtime->hasFunction(0x1041E0u)) {
        auto targetFn = runtime->lookupFunction(0x1041E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414F0u; }
        if (ctx->pc != 0x1414F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x1041e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1414F0u; }
        if (ctx->pc != 0x1414F0u) { return; }
    }
    ctx->pc = 0x1414F0u;
    // 0x1414f0: 0x0  nop
    ctx->pc = 0x1414f0u;
    // NOP
    // 0x1414f4: 0x0  nop
    ctx->pc = 0x1414f4u;
    // NOP
    // 0x1414f8: 0x0  nop
    ctx->pc = 0x1414f8u;
    // NOP
    // 0x1414fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1414FCu;
    {
        const bool branch_taken_0x1414fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1414fc) {
            ctx->pc = 0x1414E8u;
            goto label_1414e8;
        }
    }
    ctx->pc = 0x141504u;
    // 0x141504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141508: 0x3e00008  jr          $ra
    ctx->pc = 0x141508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141508u;
            // 0x14150c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1414C8u: goto label_1414c8;
            case 0x1414E8u: goto label_1414e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141510u;
}
