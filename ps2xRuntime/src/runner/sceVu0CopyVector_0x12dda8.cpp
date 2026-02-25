#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: copy 4 words from param_2 to param_1
void sceVu0CopyVector_0x12dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceVu0CopyVector_0x12dda8");
#endif
    (void)runtime;
    const uint32_t dstAddr = getRegU32(ctx, 4);
    const uint32_t srcAddr = getRegU32(ctx, 5);
    const uint8_t* src = getConstMemPtr(rdram, srcAddr);
    uint8_t* dst = getMemPtr(rdram, dstAddr);
    if (src && dst)
        std::memcpy(dst, src, 16);
    ctx->pc = getRegU32(ctx, 31);
}
