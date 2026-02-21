#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getSinCos
// Address: 0x2cc8e0 - 0x2cc978
void getSinCos_0x2cc8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cc8e0u;

    // 0x2cc8e0: 0x3c013fc9
    ctx->pc = 0x2cc8e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2cc8e4: 0x34210fdb
    ctx->pc = 0x2cc8e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2cc8e8: 0x44810000
    ctx->pc = 0x2cc8e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cc8ec: 0x460c0034
    ctx->pc = 0x2cc8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc8f0: 0x0
    ctx->pc = 0x2cc8f0u;
    // NOP
    // 0x2cc8f4: 0x45000005
    ctx->pc = 0x2CC8F4u;
    {
        const bool branch_taken_0x2cc8f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC8F8u;
        ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        if (branch_taken_0x2cc8f4) {
            ctx->pc = 0x2CC90Cu;
            goto label_2cc90c;
        }
    }
    ctx->pc = 0x2CC8FCu;
    // 0x2cc8fc: 0x3c014049
    ctx->pc = 0x2cc8fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2cc900: 0x34210fdb
    ctx->pc = 0x2cc900u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2cc904: 0x44810000
    ctx->pc = 0x2cc904u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cc908: 0x460c0301
    ctx->pc = 0x2cc908u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_2cc90c:
    // 0x2cc90c: 0x46052882
    ctx->pc = 0x2cc90cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2cc910: 0x460c60c2
    ctx->pc = 0x2cc910u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2cc914: 0x3c01b950
    ctx->pc = 0x2cc914u;
    SET_GPR_U32(ctx, 1, ((uint32_t)47440 << 16));
    // 0x2cc918: 0x34210d01
    ctx->pc = 0x2cc918u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 3329));
    // 0x2cc91c: 0x44810000
    ctx->pc = 0x2cc91cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cc920: 0x46001042
    ctx->pc = 0x2cc920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cc924: 0x46001902
    ctx->pc = 0x2cc924u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cc928: 0x3c013c08
    ctx->pc = 0x2cc928u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15368 << 16));
    // 0x2cc92c: 0x34218889
    ctx->pc = 0x2cc92cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2cc930: 0x44810000
    ctx->pc = 0x2cc930u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cc934: 0x46000840
    ctx->pc = 0x2cc934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc938: 0x46011042
    ctx->pc = 0x2cc938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cc93c: 0x46002000
    ctx->pc = 0x2cc93cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cc940: 0x46001902
    ctx->pc = 0x2cc940u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cc944: 0x3c01be2a
    ctx->pc = 0x2cc944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48682 << 16));
    // 0x2cc948: 0x3421aaab
    ctx->pc = 0x2cc948u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43691));
    // 0x2cc94c: 0x44810000
    ctx->pc = 0x2cc94cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cc950: 0x46000840
    ctx->pc = 0x2cc950u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cc954: 0x46011042
    ctx->pc = 0x2cc954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cc958: 0x46002000
    ctx->pc = 0x2cc958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2cc95c: 0x46001902
    ctx->pc = 0x2cc95cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2cc960: 0x46012802
    ctx->pc = 0x2cc960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2cc964: 0x46002800
    ctx->pc = 0x2cc964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2cc968: 0xe4800000
    ctx->pc = 0x2cc968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2cc96c: 0x46046002
    ctx->pc = 0x2cc96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2cc970: 0x3e00008
    ctx->pc = 0x2CC970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC974u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC90Cu: goto label_2cc90c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CC978u;
}
