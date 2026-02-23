#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPLY_Init
// Address: 0x19aad0 - 0x19aaf4
void SFPLY_Init_0x19aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPLY_Init");


    ctx->pc = 0x19aad0u;

    // 0x19aad0: 0x27bdfff0
    ctx->pc = 0x19aad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19aad4: 0xffbf0000
    ctx->pc = 0x19aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19aad8: 0xc066abe
    ctx->pc = 0x19AAD8u;
    SET_GPR_U32(ctx, 31, 0x19AAE0u);
    ctx->pc = 0x19AAF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_ChkCondDfl_0x19aaf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAE0u; }
        else if (ctx->pc != 0x19AAE0u) { ctx->pc = 0x19AAE0u; }
    }
    if (ctx->pc != 0x19AAE0u) { return; }
    ctx->pc = 0x19AAE0u;
    // 0x19aae0: 0x3c020026
    ctx->pc = 0x19aae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19aae4: 0xdfbf0000
    ctx->pc = 0x19aae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aae8: 0xac40df58
    ctx->pc = 0x19aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958936), GPR_U32(ctx, 0));
    // 0x19aaec: 0x3e00008
    ctx->pc = 0x19AAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AAF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AAF4u;
}
