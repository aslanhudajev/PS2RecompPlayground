#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcFrm__7CFcurveFfP11tagNLpoint3
// Address: 0x1e6f50 - 0x1e6f8c
void calcFrm__7CFcurveFfP11tagNLpoint3_0x1e6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcFrm__7CFcurveFfP11tagNLpoint3");


    ctx->pc = 0x1e6f50u;

    // 0x1e6f50: 0x27bdffd0
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6f54: 0x7fbf0020
    ctx->pc = 0x1e6f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e6f58: 0x7fb10010
    ctx->pc = 0x1e6f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6f5c: 0x7fb00000
    ctx->pc = 0x1e6f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6f60: 0x70a08628
    ctx->pc = 0x1e6f60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6f64: 0xc079bfc
    ctx->pc = 0x1E6F64u;
    SET_GPR_U32(ctx, 31, 0x1E6F6Cu);
    ctx->pc = 0x1E6F68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFrm__7CFcurveFf_0x1e6ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F6Cu; }
        else if (ctx->pc != 0x1E6F6Cu) { ctx->pc = 0x1E6F6Cu; }
    }
    if (ctx->pc != 0x1E6F6Cu) { return; }
    ctx->pc = 0x1E6F6Cu;
    // 0x1e6f6c: 0x72202628
    ctx->pc = 0x1e6f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e6f70: 0xc079cc8
    ctx->pc = 0x1E6F70u;
    SET_GPR_U32(ctx, 31, 0x1E6F78u);
    ctx->pc = 0x1E6F74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7320u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcXYZ__7CFcurveFP11tagNLpoint3_0x1e7320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F78u; }
        else if (ctx->pc != 0x1E6F78u) { ctx->pc = 0x1E6F78u; }
    }
    if (ctx->pc != 0x1E6F78u) { return; }
    ctx->pc = 0x1E6F78u;
    // 0x1e6f78: 0x7bbf0020
    ctx->pc = 0x1e6f78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6f7c: 0x7bb10010
    ctx->pc = 0x1e6f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6f80: 0x7bb00000
    ctx->pc = 0x1e6f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6f84: 0x3e00008
    ctx->pc = 0x1E6F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6F8Cu;
}
