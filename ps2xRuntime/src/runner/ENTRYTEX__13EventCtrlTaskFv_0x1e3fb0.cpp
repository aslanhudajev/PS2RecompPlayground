#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYTEX__13EventCtrlTaskFv
// Address: 0x1e3fb0 - 0x1e3ff0
void ENTRYTEX__13EventCtrlTaskFv_0x1e3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYTEX__13EventCtrlTaskFv");


    ctx->pc = 0x1e3fb0u;

    // 0x1e3fb0: 0x27bdffe0
    ctx->pc = 0x1e3fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3fb4: 0x7fbf0010
    ctx->pc = 0x1e3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3fb8: 0x7fb00000
    ctx->pc = 0x1e3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3fbc: 0x8c83000c
    ctx->pc = 0x1e3fbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3fc0: 0x70808628
    ctx->pc = 0x1e3fc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3fc4: 0x3c020051
    ctx->pc = 0x1e3fc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3fc8: 0x8c650004
    ctx->pc = 0x1e3fc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3fcc: 0xc086538
    ctx->pc = 0x1E3FCCu;
    SET_GPR_U32(ctx, 31, 0x1E3FD4u);
    ctx->pc = 0x1E3FD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2194E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankTex__13EntryDatClassFi_0x2194e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3FD4u; }
        else if (ctx->pc != 0x1E3FD4u) { ctx->pc = 0x1E3FD4u; }
    }
    if (ctx->pc != 0x1E3FD4u) { return; }
    ctx->pc = 0x1E3FD4u;
    // 0x1e3fd4: 0x8e03000c
    ctx->pc = 0x1e3fd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3fd8: 0x24630008
    ctx->pc = 0x1e3fd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3fdc: 0xae03000c
    ctx->pc = 0x1e3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3fe0: 0x7bbf0010
    ctx->pc = 0x1e3fe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3fe4: 0x7bb00000
    ctx->pc = 0x1e3fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3fe8: 0x3e00008
    ctx->pc = 0x1E3FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3FECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3FF0u;
}
