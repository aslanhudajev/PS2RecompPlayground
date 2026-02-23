#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: firstGameInit__10PlayerTaskFv
// Address: 0x20e1b0 - 0x20e214
void firstGameInit__10PlayerTaskFv_0x20e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("firstGameInit__10PlayerTaskFv");


    ctx->pc = 0x20e1b0u;

    // 0x20e1b0: 0x27bdffe0
    ctx->pc = 0x20e1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e1b4: 0x7fbf0010
    ctx->pc = 0x20e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20e1b8: 0x7fb00000
    ctx->pc = 0x20e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e1bc: 0x8c831cbc
    ctx->pc = 0x20e1bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20e1c0: 0x70808628
    ctx->pc = 0x20e1c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20e1c4: 0x3c020050
    ctx->pc = 0x20e1c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e1c8: 0x2444fe80
    ctx->pc = 0x20e1c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    // 0x20e1cc: 0x8c620008
    ctx->pc = 0x20e1ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x20e1d0: 0x34420001
    ctx->pc = 0x20e1d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x20e1d4: 0xac620008
    ctx->pc = 0x20e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x20e1d8: 0xc074dd0
    ctx->pc = 0x20E1D8u;
    SET_GPR_U32(ctx, 31, 0x20E1E0u);
    ctx->pc = 0x20E1DCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    ctx->pc = 0x1D3740u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBookPlGameStart__14SysCfgMgrClassFi_0x1d3740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E1E0u; }
        else if (ctx->pc != 0x20E1E0u) { ctx->pc = 0x20E1E0u; }
    }
    if (ctx->pc != 0x20E1E0u) { return; }
    ctx->pc = 0x20E1E0u;
    // 0x20e1e0: 0x72002628
    ctx->pc = 0x20e1e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20e1e4: 0xc083c24
    ctx->pc = 0x20E1E4u;
    SET_GPR_U32(ctx, 31, 0x20E1ECu);
    ctx->pc = 0x20E1E8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F090u;
    {
        const uint32_t __entryPc = ctx->pc;
        startInit__10PlayerTaskFi_0x20f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E1ECu; }
        else if (ctx->pc != 0x20E1ECu) { ctx->pc = 0x20E1ECu; }
    }
    if (ctx->pc != 0x20E1ECu) { return; }
    ctx->pc = 0x20E1ECu;
    // 0x20e1ec: 0x3c020027
    ctx->pc = 0x20e1ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20e1f0: 0x244232c8
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13000));
    // 0x20e1f4: 0x8c450008
    ctx->pc = 0x20e1f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20e1f8: 0x8e041cb4
    ctx->pc = 0x20e1f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7348)));
    // 0x20e1fc: 0xc068fd8
    ctx->pc = 0x20E1FCu;
    SET_GPR_U32(ctx, 31, 0x20E204u);
    ctx->pc = 0x20E200u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E204u; }
        else if (ctx->pc != 0x20E204u) { ctx->pc = 0x20E204u; }
    }
    if (ctx->pc != 0x20E204u) { return; }
    ctx->pc = 0x20E204u;
    // 0x20e204: 0x7bbf0010
    ctx->pc = 0x20e204u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e208: 0x7bb00000
    ctx->pc = 0x20e208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e20c: 0x3e00008
    ctx->pc = 0x20E20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E210u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20E214u;
}
