#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setGIFad
// Address: 0x11b4e8 - 0x11b518
void setGIFad_0x11b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b4e8u;

    // 0x11b4e8: 0x3c02ffff
    ctx->pc = 0x11b4e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x11b4ec: 0x2103e
    ctx->pc = 0x11b4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11b4f0: 0xac850008
    ctx->pc = 0x11b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x11b4f4: 0xc21024
    ctx->pc = 0x11b4f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b4f8: 0xac80000c
    ctx->pc = 0x11b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x11b4fc: 0x2103c
    ctx->pc = 0x11b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11b500: 0x2103f
    ctx->pc = 0x11b500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11b504: 0x6303f
    ctx->pc = 0x11b504u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x11b508: 0xac820000
    ctx->pc = 0x11b508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x11b50c: 0x24820010
    ctx->pc = 0x11b50cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
    // 0x11b510: 0x3e00008
    ctx->pc = 0x11B510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B514u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B518u;
}
