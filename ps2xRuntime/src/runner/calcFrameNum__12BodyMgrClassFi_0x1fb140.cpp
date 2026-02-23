#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcFrameNum__12BodyMgrClassFi
// Address: 0x1fb140 - 0x1fb210
void calcFrameNum__12BodyMgrClassFi_0x1fb140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcFrameNum__12BodyMgrClassFi");


    ctx->pc = 0x1fb140u;

    // 0x1fb140: 0x8c860004
    ctx->pc = 0x1fb140u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fb144: 0x53880
    ctx->pc = 0x1fb144u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fb148: 0x3c0101fb
    ctx->pc = 0x1fb148u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x1fb14c: 0xe62021
    ctx->pc = 0x1fb14cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1fb150: 0x8c830004
    ctx->pc = 0x1fb150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fb154: 0x31840
    ctx->pc = 0x1fb154u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fb158: 0x610821
    ctx->pc = 0x1fb158u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1fb15c: 0x842373e4
    ctx->pc = 0x1fb15cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
    // 0x1fb160: 0x44830000
    ctx->pc = 0x1fb160u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fb164: 0x10600026
    ctx->pc = 0x1FB164u;
    {
        const bool branch_taken_0x1fb164 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB168u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x1fb164) {
            ctx->pc = 0x1FB200u;
            goto label_1fb200;
        }
    }
    ctx->pc = 0x1FB16Cu;
    // 0x1fb16c: 0xc482000c
    ctx->pc = 0x1fb16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fb170: 0x31c3c
    ctx->pc = 0x1fb170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fb174: 0x31c3f
    ctx->pc = 0x1fb174u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fb178: 0x44801800
    ctx->pc = 0x1fb178u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x1fb17c: 0x2489000c
    ctx->pc = 0x1fb17cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1fb180: 0x46011003
    ctx->pc = 0x1fb180u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x1fb184: 0x46000024
    ctx->pc = 0x1fb184u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fb188: 0x44050000
    ctx->pc = 0x1fb188u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1fb18c: 0x0
    ctx->pc = 0x1fb18cu;
    // NOP
    // 0x1fb190: 0xa31818
    ctx->pc = 0x1fb190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1fb194: 0x44830000
    ctx->pc = 0x1fb194u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fb198: 0x0
    ctx->pc = 0x1fb198u;
    // NOP
    // 0x1fb19c: 0x46800020
    ctx->pc = 0x1fb19cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fb1a0: 0x46001001
    ctx->pc = 0x1fb1a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1fb1a4: 0xe4800014
    ctx->pc = 0x1fb1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1fb1a8: 0x46000006
    ctx->pc = 0x1fb1a8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1fb1ac: 0x46001832
    ctx->pc = 0x1fb1acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb1b0: 0x0
    ctx->pc = 0x1fb1b0u;
    // NOP
    // 0x1fb1b4: 0x45000007
    ctx->pc = 0x1FB1B4u;
    {
        const bool branch_taken_0x1fb1b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FB1B8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 20));
        if (branch_taken_0x1fb1b4) {
            ctx->pc = 0x1FB1D4u;
            goto label_1fb1d4;
        }
    }
    ctx->pc = 0x1FB1BCu;
    // 0x1fb1bc: 0xc5200000
    ctx->pc = 0x1fb1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb1c0: 0x46001832
    ctx->pc = 0x1fb1c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb1c4: 0x0
    ctx->pc = 0x1fb1c4u;
    // NOP
    // 0x1fb1c8: 0x45010002
    ctx->pc = 0x1FB1C8u;
    {
        const bool branch_taken_0x1fb1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb1c8) {
            ctx->pc = 0x1FB1D4u;
            goto label_1fb1d4;
        }
    }
    ctx->pc = 0x1FB1D0u;
    // 0x1fb1d0: 0xe5010000
    ctx->pc = 0x1fb1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1fb1d4:
    // 0x1fb1d4: 0xc5000000
    ctx->pc = 0x1fb1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb1d8: 0x46000024
    ctx->pc = 0x1fb1d8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fb1dc: 0x44030000
    ctx->pc = 0x1fb1dcu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1fb1e0: 0x0
    ctx->pc = 0x1fb1e0u;
    // NOP
    // 0x1fb1e4: 0x4610003
    ctx->pc = 0x1FB1E4u;
    {
        const bool branch_taken_0x1fb1e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FB1E8u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1fb1e4) {
            ctx->pc = 0x1FB1F4u;
            goto label_1fb1f4;
        }
    }
    ctx->pc = 0x1FB1ECu;
    // 0x1fb1ec: 0x24630001
    ctx->pc = 0x1fb1ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fb1f0: 0x32043
    ctx->pc = 0x1fb1f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_1fb1f4:
    // 0x1fb1f4: 0xe61821
    ctx->pc = 0x1fb1f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1fb1f8: 0x10000003
    ctx->pc = 0x1FB1F8u;
    {
        const bool branch_taken_0x1fb1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FB1FCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
        if (branch_taken_0x1fb1f8) {
            ctx->pc = 0x1FB208u;
            goto label_1fb208;
        }
    }
    ctx->pc = 0x1FB200u;
label_1fb200:
    // 0x1fb200: 0xac800014
    ctx->pc = 0x1fb200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1fb204: 0xac800024
    ctx->pc = 0x1fb204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_1fb208:
    // 0x1fb208: 0x3e00008
    ctx->pc = 0x1FB208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FB1D4u: goto label_1fb1d4;
            case 0x1FB1F4u: goto label_1fb1f4;
            case 0x1FB200u: goto label_1fb200;
            case 0x1FB208u: goto label_1fb208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FB210u;
}
