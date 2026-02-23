#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetCond
// Address: 0x19d278 - 0x19d308
void SFD_GetCond_0x19d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetCond");


    ctx->pc = 0x19d278u;

    // 0x19d278: 0x27bdffc0
    ctx->pc = 0x19d278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d27c: 0xffb20020
    ctx->pc = 0x19d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d280: 0xffb10010
    ctx->pc = 0x19d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d284: 0xc0902d
    ctx->pc = 0x19d284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d288: 0xffb00000
    ctx->pc = 0x19d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d28c: 0xa0882d
    ctx->pc = 0x19d28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d290: 0x80802d
    ctx->pc = 0x19d290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d294: 0x16000008
    ctx->pc = 0x19D294u;
    {
        const bool branch_taken_0x19d294 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D298u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x19d294) {
            ctx->pc = 0x19D2B8u;
            goto label_19d2b8;
        }
    }
    ctx->pc = 0x19D29Cu;
    // 0x19d29c: 0x3c020026
    ctx->pc = 0x19d29cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19d2a0: 0x111880
    ctx->pc = 0x19d2a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x19d2a4: 0x2442ddc0
    ctx->pc = 0x19d2a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x19d2a8: 0x621821
    ctx->pc = 0x19d2a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d2ac: 0x8c640000
    ctx->pc = 0x19d2acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d2b0: 0x1000000e
    ctx->pc = 0x19D2B0u;
    {
        const bool branch_taken_0x19d2b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D2B4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x19d2b0) {
            ctx->pc = 0x19D2ECu;
            goto label_19d2ec;
        }
    }
    ctx->pc = 0x19D2B8u;
label_19d2b8:
    // 0x19d2b8: 0xc064f1e
    ctx->pc = 0x19D2B8u;
    SET_GPR_U32(ctx, 31, 0x19D2C0u);
    ctx->pc = 0x19D2BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2C0u; }
        else if (ctx->pc != 0x19D2C0u) { ctx->pc = 0x19D2C0u; }
    }
    if (ctx->pc != 0x19D2C0u) { return; }
    ctx->pc = 0x19D2C0u;
    // 0x19d2c0: 0x10400006
    ctx->pc = 0x19D2C0u;
    {
        const bool branch_taken_0x19d2c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D2C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d2c0) {
            ctx->pc = 0x19D2DCu;
            goto label_19d2dc;
        }
    }
    ctx->pc = 0x19D2C8u;
    // 0x19d2c8: 0x3c05ff00
    ctx->pc = 0x19d2c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19d2cc: 0xc064ea0
    ctx->pc = 0x19D2CCu;
    SET_GPR_U32(ctx, 31, 0x19D2D4u);
    ctx->pc = 0x19D2D0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 275));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2D4u; }
        else if (ctx->pc != 0x19D2D4u) { ctx->pc = 0x19D2D4u; }
    }
    if (ctx->pc != 0x19D2D4u) { return; }
    ctx->pc = 0x19D2D4u;
    // 0x19d2d4: 0x10000007
    ctx->pc = 0x19D2D4u;
    {
        const bool branch_taken_0x19d2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D2D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19d2d4) {
            ctx->pc = 0x19D2F4u;
            goto label_19d2f4;
        }
    }
    ctx->pc = 0x19D2DCu;
label_19d2dc:
    // 0x19d2dc: 0x200202d
    ctx->pc = 0x19d2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d2e0: 0xc0674c2
    ctx->pc = 0x19D2E0u;
    SET_GPR_U32(ctx, 31, 0x19D2E8u);
    ctx->pc = 0x19D2E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D2E8u; }
        else if (ctx->pc != 0x19D2E8u) { ctx->pc = 0x19D2E8u; }
    }
    if (ctx->pc != 0x19D2E8u) { return; }
    ctx->pc = 0x19D2E8u;
    // 0x19d2e8: 0xae420000
    ctx->pc = 0x19d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_19d2ec:
    // 0x19d2ec: 0x102d
    ctx->pc = 0x19d2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d2f0: 0xdfbf0030
    ctx->pc = 0x19d2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d2f4:
    // 0x19d2f4: 0xdfb20020
    ctx->pc = 0x19d2f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d2f8: 0xdfb10010
    ctx->pc = 0x19d2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d2fc: 0xdfb00000
    ctx->pc = 0x19d2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d300: 0x3e00008
    ctx->pc = 0x19D300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D2B8u: goto label_19d2b8;
            case 0x19D2DCu: goto label_19d2dc;
            case 0x19D2ECu: goto label_19d2ec;
            case 0x19D2F4u: goto label_19d2f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D308u;
}
