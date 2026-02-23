#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfdtim_GetTimeAfterSeek
// Address: 0x19df20 - 0x19df3c
void sfdtim_GetTimeAfterSeek_0x19df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfdtim_GetTimeAfterSeek");


    ctx->pc = 0x19df20u;

    // 0x19df20: 0x27bdfff0
    ctx->pc = 0x19df20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19df24: 0xffbf0000
    ctx->pc = 0x19df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19df28: 0xc0677d0
    ctx->pc = 0x19DF28u;
    SET_GPR_U32(ctx, 31, 0x19DF30u);
    ctx->pc = 0x19DF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTime_0x19df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DF30u; }
        else if (ctx->pc != 0x19DF30u) { ctx->pc = 0x19DF30u; }
    }
    if (ctx->pc != 0x19DF30u) { return; }
    ctx->pc = 0x19DF30u;
    // 0x19df30: 0xdfbf0000
    ctx->pc = 0x19df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19df34: 0x3e00008
    ctx->pc = 0x19DF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DF3Cu;
}
