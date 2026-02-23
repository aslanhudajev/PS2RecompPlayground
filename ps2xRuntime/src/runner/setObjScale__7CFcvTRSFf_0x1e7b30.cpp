#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setObjScale__7CFcvTRSFf
// Address: 0x1e7b30 - 0x1e7b4c
void setObjScale__7CFcvTRSFf_0x1e7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setObjScale__7CFcvTRSFf");


    ctx->pc = 0x1e7b30u;

    // 0x1e7b30: 0xe48c00e0
    ctx->pc = 0x1e7b30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x1e7b34: 0xe48c00dc
    ctx->pc = 0x1e7b34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
    // 0x1e7b38: 0xe48c00d8
    ctx->pc = 0x1e7b38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x1e7b3c: 0x8c8300ec
    ctx->pc = 0x1e7b3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1e7b40: 0x34630004
    ctx->pc = 0x1e7b40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x1e7b44: 0x3e00008
    ctx->pc = 0x1E7B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7B48u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7B4Cu;
}
