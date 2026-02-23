#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_ChkPrepFlg
// Address: 0x190598 - 0x190634
void sfadxt_ChkPrepFlg_0x190598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_ChkPrepFlg");


    ctx->pc = 0x190598u;

    // 0x190598: 0x27bdffb0
    ctx->pc = 0x190598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19059c: 0xffb00000
    ctx->pc = 0x19059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1905a0: 0xffb30030
    ctx->pc = 0x1905a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1905a4: 0x80802d
    ctx->pc = 0x1905a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905a8: 0xffbf0040
    ctx->pc = 0x1905a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1905ac: 0x26023e18
    ctx->pc = 0x1905acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 15896));
    // 0x1905b0: 0xffb10010
    ctx->pc = 0x1905b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1905b4: 0x24130001
    ctx->pc = 0x1905b4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1905b8: 0xffb20020
    ctx->pc = 0x1905b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1905bc: 0x8c5206b0
    ctx->pc = 0x1905bcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 1712)));
    // 0x1905c0: 0x8c5106ac
    ctx->pc = 0x1905c0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x1905c4: 0xc064a54
    ctx->pc = 0x1905C4u;
    SET_GPR_U32(ctx, 31, 0x1905CCu);
    ctx->pc = 0x1905C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905CCu; }
        else if (ctx->pc != 0x1905CCu) { ctx->pc = 0x1905CCu; }
    }
    if (ctx->pc != 0x1905CCu) { return; }
    ctx->pc = 0x1905CCu;
    // 0x1905cc: 0x10530012
    ctx->pc = 0x1905CCu;
    {
        const bool branch_taken_0x1905cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x1905D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1905cc) {
            ctx->pc = 0x190618u;
            goto label_190618;
        }
    }
    ctx->pc = 0x1905D4u;
    // 0x1905d4: 0xc064a54
    ctx->pc = 0x1905D4u;
    SET_GPR_U32(ctx, 31, 0x1905DCu);
    ctx->pc = 0x1905D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905DCu; }
        else if (ctx->pc != 0x1905DCu) { ctx->pc = 0x1905DCu; }
    }
    if (ctx->pc != 0x1905DCu) { return; }
    ctx->pc = 0x1905DCu;
    // 0x1905dc: 0x1453000f
    ctx->pc = 0x1905DCu;
    {
        const bool branch_taken_0x1905dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x1905E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1905dc) {
            ctx->pc = 0x19061Cu;
            goto label_19061c;
        }
    }
    ctx->pc = 0x1905E4u;
    // 0x1905e4: 0xc06418e
    ctx->pc = 0x1905E4u;
    SET_GPR_U32(ctx, 31, 0x1905ECu);
    ctx->pc = 0x1905E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_IsPrepEnd_0x190638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1905ECu; }
        else if (ctx->pc != 0x1905ECu) { ctx->pc = 0x1905ECu; }
    }
    if (ctx->pc != 0x1905ECu) { return; }
    ctx->pc = 0x1905ECu;
    // 0x1905ec: 0x1040000b
    ctx->pc = 0x1905ECu;
    {
        const bool branch_taken_0x1905ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1905F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1905ec) {
            ctx->pc = 0x19061Cu;
            goto label_19061c;
        }
    }
    ctx->pc = 0x1905F4u;
    // 0x1905f4: 0x200202d
    ctx->pc = 0x1905f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905f8: 0x240282d
    ctx->pc = 0x1905f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905fc: 0x24060001
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x190600: 0xdfb30030
    ctx->pc = 0x190600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190604: 0xdfb20020
    ctx->pc = 0x190604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190608: 0xdfb10010
    ctx->pc = 0x190608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19060c: 0xdfb00000
    ctx->pc = 0x19060cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190610: 0x8064a4e
    ctx->pc = 0x190610u;
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x192938u;
    SFBUF_SetPrepFlg_0x192938(rdram, ctx, runtime); return;
    ctx->pc = 0x190618u;
label_190618:
    // 0x190618: 0xdfbf0040
    ctx->pc = 0x190618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19061c:
    // 0x19061c: 0xdfb30030
    ctx->pc = 0x19061cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190620: 0xdfb20020
    ctx->pc = 0x190620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190624: 0xdfb10010
    ctx->pc = 0x190624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190628: 0xdfb00000
    ctx->pc = 0x190628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19062c: 0x3e00008
    ctx->pc = 0x19062Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190630u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190618u: goto label_190618;
            case 0x19061Cu: goto label_19061c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190634u;
}
