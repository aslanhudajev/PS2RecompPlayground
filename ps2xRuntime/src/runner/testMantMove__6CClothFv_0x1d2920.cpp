#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: testMantMove__6CClothFv
// Address: 0x1d2920 - 0x1d2afc
void testMantMove__6CClothFv_0x1d2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("testMantMove__6CClothFv");


    ctx->pc = 0x1d2920u;

    // 0x1d2920: 0x27bdff50
    ctx->pc = 0x1d2920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d2924: 0x7fbf0080
    ctx->pc = 0x1d2924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1d2928: 0x7fb70070
    ctx->pc = 0x1d2928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d292c: 0x7fb60060
    ctx->pc = 0x1d292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d2930: 0x7fb50050
    ctx->pc = 0x1d2930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d2934: 0x7fb40040
    ctx->pc = 0x1d2934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d2938: 0x7fb30030
    ctx->pc = 0x1d2938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d293c: 0x7fb20020
    ctx->pc = 0x1d293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2940: 0x7fb10010
    ctx->pc = 0x1d2940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2944: 0x7fb00000
    ctx->pc = 0x1d2944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2948: 0x8c830068
    ctx->pc = 0x1d2948u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1d294c: 0x8c900000
    ctx->pc = 0x1d294cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2950: 0x28620140
    ctx->pc = 0x1d2950u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 320));
    // 0x1d2954: 0x14400030
    ctx->pc = 0x1D2954u;
    {
        const bool branch_taken_0x1d2954 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2958u;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d2954) {
            ctx->pc = 0x1D2A18u;
            goto label_1d2a18;
        }
    }
    ctx->pc = 0x1D295Cu;
    // 0x1d295c: 0x2463fec0
    ctx->pc = 0x1d295cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966976));
    // 0x1d2960: 0x31180
    ctx->pc = 0x1d2960u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1d2964: 0x431821
    ctx->pc = 0x1d2964u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2968: 0x310c0
    ctx->pc = 0x1d2968u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d296c: 0x431023
    ctx->pc = 0x1d296cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2970: 0x8ee40064
    ctx->pc = 0x1d2970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 100)));
    // 0x1d2974: 0x21080
    ctx->pc = 0x1d2974u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d2978: 0x7000b628
    ctx->pc = 0x1d2978u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d297c: 0x821021
    ctx->pc = 0x1d297cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d2980: 0x24550014
    ctx->pc = 0x1d2980u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1d2984: 0x3c020026
    ctx->pc = 0x1d2984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d2988: 0x24545130
    ctx->pc = 0x1d2988u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 20784));
