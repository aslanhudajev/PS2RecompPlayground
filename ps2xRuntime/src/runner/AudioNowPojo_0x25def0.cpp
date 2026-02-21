#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioNowPojo
// Address: 0x25def0 - 0x25df10
void AudioNowPojo_0x25def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25def0u;

    // 0x25def0: 0x80282d
    ctx->pc = 0x25def0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25def4: 0x3c014120
    ctx->pc = 0x25def4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x25def8: 0x44816000
    ctx->pc = 0x25def8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25defc: 0x2404ffff
    ctx->pc = 0x25defcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25df00: 0x3c060001
    ctx->pc = 0x25df00u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x25df04: 0x34c6002c
    ctx->pc = 0x25df04u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 44));
    // 0x25df08: 0x8097672
    ctx->pc = 0x25DF08u;
    ctx->pc = 0x25DF0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DF10u;
}
