#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5Asimoto__9FcvEffectFv
// Address: 0x1dd150 - 0x1dd1ec
void initBoss5Asimoto__9FcvEffectFv_0x1dd150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5Asimoto__9FcvEffectFv");


    ctx->pc = 0x1dd150u;

    // 0x1dd150: 0x27bdffe0
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd154: 0x7fbf0010
    ctx->pc = 0x1dd154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd158: 0x7fb00000
    ctx->pc = 0x1dd158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd15c: 0x70808628
    ctx->pc = 0x1dd15cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd160: 0xc0761c4
    ctx->pc = 0x1DD160u;
    SET_GPR_U32(ctx, 31, 0x1DD168u);
    ctx->pc = 0x1DD164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD168u; }
        else if (ctx->pc != 0x1DD168u) { ctx->pc = 0x1DD168u; }
    }
    if (ctx->pc != 0x1DD168u) { return; }
    ctx->pc = 0x1DD168u;
    // 0x1dd168: 0xae020054
    ctx->pc = 0x1dd168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd16c: 0x3c0241f0
    ctx->pc = 0x1dd16cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16880 << 16));
    // 0x1dd170: 0xae020028
    ctx->pc = 0x1dd170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd174: 0x3c020021
    ctx->pc = 0x1dd174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1dd178: 0x3445007a
    ctx->pc = 0x1dd178u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 122));
    // 0x1dd17c: 0x3c020027
    ctx->pc = 0x1dd17cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1dd180: 0x24468e00
    ctx->pc = 0x1dd180u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294938112));
    // 0x1dd184: 0x3c020027
    ctx->pc = 0x1dd184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1dd188: 0x8e040054
    ctx->pc = 0x1dd188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd18c: 0xc079e80
    ctx->pc = 0x1DD18Cu;
    SET_GPR_U32(ctx, 31, 0x1DD194u);
    ctx->pc = 0x1DD190u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294938368));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD194u; }
        else if (ctx->pc != 0x1DD194u) { ctx->pc = 0x1DD194u; }
    }
    if (ctx->pc != 0x1DD194u) { return; }
    ctx->pc = 0x1DD194u;
    // 0x1dd194: 0xc60c002c
    ctx->pc = 0x1dd194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd198: 0x3c033f80
    ctx->pc = 0x1dd198u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dd19c: 0x44830000
    ctx->pc = 0x1dd19cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dd1a0: 0x0
    ctx->pc = 0x1dd1a0u;
    // NOP
    // 0x1dd1a4: 0x460c0032
    ctx->pc = 0x1dd1a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd1a8: 0x0
    ctx->pc = 0x1dd1a8u;
    // NOP
    // 0x1dd1ac: 0x45010003
    ctx->pc = 0x1DD1ACu;
    {
        const bool branch_taken_0x1dd1ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd1ac) {
            ctx->pc = 0x1DD1BCu;
            goto label_1dd1bc;
        }
    }
    ctx->pc = 0x1DD1B4u;
    // 0x1dd1b4: 0xc079ecc
    ctx->pc = 0x1DD1B4u;
    SET_GPR_U32(ctx, 31, 0x1DD1BCu);
    ctx->pc = 0x1DD1B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD1BCu; }
        else if (ctx->pc != 0x1DD1BCu) { ctx->pc = 0x1DD1BCu; }
    }
    if (ctx->pc != 0x1DD1BCu) { return; }
    ctx->pc = 0x1DD1BCu;
label_1dd1bc:
    // 0x1dd1bc: 0x3c030027
    ctx->pc = 0x1dd1bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd1c0: 0x24638f40
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938432));
    // 0x1dd1c4: 0xc4620000
    ctx->pc = 0x1dd1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd1c8: 0xc4610004
    ctx->pc = 0x1dd1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd1cc: 0xc4600008
    ctx->pc = 0x1dd1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd1d0: 0xe6020114
    ctx->pc = 0x1dd1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd1d4: 0xe6010118
    ctx->pc = 0x1dd1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd1d8: 0xe600011c
    ctx->pc = 0x1dd1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd1dc: 0x7bbf0010
    ctx->pc = 0x1dd1dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1e0: 0x7bb00000
    ctx->pc = 0x1dd1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd1e4: 0x3e00008
    ctx->pc = 0x1DD1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD1BCu: goto label_1dd1bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD1ECu;
}
