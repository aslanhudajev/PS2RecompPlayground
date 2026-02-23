#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_Start
// Address: 0x18f948 - 0x18f968
void MWSTM_Start_0x18f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_Start");


    ctx->pc = 0x18f948u;

    // 0x18f948: 0x27bdfff0
    ctx->pc = 0x18f948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f94c: 0xffbf0000
    ctx->pc = 0x18f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f950: 0xc05c304
    ctx->pc = 0x18F950u;
    SET_GPR_U32(ctx, 31, 0x18F958u);
    ctx->pc = 0x170C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Start_0x170c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F958u; }
        else if (ctx->pc != 0x18F958u) { ctx->pc = 0x18F958u; }
    }
    if (ctx->pc != 0x18F958u) { return; }
    ctx->pc = 0x18F958u;
    // 0x18f958: 0xdfbf0000
    ctx->pc = 0x18f958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f95c: 0x102d
    ctx->pc = 0x18f95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f960: 0x3e00008
    ctx->pc = 0x18F960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F964u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F968u;
}
