#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_TrDestroy
// Address: 0x19bb28 - 0x19bb50
void sfply_TrDestroy_0x19bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_TrDestroy");


    ctx->pc = 0x19bb28u;

    // 0x19bb28: 0x27bdfff0
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bb2c: 0x80102d
    ctx->pc = 0x19bb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb30: 0xffbf0000
    ctx->pc = 0x19bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bb34: 0x24050004
    ctx->pc = 0x19bb34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19bb38: 0xac400040
    ctx->pc = 0x19bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x19bb3c: 0xc067ca6
    ctx->pc = 0x19BB3Cu;
    SET_GPR_U32(ctx, 31, 0x19BB44u);
    ctx->pc = 0x19BB40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x19F298u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrSetup_0x19f298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB44u; }
        else if (ctx->pc != 0x19BB44u) { ctx->pc = 0x19BB44u; }
    }
    if (ctx->pc != 0x19BB44u) { return; }
    ctx->pc = 0x19BB44u;
    // 0x19bb44: 0xdfbf0000
    ctx->pc = 0x19bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb48: 0x3e00008
    ctx->pc = 0x19BB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BB50u;
}
