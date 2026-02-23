#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_GetNumChunk
// Address: 0x17d248 - 0x17d284
void SJUNI_GetNumChunk_0x17d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_GetNumChunk");


    ctx->pc = 0x17d248u;

    // 0x17d248: 0x52880
    ctx->pc = 0x17d248u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17d24c: 0x852021
    ctx->pc = 0x17d24cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17d250: 0x8c830018
    ctx->pc = 0x17d250u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17d254: 0x10600009
    ctx->pc = 0x17D254u;
    {
        const bool branch_taken_0x17d254 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D258u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d254) {
            ctx->pc = 0x17D27Cu;
            goto label_17d27c;
        }
    }
    ctx->pc = 0x17D25Cu;
    // 0x17d25c: 0x0
    ctx->pc = 0x17d25cu;
    // NOP
label_17d260:
    // 0x17d260: 0x8c630000
    ctx->pc = 0x17d260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d264: 0x24420001
    ctx->pc = 0x17d264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d268: 0x0
    ctx->pc = 0x17d268u;
    // NOP
    // 0x17d26c: 0x0
    ctx->pc = 0x17d26cu;
    // NOP
    // 0x17d270: 0x0
    ctx->pc = 0x17d270u;
    // NOP
    // 0x17d274: 0x1460fffa
    ctx->pc = 0x17D274u;
    {
        const bool branch_taken_0x17d274 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d274) {
            ctx->pc = 0x17D260u;
            goto label_17d260;
        }
    }
    ctx->pc = 0x17D27Cu;
label_17d27c:
    // 0x17d27c: 0x3e00008
    ctx->pc = 0x17D27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D260u: goto label_17d260;
            case 0x17D27Cu: goto label_17d27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D284u;
}
