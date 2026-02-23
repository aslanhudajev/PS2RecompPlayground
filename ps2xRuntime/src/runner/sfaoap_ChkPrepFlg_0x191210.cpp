#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfaoap_ChkPrepFlg
// Address: 0x191210 - 0x191278
void sfaoap_ChkPrepFlg_0x191210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfaoap_ChkPrepFlg");


    ctx->pc = 0x191210u;

    // 0x191210: 0x27bdffd0
    ctx->pc = 0x191210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191214: 0x24050007
    ctx->pc = 0x191214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x191218: 0xffb00000
    ctx->pc = 0x191218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19121c: 0x80802d
    ctx->pc = 0x19121cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191220: 0xffb10010
    ctx->pc = 0x191220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x191224: 0xffbf0020
    ctx->pc = 0x191224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191228: 0xc067ce4
    ctx->pc = 0x191228u;
    SET_GPR_U32(ctx, 31, 0x191230u);
    ctx->pc = 0x19122Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F390u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetPrepFlg_0x19f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191230u; }
        else if (ctx->pc != 0x191230u) { ctx->pc = 0x191230u; }
    }
    if (ctx->pc != 0x191230u) { return; }
    ctx->pc = 0x191230u;
    // 0x191230: 0x1051000d
    ctx->pc = 0x191230u;
    {
        const bool branch_taken_0x191230 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x191234u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x191230) {
            ctx->pc = 0x191268u;
            goto label_191268;
        }
    }
    ctx->pc = 0x191238u;
    // 0x191238: 0x8e056044
    ctx->pc = 0x191238u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24644)));
    // 0x19123c: 0xc064a54
    ctx->pc = 0x19123Cu;
    SET_GPR_U32(ctx, 31, 0x191244u);
    ctx->pc = 0x191240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192950u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetPrepFlg_0x192950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191244u; }
        else if (ctx->pc != 0x191244u) { ctx->pc = 0x191244u; }
    }
    if (ctx->pc != 0x191244u) { return; }
    ctx->pc = 0x191244u;
    // 0x191244: 0x14510008
    ctx->pc = 0x191244u;
    {
        const bool branch_taken_0x191244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x191248u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x191244) {
            ctx->pc = 0x191268u;
            goto label_191268;
        }
    }
    ctx->pc = 0x19124Cu;
    // 0x19124c: 0x200202d
    ctx->pc = 0x19124cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191250: 0xdfb10010
    ctx->pc = 0x191250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191254: 0x24050007
    ctx->pc = 0x191254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x191258: 0xdfb00000
    ctx->pc = 0x191258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19125c: 0x24060001
    ctx->pc = 0x19125cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x191260: 0x8067cde
    ctx->pc = 0x191260u;
    ctx->pc = 0x191264u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F378u;
    SFTRN_SetPrepFlg_0x19f378(rdram, ctx, runtime); return;
    ctx->pc = 0x191268u;
label_191268:
    // 0x191268: 0xdfb10010
    ctx->pc = 0x191268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19126c: 0xdfb00000
    ctx->pc = 0x19126cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191270: 0x3e00008
    ctx->pc = 0x191270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191268u: goto label_191268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191278u;
}
