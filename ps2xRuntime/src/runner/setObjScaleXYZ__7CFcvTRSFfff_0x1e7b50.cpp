#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setObjScaleXYZ__7CFcvTRSFfff
// Address: 0x1e7b50 - 0x1e7b6c
void setObjScaleXYZ__7CFcvTRSFfff_0x1e7b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setObjScaleXYZ__7CFcvTRSFfff");


    ctx->pc = 0x1e7b50u;

    // 0x1e7b50: 0xe48c00d8
    ctx->pc = 0x1e7b50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x1e7b54: 0xe48d00dc
    ctx->pc = 0x1e7b54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
    // 0x1e7b58: 0xe48e00e0
    ctx->pc = 0x1e7b58u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x1e7b5c: 0x8c8300ec
    ctx->pc = 0x1e7b5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7b60: 0x34630004
    ctx->pc = 0x1e7b60u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x1e7b64: 0x3e00008
    ctx->pc = 0x1E7B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B68u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7B6Cu;
}
