#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_GetStat
// Address: 0x17a368 - 0x17a398
void LSC_GetStat_0x17a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_GetStat");


    ctx->pc = 0x17a368u;

    // 0x17a368: 0x27bdfff0
    ctx->pc = 0x17a368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a36c: 0x14800006
    ctx->pc = 0x17A36Cu;
    {
        const bool branch_taken_0x17a36c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A370u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17a36c) {
            ctx->pc = 0x17A388u;
            goto label_17a388;
        }
    }
    ctx->pc = 0x17A374u;
    // 0x17a374: 0x3c04002c
    ctx->pc = 0x17a374u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a378: 0xc05e9c6
    ctx->pc = 0x17A378u;
    SET_GPR_U32(ctx, 31, 0x17A380u);
    ctx->pc = 0x17A37Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A380u; }
        else if (ctx->pc != 0x17A380u) { ctx->pc = 0x17A380u; }
    }
    if (ctx->pc != 0x17A380u) { return; }
    ctx->pc = 0x17A380u;
    // 0x17a380: 0x10000002
    ctx->pc = 0x17A380u;
    {
        const bool branch_taken_0x17a380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17A384u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17a380) {
            ctx->pc = 0x17A38Cu;
            goto label_17a38c;
        }
    }
    ctx->pc = 0x17A388u;
label_17a388:
    // 0x17a388: 0x80820001
    ctx->pc = 0x17a388u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_17a38c:
    // 0x17a38c: 0xdfbf0000
    ctx->pc = 0x17a38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a390: 0x3e00008
    ctx->pc = 0x17A390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A388u: goto label_17a388;
            case 0x17A38Cu: goto label_17a38c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A398u;
}
