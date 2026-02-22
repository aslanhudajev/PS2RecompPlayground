#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iInvalidDCache
// Address: 0x1312b0 - 0x1312c4
void iInvalidDCache_0x1312b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1312b0u;

    // 0x1312b0: 0x3c02ffff
    ctx->pc = 0x1312b0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1312b4: 0x3442ffc0
    ctx->pc = 0x1312b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65472);
    // 0x1312b8: 0xa22824
    ctx->pc = 0x1312b8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1312bc: 0x804c462
    ctx->pc = 0x1312BCu;
    ctx->pc = 0x1312C0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x131188u;
    _sceIDC_0x131188(rdram, ctx, runtime); return;
    ctx->pc = 0x1312C4u;
}
