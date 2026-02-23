#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTMF_SetupHandleMember
// Address: 0x1706b0 - 0x1706fc
void ADXSTMF_SetupHandleMember_0x1706b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTMF_SetupHandleMember");


    ctx->pc = 0x1706b0u;

    // 0x1706b0: 0x24e907ff
    ctx->pc = 0x1706b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 7), 2047));
    // 0x1706b4: 0x2402ffff
    ctx->pc = 0x1706b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1706b8: 0x49102a
    ctx->pc = 0x1706b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 9)));
    // 0x1706bc: 0x24e30ffe
    ctx->pc = 0x1706bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4094));
    // 0x1706c0: 0x122180b
    ctx->pc = 0x1706c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 9));
    // 0x1706c4: 0x240a0001
    ctx->pc = 0x1706c4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1706c8: 0x31ac3
    ctx->pc = 0x1706c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1706cc: 0x24020200
    ctx->pc = 0x1706ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1706d0: 0xa08a0000
    ctx->pc = 0x1706d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1706d4: 0xac880004
    ctx->pc = 0x1706d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x1706d8: 0xac850008
    ctx->pc = 0x1706d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1706dc: 0xac860010
    ctx->pc = 0x1706dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1706e0: 0xac82002c
    ctx->pc = 0x1706e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1706e4: 0xac830030
    ctx->pc = 0x1706e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1706e8: 0xa08a0001
    ctx->pc = 0x1706e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x1706ec: 0xa0800002
    ctx->pc = 0x1706ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1706f0: 0xac80000c
    ctx->pc = 0x1706f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1706f4: 0x3e00008
    ctx->pc = 0x1706F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1706F8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1706FCu;
}
