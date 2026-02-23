#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isnanf
// Address: 0x144968 - 0x14498c
void isnanf_0x144968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isnanf");


    ctx->pc = 0x144968u;

    // 0x144968: 0x44036000
    ctx->pc = 0x144968u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[12]);
    // 0x14496c: 0x60102d
    ctx->pc = 0x14496cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144970: 0x3c047fff
    ctx->pc = 0x144970u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32767 << 16));
    // 0x144974: 0x3484ffff
    ctx->pc = 0x144974u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x144978: 0x3c037f80
    ctx->pc = 0x144978u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32640 << 16));
    // 0x14497c: 0x441024
    ctx->pc = 0x14497cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x144980: 0x621023
    ctx->pc = 0x144980u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144984: 0x3e00008
    ctx->pc = 0x144984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144988u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14498Cu;
}
