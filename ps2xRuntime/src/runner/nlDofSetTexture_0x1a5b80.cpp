#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetTexture
// Address: 0x1a5b80 - 0x1a5bb8
void nlDofSetTexture_0x1a5b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetTexture");


    ctx->pc = 0x1a5b80u;

    // 0x1a5b80: 0x27bdfff0
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5b84: 0x7fbf0000
    ctx->pc = 0x1a5b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5b88: 0x8f8289d0
    ctx->pc = 0x1a5b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x1a5b8c: 0x10400005
    ctx->pc = 0x1A5B8Cu;
    {
        const bool branch_taken_0x1a5b8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5b8c) {
            ctx->pc = 0x1A5BA4u;
            goto label_1a5ba4;
        }
    }
    ctx->pc = 0x1A5B94u;
    // 0x1a5b94: 0xc0696b8
    ctx->pc = 0x1A5B94u;
    SET_GPR_U32(ctx, 31, 0x1A5B9Cu);
    ctx->pc = 0x1A5AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetTextureConv_0x1a5ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B9Cu; }
        else if (ctx->pc != 0x1A5B9Cu) { ctx->pc = 0x1A5B9Cu; }
    }
    if (ctx->pc != 0x1A5B9Cu) { return; }
    ctx->pc = 0x1A5B9Cu;
    // 0x1a5b9c: 0x10000004
    ctx->pc = 0x1A5B9Cu;
    {
        const bool branch_taken_0x1a5b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5BA0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a5b9c) {
            ctx->pc = 0x1A5BB0u;
            goto label_1a5bb0;
        }
    }
    ctx->pc = 0x1A5BA4u;
label_1a5ba4:
    // 0x1a5ba4: 0xc069698
    ctx->pc = 0x1A5BA4u;
    SET_GPR_U32(ctx, 31, 0x1A5BACu);
    ctx->pc = 0x1A5A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetTextureDirect_0x1a5a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5BACu; }
        else if (ctx->pc != 0x1A5BACu) { ctx->pc = 0x1A5BACu; }
    }
    if (ctx->pc != 0x1A5BACu) { return; }
    ctx->pc = 0x1A5BACu;
    // 0x1a5bac: 0x7bbf0000
    ctx->pc = 0x1a5bacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5bb0:
    // 0x1a5bb0: 0x3e00008
    ctx->pc = 0x1A5BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5BB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5BA4u: goto label_1a5ba4;
            case 0x1A5BB0u: goto label_1a5bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5BB8u;
}
