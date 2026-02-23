#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFCON_IsVideoEndcodeSkip
// Address: 0x192a58 - 0x192aa0
void SFCON_IsVideoEndcodeSkip_0x192a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFCON_IsVideoEndcodeSkip");


    ctx->pc = 0x192a58u;

    // 0x192a58: 0x27bdffe0
    ctx->pc = 0x192a58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192a5c: 0x24050031
    ctx->pc = 0x192a5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    // 0x192a60: 0xffb00000
    ctx->pc = 0x192a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192a64: 0xffbf0010
    ctx->pc = 0x192a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192a68: 0xc0674c2
    ctx->pc = 0x192A68u;
    SET_GPR_U32(ctx, 31, 0x192A70u);
    ctx->pc = 0x192A6Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A70u; }
        else if (ctx->pc != 0x192A70u) { ctx->pc = 0x192A70u; }
    }
    if (ctx->pc != 0x192A70u) { return; }
    ctx->pc = 0x192A70u;
    // 0x192a70: 0x14400007
    ctx->pc = 0x192A70u;
    {
        const bool branch_taken_0x192a70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192A74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x192a70) {
            ctx->pc = 0x192A90u;
            goto label_192a90;
        }
    }
    ctx->pc = 0x192A78u;
    // 0x192a78: 0x200202d
    ctx->pc = 0x192a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a7c: 0xc0674c2
    ctx->pc = 0x192A7Cu;
    SET_GPR_U32(ctx, 31, 0x192A84u);
    ctx->pc = 0x192A80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A84u; }
        else if (ctx->pc != 0x192A84u) { ctx->pc = 0x192A84u; }
    }
    if (ctx->pc != 0x192A84u) { return; }
    ctx->pc = 0x192A84u;
    // 0x192a84: 0x14400002
    ctx->pc = 0x192A84u;
    {
        const bool branch_taken_0x192a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192A88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x192a84) {
            ctx->pc = 0x192A90u;
            goto label_192a90;
        }
    }
    ctx->pc = 0x192A8Cu;
    // 0x192a8c: 0x102d
    ctx->pc = 0x192a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192a90:
    // 0x192a90: 0xdfbf0010
    ctx->pc = 0x192a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a94: 0xdfb00000
    ctx->pc = 0x192a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a98: 0x3e00008
    ctx->pc = 0x192A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192A90u: goto label_192a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192AA0u;
}
