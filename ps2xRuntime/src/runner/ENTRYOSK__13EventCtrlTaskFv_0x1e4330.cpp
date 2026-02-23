#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYOSK__13EventCtrlTaskFv
// Address: 0x1e4330 - 0x1e4370
void ENTRYOSK__13EventCtrlTaskFv_0x1e4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYOSK__13EventCtrlTaskFv");


    ctx->pc = 0x1e4330u;

    // 0x1e4330: 0x27bdffe0
    ctx->pc = 0x1e4330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4334: 0x7fbf0010
    ctx->pc = 0x1e4334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4338: 0x7fb00000
    ctx->pc = 0x1e4338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e433c: 0x8c83000c
    ctx->pc = 0x1e433cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4340: 0x70808628
    ctx->pc = 0x1e4340u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4344: 0x3c020051
    ctx->pc = 0x1e4344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4348: 0x8c650004
    ctx->pc = 0x1e4348u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e434c: 0xc0865f0
    ctx->pc = 0x1E434Cu;
    SET_GPR_U32(ctx, 31, 0x1E4354u);
    ctx->pc = 0x1E4350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2197C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOneSkin__13EntryDatClassFi_0x2197c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4354u; }
        else if (ctx->pc != 0x1E4354u) { ctx->pc = 0x1E4354u; }
    }
    if (ctx->pc != 0x1E4354u) { return; }
    ctx->pc = 0x1E4354u;
    // 0x1e4354: 0x8e03000c
    ctx->pc = 0x1e4354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4358: 0x24630008
    ctx->pc = 0x1e4358u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e435c: 0xae03000c
    ctx->pc = 0x1e435cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4360: 0x7bbf0010
    ctx->pc = 0x1e4360u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4364: 0x7bb00000
    ctx->pc = 0x1e4364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4368: 0x3e00008
    ctx->pc = 0x1E4368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E436Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4370u;
}
