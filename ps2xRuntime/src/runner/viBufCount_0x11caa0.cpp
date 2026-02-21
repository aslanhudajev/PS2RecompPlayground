#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufCount
// Address: 0x11caa0 - 0x11caec
void viBufCount_0x11caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11caa0u;

    // 0x11caa0: 0x27bdffd0
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11caa4: 0xffb10010
    ctx->pc = 0x11caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11caa8: 0xffb00000
    ctx->pc = 0x11caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11caac: 0xffbf0020
    ctx->pc = 0x11caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11cab0: 0x80802d
    ctx->pc = 0x11cab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cab4: 0xc0438b8
    ctx->pc = 0x11CAB4u;
    SET_GPR_U32(ctx, 31, 0x11CABCu);
    ctx->pc = 0x11CAB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CABCu; }
    }
    if (ctx->pc != 0x11CABCu) { return; }
    ctx->pc = 0x11CABCu;
    // 0x11cabc: 0x8e110010
    ctx->pc = 0x11cabcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11cac0: 0x8e020014
    ctx->pc = 0x11cac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11cac4: 0x118ac0
    ctx->pc = 0x11cac4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 11));
    // 0x11cac8: 0x8e040040
    ctx->pc = 0x11cac8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11cacc: 0xc0438b0
    ctx->pc = 0x11CACCu;
    SET_GPR_U32(ctx, 31, 0x11CAD4u);
    ctx->pc = 0x11CAD0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CAD4u; }
    }
    if (ctx->pc != 0x11CAD4u) { return; }
    ctx->pc = 0x11CAD4u;
    // 0x11cad4: 0x220102d
    ctx->pc = 0x11cad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cad8: 0xdfbf0020
    ctx->pc = 0x11cad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cadc: 0xdfb10010
    ctx->pc = 0x11cadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cae0: 0xdfb00000
    ctx->pc = 0x11cae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cae4: 0x3e00008
    ctx->pc = 0x11CAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CAECu;
}
