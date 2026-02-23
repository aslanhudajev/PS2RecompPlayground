#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CollisionS
// Address: 0x1a3300 - 0x1a3c20
void CollisionS_0x1a3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CollisionS");


    ctx->pc = 0x1a3300u;

    // 0x1a3300: 0x27bdffb0
    ctx->pc = 0x1a3300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a3304: 0x7fbf0040
    ctx->pc = 0x1a3304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1a3308: 0xe7bc0030
    ctx->pc = 0x1a3308u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a330c: 0xe7bb002c
    ctx->pc = 0x1a330cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1a3310: 0xe7ba0028
    ctx->pc = 0x1a3310u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a3314: 0xe7b90024
    ctx->pc = 0x1a3314u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a3318: 0xe7b80020
    ctx->pc = 0x1a3318u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a331c: 0xe7b7001c
    ctx->pc = 0x1a331cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a3320: 0xe7b60018
    ctx->pc = 0x1a3320u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a3324: 0xe7b50014
    ctx->pc = 0x1a3324u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a3328: 0xe7b40010
    ctx->pc = 0x1a3328u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a332c: 0xaf808958
    ctx->pc = 0x1a332cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 0));
    // 0x1a3330: 0x8c860000
    ctx->pc = 0x1a3330u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3334: 0x46007906
    ctx->pc = 0x1a3334u;
    ctx->f[4] = FPU_MOV_S(ctx->f[15]);
    // 0x1a3338: 0x46042102
    ctx->pc = 0x1a3338u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1a333c: 0x70001628
    ctx->pc = 0x1a333cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a3340: 0x24c6ffff
    ctx->pc = 0x1a3340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a3344: 0x460f6180
    ctx->pc = 0x1a3344u;
    ctx->f[6] = FPU_ADD_S(ctx->f[12], ctx->f[15]);
    // 0x1a3348: 0x24840004
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a334c: 0x460f61c1
    ctx->pc = 0x1a334cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[15]);
    // 0x1a3350: 0x460f6a00
    ctx->pc = 0x1a3350u;
    ctx->f[8] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x1a3354: 0x460f6a41
    ctx->pc = 0x1a3354u;
    ctx->f[9] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x1a3358: 0x460f7280
    ctx->pc = 0x1a3358u;
    ctx->f[10] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
    // 0x1a335c: 0x460f72c1
    ctx->pc = 0x1a335cu;
    ctx->f[11] = FPU_SUB_S(ctx->f[14], ctx->f[15]);
    // 0x1a3360: 0x46006486
    ctx->pc = 0x1a3360u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
    // 0x1a3364: 0x46006cc6
    ctx->pc = 0x1a3364u;
    ctx->f[19] = FPU_MOV_S(ctx->f[13]);
    // 0x1a3368: 0x4c00221
    ctx->pc = 0x1A3368u;
    {
        const bool branch_taken_0x1a3368 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1A336Cu;
        ctx->f[5] = FPU_MOV_S(ctx->f[14]);
        if (branch_taken_0x1a3368) {
            ctx->pc = 0x1A3BF0u;
            goto label_1a3bf0;
        }
    }
    ctx->pc = 0x1A3370u;
label_1a3370:
    // 0x1a3370: 0x70804e28
    ctx->pc = 0x1a3370u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a3374: 0x25290004
    ctx->pc = 0x1a3374u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x1a3378: 0xc5200000
    ctx->pc = 0x1a3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a337c: 0x8c870000
    ctx->pc = 0x1a337cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a3380: 0x46070034
    ctx->pc = 0x1a3380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3384: 0x0
    ctx->pc = 0x1a3384u;
    // NOP
    // 0x1a3388: 0x45010211
    ctx->pc = 0x1A3388u;
    {
        const bool branch_taken_0x1a3388 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A338Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1a3388) {
            ctx->pc = 0x1A3BD0u;
            goto label_1a3bd0;
        }
    }
    ctx->pc = 0x1A3390u;
    // 0x1a3390: 0xc5200000
    ctx->pc = 0x1a3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a3394: 0x46090034
    ctx->pc = 0x1a3394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3398: 0x0
    ctx->pc = 0x1a3398u;
    // NOP
    // 0x1a339c: 0x4501020c
    ctx->pc = 0x1A339Cu;
    {
        const bool branch_taken_0x1a339c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A33A0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1a339c) {
            ctx->pc = 0x1A3BD0u;
            goto label_1a3bd0;
        }
    }
    ctx->pc = 0x1A33A4u;
    // 0x1a33a4: 0xc5200000
    ctx->pc = 0x1a33a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a33a8: 0x460b0034
    ctx->pc = 0x1a33a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a33ac: 0x0
    ctx->pc = 0x1a33acu;
    // NOP
    // 0x1a33b0: 0x45010207
    ctx->pc = 0x1A33B0u;
    {
        const bool branch_taken_0x1a33b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A33B4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1a33b0) {
            ctx->pc = 0x1A3BD0u;
            goto label_1a3bd0;
        }
    }
    ctx->pc = 0x1A33B8u;
    // 0x1a33b8: 0xc5200000
    ctx->pc = 0x1a33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a33bc: 0x46060036
    ctx->pc = 0x1a33bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a33c0: 0x0
    ctx->pc = 0x1a33c0u;
    // NOP
    // 0x1a33c4: 0x45000202
    ctx->pc = 0x1A33C4u;
    {
        const bool branch_taken_0x1a33c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A33C8u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1a33c4) {
            ctx->pc = 0x1A3BD0u;
            goto label_1a3bd0;
        }
    }
    ctx->pc = 0x1A33CCu;
    // 0x1a33cc: 0xc5200000
    ctx->pc = 0x1a33ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a33d0: 0x46080036
    ctx->pc = 0x1a33d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a33d4: 0x0
    ctx->pc = 0x1a33d4u;
    // NOP
    // 0x1a33d8: 0x450001fd
    ctx->pc = 0x1A33D8u;
    {
        const bool branch_taken_0x1a33d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A33DCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1a33d8) {
            ctx->pc = 0x1A3BD0u;
            goto label_1a3bd0;
        }
    }
    ctx->pc = 0x1A33E0u;
    // 0x1a33e0: 0xc5200000
    ctx->pc = 0x1a33e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a33e4: 0x460a0036
    ctx->pc = 0x1a33e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a33e8: 0x0
    ctx->pc = 0x1a33e8u;
    // NOP
    // 0x1a33ec: 0x450001f8
    ctx->pc = 0x1A33ECu;
    {
        const bool branch_taken_0x1a33ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A33F0u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1a33ec) {
            ctx->pc = 0x1A3BD0u;
            goto label_1a3bd0;
        }
    }
    ctx->pc = 0x1A33F4u;
    // 0x1a33f4: 0x24e8ffff
    ctx->pc = 0x1a33f4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1a33f8: 0x50001f6
    ctx->pc = 0x1A33F8u;
    {
        const bool branch_taken_0x1a33f8 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1A33FCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 3));
        if (branch_taken_0x1a33f8) {
            ctx->pc = 0x1A3BD4u;
            goto label_1a3bd4;
        }
    }
    ctx->pc = 0x1A3400u;
