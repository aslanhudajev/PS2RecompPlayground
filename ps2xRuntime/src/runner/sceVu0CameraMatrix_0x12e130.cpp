#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cmath>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: UnitMatrix, OuterProduct, Normalize, TransMatrix, InversMatrix
// Build view matrix from pos(param2), forward(param3), up(param4)
void sceVu0CameraMatrix_0x12e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceVu0CameraMatrix_0x12e130");
#endif
    (void)runtime;
    const uint32_t dstAddr = getRegU32(ctx, 4);
    const uint32_t posAddr = getRegU32(ctx, 5);
    const uint32_t fwdAddr = getRegU32(ctx, 6);
    const uint32_t upAddr = getRegU32(ctx, 7);
    const uint8_t* pp = getConstMemPtr(rdram, posAddr);
    const uint8_t* pf = getConstMemPtr(rdram, fwdAddr);
    const uint8_t* pu = getConstMemPtr(rdram, upAddr);
    uint8_t* pd = getMemPtr(rdram, dstAddr);
    if (!pp || !pf || !pu || !pd) { ctx->pc = getRegU32(ctx, 31); return; }
    float pos[4], fwd[4], up[4];
    std::memcpy(pos, pp, 16);
    std::memcpy(fwd, pf, 16);
    std::memcpy(up, pu, 16);
    float z[4] = {fwd[0], fwd[1], fwd[2], 0.0f};
    float lz = std::sqrt(z[0]*z[0] + z[1]*z[1] + z[2]*z[2]);
    if (lz > 1e-6f) { float ilz = 1.0f/lz; z[0]*=ilz; z[1]*=ilz; z[2]*=ilz; }
    float x[4] = {up[1]*z[2]-up[2]*z[1], up[2]*z[0]-up[0]*z[2], up[0]*z[1]-up[1]*z[0], 0.0f};
    float lx = std::sqrt(x[0]*x[0] + x[1]*x[1] + x[2]*x[2]);
    if (lx > 1e-6f) { float ilx = 1.0f/lx; x[0]*=ilx; x[1]*=ilx; x[2]*=ilx; }
    float y[4] = {z[1]*x[2]-z[2]*x[1], z[2]*x[0]-z[0]*x[2], z[0]*x[1]-z[1]*x[0], 0.0f};
    float m[4][4] = {
        {x[0], y[0], z[0], 0},
        {x[1], y[1], z[1], 0},
        {x[2], y[2], z[2], 0},
        {-x[0]*pos[0]-x[1]*pos[1]-x[2]*pos[2],
         -y[0]*pos[0]-y[1]*pos[1]-y[2]*pos[2],
         -z[0]*pos[0]-z[1]*pos[1]-z[2]*pos[2], 1}
    };
    std::memcpy(pd, m, 64);
    ctx->pc = getRegU32(ctx, 31);
}
