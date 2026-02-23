#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_GetInSjReadTot
// Address: 0x19cf58 - 0x19cf90
void sfsee_GetInSjReadTot_0x19cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_GetInSjReadTot");


    ctx->pc = 0x19cf58u;

    // 0x19cf58: 0x24852978
    ctx->pc = 0x19cf58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 10616));
    // 0x19cf5c: 0x24070388
    ctx->pc = 0x19cf5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 904));
    // 0x19cf60: 0x8ca206b0
    ctx->pc = 0x19cf60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 1712)));
    // 0x19cf64: 0x240806e0
    ctx->pc = 0x19cf64u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1760));
    // 0x19cf68: 0x2406ffff
    ctx->pc = 0x19cf68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19cf6c: 0x471818
    ctx->pc = 0x19cf6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x19cf70: 0x641021
    ctx->pc = 0x19cf70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19cf74: 0x8c431098
    ctx->pc = 0x19cf74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4248)));
    // 0x19cf78: 0x681018
    ctx->pc = 0x19cf78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19cf7c: 0x451821
    ctx->pc = 0x19cf7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19cf80: 0x8c6206bc
    ctx->pc = 0x19cf80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1724)));
    // 0x19cf84: 0xc2202a
    ctx->pc = 0x19cf84u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x19cf88: 0x3e00008
    ctx->pc = 0x19CF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF8Cu;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CF90u;
}
