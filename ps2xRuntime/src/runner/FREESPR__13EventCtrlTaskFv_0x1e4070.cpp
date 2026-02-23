#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREESPR__13EventCtrlTaskFv
// Address: 0x1e4070 - 0x1e40b0
void FREESPR__13EventCtrlTaskFv_0x1e4070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREESPR__13EventCtrlTaskFv");


    ctx->pc = 0x1e4070u;

    // 0x1e4070: 0x27bdffe0
    ctx->pc = 0x1e4070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4074: 0x7fbf0010
    ctx->pc = 0x1e4074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4078: 0x7fb00000
    ctx->pc = 0x1e4078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e407c: 0x8c83000c
    ctx->pc = 0x1e407cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4080: 0x70808628
    ctx->pc = 0x1e4080u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4084: 0x3c020051
    ctx->pc = 0x1e4084u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4088: 0x8c650004
    ctx->pc = 0x1e4088u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e408c: 0xc086594
    ctx->pc = 0x1E408Cu;
    SET_GPR_U32(ctx, 31, 0x1E4094u);
    ctx->pc = 0x1E4090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219650u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBankSpr__13EntryDatClassFi_0x219650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4094u; }
        else if (ctx->pc != 0x1E4094u) { ctx->pc = 0x1E4094u; }
    }
    if (ctx->pc != 0x1E4094u) { return; }
    ctx->pc = 0x1E4094u;
    // 0x1e4094: 0x8e03000c
    ctx->pc = 0x1e4094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4098: 0x24630008
    ctx->pc = 0x1e4098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e409c: 0xae03000c
    ctx->pc = 0x1e409cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e40a0: 0x7bbf0010
    ctx->pc = 0x1e40a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e40a4: 0x7bb00000
    ctx->pc = 0x1e40a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e40a8: 0x3e00008
    ctx->pc = 0x1E40A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E40ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E40B0u;
}
