#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPLY_Stop
// Address: 0x19bc50 - 0x19bc7c
void SFPLY_Stop_0x19bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPLY_Stop");


    ctx->pc = 0x19bc50u;

    // 0x19bc50: 0x27bdfff0
    ctx->pc = 0x19bc50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bc54: 0x24030001
    ctx->pc = 0x19bc54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc58: 0xffbf0000
    ctx->pc = 0x19bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bc5c: 0x8c820040
    ctx->pc = 0x19bc5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19bc60: 0x10430003
    ctx->pc = 0x19BC60u;
    {
        const bool branch_taken_0x19bc60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x19BC64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bc60) {
            ctx->pc = 0x19BC70u;
            goto label_19bc70;
        }
    }
    ctx->pc = 0x19BC68u;
    // 0x19bc68: 0xc066f20
    ctx->pc = 0x19BC68u;
    SET_GPR_U32(ctx, 31, 0x19BC70u);
    ctx->pc = 0x19BC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_TrStop_0x19bc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC70u; }
        else if (ctx->pc != 0x19BC70u) { ctx->pc = 0x19BC70u; }
    }
    if (ctx->pc != 0x19BC70u) { return; }
    ctx->pc = 0x19BC70u;
label_19bc70:
    // 0x19bc70: 0xdfbf0000
    ctx->pc = 0x19bc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bc74: 0x3e00008
    ctx->pc = 0x19BC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BC78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC70u: goto label_19bc70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BC7Cu;
}
