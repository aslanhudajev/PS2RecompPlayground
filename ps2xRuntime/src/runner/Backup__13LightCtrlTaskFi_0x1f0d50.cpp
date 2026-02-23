#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Backup__13LightCtrlTaskFi
// Address: 0x1f0d50 - 0x1f0edc
void Backup__13LightCtrlTaskFi_0x1f0d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Backup__13LightCtrlTaskFi");


    ctx->pc = 0x1f0d50u;

    // 0x1f0d50: 0x8c860004
    ctx->pc = 0x1f0d50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f0d54: 0x51840
    ctx->pc = 0x1f0d54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1f0d58: 0x651821
    ctx->pc = 0x1f0d58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f0d5c: 0x318c0
    ctx->pc = 0x1f0d5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0d60: 0x651823
    ctx->pc = 0x1f0d60u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f0d64: 0x31880
    ctx->pc = 0x1f0d64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0d68: 0xac860258
    ctx->pc = 0x1f0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 6));
    // 0x1f0d6c: 0x642821
    ctx->pc = 0x1f0d6cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0d70: 0x8c830008
    ctx->pc = 0x1f0d70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f0d74: 0x70003628
    ctx->pc = 0x1f0d74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0d78: 0xac83025c
    ctx->pc = 0x1f0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 3));
    // 0x1f0d7c: 0xc4a00010
    ctx->pc = 0x1f0d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d80: 0xe4800260
    ctx->pc = 0x1f0d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 608), bits); }
    // 0x1f0d84: 0xc4a00014
    ctx->pc = 0x1f0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d88: 0xe4800264
    ctx->pc = 0x1f0d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 612), bits); }
    // 0x1f0d8c: 0xc4a00018
    ctx->pc = 0x1f0d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d90: 0xe4800268
    ctx->pc = 0x1f0d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 616), bits); }
    // 0x1f0d94: 0xc4a0001c
    ctx->pc = 0x1f0d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d98: 0xe480026c
    ctx->pc = 0x1f0d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 620), bits); }
    // 0x1f0d9c: 0xc4a00020
    ctx->pc = 0x1f0d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0da0: 0xe4800270
    ctx->pc = 0x1f0da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 624), bits); }
    // 0x1f0da4: 0xc4a00024
    ctx->pc = 0x1f0da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0da8: 0xe4800274
    ctx->pc = 0x1f0da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 628), bits); }
    // 0x1f0dac: 0xc4a00028
    ctx->pc = 0x1f0dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0db0: 0xe4800278
    ctx->pc = 0x1f0db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
    // 0x1f0db4: 0xc4a0002c
    ctx->pc = 0x1f0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0db8: 0xe480027c
    ctx->pc = 0x1f0db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
    // 0x1f0dbc: 0xc4a00030
    ctx->pc = 0x1f0dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0dc0: 0xe4800280
    ctx->pc = 0x1f0dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 640), bits); }
    // 0x1f0dc4: 0xc4a00034
    ctx->pc = 0x1f0dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0dc8: 0xe4800284
    ctx->pc = 0x1f0dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
    // 0x1f0dcc: 0xc4a00038
    ctx->pc = 0x1f0dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0dd0: 0xe4800288
    ctx->pc = 0x1f0dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 648), bits); }
    // 0x1f0dd4: 0xc4a0003c
    ctx->pc = 0x1f0dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0dd8: 0xe480028c
    ctx->pc = 0x1f0dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 652), bits); }
    // 0x1f0ddc: 0xc4a00040
    ctx->pc = 0x1f0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0de0: 0xe4800290
    ctx->pc = 0x1f0de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 656), bits); }
    // 0x1f0de4: 0xc4a00044
    ctx->pc = 0x1f0de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0de8: 0xe4800294
    ctx->pc = 0x1f0de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 660), bits); }
    // 0x1f0dec: 0xc4a00048
    ctx->pc = 0x1f0decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0df0: 0xe4800298
    ctx->pc = 0x1f0df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
    // 0x1f0df4: 0xc4a0004c
    ctx->pc = 0x1f0df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0df8: 0xe480029c
    ctx->pc = 0x1f0df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 668), bits); }
    // 0x1f0dfc: 0xc4a00050
    ctx->pc = 0x1f0dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e00: 0xe48002a0
    ctx->pc = 0x1f0e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x1f0e04: 0xc4a00054
    ctx->pc = 0x1f0e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e08: 0xe48002a4
    ctx->pc = 0x1f0e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 676), bits); }
    // 0x1f0e0c: 0x8ca30058
    ctx->pc = 0x1f0e0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1f0e10: 0xac8302a8
    ctx->pc = 0x1f0e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 680), GPR_U32(ctx, 3));
    // 0x1f0e14: 0x8ca3005c
    ctx->pc = 0x1f0e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x1f0e18: 0xac8302ac
    ctx->pc = 0x1f0e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 684), GPR_U32(ctx, 3));
    // 0x1f0e1c: 0xc4a00060
    ctx->pc = 0x1f0e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e20: 0xe48002b0
    ctx->pc = 0x1f0e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x1f0e24: 0xc4a00064
    ctx->pc = 0x1f0e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e28: 0xe48002b4
    ctx->pc = 0x1f0e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x1f0e2c: 0xc4a00068
    ctx->pc = 0x1f0e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e30: 0xe48002b8
    ctx->pc = 0x1f0e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
