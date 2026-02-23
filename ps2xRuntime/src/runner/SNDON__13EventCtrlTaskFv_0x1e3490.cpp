#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SNDON__13EventCtrlTaskFv
// Address: 0x1e3490 - 0x1e34dc
void SNDON__13EventCtrlTaskFv_0x1e3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SNDON__13EventCtrlTaskFv");


    ctx->pc = 0x1e3490u;

    // 0x1e3490: 0x27bdffe0
    ctx->pc = 0x1e3490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3494: 0x7fbf0010
    ctx->pc = 0x1e3494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3498: 0x7fb00000
    ctx->pc = 0x1e3498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e349c: 0x8c83000c
    ctx->pc = 0x1e349cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e34a0: 0x70808628
    ctx->pc = 0x1e34a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e34a4: 0x3c020051
    ctx->pc = 0x1e34a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e34a8: 0x8c650004
    ctx->pc = 0x1e34a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e34ac: 0x8c660008
    ctx->pc = 0x1e34acu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e34b0: 0x8c67000c
    ctx->pc = 0x1e34b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e34b4: 0x8c680010
    ctx->pc = 0x1e34b4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e34b8: 0xc086018
    ctx->pc = 0x1E34B8u;
    SET_GPR_U32(ctx, 31, 0x1E34C0u);
    ctx->pc = 0x1E34BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E34C0u; }
        else if (ctx->pc != 0x1E34C0u) { ctx->pc = 0x1E34C0u; }
    }
    if (ctx->pc != 0x1E34C0u) { return; }
    ctx->pc = 0x1E34C0u;
    // 0x1e34c0: 0x8e03000c
    ctx->pc = 0x1e34c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e34c4: 0x24630014
    ctx->pc = 0x1e34c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e34c8: 0xae03000c
    ctx->pc = 0x1e34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e34cc: 0x7bbf0010
    ctx->pc = 0x1e34ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e34d0: 0x7bb00000
    ctx->pc = 0x1e34d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e34d4: 0x3e00008
    ctx->pc = 0x1E34D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E34D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E34DCu;
}
