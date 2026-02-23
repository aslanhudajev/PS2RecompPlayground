#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyIsNextFrmReady
// Address: 0x18dd60 - 0x18dd84
void mwPlyIsNextFrmReady_0x18dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyIsNextFrmReady");


    ctx->pc = 0x18dd60u;

    // 0x18dd60: 0x27bdfff0
    ctx->pc = 0x18dd60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18dd64: 0xffbf0000
    ctx->pc = 0x18dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dd68: 0xc063d42
    ctx->pc = 0x18DD68u;
    SET_GPR_U32(ctx, 31, 0x18DD70u);
    ctx->pc = 0x18F508u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetSfdHn_0x18f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD70u; }
        else if (ctx->pc != 0x18DD70u) { ctx->pc = 0x18DD70u; }
    }
    if (ctx->pc != 0x18DD70u) { return; }
    ctx->pc = 0x18DD70u;
    // 0x18dd70: 0xc065644
    ctx->pc = 0x18DD70u;
    SET_GPR_U32(ctx, 31, 0x18DD78u);
    ctx->pc = 0x18DD74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195910u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_IsNextFrmReady_0x195910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD78u; }
        else if (ctx->pc != 0x18DD78u) { ctx->pc = 0x18DD78u; }
    }
    if (ctx->pc != 0x18DD78u) { return; }
    ctx->pc = 0x18DD78u;
    // 0x18dd78: 0xdfbf0000
    ctx->pc = 0x18dd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd7c: 0x3e00008
    ctx->pc = 0x18DD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DD84u;
}