label_1f0e34:
    // 0x1f0e34: 0x8c850180
    ctx->pc = 0x1f0e34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x1f0e38: 0x24c60001
    ctx->pc = 0x1f0e38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f0e3c: 0x28c30003
    ctx->pc = 0x1f0e3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 3));
    // 0x1f0e40: 0xac8502bc
    ctx->pc = 0x1f0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 700), GPR_U32(ctx, 5));
    // 0x1f0e44: 0x8c850184
    ctx->pc = 0x1f0e44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x1f0e48: 0xac8502c0
    ctx->pc = 0x1f0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 5));
    // 0x1f0e4c: 0xc4800188
    ctx->pc = 0x1f0e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e50: 0xe48002c4
    ctx->pc = 0x1f0e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 708), bits); }
    // 0x1f0e54: 0xc480018c
    ctx->pc = 0x1f0e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e58: 0xe48002c8
    ctx->pc = 0x1f0e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 712), bits); }
    // 0x1f0e5c: 0xc4800190
    ctx->pc = 0x1f0e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e60: 0xe48002cc
    ctx->pc = 0x1f0e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 716), bits); }
    // 0x1f0e64: 0xc4800194
    ctx->pc = 0x1f0e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e68: 0xe48002d0
    ctx->pc = 0x1f0e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x1f0e6c: 0xc4800198
    ctx->pc = 0x1f0e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e70: 0xe48002d4
    ctx->pc = 0x1f0e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x1f0e74: 0xc480019c
    ctx->pc = 0x1f0e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e78: 0xe48002d8
    ctx->pc = 0x1f0e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 728), bits); }
    // 0x1f0e7c: 0x8c8501a0
    ctx->pc = 0x1f0e7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x1f0e80: 0xac8502dc
    ctx->pc = 0x1f0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 5));
    // 0x1f0e84: 0x8c8501a4
    ctx->pc = 0x1f0e84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x1f0e88: 0xac8502e0
    ctx->pc = 0x1f0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 5));
    // 0x1f0e8c: 0xc48001a8
    ctx->pc = 0x1f0e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e90: 0xe48002e4
    ctx->pc = 0x1f0e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 740), bits); }
    // 0x1f0e94: 0xc48001ac
    ctx->pc = 0x1f0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0e98: 0xe48002e8
    ctx->pc = 0x1f0e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 744), bits); }
    // 0x1f0e9c: 0xc48001b0
    ctx->pc = 0x1f0e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0ea0: 0xe48002ec
    ctx->pc = 0x1f0ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 748), bits); }
    // 0x1f0ea4: 0x8c8501b4
    ctx->pc = 0x1f0ea4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1f0ea8: 0xac8502f0
    ctx->pc = 0x1f0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 5));
    // 0x1f0eac: 0x8c8501b8
    ctx->pc = 0x1f0eacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1f0eb0: 0xac8502f4
    ctx->pc = 0x1f0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 756), GPR_U32(ctx, 5));
    // 0x1f0eb4: 0xc48001bc
    ctx->pc = 0x1f0eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0eb8: 0xe48002f8
    ctx->pc = 0x1f0eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 760), bits); }
    // 0x1f0ebc: 0xc48001c0
    ctx->pc = 0x1f0ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0ec0: 0xe48002fc
    ctx->pc = 0x1f0ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 764), bits); }
    // 0x1f0ec4: 0xc48001c4
    ctx->pc = 0x1f0ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0ec8: 0xe4800300
    ctx->pc = 0x1f0ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 768), bits); }
    // 0x1f0ecc: 0x1460ffd9
    ctx->pc = 0x1F0ECCu;
    {
        const bool branch_taken_0x1f0ecc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0ED0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
        if (branch_taken_0x1f0ecc) {
            ctx->pc = 0x1F0E34u;
            goto label_1f0e34;
        }
    }
    ctx->pc = 0x1F0ED4u;
    // 0x1f0ed4: 0x3e00008
    ctx->pc = 0x1F0ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0E34u: goto label_1f0e34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0EDCu;
}
