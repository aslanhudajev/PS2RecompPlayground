#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _Error1
// Address: 0x12c040 - 0x12c074
void ps2__Error1_0x12c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__Error1_0x12c040");
#endif

    ctx->pc = 0x12c040u;

    // 0x12c040: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x12c044: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x12c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x12c048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c04c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x12c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x12c050: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x12C050u;
    SET_GPR_U32(ctx, 31, 0x12C058u);
    ctx->pc = 0x12C054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C050u;
            // 0x12c054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C058u; }
        if (ctx->pc != 0x12C058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C058u; }
        if (ctx->pc != 0x12C058u) { return; }
    }
    ctx->pc = 0x12C058u;
    // 0x12c058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c05c: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12C05Cu;
    SET_GPR_U32(ctx, 31, 0x12C064u);
    ctx->pc = 0x12C060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C05Cu;
            // 0x12c060: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C064u; }
        if (ctx->pc != 0x12C064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C064u; }
        if (ctx->pc != 0x12C064u) { return; }
    }
    ctx->pc = 0x12C064u;
    // 0x12c064: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x12c064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12c068: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x12c068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12c06c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C06Cu;
            // 0x12c070: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C074u;
}
