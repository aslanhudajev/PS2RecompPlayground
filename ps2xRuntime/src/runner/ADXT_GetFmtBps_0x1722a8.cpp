#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetFmtBps
// Address: 0x1722a8 - 0x1722dc
void ADXT_GetFmtBps_0x1722a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetFmtBps");


    ctx->pc = 0x1722a8u;

    // 0x1722a8: 0x27bdfff0
    ctx->pc = 0x1722a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1722ac: 0xffbf0000
    ctx->pc = 0x1722acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1722b0: 0x80820001
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1722b4: 0x28420002
    ctx->pc = 0x1722b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1722b8: 0x14400005
    ctx->pc = 0x1722B8u;
    {
        const bool branch_taken_0x1722b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1722BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1722b8) {
            ctx->pc = 0x1722D0u;
            goto label_1722d0;
        }
    }
    ctx->pc = 0x1722C0u;
    // 0x1722c0: 0xc05ba46
    ctx->pc = 0x1722C0u;
    SET_GPR_U32(ctx, 31, 0x1722C8u);
    ctx->pc = 0x1722C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x16E918u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetFmtBps_0x16e918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1722C8u; }
        else if (ctx->pc != 0x1722C8u) { ctx->pc = 0x1722C8u; }
    }
    if (ctx->pc != 0x1722C8u) { return; }
    ctx->pc = 0x1722C8u;
    // 0x1722c8: 0x10000002
    ctx->pc = 0x1722C8u;
    {
        const bool branch_taken_0x1722c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1722CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1722c8) {
            ctx->pc = 0x1722D4u;
            goto label_1722d4;
        }
    }
    ctx->pc = 0x1722D0u;
label_1722d0:
    // 0x1722d0: 0xdfbf0000
    ctx->pc = 0x1722d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1722d4:
    // 0x1722d4: 0x3e00008
    ctx->pc = 0x1722D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1722D0u: goto label_1722d0;
            case 0x1722D4u: goto label_1722d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1722DCu;
}
