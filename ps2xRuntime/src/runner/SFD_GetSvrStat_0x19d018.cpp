#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetSvrStat
// Address: 0x19d018 - 0x19d034
void SFD_GetSvrStat_0x19d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetSvrStat");


    ctx->pc = 0x19d018u;

    // 0x19d018: 0x27bdfff0
    ctx->pc = 0x19d018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d01c: 0xffbf0000
    ctx->pc = 0x19d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d020: 0xc066d78
    ctx->pc = 0x19D020u;
    SET_GPR_U32(ctx, 31, 0x19D028u);
    ctx->pc = 0x19B5E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_DecideSvrStat_0x19b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D028u; }
        else if (ctx->pc != 0x19D028u) { ctx->pc = 0x19D028u; }
    }
    if (ctx->pc != 0x19D028u) { return; }
    ctx->pc = 0x19D028u;
    // 0x19d028: 0xdfbf0000
    ctx->pc = 0x19d028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d02c: 0x3e00008
    ctx->pc = 0x19D02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D034u;
}
