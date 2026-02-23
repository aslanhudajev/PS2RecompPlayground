#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYCLVTX__13EventCtrlTaskFv
// Address: 0x1e4530 - 0x1e4570
void ENTRYCLVTX__13EventCtrlTaskFv_0x1e4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYCLVTX__13EventCtrlTaskFv");


    ctx->pc = 0x1e4530u;

    // 0x1e4530: 0x27bdffe0
    ctx->pc = 0x1e4530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4534: 0x7fbf0010
    ctx->pc = 0x1e4534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4538: 0x7fb00000
    ctx->pc = 0x1e4538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e453c: 0x8c83000c
    ctx->pc = 0x1e453cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4540: 0x70808628
    ctx->pc = 0x1e4540u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4544: 0x3c020051
    ctx->pc = 0x1e4544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4548: 0x8c650004
    ctx->pc = 0x1e4548u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e454c: 0xc086690
    ctx->pc = 0x1E454Cu;
    SET_GPR_U32(ctx, 31, 0x1E4554u);
    ctx->pc = 0x1E4550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryClVtx__13EntryDatClassFi_0x219a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4554u; }
        else if (ctx->pc != 0x1E4554u) { ctx->pc = 0x1E4554u; }
    }
    if (ctx->pc != 0x1E4554u) { return; }
    ctx->pc = 0x1E4554u;
    // 0x1e4554: 0x8e03000c
    ctx->pc = 0x1e4554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4558: 0x24630008
    ctx->pc = 0x1e4558u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e455c: 0xae03000c
    ctx->pc = 0x1e455cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4560: 0x7bbf0010
    ctx->pc = 0x1e4560u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4564: 0x7bb00000
    ctx->pc = 0x1e4564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4568: 0x3e00008
    ctx->pc = 0x1E4568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E456Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4570u;
}
