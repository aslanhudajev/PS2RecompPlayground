#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterUpdateSkinfx
// Address: 0x293078 - 0x2932e0
void CritterUpdateSkinfx_0x293078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293078u;

    // 0x293078: 0x27bdff80
    ctx->pc = 0x293078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29307c: 0xffbf0070
    ctx->pc = 0x29307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x293080: 0xffb60060
    ctx->pc = 0x293080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x293084: 0xffb50050
    ctx->pc = 0x293084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x293088: 0xffb40040
    ctx->pc = 0x293088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29308c: 0xffb30030
    ctx->pc = 0x29308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x293090: 0xffb20020
    ctx->pc = 0x293090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x293094: 0xffb10010
    ctx->pc = 0x293094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293098: 0xffb00000
    ctx->pc = 0x293098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29309c: 0x80882d
    ctx->pc = 0x29309cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930a0: 0xb02d
    ctx->pc = 0x2930a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2930a4: 0x262400ec
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 236));
    // 0x2930a8: 0x8e2500cc
    ctx->pc = 0x2930a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2930ac: 0xc09ff98
    ctx->pc = 0x2930ACu;
    SET_GPR_U32(ctx, 31, 0x2930B4u);
    ctx->pc = 0x2930B0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 232)));
    ctx->pc = 0x27FE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessSkinFX_0x27fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2930B4u; }
    }
    if (ctx->pc != 0x2930B4u) { return; }
    ctx->pc = 0x2930B4u;
    // 0x2930b4: 0x8e2300e8
    ctx->pc = 0x2930b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x2930b8: 0x50600005
    ctx->pc = 0x2930B8u;
    {
        const bool branch_taken_0x2930b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2930b8) {
            ctx->pc = 0x2930BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2930D0u;
            goto label_2930d0;
        }
    }
    ctx->pc = 0x2930C0u;
    // 0x2930c0: 0x8c760060
    ctx->pc = 0x2930c0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2930c4: 0x36c20010
    ctx->pc = 0x2930c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 22), 16));
    // 0x2930c8: 0xac620060
    ctx->pc = 0x2930c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x2930cc: 0x8e220004
    ctx->pc = 0x2930ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2930d0:
    // 0x2930d0: 0x84420118
    ctx->pc = 0x2930d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x2930d4: 0x18400029
    ctx->pc = 0x2930D4u;
    {
        const bool branch_taken_0x2930d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2930D8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2930d4) {
            ctx->pc = 0x29317Cu;
            goto label_29317c;
        }
    }
    ctx->pc = 0x2930DCu;
    // 0x2930dc: 0x24150060
    ctx->pc = 0x2930dcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 96));
    // 0x2930e0: 0x3c140034
    ctx->pc = 0x2930e0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x2930e4: 0x2413ffff
    ctx->pc = 0x2930e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2930e8: 0x2551018
    ctx->pc = 0x2930e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2930ec: 0x0
    ctx->pc = 0x2930ecu;
    // NOP
label_2930f0:
    // 0x2930f0: 0x24420540
    ctx->pc = 0x2930f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2930f4: 0x2228021
    ctx->pc = 0x2930f4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2930f8: 0x8e020054
    ctx->pc = 0x2930f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2930fc: 0x1840000d
    ctx->pc = 0x2930FCu;
    {
        const bool branch_taken_0x2930fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x293100u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2930fc) {
            ctx->pc = 0x293134u;
            goto label_293134;
        }
    }
    ctx->pc = 0x293104u;
    // 0x293104: 0x8e040008
    ctx->pc = 0x293104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x293108: 0x8e8654f0
    ctx->pc = 0x293108u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 21744)));
    // 0x29310c: 0xc0b4126
    ctx->pc = 0x29310Cu;
    SET_GPR_U32(ctx, 31, 0x293114u);
    ctx->pc = 0x293110u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293114u; }
    }
    if (ctx->pc != 0x293114u) { return; }
    ctx->pc = 0x293114u;
    // 0x293114: 0x8e040008
    ctx->pc = 0x293114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x293118: 0x240500ff
    ctx->pc = 0x293118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x29311c: 0xc0b4156
    ctx->pc = 0x29311Cu;
    SET_GPR_U32(ctx, 31, 0x293124u);
    ctx->pc = 0x293120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293124u; }
    }
    if (ctx->pc != 0x293124u) { return; }
    ctx->pc = 0x293124u;
    // 0x293124: 0x8e020054
    ctx->pc = 0x293124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x293128: 0x2442ffff
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29312c: 0x1000000d
    ctx->pc = 0x29312Cu;
    {
        const bool branch_taken_0x29312c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x293130u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x29312c) {
            ctx->pc = 0x293164u;
            goto label_293164;
        }
    }
    ctx->pc = 0x293134u;
