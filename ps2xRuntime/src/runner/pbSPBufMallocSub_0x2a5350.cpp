#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSPBufMallocSub
// Address: 0x2a5350 - 0x2a53b8
void pbSPBufMallocSub_0x2a5350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5350u;

    // 0x2a5350: 0x27bdffc0
    ctx->pc = 0x2a5350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a5354: 0xffbf0030
    ctx->pc = 0x2a5354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a5358: 0xffb00020
    ctx->pc = 0x2a5358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a535c: 0x3c020036
    ctx->pc = 0x2a535cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a5360: 0x8c50dee0
    ctx->pc = 0x2a5360u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a5364: 0x8e020034
    ctx->pc = 0x2a5364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2a5368: 0xc0c0d88
    ctx->pc = 0x2A5368u;
    SET_GPR_U32(ctx, 31, 0x2A5370u);
    ctx->pc = 0x2A536Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5370u; }
    }
    if (ctx->pc != 0x2A5370u) { return; }
    ctx->pc = 0x2A5370u;
    // 0x2a5370: 0x3c030001
    ctx->pc = 0x2a5370u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2a5374: 0x0
    ctx->pc = 0x2a5374u;
    // NOP
label_2a5378:
    // 0x2a5378: 0x42000039
    ctx->pc = 0x2a5378u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x2a537c: 0x40f
    ctx->pc = 0x2a537cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a5380: 0x40026000
    ctx->pc = 0x2a5380u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2a5384: 0x431024
    ctx->pc = 0x2a5384u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5388: 0x0
    ctx->pc = 0x2a5388u;
    // NOP
    // 0x2a538c: 0x1440fffa
    ctx->pc = 0x2A538Cu;
    {
        const bool branch_taken_0x2a538c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a538c) {
            ctx->pc = 0x2A5378u;
            goto label_2a5378;
        }
    }
    ctx->pc = 0x2A5394u;
    // 0x2a5394: 0x8e030034
    ctx->pc = 0x2a5394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2a5398: 0x8c620004
    ctx->pc = 0x2a5398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a539c: 0x8c440000
    ctx->pc = 0x2a539cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a53a0: 0xac640004
    ctx->pc = 0x2a53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2a53a4: 0x42000038
    ctx->pc = 0x2a53a4u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2a53a8: 0xdfbf0030
    ctx->pc = 0x2a53a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a53ac: 0xdfb00020
    ctx->pc = 0x2a53acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a53b0: 0x3e00008
    ctx->pc = 0x2A53B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A53B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5378u: goto label_2a5378;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A53B8u;
}
