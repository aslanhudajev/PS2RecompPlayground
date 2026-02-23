#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BgJob_WaitVU__FPi
// Address: 0x1f2cc0 - 0x1f2ce0
void BgJob_WaitVU__FPi_0x1f2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BgJob_WaitVU__FPi");


    ctx->pc = 0x1f2cc0u;

    // 0x1f2cc0: 0x27bdfff0
    ctx->pc = 0x1f2cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2cc4: 0x3c020051
    ctx->pc = 0x1f2cc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f2cc8: 0x7fbf0000
    ctx->pc = 0x1f2cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f2ccc: 0xc08634c
    ctx->pc = 0x1F2CCCu;
    SET_GPR_U32(ctx, 31, 0x1F2CD4u);
    ctx->pc = 0x1F2CD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        exec__13EntryDatClassFv_0x218d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CD4u; }
        else if (ctx->pc != 0x1F2CD4u) { ctx->pc = 0x1F2CD4u; }
    }
    if (ctx->pc != 0x1F2CD4u) { return; }
    ctx->pc = 0x1F2CD4u;
    // 0x1f2cd4: 0x7bbf0000
    ctx->pc = 0x1f2cd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2cd8: 0x3e00008
    ctx->pc = 0x1F2CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2CE0u;
}
