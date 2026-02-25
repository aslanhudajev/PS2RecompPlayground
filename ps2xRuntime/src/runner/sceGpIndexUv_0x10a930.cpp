#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: (p&8)? n*3 : (p&0x800)? n<<1 : table lookup
void sceGpIndexUv_0x10a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpIndexUv_0x10a930");
#endif
    (void)runtime;
    uint32_t p = getRegU32(ctx, 4);
    int32_t n = (int32_t)getRegU32(ctx, 5);
    int32_t r;
    if ((p & 8u) != 0u) {
        r = n * 3;
    } else if ((p & 0x800u) != 0u) {
        r = n << 1;
    } else {
        int32_t tbl_a = (int32_t)FAST_READ32(0x21cf08u + (p & 7u) * 12u + 0u);
        int32_t tbl_b = (int32_t)FAST_READ32(0x21cf08u + (p & 7u) * 12u + 4u);
        int32_t tbl_c = (int32_t)FAST_READ32(0x21cf08u + (p & 7u) * 12u + 8u);
        r = (tbl_c != 0) ? (n * tbl_a + tbl_b) / tbl_c : n;
    }
    setReturnU32(ctx, (uint32_t)r);
    ctx->pc = getRegU32(ctx, 31);
}
