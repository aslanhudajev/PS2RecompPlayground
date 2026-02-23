#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRMT_GetNumData
// Address: 0x17d5c0 - 0x17d60c
void SJRMT_GetNumData_0x17d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRMT_GetNumData");


    ctx->pc = 0x17d5c0u;

    // 0x17d5c0: 0x27bdffe0
    ctx->pc = 0x17d5c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d5c4: 0x3c02002e
    ctx->pc = 0x17d5c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17d5c8: 0x244318c0
    ctx->pc = 0x17d5c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6336));
    // 0x17d5cc: 0xac4418c0
    ctx->pc = 0x17d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6336), GPR_U32(ctx, 4));
    // 0x17d5d0: 0xffb00000
    ctx->pc = 0x17d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d5d4: 0x24040029
    ctx->pc = 0x17d5d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 41));
    // 0x17d5d8: 0x3c10002e
    ctx->pc = 0x17d5d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x17d5dc: 0xac650004
    ctx->pc = 0x17d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x17d5e0: 0x260719c0
    ctx->pc = 0x17d5e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 6592));
    // 0x17d5e4: 0xffbf0010
    ctx->pc = 0x17d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d5e8: 0x60282d
    ctx->pc = 0x17d5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5ec: 0x24060002
    ctx->pc = 0x17d5ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d5f0: 0xc05dcd2
    ctx->pc = 0x17D5F0u;
    SET_GPR_U32(ctx, 31, 0x17D5F8u);
    ctx->pc = 0x17D5F4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5F8u; }
        else if (ctx->pc != 0x17D5F8u) { ctx->pc = 0x17D5F8u; }
    }
    if (ctx->pc != 0x17D5F8u) { return; }
    ctx->pc = 0x17D5F8u;
    // 0x17d5f8: 0x8e0219c0
    ctx->pc = 0x17d5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6592)));
    // 0x17d5fc: 0xdfbf0010
    ctx->pc = 0x17d5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d600: 0xdfb00000
    ctx->pc = 0x17d600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d604: 0x3e00008
    ctx->pc = 0x17D604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D608u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D60Cu;
}
