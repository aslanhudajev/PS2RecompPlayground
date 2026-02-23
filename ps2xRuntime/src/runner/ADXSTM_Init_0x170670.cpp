#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_Init
// Address: 0x170670 - 0x17069c
void ADXSTM_Init_0x170670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_Init");


    ctx->pc = 0x170670u;

    // 0x170670: 0x27bdfff0
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170674: 0x3c040023
    ctx->pc = 0x170674u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x170678: 0xffbf0000
    ctx->pc = 0x170678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17067c: 0x282d
    ctx->pc = 0x17067cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170680: 0x24847bc0
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31680));
    // 0x170684: 0xc050cfe
    ctx->pc = 0x170684u;
    SET_GPR_U32(ctx, 31, 0x17068Cu);
    ctx->pc = 0x170688u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2560));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17068Cu; }
        else if (ctx->pc != 0x17068Cu) { ctx->pc = 0x17068Cu; }
    }
    if (ctx->pc != 0x17068Cu) { return; }
    ctx->pc = 0x17068Cu;
    // 0x17068c: 0xdfbf0000
    ctx->pc = 0x17068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170690: 0x24020001
    ctx->pc = 0x170690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170694: 0x3e00008
    ctx->pc = 0x170694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170698u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17069Cu;
}
