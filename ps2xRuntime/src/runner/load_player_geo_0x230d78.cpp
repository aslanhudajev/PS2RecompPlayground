#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_player_geo
// Address: 0x230d78 - 0x2310c4
void load_player_geo_0x230d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230d78u;

    // 0x230d78: 0x27bdff90
    ctx->pc = 0x230d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x230d7c: 0xffbf0060
    ctx->pc = 0x230d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x230d80: 0xffb10050
    ctx->pc = 0x230d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x230d84: 0xffb00040
    ctx->pc = 0x230d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x230d88: 0x80882d
    ctx->pc = 0x230d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d8c: 0x24032b00
    ctx->pc = 0x230d8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x230d90: 0x2231818
    ctx->pc = 0x230d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230d94: 0x3c020032
    ctx->pc = 0x230d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230d98: 0x24421bc0
    ctx->pc = 0x230d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x230d9c: 0x628021
    ctx->pc = 0x230d9cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230da0: 0x3c020031
    ctx->pc = 0x230da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x230da4: 0x8c42f184
    ctx->pc = 0x230da4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x230da8: 0x50400004
    ctx->pc = 0x230DA8u;
    {
        const bool branch_taken_0x230da8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x230da8) {
            ctx->pc = 0x230DACu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
            ctx->pc = 0x230DBCu;
            goto label_230dbc;
        }
    }
    ctx->pc = 0x230DB0u;
    // 0x230db0: 0xc08d31a
    ctx->pc = 0x230DB0u;
    SET_GPR_U32(ctx, 31, 0x230DB8u);
    ctx->pc = 0x230DB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x234C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPlayerLevel_0x234c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230DB8u; }
    }
    if (ctx->pc != 0x230DB8u) { return; }
    ctx->pc = 0x230DB8u;
    // 0x230db8: 0xae000080
    ctx->pc = 0x230db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_230dbc:
    // 0x230dbc: 0xae000084
    ctx->pc = 0x230dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x230dc0: 0x220202d
    ctx->pc = 0x230dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dc4: 0xc08be2a
    ctx->pc = 0x230DC4u;
    SET_GPR_U32(ctx, 31, 0x230DCCu);
    ctx->pc = 0x230DC8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22F8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_player_0x22f8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230DCCu; }
    }
    if (ctx->pc != 0x230DCCu) { return; }
    ctx->pc = 0x230DCCu;
    // 0x230dcc: 0xae0007d8
    ctx->pc = 0x230dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2008), GPR_U32(ctx, 0));
    // 0x230dd0: 0xae0007dc
    ctx->pc = 0x230dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 0));
    // 0x230dd4: 0x182d
    ctx->pc = 0x230dd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dd8: 0x260407e0
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2016));
    // 0x230ddc: 0x0
    ctx->pc = 0x230ddcu;
    // NOP
