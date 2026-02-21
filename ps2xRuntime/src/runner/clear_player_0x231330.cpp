#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: clear_player
// Address: 0x231330 - 0x231454
void clear_player_0x231330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231330u;

    // 0x231330: 0x27bdffc0
    ctx->pc = 0x231330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231334: 0xffbf0030
    ctx->pc = 0x231334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x231338: 0xffb20020
    ctx->pc = 0x231338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23133c: 0xffb10010
    ctx->pc = 0x23133cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231340: 0xffb00000
    ctx->pc = 0x231340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231344: 0xa0902d
    ctx->pc = 0x231344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231348: 0x24022b00
    ctx->pc = 0x231348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23134c: 0x822018
    ctx->pc = 0x23134cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231350: 0x3c020032
    ctx->pc = 0x231350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231354: 0x24421bc0
    ctx->pc = 0x231354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x231358: 0x828021
    ctx->pc = 0x231358u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23135c: 0xae001a18
    ctx->pc = 0x23135cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 0));
    // 0x231360: 0x882d
    ctx->pc = 0x231360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231364: 0x26042a9c
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 10908));
label_231368:
    // 0x231368: 0x111080
    ctx->pc = 0x231368u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x23136c: 0x821021
    ctx->pc = 0x23136cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x231370: 0x32230003
    ctx->pc = 0x231370u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 3));
    // 0x231374: 0xac430000
    ctx->pc = 0x231374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x231378: 0x26310001
    ctx->pc = 0x231378u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x23137c: 0x2a220009
    ctx->pc = 0x23137cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 9));
    // 0x231380: 0x1440fff9
    ctx->pc = 0x231380u;
    {
        const bool branch_taken_0x231380 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x231380) {
            ctx->pc = 0x231368u;
            goto label_231368;
        }
    }
    ctx->pc = 0x231388u;
    // 0x231388: 0x3c020031
    ctx->pc = 0x231388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23138c: 0x8c42f184
    ctx->pc = 0x23138cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x231390: 0x10400003
    ctx->pc = 0x231390u;
    {
        const bool branch_taken_0x231390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231394u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2500));
        if (branch_taken_0x231390) {
            ctx->pc = 0x2313A0u;
            goto label_2313a0;
        }
    }
    ctx->pc = 0x231398u;
    // 0x231398: 0x10000002
    ctx->pc = 0x231398u;
    {
        const bool branch_taken_0x231398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23139Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 2));
        if (branch_taken_0x231398) {
            ctx->pc = 0x2313A4u;
            goto label_2313a4;
        }
    }
    ctx->pc = 0x2313A0u;
label_2313a0:
    // 0x2313a0: 0xae001a20
    ctx->pc = 0x2313a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 0));
label_2313a4:
    // 0x2313a4: 0x3c0143fa
    ctx->pc = 0x2313a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17402 << 16));
    // 0x2313a8: 0x44810000
    ctx->pc = 0x2313a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2313ac: 0xe6001a10
    ctx->pc = 0x2313acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
    // 0x2313b0: 0xa6001a24
    ctx->pc = 0x2313b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6692), (uint16_t)GPR_U32(ctx, 0));
    // 0x2313b4: 0xa6001a26
    ctx->pc = 0x2313b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6694), (uint16_t)GPR_U32(ctx, 0));
    // 0x2313b8: 0xae002ae8
    ctx->pc = 0x2313b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10984), GPR_U32(ctx, 0));
    // 0x2313bc: 0xae002aec
    ctx->pc = 0x2313bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10988), GPR_U32(ctx, 0));
    // 0x2313c0: 0xae002af0
    ctx->pc = 0x2313c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10992), GPR_U32(ctx, 0));
    // 0x2313c4: 0x2402ffff
    ctx->pc = 0x2313c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2313c8: 0xae022af4
    ctx->pc = 0x2313c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 2));
    // 0x2313cc: 0xae000104
    ctx->pc = 0x2313ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2313d0: 0xc08b068
    ctx->pc = 0x2313D0u;
    SET_GPR_U32(ctx, 31, 0x2313D8u);
    ctx->pc = 0x2313D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22C1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_powerups_0x22c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2313D8u; }
    }
    if (ctx->pc != 0x2313D8u) { return; }
    ctx->pc = 0x2313D8u;
    // 0x2313d8: 0x24020001
    ctx->pc = 0x2313d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2313dc: 0xae022ac0
    ctx->pc = 0x2313dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10944), GPR_U32(ctx, 2));
    // 0x2313e0: 0xae001a1c
    ctx->pc = 0x2313e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 0));
    // 0x2313e4: 0xc08c4ba
    ctx->pc = 0x2313E4u;
    SET_GPR_U32(ctx, 31, 0x2313ECu);
    ctx->pc = 0x2313E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2312E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        def_char_type_0x2312e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2313ECu; }
    }
    if (ctx->pc != 0x2313ECu) { return; }
    ctx->pc = 0x2313ECu;
    // 0x2313ec: 0xae020008
    ctx->pc = 0x2313ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2313f0: 0xae02000c
    ctx->pc = 0x2313f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2313f4: 0xae001a14
    ctx->pc = 0x2313f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 0));
    // 0x2313f8: 0xae000800
    ctx->pc = 0x2313f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 0));
    // 0x2313fc: 0xae000804
    ctx->pc = 0x2313fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2052), GPR_U32(ctx, 0));
    // 0x231400: 0xae002acc
    ctx->pc = 0x231400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10956), GPR_U32(ctx, 0));
    // 0x231404: 0x1240000c
    ctx->pc = 0x231404u;
    {
        const bool branch_taken_0x231404 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x231408u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 10948), GPR_U32(ctx, 0));
        if (branch_taken_0x231404) {
            ctx->pc = 0x231438u;
            goto label_231438;
        }
    }
    ctx->pc = 0x23140Cu;
    // 0x23140c: 0x2604099c
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x231410: 0x282d
    ctx->pc = 0x231410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231414: 0xc0becc6
    ctx->pc = 0x231414u;
    SET_GPR_U32(ctx, 31, 0x23141Cu);
    ctx->pc = 0x231418u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4212));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23141Cu; }
    }
    if (ctx->pc != 0x23141Cu) { return; }
    ctx->pc = 0x23141Cu;
    // 0x23141c: 0x26041a28
    ctx->pc = 0x23141cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6696));
    // 0x231420: 0x282d
    ctx->pc = 0x231420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231424: 0xc0becc6
    ctx->pc = 0x231424u;
    SET_GPR_U32(ctx, 31, 0x23142Cu);
    ctx->pc = 0x231428u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4212));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23142Cu; }
    }
    if (ctx->pc != 0x23142Cu) { return; }
    ctx->pc = 0x23142Cu;
    // 0x23142c: 0xae0000fc
    ctx->pc = 0x23142cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x231430: 0xae002ad4
    ctx->pc = 0x231430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10964), GPR_U32(ctx, 0));
    // 0x231434: 0xae002ad8
    ctx->pc = 0x231434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10968), GPR_U32(ctx, 0));
label_231438:
    // 0x231438: 0x200202d
    ctx->pc = 0x231438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23143c: 0xdfbf0030
    ctx->pc = 0x23143cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231440: 0xdfb20020
    ctx->pc = 0x231440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231444: 0xdfb10010
    ctx->pc = 0x231444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231448: 0xdfb00000
    ctx->pc = 0x231448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23144c: 0x808bfe0
    ctx->pc = 0x23144Cu;
    ctx->pc = 0x231450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x22FF80u;
    set_player_default_atts_0x22ff80(rdram, ctx, runtime); return;
    ctx->pc = 0x231454u;
}
