#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsTerm
// Address: 0x196920 - 0x19696c
void sfmpv_IsTerm_0x196920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsTerm");


    ctx->pc = 0x196920u;

    // 0x196920: 0x27bdfff0
    ctx->pc = 0x196920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196924: 0x24020080
    ctx->pc = 0x196924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x196928: 0x14c20003
    ctx->pc = 0x196928u;
    {
        const bool branch_taken_0x196928 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x19692Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x196928) {
            ctx->pc = 0x196938u;
            goto label_196938;
        }
    }
    ctx->pc = 0x196930u;
    // 0x196930: 0x1000000b
    ctx->pc = 0x196930u;
    {
        const bool branch_taken_0x196930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196930) {
            ctx->pc = 0x196960u;
            goto label_196960;
        }
    }
    ctx->pc = 0x196938u;
label_196938:
    // 0x196938: 0x28a20005
    ctx->pc = 0x196938u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 5));
    // 0x19693c: 0x50400008
    ctx->pc = 0x19693Cu;
    {
        const bool branch_taken_0x19693c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19693c) {
            ctx->pc = 0x196940u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x196960u;
            goto label_196960;
        }
    }
    ctx->pc = 0x196944u;
    // 0x196944: 0xc065a5c
    ctx->pc = 0x196944u;
    SET_GPR_U32(ctx, 31, 0x19694Cu);
    ctx->pc = 0x196970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetTermSrc_0x196970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19694Cu; }
        else if (ctx->pc != 0x19694Cu) { ctx->pc = 0x19694Cu; }
    }
    if (ctx->pc != 0x19694Cu) { return; }
    ctx->pc = 0x19694Cu;
    // 0x19694c: 0x40202d
    ctx->pc = 0x19694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196950: 0x24030001
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x196954: 0x10830002
    ctx->pc = 0x196954u;
    {
        const bool branch_taken_0x196954 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x196958u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x196954) {
            ctx->pc = 0x196960u;
            goto label_196960;
        }
    }
    ctx->pc = 0x19695Cu;
    // 0x19695c: 0x102d
    ctx->pc = 0x19695cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196960:
    // 0x196960: 0xdfbf0000
    ctx->pc = 0x196960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196964: 0x3e00008
    ctx->pc = 0x196964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196938u: goto label_196938;
            case 0x196960u: goto label_196960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19696Cu;
}
