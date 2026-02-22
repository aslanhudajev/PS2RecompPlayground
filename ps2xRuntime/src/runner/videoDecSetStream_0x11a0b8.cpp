#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecSetStream
// Address: 0x11a0b8 - 0x11a0d8
void videoDecSetStream_0x11a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a0b8u;

    // 0x11a0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a0c0: 0xc047a86  jal         func_11EA18
    ctx->pc = 0x11A0C0u;
    SET_GPR_U32(ctx, 31, 0x11A0C8u);
    ctx->pc = 0x11EA18u;
    if (runtime->hasFunction(0x11EA18u)) {
        auto targetFn = runtime->lookupFunction(0x11EA18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0C8u; }
        if (ctx->pc != 0x11A0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddStrCallback_0x11ea18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0C8u; }
        if (ctx->pc != 0x11A0C8u) { return; }
    }
    ctx->pc = 0x11A0C8u;
    // 0x11a0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a0cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11A0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0D0u;
            // 0x11a0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A0D8u;
}
