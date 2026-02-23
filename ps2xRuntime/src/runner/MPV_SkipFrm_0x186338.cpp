#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_SkipFrm
// Address: 0x186338 - 0x1863d4
void MPV_SkipFrm_0x186338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_SkipFrm");


    ctx->pc = 0x186338u;

    // 0x186338: 0x27bdffb0
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18633c: 0xffb30030
    ctx->pc = 0x18633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x186340: 0xffb20020
    ctx->pc = 0x186340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x186344: 0x80982d
    ctx->pc = 0x186344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186348: 0xffb00000
    ctx->pc = 0x186348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18634c: 0xc0902d
    ctx->pc = 0x18634cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186350: 0xffbf0040
    ctx->pc = 0x186350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x186354: 0xa0802d
    ctx->pc = 0x186354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186358: 0xc062142
    ctx->pc = 0x186358u;
    SET_GPR_U32(ctx, 31, 0x186360u);
    ctx->pc = 0x18635Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186360u; }
        else if (ctx->pc != 0x186360u) { ctx->pc = 0x186360u; }
    }
    if (ctx->pc != 0x186360u) { return; }
    ctx->pc = 0x186360u;
    // 0x186360: 0x10400004
    ctx->pc = 0x186360u;
    {
        const bool branch_taken_0x186360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186364u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186360) {
            ctx->pc = 0x186374u;
            goto label_186374;
        }
    }
    ctx->pc = 0x186368u;
    // 0x186368: 0x3c05ff03
    ctx->pc = 0x186368u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x18636c: 0x10000010
    ctx->pc = 0x18636Cu;
    {
        const bool branch_taken_0x18636c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186370u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 522));
        if (branch_taken_0x18636c) {
            ctx->pc = 0x1863B0u;
            goto label_1863b0;
        }
    }
    ctx->pc = 0x186374u;
label_186374:
    // 0x186374: 0x8e110004
    ctx->pc = 0x186374u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x186378: 0x240600cc
    ctx->pc = 0x186378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 204));
    // 0x18637c: 0x8e100000
    ctx->pc = 0x18637cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186380: 0x220282d
    ctx->pc = 0x186380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186384: 0xc061676
    ctx->pc = 0x186384u;
    SET_GPR_U32(ctx, 31, 0x18638Cu);
    ctx->pc = 0x186388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1859D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SearchDelim_0x1859d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18638Cu; }
        else if (ctx->pc != 0x18638Cu) { ctx->pc = 0x18638Cu; }
    }
    if (ctx->pc != 0x18638Cu) { return; }
    ctx->pc = 0x18638Cu;
    // 0x18638c: 0x14400005
    ctx->pc = 0x18638Cu;
    {
        const bool branch_taken_0x18638c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186390u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x18638c) {
            ctx->pc = 0x1863A4u;
            goto label_1863a4;
        }
    }
    ctx->pc = 0x186394u;
    // 0x186394: 0x3c05ff03
    ctx->pc = 0x186394u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x186398: 0xae510000
    ctx->pc = 0x186398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x18639c: 0x10000003
    ctx->pc = 0x18639Cu;
    {
        const bool branch_taken_0x18639c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1863A0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 773));
        if (branch_taken_0x18639c) {
            ctx->pc = 0x1863ACu;
            goto label_1863ac;
        }
    }
    ctx->pc = 0x1863A4u;
label_1863a4:
    // 0x1863a4: 0x282d
    ctx->pc = 0x1863a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863a8: 0xae420000
    ctx->pc = 0x1863a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1863ac:
    // 0x1863ac: 0x260202d
    ctx->pc = 0x1863acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1863b0:
    // 0x1863b0: 0xc061846
    ctx->pc = 0x1863B0u;
    SET_GPR_U32(ctx, 31, 0x1863B8u);
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1863B8u; }
        else if (ctx->pc != 0x1863B8u) { ctx->pc = 0x1863B8u; }
    }
    if (ctx->pc != 0x1863B8u) { return; }
    ctx->pc = 0x1863B8u;
    // 0x1863b8: 0xdfbf0040
    ctx->pc = 0x1863b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1863bc: 0xdfb30030
    ctx->pc = 0x1863bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1863c0: 0xdfb20020
    ctx->pc = 0x1863c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1863c4: 0xdfb10010
    ctx->pc = 0x1863c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1863c8: 0xdfb00000
    ctx->pc = 0x1863c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1863cc: 0x3e00008
    ctx->pc = 0x1863CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186374u: goto label_186374;
            case 0x1863A4u: goto label_1863a4;
            case 0x1863ACu: goto label_1863ac;
            case 0x1863B0u: goto label_1863b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1863D4u;
}
