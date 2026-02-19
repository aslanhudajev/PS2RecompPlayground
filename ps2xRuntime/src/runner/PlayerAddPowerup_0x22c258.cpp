#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerAddPowerup
// Address: 0x22c258 - 0x22c44c
void PlayerAddPowerup_0x22c258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c258u;

    // 0x22c258: 0x682d
    ctx->pc = 0x22c258u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c25c: 0x3c01c000
    ctx->pc = 0x22c25cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x22c260: 0x44811800
    ctx->pc = 0x22c260u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x22c264: 0x3c030033
    ctx->pc = 0x22c264u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x22c268: 0x24634910
    ctx->pc = 0x22c268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x22c26c: 0x8c820000
    ctx->pc = 0x22c26cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22c270: 0x21080
    ctx->pc = 0x22c270u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x22c274: 0x431021
    ctx->pc = 0x22c274u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c278: 0x8c420000
    ctx->pc = 0x22c278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c27c: 0xc4400058
    ctx->pc = 0x22c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c280: 0x46006882
    ctx->pc = 0x22c280u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x22c284: 0x382d
    ctx->pc = 0x22c284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c288: 0x248a0148
    ctx->pc = 0x22c288u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 4), 328));
    // 0x22c28c: 0x24890150
    ctx->pc = 0x22c28cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 336));
    // 0x22c290: 0x44800800
    ctx->pc = 0x22c290u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x22c294: 0x248b014c
    ctx->pc = 0x22c294u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 4), 332));
    // 0x22c298: 0x24880144
    ctx->pc = 0x22c298u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 324));
    // 0x22c29c: 0x3c013f00
    ctx->pc = 0x22c29cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x22c2a0: 0x44812000
    ctx->pc = 0x22c2a0u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x22c2a4: 0x30cc0008
    ctx->pc = 0x22c2a4u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 6), 8));
    // 0x22c2a8: 0x3c0e0033
    ctx->pc = 0x22c2a8u;
    SET_GPR_U32(ctx, 14, ((uint32_t)51 << 16));
    // 0x22c2ac: 0x71900
    ctx->pc = 0x22c2acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
label_22c2b0:
    // 0x22c2b0: 0x1431021
    ctx->pc = 0x22c2b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x22c2b4: 0x8c420000
    ctx->pc = 0x22c2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c2b8: 0x54450026
    ctx->pc = 0x22C2B8u;
    {
        const bool branch_taken_0x22c2b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x22c2b8) {
            ctx->pc = 0x22C2BCu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x22C354u;
            goto label_22c354;
        }
    }
    ctx->pc = 0x22C2C0u;
    // 0x22c2c0: 0x1231021
    ctx->pc = 0x22c2c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x22c2c4: 0x8c420000
    ctx->pc = 0x22c2c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c2c8: 0x54460022
    ctx->pc = 0x22C2C8u;
    {
        const bool branch_taken_0x22c2c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x22c2c8) {
            ctx->pc = 0x22C2CCu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x22C354u;
            goto label_22c354;
        }
    }
    ctx->pc = 0x22C2D0u;
    // 0x22c2d0: 0x460c0834
    ctx->pc = 0x22c2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c2d4: 0x0
    ctx->pc = 0x22c2d4u;
    // NOP
    // 0x22c2d8: 0x45000004
    ctx->pc = 0x22C2D8u;
    {
        const bool branch_taken_0x22c2d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C2DCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        if (branch_taken_0x22c2d8) {
            ctx->pc = 0x22C2ECu;
            goto label_22c2ec;
        }
    }
    ctx->pc = 0x22C2E0u;
    // 0x22c2e0: 0xc4400000
    ctx->pc = 0x22c2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c2e4: 0x46006000
    ctx->pc = 0x22c2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x22c2e8: 0xe4400000
    ctx->pc = 0x22c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_22c2ec:
    // 0x22c2ec: 0x71100
    ctx->pc = 0x22c2ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
    // 0x22c2f0: 0x1021021
    ctx->pc = 0x22c2f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22c2f4: 0x44800000
    ctx->pc = 0x22c2f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x22c2f8: 0xc44d0000
    ctx->pc = 0x22c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22c2fc: 0x460d0036
    ctx->pc = 0x22c2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c300: 0x45000008
    ctx->pc = 0x22C300u;
    {
        const bool branch_taken_0x22c300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c300) {
            ctx->pc = 0x22C324u;
            goto label_22c324;
        }
    }
    ctx->pc = 0x22C308u;
    // 0x22c308: 0x46020034
    ctx->pc = 0x22c308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c30c: 0x45000005
    ctx->pc = 0x22C30Cu;
    {
        const bool branch_taken_0x22c30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c30c) {
            ctx->pc = 0x22C324u;
            goto label_22c324;
        }
    }
    ctx->pc = 0x22C314u;
    // 0x22c314: 0x46041002
    ctx->pc = 0x22c314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x22c318: 0x460d0000
    ctx->pc = 0x22c318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x22c31c: 0x10000007
    ctx->pc = 0x22C31Cu;
    {
        const bool branch_taken_0x22c31c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C320u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        if (branch_taken_0x22c31c) {
            ctx->pc = 0x22C33Cu;
            goto label_22c33c;
        }
    }
    ctx->pc = 0x22C324u;
