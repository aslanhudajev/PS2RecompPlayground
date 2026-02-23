#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufEndPut
// Address: 0x199648 - 0x199698
void viBufEndPut_0x199648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufEndPut");


    ctx->pc = 0x199648u;

    // 0x199648: 0x27bdffd0
    ctx->pc = 0x199648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19964c: 0xffb10010
    ctx->pc = 0x19964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x199650: 0xffb00000
    ctx->pc = 0x199650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199654: 0xa0882d
    ctx->pc = 0x199654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199658: 0xffbf0020
    ctx->pc = 0x199658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19965c: 0x80802d
    ctx->pc = 0x19965cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199660: 0xc055248
    ctx->pc = 0x199660u;
    SET_GPR_U32(ctx, 31, 0x199668u);
    ctx->pc = 0x199664u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199668u; }
        else if (ctx->pc != 0x199668u) { ctx->pc = 0x199668u; }
    }
    if (ctx->pc != 0x199668u) { return; }
    ctx->pc = 0x199668u;
    // 0x199668: 0x8e030014
    ctx->pc = 0x199668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19966c: 0xde020048
    ctx->pc = 0x19966cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x199670: 0x711821
    ctx->pc = 0x199670u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x199674: 0x8e040040
    ctx->pc = 0x199674u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x199678: 0x222102d
    ctx->pc = 0x199678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x19967c: 0xae030014
    ctx->pc = 0x19967cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x199680: 0xfe020048
    ctx->pc = 0x199680u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x199684: 0xdfbf0020
    ctx->pc = 0x199684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199688: 0xdfb10010
    ctx->pc = 0x199688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19968c: 0xdfb00000
    ctx->pc = 0x19968cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199690: 0x8055240
    ctx->pc = 0x199690u;
    ctx->pc = 0x199694u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x154900u;
    SignalSema_0x154900(rdram, ctx, runtime); return;
    ctx->pc = 0x199698u;
}
