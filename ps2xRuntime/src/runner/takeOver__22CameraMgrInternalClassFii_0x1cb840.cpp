#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: takeOver__22CameraMgrInternalClassFii
// Address: 0x1cb840 - 0x1cbd08
void takeOver__22CameraMgrInternalClassFii_0x1cb840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("takeOver__22CameraMgrInternalClassFii");


    ctx->pc = 0x1cb840u;

    // 0x1cb840: 0x27bdff20
    ctx->pc = 0x1cb840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cb844: 0x7fbf0090
    ctx->pc = 0x1cb844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1cb848: 0x7fbe0080
    ctx->pc = 0x1cb848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1cb84c: 0x7fb70070
    ctx->pc = 0x1cb84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1cb850: 0x7fb60060
    ctx->pc = 0x1cb850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1cb854: 0x7fb50050
    ctx->pc = 0x1cb854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1cb858: 0x7fb40040
    ctx->pc = 0x1cb858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cb85c: 0x7fb30030
    ctx->pc = 0x1cb85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cb860: 0x7fb20020
    ctx->pc = 0x1cb860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cb864: 0x7fb10010
    ctx->pc = 0x1cb864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb868: 0x510c0
    ctx->pc = 0x1cb868u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb86c: 0x7fb00000
    ctx->pc = 0x1cb86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb870: 0x451021
    ctx->pc = 0x1cb870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cb874: 0x28180
    ctx->pc = 0x1cb874u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cb878: 0x909821
    ctx->pc = 0x1cb878u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1cb87c: 0x610c0
    ctx->pc = 0x1cb87cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cb880: 0x461021
    ctx->pc = 0x1cb880u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cb884: 0x28980
    ctx->pc = 0x1cb884u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cb888: 0x8e630000
    ctx->pc = 0x1cb888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cb88c: 0x26620004
    ctx->pc = 0x1cb88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1cb890: 0x919021
    ctx->pc = 0x1cb890u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1cb894: 0x7080a628
    ctx->pc = 0x1cb894u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cb898: 0x70a0b628
    ctx->pc = 0x1cb898u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cb89c: 0x70c0be28
    ctx->pc = 0x1cb89cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cb8a0: 0xafa200d0
    ctx->pc = 0x1cb8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1cb8a4: 0xae430000
    ctx->pc = 0x1cb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1cb8a8: 0xc6620004
    ctx->pc = 0x1cb8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb8ac: 0xc6610008
    ctx->pc = 0x1cb8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb8b0: 0xc660000c
    ctx->pc = 0x1cb8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8b4: 0x2645004c
    ctx->pc = 0x1cb8b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 76));
    // 0x1cb8b8: 0x2664004c
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 76));
    // 0x1cb8bc: 0x2643014c
    ctx->pc = 0x1cb8bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 332));
    // 0x1cb8c0: 0xe6420004
    ctx->pc = 0x1cb8c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1cb8c4: 0xe6410008
    ctx->pc = 0x1cb8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1cb8c8: 0xe640000c
    ctx->pc = 0x1cb8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1cb8cc: 0x8e620010
    ctx->pc = 0x1cb8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1cb8d0: 0xae420010
    ctx->pc = 0x1cb8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1cb8d4: 0xc6600014
    ctx->pc = 0x1cb8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8d8: 0xe6400014
    ctx->pc = 0x1cb8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1cb8dc: 0xc6600018
    ctx->pc = 0x1cb8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8e0: 0xe6400018
    ctx->pc = 0x1cb8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1cb8e4: 0xc660001c
    ctx->pc = 0x1cb8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8e8: 0xe640001c
    ctx->pc = 0x1cb8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1cb8ec: 0x8e620020
    ctx->pc = 0x1cb8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1cb8f0: 0xae420020
    ctx->pc = 0x1cb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1cb8f4: 0x8e620024
    ctx->pc = 0x1cb8f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cb8f8: 0xae420024
    ctx->pc = 0x1cb8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1cb8fc: 0x8e620028
    ctx->pc = 0x1cb8fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1cb900: 0xae420028
    ctx->pc = 0x1cb900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1cb904: 0xc660002c
    ctx->pc = 0x1cb904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb908: 0xe640002c
    ctx->pc = 0x1cb908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1cb90c: 0xc6600030
    ctx->pc = 0x1cb90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb910: 0xe6400030
    ctx->pc = 0x1cb910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1cb914: 0xc6600034
    ctx->pc = 0x1cb914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb918: 0xe6400034
    ctx->pc = 0x1cb918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1cb91c: 0x8e620038
    ctx->pc = 0x1cb91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1cb920: 0xae420038
    ctx->pc = 0x1cb920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x1cb924: 0x8e62003c
    ctx->pc = 0x1cb924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1cb928: 0xae42003c
    ctx->pc = 0x1cb928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1cb92c: 0x8e620040
    ctx->pc = 0x1cb92cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1cb930: 0xae420040
    ctx->pc = 0x1cb930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1cb934: 0x86620044
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1cb938: 0xa6420044
    ctx->pc = 0x1cb938u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cb93c: 0x82620046
    ctx->pc = 0x1cb93cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x1cb940: 0xa2420046
    ctx->pc = 0x1cb940u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb944: 0x82620047
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x1cb948: 0xa2420047
    ctx->pc = 0x1cb948u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb94c: 0x82620048
    ctx->pc = 0x1cb94cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1cb950: 0xa2420048
    ctx->pc = 0x1cb950u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 72), (uint8_t)GPR_U32(ctx, 2));
