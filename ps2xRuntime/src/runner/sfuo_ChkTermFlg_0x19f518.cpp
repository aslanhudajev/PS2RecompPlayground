#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfuo_ChkTermFlg
// Address: 0x19f518 - 0x19f590
void sfuo_ChkTermFlg_0x19f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfuo_ChkTermFlg");


    ctx->pc = 0x19f518u;

    // 0x19f518: 0x27bdffd0
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f51c: 0x24050008
    ctx->pc = 0x19f51cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f520: 0xffb00000
    ctx->pc = 0x19f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f524: 0x80802d
    ctx->pc = 0x19f524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f528: 0xffb10010
    ctx->pc = 0x19f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f52c: 0xffbf0020
    ctx->pc = 0x19f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f530: 0xc067cf0
    ctx->pc = 0x19F530u;
    SET_GPR_U32(ctx, 31, 0x19F538u);
    ctx->pc = 0x19F534u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetTermFlg_0x19f3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F538u; }
        else if (ctx->pc != 0x19F538u) { ctx->pc = 0x19F538u; }
    }
    if (ctx->pc != 0x19F538u) { return; }
    ctx->pc = 0x19F538u;
    // 0x19f538: 0x10510011
    ctx->pc = 0x19F538u;
    {
        const bool branch_taken_0x19f538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x19F53Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f538) {
            ctx->pc = 0x19F580u;
            goto label_19f580;
        }
    }
    ctx->pc = 0x19F540u;
    // 0x19f540: 0x8e056724
    ctx->pc = 0x19f540u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 26404)));
    // 0x19f544: 0xc064a60
    ctx->pc = 0x19F544u;
    SET_GPR_U32(ctx, 31, 0x19F54Cu);
    ctx->pc = 0x19F548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F54Cu; }
        else if (ctx->pc != 0x19F54Cu) { ctx->pc = 0x19F54Cu; }
    }
    if (ctx->pc != 0x19F54Cu) { return; }
    ctx->pc = 0x19F54Cu;
    // 0x19f54c: 0x1451000c
    ctx->pc = 0x19F54Cu;
    {
        const bool branch_taken_0x19f54c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x19F550u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f54c) {
            ctx->pc = 0x19F580u;
            goto label_19f580;
        }
    }
    ctx->pc = 0x19F554u;
    // 0x19f554: 0xc067d64
    ctx->pc = 0x19F554u;
    SET_GPR_U32(ctx, 31, 0x19F55Cu);
    ctx->pc = 0x19F558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfuo_IsTerm_0x19f590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F55Cu; }
        else if (ctx->pc != 0x19F55Cu) { ctx->pc = 0x19F55Cu; }
    }
    if (ctx->pc != 0x19F55Cu) { return; }
    ctx->pc = 0x19F55Cu;
    // 0x19f55c: 0x10400008
    ctx->pc = 0x19F55Cu;
    {
        const bool branch_taken_0x19f55c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F560u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f55c) {
            ctx->pc = 0x19F580u;
            goto label_19f580;
        }
    }
    ctx->pc = 0x19F564u;
    // 0x19f564: 0x200202d
    ctx->pc = 0x19f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f568: 0xdfb10010
    ctx->pc = 0x19f568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f56c: 0x24050008
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19f570: 0xdfb00000
    ctx->pc = 0x19f570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f574: 0x24060001
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f578: 0x8067cea
    ctx->pc = 0x19F578u;
    ctx->pc = 0x19F57Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F3A8u;
    SFTRN_SetTermFlg_0x19f3a8(rdram, ctx, runtime); return;
    ctx->pc = 0x19F580u;
label_19f580:
    // 0x19f580: 0xdfb10010
    ctx->pc = 0x19f580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f584: 0xdfb00000
    ctx->pc = 0x19f584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f588: 0x3e00008
    ctx->pc = 0x19F588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F58Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F580u: goto label_19f580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F590u;
}
