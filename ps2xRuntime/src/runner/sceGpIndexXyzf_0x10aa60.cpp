#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: table lookup or param_2<<1|1, param_2*3+2, param_2
void sceGpIndexXyzf_0x10aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpIndexXyzf_0x10aa60");
#endif
    (void)runtime;
    uint32_t p = getRegU32(ctx, 4);
    uint32_t n = getRegU32(ctx, 5);
    uint32_t r;
    if ((p & 8u) != 0u) {
        if ((p & 0x10u) != 0u)
            r = n * 3u + 2u;
        else
            r = (n << 1u) | 1u;
    } else if ((p & 0x800u) != 0u) {
        if ((p & 0x10u) != 0u)
            r = (n << 1u) | 1u;
        else
            r = n;
    } else if ((p & 0x10u) == 0u) {
        int32_t tbl_a = (int32_t)FAST_READ32(0x21ce68u + (p & 7u) * 12u + 0u);
        int32_t tbl_b = (int32_t)FAST_READ32(0x21ce68u + (p & 7u) * 12u + 4u);
        int32_t tbl_c = (int32_t)FAST_READ32(0x21ce68u + (p & 7u) * 12u + 8u);
        r = (tbl_c != 0) ? (uint32_t)((int)n * tbl_a + tbl_b) / (uint32_t)tbl_c : n;
    } else if ((p & 0x100u) != 0u) {
        int32_t tbl_a = (int32_t)FAST_READ32(0x21cec8u + (p & 7u) * 12u + 0u);
        int32_t tbl_b = (int32_t)FAST_READ32(0x21cec8u + (p & 7u) * 12u + 4u);
        int32_t tbl_c = (int32_t)FAST_READ32(0x21cec8u + (p & 7u) * 12u + 8u);
        r = (tbl_c != 0) ? (uint32_t)((int)n * tbl_a + tbl_b) / (uint32_t)tbl_c : n;
    } else {
        r = (n << 1u) | 1u;
    }
    setReturnU32(ctx, r);
    ctx->pc = getRegU32(ctx, 31);
}
