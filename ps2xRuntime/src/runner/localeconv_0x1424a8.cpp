#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: localeconv
// Address: 0x1424a8 - 0x1424cc
void localeconv_0x1424a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("localeconv");


    ctx->pc = 0x1424a8u;

    // 0x1424a8: 0x3c020022
    ctx->pc = 0x1424a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1424ac: 0x27bdfff0
    ctx->pc = 0x1424acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1424b0: 0x8c4471ec
    ctx->pc = 0x1424b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 29164)));
    // 0x1424b4: 0xffbf0000
    ctx->pc = 0x1424b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1424b8: 0xc05091a
    ctx->pc = 0x1424B8u;
    SET_GPR_U32(ctx, 31, 0x1424C0u);
    ctx->pc = 0x142468u;
    {
        const uint32_t __entryPc = ctx->pc;
        _localeconv_r_0x142468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424C0u; }
        else if (ctx->pc != 0x1424C0u) { ctx->pc = 0x1424C0u; }
    }
    if (ctx->pc != 0x1424C0u) { return; }
    ctx->pc = 0x1424C0u;
    // 0x1424c0: 0xdfbf0000
    ctx->pc = 0x1424c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1424c4: 0x3e00008
    ctx->pc = 0x1424C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1424C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1424CCu;
}