label_1d298c:
    // 0x1d298c: 0x8e920000
    ctx->pc = 0x1d298cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d2990: 0x70008e28
    ctx->pc = 0x1d2990u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2994: 0x72a09e28
    ctx->pc = 0x1d2994u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1d2998:
    // 0x1d2998: 0xc6600000
    ctx->pc = 0x1d2998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d299c: 0x27a40090
    ctx->pc = 0x1d299cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d29a0: 0x27a500a0
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d29a4: 0xe7a00090
    ctx->pc = 0x1d29a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d29a8: 0xc6600004
    ctx->pc = 0x1d29a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d29ac: 0xe7a00094
    ctx->pc = 0x1d29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d29b0: 0xc6600008
    ctx->pc = 0x1d29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d29b4: 0xc06bf00
    ctx->pc = 0x1D29B4u;
    SET_GPR_U32(ctx, 31, 0x1D29BCu);
    ctx->pc = 0x1D29B8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29BCu; }
        else if (ctx->pc != 0x1D29BCu) { ctx->pc = 0x1D29BCu; }
    }
    if (ctx->pc != 0x1D29BCu) { return; }
    ctx->pc = 0x1D29BCu;
    // 0x1d29bc: 0x2643000e
    ctx->pc = 0x1d29bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 14));
    // 0x1d29c0: 0x712023
    ctx->pc = 0x1d29c0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d29c4: 0x41880
    ctx->pc = 0x1d29c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d29c8: 0x641821
    ctx->pc = 0x1d29c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d29cc: 0x31900
    ctx->pc = 0x1d29ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d29d0: 0xc7a000a0
    ctx->pc = 0x1d29d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d29d4: 0x2032021
    ctx->pc = 0x1d29d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d29d8: 0x26310001
    ctx->pc = 0x1d29d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d29dc: 0x2a23000a
    ctx->pc = 0x1d29dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 10));
    // 0x1d29e0: 0x26730014
    ctx->pc = 0x1d29e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 20));
    // 0x1d29e4: 0x26b50014
    ctx->pc = 0x1d29e4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 20));
    // 0x1d29e8: 0xe4800000
    ctx->pc = 0x1d29e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d29ec: 0xc7a000a4
    ctx->pc = 0x1d29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d29f0: 0xe4800004
    ctx->pc = 0x1d29f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d29f4: 0xc7a000a8
    ctx->pc = 0x1d29f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d29f8: 0x1460ffe7
    ctx->pc = 0x1D29F8u;
    {
        const bool branch_taken_0x1d29f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D29FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x1d29f8) {
            ctx->pc = 0x1D2998u;
            goto label_1d2998;
        }
    }
    ctx->pc = 0x1D2A00u;
    // 0x1d2a00: 0x26d60001
    ctx->pc = 0x1d2a00u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d2a04: 0x2ac30009
    ctx->pc = 0x1d2a04u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), 9));
    // 0x1d2a08: 0x1460ffe0
    ctx->pc = 0x1D2A08u;
    {
        const bool branch_taken_0x1d2a08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2A0Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        if (branch_taken_0x1d2a08) {
            ctx->pc = 0x1D298Cu;
            goto label_1d298c;
        }
    }
    ctx->pc = 0x1D2A10u;
    // 0x1d2a10: 0x10000028
    ctx->pc = 0x1D2A10u;
    {
        const bool branch_taken_0x1d2a10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2A14u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 104)));
        if (branch_taken_0x1d2a10) {
            ctx->pc = 0x1D2AB4u;
            goto label_1d2ab4;
        }
    }
    ctx->pc = 0x1D2A18u;
label_1d2a18:
    // 0x1d2a18: 0x8ee30064
    ctx->pc = 0x1d2a18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 100)));
    // 0x1d2a1c: 0x3c020026
    ctx->pc = 0x1d2a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d2a20: 0x70009e28
    ctx->pc = 0x1d2a20u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2a24: 0x24565130
    ctx->pc = 0x1d2a24u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 20784));
    // 0x1d2a28: 0x24720014
    ctx->pc = 0x1d2a28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 20));
