#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sbrk_r
// Address: 0x2fc480 - 0x2fc4dc
void _sbrk_r_0x2fc480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fc480u;

    // 0x2fc480: 0x27bdffd0
    ctx->pc = 0x2fc480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc484: 0xffb10010
    ctx->pc = 0x2fc484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fc488: 0xffb00000
    ctx->pc = 0x2fc488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc48c: 0x3c11003c
    ctx->pc = 0x2fc48cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x2fc490: 0x80802d
    ctx->pc = 0x2fc490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc494: 0xffbf0020
    ctx->pc = 0x2fc494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fc498: 0xa0202d
    ctx->pc = 0x2fc498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc49c: 0xc0c0f0a
    ctx->pc = 0x2FC49Cu;
    SET_GPR_U32(ctx, 31, 0x2FC4A4u);
    ctx->pc = 0x2FC4A0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947224), GPR_U32(ctx, 0));
    ctx->pc = 0x303C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sbrk_0x303c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC4A4u; }
    }
    if (ctx->pc != 0x2FC4A4u) { return; }
    ctx->pc = 0x2FC4A4u;
    // 0x2fc4a4: 0x40182d
    ctx->pc = 0x2fc4a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc4a8: 0x3c02ffff
    ctx->pc = 0x2fc4a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2fc4ac: 0x3442ffff
    ctx->pc = 0x2fc4acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2fc4b0: 0x14620005
    ctx->pc = 0x2FC4B0u;
    {
        const bool branch_taken_0x2fc4b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FC4B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2fc4b0) {
            ctx->pc = 0x2FC4C8u;
            goto label_2fc4c8;
        }
    }
    ctx->pc = 0x2FC4B8u;
    // 0x2fc4b8: 0x8e22b198
    ctx->pc = 0x2fc4b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
    // 0x2fc4bc: 0x54400002
    ctx->pc = 0x2FC4BCu;
    {
        const bool branch_taken_0x2fc4bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2fc4bc) {
            ctx->pc = 0x2FC4C0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x2FC4C8u;
            goto label_2fc4c8;
        }
    }
    ctx->pc = 0x2FC4C4u;
    // 0x2fc4c4: 0xdfbf0020
    ctx->pc = 0x2fc4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fc4c8:
    // 0x2fc4c8: 0x60102d
    ctx->pc = 0x2fc4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc4cc: 0xdfb10010
    ctx->pc = 0x2fc4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc4d0: 0xdfb00000
    ctx->pc = 0x2fc4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc4d4: 0x3e00008
    ctx->pc = 0x2FC4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC4D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FC4C8u: goto label_2fc4c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FC4DCu;
}
