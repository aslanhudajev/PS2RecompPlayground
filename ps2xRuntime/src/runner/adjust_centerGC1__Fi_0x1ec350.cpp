#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjust_centerGC1__Fi
// Address: 0x1ec350 - 0x1ec444
void adjust_centerGC1__Fi_0x1ec350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjust_centerGC1__Fi");


    ctx->pc = 0x1ec350u;

    // 0x1ec350: 0x41080
    ctx->pc = 0x1ec350u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec354: 0x441821
    ctx->pc = 0x1ec354u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec358: 0x27bdffc0
    ctx->pc = 0x1ec358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec35c: 0x31080
    ctx->pc = 0x1ec35cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec360: 0x7fbf0030
    ctx->pc = 0x1ec360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ec364: 0x7fb20020
    ctx->pc = 0x1ec364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec368: 0x7fb10010
    ctx->pc = 0x1ec368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec36c: 0x621021
    ctx->pc = 0x1ec36cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec370: 0x21880
    ctx->pc = 0x1ec370u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec374: 0x3c020050
    ctx->pc = 0x1ec374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec378: 0x70809628
    ctx->pc = 0x1ec378u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ec37c: 0x7fb00000
    ctx->pc = 0x1ec37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec380: 0x2442db70
    ctx->pc = 0x1ec380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x1ec384: 0x438021
    ctx->pc = 0x1ec384u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec388: 0x24040140
    ctx->pc = 0x1ec388u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1ec38c: 0x240500e0
    ctx->pc = 0x1ec38cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ec390: 0xc07b2c8
    ctx->pc = 0x1EC390u;
    SET_GPR_U32(ctx, 31, 0x1EC398u);
    ctx->pc = 0x1EC394u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ECB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_adjust_line__Fii_0x1ecb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC398u; }
        else if (ctx->pc != 0x1EC398u) { ctx->pc = 0x1EC398u; }
    }
    if (ctx->pc != 0x1EC398u) { return; }
    ctx->pc = 0x1EC398u;
    // 0x1ec398: 0x24020001
    ctx->pc = 0x1ec398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec39c: 0xaf828db0
    ctx->pc = 0x1ec39cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
    // 0x1ec3a0: 0x8202000e
    ctx->pc = 0x1ec3a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ec3a4: 0x10400008
    ctx->pc = 0x1EC3A4u;
    {
        const bool branch_taken_0x1ec3a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC3A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1ec3a4) {
            ctx->pc = 0x1EC3C8u;
            goto label_1ec3c8;
        }
    }
    ctx->pc = 0x1EC3ACu;
    // 0x1ec3ac: 0x244434f0
    ctx->pc = 0x1ec3acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ec3b0: 0x3c020002
    ctx->pc = 0x1ec3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ec3b4: 0x3445000c
    ctx->pc = 0x1ec3b4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1ec3b8: 0x70003628
    ctx->pc = 0x1ec3b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec3bc: 0x70003e28
    ctx->pc = 0x1ec3bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec3c0: 0xc086018
    ctx->pc = 0x1EC3C0u;
    SET_GPR_U32(ctx, 31, 0x1EC3C8u);
    ctx->pc = 0x1EC3C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3C8u; }
        else if (ctx->pc != 0x1EC3C8u) { ctx->pc = 0x1EC3C8u; }
    }
    if (ctx->pc != 0x1EC3C8u) { return; }
    ctx->pc = 0x1EC3C8u;
label_1ec3c8:
    // 0x1ec3c8: 0x8202000e
    ctx->pc = 0x1ec3c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ec3cc: 0x10400017
    ctx->pc = 0x1EC3CCu;
    {
        const bool branch_taken_0x1ec3cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC3D0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec3cc) {
            ctx->pc = 0x1EC42Cu;
            goto label_1ec42c;
        }
    }
    ctx->pc = 0x1EC3D4u;
    // 0x1ec3d4: 0x96030000
    ctx->pc = 0x1ec3d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec3d8: 0x3402ffff
    ctx->pc = 0x1ec3d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ec3dc: 0x10620012
    ctx->pc = 0x1EC3DCu;
    {
        const bool branch_taken_0x1ec3dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EC3E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1ec3dc) {
            ctx->pc = 0x1EC428u;
            goto label_1ec428;
        }
    }
    ctx->pc = 0x1EC3E4u;
    // 0x1ec3e4: 0x521021
    ctx->pc = 0x1ec3e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec3e8: 0x21080
    ctx->pc = 0x1ec3e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec3ec: 0x521021
    ctx->pc = 0x1ec3ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec3f0: 0x21840
    ctx->pc = 0x1ec3f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec3f4: 0x3c020050
    ctx->pc = 0x1ec3f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec3f8: 0x2442dc4a
    ctx->pc = 0x1ec3f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958154));
    // 0x1ec3fc: 0x431021
    ctx->pc = 0x1ec3fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec400: 0x84440000
    ctx->pc = 0x1ec400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec404: 0x24110001
    ctx->pc = 0x1ec404u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec408: 0x3c020050
    ctx->pc = 0x1ec408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec40c: 0x2442dc4c
    ctx->pc = 0x1ec40cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958156));
    // 0x1ec410: 0x431821
    ctx->pc = 0x1ec410u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec414: 0xaf848de4
    ctx->pc = 0x1ec414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 4));
    // 0x1ec418: 0x84630000
    ctx->pc = 0x1ec418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec41c: 0x24020008
    ctx->pc = 0x1ec41cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ec420: 0xaf838de8
    ctx->pc = 0x1ec420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 3));
    // 0x1ec424: 0xaf828dd0
    ctx->pc = 0x1ec424u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 2));
label_1ec428:
    // 0x1ec428: 0x72201628
    ctx->pc = 0x1ec428u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1ec42c:
    // 0x1ec42c: 0x7bbf0030
    ctx->pc = 0x1ec42cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec430: 0x7bb20020
    ctx->pc = 0x1ec430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec434: 0x7bb10010
    ctx->pc = 0x1ec434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec438: 0x7bb00000
    ctx->pc = 0x1ec438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec43c: 0x3e00008
    ctx->pc = 0x1EC43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC440u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC3C8u: goto label_1ec3c8;
            case 0x1EC428u: goto label_1ec428;
            case 0x1EC42Cu: goto label_1ec42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC444u;
}
