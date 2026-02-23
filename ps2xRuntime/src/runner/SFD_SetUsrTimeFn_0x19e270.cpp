#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetUsrTimeFn
// Address: 0x19e270 - 0x19e2f4
void SFD_SetUsrTimeFn_0x19e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetUsrTimeFn");


    ctx->pc = 0x19e270u;

    // 0x19e270: 0x27bdffc0
    ctx->pc = 0x19e270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e274: 0xffb00010
    ctx->pc = 0x19e274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19e278: 0xffb10020
    ctx->pc = 0x19e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19e27c: 0x80802d
    ctx->pc = 0x19e27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e280: 0xffbf0030
    ctx->pc = 0x19e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19e284: 0xc064f1e
    ctx->pc = 0x19E284u;
    SET_GPR_U32(ctx, 31, 0x19E28Cu);
    ctx->pc = 0x19E288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E28Cu; }
        else if (ctx->pc != 0x19E28Cu) { ctx->pc = 0x19E28Cu; }
    }
    if (ctx->pc != 0x19E28Cu) { return; }
    ctx->pc = 0x19E28Cu;
    // 0x19e28c: 0x10400007
    ctx->pc = 0x19E28Cu;
    {
        const bool branch_taken_0x19e28c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19e28c) {
            ctx->pc = 0x19E2ACu;
            goto label_19e2ac;
        }
    }
    ctx->pc = 0x19E294u;
    // 0x19e294: 0x3c05ff00
    ctx->pc = 0x19e294u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19e298: 0x202d
    ctx->pc = 0x19e298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e29c: 0xc064ea0
    ctx->pc = 0x19E29Cu;
    SET_GPR_U32(ctx, 31, 0x19E2A4u);
    ctx->pc = 0x19E2A0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 291));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2A4u; }
        else if (ctx->pc != 0x19E2A4u) { ctx->pc = 0x19E2A4u; }
    }
    if (ctx->pc != 0x19E2A4u) { return; }
    ctx->pc = 0x19E2A4u;
    // 0x19e2a4: 0x1000000f
    ctx->pc = 0x19E2A4u;
    {
        const bool branch_taken_0x19e2a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E2A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19e2a4) {
            ctx->pc = 0x19E2E4u;
            goto label_19e2e4;
        }
    }
    ctx->pc = 0x19E2ACu;
label_19e2ac:
    // 0x19e2ac: 0xc064f3a
    ctx->pc = 0x19E2ACu;
    SET_GPR_U32(ctx, 31, 0x19E2B4u);
    ctx->pc = 0x19E2B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2B4u; }
        else if (ctx->pc != 0x19E2B4u) { ctx->pc = 0x19E2B4u; }
    }
    if (ctx->pc != 0x19E2B4u) { return; }
    ctx->pc = 0x19E2B4u;
    // 0x19e2b4: 0x200202d
    ctx->pc = 0x19e2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2b8: 0x2405000f
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x19e2bc: 0xc067464
    ctx->pc = 0x19E2BCu;
    SET_GPR_U32(ctx, 31, 0x19E2C4u);
    ctx->pc = 0x19E2C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2C4u; }
        else if (ctx->pc != 0x19E2C4u) { ctx->pc = 0x19E2C4u; }
    }
    if (ctx->pc != 0x19E2C4u) { return; }
    ctx->pc = 0x19E2C4u;
    // 0x19e2c4: 0x200202d
    ctx->pc = 0x19e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2c8: 0x220282d
    ctx->pc = 0x19e2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2cc: 0xc0678be
    ctx->pc = 0x19E2CCu;
    SET_GPR_U32(ctx, 31, 0x19E2D4u);
    ctx->pc = 0x19E2D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19E2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetTimeFn_0x19e2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2D4u; }
        else if (ctx->pc != 0x19E2D4u) { ctx->pc = 0x19E2D4u; }
    }
    if (ctx->pc != 0x19E2D4u) { return; }
    ctx->pc = 0x19E2D4u;
    // 0x19e2d4: 0xc064f44
    ctx->pc = 0x19E2D4u;
    SET_GPR_U32(ctx, 31, 0x19E2DCu);
    ctx->pc = 0x19E2D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2DCu; }
        else if (ctx->pc != 0x19E2DCu) { ctx->pc = 0x19E2DCu; }
    }
    if (ctx->pc != 0x19E2DCu) { return; }
    ctx->pc = 0x19E2DCu;
    // 0x19e2dc: 0x102d
    ctx->pc = 0x19e2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2e0: 0xdfbf0030
    ctx->pc = 0x19e2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19e2e4:
    // 0x19e2e4: 0xdfb10020
    ctx->pc = 0x19e2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e2e8: 0xdfb00010
    ctx->pc = 0x19e2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e2ec: 0x3e00008
    ctx->pc = 0x19E2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E2F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E2ACu: goto label_19e2ac;
            case 0x19E2E4u: goto label_19e2e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E2F4u;
}
