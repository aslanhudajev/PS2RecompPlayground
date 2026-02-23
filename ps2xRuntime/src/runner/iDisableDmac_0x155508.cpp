#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iDisableDmac
// Address: 0x155508 - 0x155528
void iDisableDmac_0x155508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iDisableDmac");


    ctx->pc = 0x155508u;

    // 0x155508: 0x27bdfff0
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15550c: 0xffbf0000
    ctx->pc = 0x15550cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155510: 0xc0551ac
    ctx->pc = 0x155510u;
    SET_GPR_U32(ctx, 31, 0x155518u);
    ctx->pc = 0x1546B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iDisableDmac_0x1546b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155518u; }
        else if (ctx->pc != 0x155518u) { ctx->pc = 0x155518u; }
    }
    if (ctx->pc != 0x155518u) { return; }
    ctx->pc = 0x155518u;
    // 0x155518: 0xf
    ctx->pc = 0x155518u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x15551c: 0xdfbf0000
    ctx->pc = 0x15551cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155520: 0x3e00008
    ctx->pc = 0x155520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155524u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155528u;
}
