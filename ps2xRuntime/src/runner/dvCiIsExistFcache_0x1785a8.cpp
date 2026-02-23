#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiIsExistFcache
// Address: 0x1785a8 - 0x1785cc
void dvCiIsExistFcache_0x1785a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiIsExistFcache");


    ctx->pc = 0x1785a8u;

    // 0x1785a8: 0x27bdffc0
    ctx->pc = 0x1785a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1785ac: 0xffbf0030
    ctx->pc = 0x1785acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1785b0: 0xc05e0b6
    ctx->pc = 0x1785B0u;
    SET_GPR_U32(ctx, 31, 0x1785B8u);
    ctx->pc = 0x1785B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1782D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_get_fstate_0x1782d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1785B8u; }
        else if (ctx->pc != 0x1785B8u) { ctx->pc = 0x1785B8u; }
    }
    if (ctx->pc != 0x1785B8u) { return; }
    ctx->pc = 0x1785B8u;
    // 0x1785b8: 0x8fa20000
    ctx->pc = 0x1785b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785bc: 0xdfbf0030
    ctx->pc = 0x1785bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1785c0: 0x2102b
    ctx->pc = 0x1785c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1785c4: 0x3e00008
    ctx->pc = 0x1785C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1785CCu;
}