label_293134:
    // 0x293134: 0x5440000c
    ctx->pc = 0x293134u;
    {
        const bool branch_taken_0x293134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x293134) {
            ctx->pc = 0x293138u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x293168u;
            goto label_293168;
        }
    }
    ctx->pc = 0x29313Cu;
    // 0x29313c: 0x8e040008
    ctx->pc = 0x29313cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x293140: 0x2405ffff
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293144: 0x302d
    ctx->pc = 0x293144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293148: 0xc0b4126
    ctx->pc = 0x293148u;
    SET_GPR_U32(ctx, 31, 0x293150u);
    ctx->pc = 0x29314Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293150u; }
    }
    if (ctx->pc != 0x293150u) { return; }
    ctx->pc = 0x293150u;
    // 0x293150: 0x8e040008
    ctx->pc = 0x293150u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x293154: 0x282d
    ctx->pc = 0x293154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293158: 0xc0b4156
    ctx->pc = 0x293158u;
    SET_GPR_U32(ctx, 31, 0x293160u);
    ctx->pc = 0x29315Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293160u; }
    }
    if (ctx->pc != 0x293160u) { return; }
    ctx->pc = 0x293160u;
    // 0x293160: 0xae130054
    ctx->pc = 0x293160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
label_293164:
    // 0x293164: 0x26520001
    ctx->pc = 0x293164u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_293168:
    // 0x293168: 0x8e220004
    ctx->pc = 0x293168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29316c: 0x84420118
    ctx->pc = 0x29316cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x293170: 0x242102a
    ctx->pc = 0x293170u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x293174: 0x1440ffde
    ctx->pc = 0x293174u;
    {
        const bool branch_taken_0x293174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x293178u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x293174) {
            ctx->pc = 0x2930F0u;
            goto label_2930f0;
        }
    }
    ctx->pc = 0x29317Cu;
label_29317c:
    // 0x29317c: 0x86220b44
    ctx->pc = 0x29317cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2884)));
    // 0x293180: 0x1840000d
    ctx->pc = 0x293180u;
    {
        const bool branch_taken_0x293180 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x293184u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x293180) {
            ctx->pc = 0x2931B8u;
            goto label_2931b8;
        }
    }
    ctx->pc = 0x293188u;
    // 0x293188: 0x8e2400cc
    ctx->pc = 0x293188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x29318c: 0x2405fffc
    ctx->pc = 0x29318cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x293190: 0x8c4654f0
    ctx->pc = 0x293190u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 21744)));
    // 0x293194: 0xc0b4126
    ctx->pc = 0x293194u;
    SET_GPR_U32(ctx, 31, 0x29319Cu);
    ctx->pc = 0x293198u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29319Cu; }
    }
    if (ctx->pc != 0x29319Cu) { return; }
    ctx->pc = 0x29319Cu;
    // 0x29319c: 0x8e2400cc
    ctx->pc = 0x29319cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2931a0: 0x240500ff
    ctx->pc = 0x2931a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2931a4: 0xc0b4156
    ctx->pc = 0x2931A4u;
    SET_GPR_U32(ctx, 31, 0x2931ACu);
    ctx->pc = 0x2931A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931ACu; }
    }
    if (ctx->pc != 0x2931ACu) { return; }
    ctx->pc = 0x2931ACu;
    // 0x2931ac: 0x96220b44
    ctx->pc = 0x2931acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2884)));
    // 0x2931b0: 0x1000000e
    ctx->pc = 0x2931B0u;
    {
        const bool branch_taken_0x2931b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2931B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2931b0) {
            ctx->pc = 0x2931ECu;
            goto label_2931ec;
        }
    }
    ctx->pc = 0x2931B8u;
