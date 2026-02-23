#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYBANK__13EventCtrlTaskFv
// Address: 0x1e3f30 - 0x1e3f70
void ENTRYBANK__13EventCtrlTaskFv_0x1e3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYBANK__13EventCtrlTaskFv");


    ctx->pc = 0x1e3f30u;

    // 0x1e3f30: 0x27bdffe0
    ctx->pc = 0x1e3f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3f34: 0x7fbf0010
    ctx->pc = 0x1e3f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3f38: 0x7fb00000
    ctx->pc = 0x1e3f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3f3c: 0x8c83000c
    ctx->pc = 0x1e3f3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3f40: 0x70808628
    ctx->pc = 0x1e3f40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3f44: 0x3c020051
    ctx->pc = 0x1e3f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3f48: 0x8c650004
    ctx->pc = 0x1e3f48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3f4c: 0xc0864f8
    ctx->pc = 0x1E3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3F54u);
    ctx->pc = 0x1E3F50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2193E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj__13EntryDatClassFi_0x2193e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F54u; }
        else if (ctx->pc != 0x1E3F54u) { ctx->pc = 0x1E3F54u; }
    }
    if (ctx->pc != 0x1E3F54u) { return; }
    ctx->pc = 0x1E3F54u;
    // 0x1e3f54: 0x8e03000c
    ctx->pc = 0x1e3f54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3f58: 0x24630008
    ctx->pc = 0x1e3f58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3f5c: 0xae03000c
    ctx->pc = 0x1e3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3f60: 0x7bbf0010
    ctx->pc = 0x1e3f60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3f64: 0x7bb00000
    ctx->pc = 0x1e3f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3f68: 0x3e00008
    ctx->pc = 0x1E3F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3F70u;
}