label_1a3400:
    // 0x1a3400: 0xc52c0000
    ctx->pc = 0x1a3400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3404: 0xc52d0004
    ctx->pc = 0x1a3404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3408: 0xc52e0008
    ctx->pc = 0x1a3408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a340c: 0xc535000c
    ctx->pc = 0x1a340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3410: 0x46126042
    ctx->pc = 0x1a3410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[18]);
    // 0x1a3414: 0x46136802
    ctx->pc = 0x1a3414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[19]);
    // 0x1a3418: 0x46000818
    ctx->pc = 0x1a3418u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a341c: 0x4605701c
    ctx->pc = 0x1a341cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[5]));
    // 0x1a3420: 0x4600ad80
    ctx->pc = 0x1a3420u;
    ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1a3424: 0x460c6042
    ctx->pc = 0x1a3424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a3428: 0x460d6802
    ctx->pc = 0x1a3428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a342c: 0x46000818
    ctx->pc = 0x1a342cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3430: 0x460e701c
    ctx->pc = 0x1a3430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a3434: 0x4600b047
    ctx->pc = 0x1a3434u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
    // 0x1a3438: 0x460008c3
    ctx->pc = 0x1a3438u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x1a343c: 0x0
    ctx->pc = 0x1a343cu;
    // NOP
    // 0x1a3440: 0x46030802
    ctx->pc = 0x1a3440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a3444: 0x46040036
    ctx->pc = 0x1a3444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3448: 0x0
    ctx->pc = 0x1a3448u;
    // NOP
    // 0x1a344c: 0x450201dd
    ctx->pc = 0x1A344Cu;
    {
        const bool branch_taken_0x1a344c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a344c) {
            ctx->pc = 0x1A3450u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->pc = 0x1A3BC4u;
            goto label_1a3bc4;
        }
    }
    ctx->pc = 0x1A3454u;
    // 0x1a3454: 0x46036042
    ctx->pc = 0x1a3454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x1a3458: 0x8d250010
    ctx->pc = 0x1a3458u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1a345c: 0x24030002
    ctx->pc = 0x1a345cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3460: 0x46019080
    ctx->pc = 0x1a3460u;
    ctx->f[2] = FPU_ADD_S(ctx->f[18], ctx->f[1]);
    // 0x1a3464: 0x46036842
    ctx->pc = 0x1a3464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x1a3468: 0x460370c2
    ctx->pc = 0x1a3468u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
    // 0x1a346c: 0x46019840
    ctx->pc = 0x1a346cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[19], ctx->f[1]);
    // 0x1a3470: 0x10a30074
    ctx->pc = 0x1A3470u;
    {
        const bool branch_taken_0x1a3470 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A3474u;
        ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
        if (branch_taken_0x1a3470) {
            ctx->pc = 0x1A3644u;
            goto label_1a3644;
        }
    }
    ctx->pc = 0x1A3478u;
    // 0x1a3478: 0x24030001
    ctx->pc = 0x1a3478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a347c: 0x10a3003b
    ctx->pc = 0x1A347Cu;
    {
        const bool branch_taken_0x1a347c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a347c) {
            ctx->pc = 0x1A356Cu;
            goto label_1a356c;
        }
    }
    ctx->pc = 0x1A3484u;
    // 0x1a3484: 0x10a00003
    ctx->pc = 0x1A3484u;
    {
        const bool branch_taken_0x1a3484 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3484) {
            ctx->pc = 0x1A3494u;
            goto label_1a3494;
        }
    }
    ctx->pc = 0x1A348Cu;
    // 0x1a348c: 0x100000a4
    ctx->pc = 0x1A348Cu;
    {
        const bool branch_taken_0x1a348c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3490u;
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        if (branch_taken_0x1a348c) {
            ctx->pc = 0x1A3720u;
            goto label_1a3720;
        }
    }
    ctx->pc = 0x1A3494u;
label_1a3494:
    // 0x1a3494: 0xc52f001c
    ctx->pc = 0x1a3494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3498: 0xc5300018
    ctx->pc = 0x1a3498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a349c: 0xc5370028
    ctx->pc = 0x1a349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a34a0: 0xc5310024
    ctx->pc = 0x1a34a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a34a4: 0x4480d000
    ctx->pc = 0x1a34a4u;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 0);
    // 0x1a34a8: 0x46037e01
    ctx->pc = 0x1a34a8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x1a34ac: 0x460fbec1
    ctx->pc = 0x1a34acu;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x1a34b0: 0x46018641
    ctx->pc = 0x1a34b0u;
    ctx->f[25] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
    // 0x1a34b4: 0x461bc81a
    ctx->pc = 0x1a34b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[27]);
    // 0x1a34b8: 0x46108e41
    ctx->pc = 0x1a34b8u;
    ctx->f[25] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x1a34bc: 0x4619c61d
    ctx->pc = 0x1a34bcu;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[25]));
    // 0x1a34c0: 0x46186602
    ctx->pc = 0x1a34c0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x1a34c4: 0x461ac034
    ctx->pc = 0x1a34c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a34c8: 0x0
    ctx->pc = 0x1a34c8u;
    // NOP
    // 0x1a34cc: 0x45010093
    ctx->pc = 0x1A34CCu;
    {
        const bool branch_taken_0x1a34cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a34cc) {
            ctx->pc = 0x1A371Cu;
            goto label_1a371c;
        }
    }
    ctx->pc = 0x1A34D4u;
    // 0x1a34d4: 0xc5390034
    ctx->pc = 0x1a34d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a34d8: 0xc5380030
    ctx->pc = 0x1a34d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a34dc: 0x4603bec1
    ctx->pc = 0x1a34dcu;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[3]);
    // 0x1a34e0: 0x46018f01
    ctx->pc = 0x1a34e0u;
    ctx->f[28] = FPU_SUB_S(ctx->f[17], ctx->f[1]);
    // 0x1a34e4: 0x4617cdc1
    ctx->pc = 0x1a34e4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x1a34e8: 0x4611c441
    ctx->pc = 0x1a34e8u;
    ctx->f[17] = FPU_SUB_S(ctx->f[24], ctx->f[17]);
    // 0x1a34ec: 0x4617e01a
    ctx->pc = 0x1a34ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[23]);
    // 0x1a34f0: 0x4611dc5d
    ctx->pc = 0x1a34f0u;
    ctx->f[17] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[17]));
    // 0x1a34f4: 0x46116442
    ctx->pc = 0x1a34f4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[12], ctx->f[17]);
    // 0x1a34f8: 0x461a8834
    ctx->pc = 0x1a34f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a34fc: 0x0
    ctx->pc = 0x1a34fcu;
    // NOP
    // 0x1a3500: 0x450100cb
    ctx->pc = 0x1A3500u;
    {
        const bool branch_taken_0x1a3500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3500) {
            ctx->pc = 0x1A3830u;
            goto label_1a3830;
        }
    }
    ctx->pc = 0x1A3508u;
    // 0x1a3508: 0xc5370040
    ctx->pc = 0x1a3508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a350c: 0xc531003c
    ctx->pc = 0x1a350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3510: 0x4603cec1
    ctx->pc = 0x1a3510u;
    ctx->f[27] = FPU_SUB_S(ctx->f[25], ctx->f[3]);
    // 0x1a3514: 0x4601c701
    ctx->pc = 0x1a3514u;
    ctx->f[28] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x1a3518: 0x4619be41
    ctx->pc = 0x1a3518u;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x1a351c: 0x46188e01
    ctx->pc = 0x1a351cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[17], ctx->f[24]);
    // 0x1a3520: 0x4619e01a
    ctx->pc = 0x1a3520u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[25]);
    // 0x1a3524: 0x4618de1d
    ctx->pc = 0x1a3524u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[24]));
    // 0x1a3528: 0x46186602
    ctx->pc = 0x1a3528u;
    ctx->f[24] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x1a352c: 0x461ac034
    ctx->pc = 0x1a352cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3530: 0x0
    ctx->pc = 0x1a3530u;
    // NOP
    // 0x1a3534: 0x45010103
    ctx->pc = 0x1A3534u;
    {
        const bool branch_taken_0x1a3534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3538u;
        ctx->f[24] = FPU_SUB_S(ctx->f[15], ctx->f[23]);
        if (branch_taken_0x1a3534) {
            ctx->pc = 0x1A3944u;
            goto label_1a3944;
        }
    }
    ctx->pc = 0x1A353Cu;
    // 0x1a353c: 0x461183c1
    ctx->pc = 0x1a353cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[16], ctx->f[17]);
    // 0x1a3540: 0x46018c01
    ctx->pc = 0x1a3540u;
    ctx->f[16] = FPU_SUB_S(ctx->f[17], ctx->f[1]);
    // 0x1a3544: 0x4603bdc1
    ctx->pc = 0x1a3544u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[3]);
    // 0x1a3548: 0x4618801a
    ctx->pc = 0x1a3548u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x1a354c: 0x460fbbdd
    ctx->pc = 0x1a354cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[15]));
    // 0x1a3550: 0x460f63c2
    ctx->pc = 0x1a3550u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x1a3554: 0x461a7834
    ctx->pc = 0x1a3554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3558: 0x0
    ctx->pc = 0x1a3558u;
    // NOP
    // 0x1a355c: 0x4501013e
    ctx->pc = 0x1A355Cu;
    {
        const bool branch_taken_0x1a355c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a355c) {
            ctx->pc = 0x1A3A58u;
            goto label_1a3a58;
        }
    }
    ctx->pc = 0x1A3564u;
    // 0x1a3564: 0x10000180
    ctx->pc = 0x1A3564u;
    {
        const bool branch_taken_0x1a3564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3564) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A356Cu;
