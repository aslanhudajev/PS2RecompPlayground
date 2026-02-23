#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_GetOutVol
// Address: 0x18fad8 - 0x18faf4
void SFADXT_GetOutVol_0x18fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_GetOutVol");


    ctx->pc = 0x18fad8u;

    // 0x18fad8: 0x27bdfff0
    ctx->pc = 0x18fad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18fadc: 0xffbf0000
    ctx->pc = 0x18fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fae0: 0xc05c8ce
    ctx->pc = 0x18FAE0u;
    SET_GPR_U32(ctx, 31, 0x18FAE8u);
    ctx->pc = 0x18FAE4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    ctx->pc = 0x172338u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetOutVol_0x172338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FAE8u; }
        else if (ctx->pc != 0x18FAE8u) { ctx->pc = 0x18FAE8u; }
    }
    if (ctx->pc != 0x18FAE8u) { return; }
    ctx->pc = 0x18FAE8u;
    // 0x18fae8: 0xdfbf0000
    ctx->pc = 0x18fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18faec: 0x3e00008
    ctx->pc = 0x18FAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FAF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FAF4u;
}
