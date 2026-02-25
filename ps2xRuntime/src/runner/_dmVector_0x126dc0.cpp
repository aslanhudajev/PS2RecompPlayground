#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dmVector
// Address: 0x126dc0 - 0x126ddc
void _dmVector_0x126dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dmVector_0x126dc0");
#endif

    ctx->pc = 0x126dc0u;

    // 0x126dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126dc8: 0xc049fca  jal         func_127F28
    ctx->pc = 0x126DC8u;
    SET_GPR_U32(ctx, 31, 0x126DD0u);
    ctx->pc = 0x126DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126DC8u;
            // 0x126dcc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (runtime->hasFunction(0x127F28u)) {
        auto targetFn = runtime->lookupFunction(0x127F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126DD0u; }
        if (ctx->pc != 0x126DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x127f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126DD0u; }
        if (ctx->pc != 0x126DD0u) { return; }
    }
    ctx->pc = 0x126DD0u;
    // 0x126dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x126DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126DD4u;
            // 0x126dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126DDCu;
}
