#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetSprTex0__Fi
// Address: 0x2172b0 - 0x2173a8
void SetSprTex0__Fi_0x2172b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetSprTex0__Fi");


    ctx->pc = 0x2172b0u;

    // 0x2172b0: 0x27bdffb0
    ctx->pc = 0x2172b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2172b4: 0x7fbf0040
    ctx->pc = 0x2172b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2172b8: 0x7fb30030
    ctx->pc = 0x2172b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2172bc: 0x7fb20020
    ctx->pc = 0x2172bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2172c0: 0x7fb10010
    ctx->pc = 0x2172c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2172c4: 0x7fb00000
    ctx->pc = 0x2172c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2172c8: 0x70808628
    ctx->pc = 0x2172c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2172cc: 0x3c020050
    ctx->pc = 0x2172ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2172d0: 0x2444e540
    ctx->pc = 0x2172d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x2172d4: 0xc086a0c
    ctx->pc = 0x2172D4u;
    SET_GPR_U32(ctx, 31, 0x2172DCu);
    ctx->pc = 0x2172D8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        getTexAdrs__11TexMgrClassFi_0x21a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172DCu; }
        else if (ctx->pc != 0x2172DCu) { ctx->pc = 0x2172DCu; }
    }
    if (ctx->pc != 0x2172DCu) { return; }
    ctx->pc = 0x2172DCu;
    // 0x2172dc: 0x70408e28
    ctx->pc = 0x2172dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2172e0: 0x3c0101fa
    ctx->pc = 0x2172e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)506 << 16));
    // 0x2172e4: 0x101080
    ctx->pc = 0x2172e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2172e8: 0x72002e28
    ctx->pc = 0x2172e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2172ec: 0x3421e064
    ctx->pc = 0x2172ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 57444));
    // 0x2172f0: 0x418021
    ctx->pc = 0x2172f0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2172f4: 0x3c0101fb
    ctx->pc = 0x2172f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x2172f8: 0x410821
    ctx->pc = 0x2172f8u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2172fc: 0x8e030000
    ctx->pc = 0x2172fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217300: 0x3c020050
    ctx->pc = 0x217300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x217304: 0x8c3314cc
    ctx->pc = 0x217304u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 1), 5324)));
    // 0x217308: 0x2444e540
    ctx->pc = 0x217308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x21730c: 0xc086a1c
    ctx->pc = 0x21730Cu;
    SET_GPR_U32(ctx, 31, 0x217314u);
    ctx->pc = 0x217310u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 32));
    ctx->pc = 0x21A870u;
    {
        const uint32_t __entryPc = ctx->pc;
        getVTexBuf__11TexMgrClassFi_0x21a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217314u; }
        else if (ctx->pc != 0x217314u) { ctx->pc = 0x217314u; }
    }
    if (ctx->pc != 0x217314u) { return; }
    ctx->pc = 0x217314u;
    // 0x217314: 0x3c03004a
    ctx->pc = 0x217314u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x217318: 0x72202e28
    ctx->pc = 0x217318u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21731c: 0x72403628
    ctx->pc = 0x21731cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x217320: 0x72603e28
    ctx->pc = 0x217320u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x217324: 0x2464f738
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294965048));
    // 0x217328: 0xc06b740
    ctx->pc = 0x217328u;
    SET_GPR_U32(ctx, 31, 0x217330u);
    ctx->pc = 0x21732Cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ADD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSpriteSetTexInfoGI_0x1add00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217330u; }
        else if (ctx->pc != 0x217330u) { ctx->pc = 0x217330u; }
    }
    if (ctx->pc != 0x217330u) { return; }
    ctx->pc = 0x217330u;
    // 0x217330: 0x8e040000
    ctx->pc = 0x217330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217334: 0x3c03004a
    ctx->pc = 0x217334u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x217338: 0x2465f738
    ctx->pc = 0x217338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965048));
    // 0x21733c: 0x24070001
    ctx->pc = 0x21733cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217340: 0x2403ffff
    ctx->pc = 0x217340u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217344: 0x1000000e
    ctx->pc = 0x217344u;
    {
        const bool branch_taken_0x217344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217348u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x217344) {
            ctx->pc = 0x217380u;
            goto label_217380;
        }
    }
    ctx->pc = 0x21734Cu;
label_21734c:
    // 0x21734c: 0x8d040018
    ctx->pc = 0x21734cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x217350: 0x28810002
    ctx->pc = 0x217350u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 2));
    // 0x217354: 0x50200009
    ctx->pc = 0x217354u;
    {
        const bool branch_taken_0x217354 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x217354) {
            ctx->pc = 0x217358u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
            ctx->pc = 0x21737Cu;
            goto label_21737c;
        }
    }
    ctx->pc = 0x21735Cu;
    // 0x21735c: 0x8d060014
    ctx->pc = 0x21735cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x217360: 0x62080
    ctx->pc = 0x217360u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x217364: 0x862021
    ctx->pc = 0x217364u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x217368: 0x42100
    ctx->pc = 0x217368u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x21736c: 0xa42021
    ctx->pc = 0x21736cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x217370: 0xac870048
    ctx->pc = 0x217370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 7));
    // 0x217374: 0x0
    ctx->pc = 0x217374u;
    // NOP
    // 0x217378: 0x25080020
    ctx->pc = 0x217378u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
label_21737c:
    // 0x21737c: 0x0
    ctx->pc = 0x21737cu;
    // NOP
label_217380:
    // 0x217380: 0x85040002
    ctx->pc = 0x217380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x217384: 0x1483fff1
    ctx->pc = 0x217384u;
    {
        const bool branch_taken_0x217384 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x217384) {
            ctx->pc = 0x21734Cu;
            goto label_21734c;
        }
    }
    ctx->pc = 0x21738Cu;
    // 0x21738c: 0x7bbf0040
    ctx->pc = 0x21738cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217390: 0x7bb30030
    ctx->pc = 0x217390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217394: 0x7bb20020
    ctx->pc = 0x217394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217398: 0x7bb10010
    ctx->pc = 0x217398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21739c: 0x7bb00000
    ctx->pc = 0x21739cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2173a0: 0x3e00008
    ctx->pc = 0x2173A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2173A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21734Cu: goto label_21734c;
            case 0x21737Cu: goto label_21737c;
            case 0x217380u: goto label_217380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2173A8u;
}
