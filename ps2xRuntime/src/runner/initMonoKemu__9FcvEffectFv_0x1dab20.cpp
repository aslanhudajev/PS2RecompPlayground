#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initMonoKemu__9FcvEffectFv
// Address: 0x1dab20 - 0x1dabd8
void initMonoKemu__9FcvEffectFv_0x1dab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initMonoKemu__9FcvEffectFv");


    ctx->pc = 0x1dab20u;

    // 0x1dab20: 0x27bdffd0
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dab24: 0x7fbf0020
    ctx->pc = 0x1dab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1dab28: 0x7fb10010
    ctx->pc = 0x1dab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dab2c: 0x7fb00000
    ctx->pc = 0x1dab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dab30: 0x70808628
    ctx->pc = 0x1dab30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dab34: 0xc0761c4
    ctx->pc = 0x1DAB34u;
    SET_GPR_U32(ctx, 31, 0x1DAB3Cu);
    ctx->pc = 0x1DAB38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB3Cu; }
        else if (ctx->pc != 0x1DAB3Cu) { ctx->pc = 0x1DAB3Cu; }
    }
    if (ctx->pc != 0x1DAB3Cu) { return; }
    ctx->pc = 0x1DAB3Cu;
    // 0x1dab3c: 0xae020054
    ctx->pc = 0x1dab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dab40: 0x3c02420c
    ctx->pc = 0x1dab40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16908 << 16));
    // 0x1dab44: 0xae020028
    ctx->pc = 0x1dab44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dab48: 0x27848d4c
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dab4c: 0xc07f208
    ctx->pc = 0x1DAB4Cu;
    SET_GPR_U32(ctx, 31, 0x1DAB54u);
    ctx->pc = 0x1DAB50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7618));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB54u; }
        else if (ctx->pc != 0x1DAB54u) { ctx->pc = 0x1DAB54u; }
    }
    if (ctx->pc != 0x1DAB54u) { return; }
    ctx->pc = 0x1DAB54u;
    // 0x1dab54: 0x70408e28
    ctx->pc = 0x1dab54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dab58: 0x27848d4c
    ctx->pc = 0x1dab58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dab5c: 0xc07f208
    ctx->pc = 0x1DAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAB64u);
    ctx->pc = 0x1DAB60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7617));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB64u; }
        else if (ctx->pc != 0x1DAB64u) { ctx->pc = 0x1DAB64u; }
    }
    if (ctx->pc != 0x1DAB64u) { return; }
    ctx->pc = 0x1DAB64u;
    // 0x1dab64: 0x8e040054
    ctx->pc = 0x1dab64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dab68: 0x3c03001b
    ctx->pc = 0x1dab68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dab6c: 0x72203e28
    ctx->pc = 0x1dab6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dab70: 0x346500b3
    ctx->pc = 0x1dab70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1dab74: 0xc079e80
    ctx->pc = 0x1DAB74u;
    SET_GPR_U32(ctx, 31, 0x1DAB7Cu);
    ctx->pc = 0x1DAB78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB7Cu; }
        else if (ctx->pc != 0x1DAB7Cu) { ctx->pc = 0x1DAB7Cu; }
    }
    if (ctx->pc != 0x1DAB7Cu) { return; }
    ctx->pc = 0x1DAB7Cu;
    // 0x1dab7c: 0xc60c002c
    ctx->pc = 0x1dab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dab80: 0x3c033f80
    ctx->pc = 0x1dab80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dab84: 0x44830000
    ctx->pc = 0x1dab84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dab88: 0x0
    ctx->pc = 0x1dab88u;
    // NOP
    // 0x1dab8c: 0x460c0032
    ctx->pc = 0x1dab8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dab90: 0x0
    ctx->pc = 0x1dab90u;
    // NOP
    // 0x1dab94: 0x45010003
    ctx->pc = 0x1DAB94u;
    {
        const bool branch_taken_0x1dab94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dab94) {
            ctx->pc = 0x1DABA4u;
            goto label_1daba4;
        }
    }
    ctx->pc = 0x1DAB9Cu;
    // 0x1dab9c: 0xc079ecc
    ctx->pc = 0x1DAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DABA4u);
    ctx->pc = 0x1DABA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DABA4u; }
        else if (ctx->pc != 0x1DABA4u) { ctx->pc = 0x1DABA4u; }
    }
    if (ctx->pc != 0x1DABA4u) { return; }
    ctx->pc = 0x1DABA4u;
label_1daba4:
    // 0x1daba4: 0x3c030027
    ctx->pc = 0x1daba4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1daba8: 0x24638be8
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937576));
    // 0x1dabac: 0xc4620000
    ctx->pc = 0x1dabacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dabb0: 0xc4610004
    ctx->pc = 0x1dabb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dabb4: 0xc4600008
    ctx->pc = 0x1dabb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dabb8: 0xe6020114
    ctx->pc = 0x1dabb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dabbc: 0xe6010118
    ctx->pc = 0x1dabbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dabc0: 0xe600011c
    ctx->pc = 0x1dabc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dabc4: 0x7bbf0020
    ctx->pc = 0x1dabc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dabc8: 0x7bb10010
    ctx->pc = 0x1dabc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dabcc: 0x7bb00000
    ctx->pc = 0x1dabccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabd0: 0x3e00008
    ctx->pc = 0x1DABD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DABD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DABA4u: goto label_1daba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DABD8u;
}
