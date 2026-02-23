#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEBANK__13EventCtrlTaskFv
// Address: 0x1e3f70 - 0x1e3fb0
void FREEBANK__13EventCtrlTaskFv_0x1e3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEBANK__13EventCtrlTaskFv");


    ctx->pc = 0x1e3f70u;

    // 0x1e3f70: 0x27bdffe0
    ctx->pc = 0x1e3f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3f74: 0x7fbf0010
    ctx->pc = 0x1e3f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3f78: 0x7fb00000
    ctx->pc = 0x1e3f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3f7c: 0x8c83000c
    ctx->pc = 0x1e3f7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3f80: 0x70808628
    ctx->pc = 0x1e3f80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3f84: 0x3c020051
    ctx->pc = 0x1e3f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3f88: 0x8c650004
    ctx->pc = 0x1e3f88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3f8c: 0xc086518
    ctx->pc = 0x1E3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F94u);
    ctx->pc = 0x1E3F90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219460u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBankObj__13EntryDatClassFi_0x219460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F94u; }
        else if (ctx->pc != 0x1E3F94u) { ctx->pc = 0x1E3F94u; }
    }
    if (ctx->pc != 0x1E3F94u) { return; }
    ctx->pc = 0x1E3F94u;
    // 0x1e3f94: 0x8e03000c
    ctx->pc = 0x1e3f94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3f98: 0x24630008
    ctx->pc = 0x1e3f98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3f9c: 0xae03000c
    ctx->pc = 0x1e3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3fa0: 0x7bbf0010
    ctx->pc = 0x1e3fa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3fa4: 0x7bb00000
    ctx->pc = 0x1e3fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3fa8: 0x3e00008
    ctx->pc = 0x1E3FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3FACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3FB0u;
}