label_1a356c:
    // 0x1a356c: 0xc52f0014
    ctx->pc = 0x1a356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3570: 0xc530001c
    ctx->pc = 0x1a3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3574: 0xc5370020
    ctx->pc = 0x1a3574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a3578: 0xc5310028
    ctx->pc = 0x1a3578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a357c: 0x4480d000
    ctx->pc = 0x1a357cu;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 0);
    // 0x1a3580: 0x46027e01
    ctx->pc = 0x1a3580u;
    ctx->f[24] = FPU_SUB_S(ctx->f[15], ctx->f[2]);
    // 0x1a3584: 0x460fbec1
    ctx->pc = 0x1a3584u;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x1a3588: 0x46038641
    ctx->pc = 0x1a3588u;
    ctx->f[25] = FPU_SUB_S(ctx->f[16], ctx->f[3]);
    // 0x1a358c: 0x461bc81a
    ctx->pc = 0x1a358cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[27]);
    // 0x1a3590: 0x46108e41
    ctx->pc = 0x1a3590u;
    ctx->f[25] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x1a3594: 0x4619c61d
    ctx->pc = 0x1a3594u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[25]));
    // 0x1a3598: 0x46186e02
    ctx->pc = 0x1a3598u;
    ctx->f[24] = FPU_MUL_S(ctx->f[13], ctx->f[24]);
    // 0x1a359c: 0x461ac034
    ctx->pc = 0x1a359cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a35a0: 0x0
    ctx->pc = 0x1a35a0u;
    // NOP
    // 0x1a35a4: 0x4501005d
    ctx->pc = 0x1A35A4u;
    {
        const bool branch_taken_0x1a35a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a35a4) {
            ctx->pc = 0x1A371Cu;
            goto label_1a371c;
        }
    }
    ctx->pc = 0x1A35ACu;
    // 0x1a35ac: 0xc539002c
    ctx->pc = 0x1a35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a35b0: 0xc5380034
    ctx->pc = 0x1a35b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a35b4: 0x4602bec1
    ctx->pc = 0x1a35b4u;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x1a35b8: 0x46038f01
    ctx->pc = 0x1a35b8u;
    ctx->f[28] = FPU_SUB_S(ctx->f[17], ctx->f[3]);
    // 0x1a35bc: 0x4617cdc1
    ctx->pc = 0x1a35bcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x1a35c0: 0x4611c441
    ctx->pc = 0x1a35c0u;
    ctx->f[17] = FPU_SUB_S(ctx->f[24], ctx->f[17]);
    // 0x1a35c4: 0x4617e01a
    ctx->pc = 0x1a35c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[23]);
    // 0x1a35c8: 0x4611dc5d
    ctx->pc = 0x1a35c8u;
    ctx->f[17] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[17]));
    // 0x1a35cc: 0x46116c42
    ctx->pc = 0x1a35ccu;
    ctx->f[17] = FPU_MUL_S(ctx->f[13], ctx->f[17]);
    // 0x1a35d0: 0x461a8834
    ctx->pc = 0x1a35d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a35d4: 0x0
    ctx->pc = 0x1a35d4u;
    // NOP
    // 0x1a35d8: 0x45010095
    ctx->pc = 0x1A35D8u;
    {
        const bool branch_taken_0x1a35d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a35d8) {
            ctx->pc = 0x1A3830u;
            goto label_1a3830;
        }
    }
    ctx->pc = 0x1A35E0u;
    // 0x1a35e0: 0xc5370038
    ctx->pc = 0x1a35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a35e4: 0xc5310040
    ctx->pc = 0x1a35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a35e8: 0x4602cec1
    ctx->pc = 0x1a35e8u;
    ctx->f[27] = FPU_SUB_S(ctx->f[25], ctx->f[2]);
    // 0x1a35ec: 0x4603c701
    ctx->pc = 0x1a35ecu;
    ctx->f[28] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x1a35f0: 0x4619be41
    ctx->pc = 0x1a35f0u;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x1a35f4: 0x46188e01
    ctx->pc = 0x1a35f4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[17], ctx->f[24]);
    // 0x1a35f8: 0x4619e01a
    ctx->pc = 0x1a35f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[25]);
    // 0x1a35fc: 0x4618de1d
    ctx->pc = 0x1a35fcu;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[24]));
    // 0x1a3600: 0x46186e02
    ctx->pc = 0x1a3600u;
    ctx->f[24] = FPU_MUL_S(ctx->f[13], ctx->f[24]);
    // 0x1a3604: 0x461ac034
    ctx->pc = 0x1a3604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3608: 0x0
    ctx->pc = 0x1a3608u;
    // NOP
    // 0x1a360c: 0x450100cd
    ctx->pc = 0x1A360Cu;
    {
        const bool branch_taken_0x1a360c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3610u;
        ctx->f[24] = FPU_SUB_S(ctx->f[15], ctx->f[23]);
        if (branch_taken_0x1a360c) {
            ctx->pc = 0x1A3944u;
            goto label_1a3944;
        }
    }
    ctx->pc = 0x1A3614u;
    // 0x1a3614: 0x461183c1
    ctx->pc = 0x1a3614u;
    ctx->f[15] = FPU_SUB_S(ctx->f[16], ctx->f[17]);
    // 0x1a3618: 0x46038c01
    ctx->pc = 0x1a3618u;
    ctx->f[16] = FPU_SUB_S(ctx->f[17], ctx->f[3]);
    // 0x1a361c: 0x4602bdc1
    ctx->pc = 0x1a361cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
    // 0x1a3620: 0x4618801a
    ctx->pc = 0x1a3620u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x1a3624: 0x460fbbdd
    ctx->pc = 0x1a3624u;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[15]));
    // 0x1a3628: 0x460f6bc2
    ctx->pc = 0x1a3628u;
    ctx->f[15] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
    // 0x1a362c: 0x461a7834
    ctx->pc = 0x1a362cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3630: 0x0
    ctx->pc = 0x1a3630u;
    // NOP
    // 0x1a3634: 0x45010108
    ctx->pc = 0x1A3634u;
    {
        const bool branch_taken_0x1a3634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3634) {
            ctx->pc = 0x1A3A58u;
            goto label_1a3a58;
        }
    }
    ctx->pc = 0x1A363Cu;
    // 0x1a363c: 0x1000014a
    ctx->pc = 0x1A363Cu;
    {
        const bool branch_taken_0x1a363c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a363c) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A3644u;
