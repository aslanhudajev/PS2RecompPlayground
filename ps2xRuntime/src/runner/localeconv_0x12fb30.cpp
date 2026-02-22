#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: localeconv
// Address: 0x12fb30 - 0x12fb54
void localeconv_0x12fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fb30u;

    // 0x12fb30: 0x3c020017
    ctx->pc = 0x12fb30u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x12fb34: 0x27bdfff0
    ctx->pc = 0x12fb34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fb38: 0x8c442544
    ctx->pc = 0x12fb38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 9540)));
    // 0x12fb3c: 0xffbf0000
    ctx->pc = 0x12fb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fb40: 0xc04bebc
    ctx->pc = 0x12FB40u;
    SET_GPR_U32(ctx, 31, 0x12FB48u);
    ctx->pc = 0x12FAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _localeconv_r_0x12faf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB48u; }
    }
    if (ctx->pc != 0x12FB48u) { return; }
    ctx->pc = 0x12FB48u;
    // 0x12fb48: 0xdfbf0000
    ctx->pc = 0x12fb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fb4c: 0x3e00008
    ctx->pc = 0x12FB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FB54u;
}
