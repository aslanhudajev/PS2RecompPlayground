#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init2__11TexMgrClassFii
// Address: 0x21a650 - 0x21a67c
void init2__11TexMgrClassFii_0x21a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init2__11TexMgrClassFii");


    ctx->pc = 0x21a650u;

    // 0x21a650: 0x27bdffe0
    ctx->pc = 0x21a650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a654: 0x7fbf0010
    ctx->pc = 0x21a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21a658: 0x7fb00000
    ctx->pc = 0x21a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a65c: 0xc086768
    ctx->pc = 0x21A65Cu;
    SET_GPR_U32(ctx, 31, 0x21A664u);
    ctx->pc = 0x21A660u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__14TexBufMgrClassFii_0x219da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A664u; }
        else if (ctx->pc != 0x21A664u) { ctx->pc = 0x21A664u; }
    }
    if (ctx->pc != 0x21A664u) { return; }
    ctx->pc = 0x21A664u;
    // 0x21a664: 0xc08695c
    ctx->pc = 0x21A664u;
    SET_GPR_U32(ctx, 31, 0x21A66Cu);
    ctx->pc = 0x21A668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21A570u;
    {
        const uint32_t __entryPc = ctx->pc;
        _init__11TexMgrClassFv_0x21a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A66Cu; }
        else if (ctx->pc != 0x21A66Cu) { ctx->pc = 0x21A66Cu; }
    }
    if (ctx->pc != 0x21A66Cu) { return; }
    ctx->pc = 0x21A66Cu;
    // 0x21a66c: 0x7bbf0010
    ctx->pc = 0x21a66cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a670: 0x7bb00000
    ctx->pc = 0x21a670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a674: 0x3e00008
    ctx->pc = 0x21A674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A678u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A67Cu;
}
