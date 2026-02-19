#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitInst
// Address: 0x2933f8 - 0x29355c
void CritterInitInst_0x2933f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2933f8u;

    // 0x2933f8: 0x27bdffd0
    ctx->pc = 0x2933f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2933fc: 0xffbf0020
    ctx->pc = 0x2933fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x293400: 0xffb10010
    ctx->pc = 0x293400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293404: 0xffb00000
    ctx->pc = 0x293404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293408: 0x80802d
    ctx->pc = 0x293408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29340c: 0xa0882d
    ctx->pc = 0x29340cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293410: 0xae110004
    ctx->pc = 0x293410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x293414: 0xae000008
    ctx->pc = 0x293414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x293418: 0x2402ffff
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29341c: 0xa6020124
    ctx->pc = 0x29341cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 292), (uint16_t)GPR_U32(ctx, 2));
    // 0x293420: 0xa6000126
    ctx->pc = 0x293420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 0));
    // 0x293424: 0xa6020128
    ctx->pc = 0x293424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 2));
    // 0x293428: 0xa602012a
    ctx->pc = 0x293428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 298), (uint16_t)GPR_U32(ctx, 2));
    // 0x29342c: 0xa602012c
    ctx->pc = 0x29342cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 2));
    // 0x293430: 0xa6020130
    ctx->pc = 0x293430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x293434: 0xa6020132
    ctx->pc = 0x293434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x293438: 0xa6020134
    ctx->pc = 0x293438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x29343c: 0xa6020b42
    ctx->pc = 0x29343cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2882), (uint16_t)GPR_U32(ctx, 2));
    // 0x293440: 0xa6020b44
    ctx->pc = 0x293440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2884), (uint16_t)GPR_U32(ctx, 2));
    // 0x293444: 0xa6000b46
    ctx->pc = 0x293444u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2886), (uint16_t)GPR_U32(ctx, 0));
    // 0x293448: 0x2402ffff
    ctx->pc = 0x293448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29344c: 0xae020b48
    ctx->pc = 0x29344cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2888), GPR_U32(ctx, 2));
    // 0x293450: 0xa6000b4c
    ctx->pc = 0x293450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2892), (uint16_t)GPR_U32(ctx, 0));
    // 0x293454: 0xa6000b4e
    ctx->pc = 0x293454u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2894), (uint16_t)GPR_U32(ctx, 0));
    // 0x293458: 0xae000b50
    ctx->pc = 0x293458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2896), GPR_U32(ctx, 0));
    // 0x29345c: 0xae0004f0
    ctx->pc = 0x29345cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1264), GPR_U32(ctx, 0));
    // 0x293460: 0x3c020034
    ctx->pc = 0x293460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x293464: 0x8c42e7c8
    ctx->pc = 0x293464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x293468: 0xc62000e4
    ctx->pc = 0x293468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29346c: 0xc44100ac
    ctx->pc = 0x29346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293470: 0x46010002
    ctx->pc = 0x293470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293474: 0xe60004f4
    ctx->pc = 0x293474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1268), bits); }
    // 0x293478: 0x202d
    ctx->pc = 0x293478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29347c: 0x26080200
    ctx->pc = 0x29347cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 512));
    // 0x293480: 0x26070204
    ctx->pc = 0x293480u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 516));
    // 0x293484: 0x26060208
    ctx->pc = 0x293484u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 520));
    // 0x293488: 0x2605020c
    ctx->pc = 0x293488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 524));
    // 0x29348c: 0x0
    ctx->pc = 0x29348cu;
    // NOP
label_293490:
    // 0x293490: 0x41900
    ctx->pc = 0x293490u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x293494: 0x1031021
    ctx->pc = 0x293494u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x293498: 0xac400000
    ctx->pc = 0x293498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29349c: 0xe31021
    ctx->pc = 0x29349cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2934a0: 0xac400000
    ctx->pc = 0x2934a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2934a4: 0xc31021
    ctx->pc = 0x2934a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2934a8: 0xac400000
    ctx->pc = 0x2934a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2934ac: 0xa31821
    ctx->pc = 0x2934acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2934b0: 0x24840001
    ctx->pc = 0x2934b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2934b4: 0x28820004
    ctx->pc = 0x2934b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2934b8: 0x1440fff5
    ctx->pc = 0x2934B8u;
    {
        const bool branch_taken_0x2934b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2934BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2934b8) {
            ctx->pc = 0x293490u;
            goto label_293490;
        }
    }
    ctx->pc = 0x2934C0u;
    // 0x2934c0: 0x202d
    ctx->pc = 0x2934c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934c4: 0x26030524
    ctx->pc = 0x2934c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 1316));
    // 0x2934c8: 0x2405ffff
    ctx->pc = 0x2934c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2934cc: 0x0
    ctx->pc = 0x2934ccu;
    // NOP
