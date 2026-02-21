#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: floorf
// Address: 0x11e208 - 0x11e2ec
void floorf_0x11e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e208u;

    // 0x11e208: 0x44026000
    ctx->pc = 0x11e208u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x11e20c: 0x40202d
    ctx->pc = 0x11e20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e210: 0x415c3
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x11e214: 0x304200ff
    ctx->pc = 0x11e214u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x11e218: 0x2445ff81
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x11e21c: 0x28a30017
    ctx->pc = 0x11e21cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 23));
    // 0x11e220: 0x5060002b
    ctx->pc = 0x11E220u;
    {
        const bool branch_taken_0x11e220 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x11e220) {
            ctx->pc = 0x11E224u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
            ctx->pc = 0x11E2D0u;
            goto label_11e2d0;
        }
    }
    ctx->pc = 0x11E228u;
    // 0x11e228: 0x4a30012
    ctx->pc = 0x11E228u;
    {
        const bool branch_taken_0x11e228 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11e228) {
            ctx->pc = 0x11E22Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)127 << 16));
            ctx->pc = 0x11E274u;
            goto label_11e274;
        }
    }
    ctx->pc = 0x11E230u;
    // 0x11e230: 0x3c017149
    ctx->pc = 0x11e230u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x11e234: 0x3421f2ca
    ctx->pc = 0x11e234u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x11e238: 0x44810000
    ctx->pc = 0x11e238u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x11e23c: 0x44800800
    ctx->pc = 0x11e23cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x11e240: 0x46006000
    ctx->pc = 0x11e240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e244: 0x46000834
    ctx->pc = 0x11e244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e248: 0x45000025
    ctx->pc = 0x11E248u;
    {
        const bool branch_taken_0x11e248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e248) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E250u;
    // 0x11e250: 0x4800003
    ctx->pc = 0x11E250u;
    {
        const bool branch_taken_0x11e250 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11E254u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x11e250) {
            ctx->pc = 0x11E260u;
            goto label_11e260;
        }
    }
    ctx->pc = 0x11E258u;
    // 0x11e258: 0x10000021
    ctx->pc = 0x11E258u;
    {
        const bool branch_taken_0x11e258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E25Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11e258) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E260u;
label_11e260:
    // 0x11e260: 0x3c03bf80
    ctx->pc = 0x11e260u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x11e264: 0x3442ffff
    ctx->pc = 0x11e264u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11e268: 0x821024
    ctx->pc = 0x11e268u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e26c: 0x1000001c
    ctx->pc = 0x11E26Cu;
    {
        const bool branch_taken_0x11e26c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E270u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
        if (branch_taken_0x11e26c) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E274u;
label_11e274:
    // 0x11e274: 0x3442ffff
    ctx->pc = 0x11e274u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11e278: 0xa23007
    ctx->pc = 0x11e278u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e27c: 0x861824
    ctx->pc = 0x11e27cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11e280: 0x14600003
    ctx->pc = 0x11E280u;
    {
        const bool branch_taken_0x11e280 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x11e280) {
            ctx->pc = 0x11E290u;
            goto label_11e290;
        }
    }
    ctx->pc = 0x11E288u;
label_11e288:
    // 0x11e288: 0x3e00008
    ctx->pc = 0x11E288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E28Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E260u: goto label_11e260;
            case 0x11E274u: goto label_11e274;
            case 0x11E288u: goto label_11e288;
            case 0x11E290u: goto label_11e290;
            case 0x11E2C8u: goto label_11e2c8;
            case 0x11E2D0u: goto label_11e2d0;
            case 0x11E2E0u: goto label_11e2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E290u;
label_11e290:
    // 0x11e290: 0x3c017149
    ctx->pc = 0x11e290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)29001 << 16));
    // 0x11e294: 0x3421f2ca
    ctx->pc = 0x11e294u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62154));
    // 0x11e298: 0x44810000
    ctx->pc = 0x11e298u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x11e29c: 0x44800800
    ctx->pc = 0x11e29cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x11e2a0: 0x46006000
    ctx->pc = 0x11e2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e2a4: 0x46000834
    ctx->pc = 0x11e2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e2a8: 0x4500000d
    ctx->pc = 0x11E2A8u;
    {
        const bool branch_taken_0x11e2a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e2a8) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E2B0u;
    // 0x11e2b0: 0x4810005
    ctx->pc = 0x11E2B0u;
    {
        const bool branch_taken_0x11e2b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11E2B4u;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x11e2b0) {
            ctx->pc = 0x11E2C8u;
            goto label_11e2c8;
        }
    }
    ctx->pc = 0x11E2B8u;
    // 0x11e2b8: 0x3c020080
    ctx->pc = 0x11e2b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)128 << 16));
    // 0x11e2bc: 0xa21007
    ctx->pc = 0x11e2bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e2c0: 0x822021
    ctx->pc = 0x11e2c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e2c4: 0x61027
    ctx->pc = 0x11e2c4u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_11e2c8:
    // 0x11e2c8: 0x10000005
    ctx->pc = 0x11E2C8u;
    {
        const bool branch_taken_0x11e2c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E2CCu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x11e2c8) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E2D0u;
label_11e2d0:
    // 0x11e2d0: 0x14a2ffed
    ctx->pc = 0x11E2D0u;
    {
        const bool branch_taken_0x11e2d0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x11e2d0) {
            ctx->pc = 0x11E288u;
            goto label_11e288;
        }
    }
    ctx->pc = 0x11E2D8u;
    // 0x11e2d8: 0x3e00008
    ctx->pc = 0x11E2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E2DCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E260u: goto label_11e260;
            case 0x11E274u: goto label_11e274;
            case 0x11E288u: goto label_11e288;
            case 0x11E290u: goto label_11e290;
            case 0x11E2C8u: goto label_11e2c8;
            case 0x11E2D0u: goto label_11e2d0;
            case 0x11E2E0u: goto label_11e2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E2E0u;
label_11e2e0:
    // 0x11e2e0: 0x44846000
    ctx->pc = 0x11e2e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 4);
    // 0x11e2e4: 0x3e00008
    ctx->pc = 0x11E2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E2E8u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E260u: goto label_11e260;
            case 0x11E274u: goto label_11e274;
            case 0x11E288u: goto label_11e288;
            case 0x11E290u: goto label_11e290;
            case 0x11E2C8u: goto label_11e2c8;
            case 0x11E2D0u: goto label_11e2d0;
            case 0x11E2E0u: goto label_11e2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E2ECu;
}
