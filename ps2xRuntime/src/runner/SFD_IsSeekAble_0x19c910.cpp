#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_IsSeekAble
// Address: 0x19c910 - 0x19c970
void SFD_IsSeekAble_0x19c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_IsSeekAble");


    ctx->pc = 0x19c910u;

    // 0x19c910: 0x27bdffd0
    ctx->pc = 0x19c910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c914: 0xffb10010
    ctx->pc = 0x19c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19c918: 0xffb00000
    ctx->pc = 0x19c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c91c: 0xa0882d
    ctx->pc = 0x19c91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c920: 0xffbf0020
    ctx->pc = 0x19c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c924: 0x80802d
    ctx->pc = 0x19c924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c928: 0xc064f1e
    ctx->pc = 0x19C928u;
    SET_GPR_U32(ctx, 31, 0x19C930u);
    ctx->pc = 0x19C92Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C930u; }
        else if (ctx->pc != 0x19C930u) { ctx->pc = 0x19C930u; }
    }
    if (ctx->pc != 0x19C930u) { return; }
    ctx->pc = 0x19C930u;
    // 0x19c930: 0x10400006
    ctx->pc = 0x19C930u;
    {
        const bool branch_taken_0x19c930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C934u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c930) {
            ctx->pc = 0x19C94Cu;
            goto label_19c94c;
        }
    }
    ctx->pc = 0x19C938u;
    // 0x19c938: 0x3c05ff00
    ctx->pc = 0x19c938u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19c93c: 0xc064ea0
    ctx->pc = 0x19C93Cu;
    SET_GPR_U32(ctx, 31, 0x19C944u);
    ctx->pc = 0x19C940u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 341));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C944u; }
        else if (ctx->pc != 0x19C944u) { ctx->pc = 0x19C944u; }
    }
    if (ctx->pc != 0x19C944u) { return; }
    ctx->pc = 0x19C944u;
    // 0x19c944: 0x10000006
    ctx->pc = 0x19C944u;
    {
        const bool branch_taken_0x19c944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C948u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19c944) {
            ctx->pc = 0x19C960u;
            goto label_19c960;
        }
    }
    ctx->pc = 0x19C94Cu;
label_19c94c:
    // 0x19c94c: 0x8e046758
    ctx->pc = 0x19c94cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19c950: 0xc06725c
    ctx->pc = 0x19C950u;
    SET_GPR_U32(ctx, 31, 0x19C958u);
    ctx->pc = 0x19C954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsSeekAble_0x19c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C958u; }
        else if (ctx->pc != 0x19C958u) { ctx->pc = 0x19C958u; }
    }
    if (ctx->pc != 0x19C958u) { return; }
    ctx->pc = 0x19C958u;
    // 0x19c958: 0x102d
    ctx->pc = 0x19c958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c95c: 0xdfbf0020
    ctx->pc = 0x19c95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c960:
    // 0x19c960: 0xdfb10010
    ctx->pc = 0x19c960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c964: 0xdfb00000
    ctx->pc = 0x19c964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c968: 0x3e00008
    ctx->pc = 0x19C968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C96Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C94Cu: goto label_19c94c;
            case 0x19C960u: goto label_19c960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C970u;
}
