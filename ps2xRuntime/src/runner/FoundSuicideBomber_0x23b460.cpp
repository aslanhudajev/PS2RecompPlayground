#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FoundSuicideBomber
// Address: 0x23b460 - 0x23b588
void FoundSuicideBomber_0x23b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23b460u;

    // 0x23b460: 0x80382d
    ctx->pc = 0x23b460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b464: 0x240303b0
    ctx->pc = 0x23b464u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23b468: 0xe31818
    ctx->pc = 0x23b468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23b46c: 0x3c020033
    ctx->pc = 0x23b46cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23b470: 0x2442dfd0
    ctx->pc = 0x23b470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23b474: 0x622821
    ctx->pc = 0x23b474u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b478: 0x3c020033
    ctx->pc = 0x23b478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23b47c: 0x8c424638
    ctx->pc = 0x23b47cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x23b480: 0x4400019
    ctx->pc = 0x23B480u;
    {
        const bool branch_taken_0x23b480 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23B484u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x23b480) {
            ctx->pc = 0x23B4E8u;
            goto label_23b4e8;
        }
    }
    ctx->pc = 0x23B488u;
    // 0x23b488: 0x3c040033
    ctx->pc = 0x23b488u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x23b48c: 0x2484dfd0
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959056));
    // 0x23b490: 0x3c020033
    ctx->pc = 0x23b490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23b494: 0x8c424638
    ctx->pc = 0x23b494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x23b498: 0x240303b0
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23b49c: 0x431018
    ctx->pc = 0x23b49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23b4a0: 0x441021
    ctx->pc = 0x23b4a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b4a4: 0x8c4300c8
    ctx->pc = 0x23b4a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x23b4a8: 0x24020001
    ctx->pc = 0x23b4a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b4ac: 0x14620034
    ctx->pc = 0x23B4ACu;
    {
        const bool branch_taken_0x23b4ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23B4B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b4ac) {
            ctx->pc = 0x23B580u;
            goto label_23b580;
        }
    }
    ctx->pc = 0x23B4B4u;
    // 0x23b4b4: 0x3c040033
    ctx->pc = 0x23b4b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x23b4b8: 0x2484dfd0
    ctx->pc = 0x23b4b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959056));
    // 0x23b4bc: 0x3c020033
    ctx->pc = 0x23b4bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23b4c0: 0x8c424638
    ctx->pc = 0x23b4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x23b4c4: 0x240303b0
    ctx->pc = 0x23b4c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23b4c8: 0x431018
    ctx->pc = 0x23b4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23b4cc: 0x441021
    ctx->pc = 0x23b4ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23b4d0: 0xc4410290
    ctx->pc = 0x23b4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b4d4: 0xc4a00314
    ctx->pc = 0x23b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b4d8: 0x46010034
    ctx->pc = 0x23b4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b4dc: 0x0
    ctx->pc = 0x23b4dcu;
    // NOP
    // 0x23b4e0: 0x45000003
    ctx->pc = 0x23B4E0u;
    {
        const bool branch_taken_0x23b4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B4E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23b4e0) {
            ctx->pc = 0x23B4F0u;
            goto label_23b4f0;
        }
    }
    ctx->pc = 0x23B4E8u;
label_23b4e8:
    // 0x23b4e8: 0x10000025
    ctx->pc = 0x23B4E8u;
    {
        const bool branch_taken_0x23b4e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B4ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b4e8) {
            ctx->pc = 0x23B580u;
            goto label_23b580;
        }
    }
    ctx->pc = 0x23B4F0u;
label_23b4f0:
    // 0x23b4f0: 0x8c464638
    ctx->pc = 0x23b4f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x23b4f4: 0x10e60022
    ctx->pc = 0x23B4F4u;
    {
        const bool branch_taken_0x23b4f4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 6));
        ctx->pc = 0x23B4F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b4f4) {
            ctx->pc = 0x23B580u;
            goto label_23b580;
        }
    }
    ctx->pc = 0x23B4FCu;
    // 0x23b4fc: 0x84a302ec
    ctx->pc = 0x23b4fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 748)));
    // 0x23b500: 0x1460001f
    ctx->pc = 0x23B500u;
    {
        const bool branch_taken_0x23b500 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x23b500) {
            ctx->pc = 0x23B580u;
            goto label_23b580;
        }
    }
    ctx->pc = 0x23B508u;
    // 0x23b508: 0x8ca3036c
    ctx->pc = 0x23b508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x23b50c: 0x1c60001c
    ctx->pc = 0x23B50Cu;
    {
        const bool branch_taken_0x23b50c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x23B510u;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        if (branch_taken_0x23b50c) {
            ctx->pc = 0x23B580u;
            goto label_23b580;
        }
    }
    ctx->pc = 0x23B514u;
    // 0x23b514: 0x2484dfd0
    ctx->pc = 0x23b514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959056));
    // 0x23b518: 0x240303b0
    ctx->pc = 0x23b518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23b51c: 0xc31818
    ctx->pc = 0x23b51cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23b520: 0x641821
    ctx->pc = 0x23b520u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23b524: 0xc4620040
    ctx->pc = 0x23b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b528: 0xc4a00040
    ctx->pc = 0x23b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b52c: 0x46001081
    ctx->pc = 0x23b52cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23b530: 0xe7a20000
    ctx->pc = 0x23b530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23b534: 0xc4610044
    ctx->pc = 0x23b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b538: 0xc4a00044
    ctx->pc = 0x23b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b53c: 0x46000841
    ctx->pc = 0x23b53cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b540: 0xe7a10004
    ctx->pc = 0x23b540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23b544: 0xc4600048
    ctx->pc = 0x23b544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b548: 0xc4a30048
    ctx->pc = 0x23b548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23b54c: 0x46030001
    ctx->pc = 0x23b54cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23b550: 0xe7a00008
    ctx->pc = 0x23b550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23b554: 0x46021082
    ctx->pc = 0x23b554u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x23b558: 0x46010842
    ctx->pc = 0x23b558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x23b55c: 0x46011080
    ctx->pc = 0x23b55cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x23b560: 0x46000002
    ctx->pc = 0x23b560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x23b564: 0x46001080
    ctx->pc = 0x23b564u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23b568: 0x3c0142c8
    ctx->pc = 0x23b568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x23b56c: 0x44810000
    ctx->pc = 0x23b56cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23b570: 0x46001034
    ctx->pc = 0x23b570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b574: 0x0
    ctx->pc = 0x23b574u;
    // NOP
    // 0x23b578: 0x45030001
    ctx->pc = 0x23B578u;
    {
        const bool branch_taken_0x23b578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b578) {
            ctx->pc = 0x23B57Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x23B580u;
            goto label_23b580;
        }
    }
    ctx->pc = 0x23B580u;
label_23b580:
    // 0x23b580: 0x3e00008
    ctx->pc = 0x23B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B4E8u: goto label_23b4e8;
            case 0x23B4F0u: goto label_23b4f0;
            case 0x23B580u: goto label_23b580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B588u;
}
