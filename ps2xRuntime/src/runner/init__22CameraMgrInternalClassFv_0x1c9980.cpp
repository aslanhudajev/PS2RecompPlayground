#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__22CameraMgrInternalClassFv
// Address: 0x1c9980 - 0x1c9abc
void init__22CameraMgrInternalClassFv_0x1c9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__22CameraMgrInternalClassFv");


    ctx->pc = 0x1c9980u;

    // 0x1c9980: 0x27bdfff0
    ctx->pc = 0x1c9980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9984: 0x3c050050
    ctx->pc = 0x1c9984u;
    SET_GPR_U32(ctx, 5, ((uint32_t)80 << 16));
    // 0x1c9988: 0x7fbf0000
    ctx->pc = 0x1c9988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c998c: 0x70001628
    ctx->pc = 0x1c998cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9990: 0x70001e28
    ctx->pc = 0x1c9990u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9994: 0x24a5fb00
    ctx->pc = 0x1c9994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966016));
    // 0x1c9998: 0x70803628
    ctx->pc = 0x1c9998u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c999c: 0x3c073f99
    ctx->pc = 0x1c999cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)16281 << 16));
    // 0x1c99a0: 0x240b0001
    ctx->pc = 0x1c99a0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99a4: 0x34ea999a
    ctx->pc = 0x1c99a4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 7), 39322));
    // 0x1c99a8: 0x3c084270
    ctx->pc = 0x1c99a8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)17008 << 16));
