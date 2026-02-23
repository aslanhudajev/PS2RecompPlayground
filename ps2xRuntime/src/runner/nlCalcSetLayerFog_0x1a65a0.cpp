#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCalcSetLayerFog
// Address: 0x1a65a0 - 0x1a6614
void nlCalcSetLayerFog_0x1a65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCalcSetLayerFog");


    ctx->pc = 0x1a65a0u;

    // 0x1a65a0: 0x27bdffb0
    ctx->pc = 0x1a65a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a65a4: 0x7fbf0020
    ctx->pc = 0x1a65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a65a8: 0x7fb00010
    ctx->pc = 0x1a65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a65ac: 0xe7b50004
    ctx->pc = 0x1a65acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a65b0: 0xe7b40000
    ctx->pc = 0x1a65b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a65b4: 0x70a08628
    ctx->pc = 0x1a65b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a65b8: 0x46006546
    ctx->pc = 0x1a65b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1a65bc: 0x46006d06
    ctx->pc = 0x1a65bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1a65c0: 0xc06bf2b
    ctx->pc = 0x1A65C0u;
    SET_GPR_U32(ctx, 31, 0x1A65C8u);
    ctx->pc = 0x1A65C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65C8u; }
        else if (ctx->pc != 0x1A65C8u) { ctx->pc = 0x1A65C8u; }
    }
    if (ctx->pc != 0x1A65C8u) { return; }
    ctx->pc = 0x1A65C8u;
    // 0x1a65c8: 0x72002628
    ctx->pc = 0x1a65c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a65cc: 0xc06bf00
    ctx->pc = 0x1A65CCu;
    SET_GPR_U32(ctx, 31, 0x1A65D4u);
    ctx->pc = 0x1A65D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65D4u; }
        else if (ctx->pc != 0x1A65D4u) { ctx->pc = 0x1A65D4u; }
    }
    if (ctx->pc != 0x1A65D4u) { return; }
    ctx->pc = 0x1A65D4u;
    // 0x1a65d4: 0xc06be7f
    ctx->pc = 0x1A65D4u;
    SET_GPR_U32(ctx, 31, 0x1A65DCu);
    ctx->pc = 0x1A65D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AF9FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9FC_0x1af9fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65DCu; }
        else if (ctx->pc != 0x1A65DCu) { ctx->pc = 0x1A65DCu; }
    }
    if (ctx->pc != 0x1A65DCu) { return; }
    ctx->pc = 0x1A65DCu;
    // 0x1a65dc: 0x27a40030
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a65e0: 0xc06be50
    ctx->pc = 0x1A65E0u;
    SET_GPR_U32(ctx, 31, 0x1A65E8u);
    ctx->pc = 0x1A65E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1AF940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF940_0x1af940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65E8u; }
        else if (ctx->pc != 0x1A65E8u) { ctx->pc = 0x1A65E8u; }
    }
    if (ctx->pc != 0x1A65E8u) { return; }
    ctx->pc = 0x1A65E8u;
    // 0x1a65e8: 0x46150002
    ctx->pc = 0x1a65e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1a65ec: 0x27a40030
    ctx->pc = 0x1a65ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a65f0: 0x4600a341
    ctx->pc = 0x1a65f0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1a65f4: 0xc069988
    ctx->pc = 0x1A65F4u;
    SET_GPR_U32(ctx, 31, 0x1A65FCu);
    ctx->pc = 0x1A65F8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1A6620u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetLayerFog_0x1a6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A65FCu; }
        else if (ctx->pc != 0x1A65FCu) { ctx->pc = 0x1A65FCu; }
    }
    if (ctx->pc != 0x1A65FCu) { return; }
    ctx->pc = 0x1A65FCu;
    // 0x1a65fc: 0x7bbf0020
    ctx->pc = 0x1a65fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6600: 0x7bb00010
    ctx->pc = 0x1a6600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6604: 0xc7b50004
    ctx->pc = 0x1a6604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a6608: 0xc7b40000
    ctx->pc = 0x1a6608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a660c: 0x3e00008
    ctx->pc = 0x1A660Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6614u;
}