label_1a3644:
    // 0x1a3644: 0xc52f0018
    ctx->pc = 0x1a3644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3648: 0xc5300014
    ctx->pc = 0x1a3648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a364c: 0xc5370024
    ctx->pc = 0x1a364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a3650: 0xc5310020
    ctx->pc = 0x1a3650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3654: 0x4480d000
    ctx->pc = 0x1a3654u;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 0);
    // 0x1a3658: 0x46017e01
    ctx->pc = 0x1a3658u;
    ctx->f[24] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x1a365c: 0x460fbec1
    ctx->pc = 0x1a365cu;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[15]);
    // 0x1a3660: 0x46028641
    ctx->pc = 0x1a3660u;
    ctx->f[25] = FPU_SUB_S(ctx->f[16], ctx->f[2]);
    // 0x1a3664: 0x461bc81a
    ctx->pc = 0x1a3664u;
    ctx->f[31] = FPU_MUL_S(ctx->f[25], ctx->f[27]);
    // 0x1a3668: 0x46108e41
    ctx->pc = 0x1a3668u;
    ctx->f[25] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x1a366c: 0x4619c61d
    ctx->pc = 0x1a366cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[25]));
    // 0x1a3670: 0x46187602
    ctx->pc = 0x1a3670u;
    ctx->f[24] = FPU_MUL_S(ctx->f[14], ctx->f[24]);
    // 0x1a3674: 0x461ac034
    ctx->pc = 0x1a3674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3678: 0x0
    ctx->pc = 0x1a3678u;
    // NOP
    // 0x1a367c: 0x45010027
    ctx->pc = 0x1A367Cu;
    {
        const bool branch_taken_0x1a367c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a367c) {
            ctx->pc = 0x1A371Cu;
            goto label_1a371c;
        }
    }
    ctx->pc = 0x1A3684u;
    // 0x1a3684: 0xc5390030
    ctx->pc = 0x1a3684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a3688: 0xc538002c
    ctx->pc = 0x1a3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a368c: 0x4601bec1
    ctx->pc = 0x1a368cu;
    ctx->f[27] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x1a3690: 0x46028f01
    ctx->pc = 0x1a3690u;
    ctx->f[28] = FPU_SUB_S(ctx->f[17], ctx->f[2]);
    // 0x1a3694: 0x4617cdc1
    ctx->pc = 0x1a3694u;
    ctx->f[23] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
    // 0x1a3698: 0x4611c441
    ctx->pc = 0x1a3698u;
    ctx->f[17] = FPU_SUB_S(ctx->f[24], ctx->f[17]);
    // 0x1a369c: 0x4617e01a
    ctx->pc = 0x1a369cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[23]);
    // 0x1a36a0: 0x4611dc5d
    ctx->pc = 0x1a36a0u;
    ctx->f[17] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[17]));
    // 0x1a36a4: 0x46117442
    ctx->pc = 0x1a36a4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[14], ctx->f[17]);
    // 0x1a36a8: 0x461a8834
    ctx->pc = 0x1a36a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a36ac: 0x0
    ctx->pc = 0x1a36acu;
    // NOP
    // 0x1a36b0: 0x4501005f
    ctx->pc = 0x1A36B0u;
    {
        const bool branch_taken_0x1a36b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a36b0) {
            ctx->pc = 0x1A3830u;
            goto label_1a3830;
        }
    }
    ctx->pc = 0x1A36B8u;
    // 0x1a36b8: 0xc537003c
    ctx->pc = 0x1a36b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a36bc: 0xc5310038
    ctx->pc = 0x1a36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a36c0: 0x4601cec1
    ctx->pc = 0x1a36c0u;
    ctx->f[27] = FPU_SUB_S(ctx->f[25], ctx->f[1]);
    // 0x1a36c4: 0x4602c701
    ctx->pc = 0x1a36c4u;
    ctx->f[28] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
    // 0x1a36c8: 0x4619be41
    ctx->pc = 0x1a36c8u;
    ctx->f[25] = FPU_SUB_S(ctx->f[23], ctx->f[25]);
    // 0x1a36cc: 0x46188e01
    ctx->pc = 0x1a36ccu;
    ctx->f[24] = FPU_SUB_S(ctx->f[17], ctx->f[24]);
    // 0x1a36d0: 0x4619e01a
    ctx->pc = 0x1a36d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[28], ctx->f[25]);
    // 0x1a36d4: 0x4618de1d
    ctx->pc = 0x1a36d4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[27], ctx->f[24]));
    // 0x1a36d8: 0x46187602
    ctx->pc = 0x1a36d8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[14], ctx->f[24]);
    // 0x1a36dc: 0x461ac034
    ctx->pc = 0x1a36dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a36e0: 0x0
    ctx->pc = 0x1a36e0u;
    // NOP
    // 0x1a36e4: 0x45010097
    ctx->pc = 0x1A36E4u;
    {
        const bool branch_taken_0x1a36e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A36E8u;
        ctx->f[24] = FPU_SUB_S(ctx->f[15], ctx->f[23]);
        if (branch_taken_0x1a36e4) {
            ctx->pc = 0x1A3944u;
            goto label_1a3944;
        }
    }
    ctx->pc = 0x1A36ECu;
    // 0x1a36ec: 0x461183c1
    ctx->pc = 0x1a36ecu;
    ctx->f[15] = FPU_SUB_S(ctx->f[16], ctx->f[17]);
    // 0x1a36f0: 0x46028c01
    ctx->pc = 0x1a36f0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[17], ctx->f[2]);
    // 0x1a36f4: 0x4601bdc1
    ctx->pc = 0x1a36f4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x1a36f8: 0x4618801a
    ctx->pc = 0x1a36f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x1a36fc: 0x460fbbdd
    ctx->pc = 0x1a36fcu;
    ctx->f[15] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[15]));
    // 0x1a3700: 0x460f73c2
    ctx->pc = 0x1a3700u;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x1a3704: 0x461a7834
    ctx->pc = 0x1a3704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3708: 0x0
    ctx->pc = 0x1a3708u;
    // NOP
    // 0x1a370c: 0x450100d2
    ctx->pc = 0x1A370Cu;
    {
        const bool branch_taken_0x1a370c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a370c) {
            ctx->pc = 0x1A3A58u;
            goto label_1a3a58;
        }
    }
    ctx->pc = 0x1A3714u;
    // 0x1a3714: 0x10000114
    ctx->pc = 0x1A3714u;
    {
        const bool branch_taken_0x1a3714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3714) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A371Cu;
