#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_CreateRmt
// Address: 0x17d3c0 - 0x17d410
void SJUNI_CreateRmt_0x17d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_CreateRmt");


    ctx->pc = 0x17d3c0u;

    // 0x17d3c0: 0x27bdffe0
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d3c4: 0x3c02002e
    ctx->pc = 0x17d3c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17d3c8: 0x244318c0
    ctx->pc = 0x17d3c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6336));
    // 0x17d3cc: 0xac4418c0
    ctx->pc = 0x17d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6336), GPR_U32(ctx, 4));
    // 0x17d3d0: 0xffb00000
    ctx->pc = 0x17d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d3d4: 0x24040022
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    // 0x17d3d8: 0x3c10002e
    ctx->pc = 0x17d3d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x17d3dc: 0xac650004
    ctx->pc = 0x17d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x17d3e0: 0xac660008
    ctx->pc = 0x17d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x17d3e4: 0x260719c0
    ctx->pc = 0x17d3e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 6592));
    // 0x17d3e8: 0xffbf0010
    ctx->pc = 0x17d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d3ec: 0x60282d
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3f0: 0x24060003
    ctx->pc = 0x17d3f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d3f4: 0xc05dcd2
    ctx->pc = 0x17D3F4u;
    SET_GPR_U32(ctx, 31, 0x17D3FCu);
    ctx->pc = 0x17D3F8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3FCu; }
        else if (ctx->pc != 0x17D3FCu) { ctx->pc = 0x17D3FCu; }
    }
    if (ctx->pc != 0x17D3FCu) { return; }
    ctx->pc = 0x17D3FCu;
    // 0x17d3fc: 0x8e0219c0
    ctx->pc = 0x17d3fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6592)));
    // 0x17d400: 0xdfbf0010
    ctx->pc = 0x17d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d404: 0xdfb00000
    ctx->pc = 0x17d404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d408: 0x3e00008
    ctx->pc = 0x17D408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D40Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D410u;
}
