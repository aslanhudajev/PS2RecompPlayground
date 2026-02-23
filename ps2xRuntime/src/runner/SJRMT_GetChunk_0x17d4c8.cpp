#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_GetChunk
// Address: 0x17d4c8 - 0x17d53c
void SJRMT_GetChunk_0x17d4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_GetChunk");


    ctx->pc = 0x17d4c8u;

    // 0x17d4c8: 0x27bdffc0
    ctx->pc = 0x17d4c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d4cc: 0x3c03002e
    ctx->pc = 0x17d4ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x17d4d0: 0xffb10010
    ctx->pc = 0x17d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17d4d4: 0x246218c0
    ctx->pc = 0x17d4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 6336));
    // 0x17d4d8: 0xffb20020
    ctx->pc = 0x17d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17d4dc: 0x3c11002e
    ctx->pc = 0x17d4dcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)46 << 16));
    // 0x17d4e0: 0xffb00000
    ctx->pc = 0x17d4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d4e4: 0xe0902d
    ctx->pc = 0x17d4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4e8: 0xac6418c0
    ctx->pc = 0x17d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6336), GPR_U32(ctx, 4));
    // 0x17d4ec: 0x263019c0
    ctx->pc = 0x17d4ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 6592));
    // 0x17d4f0: 0xffbf0030
    ctx->pc = 0x17d4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d4f4: 0x200382d
    ctx->pc = 0x17d4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4f8: 0xac450004
    ctx->pc = 0x17d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x17d4fc: 0x24040026
    ctx->pc = 0x17d4fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 38));
    // 0x17d500: 0xac460008
    ctx->pc = 0x17d500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x17d504: 0x40282d
    ctx->pc = 0x17d504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d508: 0x24060003
    ctx->pc = 0x17d508u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d50c: 0xc05dcd2
    ctx->pc = 0x17D50Cu;
    SET_GPR_U32(ctx, 31, 0x17D514u);
    ctx->pc = 0x17D510u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D514u; }
        else if (ctx->pc != 0x17D514u) { ctx->pc = 0x17D514u; }
    }
    if (ctx->pc != 0x17D514u) { return; }
    ctx->pc = 0x17D514u;
    // 0x17d514: 0x8e2319c0
    ctx->pc = 0x17d514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 6592)));
    // 0x17d518: 0x8e020004
    ctx->pc = 0x17d518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d51c: 0xae430000
    ctx->pc = 0x17d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x17d520: 0xae420004
    ctx->pc = 0x17d520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x17d524: 0xdfbf0030
    ctx->pc = 0x17d524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d528: 0xdfb20020
    ctx->pc = 0x17d528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d52c: 0xdfb10010
    ctx->pc = 0x17d52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d530: 0xdfb00000
    ctx->pc = 0x17d530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d534: 0x3e00008
    ctx->pc = 0x17D534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D538u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D53Cu;
}
