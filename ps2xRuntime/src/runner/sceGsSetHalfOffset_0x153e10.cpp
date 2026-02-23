#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Ghidra decomp: sceGsSetHalfOffset(param1, param2, param3, param4) - writes offset to param1+0x20
void sceGsSetHalfOffset_0x153e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    PS2_INIT_LOG_ENTRY("sceGsSetHalfOffset");

    const uint32_t param1 = GPR_U32(ctx, 4);
    const int32_t param2 = (int32_t)(int16_t)(GPR_U32(ctx, 5) & 0xFFFFu);
    const int32_t param3 = (int32_t)(int16_t)(GPR_U32(ctx, 6) & 0xFFFFu);
    const int32_t param4 = (int32_t)(int16_t)(GPR_U32(ctx, 7) & 0xFFFFu);

    const uint64_t reg64 = READ64(param1 + 0x30u);
    const int32_t widthHalf = (int32_t)(((reg64 >> 16) & 0x7FFu) + 1u) >> 1;
    const int32_t heightHalf = (int32_t)(((reg64 >> 48) & 0x7FFu) + 1u) >> 1;

    const int64_t lVar2 = (int64_t)param3 - (int64_t)heightHalf;
    const uint64_t uVar1 = (param4 == 0)
        ? ((uint64_t)(int64_t)lVar2 << 24u)
        : ((uint64_t)(int64_t)(lVar2 * 16 + 8) << 20u);

    const int64_t lowPart = ((int64_t)param2 - (int64_t)widthHalf) * 16;
    const uint64_t result = (uint64_t)(int64_t)lowPart | uVar1;

    WRITE64(param1 + 0x20u, result);

    ctx->pc = getRegU32(ctx, 31);
}
