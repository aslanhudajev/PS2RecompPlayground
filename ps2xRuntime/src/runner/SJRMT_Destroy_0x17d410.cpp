#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_Destroy
// Address: 0x17d410 - 0x17d430
void SJRMT_Destroy_0x17d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_Destroy");


    ctx->pc = 0x17d410u;

    // 0x17d410: 0x3c05002e
    ctx->pc = 0x17d410u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x17d414: 0x24060001
    ctx->pc = 0x17d414u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d418: 0xaca418c0
    ctx->pc = 0x17d418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6336), GPR_U32(ctx, 4));
    // 0x17d41c: 0x382d
    ctx->pc = 0x17d41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d420: 0x24a518c0
    ctx->pc = 0x17d420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6336));
    // 0x17d424: 0x24040023
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 35));
    // 0x17d428: 0x805dcd2
    ctx->pc = 0x17D428u;
    ctx->pc = 0x17D42Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177348u;
    DTX_CallUrpc_0x177348(rdram, ctx, runtime); return;
    ctx->pc = 0x17D430u;
}