label_22c324:
    // 0x22c324: 0x46011034
    ctx->pc = 0x22c324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c328: 0x0
    ctx->pc = 0x22c328u;
    // NOP
    // 0x22c32c: 0x45000003
    ctx->pc = 0x22C32Cu;
    {
        const bool branch_taken_0x22c32c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C330u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x22c32c) {
            ctx->pc = 0x22C33Cu;
            goto label_22c33c;
        }
    }
    ctx->pc = 0x22C334u;
    // 0x22c334: 0x1021021
    ctx->pc = 0x22c334u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22c338: 0xe4420000
    ctx->pc = 0x22c338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_22c33c:
    // 0x22c33c: 0x11800041
    ctx->pc = 0x22C33Cu;
    {
        const bool branch_taken_0x22c33c = (GPR_U32(ctx, 12) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C340u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x22c33c) {
            ctx->pc = 0x22C444u;
            goto label_22c444;
        }
    }
    ctx->pc = 0x22C344u;
    // 0x22c344: 0x1021021
    ctx->pc = 0x22c344u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22c348: 0xc4400000
    ctx->pc = 0x22c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c34c: 0x3e00008
    ctx->pc = 0x22C34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C350u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294953832), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C2B0u: goto label_22c2b0;
            case 0x22C2ECu: goto label_22c2ec;
            case 0x22C324u: goto label_22c324;
            case 0x22C33Cu: goto label_22c33c;
            case 0x22C354u: goto label_22c354;
            case 0x22C380u: goto label_22c380;
            case 0x22C3B4u: goto label_22c3b4;
            case 0x22C3F4u: goto label_22c3f4;
            case 0x22C3F8u: goto label_22c3f8;
            case 0x22C41Cu: goto label_22c41c;
            case 0x22C444u: goto label_22c444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C354u;
label_22c354:
    // 0x22c354: 0x28e20008
    ctx->pc = 0x22c354u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 8));
    // 0x22c358: 0x1440ffd5
    ctx->pc = 0x22C358u;
    {
        const bool branch_taken_0x22c358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22C35Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x22c358) {
            ctx->pc = 0x22C2B0u;
            goto label_22c2b0;
        }
    }
    ctx->pc = 0x22C360u;
    // 0x22c360: 0x382d
    ctx->pc = 0x22c360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c364: 0x24890144
    ctx->pc = 0x22c364u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 324));
    // 0x22c368: 0x44802000
    ctx->pc = 0x22c368u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 0);
    // 0x22c36c: 0x24880148
    ctx->pc = 0x22c36cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 328));
    // 0x22c370: 0x3c01c000
    ctx->pc = 0x22c370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x22c374: 0x44812800
    ctx->pc = 0x22c374u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 1);
    // 0x22c378: 0x71900
    ctx->pc = 0x22c378u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
    // 0x22c37c: 0x0
    ctx->pc = 0x22c37cu;
    // NOP
