#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_trnsl_sprite
// Address: 0x1ad950 - 0x1ada04
void is_trnsl_sprite_0x1ad950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_trnsl_sprite");


    ctx->pc = 0x1ad950u;

    // 0x1ad950: 0xc4810034
    ctx->pc = 0x1ad950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad954: 0x3c023f80
    ctx->pc = 0x1ad954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ad958: 0x44820000
    ctx->pc = 0x1ad958u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ad95c: 0x0
    ctx->pc = 0x1ad95cu;
    // NOP
    // 0x1ad960: 0x46000834
    ctx->pc = 0x1ad960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad964: 0x0
    ctx->pc = 0x1ad964u;
    // NOP
    // 0x1ad968: 0x45000003
    ctx->pc = 0x1AD968u;
    {
        const bool branch_taken_0x1ad968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD96Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ad968) {
            ctx->pc = 0x1AD978u;
            goto label_1ad978;
        }
    }
    ctx->pc = 0x1AD970u;
    // 0x1ad970: 0x10000022
    ctx->pc = 0x1AD970u;
    {
        const bool branch_taken_0x1ad970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad970) {
            ctx->pc = 0x1AD9FCu;
            goto label_1ad9fc;
        }
    }
    ctx->pc = 0x1AD978u;
label_1ad978:
    // 0x1ad978: 0x8c830038
    ctx->pc = 0x1ad978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1ad97c: 0x24020004
    ctx->pc = 0x1ad97cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad980: 0x1062000a
    ctx->pc = 0x1AD980u;
    {
        const bool branch_taken_0x1ad980 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1AD984u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad980) {
            ctx->pc = 0x1AD9ACu;
            goto label_1ad9ac;
        }
    }
    ctx->pc = 0x1AD988u;
    // 0x1ad988: 0x10600008
    ctx->pc = 0x1AD988u;
    {
        const bool branch_taken_0x1ad988 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad988) {
            ctx->pc = 0x1AD9ACu;
            goto label_1ad9ac;
        }
    }
    ctx->pc = 0x1AD990u;
    // 0x1ad990: 0x24020002
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad994: 0x10620003
    ctx->pc = 0x1AD994u;
    {
        const bool branch_taken_0x1ad994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1AD998u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ad994) {
            ctx->pc = 0x1AD9A4u;
            goto label_1ad9a4;
        }
    }
    ctx->pc = 0x1AD99Cu;
    // 0x1ad99c: 0x10000005
    ctx->pc = 0x1AD99Cu;
    {
        const bool branch_taken_0x1ad99c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD9A0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1ad99c) {
            ctx->pc = 0x1AD9B4u;
            goto label_1ad9b4;
        }
    }
    ctx->pc = 0x1AD9A4u;
label_1ad9a4:
    // 0x1ad9a4: 0x10000015
    ctx->pc = 0x1AD9A4u;
    {
        const bool branch_taken_0x1ad9a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad9a4) {
            ctx->pc = 0x1AD9FCu;
            goto label_1ad9fc;
        }
    }
    ctx->pc = 0x1AD9ACu;
label_1ad9ac:
    // 0x1ad9ac: 0x10000013
    ctx->pc = 0x1AD9ACu;
    {
        const bool branch_taken_0x1ad9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad9ac) {
            ctx->pc = 0x1AD9FCu;
            goto label_1ad9fc;
        }
    }
    ctx->pc = 0x1AD9B4u;
label_1ad9b4:
    // 0x1ad9b4: 0x8c830004
    ctx->pc = 0x1ad9b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ad9b8: 0x3c020078
    ctx->pc = 0x1ad9b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)120 << 16));
    // 0x1ad9bc: 0x3c0403f0
    ctx->pc = 0x1ad9bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)1008 << 16));
    // 0x1ad9c0: 0xa42024
    ctx->pc = 0x1ad9c0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ad9c4: 0x621024
    ctx->pc = 0x1ad9c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad9c8: 0x41d03
    ctx->pc = 0x1ad9c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
    // 0x1ad9cc: 0x1060000a
    ctx->pc = 0x1AD9CCu;
    {
        const bool branch_taken_0x1ad9cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD9D0u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 19));
        if (branch_taken_0x1ad9cc) {
            ctx->pc = 0x1AD9F8u;
            goto label_1ad9f8;
        }
    }
    ctx->pc = 0x1AD9D4u;
    // 0x1ad9d4: 0x24020013
    ctx->pc = 0x1ad9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ad9d8: 0x14620003
    ctx->pc = 0x1AD9D8u;
    {
        const bool branch_taken_0x1ad9d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AD9DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x1ad9d8) {
            ctx->pc = 0x1AD9E8u;
            goto label_1ad9e8;
        }
    }
    ctx->pc = 0x1AD9E0u;
    // 0x1ad9e0: 0x50800006
    ctx->pc = 0x1AD9E0u;
    {
        const bool branch_taken_0x1ad9e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad9e0) {
            ctx->pc = 0x1AD9E4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1AD9FCu;
            goto label_1ad9fc;
        }
    }
    ctx->pc = 0x1AD9E8u;
label_1ad9e8:
    // 0x1ad9e8: 0x14620004
    ctx->pc = 0x1AD9E8u;
    {
        const bool branch_taken_0x1ad9e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AD9ECu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad9e8) {
            ctx->pc = 0x1AD9FCu;
            goto label_1ad9fc;
        }
    }
    ctx->pc = 0x1AD9F0u;
    // 0x1ad9f0: 0x14800002
    ctx->pc = 0x1AD9F0u;
    {
        const bool branch_taken_0x1ad9f0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ad9f0) {
            ctx->pc = 0x1AD9FCu;
            goto label_1ad9fc;
        }
    }
    ctx->pc = 0x1AD9F8u;
label_1ad9f8:
    // 0x1ad9f8: 0x24020001
    ctx->pc = 0x1ad9f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1ad9fc:
    // 0x1ad9fc: 0x3e00008
    ctx->pc = 0x1AD9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD978u: goto label_1ad978;
            case 0x1AD9A4u: goto label_1ad9a4;
            case 0x1AD9ACu: goto label_1ad9ac;
            case 0x1AD9B4u: goto label_1ad9b4;
            case 0x1AD9E8u: goto label_1ad9e8;
            case 0x1AD9F8u: goto label_1ad9f8;
            case 0x1AD9FCu: goto label_1ad9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADA04u;
}
