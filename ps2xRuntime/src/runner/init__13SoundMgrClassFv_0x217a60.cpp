#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__13SoundMgrClassFv
// Address: 0x217a60 - 0x217a94
void init__13SoundMgrClassFv_0x217a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__13SoundMgrClassFv");


    ctx->pc = 0x217a60u;

    // 0x217a60: 0x27bdffe0
    ctx->pc = 0x217a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217a64: 0x7fbf0010
    ctx->pc = 0x217a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x217a68: 0x7fb00000
    ctx->pc = 0x217a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217a6c: 0xc085f14
    ctx->pc = 0x217A6Cu;
    SET_GPR_U32(ctx, 31, 0x217A74u);
    ctx->pc = 0x217A70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        clearOnGame__13SoundMgrClassFv_0x217c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A74u; }
        else if (ctx->pc != 0x217A74u) { ctx->pc = 0x217A74u; }
    }
    if (ctx->pc != 0x217A74u) { return; }
    ctx->pc = 0x217A74u;
    // 0x217a74: 0xc085ea8
    ctx->pc = 0x217A74u;
    SET_GPR_U32(ctx, 31, 0x217A7Cu);
    ctx->pc = 0x217A78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x217AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setCfgVolume__13SoundMgrClassFv_0x217aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A7Cu; }
        else if (ctx->pc != 0x217A7Cu) { ctx->pc = 0x217A7Cu; }
    }
    if (ctx->pc != 0x217A7Cu) { return; }
    ctx->pc = 0x217A7Cu;
    // 0x217a7c: 0xc0861f0
    ctx->pc = 0x217A7Cu;
    SET_GPR_U32(ctx, 31, 0x217A84u);
    ctx->pc = 0x217A80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2187C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceReqInit__13SoundMgrClassFv_0x2187c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217A84u; }
        else if (ctx->pc != 0x217A84u) { ctx->pc = 0x217A84u; }
    }
    if (ctx->pc != 0x217A84u) { return; }
    ctx->pc = 0x217A84u;
    // 0x217a84: 0x7bbf0010
    ctx->pc = 0x217a84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a88: 0x7bb00000
    ctx->pc = 0x217a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a8c: 0x3e00008
    ctx->pc = 0x217A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217A94u;
}
