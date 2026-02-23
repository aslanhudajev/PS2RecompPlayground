#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: closeAll__12FileMgrClassFii
// Address: 0x1e99b0 - 0x1e99ec
void closeAll__12FileMgrClassFii_0x1e99b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("closeAll__12FileMgrClassFii");


    ctx->pc = 0x1e99b0u;

    // 0x1e99b0: 0x27bdffd0
    ctx->pc = 0x1e99b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e99b4: 0x7fbf0020
    ctx->pc = 0x1e99b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e99b8: 0x7fb10010
    ctx->pc = 0x1e99b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e99bc: 0x7fb00000
    ctx->pc = 0x1e99bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e99c0: 0x70c08628
    ctx->pc = 0x1e99c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e99c4: 0xc07a5e8
    ctx->pc = 0x1E99C4u;
    SET_GPR_U32(ctx, 31, 0x1E99CCu);
    ctx->pc = 0x1E99C8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E97A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeStagePartition__12FileMgrClassFi_0x1e97a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99CCu; }
        else if (ctx->pc != 0x1E99CCu) { ctx->pc = 0x1E99CCu; }
    }
    if (ctx->pc != 0x1E99CCu) { return; }
    ctx->pc = 0x1E99CCu;
    // 0x1e99cc: 0x72202628
    ctx->pc = 0x1e99ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e99d0: 0xc07a63c
    ctx->pc = 0x1E99D0u;
    SET_GPR_U32(ctx, 31, 0x1E99D8u);
    ctx->pc = 0x1E99D4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E98F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeVoicePartition__12FileMgrClassFi_0x1e98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E99D8u; }
        else if (ctx->pc != 0x1E99D8u) { ctx->pc = 0x1E99D8u; }
    }
    if (ctx->pc != 0x1E99D8u) { return; }
    ctx->pc = 0x1E99D8u;
    // 0x1e99d8: 0x7bbf0020
    ctx->pc = 0x1e99d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e99dc: 0x7bb10010
    ctx->pc = 0x1e99dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e99e0: 0x7bb00000
    ctx->pc = 0x1e99e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e99e4: 0x3e00008
    ctx->pc = 0x1E99E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E99E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E99ECu;
}
