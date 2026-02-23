#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_CnvPosToTime
// Address: 0x19cb60 - 0x19cbd4
void sfsee_CnvPosToTime_0x19cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_CnvPosToTime");


    ctx->pc = 0x19cb60u;

    // 0x19cb60: 0x27bdffd0
    ctx->pc = 0x19cb60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19cb64: 0x80102d
    ctx->pc = 0x19cb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb68: 0xffb10010
    ctx->pc = 0x19cb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19cb6c: 0xffb00000
    ctx->pc = 0x19cb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cb70: 0xe0882d
    ctx->pc = 0x19cb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb74: 0xffbf0020
    ctx->pc = 0x19cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19cb78: 0x8c440dac
    ctx->pc = 0x19cb78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 3500)));
    // 0x19cb7c: 0x10800006
    ctx->pc = 0x19CB7Cu;
    {
        const bool branch_taken_0x19cb7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CB80u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cb7c) {
            ctx->pc = 0x19CB98u;
            goto label_19cb98;
        }
    }
    ctx->pc = 0x19CB84u;
    // 0x19cb84: 0xdfbf0020
    ctx->pc = 0x19cb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cb88: 0xdfb10010
    ctx->pc = 0x19cb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cb8c: 0xdfb00000
    ctx->pc = 0x19cb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb90: 0x80672f6
    ctx->pc = 0x19CB90u;
    ctx->pc = 0x19CB94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19CBD8u;
    sfsee_SearchPosToTime_0x19cbd8(rdram, ctx, runtime); return;
    ctx->pc = 0x19CB98u;
label_19cb98:
    // 0x19cb98: 0x8c460d94
    ctx->pc = 0x19cb98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 3476)));
    // 0x19cb9c: 0x1cc00003
    ctx->pc = 0x19CB9Cu;
    {
        const bool branch_taken_0x19cb9c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x19CBA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cb9c) {
            ctx->pc = 0x19CBACu;
            goto label_19cbac;
        }
    }
    ctx->pc = 0x19CBA4u;
    // 0x19cba4: 0x10000004
    ctx->pc = 0x19CBA4u;
    {
        const bool branch_taken_0x19cba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CBA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x19cba4) {
            ctx->pc = 0x19CBB8u;
            goto label_19cbb8;
        }
    }
    ctx->pc = 0x19CBACu;
label_19cbac:
    // 0x19cbac: 0xc063132
    ctx->pc = 0x19CBACu;
    SET_GPR_U32(ctx, 31, 0x19CBB4u);
    ctx->pc = 0x19CBB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CBB4u; }
        else if (ctx->pc != 0x19CBB4u) { ctx->pc = 0x19CBB4u; }
    }
    if (ctx->pc != 0x19CBB4u) { return; }
    ctx->pc = 0x19CBB4u;
    // 0x19cbb4: 0xae020000
    ctx->pc = 0x19cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19cbb8:
    // 0x19cbb8: 0x240203e8
    ctx->pc = 0x19cbb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19cbbc: 0xdfbf0020
    ctx->pc = 0x19cbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cbc0: 0xae220000
    ctx->pc = 0x19cbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19cbc4: 0xdfb10010
    ctx->pc = 0x19cbc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cbc8: 0xdfb00000
    ctx->pc = 0x19cbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cbcc: 0x3e00008
    ctx->pc = 0x19CBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CB98u: goto label_19cb98;
            case 0x19CBACu: goto label_19cbac;
            case 0x19CBB8u: goto label_19cbb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CBD4u;
}
