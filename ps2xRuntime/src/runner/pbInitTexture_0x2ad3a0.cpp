#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitTexture
// Address: 0x2ad3a0 - 0x2ad3ec
void pbInitTexture_0x2ad3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad3a0u;

    // 0x2ad3a0: 0x3c020036
    ctx->pc = 0x2ad3a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad3a4: 0x8c44dee0
    ctx->pc = 0x2ad3a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad3a8: 0x3c020037
    ctx->pc = 0x2ad3a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad3ac: 0x244286e0
    ctx->pc = 0x2ad3acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936288));
    // 0x2ad3b0: 0xac820048
    ctx->pc = 0x2ad3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2ad3b4: 0x3c03ffff
    ctx->pc = 0x2ad3b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2ad3b8: 0x3463ffff
    ctx->pc = 0x2ad3b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ad3bc: 0xac430360
    ctx->pc = 0x2ad3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 864), GPR_U32(ctx, 3));
    // 0x2ad3c0: 0x8c820048
    ctx->pc = 0x2ad3c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ad3c4: 0xac400364
    ctx->pc = 0x2ad3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 868), GPR_U32(ctx, 0));
    // 0x2ad3c8: 0x8c820048
    ctx->pc = 0x2ad3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ad3cc: 0xac400368
    ctx->pc = 0x2ad3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 872), GPR_U32(ctx, 0));
    // 0x2ad3d0: 0x8c830048
    ctx->pc = 0x2ad3d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ad3d4: 0x24020005
    ctx->pc = 0x2ad3d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ad3d8: 0xac62036c
    ctx->pc = 0x2ad3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 876), GPR_U32(ctx, 2));
    // 0x2ad3dc: 0x8c830048
    ctx->pc = 0x2ad3dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ad3e0: 0x24020001
    ctx->pc = 0x2ad3e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad3e4: 0x3e00008
    ctx->pc = 0x2AD3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD3E8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD3ECu;
}
