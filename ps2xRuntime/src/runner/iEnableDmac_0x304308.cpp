#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iEnableDmac
// Address: 0x304308 - 0x304328
void iEnableDmac_0x304308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304308u;

    // 0x304308: 0x27bdfff0
    ctx->pc = 0x304308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30430c: 0xffbf0000
    ctx->pc = 0x30430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304310: 0xc0c0ce8
    ctx->pc = 0x304310u;
    SET_GPR_U32(ctx, 31, 0x304318u);
    ctx->pc = 0x3033A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iEnableDmac_0x3033a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304318u; }
    }
    if (ctx->pc != 0x304318u) { return; }
    ctx->pc = 0x304318u;
    // 0x304318: 0xf
    ctx->pc = 0x304318u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x30431c: 0xdfbf0000
    ctx->pc = 0x30431cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304320: 0x3e00008
    ctx->pc = 0x304320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304324u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304328u;
}
