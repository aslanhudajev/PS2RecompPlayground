#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_IsExistFcacheDvd
// Address: 0x1713a8 - 0x1713c4
void ADXPS2_IsExistFcacheDvd_0x1713a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_IsExistFcacheDvd");


    ctx->pc = 0x1713a8u;

    // 0x1713a8: 0x27bdfff0
    ctx->pc = 0x1713a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1713ac: 0xffbf0000
    ctx->pc = 0x1713acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1713b0: 0xc05e16a
    ctx->pc = 0x1713B0u;
    SET_GPR_U32(ctx, 31, 0x1713B8u);
    ctx->pc = 0x1785A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiIsExistFcache_0x1785a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713B8u; }
        else if (ctx->pc != 0x1713B8u) { ctx->pc = 0x1713B8u; }
    }
    if (ctx->pc != 0x1713B8u) { return; }
    ctx->pc = 0x1713B8u;
    // 0x1713b8: 0xdfbf0000
    ctx->pc = 0x1713b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1713bc: 0x3e00008
    ctx->pc = 0x1713BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1713C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1713C4u;
}
