#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _groupOfPicturesHeader
// Address: 0x2f30f8 - 0x2f31dc
void _groupOfPicturesHeader_0x2f30f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f30f8u;

    // 0x2f30f8: 0x27bdffa0
    ctx->pc = 0x2f30f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f30fc: 0x3c02003a
    ctx->pc = 0x2f30fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3100: 0x8c443024
    ctx->pc = 0x2f3100u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2f3104: 0x3c03003a
    ctx->pc = 0x2f3104u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3108: 0xffb40040
    ctx->pc = 0x2f3108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f310c: 0x3c06003a
    ctx->pc = 0x2f310cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f3110: 0xffb30030
    ctx->pc = 0x2f3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f3114: 0x3c07003a
    ctx->pc = 0x2f3114u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2f3118: 0xffb20020
    ctx->pc = 0x2f3118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f311c: 0x24050001
    ctx->pc = 0x2f311cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3120: 0xffb10010
    ctx->pc = 0x2f3120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f3124: 0x3c12003a
    ctx->pc = 0x2f3124u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f3128: 0xffb00000
    ctx->pc = 0x2f3128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f312c: 0x3c11003a
    ctx->pc = 0x2f312cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f3130: 0xffbf0050
    ctx->pc = 0x2f3130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f3134: 0x3c10003a
    ctx->pc = 0x2f3134u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f3138: 0x8c623974
    ctx->pc = 0x2f3138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14708)));
    // 0x2f313c: 0x3c14003a
    ctx->pc = 0x2f313cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f3140: 0x8c830040
    ctx->pc = 0x2f3140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2f3144: 0x3c13003a
    ctx->pc = 0x2f3144u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f3148: 0x24420001
    ctx->pc = 0x2f3148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f314c: 0x24040001
    ctx->pc = 0x2f314cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3150: 0xac6000e8
    ctx->pc = 0x2f3150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
    // 0x2f3154: 0xacc23970
    ctx->pc = 0x2f3154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14704), GPR_U32(ctx, 2));
    // 0x2f3158: 0xc0bca32
    ctx->pc = 0x2F3158u;
    SET_GPR_U32(ctx, 31, 0x2F3160u);
    ctx->pc = 0x2F315Cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 14712), GPR_U32(ctx, 5));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3160u; }
    }
    if (ctx->pc != 0x2F3160u) { return; }
    ctx->pc = 0x2F3160u;
    // 0x2f3160: 0xae02325c
    ctx->pc = 0x2f3160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12892), GPR_U32(ctx, 2));
    // 0x2f3164: 0xc0bca32
    ctx->pc = 0x2F3164u;
    SET_GPR_U32(ctx, 31, 0x2F316Cu);
    ctx->pc = 0x2F3168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F316Cu; }
    }
    if (ctx->pc != 0x2F316Cu) { return; }
    ctx->pc = 0x2F316Cu;
    // 0x2f316c: 0x3c10003a
    ctx->pc = 0x2f316cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f3170: 0xae223260
    ctx->pc = 0x2f3170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12896), GPR_U32(ctx, 2));
    // 0x2f3174: 0xc0bca32
    ctx->pc = 0x2F3174u;
    SET_GPR_U32(ctx, 31, 0x2F317Cu);
    ctx->pc = 0x2F3178u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F317Cu; }
    }
    if (ctx->pc != 0x2F317Cu) { return; }
    ctx->pc = 0x2F317Cu;
    // 0x2f317c: 0x3c11003a
    ctx->pc = 0x2f317cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f3180: 0xae423264
    ctx->pc = 0x2f3180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12900), GPR_U32(ctx, 2));
    // 0x2f3184: 0xc0bca32
    ctx->pc = 0x2F3184u;
    SET_GPR_U32(ctx, 31, 0x2F318Cu);
    ctx->pc = 0x2F3188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F318Cu; }
    }
    if (ctx->pc != 0x2F318Cu) { return; }
    ctx->pc = 0x2F318Cu;
    // 0x2f318c: 0xc0bca32
    ctx->pc = 0x2F318Cu;
    SET_GPR_U32(ctx, 31, 0x2F3194u);
    ctx->pc = 0x2F3190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3194u; }
    }
    if (ctx->pc != 0x2F3194u) { return; }
    ctx->pc = 0x2F3194u;
    // 0x2f3194: 0xae823268
    ctx->pc = 0x2f3194u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12904), GPR_U32(ctx, 2));
    // 0x2f3198: 0xc0bca32
    ctx->pc = 0x2F3198u;
    SET_GPR_U32(ctx, 31, 0x2F31A0u);
    ctx->pc = 0x2F319Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31A0u; }
    }
    if (ctx->pc != 0x2F31A0u) { return; }
    ctx->pc = 0x2F31A0u;
    // 0x2f31a0: 0xae62326c
    ctx->pc = 0x2f31a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12908), GPR_U32(ctx, 2));
    // 0x2f31a4: 0xc0bca32
    ctx->pc = 0x2F31A4u;
    SET_GPR_U32(ctx, 31, 0x2F31ACu);
    ctx->pc = 0x2F31A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31ACu; }
    }
    if (ctx->pc != 0x2F31ACu) { return; }
    ctx->pc = 0x2F31ACu;
    // 0x2f31ac: 0xae223270
    ctx->pc = 0x2f31acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12912), GPR_U32(ctx, 2));
    // 0x2f31b0: 0xc0bca32
    ctx->pc = 0x2F31B0u;
    SET_GPR_U32(ctx, 31, 0x2F31B8u);
    ctx->pc = 0x2F31B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31B8u; }
    }
    if (ctx->pc != 0x2F31B8u) { return; }
    ctx->pc = 0x2F31B8u;
    // 0x2f31b8: 0xae023274
    ctx->pc = 0x2f31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12916), GPR_U32(ctx, 2));
    // 0x2f31bc: 0xdfbf0050
    ctx->pc = 0x2f31bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f31c0: 0xdfb40040
    ctx->pc = 0x2f31c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f31c4: 0xdfb30030
    ctx->pc = 0x2f31c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f31c8: 0xdfb20020
    ctx->pc = 0x2f31c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f31cc: 0xdfb10010
    ctx->pc = 0x2f31ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f31d0: 0xdfb00000
    ctx->pc = 0x2f31d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f31d4: 0x80bcb40
    ctx->pc = 0x2F31D4u;
    ctx->pc = 0x2F31D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2F2D00u;
    _extensionAndUserData_0x2f2d00(rdram, ctx, runtime); return;
    ctx->pc = 0x2F31DCu;
}
