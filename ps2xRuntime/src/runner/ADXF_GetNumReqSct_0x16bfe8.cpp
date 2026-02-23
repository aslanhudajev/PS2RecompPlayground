#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetNumReqSct
// Address: 0x16bfe8 - 0x16c030
void ADXF_GetNumReqSct_0x16bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetNumReqSct");


    ctx->pc = 0x16bfe8u;

    // 0x16bfe8: 0x27bdffe0
    ctx->pc = 0x16bfe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bfec: 0xffb00000
    ctx->pc = 0x16bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bff0: 0xffbf0010
    ctx->pc = 0x16bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bff4: 0x14800007
    ctx->pc = 0x16BFF4u;
    {
        const bool branch_taken_0x16bff4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BFF8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16bff4) {
            ctx->pc = 0x16C014u;
            goto label_16c014;
        }
    }
    ctx->pc = 0x16BFFCu;
    // 0x16bffc: 0x3c04002c
    ctx->pc = 0x16bffcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16c000: 0xc05a854
    ctx->pc = 0x16C000u;
    SET_GPR_U32(ctx, 31, 0x16C008u);
    ctx->pc = 0x16C004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940408));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C008u; }
        else if (ctx->pc != 0x16C008u) { ctx->pc = 0x16C008u; }
    }
    if (ctx->pc != 0x16C008u) { return; }
    ctx->pc = 0x16C008u;
    // 0x16c008: 0xae000000
    ctx->pc = 0x16c008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16c00c: 0x10000004
    ctx->pc = 0x16C00Cu;
    {
        const bool branch_taken_0x16c00c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C010u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16c00c) {
            ctx->pc = 0x16C020u;
            goto label_16c020;
        }
    }
    ctx->pc = 0x16C014u;
label_16c014:
    // 0x16c014: 0x8c820018
    ctx->pc = 0x16c014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16c018: 0xae020000
    ctx->pc = 0x16c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16c01c: 0x8c82001c
    ctx->pc = 0x16c01cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_16c020:
    // 0x16c020: 0xdfbf0010
    ctx->pc = 0x16c020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c024: 0xdfb00000
    ctx->pc = 0x16c024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c028: 0x3e00008
    ctx->pc = 0x16C028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C02Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C014u: goto label_16c014;
            case 0x16C020u: goto label_16c020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C030u;
}
