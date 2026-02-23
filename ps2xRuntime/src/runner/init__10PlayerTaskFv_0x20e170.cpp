#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__10PlayerTaskFv
// Address: 0x20e170 - 0x20e1a8
void init__10PlayerTaskFv_0x20e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__10PlayerTaskFv");


    ctx->pc = 0x20e170u;

    // 0x20e170: 0x27bdfff0
    ctx->pc = 0x20e170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e174: 0x7fbf0000
    ctx->pc = 0x20e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20e178: 0x8c831cbc
    ctx->pc = 0x20e178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e17c: 0x3c020027
    ctx->pc = 0x20e17cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20e180: 0x24423090
    ctx->pc = 0x20e180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12432));
    // 0x20e184: 0x8c650004
    ctx->pc = 0x20e184u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20e188: 0x518c0
    ctx->pc = 0x20e188u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x20e18c: 0x651823
    ctx->pc = 0x20e18cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20e190: 0x31880
    ctx->pc = 0x20e190u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20e194: 0xc071b74
    ctx->pc = 0x20E194u;
    SET_GPR_U32(ctx, 31, 0x20E19Cu);
    ctx->pc = 0x20E198u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1C6DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ptmf_scall_0x1c6dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E19Cu; }
        else if (ctx->pc != 0x20E19Cu) { ctx->pc = 0x20E19Cu; }
    }
    if (ctx->pc != 0x20E19Cu) { return; }
    ctx->pc = 0x20E19Cu;
    // 0x20e19c: 0x7bbf0000
    ctx->pc = 0x20e19cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e1a0: 0x3e00008
    ctx->pc = 0x20E1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E1A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20E1A8u;
}
