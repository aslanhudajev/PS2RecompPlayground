#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREECOLLI__13EventCtrlTaskFv
// Address: 0x1e47f0 - 0x1e4830
void FREECOLLI__13EventCtrlTaskFv_0x1e47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREECOLLI__13EventCtrlTaskFv");


    ctx->pc = 0x1e47f0u;

    // 0x1e47f0: 0x27bdffe0
    ctx->pc = 0x1e47f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e47f4: 0x7fbf0010
    ctx->pc = 0x1e47f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e47f8: 0x7fb00000
    ctx->pc = 0x1e47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e47fc: 0x8c83000c
    ctx->pc = 0x1e47fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4800: 0x70808628
    ctx->pc = 0x1e4800u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4804: 0x3c020051
    ctx->pc = 0x1e4804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4808: 0x8c650004
    ctx->pc = 0x1e4808u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e480c: 0xc0866c0
    ctx->pc = 0x1E480Cu;
    SET_GPR_U32(ctx, 31, 0x1E4814u);
    ctx->pc = 0x1E4810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeColli__13EntryDatClassFi_0x219b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4814u; }
        else if (ctx->pc != 0x1E4814u) { ctx->pc = 0x1E4814u; }
    }
    if (ctx->pc != 0x1E4814u) { return; }
    ctx->pc = 0x1E4814u;
    // 0x1e4814: 0x8e03000c
    ctx->pc = 0x1e4814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4818: 0x24630008
    ctx->pc = 0x1e4818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e481c: 0xae03000c
    ctx->pc = 0x1e481cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4820: 0x7bbf0010
    ctx->pc = 0x1e4820u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4824: 0x7bb00000
    ctx->pc = 0x1e4824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4828: 0x3e00008
    ctx->pc = 0x1E4828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E482Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4830u;
}
