#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvumc_CalcOfs
// Address: 0x189be8 - 0x189c30
void mpvumc_CalcOfs_0x189be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvumc_CalcOfs");


    ctx->pc = 0x189be8u;

    // 0x189be8: 0x52840
    ctx->pc = 0x189be8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x189bec: 0x84e9000e
    ctx->pc = 0x189becu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x189bf0: 0x24a50c68
    ctx->pc = 0x189bf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3176));
    // 0x189bf4: 0x84e8000c
    ctx->pc = 0x189bf4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x189bf8: 0x852021
    ctx->pc = 0x189bf8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189bfc: 0x80820000
    ctx->pc = 0x189bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189c00: 0x80850001
    ctx->pc = 0x189c00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x189c04: 0x21900
    ctx->pc = 0x189c04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x189c08: 0x210c0
    ctx->pc = 0x189c08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x189c0c: 0x70691818
    ctx->pc = 0x189c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x189c10: 0x481018
    ctx->pc = 0x189c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x189c14: 0x52100
    ctx->pc = 0x189c14u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x189c18: 0x528c0
    ctx->pc = 0x189c18u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x189c1c: 0x641821
    ctx->pc = 0x189c1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189c20: 0x451021
    ctx->pc = 0x189c20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189c24: 0xacc30004
    ctx->pc = 0x189c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x189c28: 0x3e00008
    ctx->pc = 0x189C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189C2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189C30u;
}
