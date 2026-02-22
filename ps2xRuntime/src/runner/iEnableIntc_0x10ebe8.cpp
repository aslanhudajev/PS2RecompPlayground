#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iEnableIntc
// Address: 0x10ebe8 - 0x10ec08
void iEnableIntc_0x10ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ebe8u;

    // 0x10ebe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ebec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ebf0: 0xc043810  jal         func_10E040
    ctx->pc = 0x10EBF0u;
    SET_GPR_U32(ctx, 31, 0x10EBF8u);
    ctx->pc = 0x10E040u;
    if (runtime->hasFunction(0x10E040u)) {
        auto targetFn = runtime->lookupFunction(0x10E040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBF8u; }
        if (ctx->pc != 0x10EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iEnableIntc_0x10e040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBF8u; }
        if (ctx->pc != 0x10EBF8u) { return; }
    }
    ctx->pc = 0x10EBF8u;
    // 0x10ebf8: 0xf  sync
    ctx->pc = 0x10ebf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ebfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ebfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec00: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC00u;
            // 0x10ec04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EC08u;
}
