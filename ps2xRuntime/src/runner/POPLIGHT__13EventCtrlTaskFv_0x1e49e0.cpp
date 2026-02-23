#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: POPLIGHT__13EventCtrlTaskFv
// Address: 0x1e49e0 - 0x1e4a14
void POPLIGHT__13EventCtrlTaskFv_0x1e49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("POPLIGHT__13EventCtrlTaskFv");


    ctx->pc = 0x1e49e0u;

    // 0x1e49e0: 0x27bdffe0
    ctx->pc = 0x1e49e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e49e4: 0x7fbf0010
    ctx->pc = 0x1e49e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e49e8: 0x7fb00000
    ctx->pc = 0x1e49e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e49ec: 0x70808628
    ctx->pc = 0x1e49ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e49f0: 0xc07c32c
    ctx->pc = 0x1E49F0u;
    SET_GPR_U32(ctx, 31, 0x1E49F8u);
    ctx->pc = 0x1E49F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x1F0CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PopLight__13LightCtrlTaskFv_0x1f0cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49F8u; }
        else if (ctx->pc != 0x1E49F8u) { ctx->pc = 0x1E49F8u; }
    }
    if (ctx->pc != 0x1E49F8u) { return; }
    ctx->pc = 0x1E49F8u;
    // 0x1e49f8: 0x8e03000c
    ctx->pc = 0x1e49f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e49fc: 0x24630008
    ctx->pc = 0x1e49fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4a00: 0xae03000c
    ctx->pc = 0x1e4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4a04: 0x7bbf0010
    ctx->pc = 0x1e4a04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4a08: 0x7bb00000
    ctx->pc = 0x1e4a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4a0c: 0x3e00008
    ctx->pc = 0x1E4A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4A14u;
}
