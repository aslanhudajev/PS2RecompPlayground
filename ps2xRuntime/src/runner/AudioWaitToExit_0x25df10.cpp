#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWaitToExit
// Address: 0x25df10 - 0x25df48
void AudioWaitToExit_0x25df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25df10u;

    // 0x25df10: 0x80282d
    ctx->pc = 0x25df10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df14: 0x3c020034
    ctx->pc = 0x25df14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25df18: 0x8c42e7f0
    ctx->pc = 0x25df18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25df1c: 0x3c030002
    ctx->pc = 0x25df1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
    // 0x25df20: 0x3463000c
    ctx->pc = 0x25df20u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 12));
    // 0x25df24: 0x3c060003
    ctx->pc = 0x25df24u;
    SET_GPR_U32(ctx, 6, ((uint32_t)3 << 16));
    // 0x25df28: 0x34c60014
    ctx->pc = 0x25df28u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 20));
    // 0x25df2c: 0x3842000d
    ctx->pc = 0x25df2cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 13));
    // 0x25df30: 0x3c0140a0
    ctx->pc = 0x25df30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x25df34: 0x44816000
    ctx->pc = 0x25df34u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25df38: 0x2404ffff
    ctx->pc = 0x25df38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25df3c: 0x62300b
    ctx->pc = 0x25df3cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x25df40: 0x8097672
    ctx->pc = 0x25DF40u;
    ctx->pc = 0x25DF44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DF48u;
}
