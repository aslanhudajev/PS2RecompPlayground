#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: out = M * v (single column transform)
void sceVu0ApplyMatrix_0x12daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceVu0ApplyMatrix_0x12daf8");
#endif
    (void)runtime;
    const uint32_t dstAddr = getRegU32(ctx, 4);
    const uint32_t mAddr = getRegU32(ctx, 5);
    const uint32_t vAddr = getRegU32(ctx, 6);
    const uint8_t* pm = getConstMemPtr(rdram, mAddr);
    const uint8_t* pv = getConstMemPtr(rdram, vAddr);
    uint8_t* po = getMemPtr(rdram, dstAddr);
    if (pm && pv && po) {
        float m[4][4], v[4], o[4];
        std::memcpy(m, pm, 64);
        std::memcpy(v, pv, 16);
        for (int i = 0; i < 4; ++i)
            o[i] = m[i][0]*v[0] + m[i][1]*v[1] + m[i][2]*v[2] + m[i][3]*v[3];
        std::memcpy(po, o, 16);
    }
    ctx->pc = getRegU32(ctx, 31);
}
