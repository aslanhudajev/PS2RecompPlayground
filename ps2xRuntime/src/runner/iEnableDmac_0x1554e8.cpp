#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iEnableDmac
// Address: 0x1554e8 - 0x155508
void iEnableDmac_0x1554e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iEnableDmac");


    ctx->pc = 0x1554e8u;

    // 0x1554e8: 0x27bdfff0
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1554ec: 0xffbf0000
    ctx->pc = 0x1554ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1554f0: 0xc0551a8
    ctx->pc = 0x1554F0u;
    SET_GPR_U32(ctx, 31, 0x1554F8u);
    ctx->pc = 0x1546A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iEnableDmac_0x1546a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1554F8u; }
        else if (ctx->pc != 0x1554F8u) { ctx->pc = 0x1554F8u; }
    }
    if (ctx->pc != 0x1554F8u) { return; }
    ctx->pc = 0x1554F8u;
    // 0x1554f8: 0xf
    ctx->pc = 0x1554f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1554fc: 0xdfbf0000
    ctx->pc = 0x1554fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155500: 0x3e00008
    ctx->pc = 0x155500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155504u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155508u;
}
