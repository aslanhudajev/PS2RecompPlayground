#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stream_volume
// Address: 0x224058 - 0x2240b4
void aud_stream_volume_0x224058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224058u;

    // 0x224058: 0x27bdfff0
    ctx->pc = 0x224058u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22405c: 0xffbf0000
    ctx->pc = 0x22405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224060: 0x3c06003c
    ctx->pc = 0x224060u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x224064: 0x24c61000
    ctx->pc = 0x224064u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4096));
    // 0x224068: 0x3c070032
    ctx->pc = 0x224068u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x22406c: 0x8ce306f8
    ctx->pc = 0x22406cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 1784)));
    // 0x224070: 0x31080
    ctx->pc = 0x224070u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224074: 0x461021
    ctx->pc = 0x224074u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x224078: 0x240555ab
    ctx->pc = 0x224078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 21931));
    // 0x22407c: 0xac450000
    ctx->pc = 0x22407cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x224080: 0x24630001
    ctx->pc = 0x224080u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x224084: 0x31080
    ctx->pc = 0x224084u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x224088: 0x461021
    ctx->pc = 0x224088u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22408c: 0x3c05ffff
    ctx->pc = 0x22408cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x224090: 0x852025
    ctx->pc = 0x224090u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x224094: 0xac440000
    ctx->pc = 0x224094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x224098: 0x24630001
    ctx->pc = 0x224098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x22409c: 0xc088d72
    ctx->pc = 0x22409Cu;
    SET_GPR_U32(ctx, 31, 0x2240A4u);
    ctx->pc = 0x2240A0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1784), GPR_U32(ctx, 3));
    ctx->pc = 0x2235C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_flush_0x2235c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240A4u; }
    }
    if (ctx->pc != 0x2240A4u) { return; }
    ctx->pc = 0x2240A4u;
    // 0x2240a4: 0x102d
    ctx->pc = 0x2240a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2240a8: 0xdfbf0000
    ctx->pc = 0x2240a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2240ac: 0x3e00008
    ctx->pc = 0x2240ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2240B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2240B4u;
}