label_22c380:
    // 0x22c380: 0x1231021
    ctx->pc = 0x22c380u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x22c384: 0xc4400000
    ctx->pc = 0x22c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c388: 0x46040034
    ctx->pc = 0x22c388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c38c: 0x0
    ctx->pc = 0x22c38cu;
    // NOP
    // 0x22c390: 0x45000008
    ctx->pc = 0x22C390u;
    {
        const bool branch_taken_0x22c390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C394u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        if (branch_taken_0x22c390) {
            ctx->pc = 0x22C3B4u;
            goto label_22c3b4;
        }
    }
    ctx->pc = 0x22C398u;
    // 0x22c398: 0x8c420000
    ctx->pc = 0x22c398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c39c: 0x3c01c000
    ctx->pc = 0x22c39cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x22c3a0: 0x44810000
    ctx->pc = 0x22c3a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22c3a4: 0x14450003
    ctx->pc = 0x22C3A4u;
    {
        const bool branch_taken_0x22c3a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x22c3a4) {
            ctx->pc = 0x22C3B4u;
            goto label_22c3b4;
        }
    }
    ctx->pc = 0x22C3ACu;
    // 0x22c3ac: 0x3c01bf80
    ctx->pc = 0x22c3acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x22c3b0: 0x44810000
    ctx->pc = 0x22c3b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_22c3b4:
    // 0x22c3b4: 0x46051832
    ctx->pc = 0x22c3b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c3b8: 0x0
    ctx->pc = 0x22c3b8u;
    // NOP
    // 0x22c3bc: 0x4503000d
    ctx->pc = 0x22C3BCu;
    {
        const bool branch_taken_0x22c3bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c3bc) {
            ctx->pc = 0x22C3C0u;
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x22C3F4u;
            goto label_22c3f4;
        }
    }
    ctx->pc = 0x22C3C4u;
    // 0x22c3c4: 0x44800800
    ctx->pc = 0x22c3c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x22c3c8: 0x46010032
    ctx->pc = 0x22c3c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c3cc: 0x0
    ctx->pc = 0x22c3ccu;
    // NOP
    // 0x22c3d0: 0x45030008
    ctx->pc = 0x22C3D0u;
    {
        const bool branch_taken_0x22c3d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c3d0) {
            ctx->pc = 0x22C3D4u;
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x22C3F4u;
            goto label_22c3f4;
        }
    }
    ctx->pc = 0x22C3D8u;
    // 0x22c3d8: 0x46000836
    ctx->pc = 0x22c3d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c3dc: 0x45000006
    ctx->pc = 0x22C3DCu;
    {
        const bool branch_taken_0x22c3dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c3dc) {
            ctx->pc = 0x22C3F8u;
            goto label_22c3f8;
        }
    }
    ctx->pc = 0x22C3E4u;
    // 0x22c3e4: 0x46030034
    ctx->pc = 0x22c3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c3e8: 0x45000003
    ctx->pc = 0x22C3E8u;
    {
        const bool branch_taken_0x22c3e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c3e8) {
            ctx->pc = 0x22C3F8u;
            goto label_22c3f8;
        }
    }
    ctx->pc = 0x22C3F0u;
    // 0x22c3f0: 0x460000c6
    ctx->pc = 0x22c3f0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_22c3f4:
    // 0x22c3f4: 0xe0682d
    ctx->pc = 0x22c3f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22c3f8:
    // 0x22c3f8: 0x46041832
    ctx->pc = 0x22c3f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c3fc: 0x0
    ctx->pc = 0x22c3fcu;
    // NOP
    // 0x22c400: 0x45010006
    ctx->pc = 0x22C400u;
    {
        const bool branch_taken_0x22c400 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C404u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 13), 4));
        if (branch_taken_0x22c400) {
            ctx->pc = 0x22C41Cu;
            goto label_22c41c;
        }
    }
    ctx->pc = 0x22C408u;
    // 0x22c408: 0x24e70001
    ctx->pc = 0x22c408u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x22c40c: 0x28e20008
    ctx->pc = 0x22c40cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 8));
    // 0x22c410: 0x1440ffdb
    ctx->pc = 0x22C410u;
    {
        const bool branch_taken_0x22c410 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22C414u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x22c410) {
            ctx->pc = 0x22C380u;
            goto label_22c380;
        }
    }
    ctx->pc = 0x22C418u;
    // 0x22c418: 0xd1900
    ctx->pc = 0x22c418u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 13), 4));
label_22c41c:
    // 0x22c41c: 0x831021
    ctx->pc = 0x22c41cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22c420: 0xe4420144
    ctx->pc = 0x22c420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x22c424: 0xac450148
    ctx->pc = 0x22c424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
    // 0x22c428: 0xe44c014c
    ctx->pc = 0x22c428u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x22c42c: 0x40182d
    ctx->pc = 0x22c42cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c430: 0x30c20008
    ctx->pc = 0x22c430u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8));
    // 0x22c434: 0x10400003
    ctx->pc = 0x22C434u;
    {
        const bool branch_taken_0x22c434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C438u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 6));
        if (branch_taken_0x22c434) {
            ctx->pc = 0x22C444u;
            goto label_22c444;
        }
    }
    ctx->pc = 0x22C43Cu;
    // 0x22c43c: 0x3c020033
    ctx->pc = 0x22c43cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22c440: 0xe442cb68
    ctx->pc = 0x22c440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294953832), bits); }
label_22c444:
    // 0x22c444: 0x3e00008
    ctx->pc = 0x22C444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C2B0u: goto label_22c2b0;
            case 0x22C2ECu: goto label_22c2ec;
            case 0x22C324u: goto label_22c324;
            case 0x22C33Cu: goto label_22c33c;
            case 0x22C354u: goto label_22c354;
            case 0x22C380u: goto label_22c380;
            case 0x22C3B4u: goto label_22c3b4;
            case 0x22C3F4u: goto label_22c3f4;
            case 0x22C3F8u: goto label_22c3f8;
            case 0x22C41Cu: goto label_22c41c;
            case 0x22C444u: goto label_22c444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C44Cu;
}
