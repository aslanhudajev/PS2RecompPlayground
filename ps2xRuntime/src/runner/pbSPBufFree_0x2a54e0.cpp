#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSPBufFree
// Address: 0x2a54e0 - 0x2a5544
void pbSPBufFree_0x2a54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a54e0u;

    // 0x2a54e0: 0x27bdffd0
    ctx->pc = 0x2a54e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a54e4: 0xffbf0020
    ctx->pc = 0x2a54e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a54e8: 0x3c020036
    ctx->pc = 0x2a54e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a54ec: 0x8c43dee0
    ctx->pc = 0x2a54ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a54f0: 0x3c050001
    ctx->pc = 0x2a54f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    // 0x2a54f4: 0x0
    ctx->pc = 0x2a54f4u;
    // NOP
label_2a54f8:
    // 0x2a54f8: 0x42000039
    ctx->pc = 0x2a54f8u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x2a54fc: 0x40f
    ctx->pc = 0x2a54fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a5500: 0x40026000
    ctx->pc = 0x2a5500u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2a5504: 0x451024
    ctx->pc = 0x2a5504u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a5508: 0x0
    ctx->pc = 0x2a5508u;
    // NOP
    // 0x2a550c: 0x1440fffa
    ctx->pc = 0x2A550Cu;
    {
        const bool branch_taken_0x2a550c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a550c) {
            ctx->pc = 0x2A54F8u;
            goto label_2a54f8;
        }
    }
    ctx->pc = 0x2A5514u;
    // 0x2a5514: 0x8c620034
    ctx->pc = 0x2a5514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a5518: 0x8c420004
    ctx->pc = 0x2a5518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a551c: 0xac820000
    ctx->pc = 0x2a551cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a5520: 0x8c620034
    ctx->pc = 0x2a5520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a5524: 0xac440004
    ctx->pc = 0x2a5524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2a5528: 0x42000038
    ctx->pc = 0x2a5528u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2a552c: 0x8c620034
    ctx->pc = 0x2a552cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a5530: 0xc0c0d80
    ctx->pc = 0x2A5530u;
    SET_GPR_U32(ctx, 31, 0x2A5538u);
    ctx->pc = 0x2A5534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5538u; }
    }
    if (ctx->pc != 0x2A5538u) { return; }
    ctx->pc = 0x2A5538u;
    // 0x2a5538: 0xdfbf0020
    ctx->pc = 0x2a5538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a553c: 0x3e00008
    ctx->pc = 0x2A553Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5540u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A54F8u: goto label_2a54f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5544u;
}