label_1a371c:
    // 0x1a371c: 0xe7a50000
    ctx->pc = 0x1a371cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a3720:
    // 0x1a3720: 0xc52d0018
    ctx->pc = 0x1a3720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3724: 0xc52e001c
    ctx->pc = 0x1a3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a3728: 0xc52f0020
    ctx->pc = 0x1a3728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a372c: 0xc5300024
    ctx->pc = 0x1a372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3730: 0xc5310028
    ctx->pc = 0x1a3730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3734: 0xc068c9c
    ctx->pc = 0x1A3734u;
    SET_GPR_U32(ctx, 31, 0x1A373Cu);
    ctx->pc = 0x1A3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A3270u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetLineToPoint_0x1a3270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A373Cu; }
        else if (ctx->pc != 0x1A373Cu) { ctx->pc = 0x1A373Cu; }
    }
    if (ctx->pc != 0x1A373Cu) { return; }
    ctx->pc = 0x1A373Cu;
    // 0x1a373c: 0x46040036
    ctx->pc = 0x1a373cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3740: 0x0
    ctx->pc = 0x1a3740u;
    // NOP
    // 0x1a3744: 0x4500011e
    ctx->pc = 0x1A3744u;
    {
        const bool branch_taken_0x1a3744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3744) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A374Cu;
    // 0x1a374c: 0xc7828988
    ctx->pc = 0x1a374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3750: 0xc52c0014
    ctx->pc = 0x1a3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3754: 0xc52f0020
    ctx->pc = 0x1a3754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3758: 0xc7818984
    ctx->pc = 0x1a3758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a375c: 0xc52d0018
    ctx->pc = 0x1a375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3760: 0xc5300024
    ctx->pc = 0x1a3760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3764: 0xc7838980
    ctx->pc = 0x1a3764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a3768: 0x460c1601
    ctx->pc = 0x1a3768u;
    ctx->f[24] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1a376c: 0xc52e001c
    ctx->pc = 0x1a376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a3770: 0xc5310028
    ctx->pc = 0x1a3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3774: 0x460f15c1
    ctx->pc = 0x1a3774u;
    ctx->f[23] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x1a3778: 0x4617c642
    ctx->pc = 0x1a3778u;
    ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a377c: 0x460d0e01
    ctx->pc = 0x1a377cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1a3780: 0x46100dc1
    ctx->pc = 0x1a3780u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[16]);
    // 0x1a3784: 0x4617c5c2
    ctx->pc = 0x1a3784u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a3788: 0x4617c818
    ctx->pc = 0x1a3788u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x1a378c: 0x460e1e01
    ctx->pc = 0x1a378cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x1a3790: 0x46111dc1
    ctx->pc = 0x1a3790u;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[17]);
    // 0x1a3794: 0x4617c61c
    ctx->pc = 0x1a3794u;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[23]));
    // 0x1a3798: 0x4480b800
    ctx->pc = 0x1a3798u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x1a379c: 0x0
    ctx->pc = 0x1a379cu;
    // NOP
    // 0x1a37a0: 0x4617c034
    ctx->pc = 0x1a37a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a37a4: 0x0
    ctx->pc = 0x1a37a4u;
    // NOP
    // 0x1a37a8: 0x45020006
    ctx->pc = 0x1A37A8u;
    {
        const bool branch_taken_0x1a37a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a37a8) {
            ctx->pc = 0x1A37ACu;
            ctx->f[2] = FPU_MOV_S(ctx->f[12]);
            ctx->pc = 0x1A37C4u;
            goto label_1a37c4;
        }
    }
    ctx->pc = 0x1A37B0u;
    // 0x1a37b0: 0x46029301
    ctx->pc = 0x1a37b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[2]);
    // 0x1a37b4: 0x46019b41
    ctx->pc = 0x1a37b4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[1]);
    // 0x1a37b8: 0x100000eb
    ctx->pc = 0x1A37B8u;
    {
        const bool branch_taken_0x1a37b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A37BCu;
        ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        if (branch_taken_0x1a37b8) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A37C0u;
    // 0x1a37c0: 0x46006086
    ctx->pc = 0x1a37c0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
label_1a37c4:
    // 0x1a37c4: 0x46006846
    ctx->pc = 0x1a37c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x1a37c8: 0x460c9301
    ctx->pc = 0x1a37c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[12]);
    // 0x1a37cc: 0x460d9b41
    ctx->pc = 0x1a37ccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[13]);
    // 0x1a37d0: 0x460070c6
    ctx->pc = 0x1a37d0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
    // 0x1a37d4: 0x460c65c2
    ctx->pc = 0x1a37d4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a37d8: 0x460d6802
    ctx->pc = 0x1a37d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a37dc: 0x460e2b81
    ctx->pc = 0x1a37dcu;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[14]);
    // 0x1a37e0: 0x4600b818
    ctx->pc = 0x1a37e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1a37e4: 0x460e701c
    ctx->pc = 0x1a37e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a37e8: 0x46040034
    ctx->pc = 0x1a37e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a37ec: 0x0
    ctx->pc = 0x1a37ecu;
    // NOP
    // 0x1a37f0: 0x450100dd
    ctx->pc = 0x1A37F0u;
    {
        const bool branch_taken_0x1a37f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a37f0) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A37F8u;
    // 0x1a37f8: 0x46109b41
    ctx->pc = 0x1a37f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[16]);
    // 0x1a37fc: 0x460f9301
    ctx->pc = 0x1a37fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[15]);
    // 0x1a3800: 0x46007886
    ctx->pc = 0x1a3800u;
    ctx->f[2] = FPU_MOV_S(ctx->f[15]);
    // 0x1a3804: 0x460c63c2
    ctx->pc = 0x1a3804u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a3808: 0x460d6802
    ctx->pc = 0x1a3808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a380c: 0x46112b81
    ctx->pc = 0x1a380cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[17]);
    // 0x1a3810: 0x46007818
    ctx->pc = 0x1a3810u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1a3814: 0x460e701c
    ctx->pc = 0x1a3814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a3818: 0x46040034
    ctx->pc = 0x1a3818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a381c: 0x46008046
    ctx->pc = 0x1a381cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[16]);
    // 0x1a3820: 0x450100d1
    ctx->pc = 0x1A3820u;
    {
        const bool branch_taken_0x1a3820 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3824u;
        ctx->f[3] = FPU_MOV_S(ctx->f[17]);
        if (branch_taken_0x1a3820) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A3828u;
    // 0x1a3828: 0x100000e5
    ctx->pc = 0x1A3828u;
    {
        const bool branch_taken_0x1a3828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3828) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3830u;
label_1a3830:
    // 0x1a3830: 0xe7a50000
    ctx->pc = 0x1a3830u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3834: 0xc52d0024
    ctx->pc = 0x1a3834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3838: 0xc52e0028
    ctx->pc = 0x1a3838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a383c: 0xc52f002c
    ctx->pc = 0x1a383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3840: 0xc5300030
    ctx->pc = 0x1a3840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3844: 0xc5310034
    ctx->pc = 0x1a3844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3848: 0xc068c9c
    ctx->pc = 0x1A3848u;
    SET_GPR_U32(ctx, 31, 0x1A3850u);
    ctx->pc = 0x1A384Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A3270u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetLineToPoint_0x1a3270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3850u; }
        else if (ctx->pc != 0x1A3850u) { ctx->pc = 0x1A3850u; }
    }
    if (ctx->pc != 0x1A3850u) { return; }
    ctx->pc = 0x1A3850u;
    // 0x1a3850: 0x46040036
    ctx->pc = 0x1a3850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3854: 0x0
    ctx->pc = 0x1a3854u;
    // NOP
    // 0x1a3858: 0x450000d9
    ctx->pc = 0x1A3858u;
    {
        const bool branch_taken_0x1a3858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3858) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3860u;
    // 0x1a3860: 0xc7828988
    ctx->pc = 0x1a3860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3864: 0xc52c0020
    ctx->pc = 0x1a3864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3868: 0xc52f002c
    ctx->pc = 0x1a3868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a386c: 0xc7818984
    ctx->pc = 0x1a386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3870: 0xc52d0024
    ctx->pc = 0x1a3870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3874: 0xc5300030
    ctx->pc = 0x1a3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3878: 0xc7838980
    ctx->pc = 0x1a3878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a387c: 0x460c1601
    ctx->pc = 0x1a387cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1a3880: 0xc52e0028
    ctx->pc = 0x1a3880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a3884: 0xc5310034
    ctx->pc = 0x1a3884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3888: 0x460f15c1
    ctx->pc = 0x1a3888u;
    ctx->f[23] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x1a388c: 0x4617c642
    ctx->pc = 0x1a388cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a3890: 0x460d0e01
    ctx->pc = 0x1a3890u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1a3894: 0x46100dc1
    ctx->pc = 0x1a3894u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[16]);
    // 0x1a3898: 0x4617c5c2
    ctx->pc = 0x1a3898u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a389c: 0x4617c818
    ctx->pc = 0x1a389cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x1a38a0: 0x460e1e01
    ctx->pc = 0x1a38a0u;
    ctx->f[24] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x1a38a4: 0x46111dc1
    ctx->pc = 0x1a38a4u;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[17]);
    // 0x1a38a8: 0x4617c61c
    ctx->pc = 0x1a38a8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[23]));
    // 0x1a38ac: 0x4480b800
    ctx->pc = 0x1a38acu;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x1a38b0: 0x0
    ctx->pc = 0x1a38b0u;
    // NOP
    // 0x1a38b4: 0x4617c034
    ctx->pc = 0x1a38b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a38b8: 0x0
    ctx->pc = 0x1a38b8u;
    // NOP
    // 0x1a38bc: 0x45020006
    ctx->pc = 0x1A38BCu;
    {
        const bool branch_taken_0x1a38bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a38bc) {
            ctx->pc = 0x1A38C0u;
            ctx->f[2] = FPU_MOV_S(ctx->f[12]);
            ctx->pc = 0x1A38D8u;
            goto label_1a38d8;
        }
    }
    ctx->pc = 0x1A38C4u;
    // 0x1a38c4: 0x46029301
    ctx->pc = 0x1a38c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[2]);
    // 0x1a38c8: 0x46019b41
    ctx->pc = 0x1a38c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[1]);
    // 0x1a38cc: 0x100000a6
    ctx->pc = 0x1A38CCu;
    {
        const bool branch_taken_0x1a38cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A38D0u;
        ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        if (branch_taken_0x1a38cc) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A38D4u;
    // 0x1a38d4: 0x46006086
    ctx->pc = 0x1a38d4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
label_1a38d8:
    // 0x1a38d8: 0x46006846
    ctx->pc = 0x1a38d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x1a38dc: 0x460c9301
    ctx->pc = 0x1a38dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[12]);
    // 0x1a38e0: 0x460d9b41
    ctx->pc = 0x1a38e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[13]);
    // 0x1a38e4: 0x460070c6
    ctx->pc = 0x1a38e4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
    // 0x1a38e8: 0x460c65c2
    ctx->pc = 0x1a38e8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a38ec: 0x460d6802
    ctx->pc = 0x1a38ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a38f0: 0x460e2b81
    ctx->pc = 0x1a38f0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[14]);
    // 0x1a38f4: 0x4600b818
    ctx->pc = 0x1a38f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1a38f8: 0x460e701c
    ctx->pc = 0x1a38f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a38fc: 0x46040034
    ctx->pc = 0x1a38fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3900: 0x0
    ctx->pc = 0x1a3900u;
    // NOP
    // 0x1a3904: 0x45010098
    ctx->pc = 0x1A3904u;
    {
        const bool branch_taken_0x1a3904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3904) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A390Cu;
    // 0x1a390c: 0x46109b41
    ctx->pc = 0x1a390cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[16]);
    // 0x1a3910: 0x460f9301
    ctx->pc = 0x1a3910u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[15]);
    // 0x1a3914: 0x46007886
    ctx->pc = 0x1a3914u;
    ctx->f[2] = FPU_MOV_S(ctx->f[15]);
    // 0x1a3918: 0x460c63c2
    ctx->pc = 0x1a3918u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a391c: 0x460d6802
    ctx->pc = 0x1a391cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a3920: 0x46112b81
    ctx->pc = 0x1a3920u;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[17]);
    // 0x1a3924: 0x46007818
    ctx->pc = 0x1a3924u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1a3928: 0x460e701c
    ctx->pc = 0x1a3928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a392c: 0x46040034
    ctx->pc = 0x1a392cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3930: 0x46008046
    ctx->pc = 0x1a3930u;
    ctx->f[1] = FPU_MOV_S(ctx->f[16]);
    // 0x1a3934: 0x4501008c
    ctx->pc = 0x1A3934u;
    {
        const bool branch_taken_0x1a3934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3938u;
        ctx->f[3] = FPU_MOV_S(ctx->f[17]);
        if (branch_taken_0x1a3934) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A393Cu;
    // 0x1a393c: 0x100000a0
    ctx->pc = 0x1A393Cu;
    {
        const bool branch_taken_0x1a393c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a393c) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3944u;
label_1a3944:
    // 0x1a3944: 0xe7a50000
    ctx->pc = 0x1a3944u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3948: 0xc52d0030
    ctx->pc = 0x1a3948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a394c: 0xc52e0034
    ctx->pc = 0x1a394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a3950: 0xc52f0038
    ctx->pc = 0x1a3950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3954: 0xc530003c
    ctx->pc = 0x1a3954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3958: 0xc5310040
    ctx->pc = 0x1a3958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a395c: 0xc068c9c
    ctx->pc = 0x1A395Cu;
    SET_GPR_U32(ctx, 31, 0x1A3964u);
    ctx->pc = 0x1A3960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A3270u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetLineToPoint_0x1a3270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3964u; }
        else if (ctx->pc != 0x1A3964u) { ctx->pc = 0x1A3964u; }
    }
    if (ctx->pc != 0x1A3964u) { return; }
    ctx->pc = 0x1A3964u;
    // 0x1a3964: 0x46040036
    ctx->pc = 0x1a3964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3968: 0x0
    ctx->pc = 0x1a3968u;
    // NOP
    // 0x1a396c: 0x45000094
    ctx->pc = 0x1A396Cu;
    {
        const bool branch_taken_0x1a396c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a396c) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3974u;
    // 0x1a3974: 0xc7828988
    ctx->pc = 0x1a3974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3978: 0xc52c002c
    ctx->pc = 0x1a3978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a397c: 0xc52f0038
    ctx->pc = 0x1a397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3980: 0xc7818984
    ctx->pc = 0x1a3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3984: 0xc52d0030
    ctx->pc = 0x1a3984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3988: 0xc530003c
    ctx->pc = 0x1a3988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a398c: 0xc7838980
    ctx->pc = 0x1a398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a3990: 0x460c1601
    ctx->pc = 0x1a3990u;
    ctx->f[24] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1a3994: 0xc52e0034
    ctx->pc = 0x1a3994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a3998: 0xc5310040
    ctx->pc = 0x1a3998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a399c: 0x460f15c1
    ctx->pc = 0x1a399cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x1a39a0: 0x4617c642
    ctx->pc = 0x1a39a0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a39a4: 0x460d0e01
    ctx->pc = 0x1a39a4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1a39a8: 0x46100dc1
    ctx->pc = 0x1a39a8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[16]);
    // 0x1a39ac: 0x4617c5c2
    ctx->pc = 0x1a39acu;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a39b0: 0x4617c818
    ctx->pc = 0x1a39b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x1a39b4: 0x460e1e01
    ctx->pc = 0x1a39b4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x1a39b8: 0x46111dc1
    ctx->pc = 0x1a39b8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[17]);
    // 0x1a39bc: 0x4617c61c
    ctx->pc = 0x1a39bcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[23]));
    // 0x1a39c0: 0x4480b800
    ctx->pc = 0x1a39c0u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x1a39c4: 0x0
    ctx->pc = 0x1a39c4u;
    // NOP
    // 0x1a39c8: 0x4617c034
    ctx->pc = 0x1a39c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a39cc: 0x0
    ctx->pc = 0x1a39ccu;
    // NOP
    // 0x1a39d0: 0x45020006
    ctx->pc = 0x1A39D0u;
    {
        const bool branch_taken_0x1a39d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a39d0) {
            ctx->pc = 0x1A39D4u;
            ctx->f[2] = FPU_MOV_S(ctx->f[12]);
            ctx->pc = 0x1A39ECu;
            goto label_1a39ec;
        }
    }
    ctx->pc = 0x1A39D8u;
    // 0x1a39d8: 0x46029301
    ctx->pc = 0x1a39d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[2]);
    // 0x1a39dc: 0x46019b41
    ctx->pc = 0x1a39dcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[1]);
    // 0x1a39e0: 0x10000061
    ctx->pc = 0x1A39E0u;
    {
        const bool branch_taken_0x1a39e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A39E4u;
        ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        if (branch_taken_0x1a39e0) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A39E8u;
    // 0x1a39e8: 0x46006086
    ctx->pc = 0x1a39e8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
label_1a39ec:
    // 0x1a39ec: 0x46006846
    ctx->pc = 0x1a39ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x1a39f0: 0x460c9301
    ctx->pc = 0x1a39f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[12]);
    // 0x1a39f4: 0x460d9b41
    ctx->pc = 0x1a39f4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[13]);
    // 0x1a39f8: 0x460070c6
    ctx->pc = 0x1a39f8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
    // 0x1a39fc: 0x460c65c2
    ctx->pc = 0x1a39fcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a3a00: 0x460d6802
    ctx->pc = 0x1a3a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a3a04: 0x460e2b81
    ctx->pc = 0x1a3a04u;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[14]);
    // 0x1a3a08: 0x4600b818
    ctx->pc = 0x1a3a08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1a3a0c: 0x460e701c
    ctx->pc = 0x1a3a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a3a10: 0x46040034
    ctx->pc = 0x1a3a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3a14: 0x0
    ctx->pc = 0x1a3a14u;
    // NOP
    // 0x1a3a18: 0x45010053
    ctx->pc = 0x1A3A18u;
    {
        const bool branch_taken_0x1a3a18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3a18) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A3A20u;
    // 0x1a3a20: 0x46109b41
    ctx->pc = 0x1a3a20u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[16]);
    // 0x1a3a24: 0x460f9301
    ctx->pc = 0x1a3a24u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[15]);
    // 0x1a3a28: 0x46007886
    ctx->pc = 0x1a3a28u;
    ctx->f[2] = FPU_MOV_S(ctx->f[15]);
    // 0x1a3a2c: 0x460c63c2
    ctx->pc = 0x1a3a2cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a3a30: 0x460d6802
    ctx->pc = 0x1a3a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a3a34: 0x46112b81
    ctx->pc = 0x1a3a34u;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[17]);
    // 0x1a3a38: 0x46007818
    ctx->pc = 0x1a3a38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1a3a3c: 0x460e701c
    ctx->pc = 0x1a3a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a3a40: 0x46040034
    ctx->pc = 0x1a3a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3a44: 0x46008046
    ctx->pc = 0x1a3a44u;
    ctx->f[1] = FPU_MOV_S(ctx->f[16]);
    // 0x1a3a48: 0x45010047
    ctx->pc = 0x1A3A48u;
    {
        const bool branch_taken_0x1a3a48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3A4Cu;
        ctx->f[3] = FPU_MOV_S(ctx->f[17]);
        if (branch_taken_0x1a3a48) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A3A50u;
    // 0x1a3a50: 0x1000005b
    ctx->pc = 0x1A3A50u;
    {
        const bool branch_taken_0x1a3a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a3a50) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3A58u;
label_1a3a58:
    // 0x1a3a58: 0xe7a50000
    ctx->pc = 0x1a3a58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3a5c: 0xc52d003c
    ctx->pc = 0x1a3a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3a60: 0xc52e0040
    ctx->pc = 0x1a3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a3a64: 0xc52f0014
    ctx->pc = 0x1a3a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3a68: 0xc5300018
    ctx->pc = 0x1a3a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3a6c: 0xc531001c
    ctx->pc = 0x1a3a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3a70: 0xc068c9c
    ctx->pc = 0x1A3A70u;
    SET_GPR_U32(ctx, 31, 0x1A3A78u);
    ctx->pc = 0x1A3A74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A3270u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetLineToPoint_0x1a3270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A78u; }
        else if (ctx->pc != 0x1A3A78u) { ctx->pc = 0x1A3A78u; }
    }
    if (ctx->pc != 0x1A3A78u) { return; }
    ctx->pc = 0x1A3A78u;
    // 0x1a3a78: 0x46040036
    ctx->pc = 0x1a3a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3a7c: 0x0
    ctx->pc = 0x1a3a7cu;
    // NOP
    // 0x1a3a80: 0x4500004f
    ctx->pc = 0x1A3A80u;
    {
        const bool branch_taken_0x1a3a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3a80) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3A88u;
    // 0x1a3a88: 0xc7828988
    ctx->pc = 0x1a3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a3a8c: 0xc52c0038
    ctx->pc = 0x1a3a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3a90: 0xc52f0014
    ctx->pc = 0x1a3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1a3a94: 0xc7818984
    ctx->pc = 0x1a3a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3a98: 0xc52d003c
    ctx->pc = 0x1a3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3a9c: 0xc5300018
    ctx->pc = 0x1a3a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1a3aa0: 0xc7838980
    ctx->pc = 0x1a3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a3aa4: 0x460c1601
    ctx->pc = 0x1a3aa4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1a3aa8: 0xc52e0040
    ctx->pc = 0x1a3aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a3aac: 0xc531001c
    ctx->pc = 0x1a3aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x1a3ab0: 0x460f15c1
    ctx->pc = 0x1a3ab0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x1a3ab4: 0x4617c642
    ctx->pc = 0x1a3ab4u;
    ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a3ab8: 0x460d0e01
    ctx->pc = 0x1a3ab8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x1a3abc: 0x46100dc1
    ctx->pc = 0x1a3abcu;
    ctx->f[23] = FPU_SUB_S(ctx->f[1], ctx->f[16]);
    // 0x1a3ac0: 0x4617c5c2
    ctx->pc = 0x1a3ac0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x1a3ac4: 0x4617c818
    ctx->pc = 0x1a3ac4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
    // 0x1a3ac8: 0x460e1e01
    ctx->pc = 0x1a3ac8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x1a3acc: 0x46111dc1
    ctx->pc = 0x1a3accu;
    ctx->f[23] = FPU_SUB_S(ctx->f[3], ctx->f[17]);
    // 0x1a3ad0: 0x4617c61c
    ctx->pc = 0x1a3ad0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[24], ctx->f[23]));
    // 0x1a3ad4: 0x4480b800
    ctx->pc = 0x1a3ad4u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x1a3ad8: 0x0
    ctx->pc = 0x1a3ad8u;
    // NOP
    // 0x1a3adc: 0x4617c034
    ctx->pc = 0x1a3adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3ae0: 0x0
    ctx->pc = 0x1a3ae0u;
    // NOP
    // 0x1a3ae4: 0x45020006
    ctx->pc = 0x1A3AE4u;
    {
        const bool branch_taken_0x1a3ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3ae4) {
            ctx->pc = 0x1A3AE8u;
            ctx->f[2] = FPU_MOV_S(ctx->f[12]);
            ctx->pc = 0x1A3B00u;
            goto label_1a3b00;
        }
    }
    ctx->pc = 0x1A3AECu;
    // 0x1a3aec: 0x46029301
    ctx->pc = 0x1a3aecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[2]);
    // 0x1a3af0: 0x46019b41
    ctx->pc = 0x1a3af0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[1]);
    // 0x1a3af4: 0x1000001c
    ctx->pc = 0x1A3AF4u;
    {
        const bool branch_taken_0x1a3af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3AF8u;
        ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
        if (branch_taken_0x1a3af4) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A3AFCu;
    // 0x1a3afc: 0x46006086
    ctx->pc = 0x1a3afcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
label_1a3b00:
    // 0x1a3b00: 0x46006846
    ctx->pc = 0x1a3b00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
    // 0x1a3b04: 0x460c9301
    ctx->pc = 0x1a3b04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[12]);
    // 0x1a3b08: 0x460d9b41
    ctx->pc = 0x1a3b08u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[13]);
    // 0x1a3b0c: 0x460070c6
    ctx->pc = 0x1a3b0cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[14]);
    // 0x1a3b10: 0x460c65c2
    ctx->pc = 0x1a3b10u;
    ctx->f[23] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a3b14: 0x460d6802
    ctx->pc = 0x1a3b14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a3b18: 0x460e2b81
    ctx->pc = 0x1a3b18u;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[14]);
    // 0x1a3b1c: 0x4600b818
    ctx->pc = 0x1a3b1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1a3b20: 0x460e701c
    ctx->pc = 0x1a3b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a3b24: 0x46040034
    ctx->pc = 0x1a3b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3b28: 0x0
    ctx->pc = 0x1a3b28u;
    // NOP
    // 0x1a3b2c: 0x4501000e
    ctx->pc = 0x1A3B2Cu;
    {
        const bool branch_taken_0x1a3b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3b2c) {
            ctx->pc = 0x1A3B68u;
            goto label_1a3b68;
        }
    }
    ctx->pc = 0x1A3B34u;
    // 0x1a3b34: 0x46109b41
    ctx->pc = 0x1a3b34u;
    ctx->f[13] = FPU_SUB_S(ctx->f[19], ctx->f[16]);
    // 0x1a3b38: 0x460f9301
    ctx->pc = 0x1a3b38u;
    ctx->f[12] = FPU_SUB_S(ctx->f[18], ctx->f[15]);
    // 0x1a3b3c: 0x46007886
    ctx->pc = 0x1a3b3cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[15]);
    // 0x1a3b40: 0x460c63c2
    ctx->pc = 0x1a3b40u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a3b44: 0x460d6802
    ctx->pc = 0x1a3b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a3b48: 0x46112b81
    ctx->pc = 0x1a3b48u;
    ctx->f[14] = FPU_SUB_S(ctx->f[5], ctx->f[17]);
    // 0x1a3b4c: 0x46007818
    ctx->pc = 0x1a3b4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1a3b50: 0x460e701c
    ctx->pc = 0x1a3b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a3b54: 0x46040034
    ctx->pc = 0x1a3b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3b58: 0x46008046
    ctx->pc = 0x1a3b58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[16]);
    // 0x1a3b5c: 0x45000018
    ctx->pc = 0x1A3B5Cu;
    {
        const bool branch_taken_0x1a3b5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3B60u;
        ctx->f[3] = FPU_MOV_S(ctx->f[17]);
        if (branch_taken_0x1a3b5c) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3B64u;
    // 0x1a3b64: 0x0
    ctx->pc = 0x1a3b64u;
    // NOP
label_1a3b68:
    // 0x1a3b68: 0x14400003
    ctx->pc = 0x1A3B68u;
    {
        const bool branch_taken_0x1a3b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3b68) {
            ctx->pc = 0x1A3B78u;
            goto label_1a3b78;
        }
    }
    ctx->pc = 0x1A3B70u;
    // 0x1a3b70: 0x10000007
    ctx->pc = 0x1A3B70u;
    {
        const bool branch_taken_0x1a3b70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3B74u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x1a3b70) {
            ctx->pc = 0x1A3B90u;
            goto label_1a3b90;
        }
    }
    ctx->pc = 0x1A3B78u;
