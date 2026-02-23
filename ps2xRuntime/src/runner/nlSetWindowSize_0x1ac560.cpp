#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetWindowSize
// Address: 0x1ac560 - 0x1ac6b8
void nlSetWindowSize_0x1ac560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetWindowSize");


    ctx->pc = 0x1ac560u;

    // 0x1ac560: 0x27bdfff0
    ctx->pc = 0x1ac560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac564: 0x7fbf0000
    ctx->pc = 0x1ac564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ac568: 0x3c010030
    ctx->pc = 0x1ac568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac56c: 0x8424583c
    ctx->pc = 0x1ac56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22588)));
    // 0x1ac570: 0x46006846
    ctx->pc = 0x1ac570u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x1ac574: 0x46007886
    ctx->pc = 0x1ac574u;
    ctx->f[2] = FPU_MOV_S(ctx->f[15]);
    // 0x1ac578: 0x460068c6
    ctx->pc = 0x1ac578u;
    ctx->f[3] = FPU_MOV_S(ctx->f[13]);
    // 0x1ac57c: 0x1080000b
    ctx->pc = 0x1AC57Cu;
    {
        const bool branch_taken_0x1ac57c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC580u;
        ctx->f[4] = FPU_MOV_S(ctx->f[15]);
        if (branch_taken_0x1ac57c) {
            ctx->pc = 0x1AC5ACu;
            goto label_1ac5ac;
        }
    }
    ctx->pc = 0x1AC584u;
    // 0x1ac584: 0x3c010030
    ctx->pc = 0x1ac584u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac588: 0x84225836
    ctx->pc = 0x1ac588u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1ac58c: 0x21040
    ctx->pc = 0x1ac58cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ac590: 0x284101e1
    ctx->pc = 0x1ac590u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 481));
    // 0x1ac594: 0x10200005
    ctx->pc = 0x1AC594u;
    {
        const bool branch_taken_0x1ac594 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC598u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1ac594) {
            ctx->pc = 0x1AC5ACu;
            goto label_1ac5ac;
        }
    }
    ctx->pc = 0x1AC59Cu;
    // 0x1ac59c: 0x44820000
    ctx->pc = 0x1ac59cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ac5a0: 0x0
    ctx->pc = 0x1ac5a0u;
    // NOP
    // 0x1ac5a4: 0x46000842
    ctx->pc = 0x1ac5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac5a8: 0x46001082
    ctx->pc = 0x1ac5a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ac5ac:
    // 0x1ac5ac: 0x8f838a10
    ctx->pc = 0x1ac5acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1ac5b0: 0x3c020030
    ctx->pc = 0x1ac5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac5b4: 0x24423700
    ctx->pc = 0x1ac5b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1ac5b8: 0x14620004
    ctx->pc = 0x1AC5B8u;
    {
        const bool branch_taken_0x1ac5b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AC5BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ac5b8) {
            ctx->pc = 0x1AC5CCu;
            goto label_1ac5cc;
        }
    }
    ctx->pc = 0x1AC5C0u;
    // 0x1ac5c0: 0x3c010030
    ctx->pc = 0x1ac5c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac5c4: 0x84225838
    ctx->pc = 0x1ac5c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1ac5c8: 0x0
    ctx->pc = 0x1ac5c8u;
    // NOP
label_1ac5cc:
    // 0x1ac5cc: 0x2143c
    ctx->pc = 0x1ac5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ac5d0: 0x2143f
    ctx->pc = 0x1ac5d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ac5d4: 0x44820000
    ctx->pc = 0x1ac5d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ac5d8: 0xe78c8aa0
    ctx->pc = 0x1ac5d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937248), bits); }
    // 0x1ac5dc: 0x46800020
    ctx->pc = 0x1ac5dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ac5e0: 0xe78e8aa8
    ctx->pc = 0x1ac5e0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937256), bits); }
    // 0x1ac5e4: 0x46000843
    ctx->pc = 0x1ac5e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1ac5e8: 0x46001083
    ctx->pc = 0x1ac5e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x1ac5ec: 0xe7818a98
    ctx->pc = 0x1ac5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937240), bits); }
    // 0x1ac5f0: 0x46006b43
    ctx->pc = 0x1ac5f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x1ac5f4: 0xe7828348
    ctx->pc = 0x1ac5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935368), bits); }
    // 0x1ac5f8: 0x46007bc3
    ctx->pc = 0x1ac5f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = copysignf(INFINITY, ctx->f[15] * 0.0f); } else ctx->f[15] = ctx->f[15] / ctx->f[0];
    // 0x1ac5fc: 0xe78d8a9c
    ctx->pc = 0x1ac5fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937244), bits); }
    // 0x1ac600: 0x0
    ctx->pc = 0x1ac600u;
    // NOP
    // 0x1ac604: 0x0
    ctx->pc = 0x1ac604u;
    // NOP
    // 0x1ac608: 0x10800009
    ctx->pc = 0x1AC608u;
    {
        const bool branch_taken_0x1ac608 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC60Cu;
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937252), bits); }
        if (branch_taken_0x1ac608) {
            ctx->pc = 0x1AC630u;
            goto label_1ac630;
        }
    }
    ctx->pc = 0x1AC610u;
    // 0x1ac610: 0x3c024000
    ctx->pc = 0x1ac610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1ac614: 0x44820800
    ctx->pc = 0x1ac614u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1ac618: 0x0
    ctx->pc = 0x1ac618u;
    // NOP
    // 0x1ac61c: 0x460c0802
    ctx->pc = 0x1ac61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1ac620: 0xe7808a94
    ctx->pc = 0x1ac620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937236), bits); }
    // 0x1ac624: 0x460e0802
    ctx->pc = 0x1ac624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x1ac628: 0x10000003
    ctx->pc = 0x1AC628u;
    {
        const bool branch_taken_0x1ac628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC62Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935364), bits); }
        if (branch_taken_0x1ac628) {
            ctx->pc = 0x1AC638u;
            goto label_1ac638;
        }
    }
    ctx->pc = 0x1AC630u;
