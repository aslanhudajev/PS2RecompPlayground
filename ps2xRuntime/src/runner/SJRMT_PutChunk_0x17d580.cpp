#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_PutChunk
// Address: 0x17d580 - 0x17d5bc
void SJRMT_PutChunk_0x17d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_PutChunk");


    ctx->pc = 0x17d580u;

    // 0x17d580: 0xc0482d
    ctx->pc = 0x17d580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d584: 0x3c02002e
    ctx->pc = 0x17d584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17d588: 0x8d270000
    ctx->pc = 0x17d588u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17d58c: 0x244318c0
    ctx->pc = 0x17d58cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6336));
    // 0x17d590: 0xac4418c0
    ctx->pc = 0x17d590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6336), GPR_U32(ctx, 4));
    // 0x17d594: 0x24060004
    ctx->pc = 0x17d594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d598: 0xac650004
    ctx->pc = 0x17d598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x17d59c: 0x24040028
    ctx->pc = 0x17d59cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    // 0x17d5a0: 0xac670008
    ctx->pc = 0x17d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x17d5a4: 0x60282d
    ctx->pc = 0x17d5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5a8: 0x382d
    ctx->pc = 0x17d5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5ac: 0x402d
    ctx->pc = 0x17d5acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5b0: 0x8d220004
    ctx->pc = 0x17d5b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x17d5b4: 0x805dcd2
    ctx->pc = 0x17D5B4u;
    ctx->pc = 0x17D5B8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x177348u;
    DTX_CallUrpc_0x177348(rdram, ctx, runtime); return;
    ctx->pc = 0x17D5BCu;
}
