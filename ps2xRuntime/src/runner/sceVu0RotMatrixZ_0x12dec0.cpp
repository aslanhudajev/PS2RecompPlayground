#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cmath>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: angle from $f12, build Rz matrix
void sceVu0RotMatrixZ_0x12dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceVu0RotMatrixZ_0x12dec0");
#endif
    (void)runtime;
    float angle = ctx->f[12];
    if (angle < 0.0f) angle += 1.5707964f;
    else angle = 1.5707964f - angle;
    float c = std::cos(angle), s = std::sin(angle);
    const uint32_t dstAddr = getRegU32(ctx, 4);
    const uint32_t srcAddr = getRegU32(ctx, 5);
    const uint8_t* src = getConstMemPtr(rdram, srcAddr);
    uint8_t* dst = getMemPtr(rdram, dstAddr);
    if (src && dst) {
        float a[4][4], r[4][4], out[4][4];
        std::memcpy(a, src, 64);
        r[0][0]=c;  r[0][1]=-s; r[0][2]=0; r[0][3]=0;
        r[1][0]=s;  r[1][1]=c;  r[1][2]=0; r[1][3]=0;
        r[2][0]=0;  r[2][1]=0;  r[2][2]=1; r[2][3]=0;
        r[3][0]=0;  r[3][1]=0;  r[3][2]=0; r[3][3]=1;
        for (int i = 0; i < 4; ++i)
            for (int j = 0; j < 4; ++j)
                out[i][j] = r[i][0]*a[0][j]+r[i][1]*a[1][j]+r[i][2]*a[2][j]+r[i][3]*a[3][j];
        std::memcpy(dst, out, 64);
    }
    ctx->pc = getRegU32(ctx, 31);
}
