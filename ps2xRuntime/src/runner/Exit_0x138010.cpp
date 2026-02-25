#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Exit
// Address: 0x138010 - 0x138038
void Exit_0x138010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Exit_0x138010");
#endif

    ctx->pc = 0x138010u;

    // 0x138010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x138018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13801c: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x13801Cu;
    SET_GPR_U32(ctx, 31, 0x138024u);
    ctx->pc = 0x138020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13801Cu;
            // 0x138020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137F50u;
    if (runtime->hasFunction(0x137F50u)) {
        auto targetFn = runtime->lookupFunction(0x137F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138024u; }
        if (ctx->pc != 0x138024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateLibrary_0x137f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138024u; }
        if (ctx->pc != 0x138024u) { return; }
    }
    ctx->pc = 0x138024u;
    // 0x138024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13802c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13802cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138030: 0x804ba20  j           func_12E880
    ctx->pc = 0x138030u;
    ctx->pc = 0x138034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138030u;
            // 0x138034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E880u;
    if (runtime->hasFunction(0x12E880u)) {
        auto targetFn = runtime->lookupFunction(0x12E880u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__Exit_0x12e880(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x138038u;
}
