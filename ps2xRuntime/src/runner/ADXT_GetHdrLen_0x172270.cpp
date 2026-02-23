#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetHdrLen
// Address: 0x172270 - 0x1722a4
void ADXT_GetHdrLen_0x172270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetHdrLen");


    ctx->pc = 0x172270u;

    // 0x172270: 0x27bdfff0
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172274: 0xffbf0000
    ctx->pc = 0x172274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172278: 0x80820001
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17227c: 0x28420002
    ctx->pc = 0x17227cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x172280: 0x14400005
    ctx->pc = 0x172280u;
    {
        const bool branch_taken_0x172280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172284u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172280) {
            ctx->pc = 0x172298u;
            goto label_172298;
        }
    }
    ctx->pc = 0x172288u;
    // 0x172288: 0xc05ba44
    ctx->pc = 0x172288u;
    SET_GPR_U32(ctx, 31, 0x172290u);
    ctx->pc = 0x17228Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x16E910u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetHdrLen_0x16e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172290u; }
        else if (ctx->pc != 0x172290u) { ctx->pc = 0x172290u; }
    }
    if (ctx->pc != 0x172290u) { return; }
    ctx->pc = 0x172290u;
    // 0x172290: 0x10000002
    ctx->pc = 0x172290u;
    {
        const bool branch_taken_0x172290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172294u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x172290) {
            ctx->pc = 0x17229Cu;
            goto label_17229c;
        }
    }
    ctx->pc = 0x172298u;
label_172298:
    // 0x172298: 0xdfbf0000
    ctx->pc = 0x172298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17229c:
    // 0x17229c: 0x3e00008
    ctx->pc = 0x17229Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172298u: goto label_172298;
            case 0x17229Cu: goto label_17229c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1722A4u;
}
