#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: localeconv
// Address: 0x301e08 - 0x301e2c
void localeconv_0x301e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x301e08u;

    // 0x301e08: 0x3c02003a
    ctx->pc = 0x301e08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x301e0c: 0x27bdfff0
    ctx->pc = 0x301e0cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x301e10: 0x8c443dec
    ctx->pc = 0x301e10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15852)));
    // 0x301e14: 0xffbf0000
    ctx->pc = 0x301e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x301e18: 0xc0c0772
    ctx->pc = 0x301E18u;
    SET_GPR_U32(ctx, 31, 0x301E20u);
    ctx->pc = 0x301DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _localeconv_r_0x301dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301E20u; }
    }
    if (ctx->pc != 0x301E20u) { return; }
    ctx->pc = 0x301E20u;
    // 0x301e20: 0xdfbf0000
    ctx->pc = 0x301e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301e24: 0x3e00008
    ctx->pc = 0x301E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301E28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301E2Cu;
}
