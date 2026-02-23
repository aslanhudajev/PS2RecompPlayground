#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop__14McchkYesNoTaskFv
// Address: 0x1f5040 - 0x1f525c
void loop__14McchkYesNoTaskFv_0x1f5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop__14McchkYesNoTaskFv");


    ctx->pc = 0x1f5040u;

    // 0x1f5040: 0x27bdff10
    ctx->pc = 0x1f5040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1f5044: 0x7fbf0040
    ctx->pc = 0x1f5044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1f5048: 0x7fb30030
    ctx->pc = 0x1f5048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f504c: 0x7fb20020
    ctx->pc = 0x1f504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f5050: 0x7fb10010
    ctx->pc = 0x1f5050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5054: 0x7fb00000
    ctx->pc = 0x1f5054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5058: 0x8f838e3c
    ctx->pc = 0x1f5058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
    // 0x1f505c: 0x10600078
    ctx->pc = 0x1F505Cu;
    {
        const bool branch_taken_0x1f505c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f505c) {
            ctx->pc = 0x1F5240u;
            goto label_1f5240;
        }
    }
    ctx->pc = 0x1F5064u;
    // 0x1f5064: 0x3c020027
    ctx->pc = 0x1f5064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f5068: 0x2452cb30
    ctx->pc = 0x1f5068u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294953776));
    // 0x1f506c: 0x3c020052
    ctx->pc = 0x1f506cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1f5070: 0x70008628
    ctx->pc = 0x1f5070u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f5074: 0x24539410
    ctx->pc = 0x1f5074u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294939664));