label_1a3b78:
    // 0x1a3b78: 0x46140034
    ctx->pc = 0x1a3b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3b7c: 0x0
    ctx->pc = 0x1a3b7cu;
    // NOP
    // 0x1a3b80: 0x4500000f
    ctx->pc = 0x1A3B80u;
    {
        const bool branch_taken_0x1a3b80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3b80) {
            ctx->pc = 0x1A3BC0u;
            goto label_1a3bc0;
        }
    }
    ctx->pc = 0x1A3B88u;
    // 0x1a3b88: 0x46000506
    ctx->pc = 0x1a3b88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a3b8c: 0x0
    ctx->pc = 0x1a3b8cu;
    // NOP
label_1a3b90:
    // 0x1a3b90: 0x8d220044
    ctx->pc = 0x1a3b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x1a3b94: 0xe796898c
    ctx->pc = 0x1a3b94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), bits); }
    // 0x1a3b98: 0xe7828978
    ctx->pc = 0x1a3b98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936952), bits); }
    // 0x1a3b9c: 0xe7818974
    ctx->pc = 0x1a3b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), bits); }
    // 0x1a3ba0: 0xe7838970
    ctx->pc = 0x1a3ba0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), bits); }
    // 0x1a3ba4: 0xe78c896c
    ctx->pc = 0x1a3ba4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), bits); }
    // 0x1a3ba8: 0xe78d8968
    ctx->pc = 0x1a3ba8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), bits); }
    // 0x1a3bac: 0xe78e8964
    ctx->pc = 0x1a3bacu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936932), bits); }
    // 0x1a3bb0: 0xe7958960
    ctx->pc = 0x1a3bb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), bits); }
    // 0x1a3bb4: 0xe794895c
    ctx->pc = 0x1a3bb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936924), bits); }
    // 0x1a3bb8: 0xaf898958
    ctx->pc = 0x1a3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 9));
    // 0x1a3bbc: 0x0
    ctx->pc = 0x1a3bbcu;
    // NOP
