#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlInitPrint
// Address: 0x1ab690 - 0x1ab6e0
void nlInitPrint_0x1ab690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlInitPrint");


    ctx->pc = 0x1ab690u;

    // 0x1ab690: 0x27bdfff0
    ctx->pc = 0x1ab690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab694: 0x7fbf0000
    ctx->pc = 0x1ab694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ab698: 0xc06ad5c
    ctx->pc = 0x1AB698u;
    SET_GPR_U32(ctx, 31, 0x1AB6A0u);
    ctx->pc = 0x1AB570u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrintLoadTexture_0x1ab570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6A0u; }
        else if (ctx->pc != 0x1AB6A0u) { ctx->pc = 0x1AB6A0u; }
    }
    if (ctx->pc != 0x1AB6A0u) { return; }
    ctx->pc = 0x1AB6A0u;
    // 0x1ab6a0: 0x24020008
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab6a4: 0xaf828a78
    ctx->pc = 0x1ab6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937208), GPR_U32(ctx, 2));
    // 0x1ab6a8: 0xaf828a7c
    ctx->pc = 0x1ab6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937212), GPR_U32(ctx, 2));
    // 0x1ab6ac: 0x70002628
    ctx->pc = 0x1ab6acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab6b0: 0xc06ae94
    ctx->pc = 0x1AB6B0u;
    SET_GPR_U32(ctx, 31, 0x1AB6B8u);
    ctx->pc = 0x1AB6B4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937232), GPR_U32(ctx, 0));
    ctx->pc = 0x1ABA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrintMonitorMode_0x1aba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6B8u; }
        else if (ctx->pc != 0x1AB6B8u) { ctx->pc = 0x1AB6B8u; }
    }
    if (ctx->pc != 0x1AB6B8u) { return; }
    ctx->pc = 0x1AB6B8u;
    // 0x1ab6b8: 0xc06aea8
    ctx->pc = 0x1AB6B8u;
    SET_GPR_U32(ctx, 31, 0x1AB6C0u);
    ctx->pc = 0x1AB6BCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrintSetOpaqueMode_0x1abaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6C0u; }
        else if (ctx->pc != 0x1AB6C0u) { ctx->pc = 0x1AB6C0u; }
    }
    if (ctx->pc != 0x1AB6C0u) { return; }
    ctx->pc = 0x1AB6C0u;
    // 0x1ab6c0: 0xc06af20
    ctx->pc = 0x1AB6C0u;
    SET_GPR_U32(ctx, 31, 0x1AB6C8u);
    ctx->pc = 0x1AB6C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ABC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrintColor_0x1abc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6C8u; }
        else if (ctx->pc != 0x1AB6C8u) { ctx->pc = 0x1AB6C8u; }
    }
    if (ctx->pc != 0x1AB6C8u) { return; }
    ctx->pc = 0x1AB6C8u;
    // 0x1ab6c8: 0x70002628
    ctx->pc = 0x1ab6c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab6cc: 0xc06aef8
    ctx->pc = 0x1AB6CCu;
    SET_GPR_U32(ctx, 31, 0x1AB6D4u);
    ctx->pc = 0x1AB6D0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABBE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLocate_0x1abbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6D4u; }
        else if (ctx->pc != 0x1AB6D4u) { ctx->pc = 0x1AB6D4u; }
    }
    if (ctx->pc != 0x1AB6D4u) { return; }
    ctx->pc = 0x1AB6D4u;
    // 0x1ab6d4: 0x7bbf0000
    ctx->pc = 0x1ab6d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab6d8: 0x3e00008
    ctx->pc = 0x1AB6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB6DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB6E0u;
}
