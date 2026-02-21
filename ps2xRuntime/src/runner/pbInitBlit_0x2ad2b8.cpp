#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitBlit
// Address: 0x2ad2b8 - 0x2ad318
void pbInitBlit_0x2ad2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad2b8u;

    // 0x2ad2b8: 0x3c020036
    ctx->pc = 0x2ad2b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad2bc: 0x8c44dee0
    ctx->pc = 0x2ad2bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad2c0: 0x3c030037
    ctx->pc = 0x2ad2c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ad2c4: 0x246285c0
    ctx->pc = 0x2ad2c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294936000));
    // 0x2ad2c8: 0xac820040
    ctx->pc = 0x2ad2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x2ad2cc: 0x3c013f80
    ctx->pc = 0x2ad2ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ad2d0: 0x44810000
    ctx->pc = 0x2ad2d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2ad2d4: 0xe46085c0
    ctx->pc = 0x2ad2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294936000), bits); }
    // 0x2ad2d8: 0x8c820040
    ctx->pc = 0x2ad2d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ad2dc: 0xe4400004
    ctx->pc = 0x2ad2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad2e0: 0x8c820040
    ctx->pc = 0x2ad2e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ad2e4: 0x24030800
    ctx->pc = 0x2ad2e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ad2e8: 0xac430008
    ctx->pc = 0x2ad2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2ad2ec: 0x8c820040
    ctx->pc = 0x2ad2ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ad2f0: 0xac43000c
    ctx->pc = 0x2ad2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2ad2f4: 0x8c830040
    ctx->pc = 0x2ad2f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ad2f8: 0x3c020037
    ctx->pc = 0x2ad2f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad2fc: 0x8c428350
    ctx->pc = 0x2ad2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935376)));
    // 0x2ad300: 0xac620010
    ctx->pc = 0x2ad300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2ad304: 0x8c830040
    ctx->pc = 0x2ad304u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ad308: 0x3c020037
    ctx->pc = 0x2ad308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad30c: 0x8c428358
    ctx->pc = 0x2ad30cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935384)));
    // 0x2ad310: 0x3e00008
    ctx->pc = 0x2AD310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD314u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD318u;
}