label_230de0:
    // 0x230de0: 0x31080
    ctx->pc = 0x230de0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x230de4: 0x821021
    ctx->pc = 0x230de4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x230de8: 0xac400000
    ctx->pc = 0x230de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x230dec: 0x24630001
    ctx->pc = 0x230decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x230df0: 0x28620008
    ctx->pc = 0x230df0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x230df4: 0x1440fffa
    ctx->pc = 0x230DF4u;
    {
        const bool branch_taken_0x230df4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x230df4) {
            ctx->pc = 0x230DE0u;
            goto label_230de0;
        }
    }
    ctx->pc = 0x230DFCu;
    // 0x230dfc: 0xae0001e0
    ctx->pc = 0x230dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x230e00: 0xae0001e4
    ctx->pc = 0x230e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x230e04: 0xae0001dc
    ctx->pc = 0x230e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x230e08: 0xae0008e8
    ctx->pc = 0x230e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2280), GPR_U32(ctx, 0));
    // 0x230e0c: 0xae000690
    ctx->pc = 0x230e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 0));
    // 0x230e10: 0xae000694
    ctx->pc = 0x230e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 0));
    // 0x230e14: 0xae000810
    ctx->pc = 0x230e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x230e18: 0x3c030033
    ctx->pc = 0x230e18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x230e1c: 0x24634910
    ctx->pc = 0x230e1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
    // 0x230e20: 0x111080
    ctx->pc = 0x230e20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x230e24: 0x431021
    ctx->pc = 0x230e24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230e28: 0x8c420000
    ctx->pc = 0x230e28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230e2c: 0xc4400050
    ctx->pc = 0x230e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230e30: 0xe6000814
    ctx->pc = 0x230e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2068), bits); }
    // 0x230e34: 0xae000818
    ctx->pc = 0x230e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 0));
    // 0x230e38: 0xae00081c
    ctx->pc = 0x230e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2076), GPR_U32(ctx, 0));
    // 0x230e3c: 0xc4400054
    ctx->pc = 0x230e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230e40: 0xe6000820
    ctx->pc = 0x230e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2080), bits); }
    // 0x230e44: 0xae000824
    ctx->pc = 0x230e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2084), GPR_U32(ctx, 0));
    // 0x230e48: 0xae000830
    ctx->pc = 0x230e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2096), GPR_U32(ctx, 0));
    // 0x230e4c: 0xae000834
    ctx->pc = 0x230e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x230e50: 0xae000838
    ctx->pc = 0x230e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 0));
    // 0x230e54: 0xae000848
    ctx->pc = 0x230e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 0));
    // 0x230e58: 0xae00084c
    ctx->pc = 0x230e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 0));
    // 0x230e5c: 0xae000850
    ctx->pc = 0x230e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 0));
    // 0x230e60: 0xae000860
    ctx->pc = 0x230e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 0));
    // 0x230e64: 0xae000864
    ctx->pc = 0x230e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
    // 0x230e68: 0xae000868
    ctx->pc = 0x230e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2152), GPR_U32(ctx, 0));
    // 0x230e6c: 0xae000870
    ctx->pc = 0x230e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2160), GPR_U32(ctx, 0));
    // 0x230e70: 0xae000874
    ctx->pc = 0x230e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2164), GPR_U32(ctx, 0));
    // 0x230e74: 0xae0008a8
    ctx->pc = 0x230e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2216), GPR_U32(ctx, 0));
    // 0x230e78: 0xae0008ac
    ctx->pc = 0x230e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2220), GPR_U32(ctx, 0));
    // 0x230e7c: 0xae0008b0
    ctx->pc = 0x230e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2224), GPR_U32(ctx, 0));
    // 0x230e80: 0xae0008b4
    ctx->pc = 0x230e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2228), GPR_U32(ctx, 0));
    // 0x230e84: 0xae0008b8
    ctx->pc = 0x230e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2232), GPR_U32(ctx, 0));
    // 0x230e88: 0xae0008bc
    ctx->pc = 0x230e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2236), GPR_U32(ctx, 0));
    // 0x230e8c: 0xae0008c0
    ctx->pc = 0x230e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2240), GPR_U32(ctx, 0));
    // 0x230e90: 0xae0008c4
    ctx->pc = 0x230e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2244), GPR_U32(ctx, 0));
    // 0x230e94: 0x3c014380
    ctx->pc = 0x230e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17280 << 16));
    // 0x230e98: 0x44810000
    ctx->pc = 0x230e98u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x230e9c: 0xe6000878
    ctx->pc = 0x230e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2168), bits); }
    // 0x230ea0: 0x3c014340
    ctx->pc = 0x230ea0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17216 << 16));
    // 0x230ea4: 0x44810000
    ctx->pc = 0x230ea4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x230ea8: 0xe600087c
    ctx->pc = 0x230ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2172), bits); }
    // 0x230eac: 0xae0007b4
    ctx->pc = 0x230eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 0));
    // 0x230eb0: 0xa6000932
    ctx->pc = 0x230eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2354), (uint16_t)GPR_U32(ctx, 0));
    // 0x230eb4: 0xc440004c
    ctx->pc = 0x230eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230eb8: 0xe6000828
    ctx->pc = 0x230eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2088), bits); }
    // 0x230ebc: 0xc4400048
    ctx->pc = 0x230ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ec0: 0x3c013f00
    ctx->pc = 0x230ec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x230ec4: 0x44810800
    ctx->pc = 0x230ec4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x230ec8: 0x46010002
    ctx->pc = 0x230ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230ecc: 0xe600082c
    ctx->pc = 0x230eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2092), bits); }
    // 0x230ed0: 0xa60001c8
    ctx->pc = 0x230ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 456), (uint16_t)GPR_U32(ctx, 0));
    // 0x230ed4: 0xa60001d2
    ctx->pc = 0x230ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 466), (uint16_t)GPR_U32(ctx, 0));
    // 0x230ed8: 0xa60001d4
    ctx->pc = 0x230ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 468), (uint16_t)GPR_U32(ctx, 0));
    // 0x230edc: 0xa60001d6
    ctx->pc = 0x230edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 470), (uint16_t)GPR_U32(ctx, 0));
    // 0x230ee0: 0x240200f0
    ctx->pc = 0x230ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x230ee4: 0xa60201d0
    ctx->pc = 0x230ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 464), (uint16_t)GPR_U32(ctx, 2));
    // 0x230ee8: 0xa60001d8
    ctx->pc = 0x230ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 472), (uint16_t)GPR_U32(ctx, 0));
    // 0x230eec: 0xa60001da
    ctx->pc = 0x230eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 474), (uint16_t)GPR_U32(ctx, 0));
    // 0x230ef0: 0xae0008cc
    ctx->pc = 0x230ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2252), GPR_U32(ctx, 0));
    // 0x230ef4: 0xae0008d0
    ctx->pc = 0x230ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2256), GPR_U32(ctx, 0));
    // 0x230ef8: 0xae0008d8
    ctx->pc = 0x230ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 0));
    // 0x230efc: 0xae0008d4
    ctx->pc = 0x230efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2260), GPR_U32(ctx, 0));
    // 0x230f00: 0xae0008dc
    ctx->pc = 0x230f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2268), GPR_U32(ctx, 0));
    // 0x230f04: 0xae0008e0
    ctx->pc = 0x230f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2272), GPR_U32(ctx, 0));
    // 0x230f08: 0xae0008e4
    ctx->pc = 0x230f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2276), GPR_U32(ctx, 0));
    // 0x230f0c: 0xae0008ec
    ctx->pc = 0x230f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2284), GPR_U32(ctx, 0));
    // 0x230f10: 0xae0008f0
    ctx->pc = 0x230f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2288), GPR_U32(ctx, 0));
    // 0x230f14: 0x3c013f80
    ctx->pc = 0x230f14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x230f18: 0x44810000
    ctx->pc = 0x230f18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x230f1c: 0xe6000964
    ctx->pc = 0x230f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2404), bits); }
    // 0x230f20: 0xe6000968
    ctx->pc = 0x230f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2408), bits); }
    // 0x230f24: 0xe600096c
    ctx->pc = 0x230f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2412), bits); }
    // 0x230f28: 0xe6000970
    ctx->pc = 0x230f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2416), bits); }
    // 0x230f2c: 0x24020010
    ctx->pc = 0x230f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x230f30: 0xa602092e
    ctx->pc = 0x230f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2350), (uint16_t)GPR_U32(ctx, 2));
    // 0x230f34: 0xa6000930
    ctx->pc = 0x230f34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2352), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f38: 0xa600092c
    ctx->pc = 0x230f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2348), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f3c: 0xa6000934
    ctx->pc = 0x230f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2356), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f40: 0xa6000928
    ctx->pc = 0x230f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2344), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f44: 0xae000948
    ctx->pc = 0x230f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 0));
    // 0x230f48: 0x3c020032
    ctx->pc = 0x230f48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230f4c: 0x90421548
    ctx->pc = 0x230f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5448)));
    // 0x230f50: 0xae02094c
    ctx->pc = 0x230f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2380), GPR_U32(ctx, 2));
    // 0x230f54: 0xa600092a
    ctx->pc = 0x230f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2346), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f58: 0x8e0208f8
    ctx->pc = 0x230f58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2296)));
    // 0x230f5c: 0xae0208f4
    ctx->pc = 0x230f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2292), GPR_U32(ctx, 2));
    // 0x230f60: 0xae000880
    ctx->pc = 0x230f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2176), GPR_U32(ctx, 0));
    // 0x230f64: 0xae000940
    ctx->pc = 0x230f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2368), GPR_U32(ctx, 0));
    // 0x230f68: 0xae000944
    ctx->pc = 0x230f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2372), GPR_U32(ctx, 0));
    // 0x230f6c: 0xae000984
    ctx->pc = 0x230f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2436), GPR_U32(ctx, 0));
    // 0x230f70: 0xae000914
    ctx->pc = 0x230f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 0));
    // 0x230f74: 0xae000918
    ctx->pc = 0x230f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 0));
    // 0x230f78: 0xae000888
    ctx->pc = 0x230f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2184), GPR_U32(ctx, 0));
    // 0x230f7c: 0xae000974
    ctx->pc = 0x230f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2420), GPR_U32(ctx, 0));
    // 0x230f80: 0xae000978
    ctx->pc = 0x230f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2424), GPR_U32(ctx, 0));
    // 0x230f84: 0xa6000936
    ctx->pc = 0x230f84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2358), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f88: 0xa6000938
    ctx->pc = 0x230f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2360), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f8c: 0xa600093a
    ctx->pc = 0x230f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2362), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f90: 0xa600093c
    ctx->pc = 0x230f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2364), (uint16_t)GPR_U32(ctx, 0));
    // 0x230f94: 0xae0008fc
    ctx->pc = 0x230f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2300), GPR_U32(ctx, 0));
    // 0x230f98: 0x3c01bf80
    ctx->pc = 0x230f98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x230f9c: 0x44810000
    ctx->pc = 0x230f9cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x230fa0: 0xe6000904
    ctx->pc = 0x230fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2308), bits); }
    // 0x230fa4: 0xae000908
    ctx->pc = 0x230fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2312), GPR_U32(ctx, 0));
    // 0x230fa8: 0x182d
    ctx->pc = 0x230fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fac: 0x26040950
    ctx->pc = 0x230facu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2384));
    // 0x230fb0: 0x2405ffff
    ctx->pc = 0x230fb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230fb4: 0x0
    ctx->pc = 0x230fb4u;
    // NOP
