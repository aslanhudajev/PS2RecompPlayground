#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_UngetChunk
// Address: 0x17d540 - 0x17d57c
void SJRMT_UngetChunk_0x17d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_UngetChunk");


    ctx->pc = 0x17d540u;

    // 0x17d540: 0xc0482d
    ctx->pc = 0x17d540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d544: 0x3c02002e
    ctx->pc = 0x17d544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17d548: 0x8d270000
    ctx->pc = 0x17d548u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17d54c: 0x244318c0
    ctx->pc = 0x17d54cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6336));
    // 0x17d550: 0xac4418c0
    ctx->pc = 0x17d550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6336), GPR_U32(ctx, 4));
    // 0x17d554: 0x24060004
    ctx->pc = 0x17d554u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d558: 0xac650004
    ctx->pc = 0x17d558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x17d55c: 0x24040027
    ctx->pc = 0x17d55cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 39));
    // 0x17d560: 0xac670008
    ctx->pc = 0x17d560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x17d564: 0x60282d
    ctx->pc = 0x17d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d568: 0x382d
    ctx->pc = 0x17d568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d56c: 0x402d
    ctx->pc = 0x17d56cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d570: 0x8d220004
    ctx->pc = 0x17d570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x17d574: 0x805dcd2
    ctx->pc = 0x17D574u;
    ctx->pc = 0x17D578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x177348u;
    DTX_CallUrpc_0x177348(rdram, ctx, runtime); return;
    ctx->pc = 0x17D57Cu;
}
