#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FLUSHDATA__13EventCtrlTaskFv
// Address: 0x1e4920 - 0x1e4958
void FLUSHDATA__13EventCtrlTaskFv_0x1e4920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FLUSHDATA__13EventCtrlTaskFv");


    ctx->pc = 0x1e4920u;

    // 0x1e4920: 0x27bdffe0
    ctx->pc = 0x1e4920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4924: 0x7fbf0010
    ctx->pc = 0x1e4924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4928: 0x7fb00000
    ctx->pc = 0x1e4928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e492c: 0x70808628
    ctx->pc = 0x1e492cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4930: 0x3c020051
    ctx->pc = 0x1e4930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4934: 0xc08637c
    ctx->pc = 0x1E4934u;
    SET_GPR_U32(ctx, 31, 0x1E493Cu);
    ctx->pc = 0x1E4938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flush__13EntryDatClassFv_0x218df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E493Cu; }
        else if (ctx->pc != 0x1E493Cu) { ctx->pc = 0x1E493Cu; }
    }
    if (ctx->pc != 0x1E493Cu) { return; }
    ctx->pc = 0x1E493Cu;
    // 0x1e493c: 0x8e03000c
    ctx->pc = 0x1e493cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4940: 0x24630004
    ctx->pc = 0x1e4940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e4944: 0xae03000c
    ctx->pc = 0x1e4944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4948: 0x7bbf0010
    ctx->pc = 0x1e4948u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e494c: 0x7bb00000
    ctx->pc = 0x1e494cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4950: 0x3e00008
    ctx->pc = 0x1E4950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4954u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4958u;
}
