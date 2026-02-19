#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inv_sqrtf
// Address: 0x2c63c0 - 0x2c64d0
void inv_sqrtf_0x2c63c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c63c0u;

    // 0x2c63c0: 0x3c020038
    ctx->pc = 0x2c63c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c63c4: 0x3c0149f4
    ctx->pc = 0x2c63c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18932 << 16));
    // 0x2c63c8: 0x34212400
    ctx->pc = 0x2c63c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 9216));
    // 0x2c63cc: 0x44810000
    ctx->pc = 0x2c63ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c63d0: 0x460c0036
    ctx->pc = 0x2c63d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c63d4: 0x0
    ctx->pc = 0x2c63d4u;
    // NOP
    // 0x2c63d8: 0x45000003
    ctx->pc = 0x2C63D8u;
    {
        const bool branch_taken_0x2c63d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C63DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294947784));
        if (branch_taken_0x2c63d8) {
            ctx->pc = 0x2C63E8u;
            goto label_2c63e8;
        }
    }
    ctx->pc = 0x2C63E0u;
    // 0x2c63e0: 0x10000037
    ctx->pc = 0x2C63E0u;
    {
        const bool branch_taken_0x2c63e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C63E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
        if (branch_taken_0x2c63e0) {
            ctx->pc = 0x2C64C0u;
            goto label_2c64c0;
        }
    }
    ctx->pc = 0x2C63E8u;
label_2c63e8:
    // 0x2c63e8: 0x3c0147c3
    ctx->pc = 0x2c63e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2c63ec: 0x34215000
    ctx->pc = 0x2c63ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2c63f0: 0x44810000
    ctx->pc = 0x2c63f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c63f4: 0x460c0036
    ctx->pc = 0x2c63f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c63f8: 0x45000009
    ctx->pc = 0x2C63F8u;
    {
        const bool branch_taken_0x2c63f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c63f8) {
            ctx->pc = 0x2C6420u;
            goto label_2c6420;
        }
    }
    ctx->pc = 0x2C6400u;
    // 0x2c6400: 0x3c0138d1
    ctx->pc = 0x2c6400u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2c6404: 0x3421b717
    ctx->pc = 0x2c6404u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2c6408: 0x44810000
    ctx->pc = 0x2c6408u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c640c: 0x46006002
    ctx->pc = 0x2c640cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c6410: 0x46000064
    ctx->pc = 0x2c6410u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c6414: 0x44020800
    ctx->pc = 0x2c6414u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c6418: 0x10000029
    ctx->pc = 0x2C6418u;
    {
        const bool branch_taken_0x2c6418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C641Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 800));
        if (branch_taken_0x2c6418) {
            ctx->pc = 0x2C64C0u;
            goto label_2c64c0;
        }
    }
    ctx->pc = 0x2C6420u;
label_2c6420:
    // 0x2c6420: 0x3c01457a
    ctx->pc = 0x2c6420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17786 << 16));
    // 0x2c6424: 0x44810000
    ctx->pc = 0x2c6424u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c6428: 0x460c0036
    ctx->pc = 0x2c6428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c642c: 0x45000009
    ctx->pc = 0x2C642Cu;
    {
        const bool branch_taken_0x2c642c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c642c) {
            ctx->pc = 0x2C6454u;
            goto label_2c6454;
        }
    }
    ctx->pc = 0x2C6434u;
    // 0x2c6434: 0x3c013b03
    ctx->pc = 0x2c6434u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15107 << 16));
    // 0x2c6438: 0x3421126f
    ctx->pc = 0x2c6438u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2c643c: 0x44810000
    ctx->pc = 0x2c643cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c6440: 0x46006002
    ctx->pc = 0x2c6440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c6444: 0x46000064
    ctx->pc = 0x2c6444u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c6448: 0x44020800
    ctx->pc = 0x2c6448u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c644c: 0x1000001c
    ctx->pc = 0x2C644Cu;
    {
        const bool branch_taken_0x2c644c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6450u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 600));
        if (branch_taken_0x2c644c) {
            ctx->pc = 0x2C64C0u;
            goto label_2c64c0;
        }
    }
    ctx->pc = 0x2C6454u;
label_2c6454:
    // 0x2c6454: 0x3c014348
    ctx->pc = 0x2c6454u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17224 << 16));
    // 0x2c6458: 0x44810000
    ctx->pc = 0x2c6458u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c645c: 0x460c0036
    ctx->pc = 0x2c645cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6460: 0x45000009
    ctx->pc = 0x2C6460u;
    {
        const bool branch_taken_0x2c6460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6460) {
            ctx->pc = 0x2C6488u;
            goto label_2c6488;
        }
    }
    ctx->pc = 0x2C6468u;
    // 0x2c6468: 0x3c013d4c
    ctx->pc = 0x2c6468u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x2c646c: 0x3421cccd
    ctx->pc = 0x2c646cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2c6470: 0x44810000
    ctx->pc = 0x2c6470u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c6474: 0x46006002
    ctx->pc = 0x2c6474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c6478: 0x46000064
    ctx->pc = 0x2c6478u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c647c: 0x44020800
    ctx->pc = 0x2c647cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c6480: 0x1000000f
    ctx->pc = 0x2C6480u;
    {
        const bool branch_taken_0x2c6480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6484u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 400));
        if (branch_taken_0x2c6480) {
            ctx->pc = 0x2C64C0u;
            goto label_2c64c0;
        }
    }
    ctx->pc = 0x2C6488u;
label_2c6488:
    // 0x2c6488: 0x3c014120
    ctx->pc = 0x2c6488u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2c648c: 0x44810000
    ctx->pc = 0x2c648cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c6490: 0x460c0036
    ctx->pc = 0x2c6490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6494: 0x45000005
    ctx->pc = 0x2C6494u;
    {
        const bool branch_taken_0x2c6494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6494) {
            ctx->pc = 0x2C64ACu;
            goto label_2c64ac;
        }
    }
    ctx->pc = 0x2C649Cu;
    // 0x2c649c: 0x46006024
    ctx->pc = 0x2c649cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x2c64a0: 0x44020000
    ctx->pc = 0x2c64a0u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c64a4: 0x10000006
    ctx->pc = 0x2C64A4u;
    {
        const bool branch_taken_0x2c64a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C64A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 200));
        if (branch_taken_0x2c64a4) {
            ctx->pc = 0x2C64C0u;
            goto label_2c64c0;
        }
    }
    ctx->pc = 0x2C64ACu;
label_2c64ac:
    // 0x2c64ac: 0x3c0141a0
    ctx->pc = 0x2c64acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x2c64b0: 0x44810000
    ctx->pc = 0x2c64b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c64b4: 0x46006002
    ctx->pc = 0x2c64b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c64b8: 0x46000064
    ctx->pc = 0x2c64b8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c64bc: 0x44020800
    ctx->pc = 0x2c64bcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2c64c0:
    // 0x2c64c0: 0x21080
    ctx->pc = 0x2c64c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c64c4: 0x431021
    ctx->pc = 0x2c64c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c64c8: 0x3e00008
    ctx->pc = 0x2C64C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C64CCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C63E8u: goto label_2c63e8;
            case 0x2C6420u: goto label_2c6420;
            case 0x2C6454u: goto label_2c6454;
            case 0x2C6488u: goto label_2c6488;
            case 0x2C64ACu: goto label_2c64ac;
            case 0x2C64C0u: goto label_2c64c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C64D0u;
}
