#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamReset
// Address: 0x213390 - 0x2134a4
void CamReset_0x213390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x213390u;

    // 0x213390: 0x3c014049
    ctx->pc = 0x213390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x213394: 0x34210fdb
    ctx->pc = 0x213394u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213398: 0x44810000
    ctx->pc = 0x213398u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21339c: 0xe48000ec
    ctx->pc = 0x21339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x2133a0: 0xac8000f0
    ctx->pc = 0x2133a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x2133a4: 0xac800104
    ctx->pc = 0x2133a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
    // 0x2133a8: 0xac800108
    ctx->pc = 0x2133a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 0));
    // 0x2133ac: 0xac8000f4
    ctx->pc = 0x2133acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
    // 0x2133b0: 0xac8000f8
    ctx->pc = 0x2133b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x2133b4: 0xac8000e0
    ctx->pc = 0x2133b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x2133b8: 0xac8000e4
    ctx->pc = 0x2133b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x2133bc: 0xac8000e8
    ctx->pc = 0x2133bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x2133c0: 0xac8000a4
    ctx->pc = 0x2133c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x2133c4: 0xac8000a8
    ctx->pc = 0x2133c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x2133c8: 0xac8000ac
    ctx->pc = 0x2133c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x2133cc: 0xac8000bc
    ctx->pc = 0x2133ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x2133d0: 0xac8000c0
    ctx->pc = 0x2133d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x2133d4: 0xac8000c4
    ctx->pc = 0x2133d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x2133d8: 0xac8000c8
    ctx->pc = 0x2133d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x2133dc: 0xac8000cc
    ctx->pc = 0x2133dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x2133e0: 0xac8000d0
    ctx->pc = 0x2133e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x2133e4: 0xac800040
    ctx->pc = 0x2133e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2133e8: 0xac800044
    ctx->pc = 0x2133e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2133ec: 0xac800048
    ctx->pc = 0x2133ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2133f0: 0xac800050
    ctx->pc = 0x2133f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x2133f4: 0xac800054
    ctx->pc = 0x2133f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x2133f8: 0xac800058
    ctx->pc = 0x2133f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x2133fc: 0xac800060
    ctx->pc = 0x2133fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x213400: 0xac800064
    ctx->pc = 0x213400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x213404: 0xac800068
    ctx->pc = 0x213404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x213408: 0xac800070
    ctx->pc = 0x213408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x21340c: 0xac800074
    ctx->pc = 0x21340cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x213410: 0xac800078
    ctx->pc = 0x213410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x213414: 0x282d
    ctx->pc = 0x213414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213418: 0x2409000c
    ctx->pc = 0x213418u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 12));
    // 0x21341c: 0x24880114
    ctx->pc = 0x21341cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 276));
    // 0x213420: 0x24870118
    ctx->pc = 0x213420u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 280));
    // 0x213424: 0x2486011c
    ctx->pc = 0x213424u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 284));
label_213428:
    // 0x213428: 0xa91818
    ctx->pc = 0x213428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21342c: 0x1031021
    ctx->pc = 0x21342cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x213430: 0xac400000
    ctx->pc = 0x213430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x213434: 0xe31021
    ctx->pc = 0x213434u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x213438: 0xac400000
    ctx->pc = 0x213438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21343c: 0xc31821
    ctx->pc = 0x21343cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x213440: 0x24a50001
    ctx->pc = 0x213440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x213444: 0x28a20009
    ctx->pc = 0x213444u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 9));
    // 0x213448: 0x1440fff7
    ctx->pc = 0x213448u;
    {
        const bool branch_taken_0x213448 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21344Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x213448) {
            ctx->pc = 0x213428u;
            goto label_213428;
        }
    }
    ctx->pc = 0x213450u;
    // 0x213450: 0xac8001a4
    ctx->pc = 0x213450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 0));
    // 0x213454: 0xac8000d4
    ctx->pc = 0x213454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x213458: 0xac8000d8
    ctx->pc = 0x213458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x21345c: 0xac800100
    ctx->pc = 0x21345cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x213460: 0x3c013f86
    ctx->pc = 0x213460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16262 << 16));
    // 0x213464: 0x34210a92
    ctx->pc = 0x213464u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x213468: 0x44810000
    ctx->pc = 0x213468u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21346c: 0xe480010c
    ctx->pc = 0x21346cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x213470: 0xac800110
    ctx->pc = 0x213470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x213474: 0x3c020032
    ctx->pc = 0x213474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213478: 0xac40f7e4
    ctx->pc = 0x213478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965220), GPR_U32(ctx, 0));
    // 0x21347c: 0x3c030032
    ctx->pc = 0x21347cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x213480: 0x3c020032
    ctx->pc = 0x213480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213484: 0x8c42f780
    ctx->pc = 0x213484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965120)));
    // 0x213488: 0xac62f784
    ctx->pc = 0x213488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965124), GPR_U32(ctx, 2));
    // 0x21348c: 0x2402ffff
    ctx->pc = 0x21348cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213490: 0xac8201a8
    ctx->pc = 0x213490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 2));
    // 0x213494: 0xac8001ac
    ctx->pc = 0x213494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 428), GPR_U32(ctx, 0));
    // 0x213498: 0x3c020032
    ctx->pc = 0x213498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21349c: 0x3e00008
    ctx->pc = 0x21349Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2134A0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965192), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213428u: goto label_213428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2134A4u;
}
