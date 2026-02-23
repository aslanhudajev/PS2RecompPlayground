#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdCreateSj
// Address: 0x18f4d0 - 0x18f4f4
void mwPlySfdCreateSj_0x18f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdCreateSj");


    ctx->pc = 0x18f4d0u;

    // 0x18f4d0: 0x27bdfff0
    ctx->pc = 0x18f4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f4d4: 0x302d
    ctx->pc = 0x18f4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4d8: 0xffbf0000
    ctx->pc = 0x18f4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f4dc: 0x8c850050
    ctx->pc = 0x18f4dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x18f4e0: 0xc05f128
    ctx->pc = 0x18F4E0u;
    SET_GPR_U32(ctx, 31, 0x18F4E8u);
    ctx->pc = 0x18F4E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->pc = 0x17C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Create_0x17c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4E8u; }
        else if (ctx->pc != 0x18F4E8u) { ctx->pc = 0x18F4E8u; }
    }
    if (ctx->pc != 0x18F4E8u) { return; }
    ctx->pc = 0x18F4E8u;
    // 0x18f4e8: 0xdfbf0000
    ctx->pc = 0x18f4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f4ec: 0x3e00008
    ctx->pc = 0x18F4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F4F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F4F4u;
}
