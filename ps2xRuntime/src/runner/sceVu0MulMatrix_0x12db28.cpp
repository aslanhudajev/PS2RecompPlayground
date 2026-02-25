#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: C = A * B (4x4 matrix multiply)
static void mul4x4(float (&c)[4][4], const float (&a)[4][4], const float (&b)[4][4]) {
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j] + a[i][3]*b[3][j];
}

void sceVu0MulMatrix_0x12db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceVu0MulMatrix_0x12db28");
#endif
    (void)runtime;
    const uint32_t dstAddr = getRegU32(ctx, 4);
    const uint32_t aAddr = getRegU32(ctx, 5);
    const uint32_t bAddr = getRegU32(ctx, 6);
    const uint8_t* pa = getConstMemPtr(rdram, aAddr);
    const uint8_t* pb = getConstMemPtr(rdram, bAddr);
    uint8_t* pc = getMemPtr(rdram, dstAddr);
    if (pa && pb && pc) {
        float a[4][4], b[4][4], c[4][4];
        std::memcpy(a, pa, 64);
        std::memcpy(b, pb, 64);
        mul4x4(c, a, b);
        std::memcpy(pc, c, 64);
    }
    ctx->pc = getRegU32(ctx, 31);
}