label_230fb8:
    // 0x230fb8: 0x31080
    ctx->pc = 0x230fb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x230fbc: 0x821021
    ctx->pc = 0x230fbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x230fc0: 0xac450000
    ctx->pc = 0x230fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x230fc4: 0x24630001
    ctx->pc = 0x230fc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x230fc8: 0x28620005
    ctx->pc = 0x230fc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 5));
    // 0x230fcc: 0x1440fffa
    ctx->pc = 0x230FCCu;
    {
        const bool branch_taken_0x230fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x230fcc) {
            ctx->pc = 0x230FB8u;
            goto label_230fb8;
        }
    }
    ctx->pc = 0x230FD4u;
    // 0x230fd4: 0xae000130
    ctx->pc = 0x230fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x230fd8: 0xae000134
    ctx->pc = 0x230fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x230fdc: 0xae000138
    ctx->pc = 0x230fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x230fe0: 0xae00013c
    ctx->pc = 0x230fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x230fe4: 0xae000140
    ctx->pc = 0x230fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x230fe8: 0xc08b080
    ctx->pc = 0x230FE8u;
    SET_GPR_U32(ctx, 31, 0x230FF0u);
    ctx->pc = 0x230FECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C200u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_player_powerups_0x22c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230FF0u; }
    }
    if (ctx->pc != 0x230FF0u) { return; }
    ctx->pc = 0x230FF0u;
    // 0x230ff0: 0xae00089c
    ctx->pc = 0x230ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2204), GPR_U32(ctx, 0));
    // 0x230ff4: 0x3c020031
    ctx->pc = 0x230ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x230ff8: 0x8c420014
    ctx->pc = 0x230ff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x230ffc: 0x30420001
    ctx->pc = 0x230ffcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x231000: 0x10400005
    ctx->pc = 0x231000u;
    {
        const bool branch_taken_0x231000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231004u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x231000) {
            ctx->pc = 0x231018u;
            goto label_231018;
        }
    }
    ctx->pc = 0x231008u;
    // 0x231008: 0x8c430018
    ctx->pc = 0x231008u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23100c: 0x2402400b
    ctx->pc = 0x23100cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
    // 0x231010: 0x10620004
    ctx->pc = 0x231010u;
    {
        const bool branch_taken_0x231010 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x231014u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x231010) {
            ctx->pc = 0x231024u;
            goto label_231024;
        }
    }
    ctx->pc = 0x231018u;
