#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_menu_back
// Address: 0x2073f0 - 0x207410
void new_menu_back_0x2073f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2073f0u;

    // 0x2073f0: 0x27bdfff0
    ctx->pc = 0x2073f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2073f4: 0xffbf0000
    ctx->pc = 0x2073f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2073f8: 0x80282d
    ctx->pc = 0x2073f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073fc: 0xc081b98
    ctx->pc = 0x2073FCu;
    SET_GPR_U32(ctx, 31, 0x207404u);
    ctx->pc = 0x207400u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2048 << 16));
    ctx->pc = 0x206E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ctrl_0x206e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207404u; }
    }
    if (ctx->pc != 0x207404u) { return; }
    ctx->pc = 0x207404u;
    // 0x207404: 0xdfbf0000
    ctx->pc = 0x207404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207408: 0x3e00008
    ctx->pc = 0x207408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20740Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207410u;
}
