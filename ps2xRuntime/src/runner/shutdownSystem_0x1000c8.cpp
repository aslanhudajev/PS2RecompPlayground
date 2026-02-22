#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shutdownSystem
// Address: 0x1000c8 - 0x1000e4
void shutdownSystem_0x1000c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1000c8u;

    // 0x1000c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1000c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1000cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1000ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1000d0: 0xc040ad4  jal         func_102B50
    ctx->pc = 0x1000D0u;
    SET_GPR_U32(ctx, 31, 0x1000D8u);
    ctx->pc = 0x102B50u;
    if (runtime->hasFunction(0x102B50u)) {
        auto targetFn = runtime->lookupFunction(0x102B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1000D8u; }
        if (ctx->pc != 0x1000D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        clearVRAM_0x102b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1000D8u; }
        if (ctx->pc != 0x1000D8u) { return; }
    }
    ctx->pc = 0x1000D8u;
    // 0x1000d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1000d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1000dc: 0x8042c86  j           func_10B218
    ctx->pc = 0x1000DCu;
    ctx->pc = 0x1000E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1000DCu;
            // 0x1000e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B218u;
    if (runtime->hasFunction(0x10B218u)) {
        auto targetFn = runtime->lookupFunction(0x10B218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        StopAllSounds_0x10b218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1000E4u;
}
