#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: game__22CameraMgrInternalClassFi
// Address: 0x1ca0f0 - 0x1ca2d8
void game__22CameraMgrInternalClassFi_0x1ca0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("game__22CameraMgrInternalClassFi");


    ctx->pc = 0x1ca0f0u;

    // 0x1ca0f0: 0x27bdffa0
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ca0f4: 0x7fbf0050
    ctx->pc = 0x1ca0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1ca0f8: 0x7fb40040
    ctx->pc = 0x1ca0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ca0fc: 0x7fb30030
    ctx->pc = 0x1ca0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ca100: 0x51040
    ctx->pc = 0x1ca100u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ca104: 0x451021
    ctx->pc = 0x1ca104u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca108: 0x7fb20020
    ctx->pc = 0x1ca108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca10c: 0x21080
    ctx->pc = 0x1ca10cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca110: 0x7fb10010
    ctx->pc = 0x1ca110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca114: 0x7fb00000
    ctx->pc = 0x1ca114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca118: 0x7080a628
    ctx->pc = 0x1ca118u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ca11c: 0x451021
    ctx->pc = 0x1ca11cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca120: 0x22100
    ctx->pc = 0x1ca120u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ca124: 0x8f838c48
    ctx->pc = 0x1ca124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1ca128: 0x510c0
    ctx->pc = 0x1ca128u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ca12c: 0x451021
    ctx->pc = 0x1ca12cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca130: 0x29180
    ctx->pc = 0x1ca130u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ca134: 0x3c020030
    ctx->pc = 0x1ca134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ca138: 0x24425c30
    ctx->pc = 0x1ca138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x1ca13c: 0x528821
    ctx->pc = 0x1ca13cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ca140: 0x641821
    ctx->pc = 0x1ca140u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca144: 0x24020002
    ctx->pc = 0x1ca144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca148: 0xa06200d2
    ctx->pc = 0x1ca148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 210), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca14c: 0xa06000d3
    ctx->pc = 0x1ca14cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 211), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca150: 0x86220158
    ctx->pc = 0x1ca150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1ca154: 0x70a09e28
    ctx->pc = 0x1ca154u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ca158: 0x4400027
    ctx->pc = 0x1CA158u;
    {
        const bool branch_taken_0x1ca158 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA15Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1ca158) {
            ctx->pc = 0x1CA1F8u;
            goto label_1ca1f8;
        }
    }
    ctx->pc = 0x1CA160u;
    // 0x1ca160: 0xa60200c0
    ctx->pc = 0x1ca160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca164: 0xc6200150
    ctx->pc = 0x1ca164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca168: 0x46800020
    ctx->pc = 0x1ca168u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ca16c: 0xe60000b0
    ctx->pc = 0x1ca16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1ca170: 0x8e0200bc
    ctx->pc = 0x1ca170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca174: 0x14400021
    ctx->pc = 0x1CA174u;
    {
        const bool branch_taken_0x1ca174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA178u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ca174) {
            ctx->pc = 0x1CA1FCu;
            goto label_1ca1fc;
        }
    }
    ctx->pc = 0x1CA17Cu;
    // 0x1ca17c: 0xc60100b0
    ctx->pc = 0x1ca17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca180: 0xc60000b4
    ctx->pc = 0x1ca180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca184: 0x3c020050
    ctx->pc = 0x1ca184u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ca188: 0x860500c0
    ctx->pc = 0x1ca188u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ca18c: 0x131880
    ctx->pc = 0x1ca18cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ca190: 0x2442fb00
    ctx->pc = 0x1ca190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x1ca194: 0x434821
    ctx->pc = 0x1ca194u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca198: 0x46000b00
    ctx->pc = 0x1ca198u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ca19c: 0x27848c70
    ctx->pc = 0x1ca19cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x1ca1a0: 0x26060080
    ctx->pc = 0x1ca1a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 128));
    // 0x1ca1a4: 0x26270174
    ctx->pc = 0x1ca1a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 372));
    // 0x1ca1a8: 0xc0731b8
    ctx->pc = 0x1CA1A8u;
    SET_GPR_U32(ctx, 31, 0x1CA1B0u);
    ctx->pc = 0x1CA1ACu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 148));
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1B0u; }
        else if (ctx->pc != 0x1CA1B0u) { ctx->pc = 0x1CA1B0u; }
    }
    if (ctx->pc != 0x1CA1B0u) { return; }
    ctx->pc = 0x1CA1B0u;
    // 0x1ca1b0: 0xc6200174
    ctx->pc = 0x1ca1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1b4: 0xe6000098
    ctx->pc = 0x1ca1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1ca1b8: 0xc6200178
    ctx->pc = 0x1ca1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1bc: 0xe600009c
    ctx->pc = 0x1ca1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1ca1c0: 0xc620017c
    ctx->pc = 0x1ca1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1c4: 0xe60000a0
    ctx->pc = 0x1ca1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1ca1c8: 0xc6000098
    ctx->pc = 0x1ca1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1cc: 0xe6200014
    ctx->pc = 0x1ca1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1ca1d0: 0xc600009c
    ctx->pc = 0x1ca1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1d4: 0xe6200018
    ctx->pc = 0x1ca1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1ca1d8: 0xc60000a0
    ctx->pc = 0x1ca1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1dc: 0xe620001c
    ctx->pc = 0x1ca1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1ca1e0: 0xc6000080
    ctx->pc = 0x1ca1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1e4: 0xe620002c
    ctx->pc = 0x1ca1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1ca1e8: 0xc6000084
    ctx->pc = 0x1ca1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1ec: 0xe6200030
    ctx->pc = 0x1ca1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1ca1f0: 0xc6000088
    ctx->pc = 0x1ca1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1f4: 0xe6200034
    ctx->pc = 0x1ca1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1ca1f8:
    // 0x1ca1f8: 0x70002628
    ctx->pc = 0x1ca1f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ca1fc:
    // 0x1ca1fc: 0x72202e28
    ctx->pc = 0x1ca1fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ca200: 0x2403fffe
    ctx->pc = 0x1ca200u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ca204:
    // 0x1ca204: 0x84a20194
    ctx->pc = 0x1ca204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x1ca208: 0x5443000e
    ctx->pc = 0x1CA208u;
    {
        const bool branch_taken_0x1ca208 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ca208) {
            ctx->pc = 0x1CA20Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x1CA244u;
            goto label_1ca244;
        }
    }
    ctx->pc = 0x1CA210u;
    // 0x1ca210: 0xc6000080
    ctx->pc = 0x1ca210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca214: 0xe4a00198
    ctx->pc = 0x1ca214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 408), bits); }
    // 0x1ca218: 0xc6000084
    ctx->pc = 0x1ca218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca21c: 0xe4a0019c
    ctx->pc = 0x1ca21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 412), bits); }
    // 0x1ca220: 0xc6000088
    ctx->pc = 0x1ca220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca224: 0xe4a001a0
    ctx->pc = 0x1ca224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 416), bits); }
    // 0x1ca228: 0xc6000098
    ctx->pc = 0x1ca228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca22c: 0xe4a001b0
    ctx->pc = 0x1ca22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 432), bits); }
    // 0x1ca230: 0xc600009c
    ctx->pc = 0x1ca230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca234: 0xe4a001b4
    ctx->pc = 0x1ca234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 436), bits); }
    // 0x1ca238: 0xc60000a0
    ctx->pc = 0x1ca238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca23c: 0xe4a001b8
    ctx->pc = 0x1ca23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 440), bits); }
    // 0x1ca240: 0x24840001
    ctx->pc = 0x1ca240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1ca244:
    // 0x1ca244: 0x28820003
    ctx->pc = 0x1ca244u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x1ca248: 0x1440ffee
    ctx->pc = 0x1CA248u;
    {
        const bool branch_taken_0x1ca248 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA24Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 60));
        if (branch_taken_0x1ca248) {
            ctx->pc = 0x1CA204u;
            goto label_1ca204;
        }
    }
    ctx->pc = 0x1CA250u;
    // 0x1ca250: 0xa20000c4
    ctx->pc = 0x1ca250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca254: 0xa20000c5
    ctx->pc = 0x1ca254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 197), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca258: 0xa20000c6
    ctx->pc = 0x1ca258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 198), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca25c: 0xa2200046
    ctx->pc = 0x1ca25cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca260: 0xc6000098
    ctx->pc = 0x1ca260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca264: 0x72802628
    ctx->pc = 0x1ca264u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ca268: 0x72602e28
    ctx->pc = 0x1ca268u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ca26c: 0xe6200014
    ctx->pc = 0x1ca26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1ca270: 0xc600009c
    ctx->pc = 0x1ca270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca274: 0xe6200018
    ctx->pc = 0x1ca274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1ca278: 0xc60000a0
    ctx->pc = 0x1ca278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca27c: 0xc072d30
    ctx->pc = 0x1CA27Cu;
    SET_GPR_U32(ctx, 31, 0x1CA284u);
    ctx->pc = 0x1CA280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->pc = 0x1CB4C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAfterSpeed__22CameraMgrInternalClassFi_0x1cb4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA284u; }
        else if (ctx->pc != 0x1CA284u) { ctx->pc = 0x1CA284u; }
    }
    if (ctx->pc != 0x1CA284u) { return; }
    ctx->pc = 0x1CA284u;
    // 0x1ca284: 0x2921021
    ctx->pc = 0x1ca284u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1ca288: 0x24590004
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ca28c: 0x3c020026
    ctx->pc = 0x1ca28cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ca290: 0x24424f08
    ctx->pc = 0x1ca290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20232));
    // 0x1ca294: 0xc4420000
    ctx->pc = 0x1ca294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca298: 0xc4410004
    ctx->pc = 0x1ca298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca29c: 0xc4400008
    ctx->pc = 0x1ca29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca2a0: 0x72602e28
    ctx->pc = 0x1ca2a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ca2a4: 0x72802628
    ctx->pc = 0x1ca2a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ca2a8: 0xe6220004
    ctx->pc = 0x1ca2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1ca2ac: 0xe6210008
    ctx->pc = 0x1ca2acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1ca2b0: 0xc071b74
    ctx->pc = 0x1CA2B0u;
    SET_GPR_U32(ctx, 31, 0x1CA2B8u);
    ctx->pc = 0x1CA2B4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->pc = 0x1C6DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ptmf_scall_0x1c6dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2B8u; }
        else if (ctx->pc != 0x1CA2B8u) { ctx->pc = 0x1CA2B8u; }
    }
    if (ctx->pc != 0x1CA2B8u) { return; }
    ctx->pc = 0x1CA2B8u;
    // 0x1ca2b8: 0x7bbf0050
    ctx->pc = 0x1ca2b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca2bc: 0x7bb40040
    ctx->pc = 0x1ca2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca2c0: 0x7bb30030
    ctx->pc = 0x1ca2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca2c4: 0x7bb20020
    ctx->pc = 0x1ca2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca2c8: 0x7bb10010
    ctx->pc = 0x1ca2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca2cc: 0x7bb00000
    ctx->pc = 0x1ca2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca2d0: 0x3e00008
    ctx->pc = 0x1CA2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA1F8u: goto label_1ca1f8;
            case 0x1CA1FCu: goto label_1ca1fc;
            case 0x1CA204u: goto label_1ca204;
            case 0x1CA244u: goto label_1ca244;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA2D8u;
}
