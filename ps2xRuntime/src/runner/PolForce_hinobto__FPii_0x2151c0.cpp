#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PolForce_hinobto__FPii
// Address: 0x2151c0 - 0x2151f8
void PolForce_hinobto__FPii_0x2151c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PolForce_hinobto__FPii");


    ctx->pc = 0x2151c0u;

    // 0x2151c0: 0x27bdffe0
    ctx->pc = 0x2151c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2151c4: 0x7fbf0000
    ctx->pc = 0x2151c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2151c8: 0xafa5001c
    ctx->pc = 0x2151c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x2151cc: 0x3c020021
    ctx->pc = 0x2151ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x2151d0: 0x24455180
    ctx->pc = 0x2151d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 20864));
    // 0x2151d4: 0x3c020021
    ctx->pc = 0x2151d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x2151d8: 0x27a7001c
    ctx->pc = 0x2151d8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 28));
    // 0x2151dc: 0xc06ab38
    ctx->pc = 0x2151DCu;
    SET_GPR_U32(ctx, 31, 0x2151E4u);
    ctx->pc = 0x2151E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 20880));
    ctx->pc = 0x1AACE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutModifyParam_0x1aace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151E4u; }
        else if (ctx->pc != 0x2151E4u) { ctx->pc = 0x2151E4u; }
    }
    if (ctx->pc != 0x2151E4u) { return; }
    ctx->pc = 0x2151E4u;
    // 0x2151e4: 0xc0552d8
    ctx->pc = 0x2151E4u;
    SET_GPR_U32(ctx, 31, 0x2151ECu);
    ctx->pc = 0x2151E8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151ECu; }
        else if (ctx->pc != 0x2151ECu) { ctx->pc = 0x2151ECu; }
    }
    if (ctx->pc != 0x2151ECu) { return; }
    ctx->pc = 0x2151ECu;
    // 0x2151ec: 0x7bbf0000
    ctx->pc = 0x2151ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2151f0: 0x3e00008
    ctx->pc = 0x2151F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2151F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2151F8u;
}