label_1cb954:
    // 0x1cb954: 0xc4800000
    ctx->pc = 0x1cb954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb958: 0xe4a00000
    ctx->pc = 0x1cb958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1cb95c: 0xc4800004
    ctx->pc = 0x1cb95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb960: 0xe4a00004
    ctx->pc = 0x1cb960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1cb964: 0xc4800008
    ctx->pc = 0x1cb964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb968: 0xe4a00008
    ctx->pc = 0x1cb968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1cb96c: 0xc480000c
    ctx->pc = 0x1cb96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb970: 0xe4a0000c
    ctx->pc = 0x1cb970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1cb974: 0x24a50010
    ctx->pc = 0x1cb974u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1cb978: 0x14a3fff6
    ctx->pc = 0x1CB978u;
    {
        const bool branch_taken_0x1cb978 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1CB97Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x1cb978) {
            ctx->pc = 0x1CB954u;
            goto label_1cb954;
        }
    }
    ctx->pc = 0x1CB980u;
    // 0x1cb980: 0x2143021
    ctx->pc = 0x1cb980u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1cb984: 0x8cc5014c
    ctx->pc = 0x1cb984u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 332)));
    // 0x1cb988: 0x267e0150
    ctx->pc = 0x1cb988u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 19), 336));
    // 0x1cb98c: 0x27c2000c
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
    // 0x1cb990: 0x26550150
    ctx->pc = 0x1cb990u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 336));
    // 0x1cb994: 0x2341821
    ctx->pc = 0x1cb994u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1cb998: 0x26a4000c
    ctx->pc = 0x1cb998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 12));
    // 0x1cb99c: 0xafa200a0
    ctx->pc = 0x1cb99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1cb9a0: 0xac65014c
    ctx->pc = 0x1cb9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 5));
    // 0x1cb9a4: 0x8cc20150
    ctx->pc = 0x1cb9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x1cb9a8: 0x8fa500a0
    ctx->pc = 0x1cb9a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cb9ac: 0xac620150
    ctx->pc = 0x1cb9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
    // 0x1cb9b0: 0x8cc20154
    ctx->pc = 0x1cb9b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x1cb9b4: 0xac620154
    ctx->pc = 0x1cb9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1cb9b8: 0x84c20158
    ctx->pc = 0x1cb9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x1cb9bc: 0xc072f70
    ctx->pc = 0x1CB9BCu;
    SET_GPR_U32(ctx, 31, 0x1CB9C4u);
    ctx->pc = 0x1CB9C0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 344), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9C4u; }
        else if (ctx->pc != 0x1CB9C4u) { ctx->pc = 0x1CB9C4u; }
    }
    if (ctx->pc != 0x1CB9C4u) { return; }
    ctx->pc = 0x1CB9C4u;
    // 0x1cb9c4: 0x8fa200a0
    ctx->pc = 0x1cb9c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cb9c8: 0x26a40018
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 24));
    // 0x1cb9cc: 0xc072f68
    ctx->pc = 0x1CB9CCu;
    SET_GPR_U32(ctx, 31, 0x1CB9D4u);
    ctx->pc = 0x1CB9D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9D4u; }
        else if (ctx->pc != 0x1CB9D4u) { ctx->pc = 0x1CB9D4u; }
    }
    if (ctx->pc != 0x1CB9D4u) { return; }
    ctx->pc = 0x1CB9D4u;
    // 0x1cb9d4: 0x27de0024
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 36));
    // 0x1cb9d8: 0x26a40024
    ctx->pc = 0x1cb9d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 36));
    // 0x1cb9dc: 0xc072f70
    ctx->pc = 0x1CB9DCu;
    SET_GPR_U32(ctx, 31, 0x1CB9E4u);
    ctx->pc = 0x1CB9E0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9E4u; }
        else if (ctx->pc != 0x1CB9E4u) { ctx->pc = 0x1CB9E4u; }
    }
    if (ctx->pc != 0x1CB9E4u) { return; }
    ctx->pc = 0x1CB9E4u;
    // 0x1cb9e4: 0x26a40030
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 48));
    // 0x1cb9e8: 0xc072f68
    ctx->pc = 0x1CB9E8u;
    SET_GPR_U32(ctx, 31, 0x1CB9F0u);
    ctx->pc = 0x1CB9ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 12));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB9F0u; }
        else if (ctx->pc != 0x1CB9F0u) { ctx->pc = 0x1CB9F0u; }
    }
    if (ctx->pc != 0x1CB9F0u) { return; }
    ctx->pc = 0x1CB9F0u;
    // 0x1cb9f0: 0x2143021
    ctx->pc = 0x1cb9f0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1cb9f4: 0x8cc5018c
    ctx->pc = 0x1cb9f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 396)));
    // 0x1cb9f8: 0x267e018c
    ctx->pc = 0x1cb9f8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 19), 396));
    // 0x1cb9fc: 0x27c2000c
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
    // 0x1cba00: 0x2655018c
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 396));
    // 0x1cba04: 0x2341821
    ctx->pc = 0x1cba04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1cba08: 0x26a4000c
    ctx->pc = 0x1cba08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 12));
    // 0x1cba0c: 0xafa200b0
    ctx->pc = 0x1cba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1cba10: 0xac65018c
    ctx->pc = 0x1cba10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 5));
    // 0x1cba14: 0x8cc20190
    ctx->pc = 0x1cba14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 400)));
    // 0x1cba18: 0x8fa500b0
    ctx->pc = 0x1cba18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cba1c: 0xac620190
    ctx->pc = 0x1cba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 400), GPR_U32(ctx, 2));
    // 0x1cba20: 0x84c20194
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 404)));
    // 0x1cba24: 0xc072f70
    ctx->pc = 0x1CBA24u;
    SET_GPR_U32(ctx, 31, 0x1CBA2Cu);
    ctx->pc = 0x1CBA28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 404), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA2Cu; }
        else if (ctx->pc != 0x1CBA2Cu) { ctx->pc = 0x1CBA2Cu; }
    }
    if (ctx->pc != 0x1CBA2Cu) { return; }
    ctx->pc = 0x1CBA2Cu;
    // 0x1cba2c: 0x8fa200b0
    ctx->pc = 0x1cba2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cba30: 0x26a40018
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 24));
    // 0x1cba34: 0xc072f68
    ctx->pc = 0x1CBA34u;
    SET_GPR_U32(ctx, 31, 0x1CBA3Cu);
    ctx->pc = 0x1CBA38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA3Cu; }
        else if (ctx->pc != 0x1CBA3Cu) { ctx->pc = 0x1CBA3Cu; }
    }
    if (ctx->pc != 0x1CBA3Cu) { return; }
    ctx->pc = 0x1CBA3Cu;
    // 0x1cba3c: 0x27de0024
    ctx->pc = 0x1cba3cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 36));
    // 0x1cba40: 0x26a40024
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 36));
    // 0x1cba44: 0xc072f70
    ctx->pc = 0x1CBA44u;
    SET_GPR_U32(ctx, 31, 0x1CBA4Cu);
    ctx->pc = 0x1CBA48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA4Cu; }
        else if (ctx->pc != 0x1CBA4Cu) { ctx->pc = 0x1CBA4Cu; }
    }
    if (ctx->pc != 0x1CBA4Cu) { return; }
    ctx->pc = 0x1CBA4Cu;
    // 0x1cba4c: 0x26a40030
    ctx->pc = 0x1cba4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 48));
    // 0x1cba50: 0xc072f68
    ctx->pc = 0x1CBA50u;
    SET_GPR_U32(ctx, 31, 0x1CBA58u);
    ctx->pc = 0x1CBA54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 12));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA58u; }
        else if (ctx->pc != 0x1CBA58u) { ctx->pc = 0x1CBA58u; }
    }
    if (ctx->pc != 0x1CBA58u) { return; }
    ctx->pc = 0x1CBA58u;
    // 0x1cba58: 0x2143021
    ctx->pc = 0x1cba58u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1cba5c: 0x8cc501c8
    ctx->pc = 0x1cba5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 456)));
    // 0x1cba60: 0x267e01c8
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 19), 456));
    // 0x1cba64: 0x27c2000c
    ctx->pc = 0x1cba64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
    // 0x1cba68: 0x265501c8
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 456));
    // 0x1cba6c: 0x2341821
    ctx->pc = 0x1cba6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1cba70: 0x26a4000c
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 12));
    // 0x1cba74: 0xafa200c0
    ctx->pc = 0x1cba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1cba78: 0xac6501c8
    ctx->pc = 0x1cba78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 5));
    // 0x1cba7c: 0x8cc201cc
    ctx->pc = 0x1cba7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 460)));
    // 0x1cba80: 0x8fa500c0
    ctx->pc = 0x1cba80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cba84: 0xac6201cc
    ctx->pc = 0x1cba84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 460), GPR_U32(ctx, 2));
    // 0x1cba88: 0x84c201d0
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 464)));
    // 0x1cba8c: 0xc072f70
    ctx->pc = 0x1CBA8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA94u);
    ctx->pc = 0x1CBA90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 464), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBA94u; }
        else if (ctx->pc != 0x1CBA94u) { ctx->pc = 0x1CBA94u; }
    }
    if (ctx->pc != 0x1CBA94u) { return; }
    ctx->pc = 0x1CBA94u;
    // 0x1cba94: 0x8fa200c0
    ctx->pc = 0x1cba94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cba98: 0x26a40018
    ctx->pc = 0x1cba98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 24));
    // 0x1cba9c: 0xc072f68
    ctx->pc = 0x1CBA9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBAA4u);
    ctx->pc = 0x1CBAA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAA4u; }
        else if (ctx->pc != 0x1CBAA4u) { ctx->pc = 0x1CBAA4u; }
    }
    if (ctx->pc != 0x1CBAA4u) { return; }
    ctx->pc = 0x1CBAA4u;
    // 0x1cbaa4: 0x27de0024
    ctx->pc = 0x1cbaa4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 36));
    // 0x1cbaa8: 0x26a40024
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 36));
    // 0x1cbaac: 0xc072f70
    ctx->pc = 0x1CBAACu;
    SET_GPR_U32(ctx, 31, 0x1CBAB4u);
    ctx->pc = 0x1CBAB0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAB4u; }
        else if (ctx->pc != 0x1CBAB4u) { ctx->pc = 0x1CBAB4u; }
    }
    if (ctx->pc != 0x1CBAB4u) { return; }
    ctx->pc = 0x1CBAB4u;
    // 0x1cbab4: 0x26a40030
    ctx->pc = 0x1cbab4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 48));
    // 0x1cbab8: 0xc072f68
    ctx->pc = 0x1CBAB8u;
    SET_GPR_U32(ctx, 31, 0x1CBAC0u);
    ctx->pc = 0x1CBABCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 12));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAC0u; }
        else if (ctx->pc != 0x1CBAC0u) { ctx->pc = 0x1CBAC0u; }
    }
    if (ctx->pc != 0x1CBAC0u) { return; }
    ctx->pc = 0x1CBAC0u;
    // 0x1cbac0: 0x2143021
    ctx->pc = 0x1cbac0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1cbac4: 0x8cc20204
    ctx->pc = 0x1cbac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 516)));
    // 0x1cbac8: 0x2341821
    ctx->pc = 0x1cbac8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1cbacc: 0x26500204
    ctx->pc = 0x1cbaccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 516));
    // 0x1cbad0: 0x26710204
    ctx->pc = 0x1cbad0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 516));
    // 0x1cbad4: 0x2632000c
    ctx->pc = 0x1cbad4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 12));
    // 0x1cbad8: 0x2604000c
    ctx->pc = 0x1cbad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cbadc: 0xac620204
    ctx->pc = 0x1cbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 516), GPR_U32(ctx, 2));
    // 0x1cbae0: 0x8cc20208
    ctx->pc = 0x1cbae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 520)));
    // 0x1cbae4: 0x72402e28
    ctx->pc = 0x1cbae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1cbae8: 0xac620208
    ctx->pc = 0x1cbae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 520), GPR_U32(ctx, 2));
    // 0x1cbaec: 0x84c2020c
    ctx->pc = 0x1cbaecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 524)));
    // 0x1cbaf0: 0xc072f70
    ctx->pc = 0x1CBAF0u;
    SET_GPR_U32(ctx, 31, 0x1CBAF8u);
    ctx->pc = 0x1CBAF4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 524), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBAF8u; }
        else if (ctx->pc != 0x1CBAF8u) { ctx->pc = 0x1CBAF8u; }
    }
    if (ctx->pc != 0x1CBAF8u) { return; }
    ctx->pc = 0x1CBAF8u;
    // 0x1cbaf8: 0x2645000c
    ctx->pc = 0x1cbaf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 12));
    // 0x1cbafc: 0xc072f68
    ctx->pc = 0x1CBAFCu;
    SET_GPR_U32(ctx, 31, 0x1CBB04u);
    ctx->pc = 0x1CBB00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB04u; }
        else if (ctx->pc != 0x1CBB04u) { ctx->pc = 0x1CBB04u; }
    }
    if (ctx->pc != 0x1CBB04u) { return; }
    ctx->pc = 0x1CBB04u;
    // 0x1cbb04: 0x26310024
    ctx->pc = 0x1cbb04u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 36));
    // 0x1cbb08: 0x26040024
    ctx->pc = 0x1cbb08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 36));
    // 0x1cbb0c: 0xc072f70
    ctx->pc = 0x1CBB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB14u);
    ctx->pc = 0x1CBB10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CBDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__11tagNLpoint3FRC11tagNLpoint3_0x1cbdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB14u; }
        else if (ctx->pc != 0x1CBB14u) { ctx->pc = 0x1CBB14u; }
    }
    if (ctx->pc != 0x1CBB14u) { return; }
    ctx->pc = 0x1CBB14u;
    // 0x1cbb14: 0x26040030
    ctx->pc = 0x1cbb14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
    // 0x1cbb18: 0xc072f68
    ctx->pc = 0x1CBB18u;
    SET_GPR_U32(ctx, 31, 0x1CBB20u);
    ctx->pc = 0x1CBB1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 12));
    ctx->pc = 0x1CBDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__4XYZAFRC4XYZA_0x1cbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB20u; }
        else if (ctx->pc != 0x1CBB20u) { ctx->pc = 0x1CBB20u; }
    }
    if (ctx->pc != 0x1CBB20u) { return; }
    ctx->pc = 0x1CBB20u;
    // 0x1cbb20: 0x8f838c48
    ctx->pc = 0x1cbb20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cbb24: 0x161040
    ctx->pc = 0x1cbb24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x1cbb28: 0x561021
    ctx->pc = 0x1cbb28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1cbb2c: 0x21080
    ctx->pc = 0x1cbb2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cbb30: 0x561021
    ctx->pc = 0x1cbb30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1cbb34: 0x21100
    ctx->pc = 0x1cbb34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cbb38: 0x621021
    ctx->pc = 0x1cbb38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cbb3c: 0x24510010
    ctx->pc = 0x1cbb3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1cbb40: 0x171040
    ctx->pc = 0x1cbb40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 1));
    // 0x1cbb44: 0x571021
    ctx->pc = 0x1cbb44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1cbb48: 0x21080
    ctx->pc = 0x1cbb48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cbb4c: 0x571021
    ctx->pc = 0x1cbb4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1cbb50: 0x21100
    ctx->pc = 0x1cbb50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cbb54: 0x621021
    ctx->pc = 0x1cbb54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cbb58: 0x24500010
    ctx->pc = 0x1cbb58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1cbb5c: 0x24040008
    ctx->pc = 0x1cbb5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cbb60: 0x72203628
    ctx->pc = 0x1cbb60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1cbb64: 0x72002e28
    ctx->pc = 0x1cbb64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1cbb68:
    // 0x1cbb68: 0x8cc30000
    ctx->pc = 0x1cbb68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cbb6c: 0x8cc20004
    ctx->pc = 0x1cbb6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cbb70: 0x2484ffff
    ctx->pc = 0x1cbb70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cbb74: 0xaca30000
    ctx->pc = 0x1cbb74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cbb78: 0xaca20004
    ctx->pc = 0x1cbb78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1cbb7c: 0x24c60008
    ctx->pc = 0x1cbb7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1cbb80: 0x1c80fff9
    ctx->pc = 0x1CBB80u;
    {
        const bool branch_taken_0x1cbb80 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CBB84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1cbb80) {
            ctx->pc = 0x1CBB68u;
            goto label_1cbb68;
        }
    }
    ctx->pc = 0x1CBB88u;
    // 0x1cbb88: 0x72002628
    ctx->pc = 0x1cbb88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cbb8c: 0xc072f44
    ctx->pc = 0x1CBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB94u);
    ctx->pc = 0x1CBB90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB94u; }
        else if (ctx->pc != 0x1CBB94u) { ctx->pc = 0x1CBB94u; }
    }
    if (ctx->pc != 0x1CBB94u) { return; }
    ctx->pc = 0x1CBB94u;
    // 0x1cbb94: 0x26260040
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 64));
    // 0x1cbb98: 0x26050040
    ctx->pc = 0x1cbb98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cbb9c: 0x24040008
    ctx->pc = 0x1cbb9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1cbba0:
    // 0x1cbba0: 0x8cc30000
    ctx->pc = 0x1cbba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cbba4: 0x8cc20004
    ctx->pc = 0x1cbba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cbba8: 0x2484ffff
    ctx->pc = 0x1cbba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cbbac: 0xaca30000
    ctx->pc = 0x1cbbacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cbbb0: 0xaca20004
    ctx->pc = 0x1cbbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1cbbb4: 0x24c60008
    ctx->pc = 0x1cbbb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1cbbb8: 0x1c80fff9
    ctx->pc = 0x1CBBB8u;
    {
        const bool branch_taken_0x1cbbb8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CBBBCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1cbbb8) {
            ctx->pc = 0x1CBBA0u;
            goto label_1cbba0;
        }
    }
    ctx->pc = 0x1CBBC0u;
    // 0x1cbbc0: 0x26040040
    ctx->pc = 0x1cbbc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cbbc4: 0xc072f44
    ctx->pc = 0x1CBBC4u;
    SET_GPR_U32(ctx, 31, 0x1CBBCCu);
    ctx->pc = 0x1CBBC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBCCu; }
        else if (ctx->pc != 0x1CBBCCu) { ctx->pc = 0x1CBBCCu; }
    }
    if (ctx->pc != 0x1CBBCCu) { return; }
    ctx->pc = 0x1CBBCCu;
    // 0x1cbbcc: 0xc6200080
    ctx->pc = 0x1cbbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbbd0: 0x3c030050
    ctx->pc = 0x1cbbd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1cbbd4: 0x162880
    ctx->pc = 0x1cbbd4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 22), 2));
    // 0x1cbbd8: 0x2463fb00
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966016));
    // 0x1cbbdc: 0x653021
    ctx->pc = 0x1cbbdcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cbbe0: 0x3c030050
    ctx->pc = 0x1cbbe0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1cbbe4: 0xe6000080
    ctx->pc = 0x1cbbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1cbbe8: 0xc6200084
    ctx->pc = 0x1cbbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbbec: 0x172080
    ctx->pc = 0x1cbbecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 23), 2));
    // 0x1cbbf0: 0x2463fb00
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966016));
    // 0x1cbbf4: 0x642821
    ctx->pc = 0x1cbbf4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cbbf8: 0x3c030026
    ctx->pc = 0x1cbbf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1cbbfc: 0x2404ffff
    ctx->pc = 0x1cbbfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cbc00: 0xe6000084
    ctx->pc = 0x1cbc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1cbc04: 0xc6200088
    ctx->pc = 0x1cbc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc08: 0x246350e8
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20712));
    // 0x1cbc0c: 0xe6000088
    ctx->pc = 0x1cbc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x1cbc10: 0x8e27008c
    ctx->pc = 0x1cbc10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1cbc14: 0xae07008c
    ctx->pc = 0x1cbc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
    // 0x1cbc18: 0x8e270090
    ctx->pc = 0x1cbc18u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1cbc1c: 0xae070090
    ctx->pc = 0x1cbc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
    // 0x1cbc20: 0x8e270094
    ctx->pc = 0x1cbc20u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1cbc24: 0xae070094
    ctx->pc = 0x1cbc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 7));
    // 0x1cbc28: 0xc6200098
    ctx->pc = 0x1cbc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc2c: 0xe6000098
    ctx->pc = 0x1cbc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1cbc30: 0xc620009c
    ctx->pc = 0x1cbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc34: 0xe600009c
    ctx->pc = 0x1cbc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1cbc38: 0xc62000a0
    ctx->pc = 0x1cbc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc3c: 0xe60000a0
    ctx->pc = 0x1cbc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1cbc40: 0x8e2700a4
    ctx->pc = 0x1cbc40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1cbc44: 0xae0700a4
    ctx->pc = 0x1cbc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 7));
    // 0x1cbc48: 0x8e2700a8
    ctx->pc = 0x1cbc48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x1cbc4c: 0xae0700a8
    ctx->pc = 0x1cbc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 7));
    // 0x1cbc50: 0x8e2700ac
    ctx->pc = 0x1cbc50u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x1cbc54: 0xae0700ac
    ctx->pc = 0x1cbc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 7));
    // 0x1cbc58: 0xc62000b0
    ctx->pc = 0x1cbc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc5c: 0xe60000b0
    ctx->pc = 0x1cbc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1cbc60: 0xc62000b4
    ctx->pc = 0x1cbc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbc64: 0xe60000b4
    ctx->pc = 0x1cbc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x1cbc68: 0x8e2700b8
    ctx->pc = 0x1cbc68u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1cbc6c: 0xae0700b8
    ctx->pc = 0x1cbc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 7));
    // 0x1cbc70: 0x8e2700bc
    ctx->pc = 0x1cbc70u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x1cbc74: 0xae0700bc
    ctx->pc = 0x1cbc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 7));
    // 0x1cbc78: 0x862700c0
    ctx->pc = 0x1cbc78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x1cbc7c: 0xa60700c0
    ctx->pc = 0x1cbc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 7));
    // 0x1cbc80: 0x822700c2
    ctx->pc = 0x1cbc80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x1cbc84: 0xa20700c2
    ctx->pc = 0x1cbc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 194), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cbc88: 0x822700c3
    ctx->pc = 0x1cbc88u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 195)));
    // 0x1cbc8c: 0xa20700c3
    ctx->pc = 0x1cbc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 195), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cbc90: 0x822700c4
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1cbc94: 0xa20700c4
    ctx->pc = 0x1cbc94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 196), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cbc98: 0x822700c5
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 197)));
    // 0x1cbc9c: 0xa20700c5
    ctx->pc = 0x1cbc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 197), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cbca0: 0x822700c6
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 198)));
    // 0x1cbca4: 0xa20700c6
    ctx->pc = 0x1cbca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 198), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cbca8: 0xc4c00000
    ctx->pc = 0x1cbca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcac: 0xe4a00000
    ctx->pc = 0x1cbcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1cbcb0: 0xae640000
    ctx->pc = 0x1cbcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1cbcb4: 0xc4620000
    ctx->pc = 0x1cbcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cbcb8: 0xc4610004
    ctx->pc = 0x1cbcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbcbc: 0xc4600008
    ctx->pc = 0x1cbcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcc0: 0x8fa300d0
    ctx->pc = 0x1cbcc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cbcc4: 0xe4620000
    ctx->pc = 0x1cbcc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cbcc8: 0x8fa300d0
    ctx->pc = 0x1cbcc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cbccc: 0xe4610004
    ctx->pc = 0x1cbcccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cbcd0: 0x8fa300d0
    ctx->pc = 0x1cbcd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cbcd4: 0xe4600008
    ctx->pc = 0x1cbcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cbcd8: 0x7bbf0090
    ctx->pc = 0x1cbcd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cbcdc: 0x7bbe0080
    ctx->pc = 0x1cbcdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cbce0: 0x7bb70070
    ctx->pc = 0x1cbce0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cbce4: 0x7bb60060
    ctx->pc = 0x1cbce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cbce8: 0x7bb50050
    ctx->pc = 0x1cbce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cbcec: 0x7bb40040
    ctx->pc = 0x1cbcecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cbcf0: 0x7bb30030
    ctx->pc = 0x1cbcf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cbcf4: 0x7bb20020
    ctx->pc = 0x1cbcf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbcf8: 0x7bb10010
    ctx->pc = 0x1cbcf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbcfc: 0x7bb00000
    ctx->pc = 0x1cbcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbd00: 0x3e00008
    ctx->pc = 0x1CBD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBD04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB954u: goto label_1cb954;
            case 0x1CBB68u: goto label_1cbb68;
            case 0x1CBBA0u: goto label_1cbba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBD08u;
}
