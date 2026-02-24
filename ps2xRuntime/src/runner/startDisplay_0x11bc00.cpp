#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: startDisplay
// Address: 0x11bc00 - 0x11bc3c
void startDisplay_0x11bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11bc00u;

    // 0x11bc00: 0x27bdffe0
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bc04: 0xffb00000
    ctx->pc = 0x11bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bc08: 0xffbf0010
    ctx->pc = 0x11bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bc0c: 0x80802d
    ctx->pc = 0x11bc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bc10:
    // 0x11bc10: 0xc0432fc
    ctx->pc = 0x11BC10u;
    SET_GPR_U32(ctx, 31, 0x11BC18u);
    ctx->pc = 0x11BC14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC18u; }
    }
    if (ctx->pc != 0x11BC18u) { return; }
    ctx->pc = 0x11BC18u;
    // 0x11bc18: 0x1050fffd
    ctx->pc = 0x11BC18u;
    {
        const bool branch_taken_0x11bc18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x11BC1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11bc18) {
            ctx->pc = 0x11BC10u;
            goto label_11bc10;
        }
    }
    ctx->pc = 0x11BC20u;
    // 0x11bc20: 0xdfbf0010
    ctx->pc = 0x11bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bc24: 0xaf82843c
    ctx->pc = 0x11bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 2));
    // 0x11bc28: 0xdfb00000
    ctx->pc = 0x11bc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bc2c: 0xaf8084c8
    ctx->pc = 0x11bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 0));
    // 0x11bc30: 0xaf808440
    ctx->pc = 0x11bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 0));
    // 0x11bc34: 0x3e00008
    ctx->pc = 0x11BC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BC10u: goto label_11bc10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BC3Cu;
}
