#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_output_sdata
// Address: 0x16f7a8 - 0x16f88c
void adxsje_output_sdata_0x16f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_output_sdata");


    ctx->pc = 0x16f7a8u;

    // 0x16f7a8: 0x27bdff80
    ctx->pc = 0x16f7a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16f7ac: 0xffb40050
    ctx->pc = 0x16f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x16f7b0: 0xffb20030
    ctx->pc = 0x16f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16f7b4: 0xa02d
    ctx->pc = 0x16f7b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7b8: 0xffb10020
    ctx->pc = 0x16f7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x16f7bc: 0x902d
    ctx->pc = 0x16f7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7c0: 0xffbf0070
    ctx->pc = 0x16f7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x16f7c4: 0x80882d
    ctx->pc = 0x16f7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7c8: 0xffb50060
    ctx->pc = 0x16f7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x16f7cc: 0xffb30040
    ctx->pc = 0x16f7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x16f7d0: 0xffb00010
    ctx->pc = 0x16f7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f7d4: 0x8e220058
    ctx->pc = 0x16f7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x16f7d8: 0x18400022
    ctx->pc = 0x16F7D8u;
    {
        const bool branch_taken_0x16f7d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F7DCu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x16f7d8) {
            ctx->pc = 0x16F864u;
            goto label_16f864;
        }
    }
    ctx->pc = 0x16F7E0u;
    // 0x16f7e0: 0x26350290
    ctx->pc = 0x16f7e0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 656));
    // 0x16f7e4: 0x121040
    ctx->pc = 0x16f7e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
label_16f7e8:
    // 0x16f7e8: 0x3a0202d
    ctx->pc = 0x16f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7ec: 0x2a21021
    ctx->pc = 0x16f7ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16f7f0: 0x24050001
    ctx->pc = 0x16f7f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f7f4: 0x94500000
    ctx->pc = 0x16f7f4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f7f8: 0x24060001
    ctx->pc = 0x16f7f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f7fc: 0x260382d
    ctx->pc = 0x16f7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f800: 0x26940012
    ctx->pc = 0x16f800u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 18));
    // 0x16f804: 0x2610ffff
    ctx->pc = 0x16f804u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16f808: 0x108400
    ctx->pc = 0x16f808u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 16));
    // 0x16f80c: 0x101603
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16f810: 0x108403
    ctx->pc = 0x16f810u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x16f814: 0xc05ba70
    ctx->pc = 0x16F814u;
    SET_GPR_U32(ctx, 31, 0x16F81Cu);
    ctx->pc = 0x16F818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F81Cu; }
        else if (ctx->pc != 0x16F81Cu) { ctx->pc = 0x16F81Cu; }
    }
    if (ctx->pc != 0x16F81Cu) { return; }
    ctx->pc = 0x16F81Cu;
    // 0x16f81c: 0xa3b00000
    ctx->pc = 0x16f81cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x16f820: 0x3a0202d
    ctx->pc = 0x16f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f824: 0x24050001
    ctx->pc = 0x16f824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f828: 0x24060001
    ctx->pc = 0x16f828u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f82c: 0xc05ba70
    ctx->pc = 0x16F82Cu;
    SET_GPR_U32(ctx, 31, 0x16F834u);
    ctx->pc = 0x16F830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F834u; }
        else if (ctx->pc != 0x16F834u) { ctx->pc = 0x16F834u; }
    }
    if (ctx->pc != 0x16F834u) { return; }
    ctx->pc = 0x16F834u;
    // 0x16f834: 0x122100
    ctx->pc = 0x16f834u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 4));
    // 0x16f838: 0x24050001
    ctx->pc = 0x16f838u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f83c: 0x248402a8
    ctx->pc = 0x16f83cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 680));
    // 0x16f840: 0x24060010
    ctx->pc = 0x16f840u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x16f844: 0x2242021
    ctx->pc = 0x16f844u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x16f848: 0xc05ba70
    ctx->pc = 0x16F848u;
    SET_GPR_U32(ctx, 31, 0x16F850u);
    ctx->pc = 0x16F84Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F850u; }
        else if (ctx->pc != 0x16F850u) { ctx->pc = 0x16F850u; }
    }
    if (ctx->pc != 0x16F850u) { return; }
    ctx->pc = 0x16F850u;
    // 0x16f850: 0x26520001
    ctx->pc = 0x16f850u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x16f854: 0x8e220058
    ctx->pc = 0x16f854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x16f858: 0x242102a
    ctx->pc = 0x16f858u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x16f85c: 0x1440ffe2
    ctx->pc = 0x16F85Cu;
    {
        const bool branch_taken_0x16f85c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F860u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x16f85c) {
            ctx->pc = 0x16F7E8u;
            goto label_16f7e8;
        }
    }
    ctx->pc = 0x16F864u;
label_16f864:
    // 0x16f864: 0x280102d
    ctx->pc = 0x16f864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f868: 0xdfbf0070
    ctx->pc = 0x16f868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f86c: 0xdfb50060
    ctx->pc = 0x16f86cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f870: 0xdfb40050
    ctx->pc = 0x16f870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f874: 0xdfb30040
    ctx->pc = 0x16f874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f878: 0xdfb20030
    ctx->pc = 0x16f878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f87c: 0xdfb10020
    ctx->pc = 0x16f87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f880: 0xdfb00010
    ctx->pc = 0x16f880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f884: 0x3e00008
    ctx->pc = 0x16F884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F888u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F7E8u: goto label_16f7e8;
            case 0x16F864u: goto label_16f864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F88Cu;
}
