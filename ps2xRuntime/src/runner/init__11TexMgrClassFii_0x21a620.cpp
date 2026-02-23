#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__11TexMgrClassFii
// Address: 0x21a620 - 0x21a64c
void init__11TexMgrClassFii_0x21a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__11TexMgrClassFii");


    ctx->pc = 0x21a620u;

    // 0x21a620: 0x27bdffe0
    ctx->pc = 0x21a620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a624: 0x7fbf0010
    ctx->pc = 0x21a624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21a628: 0x7fb00000
    ctx->pc = 0x21a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a62c: 0xc086768
    ctx->pc = 0x21A62Cu;
    SET_GPR_U32(ctx, 31, 0x21A634u);
    ctx->pc = 0x21A630u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__14TexBufMgrClassFii_0x219da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A634u; }
        else if (ctx->pc != 0x21A634u) { ctx->pc = 0x21A634u; }
    }
    if (ctx->pc != 0x21A634u) { return; }
    ctx->pc = 0x21A634u;
    // 0x21a634: 0xc08695c
    ctx->pc = 0x21A634u;
    SET_GPR_U32(ctx, 31, 0x21A63Cu);
    ctx->pc = 0x21A638u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21A570u;
    {
        const uint32_t __entryPc = ctx->pc;
        _init__11TexMgrClassFv_0x21a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A63Cu; }
        else if (ctx->pc != 0x21A63Cu) { ctx->pc = 0x21A63Cu; }
    }
    if (ctx->pc != 0x21A63Cu) { return; }
    ctx->pc = 0x21A63Cu;
    // 0x21a63c: 0x7bbf0010
    ctx->pc = 0x21a63cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a640: 0x7bb00000
    ctx->pc = 0x21a640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a644: 0x3e00008
    ctx->pc = 0x21A644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A64Cu;
}