label_1c99ac:
    // 0x1c99ac: 0x8f898c48
    ctx->pc = 0x1c99acu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c99b0: 0x3c010026
    ctx->pc = 0x1c99b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c99b4: 0xc4204e60
    ctx->pc = 0x1c99b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99b8: 0x24420001
    ctx->pc = 0x1c99b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c99bc: 0x28470004
    ctx->pc = 0x1c99bcu;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1c99c0: 0x1236021
    ctx->pc = 0x1c99c0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c99c4: 0xe5800090
    ctx->pc = 0x1c99c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 144), bits); }
    // 0x1c99c8: 0x3c010026
    ctx->pc = 0x1c99c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c99cc: 0xc4204e64
    ctx->pc = 0x1c99ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99d0: 0xe5800094
    ctx->pc = 0x1c99d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 148), bits); }
    // 0x1c99d4: 0x3c010026
    ctx->pc = 0x1c99d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c99d8: 0xc4204e68
    ctx->pc = 0x1c99d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99dc: 0xe5800098
    ctx->pc = 0x1c99dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 152), bits); }
    // 0x1c99e0: 0x3c010026
    ctx->pc = 0x1c99e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c99e4: 0x8c294e6c
    ctx->pc = 0x1c99e4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 20076)));
    // 0x1c99e8: 0xad89009c
    ctx->pc = 0x1c99e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 9));
    // 0x1c99ec: 0x3c010026
    ctx->pc = 0x1c99ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c99f0: 0x8c294e70
    ctx->pc = 0x1c99f0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
    // 0x1c99f4: 0xad8900a0
    ctx->pc = 0x1c99f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 160), GPR_U32(ctx, 9));
    // 0x1c99f8: 0x3c010026
    ctx->pc = 0x1c99f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c99fc: 0x8c294e74
    ctx->pc = 0x1c99fcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 20084)));
    // 0x1c9a00: 0xad8900a4
    ctx->pc = 0x1c9a00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 9));
    // 0x1c9a04: 0x8f898c48
    ctx->pc = 0x1c9a04u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9a08: 0x3c010026
    ctx->pc = 0x1c9a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9a0c: 0xc4204e60
    ctx->pc = 0x1c9a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9a10: 0x1236021
    ctx->pc = 0x1c9a10u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c9a14: 0xe58000a8
    ctx->pc = 0x1c9a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 168), bits); }
    // 0x1c9a18: 0x3c010026
    ctx->pc = 0x1c9a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9a1c: 0xc4204e64
    ctx->pc = 0x1c9a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9a20: 0xe58000ac
    ctx->pc = 0x1c9a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 172), bits); }
    // 0x1c9a24: 0x3c010026
    ctx->pc = 0x1c9a24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9a28: 0xc4204e68
    ctx->pc = 0x1c9a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9a2c: 0xe58000b0
    ctx->pc = 0x1c9a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 176), bits); }
    // 0x1c9a30: 0x3c010026
    ctx->pc = 0x1c9a30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9a34: 0x8c294e6c
    ctx->pc = 0x1c9a34u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 20076)));
    // 0x1c9a38: 0xad8900b4
    ctx->pc = 0x1c9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 180), GPR_U32(ctx, 9));
    // 0x1c9a3c: 0x3c010026
    ctx->pc = 0x1c9a3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9a40: 0x8c294e70
    ctx->pc = 0x1c9a40u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 20080)));
    // 0x1c9a44: 0xad8900b8
    ctx->pc = 0x1c9a44u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 184), GPR_U32(ctx, 9));
    // 0x1c9a48: 0x3c010026
    ctx->pc = 0x1c9a48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1c9a4c: 0x8c294e74
    ctx->pc = 0x1c9a4cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 20084)));
    // 0x1c9a50: 0xad8900bc
    ctx->pc = 0x1c9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 188), GPR_U32(ctx, 9));
    // 0x1c9a54: 0x8f898c48
    ctx->pc = 0x1c9a54u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9a58: 0x1234821
    ctx->pc = 0x1c9a58u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c9a5c: 0xad2000c0
    ctx->pc = 0x1c9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 192), GPR_U32(ctx, 0));
    // 0x1c9a60: 0x8f898c48
    ctx->pc = 0x1c9a60u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9a64: 0x1234821
    ctx->pc = 0x1c9a64u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c9a68: 0xa12b00d2
    ctx->pc = 0x1c9a68u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 210), (uint8_t)GPR_U32(ctx, 11));
    // 0x1c9a6c: 0x8f898c48
    ctx->pc = 0x1c9a6cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9a70: 0x1234821
    ctx->pc = 0x1c9a70u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c9a74: 0xad2a00c4
    ctx->pc = 0x1c9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 196), GPR_U32(ctx, 10));
    // 0x1c9a78: 0x8f898c48
    ctx->pc = 0x1c9a78u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9a7c: 0x1234821
    ctx->pc = 0x1c9a7cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1c9a80: 0xad2000cc
    ctx->pc = 0x1c9a80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 204), GPR_U32(ctx, 0));
    // 0x1c9a84: 0xaca80000
    ctx->pc = 0x1c9a84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1c9a88: 0xa0cb0048
    ctx->pc = 0x1c9a88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 72), (uint8_t)GPR_U32(ctx, 11));
    // 0x1c9a8c: 0x246300d0
    ctx->pc = 0x1c9a8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 208));
    // 0x1c9a90: 0x24a50004
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1c9a94: 0x14e0ffc5
    ctx->pc = 0x1C9A94u;
    {
        const bool branch_taken_0x1c9a94 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C9A98u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 576));
        if (branch_taken_0x1c9a94) {
            ctx->pc = 0x1C99ACu;
            goto label_1c99ac;
        }
    }
    ctx->pc = 0x1C9A9Cu;
    // 0x1c9a9c: 0x8f828c48
    ctx->pc = 0x1c9a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9aa0: 0xac400004
    ctx->pc = 0x1c9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1c9aa4: 0xc072cb0
    ctx->pc = 0x1C9AA4u;
    SET_GPR_U32(ctx, 31, 0x1C9AACu);
    ctx->pc = 0x1C9AA8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2306), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1CB2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCamJob__22CameraMgrInternalClassFv_0x1cb2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AACu; }
        else if (ctx->pc != 0x1C9AACu) { ctx->pc = 0x1C9AACu; }
    }
    if (ctx->pc != 0x1C9AACu) { return; }
    ctx->pc = 0x1C9AACu;
    // 0x1c9aac: 0xaf808c74
    ctx->pc = 0x1c9aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 0));
    // 0x1c9ab0: 0x7bbf0000
    ctx->pc = 0x1c9ab0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ab4: 0x3e00008
    ctx->pc = 0x1C9AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C99ACu: goto label_1c99ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9ABCu;
}