label_1a3bc0:
    // 0x1a3bc0: 0x2508ffff
    ctx->pc = 0x1a3bc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
label_1a3bc4:
    // 0x1a3bc4: 0x501fe0e
    ctx->pc = 0x1A3BC4u;
    {
        const bool branch_taken_0x1a3bc4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1A3BC8u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 72));
        if (branch_taken_0x1a3bc4) {
            ctx->pc = 0x1A3400u;
            goto label_1a3400;
        }
    }
    ctx->pc = 0x1A3BCCu;
    // 0x1a3bcc: 0x0
    ctx->pc = 0x1a3bccu;
    // NOP
label_1a3bd0:
    // 0x1a3bd0: 0x718c0
    ctx->pc = 0x1a3bd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 3));
label_1a3bd4:
    // 0x1a3bd4: 0x671821
    ctx->pc = 0x1a3bd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1a3bd8: 0x31840
    ctx->pc = 0x1a3bd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a3bdc: 0x24630007
    ctx->pc = 0x1a3bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7));
    // 0x1a3be0: 0x31880
    ctx->pc = 0x1a3be0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3be4: 0x24c6ffff
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a3be8: 0x4c1fde1
    ctx->pc = 0x1A3BE8u;
    {
        const bool branch_taken_0x1a3be8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1A3BECu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a3be8) {
            ctx->pc = 0x1A3370u;
            goto label_1a3370;
        }
    }
    ctx->pc = 0x1A3BF0u;
