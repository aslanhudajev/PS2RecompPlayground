#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setPrimAlpha
// Address: 0x2bf080 - 0x2bf0ec
void setPrimAlpha_0x2bf080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bf080u;

    // 0x2bf080: 0x3c020010
    ctx->pc = 0x2bf080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x2bf084: 0x34420600
    ctx->pc = 0x2bf084u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1536));
    // 0x2bf088: 0xa22824
    ctx->pc = 0x2bf088u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bf08c: 0x10a0000c
    ctx->pc = 0x2BF08Cu;
    {
        const bool branch_taken_0x2bf08c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bf08c) {
            ctx->pc = 0x2BF0C0u;
            goto label_2bf0c0;
        }
    }
    ctx->pc = 0x2BF094u;
    // 0x2bf094: 0x90c20053
    ctx->pc = 0x2bf094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 83)));
    // 0x2bf098: 0x44820000
    ctx->pc = 0x2bf098u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bf09c: 0x46800020
    ctx->pc = 0x2bf09cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bf0a0: 0x3c013f00
    ctx->pc = 0x2bf0a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2bf0a4: 0x34218081
    ctx->pc = 0x2bf0a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x2bf0a8: 0x44810800
    ctx->pc = 0x2bf0a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2bf0ac: 0x46010002
    ctx->pc = 0x2bf0acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bf0b0: 0xe480001c
    ctx->pc = 0x2bf0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2bf0b4: 0x8c820074
    ctx->pc = 0x2bf0b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2bf0b8: 0x10000008
    ctx->pc = 0x2BF0B8u;
    {
        const bool branch_taken_0x2bf0b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BF0BCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x2bf0b8) {
            ctx->pc = 0x2BF0DCu;
            goto label_2bf0dc;
        }
    }
    ctx->pc = 0x2BF0C0u;
label_2bf0c0:
    // 0x2bf0c0: 0x3c014300
    ctx->pc = 0x2bf0c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17152 << 16));
    // 0x2bf0c4: 0x44810000
    ctx->pc = 0x2bf0c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2bf0c8: 0xe480001c
    ctx->pc = 0x2bf0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2bf0cc: 0x8c820074
    ctx->pc = 0x2bf0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2bf0d0: 0x3c03ffff
    ctx->pc = 0x2bf0d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bf0d4: 0x3463ffef
    ctx->pc = 0x2bf0d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65519));
    // 0x2bf0d8: 0x431024
    ctx->pc = 0x2bf0d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bf0dc:
    // 0x2bf0dc: 0xac820074
    ctx->pc = 0x2bf0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x2bf0e0: 0x24020004
    ctx->pc = 0x2bf0e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bf0e4: 0x3e00008
    ctx->pc = 0x2BF0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF0E8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BF0C0u: goto label_2bf0c0;
            case 0x2BF0DCu: goto label_2bf0dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BF0ECu;
}
