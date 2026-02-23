#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getFileName__12FileMgrClassFPCcPCc
// Address: 0x1e96b0 - 0x1e96f4
void getFileName__12FileMgrClassFPCcPCc_0x1e96b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getFileName__12FileMgrClassFPCcPCc");


    ctx->pc = 0x1e96b0u;

    // 0x1e96b0: 0x27bdffd0
    ctx->pc = 0x1e96b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e96b4: 0x7fbf0020
    ctx->pc = 0x1e96b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e96b8: 0x7fb10010
    ctx->pc = 0x1e96b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e96bc: 0x7fb00000
    ctx->pc = 0x1e96bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e96c0: 0x70808e28
    ctx->pc = 0x1e96c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e96c4: 0x70c08628
    ctx->pc = 0x1e96c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e96c8: 0xc05150e
    ctx->pc = 0x1E96C8u;
    SET_GPR_U32(ctx, 31, 0x1E96D0u);
    ctx->pc = 0x1E96CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96D0u; }
        else if (ctx->pc != 0x1E96D0u) { ctx->pc = 0x1E96D0u; }
    }
    if (ctx->pc != 0x1E96D0u) { return; }
    ctx->pc = 0x1E96D0u;
    // 0x1e96d0: 0x72002e28
    ctx->pc = 0x1e96d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e96d4: 0xc051470
    ctx->pc = 0x1E96D4u;
    SET_GPR_U32(ctx, 31, 0x1E96DCu);
    ctx->pc = 0x1E96D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96DCu; }
        else if (ctx->pc != 0x1E96DCu) { ctx->pc = 0x1E96DCu; }
    }
    if (ctx->pc != 0x1E96DCu) { return; }
    ctx->pc = 0x1E96DCu;
    // 0x1e96dc: 0x2622000c
    ctx->pc = 0x1e96dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e96e0: 0x7bbf0020
    ctx->pc = 0x1e96e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e96e4: 0x7bb10010
    ctx->pc = 0x1e96e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e96e8: 0x7bb00000
    ctx->pc = 0x1e96e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e96ec: 0x3e00008
    ctx->pc = 0x1E96ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E96F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E96F4u;
}
