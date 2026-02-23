#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CHGADXPT__13EventCtrlTaskFv
// Address: 0x1e3c30 - 0x1e3c70
void CHGADXPT__13EventCtrlTaskFv_0x1e3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CHGADXPT__13EventCtrlTaskFv");


    ctx->pc = 0x1e3c30u;

    // 0x1e3c30: 0x27bdffe0
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3c34: 0x7fbf0010
    ctx->pc = 0x1e3c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3c38: 0x7fb00000
    ctx->pc = 0x1e3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3c3c: 0x8c83000c
    ctx->pc = 0x1e3c3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3c40: 0x70808628
    ctx->pc = 0x1e3c40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3c44: 0x3c020051
    ctx->pc = 0x1e3c44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3c48: 0x8c650004
    ctx->pc = 0x1e3c48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3c4c: 0xc0866f0
    ctx->pc = 0x1E3C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3C54u);
    ctx->pc = 0x1E3C50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219BC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgAdxStgPartition__13EntryDatClassFi_0x219bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C54u; }
        else if (ctx->pc != 0x1E3C54u) { ctx->pc = 0x1E3C54u; }
    }
    if (ctx->pc != 0x1E3C54u) { return; }
    ctx->pc = 0x1E3C54u;
    // 0x1e3c54: 0x8e03000c
    ctx->pc = 0x1e3c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3c58: 0x24630008
    ctx->pc = 0x1e3c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3c5c: 0xae03000c
    ctx->pc = 0x1e3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3c60: 0x7bbf0010
    ctx->pc = 0x1e3c60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3c64: 0x7bb00000
    ctx->pc = 0x1e3c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3c68: 0x3e00008
    ctx->pc = 0x1E3C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3C6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3C70u;
}
