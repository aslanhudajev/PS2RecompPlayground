#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_CalcOfs
// Address: 0x184888 - 0x1848d0
void mpvcmc_CalcOfs_0x184888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_CalcOfs");


    ctx->pc = 0x184888u;

    // 0x184888: 0x52840
    ctx->pc = 0x184888u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x18488c: 0x84e9000e
    ctx->pc = 0x18488cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x184890: 0x24a50c68
    ctx->pc = 0x184890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3176));
    // 0x184894: 0x84e8000c
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x184898: 0x852021
    ctx->pc = 0x184898u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18489c: 0x80820000
    ctx->pc = 0x18489cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1848a0: 0x80850001
    ctx->pc = 0x1848a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1848a4: 0x21900
    ctx->pc = 0x1848a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1848a8: 0x210c0
    ctx->pc = 0x1848a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1848ac: 0x70691818
    ctx->pc = 0x1848acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1848b0: 0x481018
    ctx->pc = 0x1848b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1848b4: 0x52100
    ctx->pc = 0x1848b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1848b8: 0x528c0
    ctx->pc = 0x1848b8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1848bc: 0x641821
    ctx->pc = 0x1848bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1848c0: 0x451021
    ctx->pc = 0x1848c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1848c4: 0xacc30004
    ctx->pc = 0x1848c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1848c8: 0x3e00008
    ctx->pc = 0x1848C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848CCu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1848D0u;
}
