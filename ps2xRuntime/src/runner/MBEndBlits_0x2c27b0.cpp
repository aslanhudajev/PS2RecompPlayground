#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBEndBlits
// Address: 0x2c27b0 - 0x2c27d4
void MBEndBlits_0x2c27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c27b0u;

    // 0x2c27b0: 0x27bdfff0
    ctx->pc = 0x2c27b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c27b4: 0xffbf0000
    ctx->pc = 0x2c27b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c27b8: 0xc0b04fa
    ctx->pc = 0x2C27B8u;
    SET_GPR_U32(ctx, 31, 0x2C27C0u);
    ctx->pc = 0x2C13E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSendExitRegs_0x2c13e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27C0u; }
    }
    if (ctx->pc != 0x2C27C0u) { return; }
    ctx->pc = 0x2C27C0u;
    // 0x2c27c0: 0xc0a94aa
    ctx->pc = 0x2C27C0u;
    SET_GPR_U32(ctx, 31, 0x2C27C8u);
    ctx->pc = 0x2A52A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPFreeAll_0x2a52a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C27C8u; }
    }
    if (ctx->pc != 0x2C27C8u) { return; }
    ctx->pc = 0x2C27C8u;
    // 0x2c27c8: 0xdfbf0000
    ctx->pc = 0x2c27c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c27cc: 0x80aff06
    ctx->pc = 0x2C27CCu;
    ctx->pc = 0x2C27D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2BFC18u;
    pbResetDORegs_0x2bfc18(rdram, ctx, runtime); return;
    ctx->pc = 0x2C27D4u;
}
