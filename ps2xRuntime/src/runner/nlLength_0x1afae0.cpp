#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLength
// Address: 0x1afae0 - 0x1afb0c
void nlLength_0x1afae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLength");


    ctx->pc = 0x1afae0u;

    // 0x1afae0: 0x70a03628
    ctx->pc = 0x1afae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1afae4: 0x27bdffe0
    ctx->pc = 0x1afae4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1afae8: 0x70802e28
    ctx->pc = 0x1afae8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1afaec: 0x7fbf0000
    ctx->pc = 0x1afaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1afaf0: 0xc06be33
    ctx->pc = 0x1AFAF0u;
    SET_GPR_U32(ctx, 31, 0x1AFAF8u);
    ctx->pc = 0x1AFAF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1AF8CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF8CC_0x1af8cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAF8u; }
        else if (ctx->pc != 0x1AFAF8u) { ctx->pc = 0x1AFAF8u; }
    }
    if (ctx->pc != 0x1AFAF8u) { return; }
    ctx->pc = 0x1AFAF8u;
    // 0x1afaf8: 0xc06be70
    ctx->pc = 0x1AFAF8u;
    SET_GPR_U32(ctx, 31, 0x1AFB00u);
    ctx->pc = 0x1AFAFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1AF9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C0_0x1af9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB00u; }
        else if (ctx->pc != 0x1AFB00u) { ctx->pc = 0x1AFB00u; }
    }
    if (ctx->pc != 0x1AFB00u) { return; }
    ctx->pc = 0x1AFB00u;
    // 0x1afb00: 0x7bbf0000
    ctx->pc = 0x1afb00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afb04: 0x3e00008
    ctx->pc = 0x1AFB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFB0Cu;
}
