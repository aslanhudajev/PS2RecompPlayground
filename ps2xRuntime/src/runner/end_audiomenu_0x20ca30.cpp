#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: end_audiomenu
// Address: 0x20ca30 - 0x20ca58
void end_audiomenu_0x20ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20ca30u;

    // 0x20ca30: 0x27bdfff0
    ctx->pc = 0x20ca30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ca34: 0xffbf0000
    ctx->pc = 0x20ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ca38: 0x3c04003c
    ctx->pc = 0x20ca38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x20ca3c: 0xc083274
    ctx->pc = 0x20CA3Cu;
    SET_GPR_U32(ctx, 31, 0x20CA44u);
    ctx->pc = 0x20CA40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952296));
    ctx->pc = 0x20C9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_audioslider_0x20c9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CA44u; }
    }
    if (ctx->pc != 0x20CA44u) { return; }
    ctx->pc = 0x20CA44u;
    // 0x20ca44: 0x3c04003c
    ctx->pc = 0x20ca44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x20ca48: 0x2484c580
    ctx->pc = 0x20ca48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952320));
    // 0x20ca4c: 0xdfbf0000
    ctx->pc = 0x20ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ca50: 0x8083274
    ctx->pc = 0x20CA50u;
    ctx->pc = 0x20CA54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x20C9D0u;
    end_audioslider_0x20c9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x20CA58u;
}
