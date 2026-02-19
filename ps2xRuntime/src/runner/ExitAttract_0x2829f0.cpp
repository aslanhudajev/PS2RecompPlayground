#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExitAttract
// Address: 0x2829f0 - 0x282a6c
void ExitAttract_0x2829f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2829f0u;

    // 0x2829f0: 0x27bdfff0
    ctx->pc = 0x2829f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2829f4: 0xffbf0000
    ctx->pc = 0x2829f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2829f8: 0x3c030035
    ctx->pc = 0x2829f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x2829fc: 0x24020002
    ctx->pc = 0x2829fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x282a00: 0xac62a2d8
    ctx->pc = 0x282a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943448), GPR_U32(ctx, 2));
    // 0x282a04: 0x202d
    ctx->pc = 0x282a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282a08: 0xc09908c
    ctx->pc = 0x282A08u;
    SET_GPR_U32(ctx, 31, 0x282A10u);
    ctx->pc = 0x282A0Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A10u; }
    }
    if (ctx->pc != 0x282A10u) { return; }
    ctx->pc = 0x282A10u;
    // 0x282a10: 0x10400013
    ctx->pc = 0x282A10u;
    {
        const bool branch_taken_0x282a10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282A14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282a10) {
            ctx->pc = 0x282A60u;
            goto label_282a60;
        }
    }
    ctx->pc = 0x282A18u;
    // 0x282a18: 0xc0b731e
    ctx->pc = 0x282A18u;
    SET_GPR_U32(ctx, 31, 0x282A20u);
    ctx->pc = 0x2DCC78u;
    {
        const uint32_t __entryPc = ctx->pc;
        KillMovie_0x2dcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A20u; }
    }
    if (ctx->pc != 0x282A20u) { return; }
    ctx->pc = 0x282A20u;
    // 0x282a20: 0x1040000f
    ctx->pc = 0x282A20u;
    {
        const bool branch_taken_0x282a20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282A24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282a20) {
            ctx->pc = 0x282A60u;
            goto label_282a60;
        }
    }
    ctx->pc = 0x282A28u;
    // 0x282a28: 0xc08839e
    ctx->pc = 0x282A28u;
    SET_GPR_U32(ctx, 31, 0x282A30u);
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A30u; }
    }
    if (ctx->pc != 0x282A30u) { return; }
    ctx->pc = 0x282A30u;
    // 0x282a30: 0x3c060035
    ctx->pc = 0x282a30u;
    SET_GPR_U32(ctx, 6, ((uint32_t)53 << 16));
    // 0x282a34: 0x3c050035
    ctx->pc = 0x282a34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x282a38: 0x3c040035
    ctx->pc = 0x282a38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x282a3c: 0x3c030035
    ctx->pc = 0x282a3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282a40: 0x2402ffff
    ctx->pc = 0x282a40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282a44: 0xac629ba8
    ctx->pc = 0x282a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941608), GPR_U32(ctx, 2));
    // 0x282a48: 0xac829bb0
    ctx->pc = 0x282a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941616), GPR_U32(ctx, 2));
    // 0x282a4c: 0xaca29bb4
    ctx->pc = 0x282a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941620), GPR_U32(ctx, 2));
    // 0x282a50: 0xacc29bac
    ctx->pc = 0x282a50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941612), GPR_U32(ctx, 2));
    // 0x282a54: 0xc089462
    ctx->pc = 0x282A54u;
    SET_GPR_U32(ctx, 31, 0x282A5Cu);
    ctx->pc = 0x282A58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x225188u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetMaxFPS_0x225188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282A5Cu; }
    }
    if (ctx->pc != 0x282A5Cu) { return; }
    ctx->pc = 0x282A5Cu;
    // 0x282a5c: 0x24020001
    ctx->pc = 0x282a5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_282a60:
    // 0x282a60: 0xdfbf0000
    ctx->pc = 0x282a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282a64: 0x3e00008
    ctx->pc = 0x282A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282A68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282A60u: goto label_282a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282A6Cu;
}
