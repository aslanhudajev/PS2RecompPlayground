#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: IsUnitMat3
// Address: 0x2d5298 - 0x2d5324
void IsUnitMat3_0x2d5298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5298u;

    // 0x2d5298: 0x302d
    ctx->pc = 0x2d5298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d529c: 0x3c013f80
    ctx->pc = 0x2d529cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d52a0: 0x44811000
    ctx->pc = 0x2d52a0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2d52a4: 0x44800800
    ctx->pc = 0x2d52a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2d52a8: 0x282d
    ctx->pc = 0x2d52a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52ac: 0x0
    ctx->pc = 0x2d52acu;
    // NOP
label_2d52b0:
    // 0x2d52b0: 0x61880
    ctx->pc = 0x2d52b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d52b4: 0x61100
    ctx->pc = 0x2d52b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d52b8: 0x443821
    ctx->pc = 0x2d52b8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d52bc: 0x671821
    ctx->pc = 0x2d52bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2d52c0:
    // 0x2d52c0: 0x14c50009
    ctx->pc = 0x2D52C0u;
    {
        const bool branch_taken_0x2d52c0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 5));
        ctx->pc = 0x2D52C4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x2d52c0) {
            ctx->pc = 0x2D52E8u;
            goto label_2d52e8;
        }
    }
    ctx->pc = 0x2D52C8u;
    // 0x2d52c8: 0xc4600000
    ctx->pc = 0x2d52c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d52cc: 0x46020032
    ctx->pc = 0x2d52ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d52d0: 0x45010003
    ctx->pc = 0x2D52D0u;
    {
        const bool branch_taken_0x2d52d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d52d0) {
            ctx->pc = 0x2D52E0u;
            goto label_2d52e0;
        }
    }
    ctx->pc = 0x2D52D8u;
label_2d52d8:
    // 0x2d52d8: 0x3e00008
    ctx->pc = 0x2D52D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D52DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D52B0u: goto label_2d52b0;
            case 0x2D52C0u: goto label_2d52c0;
            case 0x2D52D8u: goto label_2d52d8;
            case 0x2D52E0u: goto label_2d52e0;
            case 0x2D52E8u: goto label_2d52e8;
            case 0x2D52FCu: goto label_2d52fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D52E0u;
label_2d52e0:
    // 0x2d52e0: 0x10c50006
    ctx->pc = 0x2D52E0u;
    {
        const bool branch_taken_0x2d52e0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        ctx->pc = 0x2D52E4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x2d52e0) {
            ctx->pc = 0x2D52FCu;
            goto label_2d52fc;
        }
    }
    ctx->pc = 0x2D52E8u;
label_2d52e8:
    // 0x2d52e8: 0x471021
    ctx->pc = 0x2d52e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d52ec: 0xc4400000
    ctx->pc = 0x2d52ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d52f0: 0x46010032
    ctx->pc = 0x2d52f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d52f4: 0x4500fff8
    ctx->pc = 0x2D52F4u;
    {
        const bool branch_taken_0x2d52f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d52f4) {
            ctx->pc = 0x2D52D8u;
            goto label_2d52d8;
        }
    }
    ctx->pc = 0x2D52FCu;
label_2d52fc:
    // 0x2d52fc: 0x24a50001
    ctx->pc = 0x2d52fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d5300: 0x28a20003
    ctx->pc = 0x2d5300u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x2d5304: 0x1440ffee
    ctx->pc = 0x2D5304u;
    {
        const bool branch_taken_0x2d5304 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d5304) {
            ctx->pc = 0x2D52C0u;
            goto label_2d52c0;
        }
    }
    ctx->pc = 0x2D530Cu;
    // 0x2d530c: 0x24c60001
    ctx->pc = 0x2d530cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5310: 0x28c20003
    ctx->pc = 0x2d5310u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 3));
    // 0x2d5314: 0x1440ffe6
    ctx->pc = 0x2D5314u;
    {
        const bool branch_taken_0x2d5314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D5318u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d5314) {
            ctx->pc = 0x2D52B0u;
            goto label_2d52b0;
        }
    }
    ctx->pc = 0x2D531Cu;
    // 0x2d531c: 0x3e00008
    ctx->pc = 0x2D531Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5320u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D52B0u: goto label_2d52b0;
            case 0x2D52C0u: goto label_2d52c0;
            case 0x2D52D8u: goto label_2d52d8;
            case 0x2D52E0u: goto label_2d52e0;
            case 0x2D52E8u: goto label_2d52e8;
            case 0x2D52FCu: goto label_2d52fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D5324u;
}
