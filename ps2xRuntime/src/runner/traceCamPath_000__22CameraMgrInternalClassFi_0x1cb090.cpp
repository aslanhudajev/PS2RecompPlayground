#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: traceCamPath_000__22CameraMgrInternalClassFi
// Address: 0x1cb090 - 0x1cb294
void traceCamPath_000__22CameraMgrInternalClassFi_0x1cb090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("traceCamPath_000__22CameraMgrInternalClassFi");


    ctx->pc = 0x1cb090u;

    // 0x1cb090: 0x27bdff60
    ctx->pc = 0x1cb090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1cb094: 0x7fbf0050
    ctx->pc = 0x1cb094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1cb098: 0x7fb40040
    ctx->pc = 0x1cb098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cb09c: 0x7fb30030
    ctx->pc = 0x1cb09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cb0a0: 0x7fb20020
    ctx->pc = 0x1cb0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb0a4: 0x7fb10010
    ctx->pc = 0x1cb0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb0a8: 0x7fb00000
    ctx->pc = 0x1cb0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb0ac: 0x84860900
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2304)));
    // 0x1cb0b0: 0x51040
    ctx->pc = 0x1cb0b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cb0b4: 0x451021
    ctx->pc = 0x1cb0b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb0b8: 0x21080
    ctx->pc = 0x1cb0b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cb0bc: 0x451021
    ctx->pc = 0x1cb0bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb0c0: 0x21900
    ctx->pc = 0x1cb0c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cb0c4: 0x610c0
    ctx->pc = 0x1cb0c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cb0c8: 0x441021
    ctx->pc = 0x1cb0c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cb0cc: 0x8c500904
    ctx->pc = 0x1cb0ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 2308)));
    // 0x1cb0d0: 0x7080a628
    ctx->pc = 0x1cb0d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cb0d4: 0x70a09e28
    ctx->pc = 0x1cb0d4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cb0d8: 0x8f828c48
    ctx->pc = 0x1cb0d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cb0dc: 0x431021
    ctx->pc = 0x1cb0dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb0e0: 0x845100d0
    ctx->pc = 0x1cb0e0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1cb0e4: 0xc080a54
    ctx->pc = 0x1CB0E4u;
    SET_GPR_U32(ctx, 31, 0x1CB0ECu);
    ctx->pc = 0x1CB0E8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x202950u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_DemoPlay__Fv_0x202950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB0ECu; }
        else if (ctx->pc != 0x1CB0ECu) { ctx->pc = 0x1CB0ECu; }
    }
    if (ctx->pc != 0x1CB0ECu) { return; }
    ctx->pc = 0x1CB0ECu;
    // 0x1cb0ec: 0x14400004
    ctx->pc = 0x1CB0ECu;
    {
        const bool branch_taken_0x1cb0ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB0F0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cb0ec) {
            ctx->pc = 0x1CB100u;
            goto label_1cb100;
        }
    }
    ctx->pc = 0x1CB0F4u;
    // 0x1cb0f4: 0x8422e3e8
    ctx->pc = 0x1cb0f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x1cb0f8: 0x1040000e
    ctx->pc = 0x1CB0F8u;
    {
        const bool branch_taken_0x1cb0f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cb0f8) {
            ctx->pc = 0x1CB134u;
            goto label_1cb134;
        }
    }
    ctx->pc = 0x1CB100u;
