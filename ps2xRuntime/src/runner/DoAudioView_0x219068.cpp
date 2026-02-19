#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAudioView
// Address: 0x219068 - 0x2190fc
void DoAudioView_0x219068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x219068u;

    // 0x219068: 0x27bdfff0
    ctx->pc = 0x219068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21906c: 0xffbf0000
    ctx->pc = 0x21906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219070: 0x3c020032
    ctx->pc = 0x219070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x219074: 0x8c43fd6c
    ctx->pc = 0x219074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x219078: 0x3c02003c
    ctx->pc = 0x219078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21907c: 0x8c44d558
    ctx->pc = 0x21907cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956376)));
    // 0x219080: 0x8c63000c
    ctx->pc = 0x219080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x219084: 0x24022494
    ctx->pc = 0x219084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9364));
    // 0x219088: 0x822018
    ctx->pc = 0x219088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21908c: 0x832021
    ctx->pc = 0x21908cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219090: 0x3c02003c
    ctx->pc = 0x219090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x219094: 0x8c45d564
    ctx->pc = 0x219094u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294956388)));
    // 0x219098: 0x52880
    ctx->pc = 0x219098u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x21909c: 0x3c02003c
    ctx->pc = 0x21909cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2190a0: 0x8c42d55c
    ctx->pc = 0x2190a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956380)));
    // 0x2190a4: 0x24030124
    ctx->pc = 0x2190a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 292));
    // 0x2190a8: 0x431018
    ctx->pc = 0x2190a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2190ac: 0xa22821
    ctx->pc = 0x2190acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2190b0: 0x852021
    ctx->pc = 0x2190b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2190b4: 0x8c850030
    ctx->pc = 0x2190b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2190b8: 0x3c02003c
    ctx->pc = 0x2190b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2190bc: 0x52c00
    ctx->pc = 0x2190bcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2190c0: 0x8c46d560
    ctx->pc = 0x2190c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
    // 0x2190c4: 0x3c02003c
    ctx->pc = 0x2190c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2190c8: 0x3c03003c
    ctx->pc = 0x2190c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2190cc: 0x3c08003c
    ctx->pc = 0x2190ccu;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
    // 0x2190d0: 0x3c09003c
    ctx->pc = 0x2190d0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)60 << 16));
    // 0x2190d4: 0x8c44d57c
    ctx->pc = 0x2190d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956412)));
    // 0x2190d8: 0xa62825
    ctx->pc = 0x2190d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2190dc: 0x8c66d570
    ctx->pc = 0x2190dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294956400)));
    // 0x2190e0: 0x382d
    ctx->pc = 0x2190e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2190e4: 0x8d08d574
    ctx->pc = 0x2190e4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 4294956404)));
    // 0x2190e8: 0xc088958
    ctx->pc = 0x2190E8u;
    SET_GPR_U32(ctx, 31, 0x2190F0u);
    ctx->pc = 0x2190ECu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4294956416)));
    ctx->pc = 0x222560u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrack4_0x222560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2190F0u; }
    }
    if (ctx->pc != 0x2190F0u) { return; }
    ctx->pc = 0x2190F0u;
    // 0x2190f0: 0xdfbf0000
    ctx->pc = 0x2190f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2190f4: 0x3e00008
    ctx->pc = 0x2190F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2190F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2190FCu;
}
