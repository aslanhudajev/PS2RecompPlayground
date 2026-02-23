#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_DiscardSec
// Address: 0x196898 - 0x19691c
void sfmpv_DiscardSec_0x196898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_DiscardSec");


    ctx->pc = 0x196898u;

    // 0x196898: 0x27bdffa0
    ctx->pc = 0x196898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19689c: 0xffb40040
    ctx->pc = 0x19689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1968a0: 0xffb30030
    ctx->pc = 0x1968a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1968a4: 0x24140080
    ctx->pc = 0x1968a4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1968a8: 0xffb20020
    ctx->pc = 0x1968a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1968ac: 0x80982d
    ctx->pc = 0x1968acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968b0: 0xffbf0050
    ctx->pc = 0x1968b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1968b4: 0xa0902d
    ctx->pc = 0x1968b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968b8: 0xffb10010
    ctx->pc = 0x1968b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1968bc: 0xffb00000
    ctx->pc = 0x1968bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1968c0: 0x8e700004
    ctx->pc = 0x1968c0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1968c4: 0x8e710000
    ctx->pc = 0x1968c4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1968c8:
    // 0x1968c8: 0xc061610
    ctx->pc = 0x1968C8u;
    SET_GPR_U32(ctx, 31, 0x1968D0u);
    ctx->pc = 0x1968CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1968D0u; }
        else if (ctx->pc != 0x1968D0u) { ctx->pc = 0x1968D0u; }
    }
    if (ctx->pc != 0x1968D0u) { return; }
    ctx->pc = 0x1968D0u;
    // 0x1968d0: 0x54540009
    ctx->pc = 0x1968D0u;
    {
        const bool branch_taken_0x1968d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x1968d0) {
            ctx->pc = 0x1968D4u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
            ctx->pc = 0x1968F8u;
            goto label_1968f8;
        }
    }
    ctx->pc = 0x1968D8u;
    // 0x1968d8: 0x8e420000
    ctx->pc = 0x1968d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1968dc: 0x2610fffc
    ctx->pc = 0x1968dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1968e0: 0x26310004
    ctx->pc = 0x1968e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
    // 0x1968e4: 0x2a030004
    ctx->pc = 0x1968e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1968e8: 0x24420004
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1968ec: 0x1060fff6
    ctx->pc = 0x1968ECu;
    {
        const bool branch_taken_0x1968ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1968F0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1968ec) {
            ctx->pc = 0x1968C8u;
            goto label_1968c8;
        }
    }
    ctx->pc = 0x1968F4u;
    // 0x1968f4: 0xae700004
    ctx->pc = 0x1968f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_1968f8:
    // 0x1968f8: 0xae710000
    ctx->pc = 0x1968f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1968fc: 0xdfbf0050
    ctx->pc = 0x1968fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196900: 0xdfb40040
    ctx->pc = 0x196900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196904: 0xdfb30030
    ctx->pc = 0x196904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196908: 0xdfb20020
    ctx->pc = 0x196908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19690c: 0xdfb10010
    ctx->pc = 0x19690cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196910: 0xdfb00000
    ctx->pc = 0x196910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196914: 0x3e00008
    ctx->pc = 0x196914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1968C8u: goto label_1968c8;
            case 0x1968F8u: goto label_1968f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19691Cu;
}
