#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfvom_ChkTermFlg
// Address: 0x19f7f8 - 0x19f870
void sfvom_ChkTermFlg_0x19f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfvom_ChkTermFlg");


    ctx->pc = 0x19f7f8u;

    // 0x19f7f8: 0x27bdffd0
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f7fc: 0x24050006
    ctx->pc = 0x19f7fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f800: 0xffb00000
    ctx->pc = 0x19f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f804: 0x80802d
    ctx->pc = 0x19f804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f808: 0xffb10010
    ctx->pc = 0x19f808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f80c: 0xffbf0020
    ctx->pc = 0x19f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f810: 0xc067cf0
    ctx->pc = 0x19F810u;
    SET_GPR_U32(ctx, 31, 0x19F818u);
    ctx->pc = 0x19F814u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetTermFlg_0x19f3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F818u; }
        else if (ctx->pc != 0x19F818u) { ctx->pc = 0x19F818u; }
    }
    if (ctx->pc != 0x19F818u) { return; }
    ctx->pc = 0x19F818u;
    // 0x19f818: 0x10510011
    ctx->pc = 0x19F818u;
    {
        const bool branch_taken_0x19f818 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x19F81Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f818) {
            ctx->pc = 0x19F860u;
            goto label_19f860;
        }
    }
    ctx->pc = 0x19F820u;
    // 0x19f820: 0x8e055964
    ctx->pc = 0x19f820u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 22884)));
    // 0x19f824: 0xc064a60
    ctx->pc = 0x19F824u;
    SET_GPR_U32(ctx, 31, 0x19F82Cu);
    ctx->pc = 0x19F828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F82Cu; }
        else if (ctx->pc != 0x19F82Cu) { ctx->pc = 0x19F82Cu; }
    }
    if (ctx->pc != 0x19F82Cu) { return; }
    ctx->pc = 0x19F82Cu;
    // 0x19f82c: 0x1451000c
    ctx->pc = 0x19F82Cu;
    {
        const bool branch_taken_0x19f82c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x19F830u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f82c) {
            ctx->pc = 0x19F860u;
            goto label_19f860;
        }
    }
    ctx->pc = 0x19F834u;
    // 0x19f834: 0xc067e1c
    ctx->pc = 0x19F834u;
    SET_GPR_U32(ctx, 31, 0x19F83Cu);
    ctx->pc = 0x19F838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfvom_IsTerm_0x19f870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F83Cu; }
        else if (ctx->pc != 0x19F83Cu) { ctx->pc = 0x19F83Cu; }
    }
    if (ctx->pc != 0x19F83Cu) { return; }
    ctx->pc = 0x19F83Cu;
    // 0x19f83c: 0x10400008
    ctx->pc = 0x19F83Cu;
    {
        const bool branch_taken_0x19f83c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F840u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f83c) {
            ctx->pc = 0x19F860u;
            goto label_19f860;
        }
    }
    ctx->pc = 0x19F844u;
    // 0x19f844: 0x200202d
    ctx->pc = 0x19f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f848: 0xdfb10010
    ctx->pc = 0x19f848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f84c: 0x24050006
    ctx->pc = 0x19f84cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f850: 0xdfb00000
    ctx->pc = 0x19f850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f854: 0x24060001
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f858: 0x8067cea
    ctx->pc = 0x19F858u;
    ctx->pc = 0x19F85Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F3A8u;
    SFTRN_SetTermFlg_0x19f3a8(rdram, ctx, runtime); return;
    ctx->pc = 0x19F860u;
label_19f860:
    // 0x19f860: 0xdfb10010
    ctx->pc = 0x19f860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f864: 0xdfb00000
    ctx->pc = 0x19f864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f868: 0x3e00008
    ctx->pc = 0x19F868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F86Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F860u: goto label_19f860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F870u;
}
