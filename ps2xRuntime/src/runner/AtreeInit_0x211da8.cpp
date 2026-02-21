#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeInit
// Address: 0x211da8 - 0x211dc4
void AtreeInit_0x211da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211da8u;

    // 0x211da8: 0x27bdfff0
    ctx->pc = 0x211da8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211dac: 0xffbf0000
    ctx->pc = 0x211dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211db0: 0xc0846a4
    ctx->pc = 0x211DB0u;
    SET_GPR_U32(ctx, 31, 0x211DB8u);
    ctx->pc = 0x211DB4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitSub_0x211a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211DB8u; }
    }
    if (ctx->pc != 0x211DB8u) { return; }
    ctx->pc = 0x211DB8u;
    // 0x211db8: 0xdfbf0000
    ctx->pc = 0x211db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211dbc: 0x3e00008
    ctx->pc = 0x211DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211DC4u;
}
