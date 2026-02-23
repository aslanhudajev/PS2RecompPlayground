#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_Reset
// Address: 0x17d4a8 - 0x17d4c8
void SJRMT_Reset_0x17d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_Reset");


    ctx->pc = 0x17d4a8u;

    // 0x17d4a8: 0x3c05002e
    ctx->pc = 0x17d4a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x17d4ac: 0x24060001
    ctx->pc = 0x17d4acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d4b0: 0xaca418c0
    ctx->pc = 0x17d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6336), GPR_U32(ctx, 4));
    // 0x17d4b4: 0x382d
    ctx->pc = 0x17d4b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4b8: 0x24a518c0
    ctx->pc = 0x17d4b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6336));
    // 0x17d4bc: 0x24040025
    ctx->pc = 0x17d4bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 37));
    // 0x17d4c0: 0x805dcd2
    ctx->pc = 0x17D4C0u;
    ctx->pc = 0x17D4C4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177348u;
    DTX_CallUrpc_0x177348(rdram, ctx, runtime); return;
    ctx->pc = 0x17D4C8u;
}
