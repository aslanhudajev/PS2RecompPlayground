#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: guncon2_init__Fv
// Address: 0x1ed2e0 - 0x1ed440
void guncon2_init__Fv_0x1ed2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("guncon2_init__Fv");


    ctx->pc = 0x1ed2e0u;

    // 0x1ed2e0: 0x27bdffd0
    ctx->pc = 0x1ed2e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed2e4: 0x7fbf0020
    ctx->pc = 0x1ed2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ed2e8: 0x7fb10010
    ctx->pc = 0x1ed2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed2ec: 0xc07f254
    ctx->pc = 0x1ED2ECu;
    SET_GPR_U32(ctx, 31, 0x1ED2F4u);
    ctx->pc = 0x1ED2F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1FC950u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunInit__Fv_0x1fc950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED2F4u; }
        else if (ctx->pc != 0x1ED2F4u) { ctx->pc = 0x1ED2F4u; }
    }
    if (ctx->pc != 0x1ED2F4u) { return; }
    ctx->pc = 0x1ED2F4u;
    // 0x1ed2f4: 0x3c020fff
    ctx->pc = 0x1ed2f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1ed2f8: 0x3443ffff
    ctx->pc = 0x1ed2f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1ed2fc: 0x28610009
    ctx->pc = 0x1ed2fcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 9));
    // 0x1ed300: 0x14200009
    ctx->pc = 0x1ED300u;
    {
        const bool branch_taken_0x1ed300 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED304u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed300) {
            ctx->pc = 0x1ED328u;
            goto label_1ed328;
        }
    }
    ctx->pc = 0x1ED308u;
    // 0x1ed308: 0x3443fff7
    ctx->pc = 0x1ed308u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 65527));
label_1ed30c:
    // 0x1ed30c: 0x24840008
    ctx->pc = 0x1ed30cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x1ed310: 0x83102a
    ctx->pc = 0x1ed310u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1ed314: 0x0
    ctx->pc = 0x1ed314u;
    // NOP
    // 0x1ed318: 0x0
    ctx->pc = 0x1ed318u;
    // NOP
    // 0x1ed31c: 0x0
    ctx->pc = 0x1ed31cu;
    // NOP
    // 0x1ed320: 0x1440fffa
    ctx->pc = 0x1ED320u;
    {
        const bool branch_taken_0x1ed320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ed320) {
            ctx->pc = 0x1ED30Cu;
            goto label_1ed30c;
        }
    }
    ctx->pc = 0x1ED328u;
label_1ed328:
    // 0x1ed328: 0x3c010fff
    ctx->pc = 0x1ed328u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4095 << 16));
    // 0x1ed32c: 0x3421ffff
    ctx->pc = 0x1ed32cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65535));
    // 0x1ed330: 0x81082a
    ctx->pc = 0x1ed330u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 1)));
    // 0x1ed334: 0x1020000a
    ctx->pc = 0x1ED334u;
    {
        const bool branch_taken_0x1ed334 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed334) {
            ctx->pc = 0x1ED360u;
            goto label_1ed360;
        }
    }
    ctx->pc = 0x1ED33Cu;
    // 0x1ed33c: 0x3c020fff
    ctx->pc = 0x1ed33cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1ed340: 0x3443ffff
    ctx->pc = 0x1ed340u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 65535));
label_1ed344:
    // 0x1ed344: 0x24840001
    ctx->pc = 0x1ed344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ed348: 0x83102a
    ctx->pc = 0x1ed348u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1ed34c: 0x0
    ctx->pc = 0x1ed34cu;
    // NOP
    // 0x1ed350: 0x0
    ctx->pc = 0x1ed350u;
    // NOP
    // 0x1ed354: 0x0
    ctx->pc = 0x1ed354u;
    // NOP
    // 0x1ed358: 0x1440fffa
    ctx->pc = 0x1ED358u;
    {
        const bool branch_taken_0x1ed358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ed358) {
            ctx->pc = 0x1ED344u;
            goto label_1ed344;
        }
    }
    ctx->pc = 0x1ED360u;
