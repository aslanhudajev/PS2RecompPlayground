#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: transfer__11PalMgrClassFv
// Address: 0x204120 - 0x20413c
void transfer__11PalMgrClassFv_0x204120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("transfer__11PalMgrClassFv");


    ctx->pc = 0x204120u;

    // 0x204120: 0x27bdfff0
    ctx->pc = 0x204120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204124: 0x7fbf0000
    ctx->pc = 0x204124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x204128: 0xc06acac
    ctx->pc = 0x204128u;
    SET_GPR_U32(ctx, 31, 0x204130u);
    ctx->pc = 0x1AB2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLoadPalette_0x1ab2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204130u; }
        else if (ctx->pc != 0x204130u) { ctx->pc = 0x204130u; }
    }
    if (ctx->pc != 0x204130u) { return; }
    ctx->pc = 0x204130u;
    // 0x204130: 0x7bbf0000
    ctx->pc = 0x204130u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204134: 0x3e00008
    ctx->pc = 0x204134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204138u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20413Cu;
}
