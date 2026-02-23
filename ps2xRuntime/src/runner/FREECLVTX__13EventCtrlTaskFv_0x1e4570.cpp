#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREECLVTX__13EventCtrlTaskFv
// Address: 0x1e4570 - 0x1e45b0
void FREECLVTX__13EventCtrlTaskFv_0x1e4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREECLVTX__13EventCtrlTaskFv");


    ctx->pc = 0x1e4570u;

    // 0x1e4570: 0x27bdffe0
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4574: 0x7fbf0010
    ctx->pc = 0x1e4574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4578: 0x7fb00000
    ctx->pc = 0x1e4578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e457c: 0x8c83000c
    ctx->pc = 0x1e457cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4580: 0x70808628
    ctx->pc = 0x1e4580u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4584: 0x3c020051
    ctx->pc = 0x1e4584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4588: 0x8c650004
    ctx->pc = 0x1e4588u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e458c: 0xc0866a0
    ctx->pc = 0x1E458Cu;
    SET_GPR_U32(ctx, 31, 0x1E4594u);
    ctx->pc = 0x1E4590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeClVtx__13EntryDatClassFi_0x219a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4594u; }
        else if (ctx->pc != 0x1E4594u) { ctx->pc = 0x1E4594u; }
    }
    if (ctx->pc != 0x1E4594u) { return; }
    ctx->pc = 0x1E4594u;
    // 0x1e4594: 0x8e03000c
    ctx->pc = 0x1e4594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4598: 0x24630008
    ctx->pc = 0x1e4598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e459c: 0xae03000c
    ctx->pc = 0x1e459cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e45a0: 0x7bbf0010
    ctx->pc = 0x1e45a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e45a4: 0x7bb00000
    ctx->pc = 0x1e45a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e45a8: 0x3e00008
    ctx->pc = 0x1E45A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E45ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E45B0u;
}
