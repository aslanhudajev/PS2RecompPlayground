#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CCTB__13EventCtrlTaskFv
// Address: 0x1e31f0 - 0x1e3224
void CCTB__13EventCtrlTaskFv_0x1e31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CCTB__13EventCtrlTaskFv");


    ctx->pc = 0x1e31f0u;

    // 0x1e31f0: 0x27bdffe0
    ctx->pc = 0x1e31f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e31f4: 0x7fbf0010
    ctx->pc = 0x1e31f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e31f8: 0x7fb00000
    ctx->pc = 0x1e31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e31fc: 0x70808628
    ctx->pc = 0x1e31fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3200: 0x8f848c48
    ctx->pc = 0x1e3200u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3204: 0x8e05000c
    ctx->pc = 0x1e3204u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3208: 0xc072628
    ctx->pc = 0x1E3208u;
    SET_GPR_U32(ctx, 31, 0x1E3210u);
    ctx->pc = 0x1E320Cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937832)));
    ctx->pc = 0x1C98A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__10CameraTaskFPUis_0x1c98a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3210u; }
        else if (ctx->pc != 0x1E3210u) { ctx->pc = 0x1E3210u; }
    }
    if (ctx->pc != 0x1E3210u) { return; }
    ctx->pc = 0x1E3210u;
    // 0x1e3210: 0xae02000c
    ctx->pc = 0x1e3210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e3214: 0x7bbf0010
    ctx->pc = 0x1e3214u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3218: 0x7bb00000
    ctx->pc = 0x1e3218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e321c: 0x3e00008
    ctx->pc = 0x1E321Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3220u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3224u;
}
