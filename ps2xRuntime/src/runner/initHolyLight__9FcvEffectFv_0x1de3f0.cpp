#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initHolyLight__9FcvEffectFv
// Address: 0x1de3f0 - 0x1de4ac
void initHolyLight__9FcvEffectFv_0x1de3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initHolyLight__9FcvEffectFv");


    ctx->pc = 0x1de3f0u;

    // 0x1de3f0: 0x27bdffe0
    ctx->pc = 0x1de3f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de3f4: 0x7fbf0010
    ctx->pc = 0x1de3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1de3f8: 0x7fb00000
    ctx->pc = 0x1de3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1de3fc: 0x70808628
    ctx->pc = 0x1de3fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de400: 0xc0761c4
    ctx->pc = 0x1DE400u;
    SET_GPR_U32(ctx, 31, 0x1DE408u);
    ctx->pc = 0x1DE404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE408u; }
        else if (ctx->pc != 0x1DE408u) { ctx->pc = 0x1DE408u; }
    }
    if (ctx->pc != 0x1DE408u) { return; }
    ctx->pc = 0x1DE408u;
    // 0x1de408: 0xae020054
    ctx->pc = 0x1de408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1de40c: 0x3c024270
    ctx->pc = 0x1de40cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x1de410: 0xae020028
    ctx->pc = 0x1de410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1de414: 0x3c02001b
    ctx->pc = 0x1de414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1de418: 0x34450069
    ctx->pc = 0x1de418u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 105));
    // 0x1de41c: 0x3c020026
    ctx->pc = 0x1de41cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1de420: 0x24466820
    ctx->pc = 0x1de420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 26656));
    // 0x1de424: 0x3c020026
    ctx->pc = 0x1de424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1de428: 0x8e040054
    ctx->pc = 0x1de428u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de42c: 0xc079e80
    ctx->pc = 0x1DE42Cu;
    SET_GPR_U32(ctx, 31, 0x1DE434u);
    ctx->pc = 0x1DE430u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 27424));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE434u; }
        else if (ctx->pc != 0x1DE434u) { ctx->pc = 0x1DE434u; }
    }
    if (ctx->pc != 0x1DE434u) { return; }
    ctx->pc = 0x1DE434u;
    // 0x1de434: 0x8e030054
    ctx->pc = 0x1de434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de438: 0x3c02001b
    ctx->pc = 0x1de438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1de43c: 0x34450069
    ctx->pc = 0x1de43cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 105));
    // 0x1de440: 0x3c020026
    ctx->pc = 0x1de440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1de444: 0x24466910
    ctx->pc = 0x1de444u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 26896));
    // 0x1de448: 0x3c020026
    ctx->pc = 0x1de448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1de44c: 0x246400f0
    ctx->pc = 0x1de44cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 240));
    // 0x1de450: 0xc079e80
    ctx->pc = 0x1DE450u;
    SET_GPR_U32(ctx, 31, 0x1DE458u);
    ctx->pc = 0x1DE454u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 27424));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE458u; }
        else if (ctx->pc != 0x1DE458u) { ctx->pc = 0x1DE458u; }
    }
    if (ctx->pc != 0x1DE458u) { return; }
    ctx->pc = 0x1DE458u;
    // 0x1de458: 0x8e030054
    ctx->pc = 0x1de458u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de45c: 0x3c02001b
    ctx->pc = 0x1de45cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1de460: 0x34450069
    ctx->pc = 0x1de460u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 105));
    // 0x1de464: 0x3c020026
    ctx->pc = 0x1de464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1de468: 0x24466a00
    ctx->pc = 0x1de468u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1de46c: 0x3c020026
    ctx->pc = 0x1de46cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1de470: 0x246401e0
    ctx->pc = 0x1de470u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 480));
    // 0x1de474: 0xc079e80
    ctx->pc = 0x1DE474u;
    SET_GPR_U32(ctx, 31, 0x1DE47Cu);
    ctx->pc = 0x1DE478u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 27424));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE47Cu; }
        else if (ctx->pc != 0x1DE47Cu) { ctx->pc = 0x1DE47Cu; }
    }
    if (ctx->pc != 0x1DE47Cu) { return; }
    ctx->pc = 0x1DE47Cu;
    // 0x1de47c: 0x3c030027
    ctx->pc = 0x1de47cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de480: 0x24639768
    ctx->pc = 0x1de480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940520));
    // 0x1de484: 0xc4620000
    ctx->pc = 0x1de484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de488: 0xc4610004
    ctx->pc = 0x1de488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de48c: 0xc4600008
    ctx->pc = 0x1de48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de490: 0xe6020114
    ctx->pc = 0x1de490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x1de494: 0xe6010118
    ctx->pc = 0x1de494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x1de498: 0xe600011c
    ctx->pc = 0x1de498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1de49c: 0x7bbf0010
    ctx->pc = 0x1de49cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de4a0: 0x7bb00000
    ctx->pc = 0x1de4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de4a4: 0x3e00008
    ctx->pc = 0x1DE4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE4A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE4ACu;
}
