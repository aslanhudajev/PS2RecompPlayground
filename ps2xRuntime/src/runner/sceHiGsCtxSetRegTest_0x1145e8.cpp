#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: ctx+0xe4|=0x100, ctx+0xb8 RMW with 9 params
void sceHiGsCtxSetRegTest_0x1145e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetRegTest_0x1145e8");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t p2 = GPR_U32(ctx, 5) & 1u, p3 = GPR_U32(ctx, 6) & 7u;
    uint32_t p4 = GPR_U32(ctx, 7) & 0xffu, p5 = GPR_U32(ctx, 8) & 3u;
    uint32_t p6 = GPR_U32(ctx, 9) & 1u, p7 = GPR_U32(ctx, 10) & 1u;
    uint32_t p8 = GPR_U32(ctx, 11) & 1u;
    uint32_t sp = GPR_U32(ctx, 29);
    uint32_t p9 = READ32(ADD32(sp, 16u)) & 3u;

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        uint16_t e4;
        std::memcpy(&e4, p + 0xe4, 2);
        e4 |= 0x100u;
        std::memcpy(p + 0xe4, &e4, 2);
        uint64_t vb8;
        std::memcpy(&vb8, p + 0xb8, 8);
        vb8 = (vb8 & 0xfffffffffff80000ULL) | (p2 & 1) | (p3 << 1) | (p4 << 4) |
            (p5 << 12) | (p6 << 14) | (p7 << 15) | (p8 << 16) | (p9 << 17);
        std::memcpy(p + 0xb8, &vb8, 8);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