label_1ed360:
    // 0x1ed360: 0x3c020051
    ctx->pc = 0x1ed360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed364: 0xc07f278
    ctx->pc = 0x1ED364u;
    SET_GPR_U32(ctx, 31, 0x1ED36Cu);
    ctx->pc = 0x1ED368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 18496));
    ctx->pc = 0x1FC9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunGetInfo__FPUc_0x1fc9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED36Cu; }
        else if (ctx->pc != 0x1ED36Cu) { ctx->pc = 0x1ED36Cu; }
    }
    if (ctx->pc != 0x1ED36Cu) { return; }
    ctx->pc = 0x1ED36Cu;
    // 0x1ed36c: 0x1440002f
    ctx->pc = 0x1ED36Cu;
    {
        const bool branch_taken_0x1ed36c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED370u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed36c) {
            ctx->pc = 0x1ED42Cu;
            goto label_1ed42c;
        }
    }
    ctx->pc = 0x1ED374u;
    // 0x1ed374: 0xc07f2f4
    ctx->pc = 0x1ED374u;
    SET_GPR_U32(ctx, 31, 0x1ED37Cu);
    ctx->pc = 0x1FCBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunSync__Fi_0x1fcbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED37Cu; }
        else if (ctx->pc != 0x1ED37Cu) { ctx->pc = 0x1ED37Cu; }
    }
    if (ctx->pc != 0x1ED37Cu) { return; }
    ctx->pc = 0x1ED37Cu;
    // 0x1ed37c: 0x3c020051
    ctx->pc = 0x1ed37cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed380: 0x70008628
    ctx->pc = 0x1ed380u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ed384: 0x24514840
    ctx->pc = 0x1ed384u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 18496));
label_1ed388:
    // 0x1ed388: 0x92220002
    ctx->pc = 0x1ed388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1ed38c: 0x50400011
    ctx->pc = 0x1ED38Cu;
    {
        const bool branch_taken_0x1ed38c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed38c) {
            ctx->pc = 0x1ED390u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1ED3D4u;
            goto label_1ed3d4;
        }
    }
    ctx->pc = 0x1ED394u;
    // 0x1ed394: 0x3c020051
    ctx->pc = 0x1ed394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed398: 0x72002628
    ctx->pc = 0x1ed398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ed39c: 0xc07f298
    ctx->pc = 0x1ED39Cu;
    SET_GPR_U32(ctx, 31, 0x1ED3A4u);
    ctx->pc = 0x1ED3A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 18752));
    ctx->pc = 0x1FCA60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunRead__FUiPc_0x1fca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3A4u; }
        else if (ctx->pc != 0x1ED3A4u) { ctx->pc = 0x1ED3A4u; }
    }
    if (ctx->pc != 0x1ED3A4u) { return; }
    ctx->pc = 0x1ED3A4u;
    // 0x1ed3a4: 0x1440000a
    ctx->pc = 0x1ED3A4u;
    {
        const bool branch_taken_0x1ed3a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED3A8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed3a4) {
            ctx->pc = 0x1ED3D0u;
            goto label_1ed3d0;
        }
    }
    ctx->pc = 0x1ED3ACu;
    // 0x1ed3ac: 0xc07f2f4
    ctx->pc = 0x1ED3ACu;
    SET_GPR_U32(ctx, 31, 0x1ED3B4u);
    ctx->pc = 0x1FCBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunSync__Fi_0x1fcbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3B4u; }
        else if (ctx->pc != 0x1ED3B4u) { ctx->pc = 0x1ED3B4u; }
    }
    if (ctx->pc != 0x1ED3B4u) { return; }
    ctx->pc = 0x1ED3B4u;
    // 0x1ed3b4: 0x3c010051
    ctx->pc = 0x1ed3b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed3b8: 0x80224940
    ctx->pc = 0x1ed3b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18752)));
    // 0x1ed3bc: 0x10400004
    ctx->pc = 0x1ED3BCu;
    {
        const bool branch_taken_0x1ed3bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED3C0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed3bc) {
            ctx->pc = 0x1ED3D0u;
            goto label_1ed3d0;
        }
    }
    ctx->pc = 0x1ED3C4u;
    // 0x1ed3c4: 0xc07b660
    ctx->pc = 0x1ED3C4u;
    SET_GPR_U32(ctx, 31, 0x1ED3CCu);
    ctx->pc = 0x1ED3C8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3CCu; }
        else if (ctx->pc != 0x1ED3CCu) { ctx->pc = 0x1ED3CCu; }
    }
    if (ctx->pc != 0x1ED3CCu) { return; }
    ctx->pc = 0x1ED3CCu;
    // 0x1ed3cc: 0x0
    ctx->pc = 0x1ed3ccu;
    // NOP
