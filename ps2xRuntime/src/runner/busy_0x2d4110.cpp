#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: busy
// Address: 0x2d4110 - 0x2d413c
void busy_0x2d4110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4110u;

    // 0x2d4110: 0x27bdffe0
    ctx->pc = 0x2d4110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4114: 0xffbf0010
    ctx->pc = 0x2d4114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4118: 0x24050001
    ctx->pc = 0x2d4118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d411c: 0xc0c1d12
    ctx->pc = 0x2D411Cu;
    SET_GPR_U32(ctx, 31, 0x2D4124u);
    ctx->pc = 0x2D4120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x307448u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceIoctl_0x307448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4124u; }
    }
    if (ctx->pc != 0x2D4124u) { return; }
    ctx->pc = 0x2D4124u;
    // 0x2d4124: 0x3c03003d
    ctx->pc = 0x2d4124u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2d4128: 0xac622f5c
    ctx->pc = 0x2d4128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12124), GPR_U32(ctx, 2));
    // 0x2d412c: 0x8fa20000
    ctx->pc = 0x2d412cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4130: 0xdfbf0010
    ctx->pc = 0x2d4130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4134: 0x3e00008
    ctx->pc = 0x2D4134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4138u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D413Cu;
}
