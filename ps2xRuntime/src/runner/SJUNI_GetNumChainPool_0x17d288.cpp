#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_GetNumChainPool
// Address: 0x17d288 - 0x17d2bc
void SJUNI_GetNumChainPool_0x17d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_GetNumChainPool");


    ctx->pc = 0x17d288u;

    // 0x17d288: 0x8c830014
    ctx->pc = 0x17d288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17d28c: 0x10600009
    ctx->pc = 0x17D28Cu;
    {
        const bool branch_taken_0x17d28c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D290u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d28c) {
            ctx->pc = 0x17D2B4u;
            goto label_17d2b4;
        }
    }
    ctx->pc = 0x17D294u;
    // 0x17d294: 0x0
    ctx->pc = 0x17d294u;
    // NOP
label_17d298:
    // 0x17d298: 0x8c630000
    ctx->pc = 0x17d298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d29c: 0x24420001
    ctx->pc = 0x17d29cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d2a0: 0x0
    ctx->pc = 0x17d2a0u;
    // NOP
    // 0x17d2a4: 0x0
    ctx->pc = 0x17d2a4u;
    // NOP
    // 0x17d2a8: 0x0
    ctx->pc = 0x17d2a8u;
    // NOP
    // 0x17d2ac: 0x1460fffa
    ctx->pc = 0x17D2ACu;
    {
        const bool branch_taken_0x17d2ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d2ac) {
            ctx->pc = 0x17D298u;
            goto label_17d298;
        }
    }
    ctx->pc = 0x17D2B4u;
label_17d2b4:
    // 0x17d2b4: 0x3e00008
    ctx->pc = 0x17D2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D298u: goto label_17d298;
            case 0x17D2B4u: goto label_17d2b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D2BCu;
}
