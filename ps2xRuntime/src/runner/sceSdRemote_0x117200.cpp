#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// sbuff at 0x17aec0, DAT_0017aec4 at 0x17aec4 (6 words copied from params)
static constexpr uint32_t kSbuffAddr   = 0x17aec0u;
static constexpr uint32_t kDataBase    = 0x17aec4u;
static constexpr uint32_t kSceSd_gCd   = 0x18af00u;

void sceSdRemote_0x117200(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t param_1 = getRegU32(ctx, 4);
    const uint32_t param_2 = getRegU32(ctx, 5);
    const uint32_t param_3 = getRegU32(ctx, 6);
    const uint32_t param_4 = getRegU32(ctx, 7);
    const uint32_t param_5 = getRegU32(ctx, 8);
    const uint32_t param_6 = getRegU32(ctx, 9);
    const uint32_t param_7 = getRegU32(ctx, 10);
    const uint32_t param_8 = getRegU32(ctx, 11);

    WRITE32(kDataBase + 0u, param_3);
    WRITE32(kDataBase + 4u, param_4);
    WRITE32(kDataBase + 8u, param_5);
    WRITE32(kDataBase + 12u, param_6);
    WRITE32(kDataBase + 16u, param_7);
    WRITE32(kDataBase + 20u, param_8);

    const uint32_t mode = (param_1 == 0u) ? 1u : 0u;
    ctx->r[4] = _mm_set_epi64x(0, kSceSd_gCd);
    ctx->r[5] = _mm_set_epi64x(0, param_2);
    ctx->r[6] = _mm_set_epi64x(0, mode);
    ctx->r[7] = _mm_set_epi64x(0, kSbuffAddr);
    ctx->r[8] = _mm_set_epi64x(0, 0x40u);
    ctx->r[9] = _mm_set_epi64x(0, kSbuffAddr);
    ctx->r[10] = _mm_set_epi64x(0, 0x10u);
    ctx->r[11] = _mm_set_epi64x(0, 0u);

    sceSifCallRpc_0x110480(rdram, ctx, runtime);
    ctx->pc = getRegU32(ctx, 31);
}
