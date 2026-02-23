#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfpl2_TrPause
// Address: 0x19a928 - 0x19a950
void sfpl2_TrPause_0x19a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfpl2_TrPause");


    ctx->pc = 0x19a928u;

    // 0x19a928: 0x27bdfff0
    ctx->pc = 0x19a928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a92c: 0xa0382d
    ctx->pc = 0x19a92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a930: 0xffbf0000
    ctx->pc = 0x19a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a934: 0x24050007
    ctx->pc = 0x19a934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19a938: 0x24060008
    ctx->pc = 0x19a938u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19a93c: 0xc067cca
    ctx->pc = 0x19A93Cu;
    SET_GPR_U32(ctx, 31, 0x19A944u);
    ctx->pc = 0x19A940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A944u; }
        else if (ctx->pc != 0x19A944u) { ctx->pc = 0x19A944u; }
    }
    if (ctx->pc != 0x19A944u) { return; }
    ctx->pc = 0x19A944u;
    // 0x19a944: 0xdfbf0000
    ctx->pc = 0x19a944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a948: 0x3e00008
    ctx->pc = 0x19A948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A950u;
}