label_1ed3d0:
    // 0x1ed3d0: 0x26100001
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1ed3d4:
    // 0x1ed3d4: 0x2a020002
    ctx->pc = 0x1ed3d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1ed3d8: 0x1440ffeb
    ctx->pc = 0x1ED3D8u;
    {
        const bool branch_taken_0x1ed3d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED3DCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1ed3d8) {
            ctx->pc = 0x1ED388u;
            goto label_1ed388;
        }
    }
    ctx->pc = 0x1ED3E0u;
    // 0x1ed3e0: 0x70008628
    ctx->pc = 0x1ed3e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ed3e4:
    // 0x1ed3e4: 0xc07b518
    ctx->pc = 0x1ED3E4u;
    SET_GPR_U32(ctx, 31, 0x1ED3ECu);
    ctx->pc = 0x1ED3E8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED3ECu; }
        else if (ctx->pc != 0x1ED3ECu) { ctx->pc = 0x1ED3ECu; }
    }
    if (ctx->pc != 0x1ED3ECu) { return; }
    ctx->pc = 0x1ED3ECu;
    // 0x1ed3ec: 0xac500000
    ctx->pc = 0x1ed3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1ed3f0: 0x24030140
    ctx->pc = 0x1ed3f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1ed3f4: 0xac43001c
    ctx->pc = 0x1ed3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1ed3f8: 0x240300e0
    ctx->pc = 0x1ed3f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ed3fc: 0xac430020
    ctx->pc = 0x1ed3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1ed400: 0x8c44001c
    ctx->pc = 0x1ed400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1ed404: 0x26100001
    ctx->pc = 0x1ed404u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ed408: 0x2a030002
    ctx->pc = 0x1ed408u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1ed40c: 0xac440004
    ctx->pc = 0x1ed40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1ed410: 0x8c440020
    ctx->pc = 0x1ed410u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ed414: 0xac440008
    ctx->pc = 0x1ed414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1ed418: 0xac400014
    ctx->pc = 0x1ed418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1ed41c: 0x1460fff1
    ctx->pc = 0x1ED41Cu;
    {
        const bool branch_taken_0x1ed41c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED420u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1ed41c) {
            ctx->pc = 0x1ED3E4u;
            goto label_1ed3e4;
        }
    }
    ctx->pc = 0x1ED424u;
    // 0x1ed424: 0x24030001
    ctx->pc = 0x1ed424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed428: 0xa3838e00
    ctx->pc = 0x1ed428u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938112), (uint8_t)GPR_U32(ctx, 3));
label_1ed42c:
    // 0x1ed42c: 0x7bbf0020
    ctx->pc = 0x1ed42cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed430: 0x7bb10010
    ctx->pc = 0x1ed430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed434: 0x7bb00000
    ctx->pc = 0x1ed434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed438: 0x3e00008
    ctx->pc = 0x1ED438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED43Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED30Cu: goto label_1ed30c;
            case 0x1ED328u: goto label_1ed328;
            case 0x1ED344u: goto label_1ed344;
            case 0x1ED360u: goto label_1ed360;
            case 0x1ED388u: goto label_1ed388;
            case 0x1ED3D0u: goto label_1ed3d0;
            case 0x1ED3D4u: goto label_1ed3d4;
            case 0x1ED3E4u: goto label_1ed3e4;
            case 0x1ED42Cu: goto label_1ed42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED440u;
}
