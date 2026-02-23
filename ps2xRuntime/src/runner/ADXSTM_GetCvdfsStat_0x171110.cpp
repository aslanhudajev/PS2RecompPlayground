#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_GetCvdfsStat
// Address: 0x171110 - 0x17113c
void ADXSTM_GetCvdfsStat_0x171110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_GetCvdfsStat");


    ctx->pc = 0x171110u;

    // 0x171110: 0x27bdffe0
    ctx->pc = 0x171110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171114: 0xffb00000
    ctx->pc = 0x171114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171118: 0xffbf0010
    ctx->pc = 0x171118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17111c: 0xa0802d
    ctx->pc = 0x17111cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171120: 0xc05d3b8
    ctx->pc = 0x171120u;
    SET_GPR_U32(ctx, 31, 0x171128u);
    ctx->pc = 0x171124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->pc = 0x174EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetStat_0x174ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171128u; }
        else if (ctx->pc != 0x171128u) { ctx->pc = 0x171128u; }
    }
    if (ctx->pc != 0x171128u) { return; }
    ctx->pc = 0x171128u;
    // 0x171128: 0xae020000
    ctx->pc = 0x171128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17112c: 0xdfbf0010
    ctx->pc = 0x17112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171130: 0xdfb00000
    ctx->pc = 0x171130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171134: 0x3e00008
    ctx->pc = 0x171134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171138u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17113Cu;
}
