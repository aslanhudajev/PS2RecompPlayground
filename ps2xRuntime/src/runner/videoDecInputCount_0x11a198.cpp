#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecInputCount
// Address: 0x11a198 - 0x11a1b4
void videoDecInputCount_0x11a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a198u;

    // 0x11a198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a19c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a1a0: 0xc0472a8  jal         func_11CAA0
    ctx->pc = 0x11A1A0u;
    SET_GPR_U32(ctx, 31, 0x11A1A8u);
    ctx->pc = 0x11A1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1A0u;
            // 0x11a1a4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CAA0u;
    if (runtime->hasFunction(0x11CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x11CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1A8u; }
        if (ctx->pc != 0x11A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufCount_0x11caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1A8u; }
        if (ctx->pc != 0x11A1A8u) { return; }
    }
    ctx->pc = 0x11A1A8u;
    // 0x11a1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11A1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1ACu;
            // 0x11a1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A1B4u;
}
