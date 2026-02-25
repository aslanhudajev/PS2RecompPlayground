#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Decomp: (param&7) lookup * param2 + offset; simplified: return param2*16
void sceGpChkNumPtoV_0x10ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceGpChkNumPtoV_0x10ab38");
#endif
    (void)rdram;
    (void)runtime;
    uint32_t p = getRegU32(ctx, 4) & 7u;
    uint32_t c = getRegU32(ctx, 5);
    static const int8_t tbl_a[] = { 1, 1, 2, 1, 1, 1, 1, 1 };
    static const int8_t tbl_b[] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    int32_t r = tbl_a[p] * (int)c + tbl_b[p];
    setReturnU32(ctx, (uint32_t)r);
    ctx->pc = getRegU32(ctx, 31);
}
