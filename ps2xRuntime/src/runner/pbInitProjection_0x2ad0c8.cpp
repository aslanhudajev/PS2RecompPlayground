#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitProjection
// Address: 0x2ad0c8 - 0x2ad148
void pbInitProjection_0x2ad0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad0c8u;

    // 0x2ad0c8: 0x27bdfff0
    ctx->pc = 0x2ad0c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad0cc: 0xffbf0000
    ctx->pc = 0x2ad0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad0d0: 0x3c020036
    ctx->pc = 0x2ad0d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad0d4: 0x8c43dee0
    ctx->pc = 0x2ad0d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad0d8: 0x8c620004
    ctx->pc = 0x2ad0d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ad0dc: 0x14400004
    ctx->pc = 0x2AD0DCu;
    {
        const bool branch_taken_0x2ad0dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ad0dc) {
            ctx->pc = 0x2AD0F0u;
            goto label_2ad0f0;
        }
    }
    ctx->pc = 0x2AD0E4u;
    // 0x2ad0e4: 0x8c620018
    ctx->pc = 0x2ad0e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ad0e8: 0x8c420000
    ctx->pc = 0x2ad0e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad0ec: 0xac620004
    ctx->pc = 0x2ad0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2ad0f0:
    // 0x2ad0f0: 0x44806000
    ctx->pc = 0x2ad0f0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2ad0f4: 0x46006346
    ctx->pc = 0x2ad0f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad0f8: 0x46006386
    ctx->pc = 0x2ad0f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad0fc: 0xc0aae00
    ctx->pc = 0x2AD0FCu;
    SET_GPR_U32(ctx, 31, 0x2AD104u);
    ctx->pc = 0x2AD100u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2AB800u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowViewport_0x2ab800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD104u; }
    }
    if (ctx->pc != 0x2AD104u) { return; }
    ctx->pc = 0x2AD104u;
    // 0x2ad104: 0x3c0142b4
    ctx->pc = 0x2ad104u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17076 << 16));
    // 0x2ad108: 0x44816000
    ctx->pc = 0x2ad108u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2ad10c: 0x3c013f80
    ctx->pc = 0x2ad10cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ad110: 0x44816800
    ctx->pc = 0x2ad110u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2ad114: 0xc0aae0e
    ctx->pc = 0x2AD114u;
    SET_GPR_U32(ctx, 31, 0x2AD11Cu);
    ctx->pc = 0x2AB838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowProjection_0x2ab838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD11Cu; }
    }
    if (ctx->pc != 0x2AD11Cu) { return; }
    ctx->pc = 0x2AD11Cu;
    // 0x2ad11c: 0x3c0144ff
    ctx->pc = 0x2ad11cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17663 << 16));
    // 0x2ad120: 0x3421e000
    ctx->pc = 0x2ad120u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 57344));
    // 0x2ad124: 0x44816000
    ctx->pc = 0x2ad124u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2ad128: 0x46006346
    ctx->pc = 0x2ad128u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ad12c: 0x3c013f80
    ctx->pc = 0x2ad12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ad130: 0x44817000
    ctx->pc = 0x2ad130u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2ad134: 0x3c014780
    ctx->pc = 0x2ad134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18304 << 16));
    // 0x2ad138: 0x44817800
    ctx->pc = 0x2ad138u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2ad13c: 0xdfbf0000
    ctx->pc = 0x2ad13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad140: 0x80aae1e
    ctx->pc = 0x2AD140u;
    ctx->pc = 0x2AD144u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2AB878u;
    MBWindowClip_0x2ab878(rdram, ctx, runtime); return;
    ctx->pc = 0x2AD148u;
}
