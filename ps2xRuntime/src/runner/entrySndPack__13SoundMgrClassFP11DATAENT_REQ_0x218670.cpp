#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entrySndPack__13SoundMgrClassFP11DATAENT_REQ
// Address: 0x218670 - 0x2186b4
void entrySndPack__13SoundMgrClassFP11DATAENT_REQ_0x218670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entrySndPack__13SoundMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x218670u;

    // 0x218670: 0x27bdfff0
    ctx->pc = 0x218670u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218674: 0x7fbf0000
    ctx->pc = 0x218674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x218678: 0xac850208
    ctx->pc = 0x218678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 5));
    // 0x21867c: 0x8c830208
    ctx->pc = 0x21867cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x218680: 0x24020001
    ctx->pc = 0x218680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x218684: 0x8c63000c
    ctx->pc = 0x218684u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x218688: 0x10620005
    ctx->pc = 0x218688u;
    {
        const bool branch_taken_0x218688 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x218688) {
            ctx->pc = 0x2186A0u;
            goto label_2186a0;
        }
    }
    ctx->pc = 0x218690u;
    // 0x218690: 0xc086110
    ctx->pc = 0x218690u;
    SET_GPR_U32(ctx, 31, 0x218698u);
    ctx->pc = 0x218440u;
    {
        const uint32_t __entryPc = ctx->pc;
        entrySndPack_STAT00__13SoundMgrClassFv_0x218440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218698u; }
        else if (ctx->pc != 0x218698u) { ctx->pc = 0x218698u; }
    }
    if (ctx->pc != 0x218698u) { return; }
    ctx->pc = 0x218698u;
    // 0x218698: 0x10000004
    ctx->pc = 0x218698u;
    {
        const bool branch_taken_0x218698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21869Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x218698) {
            ctx->pc = 0x2186ACu;
            goto label_2186ac;
        }
    }
    ctx->pc = 0x2186A0u;
label_2186a0:
    // 0x2186a0: 0xc086170
    ctx->pc = 0x2186A0u;
    SET_GPR_U32(ctx, 31, 0x2186A8u);
    ctx->pc = 0x2185C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entrySndPack_STAT01__13SoundMgrClassFv_0x2185c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2186A8u; }
        else if (ctx->pc != 0x2186A8u) { ctx->pc = 0x2186A8u; }
    }
    if (ctx->pc != 0x2186A8u) { return; }
    ctx->pc = 0x2186A8u;
    // 0x2186a8: 0x7bbf0000
    ctx->pc = 0x2186a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2186ac:
    // 0x2186ac: 0x3e00008
    ctx->pc = 0x2186ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2186B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2186A0u: goto label_2186a0;
            case 0x2186ACu: goto label_2186ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2186B4u;
}
