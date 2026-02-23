#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetNumSmpl
// Address: 0x1721c8 - 0x1721fc
void ADXT_GetNumSmpl_0x1721c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetNumSmpl");


    ctx->pc = 0x1721c8u;

    // 0x1721c8: 0x27bdfff0
    ctx->pc = 0x1721c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1721cc: 0xffbf0000
    ctx->pc = 0x1721ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1721d0: 0x80820001
    ctx->pc = 0x1721d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1721d4: 0x28420002
    ctx->pc = 0x1721d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1721d8: 0x14400005
    ctx->pc = 0x1721D8u;
    {
        const bool branch_taken_0x1721d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1721DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1721d8) {
            ctx->pc = 0x1721F0u;
            goto label_1721f0;
        }
    }
    ctx->pc = 0x1721E0u;
    // 0x1721e0: 0xc05ba04
    ctx->pc = 0x1721E0u;
    SET_GPR_U32(ctx, 31, 0x1721E8u);
    ctx->pc = 0x1721E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721E8u; }
        else if (ctx->pc != 0x1721E8u) { ctx->pc = 0x1721E8u; }
    }
    if (ctx->pc != 0x1721E8u) { return; }
    ctx->pc = 0x1721E8u;
    // 0x1721e8: 0x10000002
    ctx->pc = 0x1721E8u;
    {
        const bool branch_taken_0x1721e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1721ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1721e8) {
            ctx->pc = 0x1721F4u;
            goto label_1721f4;
        }
    }
    ctx->pc = 0x1721F0u;
label_1721f0:
    // 0x1721f0: 0xdfbf0000
    ctx->pc = 0x1721f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1721f4:
    // 0x1721f4: 0x3e00008
    ctx->pc = 0x1721F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1721F0u: goto label_1721f0;
            case 0x1721F4u: goto label_1721f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1721FCu;
}
