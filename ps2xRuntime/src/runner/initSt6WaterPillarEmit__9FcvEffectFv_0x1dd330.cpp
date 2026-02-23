#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt6WaterPillarEmit__9FcvEffectFv
// Address: 0x1dd330 - 0x1dd3cc
void initSt6WaterPillarEmit__9FcvEffectFv_0x1dd330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt6WaterPillarEmit__9FcvEffectFv");


    ctx->pc = 0x1dd330u;

    // 0x1dd330: 0x27bdffe0
    ctx->pc = 0x1dd330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd334: 0x7fbf0010
    ctx->pc = 0x1dd334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1dd338: 0x7fb00000
    ctx->pc = 0x1dd338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd33c: 0x70808628
    ctx->pc = 0x1dd33cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dd340: 0xc0761c4
    ctx->pc = 0x1DD340u;
    SET_GPR_U32(ctx, 31, 0x1DD348u);
    ctx->pc = 0x1DD344u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD348u; }
        else if (ctx->pc != 0x1DD348u) { ctx->pc = 0x1DD348u; }
    }
    if (ctx->pc != 0x1DD348u) { return; }
    ctx->pc = 0x1DD348u;
    // 0x1dd348: 0xae020054
    ctx->pc = 0x1dd348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1dd34c: 0x3c0241a0
    ctx->pc = 0x1dd34cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
    // 0x1dd350: 0xae020028
    ctx->pc = 0x1dd350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1dd354: 0x3c020023
    ctx->pc = 0x1dd354u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1dd358: 0x344500f2
    ctx->pc = 0x1dd358u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 242));
    // 0x1dd35c: 0x3c02009d
    ctx->pc = 0x1dd35cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)157 << 16));
    // 0x1dd360: 0x24462d20
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 11552));
    // 0x1dd364: 0x3c02009d
    ctx->pc = 0x1dd364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)157 << 16));
    // 0x1dd368: 0x8e040054
    ctx->pc = 0x1dd368u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dd36c: 0xc079e80
    ctx->pc = 0x1DD36Cu;
    SET_GPR_U32(ctx, 31, 0x1DD374u);
    ctx->pc = 0x1DD370u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 11856));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD374u; }
        else if (ctx->pc != 0x1DD374u) { ctx->pc = 0x1DD374u; }
    }
    if (ctx->pc != 0x1DD374u) { return; }
    ctx->pc = 0x1DD374u;
    // 0x1dd374: 0xc60c002c
    ctx->pc = 0x1dd374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd378: 0x3c033f80
    ctx->pc = 0x1dd378u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dd37c: 0x44830000
    ctx->pc = 0x1dd37cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dd380: 0x0
    ctx->pc = 0x1dd380u;
    // NOP
    // 0x1dd384: 0x460c0032
    ctx->pc = 0x1dd384u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd388: 0x0
    ctx->pc = 0x1dd388u;
    // NOP
    // 0x1dd38c: 0x45010003
    ctx->pc = 0x1DD38Cu;
    {
        const bool branch_taken_0x1dd38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd38c) {
            ctx->pc = 0x1DD39Cu;
            goto label_1dd39c;
        }
    }
    ctx->pc = 0x1DD394u;
    // 0x1dd394: 0xc079ecc
    ctx->pc = 0x1DD394u;
    SET_GPR_U32(ctx, 31, 0x1DD39Cu);
    ctx->pc = 0x1DD398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD39Cu; }
        else if (ctx->pc != 0x1DD39Cu) { ctx->pc = 0x1DD39Cu; }
    }
    if (ctx->pc != 0x1DD39Cu) { return; }
    ctx->pc = 0x1DD39Cu;
label_1dd39c:
    // 0x1dd39c: 0x3c030027
    ctx->pc = 0x1dd39cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dd3a0: 0x24638f70
    ctx->pc = 0x1dd3a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938480));
    // 0x1dd3a4: 0xc4620000
    ctx->pc = 0x1dd3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dd3a8: 0xc4610004
    ctx->pc = 0x1dd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd3ac: 0xc4600008
    ctx->pc = 0x1dd3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd3b0: 0xe6020114
    ctx->pc = 0x1dd3b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1dd3b4: 0xe6010118
    ctx->pc = 0x1dd3b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1dd3b8: 0xe600011c
    ctx->pc = 0x1dd3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1dd3bc: 0x7bbf0010
    ctx->pc = 0x1dd3bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd3c0: 0x7bb00000
    ctx->pc = 0x1dd3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd3c4: 0x3e00008
    ctx->pc = 0x1DD3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DD39Cu: goto label_1dd39c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DD3CCu;
}
