#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sprPutTask__11TRankSprPutFv
// Address: 0x2257a0 - 0x225854
void sprPutTask__11TRankSprPutFv_0x2257a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sprPutTask__11TRankSprPutFv");


    ctx->pc = 0x2257a0u;

    // 0x2257a0: 0x27bdffe0
    ctx->pc = 0x2257a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2257a4: 0x7fbf0010
    ctx->pc = 0x2257a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2257a8: 0x7fb00000
    ctx->pc = 0x2257a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2257ac: 0x70808628
    ctx->pc = 0x2257acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2257b0: 0xc085bd8
    ctx->pc = 0x2257B0u;
    SET_GPR_U32(ctx, 31, 0x2257B8u);
    ctx->pc = 0x2257B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257B8u; }
        else if (ctx->pc != 0x2257B8u) { ctx->pc = 0x2257B8u; }
    }
    if (ctx->pc != 0x2257B8u) { return; }
    ctx->pc = 0x2257B8u;
    // 0x2257b8: 0x3c020050
    ctx->pc = 0x2257b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2257bc: 0xc07ce18
    ctx->pc = 0x2257BCu;
    SET_GPR_U32(ctx, 31, 0x2257C4u);
    ctx->pc = 0x2257C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257C4u; }
        else if (ctx->pc != 0x2257C4u) { ctx->pc = 0x2257C4u; }
    }
    if (ctx->pc != 0x2257C4u) { return; }
    ctx->pc = 0x2257C4u;
    // 0x2257c4: 0x1c40001f
    ctx->pc = 0x2257C4u;
    {
        const bool branch_taken_0x2257c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2257c4) {
            ctx->pc = 0x225844u;
            goto label_225844;
        }
    }
    ctx->pc = 0x2257CCu;
    // 0x2257cc: 0x8e040090
    ctx->pc = 0x2257ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2257d0: 0x2483ffff
    ctx->pc = 0x2257d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2257d4: 0x1c80000c
    ctx->pc = 0x2257D4u;
    {
        const bool branch_taken_0x2257d4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2257D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
        if (branch_taken_0x2257d4) {
            ctx->pc = 0x225808u;
            goto label_225808;
        }
    }
    ctx->pc = 0x2257DCu;
    // 0x2257dc: 0x3c02002b
    ctx->pc = 0x2257dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x2257e0: 0x24428cd8
    ctx->pc = 0x2257e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937816));
    // 0x2257e4: 0x8c450008
    ctx->pc = 0x2257e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2257e8: 0x72002628
    ctx->pc = 0x2257e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2257ec: 0x72004628
    ctx->pc = 0x2257ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2257f0: 0x70003628
    ctx->pc = 0x2257f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2257f4: 0x3c02002b
    ctx->pc = 0x2257f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x2257f8: 0xc068f70
    ctx->pc = 0x2257F8u;
    SET_GPR_U32(ctx, 31, 0x225800u);
    ctx->pc = 0x2257FCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294937840));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225800u; }
        else if (ctx->pc != 0x225800u) { ctx->pc = 0x225800u; }
    }
    if (ctx->pc != 0x225800u) { return; }
    ctx->pc = 0x225800u;
    // 0x225800: 0x10000011
    ctx->pc = 0x225800u;
    {
        const bool branch_taken_0x225800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225804u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x225800) {
            ctx->pc = 0x225848u;
            goto label_225848;
        }
    }
    ctx->pc = 0x225808u;
label_225808:
    // 0x225808: 0xc6010074
    ctx->pc = 0x225808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22580c: 0x3c033f80
    ctx->pc = 0x22580cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x225810: 0x44830000
    ctx->pc = 0x225810u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x225814: 0x0
    ctx->pc = 0x225814u;
    // NOP
    // 0x225818: 0x46000834
    ctx->pc = 0x225818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22581c: 0x0
    ctx->pc = 0x22581cu;
    // NOP
    // 0x225820: 0x45000007
    ctx->pc = 0x225820u;
    {
        const bool branch_taken_0x225820 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225824u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
        if (branch_taken_0x225820) {
            ctx->pc = 0x225840u;
            goto label_225840;
        }
    }
    ctx->pc = 0x225828u;
    // 0x225828: 0x3463cccd
    ctx->pc = 0x225828u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x22582c: 0x44830000
    ctx->pc = 0x22582cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x225830: 0x0
    ctx->pc = 0x225830u;
    // NOP
    // 0x225834: 0x46000800
    ctx->pc = 0x225834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225838: 0x10000002
    ctx->pc = 0x225838u;
    {
        const bool branch_taken_0x225838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22583Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        if (branch_taken_0x225838) {
            ctx->pc = 0x225844u;
            goto label_225844;
        }
    }
    ctx->pc = 0x225840u;
label_225840:
    // 0x225840: 0xe6000074
    ctx->pc = 0x225840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_225844:
    // 0x225844: 0x7bbf0010
    ctx->pc = 0x225844u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225848:
    // 0x225848: 0x7bb00000
    ctx->pc = 0x225848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22584c: 0x3e00008
    ctx->pc = 0x22584Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225808u: goto label_225808;
            case 0x225840u: goto label_225840;
            case 0x225844u: goto label_225844;
            case 0x225848u: goto label_225848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225854u;
}