label_2931b8:
    // 0x2931b8: 0x86220b44
    ctx->pc = 0x2931b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2884)));
    // 0x2931bc: 0x5440000d
    ctx->pc = 0x2931BCu;
    {
        const bool branch_taken_0x2931bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2931bc) {
            ctx->pc = 0x2931C0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2892)));
            ctx->pc = 0x2931F4u;
            goto label_2931f4;
        }
    }
    ctx->pc = 0x2931C4u;
    // 0x2931c4: 0x8e2400cc
    ctx->pc = 0x2931c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2931c8: 0x2405ffff
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2931cc: 0x302d
    ctx->pc = 0x2931ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931d0: 0xc0b4126
    ctx->pc = 0x2931D0u;
    SET_GPR_U32(ctx, 31, 0x2931D8u);
    ctx->pc = 0x2931D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931D8u; }
    }
    if (ctx->pc != 0x2931D8u) { return; }
    ctx->pc = 0x2931D8u;
    // 0x2931d8: 0x8e2400cc
    ctx->pc = 0x2931d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2931dc: 0x282d
    ctx->pc = 0x2931dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2931e0: 0xc0b4156
    ctx->pc = 0x2931E0u;
    SET_GPR_U32(ctx, 31, 0x2931E8u);
    ctx->pc = 0x2931E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2931E8u; }
    }
    if (ctx->pc != 0x2931E8u) { return; }
    ctx->pc = 0x2931E8u;
    // 0x2931e8: 0x2402ffff
    ctx->pc = 0x2931e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2931ec:
    // 0x2931ec: 0xa6220b44
    ctx->pc = 0x2931ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2884), (uint16_t)GPR_U32(ctx, 2));
    // 0x2931f0: 0x86220b4c
    ctx->pc = 0x2931f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2892)));
label_2931f4:
    // 0x2931f4: 0x18400020
    ctx->pc = 0x2931F4u;
    {
        const bool branch_taken_0x2931f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2931F8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2892)));
        if (branch_taken_0x2931f4) {
            ctx->pc = 0x293278u;
            goto label_293278;
        }
    }
    ctx->pc = 0x2931FCu;
    // 0x2931fc: 0x3c020031
    ctx->pc = 0x2931fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x293200: 0x9442ffbc
    ctx->pc = 0x293200u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x293204: 0x621023
    ctx->pc = 0x293204u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293208: 0xa6220b4c
    ctx->pc = 0x293208u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2892), (uint16_t)GPR_U32(ctx, 2));
    // 0x29320c: 0x21400
    ctx->pc = 0x29320cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x293210: 0x5c400008
    ctx->pc = 0x293210u;
    {
        const bool branch_taken_0x293210 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x293210) {
            ctx->pc = 0x293214u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2892)));
            ctx->pc = 0x293234u;
            goto label_293234;
        }
    }
    ctx->pc = 0x293218u;
    // 0x293218: 0x8e2400cc
    ctx->pc = 0x293218u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x29321c: 0x2405ffff
    ctx->pc = 0x29321cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x293220: 0x302d
    ctx->pc = 0x293220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293224: 0xc0b4126
    ctx->pc = 0x293224u;
    SET_GPR_U32(ctx, 31, 0x29322Cu);
    ctx->pc = 0x293228u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29322Cu; }
    }
    if (ctx->pc != 0x29322Cu) { return; }
    ctx->pc = 0x29322Cu;
    // 0x29322c: 0x10000012
    ctx->pc = 0x29322Cu;
    {
        const bool branch_taken_0x29322c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x293230u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 2892), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x29322c) {
            ctx->pc = 0x293278u;
            goto label_293278;
        }
    }
    ctx->pc = 0x293234u;
label_293234:
    // 0x293234: 0x284200b4
    ctx->pc = 0x293234u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 180));
    // 0x293238: 0x1040000a
    ctx->pc = 0x293238u;
    {
        const bool branch_taken_0x293238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29323Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2892)));
        if (branch_taken_0x293238) {
            ctx->pc = 0x293264u;
            goto label_293264;
        }
    }
    ctx->pc = 0x293240u;
    // 0x293240: 0x30620008
    ctx->pc = 0x293240u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
    // 0x293244: 0x10400007
    ctx->pc = 0x293244u;
    {
        const bool branch_taken_0x293244 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293248u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x293244) {
            ctx->pc = 0x293264u;
            goto label_293264;
        }
    }
    ctx->pc = 0x29324Cu;
    // 0x29324c: 0x8e2400cc
    ctx->pc = 0x29324cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x293250: 0x302d
    ctx->pc = 0x293250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293254: 0xc0b4126
    ctx->pc = 0x293254u;
    SET_GPR_U32(ctx, 31, 0x29325Cu);
    ctx->pc = 0x293258u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29325Cu; }
    }
    if (ctx->pc != 0x29325Cu) { return; }
    ctx->pc = 0x29325Cu;
    // 0x29325c: 0x10000007
    ctx->pc = 0x29325Cu;
    {
        const bool branch_taken_0x29325c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x293260u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2886)));
        if (branch_taken_0x29325c) {
            ctx->pc = 0x29327Cu;
            goto label_29327c;
        }
    }
    ctx->pc = 0x293264u;