label_231018:
    // 0x231018: 0xc08d382
    ctx->pc = 0x231018u;
    SET_GPR_U32(ctx, 31, 0x231020u);
    ctx->pc = 0x23101Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231020u; }
    }
    if (ctx->pc != 0x231020u) { return; }
    ctx->pc = 0x231020u;
    // 0x231020: 0x3c020032
    ctx->pc = 0x231020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_231024:
    // 0x231024: 0x8c42faa0
    ctx->pc = 0x231024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965920)));
    // 0x231028: 0x10400021
    ctx->pc = 0x231028u;
    {
        const bool branch_taken_0x231028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23102Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x231028) {
            ctx->pc = 0x2310B0u;
            goto label_2310b0;
        }
    }
    ctx->pc = 0x231030u;
    // 0x231030: 0xc0933d4
    ctx->pc = 0x231030u;
    SET_GPR_U32(ctx, 31, 0x231038u);
    ctx->pc = 0x231034u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x24CF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_player_pos_0x24cf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231038u; }
    }
    if (ctx->pc != 0x231038u) { return; }
    ctx->pc = 0x231038u;
    // 0x231038: 0x3a0202d
    ctx->pc = 0x231038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23103c: 0xc0b5ae8
    ctx->pc = 0x23103Cu;
    SET_GPR_U32(ctx, 31, 0x231044u);
    ctx->pc = 0x231040u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 216));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231044u; }
    }
    if (ctx->pc != 0x231044u) { return; }
    ctx->pc = 0x231044u;
    // 0x231044: 0x3a0202d
    ctx->pc = 0x231044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231048: 0xc0b549e
    ctx->pc = 0x231048u;
    SET_GPR_U32(ctx, 31, 0x231050u);
    ctx->pc = 0x23104Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231050u; }
    }
    if (ctx->pc != 0x231050u) { return; }
    ctx->pc = 0x231050u;
    // 0x231050: 0xc60000dc
    ctx->pc = 0x231050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231054: 0xe600086c
    ctx->pc = 0x231054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2156), bits); }
    // 0x231058: 0xc6010054
    ctx->pc = 0x231058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23105c: 0xe601088c
    ctx->pc = 0x23105cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2188), bits); }
    // 0x231060: 0xc6000050
    ctx->pc = 0x231060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231064: 0xe6000854
    ctx->pc = 0x231064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2132), bits); }
    // 0x231068: 0xe6010858
    ctx->pc = 0x231068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2136), bits); }
    // 0x23106c: 0xc6000058
    ctx->pc = 0x23106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231070: 0xe600085c
    ctx->pc = 0x231070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2140), bits); }
    // 0x231074: 0x200202d
    ctx->pc = 0x231074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231078: 0xc08ac14
    ctx->pc = 0x231078u;
    SET_GPR_U32(ctx, 31, 0x231080u);
    ctx->pc = 0x23107Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231080u; }
    }
    if (ctx->pc != 0x231080u) { return; }
    ctx->pc = 0x231080u;
    // 0x231080: 0x8e0306a0
    ctx->pc = 0x231080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x231084: 0x8e020080
    ctx->pc = 0x231084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x231088: 0xc4400030
    ctx->pc = 0x231088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23108c: 0xe4600030
    ctx->pc = 0x23108cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x231090: 0x8e0306a0
    ctx->pc = 0x231090u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x231094: 0x8e020080
    ctx->pc = 0x231094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x231098: 0xc4400034
    ctx->pc = 0x231098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23109c: 0xe4600034
    ctx->pc = 0x23109cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2310a0: 0x8e0306a0
    ctx->pc = 0x2310a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x2310a4: 0x8e020080
    ctx->pc = 0x2310a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2310a8: 0xc4400038
    ctx->pc = 0x2310a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2310ac: 0xe4600038
    ctx->pc = 0x2310acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_2310b0:
    // 0x2310b0: 0xdfbf0060
    ctx->pc = 0x2310b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2310b4: 0xdfb10050
    ctx->pc = 0x2310b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2310b8: 0xdfb00040
    ctx->pc = 0x2310b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2310bc: 0x3e00008
    ctx->pc = 0x2310BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2310C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230DBCu: goto label_230dbc;
            case 0x230DE0u: goto label_230de0;
            case 0x230FB8u: goto label_230fb8;
            case 0x231018u: goto label_231018;
            case 0x231024u: goto label_231024;
            case 0x2310B0u: goto label_2310b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2310C4u;
}
