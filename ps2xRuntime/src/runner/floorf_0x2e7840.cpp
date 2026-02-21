#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: floorf
// Address: 0x2e7840 - 0x2e7924
void floorf_0x2e7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e7840u;

    // 0x2e7840: 0x44026000
    ctx->pc = 0x2e7840u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x2e7844: 0x40202d
    ctx->pc = 0x2e7844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7848: 0x415c3
    ctx->pc = 0x2e7848u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x2e784c: 0x304200ff
    ctx->pc = 0x2e784cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x2e7850: 0x2445ff81
    ctx->pc = 0x2e7850u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x2e7854: 0x28a30017
    ctx->pc = 0x2e7854u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 23));
    // 0x2e7858: 0x5060002b
    ctx->pc = 0x2E7858u;
    {
        const bool branch_taken_0x2e7858 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2e7858) {
            ctx->pc = 0x2E785Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
            ctx->pc = 0x2E7908u;
            goto label_2e7908;
        }
    }
    ctx->pc = 0x2E7860u;
    // 0x2e7860: 0x4a30012
    ctx->pc = 0x2E7860u;
    {
        const bool branch_taken_0x2e7860 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2e7860) {
            ctx->pc = 0x2E7864u;
            SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
            ctx->pc = 0x2E78ACu;
            goto label_2e78ac;
        }
    }
    ctx->pc = 0x2E7868u;
    // 0x2e7868: 0x3c017149
    ctx->pc = 0x2e7868u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x2e786c: 0x3421f2ca
    ctx->pc = 0x2e786cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x2e7870: 0x44810000
    ctx->pc = 0x2e7870u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e7874: 0x44800800
    ctx->pc = 0x2e7874u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2e7878: 0x46006000
    ctx->pc = 0x2e7878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2e787c: 0x46000834
    ctx->pc = 0x2e787cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7880: 0x45000025
    ctx->pc = 0x2E7880u;
    {
        const bool branch_taken_0x2e7880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7880) {
            ctx->pc = 0x2E7918u;
            goto label_2e7918;
        }
    }
    ctx->pc = 0x2E7888u;
    // 0x2e7888: 0x4800003
    ctx->pc = 0x2E7888u;
    {
        const bool branch_taken_0x2e7888 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E788Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x2e7888) {
            ctx->pc = 0x2E7898u;
            goto label_2e7898;
        }
    }
    ctx->pc = 0x2E7890u;
    // 0x2e7890: 0x10000021
    ctx->pc = 0x2E7890u;
    {
        const bool branch_taken_0x2e7890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7894u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2e7890) {
            ctx->pc = 0x2E7918u;
            goto label_2e7918;
        }
    }
    ctx->pc = 0x2E7898u;
label_2e7898:
    // 0x2e7898: 0x3c03bf80
    ctx->pc = 0x2e7898u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x2e789c: 0x3442ffff
    ctx->pc = 0x2e789cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e78a0: 0x821024
    ctx->pc = 0x2e78a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e78a4: 0x1000001c
    ctx->pc = 0x2E78A4u;
    {
        const bool branch_taken_0x2e78a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E78A8u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x2e78a4) {
            ctx->pc = 0x2E7918u;
            goto label_2e7918;
        }
    }
    ctx->pc = 0x2E78ACu;
label_2e78ac:
    // 0x2e78ac: 0x3442ffff
    ctx->pc = 0x2e78acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2e78b0: 0xa23007
    ctx->pc = 0x2e78b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e78b4: 0x861824
    ctx->pc = 0x2e78b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2e78b8: 0x14600003
    ctx->pc = 0x2E78B8u;
    {
        const bool branch_taken_0x2e78b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2e78b8) {
            ctx->pc = 0x2E78C8u;
            goto label_2e78c8;
        }
    }
    ctx->pc = 0x2E78C0u;
label_2e78c0:
    // 0x2e78c0: 0x3e00008
    ctx->pc = 0x2E78C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E78C4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7898u: goto label_2e7898;
            case 0x2E78ACu: goto label_2e78ac;
            case 0x2E78C0u: goto label_2e78c0;
            case 0x2E78C8u: goto label_2e78c8;
            case 0x2E7900u: goto label_2e7900;
            case 0x2E7908u: goto label_2e7908;
            case 0x2E7918u: goto label_2e7918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E78C8u;
label_2e78c8:
    // 0x2e78c8: 0x3c017149
    ctx->pc = 0x2e78c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x2e78cc: 0x3421f2ca
    ctx->pc = 0x2e78ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x2e78d0: 0x44810000
    ctx->pc = 0x2e78d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2e78d4: 0x44800800
    ctx->pc = 0x2e78d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2e78d8: 0x46006000
    ctx->pc = 0x2e78d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2e78dc: 0x46000834
    ctx->pc = 0x2e78dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e78e0: 0x4500000d
    ctx->pc = 0x2E78E0u;
    {
        const bool branch_taken_0x2e78e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e78e0) {
            ctx->pc = 0x2E7918u;
            goto label_2e7918;
        }
    }
    ctx->pc = 0x2E78E8u;
    // 0x2e78e8: 0x4810005
    ctx->pc = 0x2E78E8u;
    {
        const bool branch_taken_0x2e78e8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2E78ECu;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x2e78e8) {
            ctx->pc = 0x2E7900u;
            goto label_2e7900;
        }
    }
    ctx->pc = 0x2E78F0u;
    // 0x2e78f0: 0x3c020080
    ctx->pc = 0x2e78f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x2e78f4: 0xa21007
    ctx->pc = 0x2e78f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2e78f8: 0x822021
    ctx->pc = 0x2e78f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e78fc: 0x61027
    ctx->pc = 0x2e78fcu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_2e7900:
    // 0x2e7900: 0x10000005
    ctx->pc = 0x2E7900u;
    {
        const bool branch_taken_0x2e7900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2E7904u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x2e7900) {
            ctx->pc = 0x2E7918u;
            goto label_2e7918;
        }
    }
    ctx->pc = 0x2E7908u;
label_2e7908:
    // 0x2e7908: 0x14a2ffed
    ctx->pc = 0x2E7908u;
    {
        const bool branch_taken_0x2e7908 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2e7908) {
            ctx->pc = 0x2E78C0u;
            goto label_2e78c0;
        }
    }
    ctx->pc = 0x2E7910u;
    // 0x2e7910: 0x3e00008
    ctx->pc = 0x2E7910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7914u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7898u: goto label_2e7898;
            case 0x2E78ACu: goto label_2e78ac;
            case 0x2E78C0u: goto label_2e78c0;
            case 0x2E78C8u: goto label_2e78c8;
            case 0x2E7900u: goto label_2e7900;
            case 0x2E7908u: goto label_2e7908;
            case 0x2E7918u: goto label_2e7918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E7918u;
label_2e7918:
    // 0x2e7918: 0x44846000
    ctx->pc = 0x2e7918u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 4);
    // 0x2e791c: 0x3e00008
    ctx->pc = 0x2E791Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7920u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7898u: goto label_2e7898;
            case 0x2E78ACu: goto label_2e78ac;
            case 0x2E78C0u: goto label_2e78c0;
            case 0x2E78C8u: goto label_2e78c8;
            case 0x2E7900u: goto label_2e7900;
            case 0x2E7908u: goto label_2e7908;
            case 0x2E7918u: goto label_2e7918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E7924u;
}
