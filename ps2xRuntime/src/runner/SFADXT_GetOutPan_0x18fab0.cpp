#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_GetOutPan
// Address: 0x18fab0 - 0x18facc
void SFADXT_GetOutPan_0x18fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_GetOutPan");


    ctx->pc = 0x18fab0u;

    // 0x18fab0: 0x27bdfff0
    ctx->pc = 0x18fab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18fab4: 0xffbf0000
    ctx->pc = 0x18fab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fab8: 0xc05c8c4
    ctx->pc = 0x18FAB8u;
    SET_GPR_U32(ctx, 31, 0x18FAC0u);
    ctx->pc = 0x18FABCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    ctx->pc = 0x172310u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetOutPan_0x172310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FAC0u; }
        else if (ctx->pc != 0x18FAC0u) { ctx->pc = 0x18FAC0u; }
    }
    if (ctx->pc != 0x18FAC0u) { return; }
    ctx->pc = 0x18FAC0u;
    // 0x18fac0: 0xdfbf0000
    ctx->pc = 0x18fac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fac4: 0x3e00008
    ctx->pc = 0x18FAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FAC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FACCu;
}
