#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMbai
// Address: 0x189ca0 - 0x189cc4
void mpvvlc_InitMbai_0x189ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMbai");


    ctx->pc = 0x189ca0u;

    // 0x189ca0: 0x27bdfff0
    ctx->pc = 0x189ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189ca4: 0xffbf0000
    ctx->pc = 0x189ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189ca8: 0xc062732
    ctx->pc = 0x189CA8u;
    SET_GPR_U32(ctx, 31, 0x189CB0u);
    ctx->pc = 0x189CC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitMbaiIpic_0x189cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CB0u; }
        else if (ctx->pc != 0x189CB0u) { ctx->pc = 0x189CB0u; }
    }
    if (ctx->pc != 0x189CB0u) { return; }
    ctx->pc = 0x189CB0u;
    // 0x189cb0: 0xc062872
    ctx->pc = 0x189CB0u;
    SET_GPR_U32(ctx, 31, 0x189CB8u);
    ctx->pc = 0x18A1C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitMbaiPpic_0x18a1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189CB8u; }
        else if (ctx->pc != 0x189CB8u) { ctx->pc = 0x189CB8u; }
    }
    if (ctx->pc != 0x189CB8u) { return; }
    ctx->pc = 0x189CB8u;
    // 0x189cb8: 0xdfbf0000
    ctx->pc = 0x189cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189cbc: 0x806294c
    ctx->pc = 0x189CBCu;
    ctx->pc = 0x189CC0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18A530u;
    mpvvlc_InitMbaiBpic_0x18a530(rdram, ctx, runtime); return;
    ctx->pc = 0x189CC4u;
}
