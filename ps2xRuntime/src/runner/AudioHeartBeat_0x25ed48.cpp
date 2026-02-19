#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioHeartBeat
// Address: 0x25ed48 - 0x25edec
void AudioHeartBeat_0x25ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ed48u;

    // 0x25ed48: 0x3c030032
    ctx->pc = 0x25ed48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25ed4c: 0x24631bc0
    ctx->pc = 0x25ed4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x25ed50: 0x24022b00
    ctx->pc = 0x25ed50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ed54: 0x821018
    ctx->pc = 0x25ed54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ed58: 0x431021
    ctx->pc = 0x25ed58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ed5c: 0xc4411a10
    ctx->pc = 0x25ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ed60: 0x3c020034
    ctx->pc = 0x25ed60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ed64: 0x2442d330
    ctx->pc = 0x25ed64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x25ed68: 0x42080
    ctx->pc = 0x25ed68u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ed6c: 0x822021
    ctx->pc = 0x25ed6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25ed70: 0x3c014120
    ctx->pc = 0x25ed70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x25ed74: 0x44810000
    ctx->pc = 0x25ed74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25ed78: 0x46000836
    ctx->pc = 0x25ed78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ed7c: 0x0
    ctx->pc = 0x25ed7cu;
    // NOP
    // 0x25ed80: 0x45000005
    ctx->pc = 0x25ED80u;
    {
        const bool branch_taken_0x25ed80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25ED84u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x25ed80) {
            ctx->pc = 0x25ED98u;
            goto label_25ed98;
        }
    }
    ctx->pc = 0x25ED88u;
    // 0x25ed88: 0x202d
    ctx->pc = 0x25ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed8c: 0x240600ca
    ctx->pc = 0x25ed8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 202));
    // 0x25ed90: 0x8088a4a
    ctx->pc = 0x25ED90u;
    ctx->pc = 0x25ED94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x25ED98u;
label_25ed98:
    // 0x25ed98: 0x3c0141c8
    ctx->pc = 0x25ed98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16840 << 16));
    // 0x25ed9c: 0x44810000
    ctx->pc = 0x25ed9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25eda0: 0x46000834
    ctx->pc = 0x25eda0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25eda4: 0x0
    ctx->pc = 0x25eda4u;
    // NOP
    // 0x25eda8: 0x45000004
    ctx->pc = 0x25EDA8u;
    {
        const bool branch_taken_0x25eda8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EDACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25eda8) {
            ctx->pc = 0x25EDBCu;
            goto label_25edbc;
        }
    }
    ctx->pc = 0x25EDB0u;
    // 0x25edb0: 0x240600b1
    ctx->pc = 0x25edb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 177));
    // 0x25edb4: 0x8088a4a
    ctx->pc = 0x25EDB4u;
    ctx->pc = 0x25EDB8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x25EDBCu;
label_25edbc:
    // 0x25edbc: 0x3c0142c8
    ctx->pc = 0x25edbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x25edc0: 0x44810000
    ctx->pc = 0x25edc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25edc4: 0x46000834
    ctx->pc = 0x25edc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25edc8: 0x0
    ctx->pc = 0x25edc8u;
    // NOP
    // 0x25edcc: 0x45000005
    ctx->pc = 0x25EDCCu;
    {
        const bool branch_taken_0x25edcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EDD0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x25edcc) {
            ctx->pc = 0x25EDE4u;
            goto label_25ede4;
        }
    }
    ctx->pc = 0x25EDD4u;
    // 0x25edd4: 0x202d
    ctx->pc = 0x25edd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edd8: 0x24060098
    ctx->pc = 0x25edd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 152));
    // 0x25eddc: 0x8088a4a
    ctx->pc = 0x25EDDCu;
    ctx->pc = 0x25EDE0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x25EDE4u;
label_25ede4:
    // 0x25ede4: 0x8088a4a
    ctx->pc = 0x25EDE4u;
    ctx->pc = 0x25EDE8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x25EDECu;
}
