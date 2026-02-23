#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphEntryLabelID
// Address: 0x1b14b0 - 0x1b14ec
void nlGraphEntryLabelID_0x1b14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphEntryLabelID");


    ctx->pc = 0x1b14b0u;

    // 0x1b14b0: 0x27bdffe0
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b14b4: 0x7fbf0010
    ctx->pc = 0x1b14b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b14b8: 0x7fb00000
    ctx->pc = 0x1b14b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b14bc: 0x8f848b08
    ctx->pc = 0x1b14bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937352)));
    // 0x1b14c0: 0x2405ffff
    ctx->pc = 0x1b14c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b14c4: 0xc06c65c
    ctx->pc = 0x1B14C4u;
    SET_GPR_U32(ctx, 31, 0x1B14CCu);
    ctx->pc = 0x1B14C8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1970u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetLABEL_0x1b1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14CCu; }
        else if (ctx->pc != 0x1B14CCu) { ctx->pc = 0x1B14CCu; }
    }
    if (ctx->pc != 0x1B14CCu) { return; }
    ctx->pc = 0x1B14CCu;
    // 0x1b14cc: 0x8f838b08
    ctx->pc = 0x1b14ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937352)));
    // 0x1b14d0: 0x72001628
    ctx->pc = 0x1b14d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b14d4: 0x24630001
    ctx->pc = 0x1b14d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b14d8: 0xaf838b08
    ctx->pc = 0x1b14d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U32(ctx, 3));
    // 0x1b14dc: 0x7bbf0010
    ctx->pc = 0x1b14dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14e0: 0x7bb00000
    ctx->pc = 0x1b14e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14e4: 0x3e00008
    ctx->pc = 0x1B14E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B14ECu;
}