label_293264:
    // 0x293264: 0x8e2400cc
    ctx->pc = 0x293264u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x293268: 0x2405fffc
    ctx->pc = 0x293268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x29326c: 0x8e260b48
    ctx->pc = 0x29326cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 2888)));
    // 0x293270: 0xc0b4126
    ctx->pc = 0x293270u;
    SET_GPR_U32(ctx, 31, 0x293278u);
    ctx->pc = 0x293274u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293278u; }
    }
    if (ctx->pc != 0x293278u) { return; }
    ctx->pc = 0x293278u;
label_293278:
    // 0x293278: 0x96220b46
    ctx->pc = 0x293278u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2886)));
label_29327c:
    // 0x29327c: 0x86250b46
    ctx->pc = 0x29327cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2886)));
    // 0x293280: 0x18a0000a
    ctx->pc = 0x293280u;
    {
        const bool branch_taken_0x293280 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x293284u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
        if (branch_taken_0x293280) {
            ctx->pc = 0x2932ACu;
            goto label_2932ac;
        }
    }
    ctx->pc = 0x293288u;
    // 0x293288: 0xa6220b46
    ctx->pc = 0x293288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2886), (uint16_t)GPR_U32(ctx, 2));
    // 0x29328c: 0x21400
    ctx->pc = 0x29328cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x293290: 0x4430004
    ctx->pc = 0x293290u;
    {
        const bool branch_taken_0x293290 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x293290) {
            ctx->pc = 0x293294u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
            ctx->pc = 0x2932A4u;
            goto label_2932a4;
        }
    }
    ctx->pc = 0x293298u;
    // 0x293298: 0xa6200b46
    ctx->pc = 0x293298u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2886), (uint16_t)GPR_U32(ctx, 0));
    // 0x29329c: 0x282d
    ctx->pc = 0x29329cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932a0: 0x8e2400cc
    ctx->pc = 0x2932a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2932a4:
    // 0x2932a4: 0xc0b4156
    ctx->pc = 0x2932A4u;
    SET_GPR_U32(ctx, 31, 0x2932ACu);
    ctx->pc = 0x2932A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2932ACu; }
    }
    if (ctx->pc != 0x2932ACu) { return; }
    ctx->pc = 0x2932ACu;
label_2932ac:
    // 0x2932ac: 0x8e2400e8
    ctx->pc = 0x2932acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x2932b0: 0x54800001
    ctx->pc = 0x2932B0u;
    {
        const bool branch_taken_0x2932b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2932b0) {
            ctx->pc = 0x2932B4u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 22));
            ctx->pc = 0x2932B8u;
            goto label_2932b8;
        }
    }
    ctx->pc = 0x2932B8u;
label_2932b8:
    // 0x2932b8: 0xdfbf0070
    ctx->pc = 0x2932b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2932bc: 0xdfb60060
    ctx->pc = 0x2932bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2932c0: 0xdfb50050
    ctx->pc = 0x2932c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2932c4: 0xdfb40040
    ctx->pc = 0x2932c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2932c8: 0xdfb30030
    ctx->pc = 0x2932c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2932cc: 0xdfb20020
    ctx->pc = 0x2932ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2932d0: 0xdfb10010
    ctx->pc = 0x2932d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2932d4: 0xdfb00000
    ctx->pc = 0x2932d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2932d8: 0x3e00008
    ctx->pc = 0x2932D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2932DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2930D0u: goto label_2930d0;
            case 0x2930F0u: goto label_2930f0;
            case 0x293134u: goto label_293134;
            case 0x293164u: goto label_293164;
            case 0x293168u: goto label_293168;
            case 0x29317Cu: goto label_29317c;
            case 0x2931B8u: goto label_2931b8;
            case 0x2931ECu: goto label_2931ec;
            case 0x2931F4u: goto label_2931f4;
            case 0x293234u: goto label_293234;
            case 0x293264u: goto label_293264;
            case 0x293278u: goto label_293278;
            case 0x29327Cu: goto label_29327c;
            case 0x2932A4u: goto label_2932a4;
            case 0x2932ACu: goto label_2932ac;
            case 0x2932B8u: goto label_2932b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2932E0u;
}
