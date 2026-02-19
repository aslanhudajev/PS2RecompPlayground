#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DebugCamUpdate
// Address: 0x2142f0 - 0x214338
void DebugCamUpdate_0x2142f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2142f0u;

    // 0x2142f0: 0x27bdfff0
    ctx->pc = 0x2142f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2142f4: 0xffbf0000
    ctx->pc = 0x2142f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2142f8: 0x3c020032
    ctx->pc = 0x2142f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2142fc: 0x8c42f7cc
    ctx->pc = 0x2142fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965196)));
    // 0x214300: 0x14400003
    ctx->pc = 0x214300u;
    {
        const bool branch_taken_0x214300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x214300) {
            ctx->pc = 0x214310u;
            goto label_214310;
        }
    }
    ctx->pc = 0x214308u;
    // 0x214308: 0xc084d2a
    ctx->pc = 0x214308u;
    SET_GPR_U32(ctx, 31, 0x214310u);
    ctx->pc = 0x2134A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DebugCamInit_0x2134a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214310u; }
    }
    if (ctx->pc != 0x214310u) { return; }
    ctx->pc = 0x214310u;
label_214310:
    // 0x214310: 0xc08560a
    ctx->pc = 0x214310u;
    SET_GPR_U32(ctx, 31, 0x214318u);
    ctx->pc = 0x215828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CurTransmitterBlink_0x215828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214318u; }
    }
    if (ctx->pc != 0x214318u) { return; }
    ctx->pc = 0x214318u;
    // 0x214318: 0xc084d38
    ctx->pc = 0x214318u;
    SET_GPR_U32(ctx, 31, 0x214320u);
    ctx->pc = 0x2134E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DebugCamControlInputs_0x2134e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214320u; }
    }
    if (ctx->pc != 0x214320u) { return; }
    ctx->pc = 0x214320u;
    // 0x214320: 0x3c02003c
    ctx->pc = 0x214320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x214324: 0xc08504a
    ctx->pc = 0x214324u;
    SET_GPR_U32(ctx, 31, 0x21432Cu);
    ctx->pc = 0x214328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    ctx->pc = 0x214128u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamUpdate_0x214128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21432Cu; }
    }
    if (ctx->pc != 0x21432Cu) { return; }
    ctx->pc = 0x21432Cu;
    // 0x21432c: 0xdfbf0000
    ctx->pc = 0x21432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214330: 0x3e00008
    ctx->pc = 0x214330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214334u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214310u: goto label_214310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214338u;
}