label_1cb100:
    // 0x1cb100: 0xc64100b4
    ctx->pc = 0x1cb100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb104: 0xc64000b0
    ctx->pc = 0x1cb104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb108: 0x46010040
    ctx->pc = 0x1cb108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb10c: 0xe64100b0
    ctx->pc = 0x1cb10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x1cb110: 0xc6000010
    ctx->pc = 0x1cb110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb114: 0x46800020
    ctx->pc = 0x1cb114u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1cb118: 0x46000834
    ctx->pc = 0x1cb118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb11c: 0x0
    ctx->pc = 0x1cb11cu;
    // NOP
    // 0x1cb120: 0x45010004
    ctx->pc = 0x1CB120u;
    {
        const bool branch_taken_0x1cb120 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB124u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
        if (branch_taken_0x1cb120) {
            ctx->pc = 0x1CB134u;
            goto label_1cb134;
        }
    }
    ctx->pc = 0x1CB128u;
    // 0x1cb128: 0xe64000b0
    ctx->pc = 0x1cb128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 176), bits); }
    // 0x1cb12c: 0x3442999a
    ctx->pc = 0x1cb12cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1cb130: 0xae4200b4
    ctx->pc = 0x1cb130u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_1cb134:
    // 0x1cb134: 0x8e4200bc
    ctx->pc = 0x1cb134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb138: 0x10400034
    ctx->pc = 0x1CB138u;
    {
        const bool branch_taken_0x1cb138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cb138) {
            ctx->pc = 0x1CB20Cu;
            goto label_1cb20c;
        }
    }
    ctx->pc = 0x1CB140u;
    // 0x1cb140: 0xc64c00b0
    ctx->pc = 0x1cb140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb144: 0x3c020050
    ctx->pc = 0x1cb144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cb148: 0x131880
    ctx->pc = 0x1cb148u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cb14c: 0x2442fb00
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x1cb150: 0x72202e28
    ctx->pc = 0x1cb150u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1cb154: 0x434821
    ctx->pc = 0x1cb154u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb158: 0x27848c70
    ctx->pc = 0x1cb158u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x1cb15c: 0x27a60060
    ctx->pc = 0x1cb15cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb160: 0x27a70080
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cb164: 0xc0731b8
    ctx->pc = 0x1CB164u;
    SET_GPR_U32(ctx, 31, 0x1CB16Cu);
    ctx->pc = 0x1CB168u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 156));
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB16Cu; }
        else if (ctx->pc != 0x1CB16Cu) { ctx->pc = 0x1CB16Cu; }
    }
    if (ctx->pc != 0x1CB16Cu) { return; }
    ctx->pc = 0x1CB16Cu;
    // 0x1cb16c: 0xc64c0080
    ctx->pc = 0x1cb16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb170: 0xc7ad0060
    ctx->pc = 0x1cb170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb174: 0x8e4500bc
    ctx->pc = 0x1cb174u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb178: 0xc0725bc
    ctx->pc = 0x1CB178u;
    SET_GPR_U32(ctx, 31, 0x1CB180u);
    ctx->pc = 0x1CB17Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB180u; }
        else if (ctx->pc != 0x1CB180u) { ctx->pc = 0x1CB180u; }
    }
    if (ctx->pc != 0x1CB180u) { return; }
    ctx->pc = 0x1CB180u;
    // 0x1cb180: 0xe6400080
    ctx->pc = 0x1cb180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x1cb184: 0xc64c0084
    ctx->pc = 0x1cb184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb188: 0xc7ad0064
    ctx->pc = 0x1cb188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb18c: 0x8e4500bc
    ctx->pc = 0x1cb18cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb190: 0xc0725bc
    ctx->pc = 0x1CB190u;
    SET_GPR_U32(ctx, 31, 0x1CB198u);
    ctx->pc = 0x1CB194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB198u; }
        else if (ctx->pc != 0x1CB198u) { ctx->pc = 0x1CB198u; }
    }
    if (ctx->pc != 0x1CB198u) { return; }
    ctx->pc = 0x1CB198u;
    // 0x1cb198: 0xe6400084
    ctx->pc = 0x1cb198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x1cb19c: 0xc64c0088
    ctx->pc = 0x1cb19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb1a0: 0xc7ad0068
    ctx->pc = 0x1cb1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb1a4: 0x8e4500bc
    ctx->pc = 0x1cb1a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb1a8: 0xc0725bc
    ctx->pc = 0x1CB1A8u;
    SET_GPR_U32(ctx, 31, 0x1CB1B0u);
    ctx->pc = 0x1CB1ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1B0u; }
        else if (ctx->pc != 0x1CB1B0u) { ctx->pc = 0x1CB1B0u; }
    }
    if (ctx->pc != 0x1CB1B0u) { return; }
    ctx->pc = 0x1CB1B0u;
    // 0x1cb1b0: 0xe6400088
    ctx->pc = 0x1cb1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x1cb1b4: 0xc64c0098
    ctx->pc = 0x1cb1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb1b8: 0xc7ad0080
    ctx->pc = 0x1cb1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb1bc: 0x8e4500bc
    ctx->pc = 0x1cb1bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb1c0: 0xc0725bc
    ctx->pc = 0x1CB1C0u;
    SET_GPR_U32(ctx, 31, 0x1CB1C8u);
    ctx->pc = 0x1CB1C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1C8u; }
        else if (ctx->pc != 0x1CB1C8u) { ctx->pc = 0x1CB1C8u; }
    }
    if (ctx->pc != 0x1CB1C8u) { return; }
    ctx->pc = 0x1CB1C8u;
    // 0x1cb1c8: 0xe6400098
    ctx->pc = 0x1cb1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x1cb1cc: 0xc64c009c
    ctx->pc = 0x1cb1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb1d0: 0xc7ad0084
    ctx->pc = 0x1cb1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb1d4: 0x8e4500bc
    ctx->pc = 0x1cb1d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb1d8: 0xc0725bc
    ctx->pc = 0x1CB1D8u;
    SET_GPR_U32(ctx, 31, 0x1CB1E0u);
    ctx->pc = 0x1CB1DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1E0u; }
        else if (ctx->pc != 0x1CB1E0u) { ctx->pc = 0x1CB1E0u; }
    }
    if (ctx->pc != 0x1CB1E0u) { return; }
    ctx->pc = 0x1CB1E0u;
    // 0x1cb1e0: 0xe640009c
    ctx->pc = 0x1cb1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
    // 0x1cb1e4: 0xc64c00a0
    ctx->pc = 0x1cb1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb1e8: 0xc7ad0088
    ctx->pc = 0x1cb1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb1ec: 0x8e4500bc
    ctx->pc = 0x1cb1ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb1f0: 0xc0725bc
    ctx->pc = 0x1CB1F0u;
    SET_GPR_U32(ctx, 31, 0x1CB1F8u);
    ctx->pc = 0x1CB1F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB1F8u; }
        else if (ctx->pc != 0x1CB1F8u) { ctx->pc = 0x1CB1F8u; }
    }
    if (ctx->pc != 0x1CB1F8u) { return; }
    ctx->pc = 0x1CB1F8u;
    // 0x1cb1f8: 0xe64000a0
    ctx->pc = 0x1cb1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
    // 0x1cb1fc: 0x8e4200bc
    ctx->pc = 0x1cb1fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1cb200: 0x2442ffff
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cb204: 0x1000000c
    ctx->pc = 0x1CB204u;
    {
        const bool branch_taken_0x1cb204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CB208u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 2));
        if (branch_taken_0x1cb204) {
            ctx->pc = 0x1CB238u;
            goto label_1cb238;
        }
    }
    ctx->pc = 0x1CB20Cu;
