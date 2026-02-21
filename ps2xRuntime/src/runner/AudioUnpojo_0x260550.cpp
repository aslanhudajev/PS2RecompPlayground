#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioUnpojo
// Address: 0x260550 - 0x260578
void AudioUnpojo_0x260550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260550u;

    // 0x260550: 0x24022b00
    ctx->pc = 0x260550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x260554: 0x822818
    ctx->pc = 0x260554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x260558: 0x3c020032
    ctx->pc = 0x260558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26055c: 0x24421be0
    ctx->pc = 0x26055cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x260560: 0xa22821
    ctx->pc = 0x260560u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x260564: 0x24040063
    ctx->pc = 0x260564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    // 0x260568: 0x24a50040
    ctx->pc = 0x260568u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x26056c: 0x240600e0
    ctx->pc = 0x26056cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260570: 0x8088a26
    ctx->pc = 0x260570u;
    ctx->pc = 0x260574u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260578u;
}