label_1d2a2c:
    // 0x1d2a2c: 0x8ed40000
    ctx->pc = 0x1d2a2cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d2a30: 0x7000ae28
    ctx->pc = 0x1d2a30u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d2a34: 0x72408e28
    ctx->pc = 0x1d2a34u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1d2a38:
    // 0x1d2a38: 0xc6200000
    ctx->pc = 0x1d2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2a3c: 0x27a40090
    ctx->pc = 0x1d2a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d2a40: 0x27a500a0
    ctx->pc = 0x1d2a40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d2a44: 0xe7a00090
    ctx->pc = 0x1d2a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d2a48: 0xc6200004
    ctx->pc = 0x1d2a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2a4c: 0xe7a00094
    ctx->pc = 0x1d2a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d2a50: 0xc6200008
    ctx->pc = 0x1d2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2a54: 0xc06bf00
    ctx->pc = 0x1D2A54u;
    SET_GPR_U32(ctx, 31, 0x1D2A5Cu);
    ctx->pc = 0x1D2A58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A5Cu; }
        else if (ctx->pc != 0x1D2A5Cu) { ctx->pc = 0x1D2A5Cu; }
    }
    if (ctx->pc != 0x1D2A5Cu) { return; }
    ctx->pc = 0x1D2A5Cu;
    // 0x1d2a5c: 0x2683000e
    ctx->pc = 0x1d2a5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 14));
    // 0x1d2a60: 0x752023
    ctx->pc = 0x1d2a60u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1d2a64: 0x41880
    ctx->pc = 0x1d2a64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2a68: 0x641821
    ctx->pc = 0x1d2a68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2a6c: 0x31900
    ctx->pc = 0x1d2a6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2a70: 0xc7a000a0
    ctx->pc = 0x1d2a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2a74: 0x2032021
    ctx->pc = 0x1d2a74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d2a78: 0x26b50001
    ctx->pc = 0x1d2a78u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d2a7c: 0x2aa3000a
    ctx->pc = 0x1d2a7cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), 10));
    // 0x1d2a80: 0x26310014
    ctx->pc = 0x1d2a80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
    // 0x1d2a84: 0x26520014
    ctx->pc = 0x1d2a84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
    // 0x1d2a88: 0xe4800000
    ctx->pc = 0x1d2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d2a8c: 0xc7a000a4
    ctx->pc = 0x1d2a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2a90: 0xe4800004
    ctx->pc = 0x1d2a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d2a94: 0xc7a000a8
    ctx->pc = 0x1d2a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2a98: 0x1460ffe7
    ctx->pc = 0x1D2A98u;
    {
        const bool branch_taken_0x1d2a98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2A9Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x1d2a98) {
            ctx->pc = 0x1D2A38u;
            goto label_1d2a38;
        }
    }
    ctx->pc = 0x1D2AA0u;
    // 0x1d2aa0: 0x26730001
    ctx->pc = 0x1d2aa0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d2aa4: 0x2a630009
    ctx->pc = 0x1d2aa4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 9));
    // 0x1d2aa8: 0x1460ffe0
    ctx->pc = 0x1D2AA8u;
    {
        const bool branch_taken_0x1d2aa8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2AACu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4));
        if (branch_taken_0x1d2aa8) {
            ctx->pc = 0x1D2A2Cu;
            goto label_1d2a2c;
        }
    }
    ctx->pc = 0x1D2AB0u;
    // 0x1d2ab0: 0x8ee30068
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_1d2ab4:
    // 0x1d2ab4: 0x24630001
    ctx->pc = 0x1d2ab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2ab8: 0xaee30068
    ctx->pc = 0x1d2ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 104), GPR_U32(ctx, 3));
    // 0x1d2abc: 0x8ee30068
    ctx->pc = 0x1d2abcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 104)));
    // 0x1d2ac0: 0x286301e0
    ctx->pc = 0x1d2ac0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 480));
    // 0x1d2ac4: 0x14600002
    ctx->pc = 0x1D2AC4u;
    {
        const bool branch_taken_0x1d2ac4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2AC8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 480));
        if (branch_taken_0x1d2ac4) {
            ctx->pc = 0x1D2AD0u;
            goto label_1d2ad0;
        }
    }
    ctx->pc = 0x1D2ACCu;
    // 0x1d2acc: 0xaee30068
    ctx->pc = 0x1d2accu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 104), GPR_U32(ctx, 3));
label_1d2ad0:
    // 0x1d2ad0: 0x7bbf0080
    ctx->pc = 0x1d2ad0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2ad4: 0x7bb70070
    ctx->pc = 0x1d2ad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d2ad8: 0x7bb60060
    ctx->pc = 0x1d2ad8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2adc: 0x7bb50050
    ctx->pc = 0x1d2adcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2ae0: 0x7bb40040
    ctx->pc = 0x1d2ae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2ae4: 0x7bb30030
    ctx->pc = 0x1d2ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2ae8: 0x7bb20020
    ctx->pc = 0x1d2ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2aec: 0x7bb10010
    ctx->pc = 0x1d2aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2af0: 0x7bb00000
    ctx->pc = 0x1d2af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2af4: 0x3e00008
    ctx->pc = 0x1D2AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2AF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D298Cu: goto label_1d298c;
            case 0x1D2998u: goto label_1d2998;
            case 0x1D2A18u: goto label_1d2a18;
            case 0x1D2A2Cu: goto label_1d2a2c;
            case 0x1D2A38u: goto label_1d2a38;
            case 0x1D2AB4u: goto label_1d2ab4;
            case 0x1D2AD0u: goto label_1d2ad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2AFCu;
}
