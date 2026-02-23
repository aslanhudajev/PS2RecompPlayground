#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init0__11CFcvTRSBaseFPfPf
// Address: 0x1e76c0 - 0x1e76fc
void init0__11CFcvTRSBaseFPfPf_0x1e76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init0__11CFcvTRSBaseFPfPf");


    ctx->pc = 0x1e76c0u;

    // 0x1e76c0: 0x27bdffd0
    ctx->pc = 0x1e76c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e76c4: 0x7fbf0020
    ctx->pc = 0x1e76c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e76c8: 0x7fb10010
    ctx->pc = 0x1e76c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e76cc: 0x7fb00000
    ctx->pc = 0x1e76ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e76d0: 0x70c08628
    ctx->pc = 0x1e76d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e76d4: 0xc079dc0
    ctx->pc = 0x1E76D4u;
    SET_GPR_U32(ctx, 31, 0x1E76DCu);
    ctx->pc = 0x1E76D8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7700u;
    {
        const uint32_t __entryPc = ctx->pc;
        initTrsRotScl__11CFcvTRSBaseFPf_0x1e7700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76DCu; }
        else if (ctx->pc != 0x1E76DCu) { ctx->pc = 0x1E76DCu; }
    }
    if (ctx->pc != 0x1E76DCu) { return; }
    ctx->pc = 0x1E76DCu;
    // 0x1e76dc: 0x72202628
    ctx->pc = 0x1e76dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e76e0: 0xc079dfc
    ctx->pc = 0x1E76E0u;
    SET_GPR_U32(ctx, 31, 0x1E76E8u);
    ctx->pc = 0x1E76E4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E77F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMate__11CFcvTRSBaseFPf_0x1e77f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E76E8u; }
        else if (ctx->pc != 0x1E76E8u) { ctx->pc = 0x1E76E8u; }
    }
    if (ctx->pc != 0x1E76E8u) { return; }
    ctx->pc = 0x1E76E8u;
    // 0x1e76e8: 0x7bbf0020
    ctx->pc = 0x1e76e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e76ec: 0x7bb10010
    ctx->pc = 0x1e76ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e76f0: 0x7bb00000
    ctx->pc = 0x1e76f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e76f4: 0x3e00008
    ctx->pc = 0x1E76F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E76F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E76FCu;
}