label_1cb20c:
    // 0x1cb20c: 0xc64c00b0
    ctx->pc = 0x1cb20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb210: 0x3c020050
    ctx->pc = 0x1cb210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cb214: 0x131880
    ctx->pc = 0x1cb214u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cb218: 0x2442fb00
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x1cb21c: 0x72202e28
    ctx->pc = 0x1cb21cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1cb220: 0x434821
    ctx->pc = 0x1cb220u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb224: 0x27848c70
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x1cb228: 0x26460080
    ctx->pc = 0x1cb228u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 128));
    // 0x1cb22c: 0x26470098
    ctx->pc = 0x1cb22cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 152));
    // 0x1cb230: 0xc0731b8
    ctx->pc = 0x1CB230u;
    SET_GPR_U32(ctx, 31, 0x1CB238u);
    ctx->pc = 0x1CB234u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 156));
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB238u; }
        else if (ctx->pc != 0x1CB238u) { ctx->pc = 0x1CB238u; }
    }
    if (ctx->pc != 0x1CB238u) { return; }
    ctx->pc = 0x1CB238u;
label_1cb238:
    // 0x1cb238: 0x8fa7009c
    ctx->pc = 0x1cb238u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1cb23c: 0x72802628
    ctx->pc = 0x1cb23cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1cb240: 0x26450080
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 128));
    // 0x1cb244: 0xc0727a0
    ctx->pc = 0x1CB244u;
    SET_GPR_U32(ctx, 31, 0x1CB24Cu);
    ctx->pc = 0x1CB248u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 152));
    ctx->pc = 0x1C9E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLookAt__22CameraMgrInternalClassFP4ANPOP4ANPOi_0x1c9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB24Cu; }
        else if (ctx->pc != 0x1CB24Cu) { ctx->pc = 0x1CB24Cu; }
    }
    if (ctx->pc != 0x1CB24Cu) { return; }
    ctx->pc = 0x1CB24Cu;
    // 0x1cb24c: 0xc6000010
    ctx->pc = 0x1cb24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb250: 0xc64100b0
    ctx->pc = 0x1cb250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb254: 0x46800020
    ctx->pc = 0x1cb254u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1cb258: 0x46000834
    ctx->pc = 0x1cb258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb25c: 0x0
    ctx->pc = 0x1cb25cu;
    // NOP
    // 0x1cb260: 0x45010004
    ctx->pc = 0x1CB260u;
    {
        const bool branch_taken_0x1cb260 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB264u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cb260) {
            ctx->pc = 0x1CB274u;
            goto label_1cb274;
        }
    }
    ctx->pc = 0x1CB268u;
    // 0x1cb268: 0x72602e28
    ctx->pc = 0x1cb268u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1cb26c: 0xc072cd8
    ctx->pc = 0x1CB26Cu;
    SET_GPR_U32(ctx, 31, 0x1CB274u);
    ctx->pc = 0x1CB270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB274u; }
        else if (ctx->pc != 0x1CB274u) { ctx->pc = 0x1CB274u; }
    }
    if (ctx->pc != 0x1CB274u) { return; }
    ctx->pc = 0x1CB274u;
label_1cb274:
    // 0x1cb274: 0x7bbf0050
    ctx->pc = 0x1cb274u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cb278: 0x7bb40040
    ctx->pc = 0x1cb278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb27c: 0x7bb30030
    ctx->pc = 0x1cb27cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb280: 0x7bb20020
    ctx->pc = 0x1cb280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb284: 0x7bb10010
    ctx->pc = 0x1cb284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb288: 0x7bb00000
    ctx->pc = 0x1cb288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb28c: 0x3e00008
    ctx->pc = 0x1CB28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB290u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB100u: goto label_1cb100;
            case 0x1CB134u: goto label_1cb134;
            case 0x1CB20Cu: goto label_1cb20c;
            case 0x1CB238u: goto label_1cb238;
            case 0x1CB274u: goto label_1cb274;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB294u;
}
