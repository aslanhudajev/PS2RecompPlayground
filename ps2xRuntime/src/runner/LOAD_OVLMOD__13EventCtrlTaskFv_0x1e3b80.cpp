#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LOAD_OVLMOD__13EventCtrlTaskFv
// Address: 0x1e3b80 - 0x1e3bc0
void LOAD_OVLMOD__13EventCtrlTaskFv_0x1e3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LOAD_OVLMOD__13EventCtrlTaskFv");


    ctx->pc = 0x1e3b80u;

    // 0x1e3b80: 0x27bdffe0
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3b84: 0x7fbf0010
    ctx->pc = 0x1e3b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3b88: 0x7fb00000
    ctx->pc = 0x1e3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3b8c: 0x8c83000c
    ctx->pc = 0x1e3b8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3b90: 0x70808628
    ctx->pc = 0x1e3b90u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3b94: 0x3c020051
    ctx->pc = 0x1e3b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3b98: 0x8c650004
    ctx->pc = 0x1e3b98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3b9c: 0xc0866f8
    ctx->pc = 0x1E3B9Cu;
    SET_GPR_U32(ctx, 31, 0x1E3BA4u);
    ctx->pc = 0x1E3BA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOvlMod__13EntryDatClassFi_0x219be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BA4u; }
        else if (ctx->pc != 0x1E3BA4u) { ctx->pc = 0x1E3BA4u; }
    }
    if (ctx->pc != 0x1E3BA4u) { return; }
    ctx->pc = 0x1E3BA4u;
    // 0x1e3ba4: 0x8e03000c
    ctx->pc = 0x1e3ba4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3ba8: 0x24630008
    ctx->pc = 0x1e3ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3bac: 0xae03000c
    ctx->pc = 0x1e3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3bb0: 0x7bbf0010
    ctx->pc = 0x1e3bb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3bb4: 0x7bb00000
    ctx->pc = 0x1e3bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3bb8: 0x3e00008
    ctx->pc = 0x1E3BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3BC0u;
}