label_1ac630:
    // 0x1ac630: 0xe78c8a94
    ctx->pc = 0x1ac630u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937236), bits); }
    // 0x1ac634: 0xe78e8344
    ctx->pc = 0x1ac634u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935364), bits); }
label_1ac638:
    // 0x1ac638: 0x3c010030
    ctx->pc = 0x1ac638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac63c: 0xc4213d10
    ctx->pc = 0x1ac63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac640: 0xc7808344
    ctx->pc = 0x1ac640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac644: 0x3c010030
    ctx->pc = 0x1ac644u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac648: 0x46000802
    ctx->pc = 0x1ac648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac64c: 0xe4203c40
    ctx->pc = 0x1ac64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15424), bits); }
    // 0x1ac650: 0x3c010030
    ctx->pc = 0x1ac650u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac654: 0xc4203d14
    ctx->pc = 0x1ac654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac658: 0x46020002
    ctx->pc = 0x1ac658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ac65c: 0x3c010030
    ctx->pc = 0x1ac65cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac660: 0xe4203c44
    ctx->pc = 0x1ac660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15428), bits); }
    // 0x1ac664: 0x3c010030
    ctx->pc = 0x1ac664u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac668: 0xc4203c40
    ctx->pc = 0x1ac668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac66c: 0x3c010030
    ctx->pc = 0x1ac66cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac670: 0xc4213c44
    ctx->pc = 0x1ac670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac674: 0x46010036
    ctx->pc = 0x1ac674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac678: 0x0
    ctx->pc = 0x1ac678u;
    // NOP
    // 0x1ac67c: 0x45010004
    ctx->pc = 0x1AC67Cu;
    {
        const bool branch_taken_0x1ac67c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC680u;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        if (branch_taken_0x1ac67c) {
            ctx->pc = 0x1AC690u;
            goto label_1ac690;
        }
    }
    ctx->pc = 0x1AC684u;
    // 0x1ac684: 0x3c010030
    ctx->pc = 0x1ac684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac688: 0x10000002
    ctx->pc = 0x1AC688u;
    {
        const bool branch_taken_0x1ac688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC68Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15628), bits); }
        if (branch_taken_0x1ac688) {
            ctx->pc = 0x1AC694u;
            goto label_1ac694;
        }
    }
    ctx->pc = 0x1AC690u;
label_1ac690:
    // 0x1ac690: 0xe4213d0c
    ctx->pc = 0x1ac690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15628), bits); }
label_1ac694:
    // 0x1ac694: 0x3c020030
    ctx->pc = 0x1ac694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac698: 0xc06b134
    ctx->pc = 0x1AC698u;
    SET_GPR_U32(ctx, 31, 0x1AC6A0u);
    ctx->pc = 0x1AC69Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21808));
    ctx->pc = 0x1AC4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMakeProjConvMat_0x1ac4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6A0u; }
        else if (ctx->pc != 0x1AC6A0u) { ctx->pc = 0x1AC6A0u; }
    }
    if (ctx->pc != 0x1AC6A0u) { return; }
    ctx->pc = 0x1AC6A0u;
    // 0x1ac6a0: 0x46001b46
    ctx->pc = 0x1ac6a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[3]);
    // 0x1ac6a4: 0xc06b1b0
    ctx->pc = 0x1AC6A4u;
    SET_GPR_U32(ctx, 31, 0x1AC6ACu);
    ctx->pc = 0x1AC6A8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[4]);
    ctx->pc = 0x1AC6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetPixelClipping_0x1ac6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6ACu; }
        else if (ctx->pc != 0x1AC6ACu) { ctx->pc = 0x1AC6ACu; }
    }
    if (ctx->pc != 0x1AC6ACu) { return; }
    ctx->pc = 0x1AC6ACu;
    // 0x1ac6ac: 0x7bbf0000
    ctx->pc = 0x1ac6acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac6b0: 0x3e00008
    ctx->pc = 0x1AC6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC6B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AC5ACu: goto label_1ac5ac;
            case 0x1AC5CCu: goto label_1ac5cc;
            case 0x1AC630u: goto label_1ac630;
            case 0x1AC638u: goto label_1ac638;
            case 0x1AC690u: goto label_1ac690;
            case 0x1AC694u: goto label_1ac694;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC6B8u;
}
