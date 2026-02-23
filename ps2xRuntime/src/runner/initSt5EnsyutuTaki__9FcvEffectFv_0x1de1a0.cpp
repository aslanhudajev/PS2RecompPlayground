#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSt5EnsyutuTaki__9FcvEffectFv
// Address: 0x1de1a0 - 0x1de250
void initSt5EnsyutuTaki__9FcvEffectFv_0x1de1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSt5EnsyutuTaki__9FcvEffectFv");


    ctx->pc = 0x1de1a0u;

    // 0x1de1a0: 0x27bdffc0
    ctx->pc = 0x1de1a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1de1a4: 0x7fbf0030
    ctx->pc = 0x1de1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1de1a8: 0x7fb20020
    ctx->pc = 0x1de1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1de1ac: 0x7fb10010
    ctx->pc = 0x1de1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de1b0: 0x70809628
    ctx->pc = 0x1de1b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de1b4: 0x2405006d
    ctx->pc = 0x1de1b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 109));
    // 0x1de1b8: 0xc0761c4
    ctx->pc = 0x1DE1B8u;
    SET_GPR_U32(ctx, 31, 0x1DE1C0u);
    ctx->pc = 0x1DE1BCu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1C0u; }
        else if (ctx->pc != 0x1DE1C0u) { ctx->pc = 0x1DE1C0u; }
    }
    if (ctx->pc != 0x1DE1C0u) { return; }
    ctx->pc = 0x1DE1C0u;
    // 0x1de1c0: 0xae420054
    ctx->pc = 0x1de1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1de1c4: 0x3c0342c8
    ctx->pc = 0x1de1c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17096 << 16));
    // 0x1de1c8: 0xae430028
    ctx->pc = 0x1de1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1de1cc: 0x70008628
    ctx->pc = 0x1de1ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de1d0: 0x1000000d
    ctx->pc = 0x1DE1D0u;
    {
        const bool branch_taken_0x1de1d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE1D4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de1d0) {
            ctx->pc = 0x1DE208u;
            goto label_1de208;
        }
    }
    ctx->pc = 0x1DE1D8u;
label_1de1d8:
    // 0x1de1d8: 0xc07f208
    ctx->pc = 0x1DE1D8u;
    SET_GPR_U32(ctx, 31, 0x1DE1E0u);
    ctx->pc = 0x1DE1DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1E0u; }
        else if (ctx->pc != 0x1DE1E0u) { ctx->pc = 0x1DE1E0u; }
    }
    if (ctx->pc != 0x1DE1E0u) { return; }
    ctx->pc = 0x1DE1E0u;
    // 0x1de1e0: 0x8e440054
    ctx->pc = 0x1de1e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de1e4: 0x3c030048
    ctx->pc = 0x1de1e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)72 << 16));
    // 0x1de1e8: 0x3465002b
    ctx->pc = 0x1de1e8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 43));
    // 0x1de1ec: 0x70403628
    ctx->pc = 0x1de1ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de1f0: 0x70003e28
    ctx->pc = 0x1de1f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de1f4: 0xc079e80
    ctx->pc = 0x1DE1F4u;
    SET_GPR_U32(ctx, 31, 0x1DE1FCu);
    ctx->pc = 0x1DE1F8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1FCu; }
        else if (ctx->pc != 0x1DE1FCu) { ctx->pc = 0x1DE1FCu; }
    }
    if (ctx->pc != 0x1DE1FCu) { return; }
    ctx->pc = 0x1DE1FCu;
    // 0x1de1fc: 0x263100f0
    ctx->pc = 0x1de1fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1de200: 0x26100001
    ctx->pc = 0x1de200u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de204: 0x0
    ctx->pc = 0x1de204u;
    // NOP
label_1de208:
    // 0x1de208: 0x8e430000
    ctx->pc = 0x1de208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1de20c: 0x203182a
    ctx->pc = 0x1de20cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1de210: 0x1460fff1
    ctx->pc = 0x1DE210u;
    {
        const bool branch_taken_0x1de210 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE214u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5775));
        if (branch_taken_0x1de210) {
            ctx->pc = 0x1DE1D8u;
            goto label_1de1d8;
        }
    }
    ctx->pc = 0x1DE218u;
    // 0x1de218: 0x3c030027
    ctx->pc = 0x1de218u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de21c: 0x24639748
    ctx->pc = 0x1de21cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940488));
    // 0x1de220: 0xc4620000
    ctx->pc = 0x1de220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de224: 0xc4610004
    ctx->pc = 0x1de224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de228: 0xc4600008
    ctx->pc = 0x1de228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de22c: 0xe6420114
    ctx->pc = 0x1de22cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1de230: 0xe6410118
    ctx->pc = 0x1de230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1de234: 0xe640011c
    ctx->pc = 0x1de234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1de238: 0x7bbf0030
    ctx->pc = 0x1de238u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de23c: 0x7bb20020
    ctx->pc = 0x1de23cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de240: 0x7bb10010
    ctx->pc = 0x1de240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de244: 0x7bb00000
    ctx->pc = 0x1de244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de248: 0x3e00008
    ctx->pc = 0x1DE248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE24Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE1D8u: goto label_1de1d8;
            case 0x1DE208u: goto label_1de208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE250u;
}