label_1a3bf0:
    // 0x1a3bf0: 0x7bbf0040
    ctx->pc = 0x1a3bf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3bf4: 0xc7bc0030
    ctx->pc = 0x1a3bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1a3bf8: 0xc7bb002c
    ctx->pc = 0x1a3bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1a3bfc: 0xc7ba0028
    ctx->pc = 0x1a3bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1a3c00: 0xc7b90024
    ctx->pc = 0x1a3c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a3c04: 0xc7b80020
    ctx->pc = 0x1a3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a3c08: 0xc7b7001c
    ctx->pc = 0x1a3c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a3c0c: 0xc7b60018
    ctx->pc = 0x1a3c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a3c10: 0xc7b50014
    ctx->pc = 0x1a3c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3c14: 0xc7b40010
    ctx->pc = 0x1a3c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3c18: 0x3e00008
    ctx->pc = 0x1A3C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3370u: goto label_1a3370;
            case 0x1A3400u: goto label_1a3400;
            case 0x1A3494u: goto label_1a3494;
            case 0x1A356Cu: goto label_1a356c;
            case 0x1A3644u: goto label_1a3644;
            case 0x1A371Cu: goto label_1a371c;
            case 0x1A3720u: goto label_1a3720;
            case 0x1A37C4u: goto label_1a37c4;
            case 0x1A3830u: goto label_1a3830;
            case 0x1A38D8u: goto label_1a38d8;
            case 0x1A3944u: goto label_1a3944;
            case 0x1A39ECu: goto label_1a39ec;
            case 0x1A3A58u: goto label_1a3a58;
            case 0x1A3B00u: goto label_1a3b00;
            case 0x1A3B68u: goto label_1a3b68;
            case 0x1A3B78u: goto label_1a3b78;
            case 0x1A3B90u: goto label_1a3b90;
            case 0x1A3BC0u: goto label_1a3bc0;
            case 0x1A3BC4u: goto label_1a3bc4;
            case 0x1A3BD0u: goto label_1a3bd0;
            case 0x1A3BD4u: goto label_1a3bd4;
            case 0x1A3BF0u: goto label_1a3bf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3C20u;
}
