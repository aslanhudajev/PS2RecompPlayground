#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_SetupVlc
// Address: 0x18c278 - 0x18c2ac
void mpvvlc_SetupVlc_0x18c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_SetupVlc");


    ctx->pc = 0x18c278u;

    // 0x18c278: 0x27bdfff0
    ctx->pc = 0x18c278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c27c: 0xffbf0000
    ctx->pc = 0x18c27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c280: 0xc0630ac
    ctx->pc = 0x18C280u;
    SET_GPR_U32(ctx, 31, 0x18C288u);
    ctx->pc = 0x18C284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1456));
    ctx->pc = 0x18C2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_SetVlcRunLevel_0x18c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C288u; }
        else if (ctx->pc != 0x18C288u) { ctx->pc = 0x18C288u; }
    }
    if (ctx->pc != 0x18C288u) { return; }
    ctx->pc = 0x18C288u;
    // 0x18c288: 0xc0630ea
    ctx->pc = 0x18C288u;
    SET_GPR_U32(ctx, 31, 0x18C290u);
    ctx->pc = 0x18C28Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C3A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_SetVlcDcSiz_0x18c3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C290u; }
        else if (ctx->pc != 0x18C290u) { ctx->pc = 0x18C290u; }
    }
    if (ctx->pc != 0x18C290u) { return; }
    ctx->pc = 0x18C290u;
    // 0x18c290: 0xc063102
    ctx->pc = 0x18C290u;
    SET_GPR_U32(ctx, 31, 0x18C298u);
    ctx->pc = 0x18C294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C408u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_SetVlcMotion_0x18c408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C298u; }
        else if (ctx->pc != 0x18C298u) { ctx->pc = 0x18C298u; }
    }
    if (ctx->pc != 0x18C298u) { return; }
    ctx->pc = 0x18C298u;
    // 0x18c298: 0xc06311a
    ctx->pc = 0x18C298u;
    SET_GPR_U32(ctx, 31, 0x18C2A0u);
    ctx->pc = 0x18C29Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C468u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_SetVlcMbType_0x18c468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2A0u; }
        else if (ctx->pc != 0x18C2A0u) { ctx->pc = 0x18C2A0u; }
    }
    if (ctx->pc != 0x18C2A0u) { return; }
    ctx->pc = 0x18C2A0u;
    // 0x18c2a0: 0xdfbf0000
    ctx->pc = 0x18c2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c2a4: 0x3e00008
    ctx->pc = 0x18C2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C2A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C2ACu;
}
