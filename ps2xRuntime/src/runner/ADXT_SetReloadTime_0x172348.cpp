#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetReloadTime
// Address: 0x172348 - 0x1723a0
void ADXT_SetReloadTime_0x172348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetReloadTime");


    ctx->pc = 0x172348u;

    // 0x172348: 0x44860000
    ctx->pc = 0x172348u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x17234c: 0x46800020
    ctx->pc = 0x17234cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x172350: 0x24020012
    ctx->pc = 0x172350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x172354: 0xa22818
    ctx->pc = 0x172354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x172358: 0x2407ffff
    ctx->pc = 0x172358u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17235c: 0x8488003c
    ctx->pc = 0x17235cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x172360: 0x46006302
    ctx->pc = 0x172360u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x172364: 0x46006024
    ctx->pc = 0x172364u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x172368: 0x44030000
    ctx->pc = 0x172368u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x17236c: 0xe3302a
    ctx->pc = 0x17236cu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x172370: 0x2462001f
    ctx->pc = 0x172370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 31));
    // 0x172374: 0x66100b
    ctx->pc = 0x172374u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x172378: 0x21143
    ctx->pc = 0x172378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x17237c: 0x451018
    ctx->pc = 0x17237cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x172380: 0xe2382a
    ctx->pc = 0x172380u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x172384: 0x244307ff
    ctx->pc = 0x172384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x172388: 0x47180b
    ctx->pc = 0x172388u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x17238c: 0x31ac3
    ctx->pc = 0x17238cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x172390: 0x68102a
    ctx->pc = 0x172390u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
    // 0x172394: 0x62400b
    ctx->pc = 0x172394u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 3));
    // 0x172398: 0x3e00008
    ctx->pc = 0x172398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17239Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1723A0u;
}
