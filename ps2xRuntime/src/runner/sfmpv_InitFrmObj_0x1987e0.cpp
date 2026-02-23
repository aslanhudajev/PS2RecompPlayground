#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_InitFrmObj
// Address: 0x1987e0 - 0x19886c
void sfmpv_InitFrmObj_0x1987e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_InitFrmObj");


    ctx->pc = 0x1987e0u;

    // 0x1987e0: 0x27bdffa0
    ctx->pc = 0x1987e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1987e4: 0xffb30030
    ctx->pc = 0x1987e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1987e8: 0xffb00000
    ctx->pc = 0x1987e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1987ec: 0xe0982d
    ctx->pc = 0x1987ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987f0: 0xffbf0050
    ctx->pc = 0x1987f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1987f4: 0x80802d
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987f8: 0xffb40040
    ctx->pc = 0x1987f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1987fc: 0xffb20020
    ctx->pc = 0x1987fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x198800: 0x18c00012
    ctx->pc = 0x198800u;
    {
        const bool branch_taken_0x198800 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x198804u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x198800) {
            ctx->pc = 0x19884Cu;
            goto label_19884c;
        }
    }
    ctx->pc = 0x198808u;
    // 0x198808: 0xa0902d
    ctx->pc = 0x198808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19880c: 0xc0882d
    ctx->pc = 0x19880cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198810: 0x24140001
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198814: 0xae120004
    ctx->pc = 0x198814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_198818:
    // 0x198818: 0x2604001c
    ctx->pc = 0x198818u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 28));
    // 0x19881c: 0xae000000
    ctx->pc = 0x19881cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198820: 0x2539021
    ctx->pc = 0x198820u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x198824: 0xae000008
    ctx->pc = 0x198824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x198828: 0x2631ffff
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19882c: 0xae14000c
    ctx->pc = 0x19882cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x198830: 0xae000010
    ctx->pc = 0x198830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x198834: 0xae000014
    ctx->pc = 0x198834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x198838: 0xae000018
    ctx->pc = 0x198838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x19883c: 0xc06621c
    ctx->pc = 0x19883Cu;
    SET_GPR_U32(ctx, 31, 0x198844u);
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
    ctx->pc = 0x198870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_InitPicAtr_0x198870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198844u; }
        else if (ctx->pc != 0x198844u) { ctx->pc = 0x198844u; }
    }
    if (ctx->pc != 0x198844u) { return; }
    ctx->pc = 0x198844u;
    // 0x198844: 0x5620fff4
    ctx->pc = 0x198844u;
    {
        const bool branch_taken_0x198844 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x198844) {
            ctx->pc = 0x198848u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
            ctx->pc = 0x198818u;
            goto label_198818;
        }
    }
    ctx->pc = 0x19884Cu;
label_19884c:
    // 0x19884c: 0xdfbf0050
    ctx->pc = 0x19884cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198850: 0xdfb40040
    ctx->pc = 0x198850u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198854: 0xdfb30030
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198858: 0xdfb20020
    ctx->pc = 0x198858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19885c: 0xdfb10010
    ctx->pc = 0x19885cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198860: 0xdfb00000
    ctx->pc = 0x198860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198864: 0x3e00008
    ctx->pc = 0x198864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198818u: goto label_198818;
            case 0x19884Cu: goto label_19884c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19886Cu;
}
