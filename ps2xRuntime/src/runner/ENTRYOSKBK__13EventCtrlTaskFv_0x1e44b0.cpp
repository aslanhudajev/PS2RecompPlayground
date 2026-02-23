#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYOSKBK__13EventCtrlTaskFv
// Address: 0x1e44b0 - 0x1e44f0
void ENTRYOSKBK__13EventCtrlTaskFv_0x1e44b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYOSKBK__13EventCtrlTaskFv");


    ctx->pc = 0x1e44b0u;

    // 0x1e44b0: 0x27bdffe0
    ctx->pc = 0x1e44b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e44b4: 0x7fbf0010
    ctx->pc = 0x1e44b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e44b8: 0x7fb00000
    ctx->pc = 0x1e44b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e44bc: 0x8c83000c
    ctx->pc = 0x1e44bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e44c0: 0x70808628
    ctx->pc = 0x1e44c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e44c4: 0x3c020051
    ctx->pc = 0x1e44c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e44c8: 0x8c650004
    ctx->pc = 0x1e44c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e44cc: 0xc086630
    ctx->pc = 0x1E44CCu;
    SET_GPR_U32(ctx, 31, 0x1E44D4u);
    ctx->pc = 0x1E44D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2198C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank__13EntryDatClassFi_0x2198c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E44D4u; }
        else if (ctx->pc != 0x1E44D4u) { ctx->pc = 0x1E44D4u; }
    }
    if (ctx->pc != 0x1E44D4u) { return; }
    ctx->pc = 0x1E44D4u;
    // 0x1e44d4: 0x8e03000c
    ctx->pc = 0x1e44d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e44d8: 0x24630008
    ctx->pc = 0x1e44d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e44dc: 0xae03000c
    ctx->pc = 0x1e44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e44e0: 0x7bbf0010
    ctx->pc = 0x1e44e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e44e4: 0x7bb00000
    ctx->pc = 0x1e44e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e44e8: 0x3e00008
    ctx->pc = 0x1E44E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E44ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E44F0u;
}