label_1f5078:
    // 0x1f5078: 0x8e660000
    ctx->pc = 0x1f5078u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f507c: 0x24070001
    ctx->pc = 0x1f507cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5080: 0x3c010050
    ctx->pc = 0x1f5080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1f5084: 0x8023fec5
    ctx->pc = 0x1f5084u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1f5088: 0x3c02002c
    ctx->pc = 0x1f5088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1f508c: 0x8e650008
    ctx->pc = 0x1f508cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f5090: 0x6380a
    ctx->pc = 0x1f5090u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 0));
    // 0x1f5094: 0x86460000
    ctx->pc = 0x1f5094u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f5098: 0x24040002
    ctx->pc = 0x1f5098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f509c: 0x2442f9f0
    ctx->pc = 0x1f509cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x1f50a0: 0x318c0
    ctx->pc = 0x1f50a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f50a4: 0x5200a
    ctx->pc = 0x1f50a4u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
    // 0x1f50a8: 0x878825
    ctx->pc = 0x1f50a8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1f50ac: 0x433821
    ctx->pc = 0x1f50acu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f50b0: 0x63080
    ctx->pc = 0x1f50b0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f50b4: 0xc73021
    ctx->pc = 0x1f50b4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1f50b8: 0x8cc60000
    ctx->pc = 0x1f50b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f50bc: 0x3c024000
    ctx->pc = 0x1f50bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1f50c0: 0x34451062
    ctx->pc = 0x1f50c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 4194));
    // 0x1f50c4: 0x3c033f80
    ctx->pc = 0x1f50c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1f50c8: 0x2402ffff
    ctx->pc = 0x1f50c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f50cc: 0x27a40050
    ctx->pc = 0x1f50ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f50d0: 0xafa60098
    ctx->pc = 0x1f50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x1f50d4: 0xc6400008
    ctx->pc = 0x1f50d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f50d8: 0xe7a0005c
    ctx->pc = 0x1f50d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1f50dc: 0xc640000c
    ctx->pc = 0x1f50dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f50e0: 0xe7a00060
    ctx->pc = 0x1f50e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f50e4: 0xafa50064
    ctx->pc = 0x1f50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x1f50e8: 0xafa30068
    ctx->pc = 0x1f50e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x1f50ec: 0xafa3006c
    ctx->pc = 0x1f50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x1f50f0: 0xafa00074
    ctx->pc = 0x1f50f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1f50f4: 0xafa00070
    ctx->pc = 0x1f50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1f50f8: 0xafa3007c
    ctx->pc = 0x1f50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1f50fc: 0xafa30078
    ctx->pc = 0x1f50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1f5100: 0xafa00080
    ctx->pc = 0x1f5100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1f5104: 0xafa30084
    ctx->pc = 0x1f5104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x1f5108: 0xafa20088
    ctx->pc = 0x1f5108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1f510c: 0x8e420004
    ctx->pc = 0x1f510cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f5110: 0xc085bd8
    ctx->pc = 0x1F5110u;
    SET_GPR_U32(ctx, 31, 0x1F5118u);
    ctx->pc = 0x1F5114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5118u; }
        else if (ctx->pc != 0x1F5118u) { ctx->pc = 0x1F5118u; }
    }
    if (ctx->pc != 0x1F5118u) { return; }
    ctx->pc = 0x1F5118u;
    // 0x1f5118: 0x52200020
    ctx->pc = 0x1F5118u;
    {
        const bool branch_taken_0x1f5118 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f5118) {
            ctx->pc = 0x1F511Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1F519Cu;
            goto label_1f519c;
        }
    }
    ctx->pc = 0x1F5120u;
    // 0x1f5120: 0xc06aafc
    ctx->pc = 0x1F5120u;
    SET_GPR_U32(ctx, 31, 0x1F5128u);
    ctx->pc = 0x1AABF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPushFadeColor_0x1aabf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5128u; }
        else if (ctx->pc != 0x1F5128u) { ctx->pc = 0x1F5128u; }
    }
    if (ctx->pc != 0x1F5128u) { return; }
    ctx->pc = 0x1F5128u;
    // 0x1f5128: 0xc07d3d8
    ctx->pc = 0x1F5128u;
    SET_GPR_U32(ctx, 31, 0x1F5130u);
    ctx->pc = 0x1F512Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F4F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        setCursorColor__Fi_0x1f4f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5130u; }
        else if (ctx->pc != 0x1F5130u) { ctx->pc = 0x1F5130u; }
    }
    if (ctx->pc != 0x1F5130u) { return; }
    ctx->pc = 0x1F5130u;
    // 0x1f5130: 0x2402031d
    ctx->pc = 0x1f5130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 797));
    // 0x1f5134: 0xafa200e8
    ctx->pc = 0x1f5134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x1f5138: 0xc6400008
    ctx->pc = 0x1f5138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f513c: 0x3c054000
    ctx->pc = 0x1f513cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)16384 << 16));
    // 0x1f5140: 0x3c033f80
    ctx->pc = 0x1f5140u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1f5144: 0x2402ffff
    ctx->pc = 0x1f5144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f5148: 0x27a400a0
    ctx->pc = 0x1f5148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f514c: 0xe7a000ac
    ctx->pc = 0x1f514cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1f5150: 0xc640000c
    ctx->pc = 0x1f5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5154: 0xe7a000b0
    ctx->pc = 0x1f5154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f5158: 0xafa500b4
    ctx->pc = 0x1f5158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x1f515c: 0xafa300b8
    ctx->pc = 0x1f515cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x1f5160: 0xafa300bc
    ctx->pc = 0x1f5160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x1f5164: 0xafa000c4
    ctx->pc = 0x1f5164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1f5168: 0xafa000c0
    ctx->pc = 0x1f5168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f516c: 0xafa300cc
    ctx->pc = 0x1f516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x1f5170: 0xafa300c8
    ctx->pc = 0x1f5170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1f5174: 0xafa000d0
    ctx->pc = 0x1f5174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1f5178: 0xafa300d4
    ctx->pc = 0x1f5178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x1f517c: 0xafa200d8
    ctx->pc = 0x1f517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1f5180: 0x8e420004
    ctx->pc = 0x1f5180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f5184: 0xc085bd8
    ctx->pc = 0x1F5184u;
    SET_GPR_U32(ctx, 31, 0x1F518Cu);
    ctx->pc = 0x1F5188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F518Cu; }
        else if (ctx->pc != 0x1F518Cu) { ctx->pc = 0x1F518Cu; }
    }
    if (ctx->pc != 0x1F518Cu) { return; }
    ctx->pc = 0x1F518Cu;
    // 0x1f518c: 0xc06ab18
    ctx->pc = 0x1F518Cu;
    SET_GPR_U32(ctx, 31, 0x1F5194u);
    ctx->pc = 0x1AAC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPopFadeColor_0x1aac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5194u; }
        else if (ctx->pc != 0x1F5194u) { ctx->pc = 0x1F5194u; }
    }
    if (ctx->pc != 0x1F5194u) { return; }
    ctx->pc = 0x1F5194u;
    // 0x1f5194: 0x0
    ctx->pc = 0x1f5194u;
    // NOP
    // 0x1f5198: 0x26100001
    ctx->pc = 0x1f5198u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1f519c:
    // 0x1f519c: 0x2a030002
    ctx->pc = 0x1f519cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1f51a0: 0x26520018
    ctx->pc = 0x1f51a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 24));
    // 0x1f51a4: 0x1460ffb4
    ctx->pc = 0x1F51A4u;
    {
        const bool branch_taken_0x1f51a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F51A8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
        if (branch_taken_0x1f51a4) {
            ctx->pc = 0x1F5078u;
            goto label_1f5078;
        }
    }
    ctx->pc = 0x1F51ACu;
    // 0x1f51ac: 0x8f838e40
    ctx->pc = 0x1f51acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
    // 0x1f51b0: 0x4610023
    ctx->pc = 0x1F51B0u;
    {
        const bool branch_taken_0x1f51b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F51B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
        if (branch_taken_0x1f51b0) {
            ctx->pc = 0x1F5240u;
            goto label_1f5240;
        }
    }
    ctx->pc = 0x1F51B8u;
    // 0x1f51b8: 0x24659410
    ctx->pc = 0x1f51b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294939664));
    // 0x1f51bc: 0x3c030027
    ctx->pc = 0x1f51bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1f51c0: 0x70003e28
    ctx->pc = 0x1f51c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f51c4: 0x2466cb30
    ctx->pc = 0x1f51c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294953776));
    // 0x1f51c8: 0x24040002
    ctx->pc = 0x1f51c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1f51cc:
    // 0x1f51cc: 0x8ca30000
    ctx->pc = 0x1f51ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f51d0: 0x54640004
    ctx->pc = 0x1F51D0u;
    {
        const bool branch_taken_0x1f51d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1f51d0) {
            ctx->pc = 0x1F51D4u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x1F51E4u;
            goto label_1f51e4;
        }
    }
    ctx->pc = 0x1F51D8u;
    // 0x1f51d8: 0x8cc30014
    ctx->pc = 0x1f51d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1f51dc: 0xaf838e40
    ctx->pc = 0x1f51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
    // 0x1f51e0: 0x24e70001
    ctx->pc = 0x1f51e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1f51e4:
    // 0x1f51e4: 0x28e30002
    ctx->pc = 0x1f51e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 2));
    // 0x1f51e8: 0x24a50004
    ctx->pc = 0x1f51e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f51ec: 0x1460fff7
    ctx->pc = 0x1F51ECu;
    {
        const bool branch_taken_0x1f51ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F51F0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
        if (branch_taken_0x1f51ec) {
            ctx->pc = 0x1F51CCu;
            goto label_1f51cc;
        }
    }
    ctx->pc = 0x1F51F4u;
    // 0x1f51f4: 0x8f838e40
    ctx->pc = 0x1f51f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938176)));
    // 0x1f51f8: 0x4610011
    ctx->pc = 0x1F51F8u;
    {
        const bool branch_taken_0x1f51f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F51FCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
        if (branch_taken_0x1f51f8) {
            ctx->pc = 0x1F5240u;
            goto label_1f5240;
        }
    }
    ctx->pc = 0x1F5200u;
    // 0x1f5200: 0x24659410
    ctx->pc = 0x1f5200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294939664));
    // 0x1f5204: 0x3c030027
    ctx->pc = 0x1f5204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1f5208: 0x70003e28
    ctx->pc = 0x1f5208u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f520c: 0x2466cb30
    ctx->pc = 0x1f520cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294953776));
    // 0x1f5210: 0x24040002
    ctx->pc = 0x1f5210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1f5214:
    // 0x1f5214: 0x8ca30008
    ctx->pc = 0x1f5214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f5218: 0x54640004
    ctx->pc = 0x1F5218u;
    {
        const bool branch_taken_0x1f5218 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1f5218) {
            ctx->pc = 0x1F521Cu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x1F522Cu;
            goto label_1f522c;
        }
    }
    ctx->pc = 0x1F5220u;
    // 0x1f5220: 0x8cc30014
    ctx->pc = 0x1f5220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1f5224: 0xaf838e40
    ctx->pc = 0x1f5224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938176), GPR_U32(ctx, 3));
    // 0x1f5228: 0x24e70001
    ctx->pc = 0x1f5228u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1f522c:
    // 0x1f522c: 0x28e30002
    ctx->pc = 0x1f522cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 2));
    // 0x1f5230: 0x24a50004
    ctx->pc = 0x1f5230u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f5234: 0x1460fff7
    ctx->pc = 0x1F5234u;
    {
        const bool branch_taken_0x1f5234 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F5238u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
        if (branch_taken_0x1f5234) {
            ctx->pc = 0x1F5214u;
            goto label_1f5214;
        }
    }
    ctx->pc = 0x1F523Cu;
    // 0x1f523c: 0x0
    ctx->pc = 0x1f523cu;
    // NOP
label_1f5240:
    // 0x1f5240: 0x7bbf0040
    ctx->pc = 0x1f5240u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5244: 0x7bb30030
    ctx->pc = 0x1f5244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5248: 0x7bb20020
    ctx->pc = 0x1f5248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f524c: 0x7bb10010
    ctx->pc = 0x1f524cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5250: 0x7bb00000
    ctx->pc = 0x1f5250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5254: 0x3e00008
    ctx->pc = 0x1F5254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5258u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5078u: goto label_1f5078;
            case 0x1F519Cu: goto label_1f519c;
            case 0x1F51CCu: goto label_1f51cc;
            case 0x1F51E4u: goto label_1f51e4;
            case 0x1F5214u: goto label_1f5214;
            case 0x1F522Cu: goto label_1f522c;
            case 0x1F5240u: goto label_1f5240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F525Cu;
}
