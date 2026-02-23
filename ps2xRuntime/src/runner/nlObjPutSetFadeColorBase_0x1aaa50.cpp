#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetFadeColorBase
// Address: 0x1aaa50 - 0x1aaa6c
void nlObjPutSetFadeColorBase_0x1aaa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetFadeColorBase");


    ctx->pc = 0x1aaa50u;

    // 0x1aaa50: 0x3c010030
    ctx->pc = 0x1aaa50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaa54: 0xe42c3970
    ctx->pc = 0x1aaa54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14704), bits); }
    // 0x1aaa58: 0x3c010030
    ctx->pc = 0x1aaa58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaa5c: 0xe42d3974
    ctx->pc = 0x1aaa5cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14708), bits); }
    // 0x1aaa60: 0x3c010030
    ctx->pc = 0x1aaa60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaa64: 0x3e00008
    ctx->pc = 0x1AAA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA68u;
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14712), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAA6Cu;
}
