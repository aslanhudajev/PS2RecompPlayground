#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutForEntry__12EvCancelTaskFv
// Address: 0x1e53e0 - 0x1e546c
void PutForEntry__12EvCancelTaskFv_0x1e53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutForEntry__12EvCancelTaskFv");


    ctx->pc = 0x1e53e0u;

    // 0x1e53e0: 0x27bdffa0
    ctx->pc = 0x1e53e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e53e4: 0x7fbf0000
    ctx->pc = 0x1e53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e53e8: 0x3c010050
    ctx->pc = 0x1e53e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e53ec: 0x8024fec5
    ctx->pc = 0x1e53ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1e53f0: 0x3c020027
    ctx->pc = 0x1e53f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e53f4: 0x2443a910
    ctx->pc = 0x1e53f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294945040));
    // 0x1e53f8: 0x3c023c44
    ctx->pc = 0x1e53f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15428 << 16));
    // 0x1e53fc: 0x34469ba6
    ctx->pc = 0x1e53fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 39846));
    // 0x1e5400: 0x3c0843b0
    ctx->pc = 0x1e5400u;
    SET_GPR_U32(ctx, 8, ((uint32_t)17328 << 16));
    // 0x1e5404: 0x42080
    ctx->pc = 0x1e5404u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e5408: 0x641821
    ctx->pc = 0x1e5408u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e540c: 0x8c690000
    ctx->pc = 0x1e540cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5410: 0x3c074100
    ctx->pc = 0x1e5410u;
    SET_GPR_U32(ctx, 7, ((uint32_t)16640 << 16));
    // 0x1e5414: 0x3c053f80
    ctx->pc = 0x1e5414u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1e5418: 0x24022000
    ctx->pc = 0x1e5418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1e541c: 0x27a40010
    ctx->pc = 0x1e541cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e5420: 0xafa90058
    ctx->pc = 0x1e5420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 9));
    // 0x1e5424: 0xafa8001c
    ctx->pc = 0x1e5424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x1e5428: 0xafa70020
    ctx->pc = 0x1e5428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x1e542c: 0xafa60024
    ctx->pc = 0x1e542cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x1e5430: 0xafa50028
    ctx->pc = 0x1e5430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1e5434: 0xafa5002c
    ctx->pc = 0x1e5434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x1e5438: 0xafa00034
    ctx->pc = 0x1e5438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1e543c: 0xafa00030
    ctx->pc = 0x1e543cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1e5440: 0xafa5003c
    ctx->pc = 0x1e5440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x1e5444: 0xafa50038
    ctx->pc = 0x1e5444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1e5448: 0xafa00040
    ctx->pc = 0x1e5448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1e544c: 0x2403ffff
    ctx->pc = 0x1e544cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5450: 0xafa50044
    ctx->pc = 0x1e5450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x1e5454: 0xafa30048
    ctx->pc = 0x1e5454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1e5458: 0xc085bd8
    ctx->pc = 0x1E5458u;
    SET_GPR_U32(ctx, 31, 0x1E5460u);
    ctx->pc = 0x1E545Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5460u; }
        else if (ctx->pc != 0x1E5460u) { ctx->pc = 0x1E5460u; }
    }
    if (ctx->pc != 0x1E5460u) { return; }
    ctx->pc = 0x1E5460u;
    // 0x1e5460: 0x7bbf0000
    ctx->pc = 0x1e5460u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5464: 0x3e00008
    ctx->pc = 0x1E5464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E546Cu;
}
