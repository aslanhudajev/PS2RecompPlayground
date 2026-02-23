#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: copysign
// Address: 0x1445d8 - 0x14461c
void copysign_0x1445d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("copysign");


    ctx->pc = 0x1445d8u;

    // 0x1445d8: 0x80102d
    ctx->pc = 0x1445d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445dc: 0x2103f
    ctx->pc = 0x1445dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1445e0: 0x5283f
    ctx->pc = 0x1445e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1445e4: 0x80302d
    ctx->pc = 0x1445e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445e8: 0x3c037fff
    ctx->pc = 0x1445e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x1445ec: 0x3c048000
    ctx->pc = 0x1445ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1445f0: 0x3463ffff
    ctx->pc = 0x1445f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1445f4: 0xa42824
    ctx->pc = 0x1445f4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1445f8: 0x431024
    ctx->pc = 0x1445f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1445fc: 0x3c04ffff
    ctx->pc = 0x1445fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x144600: 0x4203e
    ctx->pc = 0x144600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x144604: 0x451025
    ctx->pc = 0x144604u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x144608: 0xc43024
    ctx->pc = 0x144608u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14460c: 0x2103c
    ctx->pc = 0x14460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144610: 0xc22025
    ctx->pc = 0x144610u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x144614: 0x3e00008
    ctx->pc = 0x144614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144618u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14461Cu;
}
