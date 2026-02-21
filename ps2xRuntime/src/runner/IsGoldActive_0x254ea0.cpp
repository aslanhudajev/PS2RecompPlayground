#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: IsGoldActive
// Address: 0x254ea0 - 0x254f0c
void IsGoldActive_0x254ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x254ea0u;

    // 0x254ea0: 0x302d
    ctx->pc = 0x254ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ea4: 0x3c020034
    ctx->pc = 0x254ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x254ea8: 0x8c44cd94
    ctx->pc = 0x254ea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x254eac: 0x3c020034
    ctx->pc = 0x254eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x254eb0: 0x8c42cd98
    ctx->pc = 0x254eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x254eb4: 0x18400013
    ctx->pc = 0x254EB4u;
    {
        const bool branch_taken_0x254eb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x254EB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x254eb4) {
            ctx->pc = 0x254F04u;
            goto label_254f04;
        }
    }
    ctx->pc = 0x254EBCu;
    // 0x254ebc: 0x2409ffff
    ctx->pc = 0x254ebcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254ec0: 0x24080001
    ctx->pc = 0x254ec0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x254ec4: 0x3c020034
    ctx->pc = 0x254ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x254ec8: 0x8c47cd98
    ctx->pc = 0x254ec8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x254ecc: 0x0
    ctx->pc = 0x254eccu;
    // NOP
label_254ed0:
    // 0x254ed0: 0x848200d8
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x254ed4: 0x10490008
    ctx->pc = 0x254ED4u;
    {
        const bool branch_taken_0x254ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 9));
        ctx->pc = 0x254ED8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x254ed4) {
            ctx->pc = 0x254EF8u;
            goto label_254ef8;
        }
    }
    ctx->pc = 0x254EDCu;
    // 0x254edc: 0x8c820000
    ctx->pc = 0x254edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254ee0: 0x8c430000
    ctx->pc = 0x254ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254ee4: 0x14680004
    ctx->pc = 0x254EE4u;
    {
        const bool branch_taken_0x254ee4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 8));
        if (branch_taken_0x254ee4) {
            ctx->pc = 0x254EF8u;
            goto label_254ef8;
        }
    }
    ctx->pc = 0x254EECu;
    // 0x254eec: 0x8c420004
    ctx->pc = 0x254eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x254ef0: 0x38420001
    ctx->pc = 0x254ef0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x254ef4: 0x62280a
    ctx->pc = 0x254ef4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_254ef8:
    // 0x254ef8: 0xc7102a
    ctx->pc = 0x254ef8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x254efc: 0x1440fff4
    ctx->pc = 0x254EFCu;
    {
        const bool branch_taken_0x254efc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x254F00u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 272));
        if (branch_taken_0x254efc) {
            ctx->pc = 0x254ED0u;
            goto label_254ed0;
        }
    }
    ctx->pc = 0x254F04u;
label_254f04:
    // 0x254f04: 0x3e00008
    ctx->pc = 0x254F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254ED0u: goto label_254ed0;
            case 0x254EF8u: goto label_254ef8;
            case 0x254F04u: goto label_254f04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x254F0Cu;
}
