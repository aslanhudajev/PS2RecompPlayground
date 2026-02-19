#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Random
// Address: 0x2d7018 - 0x2d7090
void Random_0x2d7018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7018u;

    // 0x2d7018: 0x27bdffe0
    ctx->pc = 0x2d7018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d701c: 0xffbf0000
    ctx->pc = 0x2d701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7020: 0xe7b40010
    ctx->pc = 0x2d7020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d7024: 0xc0abc06
    ctx->pc = 0x2D7024u;
    SET_GPR_U32(ctx, 31, 0x2D702Cu);
    ctx->pc = 0x2D7028u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D702Cu; }
    }
    if (ctx->pc != 0x2D702Cu) { return; }
    ctx->pc = 0x2D702Cu;
    // 0x2d702c: 0x3c03003a
    ctx->pc = 0x2d702cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d7030: 0xac6226a4
    ctx->pc = 0x2d7030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9892), GPR_U32(ctx, 2));
    // 0x2d7034: 0x30437fff
    ctx->pc = 0x2d7034u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2d7038: 0x4600005
    ctx->pc = 0x2D7038u;
    {
        const bool branch_taken_0x2d7038 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2D703Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2d7038) {
            ctx->pc = 0x2D7050u;
            goto label_2d7050;
        }
    }
    ctx->pc = 0x2D7040u;
    // 0x2d7040: 0x44830800
    ctx->pc = 0x2d7040u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2d7044: 0x46800860
    ctx->pc = 0x2d7044u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2d7048: 0x10000007
    ctx->pc = 0x2D7048u;
    {
        const bool branch_taken_0x2d7048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D704Cu;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
        if (branch_taken_0x2d7048) {
            ctx->pc = 0x2D7068u;
            goto label_2d7068;
        }
    }
    ctx->pc = 0x2D7050u;
label_2d7050:
    // 0x2d7050: 0x31842
    ctx->pc = 0x2d7050u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2d7054: 0x431025
    ctx->pc = 0x2d7054u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d7058: 0x44820800
    ctx->pc = 0x2d7058u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2d705c: 0x46800860
    ctx->pc = 0x2d705cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2d7060: 0x46010840
    ctx->pc = 0x2d7060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2d7064: 0x46140842
    ctx->pc = 0x2d7064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2d7068:
    // 0x2d7068: 0x3c0146ff
    ctx->pc = 0x2d7068u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18175 << 16));
    // 0x2d706c: 0x3421fe00
    ctx->pc = 0x2d706cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65024));
    // 0x2d7070: 0x44810000
    ctx->pc = 0x2d7070u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d7074: 0x0
    ctx->pc = 0x2d7074u;
    // NOP
    // 0x2d7078: 0x0
    ctx->pc = 0x2d7078u;
    // NOP
    // 0x2d707c: 0x46000803
    ctx->pc = 0x2d707cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x2d7080: 0xdfbf0000
    ctx->pc = 0x2d7080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7084: 0xc7b40010
    ctx->pc = 0x2d7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7088: 0x3e00008
    ctx->pc = 0x2D7088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D708Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7050u: goto label_2d7050;
            case 0x2D7068u: goto label_2d7068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D7090u;
}
