#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eh_context_initialize
// Address: 0x148c58 - 0x148c80
void eh_context_initialize_0x148c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eh_context_initialize");


    ctx->pc = 0x148c58u;

label_148c58:
    // 0x148c58: 0x3c020015
    ctx->pc = 0x148c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)21 << 16));
label_148c5c:
    // 0x148c5c: 0x27bdfff0
    ctx->pc = 0x148c5cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_148c60:
    // 0x148c60: 0x3c030022
    ctx->pc = 0x148c60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_148c64:
    // 0x148c64: 0x24428c80
    ctx->pc = 0x148c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937728));
label_148c68:
    // 0x148c68: 0xffbf0000
    ctx->pc = 0x148c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_148c6c:
    // 0x148c6c: 0x40f809
label_148c70:
    if (ctx->pc == 0x148C70u) {
        ctx->pc = 0x148C70u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 30308), GPR_U32(ctx, 2));
        ctx->pc = 0x148C74u;
        goto label_148c74;
    }
    ctx->pc = 0x148C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x148C74u);
        ctx->pc = 0x148C70u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 30308), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148C58u: goto label_148c58;
            case 0x148C5Cu: goto label_148c5c;
            case 0x148C60u: goto label_148c60;
            case 0x148C64u: goto label_148c64;
            case 0x148C68u: goto label_148c68;
            case 0x148C6Cu: goto label_148c6c;
            case 0x148C70u: goto label_148c70;
            case 0x148C74u: goto label_148c74;
            case 0x148C78u: goto label_148c78;
            case 0x148C7Cu: goto label_148c7c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x148C74u; }
            if (ctx->pc != 0x148C74u) { return; }
        }
    }
    ctx->pc = 0x148C74u;
label_148c74:
    // 0x148c74: 0xdfbf0000
    ctx->pc = 0x148c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148c78:
    // 0x148c78: 0x3e00008
label_148c7c:
    if (ctx->pc == 0x148C7Cu) {
        ctx->pc = 0x148C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x148C80u;
        goto label_fallthrough_0x148c78;
    }
    ctx->pc = 0x148C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148C58u: goto label_148c58;
            case 0x148C5Cu: goto label_148c5c;
            case 0x148C60u: goto label_148c60;
            case 0x148C64u: goto label_148c64;
            case 0x148C68u: goto label_148c68;
            case 0x148C6Cu: goto label_148c6c;
            case 0x148C70u: goto label_148c70;
            case 0x148C74u: goto label_148c74;
            case 0x148C78u: goto label_148c78;
            case 0x148C7Cu: goto label_148c7c;
            default: break;
        }
        return;
    }
label_fallthrough_0x148c78:
    ctx->pc = 0x148C80u;
}
