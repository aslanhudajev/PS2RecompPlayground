#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: screenFade
// Address: 0x107f60 - 0x108178
void screenFade_0x107f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107f60u;

    // 0x107f60: 0x8f9882b8
    ctx->pc = 0x107f60u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x107f64: 0x27bdff80
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x107f68: 0xffb60060
    ctx->pc = 0x107f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x107f6c: 0x700034a9
    ctx->pc = 0x107f6cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107f70: 0xffb50050
    ctx->pc = 0x107f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x107f74: 0x3c021000
    ctx->pc = 0x107f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x107f78: 0xffb40040
    ctx->pc = 0x107f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107f7c: 0x3c051000
    ctx->pc = 0x107f7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x107f80: 0x5283c
    ctx->pc = 0x107f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x107f84: 0x34a58001
    ctx->pc = 0x107f84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32769));
    // 0x107f88: 0xffb30030
    ctx->pc = 0x107f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107f8c: 0x2414000e
    ctx->pc = 0x107f8cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 14));
    // 0x107f90: 0xffb20020
    ctx->pc = 0x107f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107f94: 0x3c0701ff
    ctx->pc = 0x107f94u;
    SET_GPR_U32(ctx, 7, ((uint32_t)511 << 16));
    // 0x107f98: 0x73c38
    ctx->pc = 0x107f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x107f9c: 0x34e7027f
    ctx->pc = 0x107f9cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 639));
    // 0x107fa0: 0x73c38
    ctx->pc = 0x107fa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x107fa4: 0xffb10010
    ctx->pc = 0x107fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107fa8: 0x24080040
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    // 0x107fac: 0xffb00000
    ctx->pc = 0x107facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107fb0: 0x3c091000
    ctx->pc = 0x107fb0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)4096 << 16));
    // 0x107fb4: 0x9483c
    ctx->pc = 0x107fb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x107fb8: 0x35290003
    ctx->pc = 0x107fb8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 3));
    // 0x107fbc: 0xffbf0070
    ctx->pc = 0x107fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x107fc0: 0x240a014c
    ctx->pc = 0x107fc0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 332));
    // 0x107fc4: 0x7f060000
    ctx->pc = 0x107fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 6));
    // 0x107fc8: 0x240b0081
    ctx->pc = 0x107fc8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 129));
    // 0x107fcc: 0x240e0042
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 66));
    // 0x107fd0: 0x3c0f0002
    ctx->pc = 0x107fd0u;
    SET_GPR_U32(ctx, 15, ((uint32_t)2 << 16));
    // 0x107fd4: 0x24110047
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 71));
    // 0x107fd8: 0x3c128000
    ctx->pc = 0x107fd8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)32768 << 16));
    // 0x107fdc: 0x12903c
    ctx->pc = 0x107fdcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x107fe0: 0x36528001
    ctx->pc = 0x107fe0u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 32769));
    // 0x107fe4: 0x3c134141
    ctx->pc = 0x107fe4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)16705 << 16));
    // 0x107fe8: 0x36734141
    ctx->pc = 0x107fe8u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 16705));
    // 0x107fec: 0xaf020000
    ctx->pc = 0x107fecu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x107ff0: 0xff050010
    ctx->pc = 0x107ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 5));
    // 0x107ff4: 0x80682d
    ctx->pc = 0x107ff4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ff8: 0xff070020
    ctx->pc = 0x107ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 7));
    // 0x107ffc: 0x27060080
    ctx->pc = 0x107ffcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 24), 128));
    // 0x108000: 0xff080028
    ctx->pc = 0x108000u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 8));
    // 0x108004: 0x24166c00
    ctx->pc = 0x108004u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 27648));
    // 0x108008: 0xff090030
    ctx->pc = 0x108008u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 9));
    // 0x10800c: 0x3c0c0010
    ctx->pc = 0x10800cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)16 << 16));
    // 0x108010: 0xff140038
    ctx->pc = 0x108010u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 20));
    // 0x108014: 0x27070090
    ctx->pc = 0x108014u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 24), 144));
    // 0x108018: 0xff0a0040
    ctx->pc = 0x108018u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 10));
    // 0x10801c: 0x24107000
    ctx->pc = 0x10801cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 28672));
    // 0x108020: 0xff0b0050
    ctx->pc = 0x108020u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 11));
    // 0x108024: 0x270200a0
    ctx->pc = 0x108024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 24), 160));
    // 0x108028: 0xff0e0058
    ctx->pc = 0x108028u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 14));
    // 0x10802c: 0x34159400
    ctx->pc = 0x10802cu;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 0), 37888));
    // 0x108030: 0xff0f0060
    ctx->pc = 0x108030u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 15));
    // 0x108034: 0x270500b0
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 24), 176));
    // 0x108038: 0xff110068
    ctx->pc = 0x108038u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 17));
    // 0x10803c: 0x270800c0
    ctx->pc = 0x10803cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 24), 192));
    // 0x108040: 0xff120070
    ctx->pc = 0x108040u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 18));
    // 0x108044: 0x270900d0
    ctx->pc = 0x108044u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 24), 208));
    // 0x108048: 0xff130078
    ctx->pc = 0x108048u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 19));
    // 0x10804c: 0x340e9000
    ctx->pc = 0x10804cu;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 0), 36864));
    // 0x108050: 0xff140018
    ctx->pc = 0x108050u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 20));
    // 0x108054: 0x270a00e0
    ctx->pc = 0x108054u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 24), 224));
    // 0x108058: 0xff000048
    ctx->pc = 0x108058u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 0));
    // 0x10805c: 0x270b00f0
    ctx->pc = 0x10805cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 24), 240));
    // 0x108060: 0xaf000080
    ctx->pc = 0x108060u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 128), GPR_U32(ctx, 0));
    // 0x108064: 0x3c0f7000
    ctx->pc = 0x108064u;
    SET_GPR_U32(ctx, 15, ((uint32_t)28672 << 16));
    // 0x108068: 0xaccd000c
    ctx->pc = 0x108068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 13));
    // 0x10806c: 0x202d
    ctx->pc = 0x10806cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108070: 0xacc00004
    ctx->pc = 0x108070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x108074: 0xacc00008
    ctx->pc = 0x108074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x108078: 0xaf160090
    ctx->pc = 0x108078u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 144), GPR_U32(ctx, 22));
    // 0x10807c: 0xacf00004
    ctx->pc = 0x10807cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x108080: 0xace0000c
    ctx->pc = 0x108080u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x108084: 0xacec0008
    ctx->pc = 0x108084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 12));
    // 0x108088: 0xaf0000a0
    ctx->pc = 0x108088u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 0));
    // 0x10808c: 0xac4d000c
    ctx->pc = 0x10808cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 13));
    // 0x108090: 0xac400004
    ctx->pc = 0x108090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x108094: 0xac400008
    ctx->pc = 0x108094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x108098: 0xaf1500b0
    ctx->pc = 0x108098u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 21));
    // 0x10809c: 0x700014a9
    ctx->pc = 0x10809cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1080a0: 0xacb00004
    ctx->pc = 0x1080a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x1080a4: 0xaca0000c
    ctx->pc = 0x1080a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1080a8: 0xacac0008
    ctx->pc = 0x1080a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 12));
    // 0x1080ac: 0xaf0000c0
    ctx->pc = 0x1080acu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 0));
    // 0x1080b0: 0xad0d000c
    ctx->pc = 0x1080b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 13));
    // 0x1080b4: 0xad000004
    ctx->pc = 0x1080b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1080b8: 0xad000008
    ctx->pc = 0x1080b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1080bc: 0xaf1600d0
    ctx->pc = 0x1080bcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 208), GPR_U32(ctx, 22));
    // 0x1080c0: 0xad20000c
    ctx->pc = 0x1080c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x1080c4: 0xad2e0004
    ctx->pc = 0x1080c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 14));
    // 0x1080c8: 0xad2c0008
    ctx->pc = 0x1080c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 12));
    // 0x1080cc: 0xaf0000e0
    ctx->pc = 0x1080ccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 224), GPR_U32(ctx, 0));
    // 0x1080d0: 0xad4d000c
    ctx->pc = 0x1080d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 13));
    // 0x1080d4: 0xad400004
    ctx->pc = 0x1080d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x1080d8: 0xad400008
    ctx->pc = 0x1080d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x1080dc: 0xaf1500f0
    ctx->pc = 0x1080dcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 21));
    // 0x1080e0: 0xad6e0004
    ctx->pc = 0x1080e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 14));
    // 0x1080e4: 0xad6c0008
    ctx->pc = 0x1080e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 12));
    // 0x1080e8: 0xad60000c
    ctx->pc = 0x1080e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x1080ec: 0x7f020100
    ctx->pc = 0x1080ecu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 256), GPR_VEC(ctx, 2));
    // 0x1080f0: 0x8f020000
    ctx->pc = 0x1080f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1080f4: 0xaf0f0100
    ctx->pc = 0x1080f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 15));
    // 0x1080f8: 0x3442000f
    ctx->pc = 0x1080f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15));
    // 0x1080fc: 0xc043948
    ctx->pc = 0x1080FCu;
    SET_GPR_U32(ctx, 31, 0x108104u);
    ctx->pc = 0x108100u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108104u; }
    }
    if (ctx->pc != 0x108104u) { return; }
    ctx->pc = 0x108104u;
    // 0x108104: 0x202d
    ctx->pc = 0x108104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108108: 0xc043322
    ctx->pc = 0x108108u;
    SET_GPR_U32(ctx, 31, 0x108110u);
    ctx->pc = 0x10810Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108110u; }
    }
    if (ctx->pc != 0x108110u) { return; }
    ctx->pc = 0x108110u;
    // 0x108110: 0x8f848490
    ctx->pc = 0x108110u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x108114: 0x282d
    ctx->pc = 0x108114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108118: 0xc04372a
    ctx->pc = 0x108118u;
    SET_GPR_U32(ctx, 31, 0x108120u);
    ctx->pc = 0x10811Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108120u; }
    }
    if (ctx->pc != 0x108120u) { return; }
    ctx->pc = 0x108120u;
    // 0x108120: 0x8f8382b8
    ctx->pc = 0x108120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x108124: 0x3c050fff
    ctx->pc = 0x108124u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x108128: 0x34a5ffff
    ctx->pc = 0x108128u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x10812c: 0x8f848490
    ctx->pc = 0x10812cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x108130: 0xc0435d6
    ctx->pc = 0x108130u;
    SET_GPR_U32(ctx, 31, 0x108138u);
    ctx->pc = 0x108134u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108138u; }
    }
    if (ctx->pc != 0x108138u) { return; }
    ctx->pc = 0x108138u;
    // 0x108138: 0x202d
    ctx->pc = 0x108138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10813c: 0xc043322
    ctx->pc = 0x10813Cu;
    SET_GPR_U32(ctx, 31, 0x108144u);
    ctx->pc = 0x108140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108144u; }
    }
    if (ctx->pc != 0x108144u) { return; }
    ctx->pc = 0x108144u;
    // 0x108144: 0x8f848490
    ctx->pc = 0x108144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x108148: 0x282d
    ctx->pc = 0x108148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10814c: 0xdfbf0070
    ctx->pc = 0x10814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108150: 0x302d
    ctx->pc = 0x108150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108154: 0xdfb60060
    ctx->pc = 0x108154u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108158: 0xdfb50050
    ctx->pc = 0x108158u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10815c: 0xdfb40040
    ctx->pc = 0x10815cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108160: 0xdfb30030
    ctx->pc = 0x108160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108164: 0xdfb20020
    ctx->pc = 0x108164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108168: 0xdfb10010
    ctx->pc = 0x108168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10816c: 0xdfb00000
    ctx->pc = 0x10816cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108170: 0x804372a
    ctx->pc = 0x108170u;
    ctx->pc = 0x108174u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x108178u;
}