label_2934d0:
    // 0x2934d0: 0x41040
    ctx->pc = 0x2934d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2934d4: 0x621021
    ctx->pc = 0x2934d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2934d8: 0xa4450000
    ctx->pc = 0x2934d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2934dc: 0x24840001
    ctx->pc = 0x2934dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2934e0: 0x28820004
    ctx->pc = 0x2934e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x2934e4: 0x1440fffa
    ctx->pc = 0x2934E4u;
    {
        const bool branch_taken_0x2934e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2934e4) {
            ctx->pc = 0x2934D0u;
            goto label_2934d0;
        }
    }
    ctx->pc = 0x2934ECu;
    // 0x2934ec: 0x86260110
    ctx->pc = 0x2934ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2934f0: 0x18c00004
    ctx->pc = 0x2934F0u;
    {
        const bool branch_taken_0x2934f0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2934F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 604));
        if (branch_taken_0x2934f0) {
            ctx->pc = 0x293504u;
            goto label_293504;
        }
    }
    ctx->pc = 0x2934F8u;
    // 0x2934f8: 0x282d
    ctx->pc = 0x2934f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934fc: 0xc0becc6
    ctx->pc = 0x2934FCu;
    SET_GPR_U32(ctx, 31, 0x293504u);
    ctx->pc = 0x293500u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293504u; }
    }
    if (ctx->pc != 0x293504u) { return; }
    ctx->pc = 0x293504u;
label_293504:
    // 0x293504: 0x86260114
    ctx->pc = 0x293504u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x293508: 0x18c00004
    ctx->pc = 0x293508u;
    {
        const bool branch_taken_0x293508 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x29350Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 860));
        if (branch_taken_0x293508) {
            ctx->pc = 0x29351Cu;
            goto label_29351c;
        }
    }
    ctx->pc = 0x293510u;
    // 0x293510: 0x282d
    ctx->pc = 0x293510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293514: 0xc0becc6
    ctx->pc = 0x293514u;
    SET_GPR_U32(ctx, 31, 0x29351Cu);
    ctx->pc = 0x293518u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29351Cu; }
    }
    if (ctx->pc != 0x29351Cu) { return; }
    ctx->pc = 0x29351Cu;
label_29351c:
    // 0x29351c: 0x86220118
    ctx->pc = 0x29351cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x293520: 0x1840000a
    ctx->pc = 0x293520u;
    {
        const bool branch_taken_0x293520 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x293524u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x293520) {
            ctx->pc = 0x29354Cu;
            goto label_29354c;
        }
    }
    ctx->pc = 0x293528u;
    // 0x293528: 0x24060060
    ctx->pc = 0x293528u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 96));
    // 0x29352c: 0x26040540
    ctx->pc = 0x29352cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1344));
    // 0x293530: 0x282d
    ctx->pc = 0x293530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293534: 0x460018
    ctx->pc = 0x293534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293538: 0x3012
    ctx->pc = 0x293538u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x29353c: 0xdfb10010
    ctx->pc = 0x29353cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293540: 0xdfb00000
    ctx->pc = 0x293540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293544: 0x80becc6
    ctx->pc = 0x293544u;
    ctx->pc = 0x293548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2FB318u;
    memset_0x2fb318(rdram, ctx, runtime); return;
    ctx->pc = 0x29354Cu;
label_29354c:
    // 0x29354c: 0xdfb10010
    ctx->pc = 0x29354cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293550: 0xdfb00000
    ctx->pc = 0x293550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293554: 0x3e00008
    ctx->pc = 0x293554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293490u: goto label_293490;
            case 0x2934D0u: goto label_2934d0;
            case 0x293504u: goto label_293504;
            case 0x29351Cu: goto label_29351c;
            case 0x29354Cu: goto label_29354c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29355Cu;
}
