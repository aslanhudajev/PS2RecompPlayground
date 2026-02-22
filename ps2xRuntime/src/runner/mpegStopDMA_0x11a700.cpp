#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegStopDMA
// Address: 0x11a700 - 0x11a724
void mpegStopDMA_0x11a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a700u;

    // 0x11a700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a704: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x11a704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x11a708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a70c: 0xc04717a  jal         func_11C5E8
    ctx->pc = 0x11A70Cu;
    SET_GPR_U32(ctx, 31, 0x11A714u);
    ctx->pc = 0x11A710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A70Cu;
            // 0x11a710: 0x2484e610  addiu       $a0, $a0, -0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C5E8u;
    if (runtime->hasFunction(0x11C5E8u)) {
        auto targetFn = runtime->lookupFunction(0x11C5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A714u; }
        if (ctx->pc != 0x11A714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufStopDMA_0x11c5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A714u; }
        if (ctx->pc != 0x11A714u) { return; }
    }
    ctx->pc = 0x11A714u;
    // 0x11a714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A71Cu;
            // 0x11a720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A724u;
}
