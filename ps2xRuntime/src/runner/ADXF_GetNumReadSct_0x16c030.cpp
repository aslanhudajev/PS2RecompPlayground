#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetNumReadSct
// Address: 0x16c030 - 0x16c060
void ADXF_GetNumReadSct_0x16c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetNumReadSct");


    ctx->pc = 0x16c030u;

    // 0x16c030: 0x27bdfff0
    ctx->pc = 0x16c030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c034: 0x14800006
    ctx->pc = 0x16C034u;
    {
        const bool branch_taken_0x16c034 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C038u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16c034) {
            ctx->pc = 0x16C050u;
            goto label_16c050;
        }
    }
    ctx->pc = 0x16C03Cu;
    // 0x16c03c: 0x3c04002c
    ctx->pc = 0x16c03cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16c040: 0xc05a854
    ctx->pc = 0x16C040u;
    SET_GPR_U32(ctx, 31, 0x16C048u);
    ctx->pc = 0x16C044u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940456));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C048u; }
        else if (ctx->pc != 0x16C048u) { ctx->pc = 0x16C048u; }
    }
    if (ctx->pc != 0x16C048u) { return; }
    ctx->pc = 0x16C048u;
    // 0x16c048: 0x10000002
    ctx->pc = 0x16C048u;
    {
        const bool branch_taken_0x16c048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C04Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16c048) {
            ctx->pc = 0x16C054u;
            goto label_16c054;
        }
    }
    ctx->pc = 0x16C050u;
label_16c050:
    // 0x16c050: 0x8c820020
    ctx->pc = 0x16c050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_16c054:
    // 0x16c054: 0xdfbf0000
    ctx->pc = 0x16c054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c058: 0x3e00008
    ctx->pc = 0x16C058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C05Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C050u: goto label_16c050;
            case 0x16C054u: goto label_16c054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C060u;
}
