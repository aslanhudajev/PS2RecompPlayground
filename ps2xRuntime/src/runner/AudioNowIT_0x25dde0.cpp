#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioNowIT
// Address: 0x25dde0 - 0x25de00
void AudioNowIT_0x25dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25dde0u;

    // 0x25dde0: 0x80282d
    ctx->pc = 0x25dde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dde4: 0x3c014120
    ctx->pc = 0x25dde4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x25dde8: 0x44816000
    ctx->pc = 0x25dde8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25ddec: 0x2404ffff
    ctx->pc = 0x25ddecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ddf0: 0x3c060002
    ctx->pc = 0x25ddf0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)2 << 16));
    // 0x25ddf4: 0x34c6000f
    ctx->pc = 0x25ddf4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 15));
    // 0x25ddf8: 0x8097672
    ctx->pc = 0x25DDF8u;
    ctx->pc = 0x25DDFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DE00u;
}
