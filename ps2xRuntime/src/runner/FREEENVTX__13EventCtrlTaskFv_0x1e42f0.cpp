#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEENVTX__13EventCtrlTaskFv
// Address: 0x1e42f0 - 0x1e4330
void FREEENVTX__13EventCtrlTaskFv_0x1e42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEENVTX__13EventCtrlTaskFv");


    ctx->pc = 0x1e42f0u;

    // 0x1e42f0: 0x27bdffe0
    ctx->pc = 0x1e42f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e42f4: 0x7fbf0010
    ctx->pc = 0x1e42f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e42f8: 0x7fb00000
    ctx->pc = 0x1e42f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e42fc: 0x8c83000c
    ctx->pc = 0x1e42fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4300: 0x70808628
    ctx->pc = 0x1e4300u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4304: 0x3c020051
    ctx->pc = 0x1e4304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4308: 0x8c650004
    ctx->pc = 0x1e4308u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e430c: 0xc0865e0
    ctx->pc = 0x1E430Cu;
    SET_GPR_U32(ctx, 31, 0x1E4314u);
    ctx->pc = 0x1E4310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219780u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeEnVtx__13EntryDatClassFi_0x219780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4314u; }
        else if (ctx->pc != 0x1E4314u) { ctx->pc = 0x1E4314u; }
    }
    if (ctx->pc != 0x1E4314u) { return; }
    ctx->pc = 0x1E4314u;
    // 0x1e4314: 0x8e03000c
    ctx->pc = 0x1e4314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4318: 0x24630008
    ctx->pc = 0x1e4318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e431c: 0xae03000c
    ctx->pc = 0x1e431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4320: 0x7bbf0010
    ctx->pc = 0x1e4320u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4324: 0x7bb00000
    ctx->pc = 0x1e4324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4328: 0x3e00008
    ctx->pc = 0x1E4328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E432Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4330u;
}
