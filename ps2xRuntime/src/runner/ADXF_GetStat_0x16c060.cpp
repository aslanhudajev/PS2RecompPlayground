#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetStat
// Address: 0x16c060 - 0x16c090
void ADXF_GetStat_0x16c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetStat");


    ctx->pc = 0x16c060u;

    // 0x16c060: 0x27bdfff0
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c064: 0x14800006
    ctx->pc = 0x16C064u;
    {
        const bool branch_taken_0x16c064 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C068u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16c064) {
            ctx->pc = 0x16C080u;
            goto label_16c080;
        }
    }
    ctx->pc = 0x16C06Cu;
    // 0x16c06c: 0x3c04002c
    ctx->pc = 0x16c06cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16c070: 0xc05a854
    ctx->pc = 0x16C070u;
    SET_GPR_U32(ctx, 31, 0x16C078u);
    ctx->pc = 0x16C074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940504));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C078u; }
        else if (ctx->pc != 0x16C078u) { ctx->pc = 0x16C078u; }
    }
    if (ctx->pc != 0x16C078u) { return; }
    ctx->pc = 0x16C078u;
    // 0x16c078: 0x10000002
    ctx->pc = 0x16C078u;
    {
        const bool branch_taken_0x16c078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C07Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16c078) {
            ctx->pc = 0x16C084u;
            goto label_16c084;
        }
    }
    ctx->pc = 0x16C080u;
label_16c080:
    // 0x16c080: 0x80820001
    ctx->pc = 0x16c080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_16c084:
    // 0x16c084: 0xdfbf0000
    ctx->pc = 0x16c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c088: 0x3e00008
    ctx->pc = 0x16C088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C08Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C080u: goto label_16c080;
            case 0x16C084u: goto label_16c084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C090u;
}
