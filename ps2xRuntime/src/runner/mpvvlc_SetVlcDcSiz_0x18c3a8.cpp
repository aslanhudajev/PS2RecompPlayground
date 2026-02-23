#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_SetVlcDcSiz
// Address: 0x18c3a8 - 0x18c408
void mpvvlc_SetVlcDcSiz_0x18c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_SetVlcDcSiz");


    ctx->pc = 0x18c3a8u;

    // 0x18c3a8: 0x27bdffe0
    ctx->pc = 0x18c3a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18c3ac: 0x3c020024
    ctx->pc = 0x18c3acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c3b0: 0xffb00000
    ctx->pc = 0x18c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c3b4: 0x3c050024
    ctx->pc = 0x18c3b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c3b8: 0x2490ff80
    ctx->pc = 0x18c3b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x18c3bc: 0xffbf0010
    ctx->pc = 0x18c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18c3c0: 0xac501a54
    ctx->pc = 0x18c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6740), GPR_U32(ctx, 16));
    // 0x18c3c4: 0x200202d
    ctx->pc = 0x18c3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3c8: 0x24a52578
    ctx->pc = 0x18c3c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9592));
    // 0x18c3cc: 0xc0601b2
    ctx->pc = 0x18C3CCu;
    SET_GPR_U32(ctx, 31, 0x18C3D4u);
    ctx->pc = 0x18C3D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3D4u; }
        else if (ctx->pc != 0x18C3D4u) { ctx->pc = 0x18C3D4u; }
    }
    if (ctx->pc != 0x18C3D4u) { return; }
    ctx->pc = 0x18C3D4u;
    // 0x18c3d4: 0x2610ff80
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x18c3d8: 0x3c020024
    ctx->pc = 0x18c3d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c3dc: 0x3c050024
    ctx->pc = 0x18c3dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c3e0: 0xac501a58
    ctx->pc = 0x18c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6744), GPR_U32(ctx, 16));
    // 0x18c3e4: 0x200202d
    ctx->pc = 0x18c3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3e8: 0x24a525f8
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9720));
    // 0x18c3ec: 0xc0601b2
    ctx->pc = 0x18C3ECu;
    SET_GPR_U32(ctx, 31, 0x18C3F4u);
    ctx->pc = 0x18C3F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3F4u; }
        else if (ctx->pc != 0x18C3F4u) { ctx->pc = 0x18C3F4u; }
    }
    if (ctx->pc != 0x18C3F4u) { return; }
    ctx->pc = 0x18C3F4u;
    // 0x18c3f4: 0x200102d
    ctx->pc = 0x18c3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3f8: 0xdfbf0010
    ctx->pc = 0x18c3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c3fc: 0xdfb00000
    ctx->pc = 0x18c3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c400: 0x3e00008
    ctx->pc = 0x18C400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C408u;
}
