#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static const uint8_t kGenaddr[20] = {
    0x46, 0x44, 0x45, 0x0A, 0x3D, 0x49, 0x3B, 0x1B,
    0x1A, 0x1C, 0x22, 0x3F, 0x50, 0x51, 0x52, 0x53,
    0x60, 0x61, 0x62, 0x00
};

// Ghidra decomp: copy env slots from inner to param_1[1] based on mask param_1[3]
// Env layout: env+0=ptr to packed struct, env+4=dest base, env+8=inner, env+12=mask
// The expected slot count is in the packed struct at [env+0]+0 (low 15 bits), NOT in env itself.
void sceHiGsEnvUpdate_0x111f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsEnvUpdate_0x111f10");
#endif
    uint32_t envAddr = getRegU32(ctx, 4);
    uint32_t innerAddr = FAST_READ32(envAddr + 8);
    uint32_t destBase = FAST_READ32(envAddr + 4);
    uint32_t mask = FAST_READ32(envAddr + 12);

    uint32_t u7 = 0;
    for (uint32_t u5 = 0; u5 < 20u; u5++) {
        if ((mask >> (u5 & 0x1Fu)) & 1u) {
            uint8_t* src = getMemPtr(rdram, innerAddr + u7 * 8);
            uint8_t* dest = getMemPtr(rdram, destBase + u7 * 16);
            if (src && dest) {
                std::memcpy(dest, src, 8);
                dest[8] = kGenaddr[u5];
                uint64_t val8 = static_cast<uint64_t>(dest[8]) & 0xFFu;
                std::memcpy(dest + 8, &val8, 8);
            }
            u7++;
        }
    }

    // Original: (*(uint64_t *)*param_1 & 0x7FFF) != u7
    // env+0 holds a POINTER to the packed struct; expected count is at that address
    uint32_t packedPtr = FAST_READ32(envAddr);
    uint64_t packed0 = 0;
    if (packedPtr != 0u) {
        uint8_t* packedMem = getMemPtr(rdram, packedPtr);
        if (packedMem)
            std::memcpy(&packed0, packedMem, 8);
        else
            packed0 = FAST_READ64(packedPtr);
    }
    uint32_t expectedCount = static_cast<uint32_t>(packed0 & 0x7FFFu);
    if (packedPtr == 0u)
        expectedCount = u7;
    if (expectedCount != u7) {
        if (runtime->hasFunction(0x111968u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, 0xBu);
            tmp.pc = 0x111968u;
            auto fn = runtime->lookupFunction(0x111968u);
            fn(rdram, &tmp, runtime);
            setReturnU32(ctx, getRegU32(&tmp, 2));
        } else {
            setReturnS32(ctx, -1);
        }
    } else {
        setReturnS32(ctx, 0);
    }
    ctx->pc = getRegU32(ctx, 31);
}
