#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _vfprintf_r
// Address: 0x2fe678 - 0x2ffb90
void _vfprintf_r_0x2fe678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fe678u;

label_2fe678:
    // 0x2fe678: 0x27bdfd30
    ctx->pc = 0x2fe678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966576));
label_2fe67c:
    // 0x2fe67c: 0xffb40270
    ctx->pc = 0x2fe67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
label_2fe680:
    // 0x2fe680: 0xffb00230
    ctx->pc = 0x2fe680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
label_2fe684:
    // 0x2fe684: 0xe0a02d
    ctx->pc = 0x2fe684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fe688:
    // 0x2fe688: 0xafa501e8
    ctx->pc = 0x2fe688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
label_2fe68c:
    // 0x2fe68c: 0xc0802d
    ctx->pc = 0x2fe68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fe690:
    // 0x2fe690: 0xffbf02c0
    ctx->pc = 0x2fe690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
label_2fe694:
    // 0x2fe694: 0xffbe02b0
    ctx->pc = 0x2fe694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
label_2fe698:
    // 0x2fe698: 0xffb702a0
    ctx->pc = 0x2fe698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
label_2fe69c:
    // 0x2fe69c: 0xffb60290
    ctx->pc = 0x2fe69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
label_2fe6a0:
    // 0x2fe6a0: 0xffb50280
    ctx->pc = 0x2fe6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
label_2fe6a4:
    // 0x2fe6a4: 0xffb30260
    ctx->pc = 0x2fe6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
label_2fe6a8:
    // 0x2fe6a8: 0xffb20250
    ctx->pc = 0x2fe6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
label_2fe6ac:
    // 0x2fe6ac: 0xffb10240
    ctx->pc = 0x2fe6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
label_2fe6b0:
    // 0x2fe6b0: 0xc0c0782
label_2fe6b4:
    if (ctx->pc == 0x2FE6B4u) {
        ctx->pc = 0x2FE6B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
        ctx->pc = 0x2FE6B8u;
        goto label_2fe6b8;
    }
    ctx->pc = 0x2FE6B0u;
    SET_GPR_U32(ctx, 31, 0x2FE6B8u);
    ctx->pc = 0x2FE6B4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    ctx->pc = 0x301E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        localeconv_0x301e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6B8u; }
    }
    if (ctx->pc != 0x2FE6B8u) { return; }
    ctx->pc = 0x2FE6B8u;
label_2fe6b8:
    // 0x2fe6b8: 0x8c420000
    ctx->pc = 0x2fe6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe6bc:
    // 0x2fe6bc: 0xafa201f8
    ctx->pc = 0x2fe6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_2fe6c0:
    // 0x2fe6c0: 0x8fa201e8
    ctx->pc = 0x2fe6c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2fe6c4:
    // 0x2fe6c4: 0x9443000c
    ctx->pc = 0x2fe6c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_2fe6c8:
    // 0x2fe6c8: 0x30620008
    ctx->pc = 0x2fe6c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_2fe6cc:
    // 0x2fe6cc: 0x10400005
label_2fe6d0:
    if (ctx->pc == 0x2FE6D0u) {
        ctx->pc = 0x2FE6D0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->pc = 0x2FE6D4u;
        goto label_2fe6d4;
    }
    ctx->pc = 0x2FE6CCu;
    {
        const bool branch_taken_0x2fe6cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE6D0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        if (branch_taken_0x2fe6cc) {
            ctx->pc = 0x2FE6E4u;
            goto label_2fe6e4;
        }
    }
    ctx->pc = 0x2FE6D4u;
label_2fe6d4:
    // 0x2fe6d4: 0x8fa401e8
    ctx->pc = 0x2fe6d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2fe6d8:
    // 0x2fe6d8: 0x8c820010
    ctx->pc = 0x2fe6d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2fe6dc:
    // 0x2fe6dc: 0x14400008
label_2fe6e0:
    if (ctx->pc == 0x2FE6E0u) {
        ctx->pc = 0x2FE6E0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
        ctx->pc = 0x2FE6E4u;
        goto label_2fe6e4;
    }
    ctx->pc = 0x2FE6DCu;
    {
        const bool branch_taken_0x2fe6dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FE6E0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
        if (branch_taken_0x2fe6dc) {
            ctx->pc = 0x2FE700u;
            goto label_2fe700;
        }
    }
    ctx->pc = 0x2FE6E4u;
label_2fe6e4:
    // 0x2fe6e4: 0xc0bffa0
label_2fe6e8:
    if (ctx->pc == 0x2FE6E8u) {
        ctx->pc = 0x2FE6E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FE6ECu;
        goto label_2fe6ec;
    }
    ctx->pc = 0x2FE6E4u;
    SET_GPR_U32(ctx, 31, 0x2FE6ECu);
    ctx->pc = 0x2FE6E8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x2FFE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___swsetup_0x2ffe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE6ECu; }
    }
    if (ctx->pc != 0x2FE6ECu) { return; }
    ctx->pc = 0x2FE6ECu;
label_2fe6ec:
    // 0x2fe6ec: 0x1440051c
label_2fe6f0:
    if (ctx->pc == 0x2FE6F0u) {
        ctx->pc = 0x2FE6F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2FE6F4u;
        goto label_2fe6f4;
    }
    ctx->pc = 0x2FE6ECu;
    {
        const bool branch_taken_0x2fe6ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FE6F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2fe6ec) {
            ctx->pc = 0x2FFB60u;
            goto label_2ffb60;
        }
    }
    ctx->pc = 0x2FE6F4u;
label_2fe6f4:
    // 0x2fe6f4: 0x8fa501e8
    ctx->pc = 0x2fe6f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2fe6f8:
    // 0x2fe6f8: 0x94a3000c
    ctx->pc = 0x2fe6f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_2fe6fc:
    // 0x2fe6fc: 0x3063001a
    ctx->pc = 0x2fe6fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
label_2fe700:
    // 0x2fe700: 0x2402000a
    ctx->pc = 0x2fe700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_2fe704:
    // 0x2fe704: 0x1462000a
label_2fe708:
    if (ctx->pc == 0x2FE708u) {
        ctx->pc = 0x2FE708u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FE70Cu;
        goto label_2fe70c;
    }
    ctx->pc = 0x2FE704u;
    {
        const bool branch_taken_0x2fe704 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FE708u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2fe704) {
            ctx->pc = 0x2FE730u;
            goto label_2fe730;
        }
    }
    ctx->pc = 0x2FE70Cu;
label_2fe70c:
    // 0x2fe70c: 0x8fa601e8
    ctx->pc = 0x2fe70cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2fe710:
    // 0x2fe710: 0x84c2000e
    ctx->pc = 0x2fe710u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
label_2fe714:
    // 0x2fe714: 0x4400006
label_2fe718:
    if (ctx->pc == 0x2FE718u) {
        ctx->pc = 0x2FE718u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE71Cu;
        goto label_2fe71c;
    }
    ctx->pc = 0x2FE714u;
    {
        const bool branch_taken_0x2fe714 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FE718u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fe714) {
            ctx->pc = 0x2FE730u;
            goto label_2fe730;
        }
    }
    ctx->pc = 0x2FE71Cu;
label_2fe71c:
    // 0x2fe71c: 0x200282d
    ctx->pc = 0x2fe71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe720:
    // 0x2fe720: 0xc0bf952
label_2fe724:
    if (ctx->pc == 0x2FE724u) {
        ctx->pc = 0x2FE724u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE728u;
        goto label_2fe728;
    }
    ctx->pc = 0x2FE720u;
    SET_GPR_U32(ctx, 31, 0x2FE728u);
    ctx->pc = 0x2FE724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FE548u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sbprintf_0x2fe548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE728u; }
    }
    if (ctx->pc != 0x2FE728u) { return; }
    ctx->pc = 0x2FE728u;
label_2fe728:
    // 0x2fe728: 0x1000050e
label_2fe72c:
    if (ctx->pc == 0x2FE72Cu) {
        ctx->pc = 0x2FE72Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->pc = 0x2FE730u;
        goto label_2fe730;
    }
    ctx->pc = 0x2FE728u;
    {
        const bool branch_taken_0x2fe728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE72Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        if (branch_taken_0x2fe728) {
            ctx->pc = 0x2FFB64u;
            goto label_2ffb64;
        }
    }
    ctx->pc = 0x2FE730u;
label_2fe730:
    // 0x2fe730: 0x27a201d4
    ctx->pc = 0x2fe730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 468));
label_2fe734:
    // 0x2fe734: 0x27a301d8
    ctx->pc = 0x2fe734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 472));
label_2fe738:
    // 0x2fe738: 0xafa00018
    ctx->pc = 0x2fe738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2fe73c:
    // 0x2fe73c: 0xafb10010
    ctx->pc = 0x2fe73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_2fe740:
    // 0x2fe740: 0xafa00014
    ctx->pc = 0x2fe740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2fe744:
    // 0x2fe744: 0xafb001ec
    ctx->pc = 0x2fe744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
label_2fe748:
    // 0x2fe748: 0xafa001f0
    ctx->pc = 0x2fe748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_2fe74c:
    // 0x2fe74c: 0xafa20218
    ctx->pc = 0x2fe74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_2fe750:
    // 0x2fe750: 0xafa3021c
    ctx->pc = 0x2fe750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
label_2fe754:
    // 0x2fe754: 0x0
    ctx->pc = 0x2fe754u;
    // NOP
label_2fe758:
    // 0x2fe758: 0x8fb301ec
    ctx->pc = 0x2fe758u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe75c:
    // 0x2fe75c: 0x24120025
    ctx->pc = 0x2fe75cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 37));
label_2fe760:
    // 0x2fe760: 0x3c05003a
    ctx->pc = 0x2fe760u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_2fe764:
    // 0x2fe764: 0x3c06003a
    ctx->pc = 0x2fe764u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
label_2fe768:
    // 0x2fe768: 0x8ca43dec
    ctx->pc = 0x2fe768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 15852)));
label_2fe76c:
    // 0x2fe76c: 0x8cc74248
    ctx->pc = 0x2fe76cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 16968)));
label_2fe770:
    // 0x2fe770: 0x8fa50218
    ctx->pc = 0x2fe770u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_2fe774:
    // 0x2fe774: 0x8fa601ec
    ctx->pc = 0x2fe774u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe778:
    // 0x2fe778: 0xc0c07f8
label_2fe77c:
    if (ctx->pc == 0x2FE77Cu) {
        ctx->pc = 0x2FE77Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->pc = 0x2FE780u;
        goto label_2fe780;
    }
    ctx->pc = 0x2FE778u;
    SET_GPR_U32(ctx, 31, 0x2FE780u);
    ctx->pc = 0x2FE77Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 540)));
    ctx->pc = 0x301FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbtowc_r_0x301fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE780u; }
    }
    if (ctx->pc != 0x2FE780u) { return; }
    ctx->pc = 0x2FE780u;
label_2fe780:
    // 0x2fe780: 0x40802d
    ctx->pc = 0x2fe780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe784:
    // 0x2fe784: 0x1a000007
label_2fe788:
    if (ctx->pc == 0x2FE788u) {
        ctx->pc = 0x2FE788u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->pc = 0x2FE78Cu;
        goto label_2fe78c;
    }
    ctx->pc = 0x2FE784u;
    {
        const bool branch_taken_0x2fe784 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FE788u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        if (branch_taken_0x2fe784) {
            ctx->pc = 0x2FE7A4u;
            goto label_2fe7a4;
        }
    }
    ctx->pc = 0x2FE78Cu;
label_2fe78c:
    // 0x2fe78c: 0x8fa201d4
    ctx->pc = 0x2fe78cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2fe790:
    // 0x2fe790: 0x701821
    ctx->pc = 0x2fe790u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2fe794:
    // 0x2fe794: 0x1452fff2
label_2fe798:
    if (ctx->pc == 0x2FE798u) {
        ctx->pc = 0x2FE798u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->pc = 0x2FE79Cu;
        goto label_2fe79c;
    }
    ctx->pc = 0x2FE794u;
    {
        const bool branch_taken_0x2fe794 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x2FE798u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        if (branch_taken_0x2fe794) {
            ctx->pc = 0x2FE760u;
            goto label_2fe760;
        }
    }
    ctx->pc = 0x2FE79Cu;
label_2fe79c:
    // 0x2fe79c: 0x2463ffff
    ctx->pc = 0x2fe79cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2fe7a0:
    // 0x2fe7a0: 0xafa301ec
    ctx->pc = 0x2fe7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_2fe7a4:
    // 0x2fe7a4: 0x8fa401ec
    ctx->pc = 0x2fe7a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe7a8:
    // 0x2fe7a8: 0x939023
    ctx->pc = 0x2fe7a8u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2fe7ac:
    // 0x2fe7ac: 0x12400014
label_2fe7b0:
    if (ctx->pc == 0x2FE7B0u) {
        ctx->pc = 0x2FE7B4u;
        goto label_2fe7b4;
    }
    ctx->pc = 0x2FE7ACu;
    {
        const bool branch_taken_0x2fe7ac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x2fe7ac) {
            ctx->pc = 0x2FE800u;
            goto label_2fe800;
        }
    }
    ctx->pc = 0x2FE7B4u;
label_2fe7b4:
    // 0x2fe7b4: 0xae320004
    ctx->pc = 0x2fe7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_2fe7b8:
    // 0x2fe7b8: 0xae330000
    ctx->pc = 0x2fe7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2fe7bc:
    // 0x2fe7bc: 0x26310008
    ctx->pc = 0x2fe7bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2fe7c0:
    // 0x2fe7c0: 0x8fa20018
    ctx->pc = 0x2fe7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fe7c4:
    // 0x2fe7c4: 0x8fa30014
    ctx->pc = 0x2fe7c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2fe7c8:
    // 0x2fe7c8: 0x521021
    ctx->pc = 0x2fe7c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2fe7cc:
    // 0x2fe7cc: 0x24630001
    ctx->pc = 0x2fe7ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2fe7d0:
    // 0x2fe7d0: 0xafa20018
    ctx->pc = 0x2fe7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2fe7d4:
    // 0x2fe7d4: 0x28640008
    ctx->pc = 0x2fe7d4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_2fe7d8:
    // 0x2fe7d8: 0x14800006
label_2fe7dc:
    if (ctx->pc == 0x2FE7DCu) {
        ctx->pc = 0x2FE7DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2FE7E0u;
        goto label_2fe7e0;
    }
    ctx->pc = 0x2FE7D8u;
    {
        const bool branch_taken_0x2fe7d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FE7DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x2fe7d8) {
            ctx->pc = 0x2FE7F4u;
            goto label_2fe7f4;
        }
    }
    ctx->pc = 0x2FE7E0u;
label_2fe7e0:
    // 0x2fe7e0: 0x8fa401e8
    ctx->pc = 0x2fe7e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2fe7e4:
    // 0x2fe7e4: 0xc0bf940
label_2fe7e8:
    if (ctx->pc == 0x2FE7E8u) {
        ctx->pc = 0x2FE7E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FE7ECu;
        goto label_2fe7ec;
    }
    ctx->pc = 0x2FE7E4u;
    SET_GPR_U32(ctx, 31, 0x2FE7ECu);
    ctx->pc = 0x2FE7E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE7ECu; }
    }
    if (ctx->pc != 0x2FE7ECu) { return; }
    ctx->pc = 0x2FE7ECu;
label_2fe7ec:
    // 0x2fe7ec: 0x144004d6
label_2fe7f0:
    if (ctx->pc == 0x2FE7F0u) {
        ctx->pc = 0x2FE7F0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FE7F4u;
        goto label_2fe7f4;
    }
    ctx->pc = 0x2FE7ECu;
    {
        const bool branch_taken_0x2fe7ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FE7F0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2fe7ec) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FE7F4u;
label_2fe7f4:
    // 0x2fe7f4: 0x8fa501f0
    ctx->pc = 0x2fe7f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2fe7f8:
    // 0x2fe7f8: 0xb22821
    ctx->pc = 0x2fe7f8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_2fe7fc:
    // 0x2fe7fc: 0xafa501f0
    ctx->pc = 0x2fe7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_2fe800:
    // 0x2fe800: 0x1a0004c9
label_2fe804:
    if (ctx->pc == 0x2FE804u) {
        ctx->pc = 0x2FE804u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->pc = 0x2FE808u;
        goto label_2fe808;
    }
    ctx->pc = 0x2FE800u;
    {
        const bool branch_taken_0x2fe800 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FE804u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        if (branch_taken_0x2fe800) {
            ctx->pc = 0x2FFB28u;
            goto label_2ffb28;
        }
    }
    ctx->pc = 0x2FE808u;
label_2fe808:
    // 0x2fe808: 0xf02d
    ctx->pc = 0x2fe808u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe80c:
    // 0x2fe80c: 0xafa0020c
    ctx->pc = 0x2fe80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
label_2fe810:
    // 0x2fe810: 0x2412ffff
    ctx->pc = 0x2fe810u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fe814:
    // 0x2fe814: 0x24c60001
    ctx->pc = 0x2fe814u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_2fe818:
    // 0x2fe818: 0xafa001f4
    ctx->pc = 0x2fe818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
label_2fe81c:
    // 0x2fe81c: 0xafa601ec
    ctx->pc = 0x2fe81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
label_2fe820:
    // 0x2fe820: 0xa3a001d1
    ctx->pc = 0x2fe820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2fe824:
    // 0x2fe824: 0x10000005
label_2fe828:
    if (ctx->pc == 0x2FE828u) {
        ctx->pc = 0x2FE828u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x2FE82Cu;
        goto label_2fe82c;
    }
    ctx->pc = 0x2FE824u;
    {
        const bool branch_taken_0x2fe824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE828u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x2fe824) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE82Cu;
label_2fe82c:
    // 0x2fe82c: 0x10000003
label_2fe830:
    if (ctx->pc == 0x2FE830u) {
        ctx->pc = 0x2FE830u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2FE834u;
        goto label_2fe834;
    }
    ctx->pc = 0x2FE82Cu;
    {
        const bool branch_taken_0x2fe82c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE830u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x2fe82c) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE834u;
label_2fe834:
    // 0x2fe834: 0x8fa301ec
    ctx->pc = 0x2fe834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe838:
    // 0x2fe838: 0x90640000
    ctx->pc = 0x2fe838u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2fe83c:
    // 0x2fe83c: 0x41600
    ctx->pc = 0x2fe83cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_2fe840:
    // 0x2fe840: 0x8fa401ec
    ctx->pc = 0x2fe840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe844:
    // 0x2fe844: 0x2be03
    ctx->pc = 0x2fe844u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
label_2fe848:
    // 0x2fe848: 0x24840001
    ctx->pc = 0x2fe848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2fe84c:
    // 0x2fe84c: 0xafa401ec
    ctx->pc = 0x2fe84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_2fe850:
    // 0x2fe850: 0x26e3ffe0
    ctx->pc = 0x2fe850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 4294967264));
label_2fe854:
    // 0x2fe854: 0x2c620059
    ctx->pc = 0x2fe854u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 89));
label_2fe858:
    // 0x2fe858: 0x104001b6
label_2fe85c:
    if (ctx->pc == 0x2FE85Cu) {
        ctx->pc = 0x2FE85Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2FE860u;
        goto label_2fe860;
    }
    ctx->pc = 0x2FE858u;
    {
        const bool branch_taken_0x2fe858 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE85Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2fe858) {
            ctx->pc = 0x2FEF34u;
            goto label_2fef34;
        }
    }
    ctx->pc = 0x2FE860u;
label_2fe860:
    // 0x2fe860: 0x31880
    ctx->pc = 0x2fe860u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2fe864:
    // 0x2fe864: 0x2442aa00
    ctx->pc = 0x2fe864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945280));
label_2fe868:
    // 0x2fe868: 0x621821
    ctx->pc = 0x2fe868u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fe86c:
    // 0x2fe86c: 0x8c640000
    ctx->pc = 0x2fe86cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fe870:
    // 0x2fe870: 0x800008
label_2fe874:
    if (ctx->pc == 0x2FE874u) {
        ctx->pc = 0x2FE878u;
        goto label_2fe878;
    }
    ctx->pc = 0x2FE870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FE678u: goto label_2fe678;
            case 0x2FE67Cu: goto label_2fe67c;
            case 0x2FE680u: goto label_2fe680;
            case 0x2FE684u: goto label_2fe684;
            case 0x2FE688u: goto label_2fe688;
            case 0x2FE68Cu: goto label_2fe68c;
            case 0x2FE690u: goto label_2fe690;
            case 0x2FE694u: goto label_2fe694;
            case 0x2FE698u: goto label_2fe698;
            case 0x2FE69Cu: goto label_2fe69c;
            case 0x2FE6A0u: goto label_2fe6a0;
            case 0x2FE6A4u: goto label_2fe6a4;
            case 0x2FE6A8u: goto label_2fe6a8;
            case 0x2FE6ACu: goto label_2fe6ac;
            case 0x2FE6B0u: goto label_2fe6b0;
            case 0x2FE6B4u: goto label_2fe6b4;
            case 0x2FE6B8u: goto label_2fe6b8;
            case 0x2FE6BCu: goto label_2fe6bc;
            case 0x2FE6C0u: goto label_2fe6c0;
            case 0x2FE6C4u: goto label_2fe6c4;
            case 0x2FE6C8u: goto label_2fe6c8;
            case 0x2FE6CCu: goto label_2fe6cc;
            case 0x2FE6D0u: goto label_2fe6d0;
            case 0x2FE6D4u: goto label_2fe6d4;
            case 0x2FE6D8u: goto label_2fe6d8;
            case 0x2FE6DCu: goto label_2fe6dc;
            case 0x2FE6E0u: goto label_2fe6e0;
            case 0x2FE6E4u: goto label_2fe6e4;
            case 0x2FE6E8u: goto label_2fe6e8;
            case 0x2FE6ECu: goto label_2fe6ec;
            case 0x2FE6F0u: goto label_2fe6f0;
            case 0x2FE6F4u: goto label_2fe6f4;
            case 0x2FE6F8u: goto label_2fe6f8;
            case 0x2FE6FCu: goto label_2fe6fc;
            case 0x2FE700u: goto label_2fe700;
            case 0x2FE704u: goto label_2fe704;
            case 0x2FE708u: goto label_2fe708;
            case 0x2FE70Cu: goto label_2fe70c;
            case 0x2FE710u: goto label_2fe710;
            case 0x2FE714u: goto label_2fe714;
            case 0x2FE718u: goto label_2fe718;
            case 0x2FE71Cu: goto label_2fe71c;
            case 0x2FE720u: goto label_2fe720;
            case 0x2FE724u: goto label_2fe724;
            case 0x2FE728u: goto label_2fe728;
            case 0x2FE72Cu: goto label_2fe72c;
            case 0x2FE730u: goto label_2fe730;
            case 0x2FE734u: goto label_2fe734;
            case 0x2FE738u: goto label_2fe738;
            case 0x2FE73Cu: goto label_2fe73c;
            case 0x2FE740u: goto label_2fe740;
            case 0x2FE744u: goto label_2fe744;
            case 0x2FE748u: goto label_2fe748;
            case 0x2FE74Cu: goto label_2fe74c;
            case 0x2FE750u: goto label_2fe750;
            case 0x2FE754u: goto label_2fe754;
            case 0x2FE758u: goto label_2fe758;
            case 0x2FE75Cu: goto label_2fe75c;
            case 0x2FE760u: goto label_2fe760;
            case 0x2FE764u: goto label_2fe764;
            case 0x2FE768u: goto label_2fe768;
            case 0x2FE76Cu: goto label_2fe76c;
            case 0x2FE770u: goto label_2fe770;
            case 0x2FE774u: goto label_2fe774;
            case 0x2FE778u: goto label_2fe778;
            case 0x2FE77Cu: goto label_2fe77c;
            case 0x2FE780u: goto label_2fe780;
            case 0x2FE784u: goto label_2fe784;
            case 0x2FE788u: goto label_2fe788;
            case 0x2FE78Cu: goto label_2fe78c;
            case 0x2FE790u: goto label_2fe790;
            case 0x2FE794u: goto label_2fe794;
            case 0x2FE798u: goto label_2fe798;
            case 0x2FE79Cu: goto label_2fe79c;
            case 0x2FE7A0u: goto label_2fe7a0;
            case 0x2FE7A4u: goto label_2fe7a4;
            case 0x2FE7A8u: goto label_2fe7a8;
            case 0x2FE7ACu: goto label_2fe7ac;
            case 0x2FE7B0u: goto label_2fe7b0;
            case 0x2FE7B4u: goto label_2fe7b4;
            case 0x2FE7B8u: goto label_2fe7b8;
            case 0x2FE7BCu: goto label_2fe7bc;
            case 0x2FE7C0u: goto label_2fe7c0;
            case 0x2FE7C4u: goto label_2fe7c4;
            case 0x2FE7C8u: goto label_2fe7c8;
            case 0x2FE7CCu: goto label_2fe7cc;
            case 0x2FE7D0u: goto label_2fe7d0;
            case 0x2FE7D4u: goto label_2fe7d4;
            case 0x2FE7D8u: goto label_2fe7d8;
            case 0x2FE7DCu: goto label_2fe7dc;
            case 0x2FE7E0u: goto label_2fe7e0;
            case 0x2FE7E4u: goto label_2fe7e4;
            case 0x2FE7E8u: goto label_2fe7e8;
            case 0x2FE7ECu: goto label_2fe7ec;
            case 0x2FE7F0u: goto label_2fe7f0;
            case 0x2FE7F4u: goto label_2fe7f4;
            case 0x2FE7F8u: goto label_2fe7f8;
            case 0x2FE7FCu: goto label_2fe7fc;
            case 0x2FE800u: goto label_2fe800;
            case 0x2FE804u: goto label_2fe804;
            case 0x2FE808u: goto label_2fe808;
            case 0x2FE80Cu: goto label_2fe80c;
            case 0x2FE810u: goto label_2fe810;
            case 0x2FE814u: goto label_2fe814;
            case 0x2FE818u: goto label_2fe818;
            case 0x2FE81Cu: goto label_2fe81c;
            case 0x2FE820u: goto label_2fe820;
            case 0x2FE824u: goto label_2fe824;
            case 0x2FE828u: goto label_2fe828;
            case 0x2FE82Cu: goto label_2fe82c;
            case 0x2FE830u: goto label_2fe830;
            case 0x2FE834u: goto label_2fe834;
            case 0x2FE838u: goto label_2fe838;
            case 0x2FE83Cu: goto label_2fe83c;
            case 0x2FE840u: goto label_2fe840;
            case 0x2FE844u: goto label_2fe844;
            case 0x2FE848u: goto label_2fe848;
            case 0x2FE84Cu: goto label_2fe84c;
            case 0x2FE850u: goto label_2fe850;
            case 0x2FE854u: goto label_2fe854;
            case 0x2FE858u: goto label_2fe858;
            case 0x2FE85Cu: goto label_2fe85c;
            case 0x2FE860u: goto label_2fe860;
            case 0x2FE864u: goto label_2fe864;
            case 0x2FE868u: goto label_2fe868;
            case 0x2FE86Cu: goto label_2fe86c;
            case 0x2FE870u: goto label_2fe870;
            case 0x2FE874u: goto label_2fe874;
            case 0x2FE878u: goto label_2fe878;
            case 0x2FE87Cu: goto label_2fe87c;
            case 0x2FE880u: goto label_2fe880;
            case 0x2FE884u: goto label_2fe884;
            case 0x2FE888u: goto label_2fe888;
            case 0x2FE88Cu: goto label_2fe88c;
            case 0x2FE890u: goto label_2fe890;
            case 0x2FE894u: goto label_2fe894;
            case 0x2FE898u: goto label_2fe898;
            case 0x2FE89Cu: goto label_2fe89c;
            case 0x2FE8A0u: goto label_2fe8a0;
            case 0x2FE8A4u: goto label_2fe8a4;
            case 0x2FE8A8u: goto label_2fe8a8;
            case 0x2FE8ACu: goto label_2fe8ac;
            case 0x2FE8B0u: goto label_2fe8b0;
            case 0x2FE8B4u: goto label_2fe8b4;
            case 0x2FE8B8u: goto label_2fe8b8;
            case 0x2FE8BCu: goto label_2fe8bc;
            case 0x2FE8C0u: goto label_2fe8c0;
            case 0x2FE8C4u: goto label_2fe8c4;
            case 0x2FE8C8u: goto label_2fe8c8;
            case 0x2FE8CCu: goto label_2fe8cc;
            case 0x2FE8D0u: goto label_2fe8d0;
            case 0x2FE8D4u: goto label_2fe8d4;
            case 0x2FE8D8u: goto label_2fe8d8;
            case 0x2FE8DCu: goto label_2fe8dc;
            case 0x2FE8E0u: goto label_2fe8e0;
            case 0x2FE8E4u: goto label_2fe8e4;
            case 0x2FE8E8u: goto label_2fe8e8;
            case 0x2FE8ECu: goto label_2fe8ec;
            case 0x2FE8F0u: goto label_2fe8f0;
            case 0x2FE8F4u: goto label_2fe8f4;
            case 0x2FE8F8u: goto label_2fe8f8;
            case 0x2FE8FCu: goto label_2fe8fc;
            case 0x2FE900u: goto label_2fe900;
            case 0x2FE904u: goto label_2fe904;
            case 0x2FE908u: goto label_2fe908;
            case 0x2FE90Cu: goto label_2fe90c;
            case 0x2FE910u: goto label_2fe910;
            case 0x2FE914u: goto label_2fe914;
            case 0x2FE918u: goto label_2fe918;
            case 0x2FE91Cu: goto label_2fe91c;
            case 0x2FE920u: goto label_2fe920;
            case 0x2FE924u: goto label_2fe924;
            case 0x2FE928u: goto label_2fe928;
            case 0x2FE92Cu: goto label_2fe92c;
            case 0x2FE930u: goto label_2fe930;
            case 0x2FE934u: goto label_2fe934;
            case 0x2FE938u: goto label_2fe938;
            case 0x2FE93Cu: goto label_2fe93c;
            case 0x2FE940u: goto label_2fe940;
            case 0x2FE944u: goto label_2fe944;
            case 0x2FE948u: goto label_2fe948;
            case 0x2FE94Cu: goto label_2fe94c;
            case 0x2FE950u: goto label_2fe950;
            case 0x2FE954u: goto label_2fe954;
            case 0x2FE958u: goto label_2fe958;
            case 0x2FE95Cu: goto label_2fe95c;
            case 0x2FE960u: goto label_2fe960;
            case 0x2FE964u: goto label_2fe964;
            case 0x2FE968u: goto label_2fe968;
            case 0x2FE96Cu: goto label_2fe96c;
            case 0x2FE970u: goto label_2fe970;
            case 0x2FE974u: goto label_2fe974;
            case 0x2FE978u: goto label_2fe978;
            case 0x2FE97Cu: goto label_2fe97c;
            case 0x2FE980u: goto label_2fe980;
            case 0x2FE984u: goto label_2fe984;
            case 0x2FE988u: goto label_2fe988;
            case 0x2FE98Cu: goto label_2fe98c;
            case 0x2FE990u: goto label_2fe990;
            case 0x2FE994u: goto label_2fe994;
            case 0x2FE998u: goto label_2fe998;
            case 0x2FE99Cu: goto label_2fe99c;
            case 0x2FE9A0u: goto label_2fe9a0;
            case 0x2FE9A4u: goto label_2fe9a4;
            case 0x2FE9A8u: goto label_2fe9a8;
            case 0x2FE9ACu: goto label_2fe9ac;
            case 0x2FE9B0u: goto label_2fe9b0;
            case 0x2FE9B4u: goto label_2fe9b4;
            case 0x2FE9B8u: goto label_2fe9b8;
            case 0x2FE9BCu: goto label_2fe9bc;
            case 0x2FE9C0u: goto label_2fe9c0;
            case 0x2FE9C4u: goto label_2fe9c4;
            case 0x2FE9C8u: goto label_2fe9c8;
            case 0x2FE9CCu: goto label_2fe9cc;
            case 0x2FE9D0u: goto label_2fe9d0;
            case 0x2FE9D4u: goto label_2fe9d4;
            case 0x2FE9D8u: goto label_2fe9d8;
            case 0x2FE9DCu: goto label_2fe9dc;
            case 0x2FE9E0u: goto label_2fe9e0;
            case 0x2FE9E4u: goto label_2fe9e4;
            case 0x2FE9E8u: goto label_2fe9e8;
            case 0x2FE9ECu: goto label_2fe9ec;
            case 0x2FE9F0u: goto label_2fe9f0;
            case 0x2FE9F4u: goto label_2fe9f4;
            case 0x2FE9F8u: goto label_2fe9f8;
            case 0x2FE9FCu: goto label_2fe9fc;
            case 0x2FEA00u: goto label_2fea00;
            case 0x2FEA04u: goto label_2fea04;
            case 0x2FEA08u: goto label_2fea08;
            case 0x2FEA0Cu: goto label_2fea0c;
            case 0x2FEA10u: goto label_2fea10;
            case 0x2FEA14u: goto label_2fea14;
            case 0x2FEA18u: goto label_2fea18;
            case 0x2FEA1Cu: goto label_2fea1c;
            case 0x2FEA20u: goto label_2fea20;
            case 0x2FEA24u: goto label_2fea24;
            case 0x2FEA28u: goto label_2fea28;
            case 0x2FEA2Cu: goto label_2fea2c;
            case 0x2FEA30u: goto label_2fea30;
            case 0x2FEA34u: goto label_2fea34;
            case 0x2FEA38u: goto label_2fea38;
            case 0x2FEA3Cu: goto label_2fea3c;
            case 0x2FEA40u: goto label_2fea40;
            case 0x2FEA44u: goto label_2fea44;
            case 0x2FEA48u: goto label_2fea48;
            case 0x2FEA4Cu: goto label_2fea4c;
            case 0x2FEA50u: goto label_2fea50;
            case 0x2FEA54u: goto label_2fea54;
            case 0x2FEA58u: goto label_2fea58;
            case 0x2FEA5Cu: goto label_2fea5c;
            case 0x2FEA60u: goto label_2fea60;
            case 0x2FEA64u: goto label_2fea64;
            case 0x2FEA68u: goto label_2fea68;
            case 0x2FEA6Cu: goto label_2fea6c;
            case 0x2FEA70u: goto label_2fea70;
            case 0x2FEA74u: goto label_2fea74;
            case 0x2FEA78u: goto label_2fea78;
            case 0x2FEA7Cu: goto label_2fea7c;
            case 0x2FEA80u: goto label_2fea80;
            case 0x2FEA84u: goto label_2fea84;
            case 0x2FEA88u: goto label_2fea88;
            case 0x2FEA8Cu: goto label_2fea8c;
            case 0x2FEA90u: goto label_2fea90;
            case 0x2FEA94u: goto label_2fea94;
            case 0x2FEA98u: goto label_2fea98;
            case 0x2FEA9Cu: goto label_2fea9c;
            case 0x2FEAA0u: goto label_2feaa0;
            case 0x2FEAA4u: goto label_2feaa4;
            case 0x2FEAA8u: goto label_2feaa8;
            case 0x2FEAACu: goto label_2feaac;
            case 0x2FEAB0u: goto label_2feab0;
            case 0x2FEAB4u: goto label_2feab4;
            case 0x2FEAB8u: goto label_2feab8;
            case 0x2FEABCu: goto label_2feabc;
            case 0x2FEAC0u: goto label_2feac0;
            case 0x2FEAC4u: goto label_2feac4;
            case 0x2FEAC8u: goto label_2feac8;
            case 0x2FEACCu: goto label_2feacc;
            case 0x2FEAD0u: goto label_2fead0;
            case 0x2FEAD4u: goto label_2fead4;
            case 0x2FEAD8u: goto label_2fead8;
            case 0x2FEADCu: goto label_2feadc;
            case 0x2FEAE0u: goto label_2feae0;
            case 0x2FEAE4u: goto label_2feae4;
            case 0x2FEAE8u: goto label_2feae8;
            case 0x2FEAECu: goto label_2feaec;
            case 0x2FEAF0u: goto label_2feaf0;
            case 0x2FEAF4u: goto label_2feaf4;
            case 0x2FEAF8u: goto label_2feaf8;
            case 0x2FEAFCu: goto label_2feafc;
            case 0x2FEB00u: goto label_2feb00;
            case 0x2FEB04u: goto label_2feb04;
            case 0x2FEB08u: goto label_2feb08;
            case 0x2FEB0Cu: goto label_2feb0c;
            case 0x2FEB10u: goto label_2feb10;
            case 0x2FEB14u: goto label_2feb14;
            case 0x2FEB18u: goto label_2feb18;
            case 0x2FEB1Cu: goto label_2feb1c;
            case 0x2FEB20u: goto label_2feb20;
            case 0x2FEB24u: goto label_2feb24;
            case 0x2FEB28u: goto label_2feb28;
            case 0x2FEB2Cu: goto label_2feb2c;
            case 0x2FEB30u: goto label_2feb30;
            case 0x2FEB34u: goto label_2feb34;
            case 0x2FEB38u: goto label_2feb38;
            case 0x2FEB3Cu: goto label_2feb3c;
            case 0x2FEB40u: goto label_2feb40;
            case 0x2FEB44u: goto label_2feb44;
            case 0x2FEB48u: goto label_2feb48;
            case 0x2FEB4Cu: goto label_2feb4c;
            case 0x2FEB50u: goto label_2feb50;
            case 0x2FEB54u: goto label_2feb54;
            case 0x2FEB58u: goto label_2feb58;
            case 0x2FEB5Cu: goto label_2feb5c;
            case 0x2FEB60u: goto label_2feb60;
            case 0x2FEB64u: goto label_2feb64;
            case 0x2FEB68u: goto label_2feb68;
            case 0x2FEB6Cu: goto label_2feb6c;
            case 0x2FEB70u: goto label_2feb70;
            case 0x2FEB74u: goto label_2feb74;
            case 0x2FEB78u: goto label_2feb78;
            case 0x2FEB7Cu: goto label_2feb7c;
            case 0x2FEB80u: goto label_2feb80;
            case 0x2FEB84u: goto label_2feb84;
            case 0x2FEB88u: goto label_2feb88;
            case 0x2FEB8Cu: goto label_2feb8c;
            case 0x2FEB90u: goto label_2feb90;
            case 0x2FEB94u: goto label_2feb94;
            case 0x2FEB98u: goto label_2feb98;
            case 0x2FEB9Cu: goto label_2feb9c;
            case 0x2FEBA0u: goto label_2feba0;
            case 0x2FEBA4u: goto label_2feba4;
            case 0x2FEBA8u: goto label_2feba8;
            case 0x2FEBACu: goto label_2febac;
            case 0x2FEBB0u: goto label_2febb0;
            case 0x2FEBB4u: goto label_2febb4;
            case 0x2FEBB8u: goto label_2febb8;
            case 0x2FEBBCu: goto label_2febbc;
            case 0x2FEBC0u: goto label_2febc0;
            case 0x2FEBC4u: goto label_2febc4;
            case 0x2FEBC8u: goto label_2febc8;
            case 0x2FEBCCu: goto label_2febcc;
            case 0x2FEBD0u: goto label_2febd0;
            case 0x2FEBD4u: goto label_2febd4;
            case 0x2FEBD8u: goto label_2febd8;
            case 0x2FEBDCu: goto label_2febdc;
            case 0x2FEBE0u: goto label_2febe0;
            case 0x2FEBE4u: goto label_2febe4;
            case 0x2FEBE8u: goto label_2febe8;
            case 0x2FEBECu: goto label_2febec;
            case 0x2FEBF0u: goto label_2febf0;
            case 0x2FEBF4u: goto label_2febf4;
            case 0x2FEBF8u: goto label_2febf8;
            case 0x2FEBFCu: goto label_2febfc;
            case 0x2FEC00u: goto label_2fec00;
            case 0x2FEC04u: goto label_2fec04;
            case 0x2FEC08u: goto label_2fec08;
            case 0x2FEC0Cu: goto label_2fec0c;
            case 0x2FEC10u: goto label_2fec10;
            case 0x2FEC14u: goto label_2fec14;
            case 0x2FEC18u: goto label_2fec18;
            case 0x2FEC1Cu: goto label_2fec1c;
            case 0x2FEC20u: goto label_2fec20;
            case 0x2FEC24u: goto label_2fec24;
            case 0x2FEC28u: goto label_2fec28;
            case 0x2FEC2Cu: goto label_2fec2c;
            case 0x2FEC30u: goto label_2fec30;
            case 0x2FEC34u: goto label_2fec34;
            case 0x2FEC38u: goto label_2fec38;
            case 0x2FEC3Cu: goto label_2fec3c;
            case 0x2FEC40u: goto label_2fec40;
            case 0x2FEC44u: goto label_2fec44;
            case 0x2FEC48u: goto label_2fec48;
            case 0x2FEC4Cu: goto label_2fec4c;
            case 0x2FEC50u: goto label_2fec50;
            case 0x2FEC54u: goto label_2fec54;
            case 0x2FEC58u: goto label_2fec58;
            case 0x2FEC5Cu: goto label_2fec5c;
            case 0x2FEC60u: goto label_2fec60;
            case 0x2FEC64u: goto label_2fec64;
            case 0x2FEC68u: goto label_2fec68;
            case 0x2FEC6Cu: goto label_2fec6c;
            case 0x2FEC70u: goto label_2fec70;
            case 0x2FEC74u: goto label_2fec74;
            case 0x2FEC78u: goto label_2fec78;
            case 0x2FEC7Cu: goto label_2fec7c;
            case 0x2FEC80u: goto label_2fec80;
            case 0x2FEC84u: goto label_2fec84;
            case 0x2FEC88u: goto label_2fec88;
            case 0x2FEC8Cu: goto label_2fec8c;
            case 0x2FEC90u: goto label_2fec90;
            case 0x2FEC94u: goto label_2fec94;
            case 0x2FEC98u: goto label_2fec98;
            case 0x2FEC9Cu: goto label_2fec9c;
            case 0x2FECA0u: goto label_2feca0;
            case 0x2FECA4u: goto label_2feca4;
            case 0x2FECA8u: goto label_2feca8;
            case 0x2FECACu: goto label_2fecac;
            case 0x2FECB0u: goto label_2fecb0;
            case 0x2FECB4u: goto label_2fecb4;
            case 0x2FECB8u: goto label_2fecb8;
            case 0x2FECBCu: goto label_2fecbc;
            case 0x2FECC0u: goto label_2fecc0;
            case 0x2FECC4u: goto label_2fecc4;
            case 0x2FECC8u: goto label_2fecc8;
            case 0x2FECCCu: goto label_2feccc;
            case 0x2FECD0u: goto label_2fecd0;
            case 0x2FECD4u: goto label_2fecd4;
            case 0x2FECD8u: goto label_2fecd8;
            case 0x2FECDCu: goto label_2fecdc;
            case 0x2FECE0u: goto label_2fece0;
            case 0x2FECE4u: goto label_2fece4;
            case 0x2FECE8u: goto label_2fece8;
            case 0x2FECECu: goto label_2fecec;
            case 0x2FECF0u: goto label_2fecf0;
            case 0x2FECF4u: goto label_2fecf4;
            case 0x2FECF8u: goto label_2fecf8;
            case 0x2FECFCu: goto label_2fecfc;
            case 0x2FED00u: goto label_2fed00;
            case 0x2FED04u: goto label_2fed04;
            case 0x2FED08u: goto label_2fed08;
            case 0x2FED0Cu: goto label_2fed0c;
            case 0x2FED10u: goto label_2fed10;
            case 0x2FED14u: goto label_2fed14;
            case 0x2FED18u: goto label_2fed18;
            case 0x2FED1Cu: goto label_2fed1c;
            case 0x2FED20u: goto label_2fed20;
            case 0x2FED24u: goto label_2fed24;
            case 0x2FED28u: goto label_2fed28;
            case 0x2FED2Cu: goto label_2fed2c;
            case 0x2FED30u: goto label_2fed30;
            case 0x2FED34u: goto label_2fed34;
            case 0x2FED38u: goto label_2fed38;
            case 0x2FED3Cu: goto label_2fed3c;
            case 0x2FED40u: goto label_2fed40;
            case 0x2FED44u: goto label_2fed44;
            case 0x2FED48u: goto label_2fed48;
            case 0x2FED4Cu: goto label_2fed4c;
            case 0x2FED50u: goto label_2fed50;
            case 0x2FED54u: goto label_2fed54;
            case 0x2FED58u: goto label_2fed58;
            case 0x2FED5Cu: goto label_2fed5c;
            case 0x2FED60u: goto label_2fed60;
            case 0x2FED64u: goto label_2fed64;
            case 0x2FED68u: goto label_2fed68;
            case 0x2FED6Cu: goto label_2fed6c;
            case 0x2FED70u: goto label_2fed70;
            case 0x2FED74u: goto label_2fed74;
            case 0x2FED78u: goto label_2fed78;
            case 0x2FED7Cu: goto label_2fed7c;
            case 0x2FED80u: goto label_2fed80;
            case 0x2FED84u: goto label_2fed84;
            case 0x2FED88u: goto label_2fed88;
            case 0x2FED8Cu: goto label_2fed8c;
            case 0x2FED90u: goto label_2fed90;
            case 0x2FED94u: goto label_2fed94;
            case 0x2FED98u: goto label_2fed98;
            case 0x2FED9Cu: goto label_2fed9c;
            case 0x2FEDA0u: goto label_2feda0;
            case 0x2FEDA4u: goto label_2feda4;
            case 0x2FEDA8u: goto label_2feda8;
            case 0x2FEDACu: goto label_2fedac;
            case 0x2FEDB0u: goto label_2fedb0;
            case 0x2FEDB4u: goto label_2fedb4;
            case 0x2FEDB8u: goto label_2fedb8;
            case 0x2FEDBCu: goto label_2fedbc;
            case 0x2FEDC0u: goto label_2fedc0;
            case 0x2FEDC4u: goto label_2fedc4;
            case 0x2FEDC8u: goto label_2fedc8;
            case 0x2FEDCCu: goto label_2fedcc;
            case 0x2FEDD0u: goto label_2fedd0;
            case 0x2FEDD4u: goto label_2fedd4;
            case 0x2FEDD8u: goto label_2fedd8;
            case 0x2FEDDCu: goto label_2feddc;
            case 0x2FEDE0u: goto label_2fede0;
            case 0x2FEDE4u: goto label_2fede4;
            case 0x2FEDE8u: goto label_2fede8;
            case 0x2FEDECu: goto label_2fedec;
            case 0x2FEDF0u: goto label_2fedf0;
            case 0x2FEDF4u: goto label_2fedf4;
            case 0x2FEDF8u: goto label_2fedf8;
            case 0x2FEDFCu: goto label_2fedfc;
            case 0x2FEE00u: goto label_2fee00;
            case 0x2FEE04u: goto label_2fee04;
            case 0x2FEE08u: goto label_2fee08;
            case 0x2FEE0Cu: goto label_2fee0c;
            case 0x2FEE10u: goto label_2fee10;
            case 0x2FEE14u: goto label_2fee14;
            case 0x2FEE18u: goto label_2fee18;
            case 0x2FEE1Cu: goto label_2fee1c;
            case 0x2FEE20u: goto label_2fee20;
            case 0x2FEE24u: goto label_2fee24;
            case 0x2FEE28u: goto label_2fee28;
            case 0x2FEE2Cu: goto label_2fee2c;
            case 0x2FEE30u: goto label_2fee30;
            case 0x2FEE34u: goto label_2fee34;
            case 0x2FEE38u: goto label_2fee38;
            case 0x2FEE3Cu: goto label_2fee3c;
            case 0x2FEE40u: goto label_2fee40;
            case 0x2FEE44u: goto label_2fee44;
            case 0x2FEE48u: goto label_2fee48;
            case 0x2FEE4Cu: goto label_2fee4c;
            case 0x2FEE50u: goto label_2fee50;
            case 0x2FEE54u: goto label_2fee54;
            case 0x2FEE58u: goto label_2fee58;
            case 0x2FEE5Cu: goto label_2fee5c;
            case 0x2FEE60u: goto label_2fee60;
            case 0x2FEE64u: goto label_2fee64;
            case 0x2FEE68u: goto label_2fee68;
            case 0x2FEE6Cu: goto label_2fee6c;
            case 0x2FEE70u: goto label_2fee70;
            case 0x2FEE74u: goto label_2fee74;
            case 0x2FEE78u: goto label_2fee78;
            case 0x2FEE7Cu: goto label_2fee7c;
            case 0x2FEE80u: goto label_2fee80;
            case 0x2FEE84u: goto label_2fee84;
            case 0x2FEE88u: goto label_2fee88;
            case 0x2FEE8Cu: goto label_2fee8c;
            case 0x2FEE90u: goto label_2fee90;
            case 0x2FEE94u: goto label_2fee94;
            case 0x2FEE98u: goto label_2fee98;
            case 0x2FEE9Cu: goto label_2fee9c;
            case 0x2FEEA0u: goto label_2feea0;
            case 0x2FEEA4u: goto label_2feea4;
            case 0x2FEEA8u: goto label_2feea8;
            case 0x2FEEACu: goto label_2feeac;
            case 0x2FEEB0u: goto label_2feeb0;
            case 0x2FEEB4u: goto label_2feeb4;
            case 0x2FEEB8u: goto label_2feeb8;
            case 0x2FEEBCu: goto label_2feebc;
            case 0x2FEEC0u: goto label_2feec0;
            case 0x2FEEC4u: goto label_2feec4;
            case 0x2FEEC8u: goto label_2feec8;
            case 0x2FEECCu: goto label_2feecc;
            case 0x2FEED0u: goto label_2feed0;
            case 0x2FEED4u: goto label_2feed4;
            case 0x2FEED8u: goto label_2feed8;
            case 0x2FEEDCu: goto label_2feedc;
            case 0x2FEEE0u: goto label_2feee0;
            case 0x2FEEE4u: goto label_2feee4;
            case 0x2FEEE8u: goto label_2feee8;
            case 0x2FEEECu: goto label_2feeec;
            case 0x2FEEF0u: goto label_2feef0;
            case 0x2FEEF4u: goto label_2feef4;
            case 0x2FEEF8u: goto label_2feef8;
            case 0x2FEEFCu: goto label_2feefc;
            case 0x2FEF00u: goto label_2fef00;
            case 0x2FEF04u: goto label_2fef04;
            case 0x2FEF08u: goto label_2fef08;
            case 0x2FEF0Cu: goto label_2fef0c;
            case 0x2FEF10u: goto label_2fef10;
            case 0x2FEF14u: goto label_2fef14;
            case 0x2FEF18u: goto label_2fef18;
            case 0x2FEF1Cu: goto label_2fef1c;
            case 0x2FEF20u: goto label_2fef20;
            case 0x2FEF24u: goto label_2fef24;
            case 0x2FEF28u: goto label_2fef28;
            case 0x2FEF2Cu: goto label_2fef2c;
            case 0x2FEF30u: goto label_2fef30;
            case 0x2FEF34u: goto label_2fef34;
            case 0x2FEF38u: goto label_2fef38;
            case 0x2FEF3Cu: goto label_2fef3c;
            case 0x2FEF40u: goto label_2fef40;
            case 0x2FEF44u: goto label_2fef44;
            case 0x2FEF48u: goto label_2fef48;
            case 0x2FEF4Cu: goto label_2fef4c;
            case 0x2FEF50u: goto label_2fef50;
            case 0x2FEF54u: goto label_2fef54;
            case 0x2FEF58u: goto label_2fef58;
            case 0x2FEF5Cu: goto label_2fef5c;
            case 0x2FEF60u: goto label_2fef60;
            case 0x2FEF64u: goto label_2fef64;
            case 0x2FEF68u: goto label_2fef68;
            case 0x2FEF6Cu: goto label_2fef6c;
            case 0x2FEF70u: goto label_2fef70;
            case 0x2FEF74u: goto label_2fef74;
            case 0x2FEF78u: goto label_2fef78;
            case 0x2FEF7Cu: goto label_2fef7c;
            case 0x2FEF80u: goto label_2fef80;
            case 0x2FEF84u: goto label_2fef84;
            case 0x2FEF88u: goto label_2fef88;
            case 0x2FEF8Cu: goto label_2fef8c;
            case 0x2FEF90u: goto label_2fef90;
            case 0x2FEF94u: goto label_2fef94;
            case 0x2FEF98u: goto label_2fef98;
            case 0x2FEF9Cu: goto label_2fef9c;
            case 0x2FEFA0u: goto label_2fefa0;
            case 0x2FEFA4u: goto label_2fefa4;
            case 0x2FEFA8u: goto label_2fefa8;
            case 0x2FEFACu: goto label_2fefac;
            case 0x2FEFB0u: goto label_2fefb0;
            case 0x2FEFB4u: goto label_2fefb4;
            case 0x2FEFB8u: goto label_2fefb8;
            case 0x2FEFBCu: goto label_2fefbc;
            case 0x2FEFC0u: goto label_2fefc0;
            case 0x2FEFC4u: goto label_2fefc4;
            case 0x2FEFC8u: goto label_2fefc8;
            case 0x2FEFCCu: goto label_2fefcc;
            case 0x2FEFD0u: goto label_2fefd0;
            case 0x2FEFD4u: goto label_2fefd4;
            case 0x2FEFD8u: goto label_2fefd8;
            case 0x2FEFDCu: goto label_2fefdc;
            case 0x2FEFE0u: goto label_2fefe0;
            case 0x2FEFE4u: goto label_2fefe4;
            case 0x2FEFE8u: goto label_2fefe8;
            case 0x2FEFECu: goto label_2fefec;
            case 0x2FEFF0u: goto label_2feff0;
            case 0x2FEFF4u: goto label_2feff4;
            case 0x2FEFF8u: goto label_2feff8;
            case 0x2FEFFCu: goto label_2feffc;
            case 0x2FF000u: goto label_2ff000;
            case 0x2FF004u: goto label_2ff004;
            case 0x2FF008u: goto label_2ff008;
            case 0x2FF00Cu: goto label_2ff00c;
            case 0x2FF010u: goto label_2ff010;
            case 0x2FF014u: goto label_2ff014;
            case 0x2FF018u: goto label_2ff018;
            case 0x2FF01Cu: goto label_2ff01c;
            case 0x2FF020u: goto label_2ff020;
            case 0x2FF024u: goto label_2ff024;
            case 0x2FF028u: goto label_2ff028;
            case 0x2FF02Cu: goto label_2ff02c;
            case 0x2FF030u: goto label_2ff030;
            case 0x2FF034u: goto label_2ff034;
            case 0x2FF038u: goto label_2ff038;
            case 0x2FF03Cu: goto label_2ff03c;
            case 0x2FF040u: goto label_2ff040;
            case 0x2FF044u: goto label_2ff044;
            case 0x2FF048u: goto label_2ff048;
            case 0x2FF04Cu: goto label_2ff04c;
            case 0x2FF050u: goto label_2ff050;
            case 0x2FF054u: goto label_2ff054;
            case 0x2FF058u: goto label_2ff058;
            case 0x2FF05Cu: goto label_2ff05c;
            case 0x2FF060u: goto label_2ff060;
            case 0x2FF064u: goto label_2ff064;
            case 0x2FF068u: goto label_2ff068;
            case 0x2FF06Cu: goto label_2ff06c;
            case 0x2FF070u: goto label_2ff070;
            case 0x2FF074u: goto label_2ff074;
            case 0x2FF078u: goto label_2ff078;
            case 0x2FF07Cu: goto label_2ff07c;
            case 0x2FF080u: goto label_2ff080;
            case 0x2FF084u: goto label_2ff084;
            case 0x2FF088u: goto label_2ff088;
            case 0x2FF08Cu: goto label_2ff08c;
            case 0x2FF090u: goto label_2ff090;
            case 0x2FF094u: goto label_2ff094;
            case 0x2FF098u: goto label_2ff098;
            case 0x2FF09Cu: goto label_2ff09c;
            case 0x2FF0A0u: goto label_2ff0a0;
            case 0x2FF0A4u: goto label_2ff0a4;
            case 0x2FF0A8u: goto label_2ff0a8;
            case 0x2FF0ACu: goto label_2ff0ac;
            case 0x2FF0B0u: goto label_2ff0b0;
            case 0x2FF0B4u: goto label_2ff0b4;
            case 0x2FF0B8u: goto label_2ff0b8;
            case 0x2FF0BCu: goto label_2ff0bc;
            case 0x2FF0C0u: goto label_2ff0c0;
            case 0x2FF0C4u: goto label_2ff0c4;
            case 0x2FF0C8u: goto label_2ff0c8;
            case 0x2FF0CCu: goto label_2ff0cc;
            case 0x2FF0D0u: goto label_2ff0d0;
            case 0x2FF0D4u: goto label_2ff0d4;
            case 0x2FF0D8u: goto label_2ff0d8;
            case 0x2FF0DCu: goto label_2ff0dc;
            case 0x2FF0E0u: goto label_2ff0e0;
            case 0x2FF0E4u: goto label_2ff0e4;
            case 0x2FF0E8u: goto label_2ff0e8;
            case 0x2FF0ECu: goto label_2ff0ec;
            case 0x2FF0F0u: goto label_2ff0f0;
            case 0x2FF0F4u: goto label_2ff0f4;
            case 0x2FF0F8u: goto label_2ff0f8;
            case 0x2FF0FCu: goto label_2ff0fc;
            case 0x2FF100u: goto label_2ff100;
            case 0x2FF104u: goto label_2ff104;
            case 0x2FF108u: goto label_2ff108;
            case 0x2FF10Cu: goto label_2ff10c;
            case 0x2FF110u: goto label_2ff110;
            case 0x2FF114u: goto label_2ff114;
            case 0x2FF118u: goto label_2ff118;
            case 0x2FF11Cu: goto label_2ff11c;
            case 0x2FF120u: goto label_2ff120;
            case 0x2FF124u: goto label_2ff124;
            case 0x2FF128u: goto label_2ff128;
            case 0x2FF12Cu: goto label_2ff12c;
            case 0x2FF130u: goto label_2ff130;
            case 0x2FF134u: goto label_2ff134;
            case 0x2FF138u: goto label_2ff138;
            case 0x2FF13Cu: goto label_2ff13c;
            case 0x2FF140u: goto label_2ff140;
            case 0x2FF144u: goto label_2ff144;
            case 0x2FF148u: goto label_2ff148;
            case 0x2FF14Cu: goto label_2ff14c;
            case 0x2FF150u: goto label_2ff150;
            case 0x2FF154u: goto label_2ff154;
            case 0x2FF158u: goto label_2ff158;
            case 0x2FF15Cu: goto label_2ff15c;
            case 0x2FF160u: goto label_2ff160;
            case 0x2FF164u: goto label_2ff164;
            case 0x2FF168u: goto label_2ff168;
            case 0x2FF16Cu: goto label_2ff16c;
            case 0x2FF170u: goto label_2ff170;
            case 0x2FF174u: goto label_2ff174;
            case 0x2FF178u: goto label_2ff178;
            case 0x2FF17Cu: goto label_2ff17c;
            case 0x2FF180u: goto label_2ff180;
            case 0x2FF184u: goto label_2ff184;
            case 0x2FF188u: goto label_2ff188;
            case 0x2FF18Cu: goto label_2ff18c;
            case 0x2FF190u: goto label_2ff190;
            case 0x2FF194u: goto label_2ff194;
            case 0x2FF198u: goto label_2ff198;
            case 0x2FF19Cu: goto label_2ff19c;
            case 0x2FF1A0u: goto label_2ff1a0;
            case 0x2FF1A4u: goto label_2ff1a4;
            case 0x2FF1A8u: goto label_2ff1a8;
            case 0x2FF1ACu: goto label_2ff1ac;
            case 0x2FF1B0u: goto label_2ff1b0;
            case 0x2FF1B4u: goto label_2ff1b4;
            case 0x2FF1B8u: goto label_2ff1b8;
            case 0x2FF1BCu: goto label_2ff1bc;
            case 0x2FF1C0u: goto label_2ff1c0;
            case 0x2FF1C4u: goto label_2ff1c4;
            case 0x2FF1C8u: goto label_2ff1c8;
            case 0x2FF1CCu: goto label_2ff1cc;
            case 0x2FF1D0u: goto label_2ff1d0;
            case 0x2FF1D4u: goto label_2ff1d4;
            case 0x2FF1D8u: goto label_2ff1d8;
            case 0x2FF1DCu: goto label_2ff1dc;
            case 0x2FF1E0u: goto label_2ff1e0;
            case 0x2FF1E4u: goto label_2ff1e4;
            case 0x2FF1E8u: goto label_2ff1e8;
            case 0x2FF1ECu: goto label_2ff1ec;
            case 0x2FF1F0u: goto label_2ff1f0;
            case 0x2FF1F4u: goto label_2ff1f4;
            case 0x2FF1F8u: goto label_2ff1f8;
            case 0x2FF1FCu: goto label_2ff1fc;
            case 0x2FF200u: goto label_2ff200;
            case 0x2FF204u: goto label_2ff204;
            case 0x2FF208u: goto label_2ff208;
            case 0x2FF20Cu: goto label_2ff20c;
            case 0x2FF210u: goto label_2ff210;
            case 0x2FF214u: goto label_2ff214;
            case 0x2FF218u: goto label_2ff218;
            case 0x2FF21Cu: goto label_2ff21c;
            case 0x2FF220u: goto label_2ff220;
            case 0x2FF224u: goto label_2ff224;
            case 0x2FF228u: goto label_2ff228;
            case 0x2FF22Cu: goto label_2ff22c;
            case 0x2FF230u: goto label_2ff230;
            case 0x2FF234u: goto label_2ff234;
            case 0x2FF238u: goto label_2ff238;
            case 0x2FF23Cu: goto label_2ff23c;
            case 0x2FF240u: goto label_2ff240;
            case 0x2FF244u: goto label_2ff244;
            case 0x2FF248u: goto label_2ff248;
            case 0x2FF24Cu: goto label_2ff24c;
            case 0x2FF250u: goto label_2ff250;
            case 0x2FF254u: goto label_2ff254;
            case 0x2FF258u: goto label_2ff258;
            case 0x2FF25Cu: goto label_2ff25c;
            case 0x2FF260u: goto label_2ff260;
            case 0x2FF264u: goto label_2ff264;
            case 0x2FF268u: goto label_2ff268;
            case 0x2FF26Cu: goto label_2ff26c;
            case 0x2FF270u: goto label_2ff270;
            case 0x2FF274u: goto label_2ff274;
            case 0x2FF278u: goto label_2ff278;
            case 0x2FF27Cu: goto label_2ff27c;
            case 0x2FF280u: goto label_2ff280;
            case 0x2FF284u: goto label_2ff284;
            case 0x2FF288u: goto label_2ff288;
            case 0x2FF28Cu: goto label_2ff28c;
            case 0x2FF290u: goto label_2ff290;
            case 0x2FF294u: goto label_2ff294;
            case 0x2FF298u: goto label_2ff298;
            case 0x2FF29Cu: goto label_2ff29c;
            case 0x2FF2A0u: goto label_2ff2a0;
            case 0x2FF2A4u: goto label_2ff2a4;
            case 0x2FF2A8u: goto label_2ff2a8;
            case 0x2FF2ACu: goto label_2ff2ac;
            case 0x2FF2B0u: goto label_2ff2b0;
            case 0x2FF2B4u: goto label_2ff2b4;
            case 0x2FF2B8u: goto label_2ff2b8;
            case 0x2FF2BCu: goto label_2ff2bc;
            case 0x2FF2C0u: goto label_2ff2c0;
            case 0x2FF2C4u: goto label_2ff2c4;
            case 0x2FF2C8u: goto label_2ff2c8;
            case 0x2FF2CCu: goto label_2ff2cc;
            case 0x2FF2D0u: goto label_2ff2d0;
            case 0x2FF2D4u: goto label_2ff2d4;
            case 0x2FF2D8u: goto label_2ff2d8;
            case 0x2FF2DCu: goto label_2ff2dc;
            case 0x2FF2E0u: goto label_2ff2e0;
            case 0x2FF2E4u: goto label_2ff2e4;
            case 0x2FF2E8u: goto label_2ff2e8;
            case 0x2FF2ECu: goto label_2ff2ec;
            case 0x2FF2F0u: goto label_2ff2f0;
            case 0x2FF2F4u: goto label_2ff2f4;
            case 0x2FF2F8u: goto label_2ff2f8;
            case 0x2FF2FCu: goto label_2ff2fc;
            case 0x2FF300u: goto label_2ff300;
            case 0x2FF304u: goto label_2ff304;
            case 0x2FF308u: goto label_2ff308;
            case 0x2FF30Cu: goto label_2ff30c;
            case 0x2FF310u: goto label_2ff310;
            case 0x2FF314u: goto label_2ff314;
            case 0x2FF318u: goto label_2ff318;
            case 0x2FF31Cu: goto label_2ff31c;
            case 0x2FF320u: goto label_2ff320;
            case 0x2FF324u: goto label_2ff324;
            case 0x2FF328u: goto label_2ff328;
            case 0x2FF32Cu: goto label_2ff32c;
            case 0x2FF330u: goto label_2ff330;
            case 0x2FF334u: goto label_2ff334;
            case 0x2FF338u: goto label_2ff338;
            case 0x2FF33Cu: goto label_2ff33c;
            case 0x2FF340u: goto label_2ff340;
            case 0x2FF344u: goto label_2ff344;
            case 0x2FF348u: goto label_2ff348;
            case 0x2FF34Cu: goto label_2ff34c;
            case 0x2FF350u: goto label_2ff350;
            case 0x2FF354u: goto label_2ff354;
            case 0x2FF358u: goto label_2ff358;
            case 0x2FF35Cu: goto label_2ff35c;
            case 0x2FF360u: goto label_2ff360;
            case 0x2FF364u: goto label_2ff364;
            case 0x2FF368u: goto label_2ff368;
            case 0x2FF36Cu: goto label_2ff36c;
            case 0x2FF370u: goto label_2ff370;
            case 0x2FF374u: goto label_2ff374;
            case 0x2FF378u: goto label_2ff378;
            case 0x2FF37Cu: goto label_2ff37c;
            case 0x2FF380u: goto label_2ff380;
            case 0x2FF384u: goto label_2ff384;
            case 0x2FF388u: goto label_2ff388;
            case 0x2FF38Cu: goto label_2ff38c;
            case 0x2FF390u: goto label_2ff390;
            case 0x2FF394u: goto label_2ff394;
            case 0x2FF398u: goto label_2ff398;
            case 0x2FF39Cu: goto label_2ff39c;
            case 0x2FF3A0u: goto label_2ff3a0;
            case 0x2FF3A4u: goto label_2ff3a4;
            case 0x2FF3A8u: goto label_2ff3a8;
            case 0x2FF3ACu: goto label_2ff3ac;
            case 0x2FF3B0u: goto label_2ff3b0;
            case 0x2FF3B4u: goto label_2ff3b4;
            case 0x2FF3B8u: goto label_2ff3b8;
            case 0x2FF3BCu: goto label_2ff3bc;
            case 0x2FF3C0u: goto label_2ff3c0;
            case 0x2FF3C4u: goto label_2ff3c4;
            case 0x2FF3C8u: goto label_2ff3c8;
            case 0x2FF3CCu: goto label_2ff3cc;
            case 0x2FF3D0u: goto label_2ff3d0;
            case 0x2FF3D4u: goto label_2ff3d4;
            case 0x2FF3D8u: goto label_2ff3d8;
            case 0x2FF3DCu: goto label_2ff3dc;
            case 0x2FF3E0u: goto label_2ff3e0;
            case 0x2FF3E4u: goto label_2ff3e4;
            case 0x2FF3E8u: goto label_2ff3e8;
            case 0x2FF3ECu: goto label_2ff3ec;
            case 0x2FF3F0u: goto label_2ff3f0;
            case 0x2FF3F4u: goto label_2ff3f4;
            case 0x2FF3F8u: goto label_2ff3f8;
            case 0x2FF3FCu: goto label_2ff3fc;
            case 0x2FF400u: goto label_2ff400;
            case 0x2FF404u: goto label_2ff404;
            case 0x2FF408u: goto label_2ff408;
            case 0x2FF40Cu: goto label_2ff40c;
            case 0x2FF410u: goto label_2ff410;
            case 0x2FF414u: goto label_2ff414;
            case 0x2FF418u: goto label_2ff418;
            case 0x2FF41Cu: goto label_2ff41c;
            case 0x2FF420u: goto label_2ff420;
            case 0x2FF424u: goto label_2ff424;
            case 0x2FF428u: goto label_2ff428;
            case 0x2FF42Cu: goto label_2ff42c;
            case 0x2FF430u: goto label_2ff430;
            case 0x2FF434u: goto label_2ff434;
            case 0x2FF438u: goto label_2ff438;
            case 0x2FF43Cu: goto label_2ff43c;
            case 0x2FF440u: goto label_2ff440;
            case 0x2FF444u: goto label_2ff444;
            case 0x2FF448u: goto label_2ff448;
            case 0x2FF44Cu: goto label_2ff44c;
            case 0x2FF450u: goto label_2ff450;
            case 0x2FF454u: goto label_2ff454;
            case 0x2FF458u: goto label_2ff458;
            case 0x2FF45Cu: goto label_2ff45c;
            case 0x2FF460u: goto label_2ff460;
            case 0x2FF464u: goto label_2ff464;
            case 0x2FF468u: goto label_2ff468;
            case 0x2FF46Cu: goto label_2ff46c;
            case 0x2FF470u: goto label_2ff470;
            case 0x2FF474u: goto label_2ff474;
            case 0x2FF478u: goto label_2ff478;
            case 0x2FF47Cu: goto label_2ff47c;
            case 0x2FF480u: goto label_2ff480;
            case 0x2FF484u: goto label_2ff484;
            case 0x2FF488u: goto label_2ff488;
            case 0x2FF48Cu: goto label_2ff48c;
            case 0x2FF490u: goto label_2ff490;
            case 0x2FF494u: goto label_2ff494;
            case 0x2FF498u: goto label_2ff498;
            case 0x2FF49Cu: goto label_2ff49c;
            case 0x2FF4A0u: goto label_2ff4a0;
            case 0x2FF4A4u: goto label_2ff4a4;
            case 0x2FF4A8u: goto label_2ff4a8;
            case 0x2FF4ACu: goto label_2ff4ac;
            case 0x2FF4B0u: goto label_2ff4b0;
            case 0x2FF4B4u: goto label_2ff4b4;
            case 0x2FF4B8u: goto label_2ff4b8;
            case 0x2FF4BCu: goto label_2ff4bc;
            case 0x2FF4C0u: goto label_2ff4c0;
            case 0x2FF4C4u: goto label_2ff4c4;
            case 0x2FF4C8u: goto label_2ff4c8;
            case 0x2FF4CCu: goto label_2ff4cc;
            case 0x2FF4D0u: goto label_2ff4d0;
            case 0x2FF4D4u: goto label_2ff4d4;
            case 0x2FF4D8u: goto label_2ff4d8;
            case 0x2FF4DCu: goto label_2ff4dc;
            case 0x2FF4E0u: goto label_2ff4e0;
            case 0x2FF4E4u: goto label_2ff4e4;
            case 0x2FF4E8u: goto label_2ff4e8;
            case 0x2FF4ECu: goto label_2ff4ec;
            case 0x2FF4F0u: goto label_2ff4f0;
            case 0x2FF4F4u: goto label_2ff4f4;
            case 0x2FF4F8u: goto label_2ff4f8;
            case 0x2FF4FCu: goto label_2ff4fc;
            case 0x2FF500u: goto label_2ff500;
            case 0x2FF504u: goto label_2ff504;
            case 0x2FF508u: goto label_2ff508;
            case 0x2FF50Cu: goto label_2ff50c;
            case 0x2FF510u: goto label_2ff510;
            case 0x2FF514u: goto label_2ff514;
            case 0x2FF518u: goto label_2ff518;
            case 0x2FF51Cu: goto label_2ff51c;
            case 0x2FF520u: goto label_2ff520;
            case 0x2FF524u: goto label_2ff524;
            case 0x2FF528u: goto label_2ff528;
            case 0x2FF52Cu: goto label_2ff52c;
            case 0x2FF530u: goto label_2ff530;
            case 0x2FF534u: goto label_2ff534;
            case 0x2FF538u: goto label_2ff538;
            case 0x2FF53Cu: goto label_2ff53c;
            case 0x2FF540u: goto label_2ff540;
            case 0x2FF544u: goto label_2ff544;
            case 0x2FF548u: goto label_2ff548;
            case 0x2FF54Cu: goto label_2ff54c;
            case 0x2FF550u: goto label_2ff550;
            case 0x2FF554u: goto label_2ff554;
            case 0x2FF558u: goto label_2ff558;
            case 0x2FF55Cu: goto label_2ff55c;
            case 0x2FF560u: goto label_2ff560;
            case 0x2FF564u: goto label_2ff564;
            case 0x2FF568u: goto label_2ff568;
            case 0x2FF56Cu: goto label_2ff56c;
            case 0x2FF570u: goto label_2ff570;
            case 0x2FF574u: goto label_2ff574;
            case 0x2FF578u: goto label_2ff578;
            case 0x2FF57Cu: goto label_2ff57c;
            case 0x2FF580u: goto label_2ff580;
            case 0x2FF584u: goto label_2ff584;
            case 0x2FF588u: goto label_2ff588;
            case 0x2FF58Cu: goto label_2ff58c;
            case 0x2FF590u: goto label_2ff590;
            case 0x2FF594u: goto label_2ff594;
            case 0x2FF598u: goto label_2ff598;
            case 0x2FF59Cu: goto label_2ff59c;
            case 0x2FF5A0u: goto label_2ff5a0;
            case 0x2FF5A4u: goto label_2ff5a4;
            case 0x2FF5A8u: goto label_2ff5a8;
            case 0x2FF5ACu: goto label_2ff5ac;
            case 0x2FF5B0u: goto label_2ff5b0;
            case 0x2FF5B4u: goto label_2ff5b4;
            case 0x2FF5B8u: goto label_2ff5b8;
            case 0x2FF5BCu: goto label_2ff5bc;
            case 0x2FF5C0u: goto label_2ff5c0;
            case 0x2FF5C4u: goto label_2ff5c4;
            case 0x2FF5C8u: goto label_2ff5c8;
            case 0x2FF5CCu: goto label_2ff5cc;
            case 0x2FF5D0u: goto label_2ff5d0;
            case 0x2FF5D4u: goto label_2ff5d4;
            case 0x2FF5D8u: goto label_2ff5d8;
            case 0x2FF5DCu: goto label_2ff5dc;
            case 0x2FF5E0u: goto label_2ff5e0;
            case 0x2FF5E4u: goto label_2ff5e4;
            case 0x2FF5E8u: goto label_2ff5e8;
            case 0x2FF5ECu: goto label_2ff5ec;
            case 0x2FF5F0u: goto label_2ff5f0;
            case 0x2FF5F4u: goto label_2ff5f4;
            case 0x2FF5F8u: goto label_2ff5f8;
            case 0x2FF5FCu: goto label_2ff5fc;
            case 0x2FF600u: goto label_2ff600;
            case 0x2FF604u: goto label_2ff604;
            case 0x2FF608u: goto label_2ff608;
            case 0x2FF60Cu: goto label_2ff60c;
            case 0x2FF610u: goto label_2ff610;
            case 0x2FF614u: goto label_2ff614;
            case 0x2FF618u: goto label_2ff618;
            case 0x2FF61Cu: goto label_2ff61c;
            case 0x2FF620u: goto label_2ff620;
            case 0x2FF624u: goto label_2ff624;
            case 0x2FF628u: goto label_2ff628;
            case 0x2FF62Cu: goto label_2ff62c;
            case 0x2FF630u: goto label_2ff630;
            case 0x2FF634u: goto label_2ff634;
            case 0x2FF638u: goto label_2ff638;
            case 0x2FF63Cu: goto label_2ff63c;
            case 0x2FF640u: goto label_2ff640;
            case 0x2FF644u: goto label_2ff644;
            case 0x2FF648u: goto label_2ff648;
            case 0x2FF64Cu: goto label_2ff64c;
            case 0x2FF650u: goto label_2ff650;
            case 0x2FF654u: goto label_2ff654;
            case 0x2FF658u: goto label_2ff658;
            case 0x2FF65Cu: goto label_2ff65c;
            case 0x2FF660u: goto label_2ff660;
            case 0x2FF664u: goto label_2ff664;
            case 0x2FF668u: goto label_2ff668;
            case 0x2FF66Cu: goto label_2ff66c;
            case 0x2FF670u: goto label_2ff670;
            case 0x2FF674u: goto label_2ff674;
            case 0x2FF678u: goto label_2ff678;
            case 0x2FF67Cu: goto label_2ff67c;
            case 0x2FF680u: goto label_2ff680;
            case 0x2FF684u: goto label_2ff684;
            case 0x2FF688u: goto label_2ff688;
            case 0x2FF68Cu: goto label_2ff68c;
            case 0x2FF690u: goto label_2ff690;
            case 0x2FF694u: goto label_2ff694;
            case 0x2FF698u: goto label_2ff698;
            case 0x2FF69Cu: goto label_2ff69c;
            case 0x2FF6A0u: goto label_2ff6a0;
            case 0x2FF6A4u: goto label_2ff6a4;
            case 0x2FF6A8u: goto label_2ff6a8;
            case 0x2FF6ACu: goto label_2ff6ac;
            case 0x2FF6B0u: goto label_2ff6b0;
            case 0x2FF6B4u: goto label_2ff6b4;
            case 0x2FF6B8u: goto label_2ff6b8;
            case 0x2FF6BCu: goto label_2ff6bc;
            case 0x2FF6C0u: goto label_2ff6c0;
            case 0x2FF6C4u: goto label_2ff6c4;
            case 0x2FF6C8u: goto label_2ff6c8;
            case 0x2FF6CCu: goto label_2ff6cc;
            case 0x2FF6D0u: goto label_2ff6d0;
            case 0x2FF6D4u: goto label_2ff6d4;
            case 0x2FF6D8u: goto label_2ff6d8;
            case 0x2FF6DCu: goto label_2ff6dc;
            case 0x2FF6E0u: goto label_2ff6e0;
            case 0x2FF6E4u: goto label_2ff6e4;
            case 0x2FF6E8u: goto label_2ff6e8;
            case 0x2FF6ECu: goto label_2ff6ec;
            case 0x2FF6F0u: goto label_2ff6f0;
            case 0x2FF6F4u: goto label_2ff6f4;
            case 0x2FF6F8u: goto label_2ff6f8;
            case 0x2FF6FCu: goto label_2ff6fc;
            case 0x2FF700u: goto label_2ff700;
            case 0x2FF704u: goto label_2ff704;
            case 0x2FF708u: goto label_2ff708;
            case 0x2FF70Cu: goto label_2ff70c;
            case 0x2FF710u: goto label_2ff710;
            case 0x2FF714u: goto label_2ff714;
            case 0x2FF718u: goto label_2ff718;
            case 0x2FF71Cu: goto label_2ff71c;
            case 0x2FF720u: goto label_2ff720;
            case 0x2FF724u: goto label_2ff724;
            case 0x2FF728u: goto label_2ff728;
            case 0x2FF72Cu: goto label_2ff72c;
            case 0x2FF730u: goto label_2ff730;
            case 0x2FF734u: goto label_2ff734;
            case 0x2FF738u: goto label_2ff738;
            case 0x2FF73Cu: goto label_2ff73c;
            case 0x2FF740u: goto label_2ff740;
            case 0x2FF744u: goto label_2ff744;
            case 0x2FF748u: goto label_2ff748;
            case 0x2FF74Cu: goto label_2ff74c;
            case 0x2FF750u: goto label_2ff750;
            case 0x2FF754u: goto label_2ff754;
            case 0x2FF758u: goto label_2ff758;
            case 0x2FF75Cu: goto label_2ff75c;
            case 0x2FF760u: goto label_2ff760;
            case 0x2FF764u: goto label_2ff764;
            case 0x2FF768u: goto label_2ff768;
            case 0x2FF76Cu: goto label_2ff76c;
            case 0x2FF770u: goto label_2ff770;
            case 0x2FF774u: goto label_2ff774;
            case 0x2FF778u: goto label_2ff778;
            case 0x2FF77Cu: goto label_2ff77c;
            case 0x2FF780u: goto label_2ff780;
            case 0x2FF784u: goto label_2ff784;
            case 0x2FF788u: goto label_2ff788;
            case 0x2FF78Cu: goto label_2ff78c;
            case 0x2FF790u: goto label_2ff790;
            case 0x2FF794u: goto label_2ff794;
            case 0x2FF798u: goto label_2ff798;
            case 0x2FF79Cu: goto label_2ff79c;
            case 0x2FF7A0u: goto label_2ff7a0;
            case 0x2FF7A4u: goto label_2ff7a4;
            case 0x2FF7A8u: goto label_2ff7a8;
            case 0x2FF7ACu: goto label_2ff7ac;
            case 0x2FF7B0u: goto label_2ff7b0;
            case 0x2FF7B4u: goto label_2ff7b4;
            case 0x2FF7B8u: goto label_2ff7b8;
            case 0x2FF7BCu: goto label_2ff7bc;
            case 0x2FF7C0u: goto label_2ff7c0;
            case 0x2FF7C4u: goto label_2ff7c4;
            case 0x2FF7C8u: goto label_2ff7c8;
            case 0x2FF7CCu: goto label_2ff7cc;
            case 0x2FF7D0u: goto label_2ff7d0;
            case 0x2FF7D4u: goto label_2ff7d4;
            case 0x2FF7D8u: goto label_2ff7d8;
            case 0x2FF7DCu: goto label_2ff7dc;
            case 0x2FF7E0u: goto label_2ff7e0;
            case 0x2FF7E4u: goto label_2ff7e4;
            case 0x2FF7E8u: goto label_2ff7e8;
            case 0x2FF7ECu: goto label_2ff7ec;
            case 0x2FF7F0u: goto label_2ff7f0;
            case 0x2FF7F4u: goto label_2ff7f4;
            case 0x2FF7F8u: goto label_2ff7f8;
            case 0x2FF7FCu: goto label_2ff7fc;
            case 0x2FF800u: goto label_2ff800;
            case 0x2FF804u: goto label_2ff804;
            case 0x2FF808u: goto label_2ff808;
            case 0x2FF80Cu: goto label_2ff80c;
            case 0x2FF810u: goto label_2ff810;
            case 0x2FF814u: goto label_2ff814;
            case 0x2FF818u: goto label_2ff818;
            case 0x2FF81Cu: goto label_2ff81c;
            case 0x2FF820u: goto label_2ff820;
            case 0x2FF824u: goto label_2ff824;
            case 0x2FF828u: goto label_2ff828;
            case 0x2FF82Cu: goto label_2ff82c;
            case 0x2FF830u: goto label_2ff830;
            case 0x2FF834u: goto label_2ff834;
            case 0x2FF838u: goto label_2ff838;
            case 0x2FF83Cu: goto label_2ff83c;
            case 0x2FF840u: goto label_2ff840;
            case 0x2FF844u: goto label_2ff844;
            case 0x2FF848u: goto label_2ff848;
            case 0x2FF84Cu: goto label_2ff84c;
            case 0x2FF850u: goto label_2ff850;
            case 0x2FF854u: goto label_2ff854;
            case 0x2FF858u: goto label_2ff858;
            case 0x2FF85Cu: goto label_2ff85c;
            case 0x2FF860u: goto label_2ff860;
            case 0x2FF864u: goto label_2ff864;
            case 0x2FF868u: goto label_2ff868;
            case 0x2FF86Cu: goto label_2ff86c;
            case 0x2FF870u: goto label_2ff870;
            case 0x2FF874u: goto label_2ff874;
            case 0x2FF878u: goto label_2ff878;
            case 0x2FF87Cu: goto label_2ff87c;
            case 0x2FF880u: goto label_2ff880;
            case 0x2FF884u: goto label_2ff884;
            case 0x2FF888u: goto label_2ff888;
            case 0x2FF88Cu: goto label_2ff88c;
            case 0x2FF890u: goto label_2ff890;
            case 0x2FF894u: goto label_2ff894;
            case 0x2FF898u: goto label_2ff898;
            case 0x2FF89Cu: goto label_2ff89c;
            case 0x2FF8A0u: goto label_2ff8a0;
            case 0x2FF8A4u: goto label_2ff8a4;
            case 0x2FF8A8u: goto label_2ff8a8;
            case 0x2FF8ACu: goto label_2ff8ac;
            case 0x2FF8B0u: goto label_2ff8b0;
            case 0x2FF8B4u: goto label_2ff8b4;
            case 0x2FF8B8u: goto label_2ff8b8;
            case 0x2FF8BCu: goto label_2ff8bc;
            case 0x2FF8C0u: goto label_2ff8c0;
            case 0x2FF8C4u: goto label_2ff8c4;
            case 0x2FF8C8u: goto label_2ff8c8;
            case 0x2FF8CCu: goto label_2ff8cc;
            case 0x2FF8D0u: goto label_2ff8d0;
            case 0x2FF8D4u: goto label_2ff8d4;
            case 0x2FF8D8u: goto label_2ff8d8;
            case 0x2FF8DCu: goto label_2ff8dc;
            case 0x2FF8E0u: goto label_2ff8e0;
            case 0x2FF8E4u: goto label_2ff8e4;
            case 0x2FF8E8u: goto label_2ff8e8;
            case 0x2FF8ECu: goto label_2ff8ec;
            case 0x2FF8F0u: goto label_2ff8f0;
            case 0x2FF8F4u: goto label_2ff8f4;
            case 0x2FF8F8u: goto label_2ff8f8;
            case 0x2FF8FCu: goto label_2ff8fc;
            case 0x2FF900u: goto label_2ff900;
            case 0x2FF904u: goto label_2ff904;
            case 0x2FF908u: goto label_2ff908;
            case 0x2FF90Cu: goto label_2ff90c;
            case 0x2FF910u: goto label_2ff910;
            case 0x2FF914u: goto label_2ff914;
            case 0x2FF918u: goto label_2ff918;
            case 0x2FF91Cu: goto label_2ff91c;
            case 0x2FF920u: goto label_2ff920;
            case 0x2FF924u: goto label_2ff924;
            case 0x2FF928u: goto label_2ff928;
            case 0x2FF92Cu: goto label_2ff92c;
            case 0x2FF930u: goto label_2ff930;
            case 0x2FF934u: goto label_2ff934;
            case 0x2FF938u: goto label_2ff938;
            case 0x2FF93Cu: goto label_2ff93c;
            case 0x2FF940u: goto label_2ff940;
            case 0x2FF944u: goto label_2ff944;
            case 0x2FF948u: goto label_2ff948;
            case 0x2FF94Cu: goto label_2ff94c;
            case 0x2FF950u: goto label_2ff950;
            case 0x2FF954u: goto label_2ff954;
            case 0x2FF958u: goto label_2ff958;
            case 0x2FF95Cu: goto label_2ff95c;
            case 0x2FF960u: goto label_2ff960;
            case 0x2FF964u: goto label_2ff964;
            case 0x2FF968u: goto label_2ff968;
            case 0x2FF96Cu: goto label_2ff96c;
            case 0x2FF970u: goto label_2ff970;
            case 0x2FF974u: goto label_2ff974;
            case 0x2FF978u: goto label_2ff978;
            case 0x2FF97Cu: goto label_2ff97c;
            case 0x2FF980u: goto label_2ff980;
            case 0x2FF984u: goto label_2ff984;
            case 0x2FF988u: goto label_2ff988;
            case 0x2FF98Cu: goto label_2ff98c;
            case 0x2FF990u: goto label_2ff990;
            case 0x2FF994u: goto label_2ff994;
            case 0x2FF998u: goto label_2ff998;
            case 0x2FF99Cu: goto label_2ff99c;
            case 0x2FF9A0u: goto label_2ff9a0;
            case 0x2FF9A4u: goto label_2ff9a4;
            case 0x2FF9A8u: goto label_2ff9a8;
            case 0x2FF9ACu: goto label_2ff9ac;
            case 0x2FF9B0u: goto label_2ff9b0;
            case 0x2FF9B4u: goto label_2ff9b4;
            case 0x2FF9B8u: goto label_2ff9b8;
            case 0x2FF9BCu: goto label_2ff9bc;
            case 0x2FF9C0u: goto label_2ff9c0;
            case 0x2FF9C4u: goto label_2ff9c4;
            case 0x2FF9C8u: goto label_2ff9c8;
            case 0x2FF9CCu: goto label_2ff9cc;
            case 0x2FF9D0u: goto label_2ff9d0;
            case 0x2FF9D4u: goto label_2ff9d4;
            case 0x2FF9D8u: goto label_2ff9d8;
            case 0x2FF9DCu: goto label_2ff9dc;
            case 0x2FF9E0u: goto label_2ff9e0;
            case 0x2FF9E4u: goto label_2ff9e4;
            case 0x2FF9E8u: goto label_2ff9e8;
            case 0x2FF9ECu: goto label_2ff9ec;
            case 0x2FF9F0u: goto label_2ff9f0;
            case 0x2FF9F4u: goto label_2ff9f4;
            case 0x2FF9F8u: goto label_2ff9f8;
            case 0x2FF9FCu: goto label_2ff9fc;
            case 0x2FFA00u: goto label_2ffa00;
            case 0x2FFA04u: goto label_2ffa04;
            case 0x2FFA08u: goto label_2ffa08;
            case 0x2FFA0Cu: goto label_2ffa0c;
            case 0x2FFA10u: goto label_2ffa10;
            case 0x2FFA14u: goto label_2ffa14;
            case 0x2FFA18u: goto label_2ffa18;
            case 0x2FFA1Cu: goto label_2ffa1c;
            case 0x2FFA20u: goto label_2ffa20;
            case 0x2FFA24u: goto label_2ffa24;
            case 0x2FFA28u: goto label_2ffa28;
            case 0x2FFA2Cu: goto label_2ffa2c;
            case 0x2FFA30u: goto label_2ffa30;
            case 0x2FFA34u: goto label_2ffa34;
            case 0x2FFA38u: goto label_2ffa38;
            case 0x2FFA3Cu: goto label_2ffa3c;
            case 0x2FFA40u: goto label_2ffa40;
            case 0x2FFA44u: goto label_2ffa44;
            case 0x2FFA48u: goto label_2ffa48;
            case 0x2FFA4Cu: goto label_2ffa4c;
            case 0x2FFA50u: goto label_2ffa50;
            case 0x2FFA54u: goto label_2ffa54;
            case 0x2FFA58u: goto label_2ffa58;
            case 0x2FFA5Cu: goto label_2ffa5c;
            case 0x2FFA60u: goto label_2ffa60;
            case 0x2FFA64u: goto label_2ffa64;
            case 0x2FFA68u: goto label_2ffa68;
            case 0x2FFA6Cu: goto label_2ffa6c;
            case 0x2FFA70u: goto label_2ffa70;
            case 0x2FFA74u: goto label_2ffa74;
            case 0x2FFA78u: goto label_2ffa78;
            case 0x2FFA7Cu: goto label_2ffa7c;
            case 0x2FFA80u: goto label_2ffa80;
            case 0x2FFA84u: goto label_2ffa84;
            case 0x2FFA88u: goto label_2ffa88;
            case 0x2FFA8Cu: goto label_2ffa8c;
            case 0x2FFA90u: goto label_2ffa90;
            case 0x2FFA94u: goto label_2ffa94;
            case 0x2FFA98u: goto label_2ffa98;
            case 0x2FFA9Cu: goto label_2ffa9c;
            case 0x2FFAA0u: goto label_2ffaa0;
            case 0x2FFAA4u: goto label_2ffaa4;
            case 0x2FFAA8u: goto label_2ffaa8;
            case 0x2FFAACu: goto label_2ffaac;
            case 0x2FFAB0u: goto label_2ffab0;
            case 0x2FFAB4u: goto label_2ffab4;
            case 0x2FFAB8u: goto label_2ffab8;
            case 0x2FFABCu: goto label_2ffabc;
            case 0x2FFAC0u: goto label_2ffac0;
            case 0x2FFAC4u: goto label_2ffac4;
            case 0x2FFAC8u: goto label_2ffac8;
            case 0x2FFACCu: goto label_2ffacc;
            case 0x2FFAD0u: goto label_2ffad0;
            case 0x2FFAD4u: goto label_2ffad4;
            case 0x2FFAD8u: goto label_2ffad8;
            case 0x2FFADCu: goto label_2ffadc;
            case 0x2FFAE0u: goto label_2ffae0;
            case 0x2FFAE4u: goto label_2ffae4;
            case 0x2FFAE8u: goto label_2ffae8;
            case 0x2FFAECu: goto label_2ffaec;
            case 0x2FFAF0u: goto label_2ffaf0;
            case 0x2FFAF4u: goto label_2ffaf4;
            case 0x2FFAF8u: goto label_2ffaf8;
            case 0x2FFAFCu: goto label_2ffafc;
            case 0x2FFB00u: goto label_2ffb00;
            case 0x2FFB04u: goto label_2ffb04;
            case 0x2FFB08u: goto label_2ffb08;
            case 0x2FFB0Cu: goto label_2ffb0c;
            case 0x2FFB10u: goto label_2ffb10;
            case 0x2FFB14u: goto label_2ffb14;
            case 0x2FFB18u: goto label_2ffb18;
            case 0x2FFB1Cu: goto label_2ffb1c;
            case 0x2FFB20u: goto label_2ffb20;
            case 0x2FFB24u: goto label_2ffb24;
            case 0x2FFB28u: goto label_2ffb28;
            case 0x2FFB2Cu: goto label_2ffb2c;
            case 0x2FFB30u: goto label_2ffb30;
            case 0x2FFB34u: goto label_2ffb34;
            case 0x2FFB38u: goto label_2ffb38;
            case 0x2FFB3Cu: goto label_2ffb3c;
            case 0x2FFB40u: goto label_2ffb40;
            case 0x2FFB44u: goto label_2ffb44;
            case 0x2FFB48u: goto label_2ffb48;
            case 0x2FFB4Cu: goto label_2ffb4c;
            case 0x2FFB50u: goto label_2ffb50;
            case 0x2FFB54u: goto label_2ffb54;
            case 0x2FFB58u: goto label_2ffb58;
            case 0x2FFB5Cu: goto label_2ffb5c;
            case 0x2FFB60u: goto label_2ffb60;
            case 0x2FFB64u: goto label_2ffb64;
            case 0x2FFB68u: goto label_2ffb68;
            case 0x2FFB6Cu: goto label_2ffb6c;
            case 0x2FFB70u: goto label_2ffb70;
            case 0x2FFB74u: goto label_2ffb74;
            case 0x2FFB78u: goto label_2ffb78;
            case 0x2FFB7Cu: goto label_2ffb7c;
            case 0x2FFB80u: goto label_2ffb80;
            case 0x2FFB84u: goto label_2ffb84;
            case 0x2FFB88u: goto label_2ffb88;
            case 0x2FFB8Cu: goto label_2ffb8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FE878u;
label_2fe878:
    // 0x2fe878: 0x83a201d1
    ctx->pc = 0x2fe878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_2fe87c:
    // 0x2fe87c: 0x1440ffeb
label_2fe880:
    if (ctx->pc == 0x2FE880u) {
        ctx->pc = 0x2FE880u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->pc = 0x2FE884u;
        goto label_2fe884;
    }
    ctx->pc = 0x2FE87Cu;
    {
        const bool branch_taken_0x2fe87c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FE880u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        if (branch_taken_0x2fe87c) {
            ctx->pc = 0x2FE82Cu;
            goto label_2fe82c;
        }
    }
    ctx->pc = 0x2FE884u;
label_2fe884:
    // 0x2fe884: 0x8fa501ec
    ctx->pc = 0x2fe884u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe888:
    // 0x2fe888: 0x10000010
label_2fe88c:
    if (ctx->pc == 0x2FE88Cu) {
        ctx->pc = 0x2FE88Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2FE890u;
        goto label_2fe890;
    }
    ctx->pc = 0x2FE888u;
    {
        const bool branch_taken_0x2fe888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE88Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2fe888) {
            ctx->pc = 0x2FE8CCu;
            goto label_2fe8cc;
        }
    }
    ctx->pc = 0x2FE890u;
label_2fe890:
    // 0x2fe890: 0x8fa601ec
    ctx->pc = 0x2fe890u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe894:
    // 0x2fe894: 0x37de0001
    ctx->pc = 0x2fe894u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 1));
label_2fe898:
    // 0x2fe898: 0x1000ffe8
label_2fe89c:
    if (ctx->pc == 0x2FE89Cu) {
        ctx->pc = 0x2FE89Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x2FE8A0u;
        goto label_2fe8a0;
    }
    ctx->pc = 0x2FE898u;
    {
        const bool branch_taken_0x2fe898 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE89Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x2fe898) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE8A0u;
label_2fe8a0:
    // 0x2fe8a0: 0x26940008
    ctx->pc = 0x2fe8a0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fe8a4:
    // 0x2fe8a4: 0x8e82fff8
    ctx->pc = 0x2fe8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fe8a8:
    // 0x2fe8a8: 0x441ffe2
label_2fe8ac:
    if (ctx->pc == 0x2FE8ACu) {
        ctx->pc = 0x2FE8ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->pc = 0x2FE8B0u;
        goto label_2fe8b0;
    }
    ctx->pc = 0x2FE8A8u;
    {
        const bool branch_taken_0x2fe8a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FE8ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        if (branch_taken_0x2fe8a8) {
            ctx->pc = 0x2FE834u;
            goto label_2fe834;
        }
    }
    ctx->pc = 0x2FE8B0u;
label_2fe8b0:
    // 0x2fe8b0: 0x21023
    ctx->pc = 0x2fe8b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2fe8b4:
    // 0x2fe8b4: 0xafa201f4
    ctx->pc = 0x2fe8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_2fe8b8:
    // 0x2fe8b8: 0x8fa301ec
    ctx->pc = 0x2fe8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe8bc:
    // 0x2fe8bc: 0x1000ffde
label_2fe8c0:
    if (ctx->pc == 0x2FE8C0u) {
        ctx->pc = 0x2FE8C0u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x2FE8C4u;
        goto label_2fe8c4;
    }
    ctx->pc = 0x2FE8BCu;
    {
        const bool branch_taken_0x2fe8bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE8C0u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x2fe8bc) {
            ctx->pc = 0x2FE838u;
            goto label_2fe838;
        }
    }
    ctx->pc = 0x2FE8C4u;
label_2fe8c4:
    // 0x2fe8c4: 0x8fa501ec
    ctx->pc = 0x2fe8c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe8c8:
    // 0x2fe8c8: 0x2402002b
    ctx->pc = 0x2fe8c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_2fe8cc:
    // 0x2fe8cc: 0x90a40000
    ctx->pc = 0x2fe8ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2fe8d0:
    // 0x2fe8d0: 0x1000ffda
label_2fe8d4:
    if (ctx->pc == 0x2FE8D4u) {
        ctx->pc = 0x2FE8D4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FE8D8u;
        goto label_2fe8d8;
    }
    ctx->pc = 0x2FE8D0u;
    {
        const bool branch_taken_0x2fe8d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE8D4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2fe8d0) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE8D8u;
label_2fe8d8:
    // 0x2fe8d8: 0x8fa601ec
    ctx->pc = 0x2fe8d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe8dc:
    // 0x2fe8dc: 0x2402002a
    ctx->pc = 0x2fe8dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
label_2fe8e0:
    // 0x2fe8e0: 0x80d70000
    ctx->pc = 0x2fe8e0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2fe8e4:
    // 0x2fe8e4: 0x24c60001
    ctx->pc = 0x2fe8e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_2fe8e8:
    // 0x2fe8e8: 0x16e20009
label_2fe8ec:
    if (ctx->pc == 0x2FE8ECu) {
        ctx->pc = 0x2FE8ECu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->pc = 0x2FE8F0u;
        goto label_2fe8f0;
    }
    ctx->pc = 0x2FE8E8u;
    {
        const bool branch_taken_0x2fe8e8 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FE8ECu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        if (branch_taken_0x2fe8e8) {
            ctx->pc = 0x2FE910u;
            goto label_2fe910;
        }
    }
    ctx->pc = 0x2FE8F0u;
label_2fe8f0:
    // 0x2fe8f0: 0x26940008
    ctx->pc = 0x2fe8f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fe8f4:
    // 0x2fe8f4: 0x2402fffe
    ctx->pc = 0x2fe8f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2fe8f8:
    // 0x2fe8f8: 0x8e90fff8
    ctx->pc = 0x2fe8f8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fe8fc:
    // 0x2fe8fc: 0x2412ffff
    ctx->pc = 0x2fe8fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fe900:
    // 0x2fe900: 0x90c40000
    ctx->pc = 0x2fe900u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2fe904:
    // 0x2fe904: 0x50102a
    ctx->pc = 0x2fe904u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_2fe908:
    // 0x2fe908: 0x1000ffcc
label_2fe90c:
    if (ctx->pc == 0x2FE90Cu) {
        ctx->pc = 0x2FE90Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        ctx->pc = 0x2FE910u;
        goto label_2fe910;
    }
    ctx->pc = 0x2FE908u;
    {
        const bool branch_taken_0x2fe908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE90Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        if (branch_taken_0x2fe908) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE910u;
label_2fe910:
    // 0x2fe910: 0x26e2ffd0
    ctx->pc = 0x2fe910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_2fe914:
    // 0x2fe914: 0x2c42000a
    ctx->pc = 0x2fe914u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_2fe918:
    // 0x2fe918: 0x1040000d
label_2fe91c:
    if (ctx->pc == 0x2FE91Cu) {
        ctx->pc = 0x2FE91Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FE920u;
        goto label_2fe920;
    }
    ctx->pc = 0x2FE918u;
    {
        const bool branch_taken_0x2fe918 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE91Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fe918) {
            ctx->pc = 0x2FE950u;
            goto label_2fe950;
        }
    }
    ctx->pc = 0x2FE920u;
label_2fe920:
    // 0x2fe920: 0x2403000a
    ctx->pc = 0x2fe920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_2fe924:
    // 0x2fe924: 0x2031018
    ctx->pc = 0x2fe924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2fe928:
    // 0x2fe928: 0x2442ffd0
    ctx->pc = 0x2fe928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_2fe92c:
    // 0x2fe92c: 0x578021
    ctx->pc = 0x2fe92cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2fe930:
    // 0x2fe930: 0x8fa201ec
    ctx->pc = 0x2fe930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe934:
    // 0x2fe934: 0x80570000
    ctx->pc = 0x2fe934u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe938:
    // 0x2fe938: 0x24420001
    ctx->pc = 0x2fe938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2fe93c:
    // 0x2fe93c: 0xafa201ec
    ctx->pc = 0x2fe93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_2fe940:
    // 0x2fe940: 0x26e2ffd0
    ctx->pc = 0x2fe940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_2fe944:
    // 0x2fe944: 0x2c42000a
    ctx->pc = 0x2fe944u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_2fe948:
    // 0x2fe948: 0x1440fff7
label_2fe94c:
    if (ctx->pc == 0x2FE94Cu) {
        ctx->pc = 0x2FE94Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x2FE950u;
        goto label_2fe950;
    }
    ctx->pc = 0x2FE948u;
    {
        const bool branch_taken_0x2fe948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FE94Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2fe948) {
            ctx->pc = 0x2FE928u;
            goto label_2fe928;
        }
    }
    ctx->pc = 0x2FE950u;
label_2fe950:
    // 0x2fe950: 0x2402fffe
    ctx->pc = 0x2fe950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2fe954:
    // 0x2fe954: 0x2412ffff
    ctx->pc = 0x2fe954u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fe958:
    // 0x2fe958: 0x50102a
    ctx->pc = 0x2fe958u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_2fe95c:
    // 0x2fe95c: 0x1000ffbc
label_2fe960:
    if (ctx->pc == 0x2FE960u) {
        ctx->pc = 0x2FE960u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        ctx->pc = 0x2FE964u;
        goto label_2fe964;
    }
    ctx->pc = 0x2FE95Cu;
    {
        const bool branch_taken_0x2fe95c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE960u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        if (branch_taken_0x2fe95c) {
            ctx->pc = 0x2FE850u;
            goto label_2fe850;
        }
    }
    ctx->pc = 0x2FE964u;
label_2fe964:
    // 0x2fe964: 0x8fa301ec
    ctx->pc = 0x2fe964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe968:
    // 0x2fe968: 0x1000ffb3
label_2fe96c:
    if (ctx->pc == 0x2FE96Cu) {
        ctx->pc = 0x2FE96Cu;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 128));
        ctx->pc = 0x2FE970u;
        goto label_2fe970;
    }
    ctx->pc = 0x2FE968u;
    {
        const bool branch_taken_0x2fe968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE96Cu;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 128));
        if (branch_taken_0x2fe968) {
            ctx->pc = 0x2FE838u;
            goto label_2fe838;
        }
    }
    ctx->pc = 0x2FE970u;
label_2fe970:
    // 0x2fe970: 0x802d
    ctx->pc = 0x2fe970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe974:
    // 0x2fe974: 0x2403000a
    ctx->pc = 0x2fe974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_2fe978:
    // 0x2fe978: 0x2031018
    ctx->pc = 0x2fe978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2fe97c:
    // 0x2fe97c: 0x8fa401ec
    ctx->pc = 0x2fe97cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe980:
    // 0x2fe980: 0x2442ffd0
    ctx->pc = 0x2fe980u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_2fe984:
    // 0x2fe984: 0x578021
    ctx->pc = 0x2fe984u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_2fe988:
    // 0x2fe988: 0x80970000
    ctx->pc = 0x2fe988u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe98c:
    // 0x2fe98c: 0x24840001
    ctx->pc = 0x2fe98cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2fe990:
    // 0x2fe990: 0x26e2ffd0
    ctx->pc = 0x2fe990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_2fe994:
    // 0x2fe994: 0x2c42000a
    ctx->pc = 0x2fe994u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_2fe998:
    // 0x2fe998: 0x1440fff7
label_2fe99c:
    if (ctx->pc == 0x2FE99Cu) {
        ctx->pc = 0x2FE99Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->pc = 0x2FE9A0u;
        goto label_2fe9a0;
    }
    ctx->pc = 0x2FE998u;
    {
        const bool branch_taken_0x2fe998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FE99Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        if (branch_taken_0x2fe998) {
            ctx->pc = 0x2FE978u;
            goto label_2fe978;
        }
    }
    ctx->pc = 0x2FE9A0u;
label_2fe9a0:
    // 0x2fe9a0: 0x1000ffab
label_2fe9a4:
    if (ctx->pc == 0x2FE9A4u) {
        ctx->pc = 0x2FE9A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->pc = 0x2FE9A8u;
        goto label_2fe9a8;
    }
    ctx->pc = 0x2FE9A0u;
    {
        const bool branch_taken_0x2fe9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE9A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        if (branch_taken_0x2fe9a0) {
            ctx->pc = 0x2FE850u;
            goto label_2fe850;
        }
    }
    ctx->pc = 0x2FE9A8u;
label_2fe9a8:
    // 0x2fe9a8: 0x8fa501ec
    ctx->pc = 0x2fe9a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe9ac:
    // 0x2fe9ac: 0x37de0008
    ctx->pc = 0x2fe9acu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 8));
label_2fe9b0:
    // 0x2fe9b0: 0x1000ffa2
label_2fe9b4:
    if (ctx->pc == 0x2FE9B4u) {
        ctx->pc = 0x2FE9B4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2FE9B8u;
        goto label_2fe9b8;
    }
    ctx->pc = 0x2FE9B0u;
    {
        const bool branch_taken_0x2fe9b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE9B4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2fe9b0) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE9B8u;
label_2fe9b8:
    // 0x2fe9b8: 0x8fa601ec
    ctx->pc = 0x2fe9b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe9bc:
    // 0x2fe9bc: 0x37de0040
    ctx->pc = 0x2fe9bcu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 64));
label_2fe9c0:
    // 0x2fe9c0: 0x1000ff9e
label_2fe9c4:
    if (ctx->pc == 0x2FE9C4u) {
        ctx->pc = 0x2FE9C4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x2FE9C8u;
        goto label_2fe9c8;
    }
    ctx->pc = 0x2FE9C0u;
    {
        const bool branch_taken_0x2fe9c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE9C4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x2fe9c0) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE9C8u;
label_2fe9c8:
    // 0x2fe9c8: 0x8fa201ec
    ctx->pc = 0x2fe9c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe9cc:
    // 0x2fe9cc: 0x8fa501ec
    ctx->pc = 0x2fe9ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fe9d0:
    // 0x2fe9d0: 0x80430000
    ctx->pc = 0x2fe9d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2fe9d4:
    // 0x2fe9d4: 0x2402006c
    ctx->pc = 0x2fe9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
label_2fe9d8:
    // 0x2fe9d8: 0x14620006
label_2fe9dc:
    if (ctx->pc == 0x2FE9DCu) {
        ctx->pc = 0x2FE9DCu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2FE9E0u;
        goto label_2fe9e0;
    }
    ctx->pc = 0x2FE9D8u;
    {
        const bool branch_taken_0x2fe9d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FE9DCu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2fe9d8) {
            ctx->pc = 0x2FE9F4u;
            goto label_2fe9f4;
        }
    }
    ctx->pc = 0x2FE9E0u;
label_2fe9e0:
    // 0x2fe9e0: 0x24a50001
    ctx->pc = 0x2fe9e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2fe9e4:
    // 0x2fe9e4: 0x37de0020
    ctx->pc = 0x2fe9e4u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 32));
label_2fe9e8:
    // 0x2fe9e8: 0xafa501ec
    ctx->pc = 0x2fe9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_2fe9ec:
    // 0x2fe9ec: 0x1000ff93
label_2fe9f0:
    if (ctx->pc == 0x2FE9F0u) {
        ctx->pc = 0x2FE9F0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2FE9F4u;
        goto label_2fe9f4;
    }
    ctx->pc = 0x2FE9ECu;
    {
        const bool branch_taken_0x2fe9ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE9F0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x2fe9ec) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE9F4u;
label_2fe9f4:
    // 0x2fe9f4: 0x1000ff91
label_2fe9f8:
    if (ctx->pc == 0x2FE9F8u) {
        ctx->pc = 0x2FE9F8u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
        ctx->pc = 0x2FE9FCu;
        goto label_2fe9fc;
    }
    ctx->pc = 0x2FE9F4u;
    {
        const bool branch_taken_0x2fe9f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FE9F8u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
        if (branch_taken_0x2fe9f4) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FE9FCu;
label_2fe9fc:
    // 0x2fe9fc: 0x8fa601ec
    ctx->pc = 0x2fe9fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2fea00:
    // 0x2fea00: 0x37de0020
    ctx->pc = 0x2fea00u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 32));
label_2fea04:
    // 0x2fea04: 0x1000ff8d
label_2fea08:
    if (ctx->pc == 0x2FEA08u) {
        ctx->pc = 0x2FEA08u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x2FEA0Cu;
        goto label_2fea0c;
    }
    ctx->pc = 0x2FEA04u;
    {
        const bool branch_taken_0x2fea04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA08u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x2fea04) {
            ctx->pc = 0x2FE83Cu;
            goto label_2fe83c;
        }
    }
    ctx->pc = 0x2FEA0Cu;
label_2fea0c:
    // 0x2fea0c: 0x26940008
    ctx->pc = 0x2fea0cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fea10:
    // 0x2fea10: 0x27b30060
    ctx->pc = 0x2fea10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 96));
label_2fea14:
    // 0x2fea14: 0x9282fff8
    ctx->pc = 0x2fea14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fea18:
    // 0x2fea18: 0x24150001
    ctx->pc = 0x2fea18u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_2fea1c:
    // 0x2fea1c: 0xa3a001d1
    ctx->pc = 0x2fea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2fea20:
    // 0x2fea20: 0x26320008
    ctx->pc = 0x2fea20u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2fea24:
    // 0x2fea24: 0x10000149
label_2fea28:
    if (ctx->pc == 0x2FEA28u) {
        ctx->pc = 0x2FEA28u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FEA2Cu;
        goto label_2fea2c;
    }
    ctx->pc = 0x2FEA24u;
    {
        const bool branch_taken_0x2fea24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA28u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2fea24) {
            ctx->pc = 0x2FEF4Cu;
            goto label_2fef4c;
        }
    }
    ctx->pc = 0x2FEA2Cu;
label_2fea2c:
    // 0x2fea2c: 0x37de0010
    ctx->pc = 0x2fea2cu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_2fea30:
    // 0x2fea30: 0x33c20010
    ctx->pc = 0x2fea30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_2fea34:
    // 0x2fea34: 0x10400004
label_2fea38:
    if (ctx->pc == 0x2FEA38u) {
        ctx->pc = 0x2FEA38u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x2FEA3Cu;
        goto label_2fea3c;
    }
    ctx->pc = 0x2FEA34u;
    {
        const bool branch_taken_0x2fea34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA38u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x2fea34) {
            ctx->pc = 0x2FEA48u;
            goto label_2fea48;
        }
    }
    ctx->pc = 0x2FEA3Cu;
label_2fea3c:
    // 0x2fea3c: 0x26940008
    ctx->pc = 0x2fea3cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fea40:
    // 0x2fea40: 0x10000006
label_2fea44:
    if (ctx->pc == 0x2FEA44u) {
        ctx->pc = 0x2FEA44u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FEA48u;
        goto label_2fea48;
    }
    ctx->pc = 0x2FEA40u;
    {
        const bool branch_taken_0x2fea40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA44u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fea40) {
            ctx->pc = 0x2FEA5Cu;
            goto label_2fea5c;
        }
    }
    ctx->pc = 0x2FEA48u;
label_2fea48:
    // 0x2fea48: 0x10400003
label_2fea4c:
    if (ctx->pc == 0x2FEA4Cu) {
        ctx->pc = 0x2FEA4Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x2FEA50u;
        goto label_2fea50;
    }
    ctx->pc = 0x2FEA48u;
    {
        const bool branch_taken_0x2fea48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA4Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x2fea48) {
            ctx->pc = 0x2FEA58u;
            goto label_2fea58;
        }
    }
    ctx->pc = 0x2FEA50u;
label_2fea50:
    // 0x2fea50: 0x10000002
label_2fea54:
    if (ctx->pc == 0x2FEA54u) {
        ctx->pc = 0x2FEA54u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FEA58u;
        goto label_2fea58;
    }
    ctx->pc = 0x2FEA50u;
    {
        const bool branch_taken_0x2fea50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA54u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fea50) {
            ctx->pc = 0x2FEA5Cu;
            goto label_2fea5c;
        }
    }
    ctx->pc = 0x2FEA58u;
label_2fea58:
    // 0x2fea58: 0x8e90fff8
    ctx->pc = 0x2fea58u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fea5c:
    // 0x2fea5c: 0x60100db
label_2fea60:
    if (ctx->pc == 0x2FEA60u) {
        ctx->pc = 0x2FEA60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FEA64u;
        goto label_2fea64;
    }
    ctx->pc = 0x2FEA5Cu;
    {
        const bool branch_taken_0x2fea5c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2FEA60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2fea5c) {
            ctx->pc = 0x2FEDCCu;
            goto label_2fedcc;
        }
    }
    ctx->pc = 0x2FEA64u;
label_2fea64:
    // 0x2fea64: 0x2402002d
    ctx->pc = 0x2fea64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_2fea68:
    // 0x2fea68: 0x10802f
    ctx->pc = 0x2fea68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_2fea6c:
    // 0x2fea6c: 0x100000d7
label_2fea70:
    if (ctx->pc == 0x2FEA70u) {
        ctx->pc = 0x2FEA70u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FEA74u;
        goto label_2fea74;
    }
    ctx->pc = 0x2FEA6Cu;
    {
        const bool branch_taken_0x2fea6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA70u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2fea6c) {
            ctx->pc = 0x2FEDCCu;
            goto label_2fedcc;
        }
    }
    ctx->pc = 0x2FEA74u;
label_2fea74:
    // 0x2fea74: 0x2402ffff
    ctx->pc = 0x2fea74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fea78:
    // 0x2fea78: 0x16420003
label_2fea7c:
    if (ctx->pc == 0x2FEA7Cu) {
        ctx->pc = 0x2FEA7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x2FEA80u;
        goto label_2fea80;
    }
    ctx->pc = 0x2FEA78u;
    {
        const bool branch_taken_0x2fea78 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FEA7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
        if (branch_taken_0x2fea78) {
            ctx->pc = 0x2FEA88u;
            goto label_2fea88;
        }
    }
    ctx->pc = 0x2FEA80u;
label_2fea80:
    // 0x2fea80: 0x10000007
label_2fea84:
    if (ctx->pc == 0x2FEA84u) {
        ctx->pc = 0x2FEA84u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2FEA88u;
        goto label_2fea88;
    }
    ctx->pc = 0x2FEA80u;
    {
        const bool branch_taken_0x2fea80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEA84u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2fea80) {
            ctx->pc = 0x2FEAA0u;
            goto label_2feaa0;
        }
    }
    ctx->pc = 0x2FEA88u;
label_2fea88:
    // 0x2fea88: 0x12e20003
label_2fea8c:
    if (ctx->pc == 0x2FEA8Cu) {
        ctx->pc = 0x2FEA8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        ctx->pc = 0x2FEA90u;
        goto label_2fea90;
    }
    ctx->pc = 0x2FEA88u;
    {
        const bool branch_taken_0x2fea88 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 2));
        ctx->pc = 0x2FEA8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x2fea88) {
            ctx->pc = 0x2FEA98u;
            goto label_2fea98;
        }
    }
    ctx->pc = 0x2FEA90u;
label_2fea90:
    // 0x2fea90: 0x16e20004
label_2fea94:
    if (ctx->pc == 0x2FEA94u) {
        ctx->pc = 0x2FEA94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x2FEA98u;
        goto label_2fea98;
    }
    ctx->pc = 0x2FEA90u;
    {
        const bool branch_taken_0x2fea90 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FEA94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 8));
        if (branch_taken_0x2fea90) {
            ctx->pc = 0x2FEAA4u;
            goto label_2feaa4;
        }
    }
    ctx->pc = 0x2FEA98u;
label_2fea98:
    // 0x2fea98: 0x24020001
    ctx->pc = 0x2fea98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2fea9c:
    // 0x2fea9c: 0x52900a
    ctx->pc = 0x2fea9cu;
    if (GPR_U32(ctx, 18) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
label_2feaa0:
    // 0x2feaa0: 0x33c20008
    ctx->pc = 0x2feaa0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 8));
label_2feaa4:
    // 0x2feaa4: 0x10400004
label_2feaa8:
    if (ctx->pc == 0x2FEAA8u) {
        ctx->pc = 0x2FEAA8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x2FEAACu;
        goto label_2feaac;
    }
    ctx->pc = 0x2FEAA4u;
    {
        const bool branch_taken_0x2feaa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEAA8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x2feaa4) {
            ctx->pc = 0x2FEAB8u;
            goto label_2feab8;
        }
    }
    ctx->pc = 0x2FEAACu;
label_2feaac:
    // 0x2feaac: 0xde82fff8
    ctx->pc = 0x2feaacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2feab0:
    // 0x2feab0: 0x10000003
label_2feab4:
    if (ctx->pc == 0x2FEAB4u) {
        ctx->pc = 0x2FEAB4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->pc = 0x2FEAB8u;
        goto label_2feab8;
    }
    ctx->pc = 0x2FEAB0u;
    {
        const bool branch_taken_0x2feab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEAB4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        if (branch_taken_0x2feab0) {
            ctx->pc = 0x2FEAC0u;
            goto label_2feac0;
        }
    }
    ctx->pc = 0x2FEAB8u;
label_2feab8:
    // 0x2feab8: 0xde83fff8
    ctx->pc = 0x2feab8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2feabc:
    // 0x2feabc: 0xffa30200
    ctx->pc = 0x2feabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_2feac0:
    // 0x2feac0: 0xc0b5d44
label_2feac4:
    if (ctx->pc == 0x2FEAC4u) {
        ctx->pc = 0x2FEAC4u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x2FEAC8u;
        goto label_2feac8;
    }
    ctx->pc = 0x2FEAC0u;
    SET_GPR_U32(ctx, 31, 0x2FEAC8u);
    ctx->pc = 0x2FEAC4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->pc = 0x2D7510u;
    {
        const uint32_t __entryPc = ctx->pc;
        isinf_0x2d7510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAC8u; }
    }
    if (ctx->pc != 0x2FEAC8u) { return; }
    ctx->pc = 0x2FEAC8u;
label_2feac8:
    // 0x2feac8: 0x1040000b
label_2feacc:
    if (ctx->pc == 0x2FEACCu) {
        ctx->pc = 0x2FEACCu;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x2FEAD0u;
        goto label_2fead0;
    }
    ctx->pc = 0x2FEAC8u;
    {
        const bool branch_taken_0x2feac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEACCu;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        if (branch_taken_0x2feac8) {
            ctx->pc = 0x2FEAF8u;
            goto label_2feaf8;
        }
    }
    ctx->pc = 0x2FEAD0u;
label_2fead0:
    // 0x2fead0: 0xc0be4ba
label_2fead4:
    if (ctx->pc == 0x2FEAD4u) {
        ctx->pc = 0x2FEAD4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEAD8u;
        goto label_2fead8;
    }
    ctx->pc = 0x2FEAD0u;
    SET_GPR_U32(ctx, 31, 0x2FEAD8u);
    ctx->pc = 0x2FEAD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAD8u; }
    }
    if (ctx->pc != 0x2FEAD8u) { return; }
    ctx->pc = 0x2FEAD8u;
label_2fead8:
    // 0x2fead8: 0x4410004
label_2feadc:
    if (ctx->pc == 0x2FEADCu) {
        ctx->pc = 0x2FEADCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2FEAE0u;
        goto label_2feae0;
    }
    ctx->pc = 0x2FEAD8u;
    {
        const bool branch_taken_0x2fead8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FEADCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2fead8) {
            ctx->pc = 0x2FEAECu;
            goto label_2feaec;
        }
    }
    ctx->pc = 0x2FEAE0u;
label_2feae0:
    // 0x2feae0: 0x2402002d
    ctx->pc = 0x2feae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_2feae4:
    // 0x2feae4: 0xa3a201d1
    ctx->pc = 0x2feae4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
label_2feae8:
    // 0x2feae8: 0x3c02003c
    ctx->pc = 0x2feae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2feaec:
    // 0x2feaec: 0x24150003
    ctx->pc = 0x2feaecu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 3));
label_2feaf0:
    // 0x2feaf0: 0x10000115
label_2feaf4:
    if (ctx->pc == 0x2FEAF4u) {
        ctx->pc = 0x2FEAF4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945152));
        ctx->pc = 0x2FEAF8u;
        goto label_2feaf8;
    }
    ctx->pc = 0x2FEAF0u;
    {
        const bool branch_taken_0x2feaf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEAF4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945152));
        if (branch_taken_0x2feaf0) {
            ctx->pc = 0x2FEF48u;
            goto label_2fef48;
        }
    }
    ctx->pc = 0x2FEAF8u;
label_2feaf8:
    // 0x2feaf8: 0xc0b5d2a
label_2feafc:
    if (ctx->pc == 0x2FEAFCu) {
        ctx->pc = 0x2FEAFCu;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x2FEB00u;
        goto label_2feb00;
    }
    ctx->pc = 0x2FEAF8u;
    SET_GPR_U32(ctx, 31, 0x2FEB00u);
    ctx->pc = 0x2FEAFCu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->pc = 0x2D74A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnan_0x2d74a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB00u; }
    }
    if (ctx->pc != 0x2FEB00u) { return; }
    ctx->pc = 0x2FEB00u;
label_2feb00:
    // 0x2feb00: 0x10400004
label_2feb04:
    if (ctx->pc == 0x2FEB04u) {
        ctx->pc = 0x2FEB04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2FEB08u;
        goto label_2feb08;
    }
    ctx->pc = 0x2FEB00u;
    {
        const bool branch_taken_0x2feb00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEB04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2feb00) {
            ctx->pc = 0x2FEB14u;
            goto label_2feb14;
        }
    }
    ctx->pc = 0x2FEB08u;
label_2feb08:
    // 0x2feb08: 0x24150003
    ctx->pc = 0x2feb08u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 3));
label_2feb0c:
    // 0x2feb0c: 0x1000010e
label_2feb10:
    if (ctx->pc == 0x2FEB10u) {
        ctx->pc = 0x2FEB10u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945160));
        ctx->pc = 0x2FEB14u;
        goto label_2feb14;
    }
    ctx->pc = 0x2FEB0Cu;
    {
        const bool branch_taken_0x2feb0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEB10u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945160));
        if (branch_taken_0x2feb0c) {
            ctx->pc = 0x2FEF48u;
            goto label_2fef48;
        }
    }
    ctx->pc = 0x2FEB14u;
label_2feb14:
    // 0x2feb14: 0x37de0100
    ctx->pc = 0x2feb14u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 256));
label_2feb18:
    // 0x2feb18: 0x8fa401e4
    ctx->pc = 0x2feb18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_2feb1c:
    // 0x2feb1c: 0xdfa50200
    ctx->pc = 0x2feb1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_2feb20:
    // 0x2feb20: 0x240302d
    ctx->pc = 0x2feb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2feb24:
    // 0x2feb24: 0x3c0382d
    ctx->pc = 0x2feb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2feb28:
    // 0x2feb28: 0x27a801d0
    ctx->pc = 0x2feb28u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 464));
label_2feb2c:
    // 0x2feb2c: 0x27a901dc
    ctx->pc = 0x2feb2cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 476));
label_2feb30:
    // 0x2feb30: 0x2e0502d
    ctx->pc = 0x2feb30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2feb34:
    // 0x2feb34: 0xc0bfee4
label_2feb38:
    if (ctx->pc == 0x2FEB38u) {
        ctx->pc = 0x2FEB38u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x2FEB3Cu;
        goto label_2feb3c;
    }
    ctx->pc = 0x2FEB34u;
    SET_GPR_U32(ctx, 31, 0x2FEB3Cu);
    ctx->pc = 0x2FEB38u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 480));
    ctx->pc = 0x2FFB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvt_0x2ffb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB3Cu; }
    }
    if (ctx->pc != 0x2FEB3Cu) { return; }
    ctx->pc = 0x2FEB3Cu;
label_2feb3c:
    // 0x2feb3c: 0x40982d
    ctx->pc = 0x2feb3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2feb40:
    // 0x2feb40: 0x24020067
    ctx->pc = 0x2feb40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
label_2feb44:
    // 0x2feb44: 0x12e20003
label_2feb48:
    if (ctx->pc == 0x2FEB48u) {
        ctx->pc = 0x2FEB48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        ctx->pc = 0x2FEB4Cu;
        goto label_2feb4c;
    }
    ctx->pc = 0x2FEB44u;
    {
        const bool branch_taken_0x2feb44 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 2));
        ctx->pc = 0x2FEB48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x2feb44) {
            ctx->pc = 0x2FEB54u;
            goto label_2feb54;
        }
    }
    ctx->pc = 0x2FEB4Cu;
label_2feb4c:
    // 0x2feb4c: 0x16e2000c
label_2feb50:
    if (ctx->pc == 0x2FEB50u) {
        ctx->pc = 0x2FEB50u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->pc = 0x2FEB54u;
        goto label_2feb54;
    }
    ctx->pc = 0x2FEB4Cu;
    {
        const bool branch_taken_0x2feb4c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FEB50u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        if (branch_taken_0x2feb4c) {
            ctx->pc = 0x2FEB80u;
            goto label_2feb80;
        }
    }
    ctx->pc = 0x2FEB54u;
label_2feb54:
    // 0x2feb54: 0x8fa501dc
    ctx->pc = 0x2feb54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2feb58:
    // 0x2feb58: 0x28a2fffd
    ctx->pc = 0x2feb58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4294967293));
label_2feb5c:
    // 0x2feb5c: 0x14400004
label_2feb60:
    if (ctx->pc == 0x2FEB60u) {
        ctx->pc = 0x2FEB60u;
        SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 23), 103));
        ctx->pc = 0x2FEB64u;
        goto label_2feb64;
    }
    ctx->pc = 0x2FEB5Cu;
    {
        const bool branch_taken_0x2feb5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEB60u;
        SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 23), 103));
        if (branch_taken_0x2feb5c) {
            ctx->pc = 0x2FEB70u;
            goto label_2feb70;
        }
    }
    ctx->pc = 0x2FEB64u;
label_2feb64:
    // 0x2feb64: 0x245102a
    ctx->pc = 0x2feb64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 5)));
label_2feb68:
    // 0x2feb68: 0x50400005
label_2feb6c:
    if (ctx->pc == 0x2FEB6Cu) {
        ctx->pc = 0x2FEB6Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x2FEB70u;
        goto label_2feb70;
    }
    ctx->pc = 0x2FEB68u;
    {
        const bool branch_taken_0x2feb68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2feb68) {
            ctx->pc = 0x2FEB6Cu;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 103));
            ctx->pc = 0x2FEB80u;
            goto label_2feb80;
        }
    }
    ctx->pc = 0x2FEB70u;
label_2feb70:
    // 0x2feb70: 0x24020065
    ctx->pc = 0x2feb70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
label_2feb74:
    // 0x2feb74: 0x24030045
    ctx->pc = 0x2feb74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
label_2feb78:
    // 0x2feb78: 0x40b82d
    ctx->pc = 0x2feb78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2feb7c:
    // 0x2feb7c: 0x64b80b
    ctx->pc = 0x2feb7cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 3));
label_2feb80:
    // 0x2feb80: 0x2ae20066
    ctx->pc = 0x2feb80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 102));
label_2feb84:
    // 0x2feb84: 0x10400011
label_2feb88:
    if (ctx->pc == 0x2FEB88u) {
        ctx->pc = 0x2FEB88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x2FEB8Cu;
        goto label_2feb8c;
    }
    ctx->pc = 0x2FEB84u;
    {
        const bool branch_taken_0x2feb84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEB88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x2feb84) {
            ctx->pc = 0x2FEBCCu;
            goto label_2febcc;
        }
    }
    ctx->pc = 0x2FEB8Cu;
label_2feb8c:
    // 0x2feb8c: 0x3a0202d
    ctx->pc = 0x2feb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2feb90:
    // 0x2feb90: 0x40282d
    ctx->pc = 0x2feb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2feb94:
    // 0x2feb94: 0xafa201dc
    ctx->pc = 0x2feb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_2feb98:
    // 0x2feb98: 0xc0bff50
label_2feb9c:
    if (ctx->pc == 0x2FEB9Cu) {
        ctx->pc = 0x2FEB9Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBA0u;
        goto label_2feba0;
    }
    ctx->pc = 0x2FEB98u;
    SET_GPR_U32(ctx, 31, 0x2FEBA0u);
    ctx->pc = 0x2FEB9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FFD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        exponent_0x2ffd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBA0u; }
    }
    if (ctx->pc != 0x2FEBA0u) { return; }
    ctx->pc = 0x2FEBA0u;
label_2feba0:
    // 0x2feba0: 0xafa20208
    ctx->pc = 0x2feba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_2feba4:
    // 0x2feba4: 0x8fa201e0
    ctx->pc = 0x2feba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2feba8:
    // 0x2feba8: 0x8fa40208
    ctx->pc = 0x2feba8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_2febac:
    // 0x2febac: 0x28430002
    ctx->pc = 0x2febacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
label_2febb0:
    // 0x2febb0: 0x10600004
label_2febb4:
    if (ctx->pc == 0x2FEBB4u) {
        ctx->pc = 0x2FEBB4u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x2FEBB8u;
        goto label_2febb8;
    }
    ctx->pc = 0x2FEBB0u;
    {
        const bool branch_taken_0x2febb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEBB4u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x2febb0) {
            ctx->pc = 0x2FEBC4u;
            goto label_2febc4;
        }
    }
    ctx->pc = 0x2FEBB8u;
label_2febb8:
    // 0x2febb8: 0x33c20001
    ctx->pc = 0x2febb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_2febbc:
    // 0x2febbc: 0x1040001a
label_2febc0:
    if (ctx->pc == 0x2FEBC0u) {
        ctx->pc = 0x2FEBC0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->pc = 0x2FEBC4u;
        goto label_2febc4;
    }
    ctx->pc = 0x2FEBBCu;
    {
        const bool branch_taken_0x2febbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEBC0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        if (branch_taken_0x2febbc) {
            ctx->pc = 0x2FEC28u;
            goto label_2fec28;
        }
    }
    ctx->pc = 0x2FEBC4u;
label_2febc4:
    // 0x2febc4: 0x10000017
label_2febc8:
    if (ctx->pc == 0x2FEBC8u) {
        ctx->pc = 0x2FEBC8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x2FEBCCu;
        goto label_2febcc;
    }
    ctx->pc = 0x2FEBC4u;
    {
        const bool branch_taken_0x2febc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEBC8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x2febc4) {
            ctx->pc = 0x2FEC24u;
            goto label_2fec24;
        }
    }
    ctx->pc = 0x2FEBCCu;
label_2febcc:
    // 0x2febcc: 0x24020066
    ctx->pc = 0x2febccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
label_2febd0:
    // 0x2febd0: 0x16e2000b
label_2febd4:
    if (ctx->pc == 0x2FEBD4u) {
        ctx->pc = 0x2FEBD4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x2FEBD8u;
        goto label_2febd8;
    }
    ctx->pc = 0x2FEBD0u;
    {
        const bool branch_taken_0x2febd0 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FEBD4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x2febd0) {
            ctx->pc = 0x2FEC00u;
            goto label_2fec00;
        }
    }
    ctx->pc = 0x2FEBD8u;
label_2febd8:
    // 0x2febd8: 0x18a00012
label_2febdc:
    if (ctx->pc == 0x2FEBDCu) {
        ctx->pc = 0x2FEBDCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x2FEBE0u;
        goto label_2febe0;
    }
    ctx->pc = 0x2FEBD8u;
    {
        const bool branch_taken_0x2febd8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2FEBDCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x2febd8) {
            ctx->pc = 0x2FEC24u;
            goto label_2fec24;
        }
    }
    ctx->pc = 0x2FEBE0u;
label_2febe0:
    // 0x2febe0: 0x16400004
label_2febe4:
    if (ctx->pc == 0x2FEBE4u) {
        ctx->pc = 0x2FEBE4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBE8u;
        goto label_2febe8;
    }
    ctx->pc = 0x2FEBE0u;
    {
        const bool branch_taken_0x2febe0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEBE4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2febe0) {
            ctx->pc = 0x2FEBF4u;
            goto label_2febf4;
        }
    }
    ctx->pc = 0x2FEBE8u;
label_2febe8:
    // 0x2febe8: 0x33c20001
    ctx->pc = 0x2febe8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_2febec:
    // 0x2febec: 0x1040000e
label_2febf0:
    if (ctx->pc == 0x2FEBF0u) {
        ctx->pc = 0x2FEBF0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->pc = 0x2FEBF4u;
        goto label_2febf4;
    }
    ctx->pc = 0x2FEBECu;
    {
        const bool branch_taken_0x2febec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEBF0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        if (branch_taken_0x2febec) {
            ctx->pc = 0x2FEC28u;
            goto label_2fec28;
        }
    }
    ctx->pc = 0x2FEBF4u;
label_2febf4:
    // 0x2febf4: 0x24a20001
    ctx->pc = 0x2febf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
label_2febf8:
    // 0x2febf8: 0x1000000a
label_2febfc:
    if (ctx->pc == 0x2FEBFCu) {
        ctx->pc = 0x2FEBFCu;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x2FEC00u;
        goto label_2fec00;
    }
    ctx->pc = 0x2FEBF8u;
    {
        const bool branch_taken_0x2febf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEBFCu;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        if (branch_taken_0x2febf8) {
            ctx->pc = 0x2FEC24u;
            goto label_2fec24;
        }
    }
    ctx->pc = 0x2FEC00u;
label_2fec00:
    // 0x2fec00: 0xa3102a
    ctx->pc = 0x2fec00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
label_2fec04:
    // 0x2fec04: 0x14400003
label_2fec08:
    if (ctx->pc == 0x2FEC08u) {
        ctx->pc = 0x2FEC08u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x2FEC0Cu;
        goto label_2fec0c;
    }
    ctx->pc = 0x2FEC04u;
    {
        const bool branch_taken_0x2fec04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC08u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x2fec04) {
            ctx->pc = 0x2FEC14u;
            goto label_2fec14;
        }
    }
    ctx->pc = 0x2FEC0Cu;
label_2fec0c:
    // 0x2fec0c: 0x10000005
label_2fec10:
    if (ctx->pc == 0x2FEC10u) {
        ctx->pc = 0x2FEC10u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x2FEC14u;
        goto label_2fec14;
    }
    ctx->pc = 0x2FEC0Cu;
    {
        const bool branch_taken_0x2fec0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC10u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x2fec0c) {
            ctx->pc = 0x2FEC24u;
            goto label_2fec24;
        }
    }
    ctx->pc = 0x2FEC14u;
label_2fec14:
    // 0x2fec14: 0x1ca00003
label_2fec18:
    if (ctx->pc == 0x2FEC18u) {
        ctx->pc = 0x2FEC18u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2FEC1Cu;
        goto label_2fec1c;
    }
    ctx->pc = 0x2FEC14u;
    {
        const bool branch_taken_0x2fec14 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2FEC18u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2fec14) {
            ctx->pc = 0x2FEC24u;
            goto label_2fec24;
        }
    }
    ctx->pc = 0x2FEC1Cu;
label_2fec1c:
    // 0x2fec1c: 0x24620002
    ctx->pc = 0x2fec1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_2fec20:
    // 0x2fec20: 0x45a823
    ctx->pc = 0x2fec20u;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fec24:
    // 0x2fec24: 0x83a201d0
    ctx->pc = 0x2fec24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_2fec28:
    // 0x2fec28: 0x104000c7
label_2fec2c:
    if (ctx->pc == 0x2FEC2Cu) {
        ctx->pc = 0x2FEC2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x2FEC30u;
        goto label_2fec30;
    }
    ctx->pc = 0x2FEC28u;
    {
        const bool branch_taken_0x2fec28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x2fec28) {
            ctx->pc = 0x2FEF48u;
            goto label_2fef48;
        }
    }
    ctx->pc = 0x2FEC30u;
label_2fec30:
    // 0x2fec30: 0x26320008
    ctx->pc = 0x2fec30u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2fec34:
    // 0x2fec34: 0x100000c5
label_2fec38:
    if (ctx->pc == 0x2FEC38u) {
        ctx->pc = 0x2FEC38u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FEC3Cu;
        goto label_2fec3c;
    }
    ctx->pc = 0x2FEC34u;
    {
        const bool branch_taken_0x2fec34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC38u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2fec34) {
            ctx->pc = 0x2FEF4Cu;
            goto label_2fef4c;
        }
    }
    ctx->pc = 0x2FEC3Cu;
label_2fec3c:
    // 0x2fec3c: 0x33c20010
    ctx->pc = 0x2fec3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_2fec40:
    // 0x2fec40: 0x10400005
label_2fec44:
    if (ctx->pc == 0x2FEC44u) {
        ctx->pc = 0x2FEC44u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->pc = 0x2FEC48u;
        goto label_2fec48;
    }
    ctx->pc = 0x2FEC40u;
    {
        const bool branch_taken_0x2fec40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC44u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        if (branch_taken_0x2fec40) {
            ctx->pc = 0x2FEC58u;
            goto label_2fec58;
        }
    }
    ctx->pc = 0x2FEC48u;
label_2fec48:
    // 0x2fec48: 0x26940008
    ctx->pc = 0x2fec48u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fec4c:
    // 0x2fec4c: 0x8e82fff8
    ctx->pc = 0x2fec4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fec50:
    // 0x2fec50: 0x1000fec1
label_2fec54:
    if (ctx->pc == 0x2FEC54u) {
        ctx->pc = 0x2FEC54u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->pc = 0x2FEC58u;
        goto label_2fec58;
    }
    ctx->pc = 0x2FEC50u;
    {
        const bool branch_taken_0x2fec50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC54u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        if (branch_taken_0x2fec50) {
            ctx->pc = 0x2FE758u;
            goto label_2fe758;
        }
    }
    ctx->pc = 0x2FEC58u;
label_2fec58:
    // 0x2fec58: 0x33c20040
    ctx->pc = 0x2fec58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
label_2fec5c:
    // 0x2fec5c: 0x10400005
label_2fec60:
    if (ctx->pc == 0x2FEC60u) {
        ctx->pc = 0x2FEC60u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->pc = 0x2FEC64u;
        goto label_2fec64;
    }
    ctx->pc = 0x2FEC5Cu;
    {
        const bool branch_taken_0x2fec5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC60u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        if (branch_taken_0x2fec5c) {
            ctx->pc = 0x2FEC74u;
            goto label_2fec74;
        }
    }
    ctx->pc = 0x2FEC64u;
label_2fec64:
    // 0x2fec64: 0x26940008
    ctx->pc = 0x2fec64u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fec68:
    // 0x2fec68: 0x8e82fff8
    ctx->pc = 0x2fec68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fec6c:
    // 0x2fec6c: 0x1000feba
label_2fec70:
    if (ctx->pc == 0x2FEC70u) {
        ctx->pc = 0x2FEC70u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x2FEC74u;
        goto label_2fec74;
    }
    ctx->pc = 0x2FEC6Cu;
    {
        const bool branch_taken_0x2fec6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC70u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x2fec6c) {
            ctx->pc = 0x2FE758u;
            goto label_2fe758;
        }
    }
    ctx->pc = 0x2FEC74u;
label_2fec74:
    // 0x2fec74: 0x26940008
    ctx->pc = 0x2fec74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fec78:
    // 0x2fec78: 0x8fa301f0
    ctx->pc = 0x2fec78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2fec7c:
    // 0x2fec7c: 0x8e82fff8
    ctx->pc = 0x2fec7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fec80:
    // 0x2fec80: 0x1000feb5
label_2fec84:
    if (ctx->pc == 0x2FEC84u) {
        ctx->pc = 0x2FEC84u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2FEC88u;
        goto label_2fec88;
    }
    ctx->pc = 0x2FEC80u;
    {
        const bool branch_taken_0x2fec80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC84u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2fec80) {
            ctx->pc = 0x2FE758u;
            goto label_2fe758;
        }
    }
    ctx->pc = 0x2FEC88u;
label_2fec88:
    // 0x2fec88: 0x37de0010
    ctx->pc = 0x2fec88u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_2fec8c:
    // 0x2fec8c: 0x33c20010
    ctx->pc = 0x2fec8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_2fec90:
    // 0x2fec90: 0x10400004
label_2fec94:
    if (ctx->pc == 0x2FEC94u) {
        ctx->pc = 0x2FEC94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x2FEC98u;
        goto label_2fec98;
    }
    ctx->pc = 0x2FEC90u;
    {
        const bool branch_taken_0x2fec90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEC94u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x2fec90) {
            ctx->pc = 0x2FECA4u;
            goto label_2feca4;
        }
    }
    ctx->pc = 0x2FEC98u;
label_2fec98:
    // 0x2fec98: 0x26940008
    ctx->pc = 0x2fec98u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fec9c:
    // 0x2fec9c: 0x10000006
label_2feca0:
    if (ctx->pc == 0x2FECA0u) {
        ctx->pc = 0x2FECA0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FECA4u;
        goto label_2feca4;
    }
    ctx->pc = 0x2FEC9Cu;
    {
        const bool branch_taken_0x2fec9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FECA0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fec9c) {
            ctx->pc = 0x2FECB8u;
            goto label_2fecb8;
        }
    }
    ctx->pc = 0x2FECA4u;
label_2feca4:
    // 0x2feca4: 0x10400003
label_2feca8:
    if (ctx->pc == 0x2FECA8u) {
        ctx->pc = 0x2FECA8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x2FECACu;
        goto label_2fecac;
    }
    ctx->pc = 0x2FECA4u;
    {
        const bool branch_taken_0x2feca4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FECA8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x2feca4) {
            ctx->pc = 0x2FECB4u;
            goto label_2fecb4;
        }
    }
    ctx->pc = 0x2FECACu;
label_2fecac:
    // 0x2fecac: 0x10000002
label_2fecb0:
    if (ctx->pc == 0x2FECB0u) {
        ctx->pc = 0x2FECB0u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FECB4u;
        goto label_2fecb4;
    }
    ctx->pc = 0x2FECACu;
    {
        const bool branch_taken_0x2fecac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FECB0u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fecac) {
            ctx->pc = 0x2FECB8u;
            goto label_2fecb8;
        }
    }
    ctx->pc = 0x2FECB4u;
label_2fecb4:
    // 0x2fecb4: 0x9e90fff8
    ctx->pc = 0x2fecb4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fecb8:
    // 0x2fecb8: 0x10000043
label_2fecbc:
    if (ctx->pc == 0x2FECBCu) {
        ctx->pc = 0x2FECBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FECC0u;
        goto label_2fecc0;
    }
    ctx->pc = 0x2FECB8u;
    {
        const bool branch_taken_0x2fecb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FECBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fecb8) {
            ctx->pc = 0x2FEDC8u;
            goto label_2fedc8;
        }
    }
    ctx->pc = 0x2FECC0u;
label_2fecc0:
    // 0x2fecc0: 0x3c02003c
    ctx->pc = 0x2fecc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2fecc4:
    // 0x2fecc4: 0x26940008
    ctx->pc = 0x2fecc4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fecc8:
    // 0x2fecc8: 0x2442a990
    ctx->pc = 0x2fecc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945168));
label_2feccc:
    // 0x2feccc: 0x24040002
    ctx->pc = 0x2fecccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_2fecd0:
    // 0x2fecd0: 0xafa20214
    ctx->pc = 0x2fecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_2fecd4:
    // 0x2fecd4: 0x37de0002
    ctx->pc = 0x2fecd4u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 2));
label_2fecd8:
    // 0x2fecd8: 0x24170078
    ctx->pc = 0x2fecd8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 120));
label_2fecdc:
    // 0x2fecdc: 0x1000003a
label_2fece0:
    if (ctx->pc == 0x2FECE0u) {
        ctx->pc = 0x2FECE0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FECE4u;
        goto label_2fece4;
    }
    ctx->pc = 0x2FECDCu;
    {
        const bool branch_taken_0x2fecdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FECE0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fecdc) {
            ctx->pc = 0x2FEDC8u;
            goto label_2fedc8;
        }
    }
    ctx->pc = 0x2FECE4u;
label_2fece4:
    // 0x2fece4: 0x26940008
    ctx->pc = 0x2fece4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fece8:
    // 0x2fece8: 0x8e93fff8
    ctx->pc = 0x2fece8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fecec:
    // 0x2fecec: 0x16600002
label_2fecf0:
    if (ctx->pc == 0x2FECF0u) {
        ctx->pc = 0x2FECF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2FECF4u;
        goto label_2fecf4;
    }
    ctx->pc = 0x2FECECu;
    {
        const bool branch_taken_0x2fecec = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FECF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2fecec) {
            ctx->pc = 0x2FECF8u;
            goto label_2fecf8;
        }
    }
    ctx->pc = 0x2FECF4u;
label_2fecf4:
    // 0x2fecf4: 0x2453a9a8
    ctx->pc = 0x2fecf4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945192));
label_2fecf8:
    // 0x2fecf8: 0x640000b
label_2fecfc:
    if (ctx->pc == 0x2FECFCu) {
        ctx->pc = 0x2FECFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FED00u;
        goto label_2fed00;
    }
    ctx->pc = 0x2FECF8u;
    {
        const bool branch_taken_0x2fecf8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2FECFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fecf8) {
            ctx->pc = 0x2FED28u;
            goto label_2fed28;
        }
    }
    ctx->pc = 0x2FED00u;
label_2fed00:
    // 0x2fed00: 0x282d
    ctx->pc = 0x2fed00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fed04:
    // 0x2fed04: 0xc0bebfc
label_2fed08:
    if (ctx->pc == 0x2FED08u) {
        ctx->pc = 0x2FED08u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FED0Cu;
        goto label_2fed0c;
    }
    ctx->pc = 0x2FED04u;
    SET_GPR_U32(ctx, 31, 0x2FED0Cu);
    ctx->pc = 0x2FED08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FAFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memchr_0x2faff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED0Cu; }
    }
    if (ctx->pc != 0x2FED0Cu) { return; }
    ctx->pc = 0x2FED0Cu;
label_2fed0c:
    // 0x2fed0c: 0x10400004
label_2fed10:
    if (ctx->pc == 0x2FED10u) {
        ctx->pc = 0x2FED10u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x2FED14u;
        goto label_2fed14;
    }
    ctx->pc = 0x2FED0Cu;
    {
        const bool branch_taken_0x2fed0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED10u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x2fed0c) {
            ctx->pc = 0x2FED20u;
            goto label_2fed20;
        }
    }
    ctx->pc = 0x2FED14u;
label_2fed14:
    // 0x2fed14: 0x255102a
    ctx->pc = 0x2fed14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 21)));
label_2fed18:
    // 0x2fed18: 0x1000008a
label_2fed1c:
    if (ctx->pc == 0x2FED1Cu) {
        ctx->pc = 0x2FED1Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 18));
        ctx->pc = 0x2FED20u;
        goto label_2fed20;
    }
    ctx->pc = 0x2FED18u;
    {
        const bool branch_taken_0x2fed18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED1Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 18));
        if (branch_taken_0x2fed18) {
            ctx->pc = 0x2FEF44u;
            goto label_2fef44;
        }
    }
    ctx->pc = 0x2FED20u;
label_2fed20:
    // 0x2fed20: 0x10000088
label_2fed24:
    if (ctx->pc == 0x2FED24u) {
        ctx->pc = 0x2FED24u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FED28u;
        goto label_2fed28;
    }
    ctx->pc = 0x2FED20u;
    {
        const bool branch_taken_0x2fed20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED24u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fed20) {
            ctx->pc = 0x2FEF44u;
            goto label_2fef44;
        }
    }
    ctx->pc = 0x2FED28u;
label_2fed28:
    // 0x2fed28: 0xc0bf306
label_2fed2c:
    if (ctx->pc == 0x2FED2Cu) {
        ctx->pc = 0x2FED2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FED30u;
        goto label_2fed30;
    }
    ctx->pc = 0x2FED28u;
    SET_GPR_U32(ctx, 31, 0x2FED30u);
    ctx->pc = 0x2FED2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FED30u; }
    }
    if (ctx->pc != 0x2FED30u) { return; }
    ctx->pc = 0x2FED30u;
label_2fed30:
    // 0x2fed30: 0x10000084
label_2fed34:
    if (ctx->pc == 0x2FED34u) {
        ctx->pc = 0x2FED34u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FED38u;
        goto label_2fed38;
    }
    ctx->pc = 0x2FED30u;
    {
        const bool branch_taken_0x2fed30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED34u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fed30) {
            ctx->pc = 0x2FEF44u;
            goto label_2fef44;
        }
    }
    ctx->pc = 0x2FED38u;
label_2fed38:
    // 0x2fed38: 0x37de0010
    ctx->pc = 0x2fed38u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_2fed3c:
    // 0x2fed3c: 0x33c20010
    ctx->pc = 0x2fed3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_2fed40:
    // 0x2fed40: 0x10400004
label_2fed44:
    if (ctx->pc == 0x2FED44u) {
        ctx->pc = 0x2FED44u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x2FED48u;
        goto label_2fed48;
    }
    ctx->pc = 0x2FED40u;
    {
        const bool branch_taken_0x2fed40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED44u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x2fed40) {
            ctx->pc = 0x2FED54u;
            goto label_2fed54;
        }
    }
    ctx->pc = 0x2FED48u;
label_2fed48:
    // 0x2fed48: 0x26940008
    ctx->pc = 0x2fed48u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fed4c:
    // 0x2fed4c: 0x10000006
label_2fed50:
    if (ctx->pc == 0x2FED50u) {
        ctx->pc = 0x2FED50u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FED54u;
        goto label_2fed54;
    }
    ctx->pc = 0x2FED4Cu;
    {
        const bool branch_taken_0x2fed4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED50u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fed4c) {
            ctx->pc = 0x2FED68u;
            goto label_2fed68;
        }
    }
    ctx->pc = 0x2FED54u;
label_2fed54:
    // 0x2fed54: 0x10400003
label_2fed58:
    if (ctx->pc == 0x2FED58u) {
        ctx->pc = 0x2FED58u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x2FED5Cu;
        goto label_2fed5c;
    }
    ctx->pc = 0x2FED54u;
    {
        const bool branch_taken_0x2fed54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED58u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x2fed54) {
            ctx->pc = 0x2FED64u;
            goto label_2fed64;
        }
    }
    ctx->pc = 0x2FED5Cu;
label_2fed5c:
    // 0x2fed5c: 0x10000002
label_2fed60:
    if (ctx->pc == 0x2FED60u) {
        ctx->pc = 0x2FED60u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FED64u;
        goto label_2fed64;
    }
    ctx->pc = 0x2FED5Cu;
    {
        const bool branch_taken_0x2fed5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED60u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fed5c) {
            ctx->pc = 0x2FED68u;
            goto label_2fed68;
        }
    }
    ctx->pc = 0x2FED64u;
label_2fed64:
    // 0x2fed64: 0x9e90fff8
    ctx->pc = 0x2fed64u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fed68:
    // 0x2fed68: 0x10000017
label_2fed6c:
    if (ctx->pc == 0x2FED6Cu) {
        ctx->pc = 0x2FED6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FED70u;
        goto label_2fed70;
    }
    ctx->pc = 0x2FED68u;
    {
        const bool branch_taken_0x2fed68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED6Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2fed68) {
            ctx->pc = 0x2FEDC8u;
            goto label_2fedc8;
        }
    }
    ctx->pc = 0x2FED70u;
label_2fed70:
    // 0x2fed70: 0x3c02003c
    ctx->pc = 0x2fed70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2fed74:
    // 0x2fed74: 0x10000003
label_2fed78:
    if (ctx->pc == 0x2FED78u) {
        ctx->pc = 0x2FED78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945200));
        ctx->pc = 0x2FED7Cu;
        goto label_2fed7c;
    }
    ctx->pc = 0x2FED74u;
    {
        const bool branch_taken_0x2fed74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945200));
        if (branch_taken_0x2fed74) {
            ctx->pc = 0x2FED84u;
            goto label_2fed84;
        }
    }
    ctx->pc = 0x2FED7Cu;
label_2fed7c:
    // 0x2fed7c: 0x3c02003c
    ctx->pc = 0x2fed7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2fed80:
    // 0x2fed80: 0x2442a990
    ctx->pc = 0x2fed80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945168));
label_2fed84:
    // 0x2fed84: 0xafa20214
    ctx->pc = 0x2fed84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_2fed88:
    // 0x2fed88: 0x33c20010
    ctx->pc = 0x2fed88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_2fed8c:
    // 0x2fed8c: 0x10400004
label_2fed90:
    if (ctx->pc == 0x2FED90u) {
        ctx->pc = 0x2FED90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x2FED94u;
        goto label_2fed94;
    }
    ctx->pc = 0x2FED8Cu;
    {
        const bool branch_taken_0x2fed8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x2fed8c) {
            ctx->pc = 0x2FEDA0u;
            goto label_2feda0;
        }
    }
    ctx->pc = 0x2FED94u;
label_2fed94:
    // 0x2fed94: 0x26940008
    ctx->pc = 0x2fed94u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_2fed98:
    // 0x2fed98: 0x10000006
label_2fed9c:
    if (ctx->pc == 0x2FED9Cu) {
        ctx->pc = 0x2FED9Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FEDA0u;
        goto label_2feda0;
    }
    ctx->pc = 0x2FED98u;
    {
        const bool branch_taken_0x2fed98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FED9Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2fed98) {
            ctx->pc = 0x2FEDB4u;
            goto label_2fedb4;
        }
    }
    ctx->pc = 0x2FEDA0u;
label_2feda0:
    // 0x2feda0: 0x10400003
label_2feda4:
    if (ctx->pc == 0x2FEDA4u) {
        ctx->pc = 0x2FEDA4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x2FEDA8u;
        goto label_2feda8;
    }
    ctx->pc = 0x2FEDA0u;
    {
        const bool branch_taken_0x2feda0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEDA4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x2feda0) {
            ctx->pc = 0x2FEDB0u;
            goto label_2fedb0;
        }
    }
    ctx->pc = 0x2FEDA8u;
label_2feda8:
    // 0x2feda8: 0x10000002
label_2fedac:
    if (ctx->pc == 0x2FEDACu) {
        ctx->pc = 0x2FEDACu;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x2FEDB0u;
        goto label_2fedb0;
    }
    ctx->pc = 0x2FEDA8u;
    {
        const bool branch_taken_0x2feda8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEDACu;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x2feda8) {
            ctx->pc = 0x2FEDB4u;
            goto label_2fedb4;
        }
    }
    ctx->pc = 0x2FEDB0u;
label_2fedb0:
    // 0x2fedb0: 0x9e90fff8
    ctx->pc = 0x2fedb0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_2fedb4:
    // 0x2fedb4: 0x33c30001
    ctx->pc = 0x2fedb4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 1));
label_2fedb8:
    // 0x2fedb8: 0x10600003
label_2fedbc:
    if (ctx->pc == 0x2FEDBCu) {
        ctx->pc = 0x2FEDBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FEDC0u;
        goto label_2fedc0;
    }
    ctx->pc = 0x2FEDB8u;
    {
        const bool branch_taken_0x2fedb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEDBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2fedb8) {
            ctx->pc = 0x2FEDC8u;
            goto label_2fedc8;
        }
    }
    ctx->pc = 0x2FEDC0u;
label_2fedc0:
    // 0x2fedc0: 0x37c20002
    ctx->pc = 0x2fedc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 30), 2));
label_2fedc4:
    // 0x2fedc4: 0x50f00b
    ctx->pc = 0x2fedc4u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 2));
label_2fedc8:
    // 0x2fedc8: 0xa3a001d1
    ctx->pc = 0x2fedc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2fedcc:
    // 0x2fedcc: 0x6400003
label_2fedd0:
    if (ctx->pc == 0x2FEDD0u) {
        ctx->pc = 0x2FEDD0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->pc = 0x2FEDD4u;
        goto label_2fedd4;
    }
    ctx->pc = 0x2FEDCCu;
    {
        const bool branch_taken_0x2fedcc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2FEDD0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        if (branch_taken_0x2fedcc) {
            ctx->pc = 0x2FEDDCu;
            goto label_2feddc;
        }
    }
    ctx->pc = 0x2FEDD4u;
label_2fedd4:
    // 0x2fedd4: 0x2402ff7f
    ctx->pc = 0x2fedd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967167));
label_2fedd8:
    // 0x2fedd8: 0x3c2f024
    ctx->pc = 0x2fedd8u;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2feddc:
    // 0x2feddc: 0x16000004
label_2fede0:
    if (ctx->pc == 0x2FEDE0u) {
        ctx->pc = 0x2FEDE0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 444));
        ctx->pc = 0x2FEDE4u;
        goto label_2fede4;
    }
    ctx->pc = 0x2FEDDCu;
    {
        const bool branch_taken_0x2feddc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEDE0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 444));
        if (branch_taken_0x2feddc) {
            ctx->pc = 0x2FEDF0u;
            goto label_2fedf0;
        }
    }
    ctx->pc = 0x2FEDE4u;
label_2fede4:
    // 0x2fede4: 0x8fa5020c
    ctx->pc = 0x2fede4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_2fede8:
    // 0x2fede8: 0x10a0004d
label_2fedec:
    if (ctx->pc == 0x2FEDECu) {
        ctx->pc = 0x2FEDECu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2FEDF0u;
        goto label_2fedf0;
    }
    ctx->pc = 0x2FEDE8u;
    {
        const bool branch_taken_0x2fede8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEDECu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x2fede8) {
            ctx->pc = 0x2FEF20u;
            goto label_2fef20;
        }
    }
    ctx->pc = 0x2FEDF0u;
label_2fedf0:
    // 0x2fedf0: 0x24020001
    ctx->pc = 0x2fedf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2fedf4:
    // 0x2fedf4: 0x1082001f
label_2fedf8:
    if (ctx->pc == 0x2FEDF8u) {
        ctx->pc = 0x2FEDF8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
        ctx->pc = 0x2FEDFCu;
        goto label_2fedfc;
    }
    ctx->pc = 0x2FEDF4u;
    {
        const bool branch_taken_0x2fedf4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2FEDF8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
        if (branch_taken_0x2fedf4) {
            ctx->pc = 0x2FEE74u;
            goto label_2fee74;
        }
    }
    ctx->pc = 0x2FEDFCu;
label_2fedfc:
    // 0x2fedfc: 0x1080000a
label_2fee00:
    if (ctx->pc == 0x2FEE00u) {
        ctx->pc = 0x2FEE00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FEE04u;
        goto label_2fee04;
    }
    ctx->pc = 0x2FEDFCu;
    {
        const bool branch_taken_0x2fedfc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEE00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2fedfc) {
            ctx->pc = 0x2FEE28u;
            goto label_2fee28;
        }
    }
    ctx->pc = 0x2FEE04u;
label_2fee04:
    // 0x2fee04: 0x10820037
label_2fee08:
    if (ctx->pc == 0x2FEE08u) {
        ctx->pc = 0x2FEE08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2FEE0Cu;
        goto label_2fee0c;
    }
    ctx->pc = 0x2FEE04u;
    {
        const bool branch_taken_0x2fee04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2FEE08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2fee04) {
            ctx->pc = 0x2FEEE4u;
            goto label_2feee4;
        }
    }
    ctx->pc = 0x2FEE0Cu;
label_2fee0c:
    // 0x2fee0c: 0x26320008
    ctx->pc = 0x2fee0cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2fee10:
    // 0x2fee10: 0x2453a9c8
    ctx->pc = 0x2fee10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945224));
label_2fee14:
    // 0x2fee14: 0x33d60084
    ctx->pc = 0x2fee14u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_2fee18:
    // 0x2fee18: 0xc0bf306
label_2fee1c:
    if (ctx->pc == 0x2FEE1Cu) {
        ctx->pc = 0x2FEE1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE20u;
        goto label_2fee20;
    }
    ctx->pc = 0x2FEE18u;
    SET_GPR_U32(ctx, 31, 0x2FEE20u);
    ctx->pc = 0x2FEE1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE20u; }
    }
    if (ctx->pc != 0x2FEE20u) { return; }
    ctx->pc = 0x2FEE20u;
label_2fee20:
    // 0x2fee20: 0x1000004b
label_2fee24:
    if (ctx->pc == 0x2FEE24u) {
        ctx->pc = 0x2FEE24u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE28u;
        goto label_2fee28;
    }
    ctx->pc = 0x2FEE20u;
    {
        const bool branch_taken_0x2fee20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEE24u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2fee20) {
            ctx->pc = 0x2FEF50u;
            goto label_2fef50;
        }
    }
    ctx->pc = 0x2FEE28u;
label_2fee28:
    // 0x2fee28: 0x26320008
    ctx->pc = 0x2fee28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2fee2c:
    // 0x2fee2c: 0x27b50060
    ctx->pc = 0x2fee2cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_2fee30:
    // 0x2fee30: 0x33c30001
    ctx->pc = 0x2fee30u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 1));
label_2fee34:
    // 0x2fee34: 0x33d60084
    ctx->pc = 0x2fee34u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_2fee38:
    // 0x2fee38: 0x32020007
    ctx->pc = 0x2fee38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 7));
label_2fee3c:
    // 0x2fee3c: 0x2673ffff
    ctx->pc = 0x2fee3cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_2fee40:
    // 0x2fee40: 0x64420030
    ctx->pc = 0x2fee40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_2fee44:
    // 0x2fee44: 0x1080fa
    ctx->pc = 0x2fee44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_2fee48:
    // 0x2fee48: 0x304200ff
    ctx->pc = 0x2fee48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_2fee4c:
    // 0x2fee4c: 0xa2620000
    ctx->pc = 0x2fee4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_2fee50:
    // 0x2fee50: 0x1600fff9
label_2fee54:
    if (ctx->pc == 0x2FEE54u) {
        ctx->pc = 0x2FEE58u;
        goto label_2fee58;
    }
    ctx->pc = 0x2FEE50u;
    {
        const bool branch_taken_0x2fee50 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2fee50) {
            ctx->pc = 0x2FEE38u;
            goto label_2fee38;
        }
    }
    ctx->pc = 0x2FEE58u;
label_2fee58:
    // 0x2fee58: 0x10600033
label_2fee5c:
    if (ctx->pc == 0x2FEE5Cu) {
        ctx->pc = 0x2FEE5Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2FEE60u;
        goto label_2fee60;
    }
    ctx->pc = 0x2FEE58u;
    {
        const bool branch_taken_0x2fee58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEE5Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2fee58) {
            ctx->pc = 0x2FEF28u;
            goto label_2fef28;
        }
    }
    ctx->pc = 0x2FEE60u;
label_2fee60:
    // 0x2fee60: 0x10430032
label_2fee64:
    if (ctx->pc == 0x2FEE64u) {
        ctx->pc = 0x2FEE64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->pc = 0x2FEE68u;
        goto label_2fee68;
    }
    ctx->pc = 0x2FEE60u;
    {
        const bool branch_taken_0x2fee60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2FEE64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        if (branch_taken_0x2fee60) {
            ctx->pc = 0x2FEF2Cu;
            goto label_2fef2c;
        }
    }
    ctx->pc = 0x2FEE68u;
label_2fee68:
    // 0x2fee68: 0x2673ffff
    ctx->pc = 0x2fee68u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_2fee6c:
    // 0x2fee6c: 0x1000002e
label_2fee70:
    if (ctx->pc == 0x2FEE70u) {
        ctx->pc = 0x2FEE70u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2FEE74u;
        goto label_2fee74;
    }
    ctx->pc = 0x2FEE6Cu;
    {
        const bool branch_taken_0x2fee6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEE70u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2fee6c) {
            ctx->pc = 0x2FEF28u;
            goto label_2fef28;
        }
    }
    ctx->pc = 0x2FEE74u;
label_2fee74:
    // 0x2fee74: 0x14400014
label_2fee78:
    if (ctx->pc == 0x2FEE78u) {
        ctx->pc = 0x2FEE78u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2FEE7Cu;
        goto label_2fee7c;
    }
    ctx->pc = 0x2FEE74u;
    {
        const bool branch_taken_0x2fee74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEE78u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x2fee74) {
            ctx->pc = 0x2FEEC8u;
            goto label_2feec8;
        }
    }
    ctx->pc = 0x2FEE7Cu;
label_2fee7c:
    // 0x2fee7c: 0x27b50060
    ctx->pc = 0x2fee7cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_2fee80:
    // 0x2fee80: 0x33d60084
    ctx->pc = 0x2fee80u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_2fee84:
    // 0x2fee84: 0x0
    ctx->pc = 0x2fee84u;
    // NOP
label_2fee88:
    // 0x2fee88: 0x200202d
    ctx->pc = 0x2fee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fee8c:
    // 0x2fee8c: 0xc0be0ec
label_2fee90:
    if (ctx->pc == 0x2FEE90u) {
        ctx->pc = 0x2FEE90u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2FEE94u;
        goto label_2fee94;
    }
    ctx->pc = 0x2FEE8Cu;
    SET_GPR_U32(ctx, 31, 0x2FEE94u);
    ctx->pc = 0x2FEE90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2F83B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2f83b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEE94u; }
    }
    if (ctx->pc != 0x2FEE94u) { return; }
    ctx->pc = 0x2FEE94u;
label_2fee94:
    // 0x2fee94: 0x2673ffff
    ctx->pc = 0x2fee94u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_2fee98:
    // 0x2fee98: 0x64420030
    ctx->pc = 0x2fee98u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_2fee9c:
    // 0x2fee9c: 0x200202d
    ctx->pc = 0x2fee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2feea0:
    // 0x2feea0: 0x304200ff
    ctx->pc = 0x2feea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_2feea4:
    // 0x2feea4: 0x2405000a
    ctx->pc = 0x2feea4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
label_2feea8:
    // 0x2feea8: 0xc0bdf7a
label_2feeac:
    if (ctx->pc == 0x2FEEACu) {
        ctx->pc = 0x2FEEACu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FEEB0u;
        goto label_2feeb0;
    }
    ctx->pc = 0x2FEEA8u;
    SET_GPR_U32(ctx, 31, 0x2FEEB0u);
    ctx->pc = 0x2FEEACu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2F7DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x2f7de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEEB0u; }
    }
    if (ctx->pc != 0x2FEEB0u) { return; }
    ctx->pc = 0x2FEEB0u;
label_2feeb0:
    // 0x2feeb0: 0x40802d
    ctx->pc = 0x2feeb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2feeb4:
    // 0x2feeb4: 0x2e02000a
    ctx->pc = 0x2feeb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
label_2feeb8:
    // 0x2feeb8: 0x1040fff3
label_2feebc:
    if (ctx->pc == 0x2FEEBCu) {
        ctx->pc = 0x2FEEBCu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
        ctx->pc = 0x2FEEC0u;
        goto label_2feec0;
    }
    ctx->pc = 0x2FEEB8u;
    {
        const bool branch_taken_0x2feeb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEEBCu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
        if (branch_taken_0x2feeb8) {
            ctx->pc = 0x2FEE88u;
            goto label_2fee88;
        }
    }
    ctx->pc = 0x2FEEC0u;
label_2feec0:
    // 0x2feec0: 0x10000005
label_2feec4:
    if (ctx->pc == 0x2FEEC4u) {
        ctx->pc = 0x2FEEC4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x2FEEC8u;
        goto label_2feec8;
    }
    ctx->pc = 0x2FEEC0u;
    {
        const bool branch_taken_0x2feec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEEC4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        if (branch_taken_0x2feec0) {
            ctx->pc = 0x2FEED8u;
            goto label_2feed8;
        }
    }
    ctx->pc = 0x2FEEC8u;
label_2feec8:
    // 0x2feec8: 0x27b50060
    ctx->pc = 0x2feec8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_2feecc:
    // 0x2feecc: 0x33d60084
    ctx->pc = 0x2feeccu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_2feed0:
    // 0x2feed0: 0x66020030
    ctx->pc = 0x2feed0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
label_2feed4:
    // 0x2feed4: 0x2673ffff
    ctx->pc = 0x2feed4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_2feed8:
    // 0x2feed8: 0x304200ff
    ctx->pc = 0x2feed8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_2feedc:
    // 0x2feedc: 0x10000012
label_2feee0:
    if (ctx->pc == 0x2FEEE0u) {
        ctx->pc = 0x2FEEE0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2FEEE4u;
        goto label_2feee4;
    }
    ctx->pc = 0x2FEEDCu;
    {
        const bool branch_taken_0x2feedc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEEE0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2feedc) {
            ctx->pc = 0x2FEF28u;
            goto label_2fef28;
        }
    }
    ctx->pc = 0x2FEEE4u;
label_2feee4:
    // 0x2feee4: 0x26320008
    ctx->pc = 0x2feee4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2feee8:
    // 0x2feee8: 0x27b50060
    ctx->pc = 0x2feee8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_2feeec:
    // 0x2feeec: 0x33d60084
    ctx->pc = 0x2feeecu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_2feef0:
    // 0x2feef0: 0x3202000f
    ctx->pc = 0x2feef0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 15));
label_2feef4:
    // 0x2feef4: 0x8fa60214
    ctx->pc = 0x2feef4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_2feef8:
    // 0x2feef8: 0x2103c
    ctx->pc = 0x2feef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2feefc:
    // 0x2feefc: 0x2103f
    ctx->pc = 0x2feefcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2fef00:
    // 0x2fef00: 0x2673ffff
    ctx->pc = 0x2fef00u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_2fef04:
    // 0x2fef04: 0xc21021
    ctx->pc = 0x2fef04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2fef08:
    // 0x2fef08: 0x10813a
    ctx->pc = 0x2fef08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_2fef0c:
    // 0x2fef0c: 0x90430000
    ctx->pc = 0x2fef0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2fef10:
    // 0x2fef10: 0x1600fff7
label_2fef14:
    if (ctx->pc == 0x2FEF14u) {
        ctx->pc = 0x2FEF14u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2FEF18u;
        goto label_2fef18;
    }
    ctx->pc = 0x2FEF10u;
    {
        const bool branch_taken_0x2fef10 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEF14u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x2fef10) {
            ctx->pc = 0x2FEEF0u;
            goto label_2feef0;
        }
    }
    ctx->pc = 0x2FEF18u;
label_2fef18:
    // 0x2fef18: 0x10000004
label_2fef1c:
    if (ctx->pc == 0x2FEF1Cu) {
        ctx->pc = 0x2FEF1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->pc = 0x2FEF20u;
        goto label_2fef20;
    }
    ctx->pc = 0x2FEF18u;
    {
        const bool branch_taken_0x2fef18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEF1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        if (branch_taken_0x2fef18) {
            ctx->pc = 0x2FEF2Cu;
            goto label_2fef2c;
        }
    }
    ctx->pc = 0x2FEF20u;
label_2fef20:
    // 0x2fef20: 0x27b50060
    ctx->pc = 0x2fef20u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_2fef24:
    // 0x2fef24: 0x33d60084
    ctx->pc = 0x2fef24u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_2fef28:
    // 0x2fef28: 0x2662fea4
    ctx->pc = 0x2fef28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
label_2fef2c:
    // 0x2fef2c: 0x10000008
label_2fef30:
    if (ctx->pc == 0x2FEF30u) {
        ctx->pc = 0x2FEF30u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x2FEF34u;
        goto label_2fef34;
    }
    ctx->pc = 0x2FEF2Cu;
    {
        const bool branch_taken_0x2fef2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEF30u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x2fef2c) {
            ctx->pc = 0x2FEF50u;
            goto label_2fef50;
        }
    }
    ctx->pc = 0x2FEF34u;
label_2fef34:
    // 0x2fef34: 0x12e002fc
label_2fef38:
    if (ctx->pc == 0x2FEF38u) {
        ctx->pc = 0x2FEF38u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FEF3Cu;
        goto label_2fef3c;
    }
    ctx->pc = 0x2FEF34u;
    {
        const bool branch_taken_0x2fef34 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEF38u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 96));
        if (branch_taken_0x2fef34) {
            ctx->pc = 0x2FFB28u;
            goto label_2ffb28;
        }
    }
    ctx->pc = 0x2FEF3Cu;
label_2fef3c:
    // 0x2fef3c: 0xa3b70060
    ctx->pc = 0x2fef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
label_2fef40:
    // 0x2fef40: 0x24150001
    ctx->pc = 0x2fef40u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_2fef44:
    // 0x2fef44: 0xa3a001d1
    ctx->pc = 0x2fef44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_2fef48:
    // 0x2fef48: 0x26320008
    ctx->pc = 0x2fef48u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2fef4c:
    // 0x2fef4c: 0x33d60084
    ctx->pc = 0x2fef4cu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_2fef50:
    // 0x2fef50: 0xafb50210
    ctx->pc = 0x2fef50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
label_2fef54:
    // 0x2fef54: 0x8fa4020c
    ctx->pc = 0x2fef54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_2fef58:
    // 0x2fef58: 0x8fa5020c
    ctx->pc = 0x2fef58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_2fef5c:
    // 0x2fef5c: 0x2a4102a
    ctx->pc = 0x2fef5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 4)));
label_2fef60:
    // 0x2fef60: 0x83a301d1
    ctx->pc = 0x2fef60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_2fef64:
    // 0x2fef64: 0x2a2280a
    ctx->pc = 0x2fef64u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 21));
label_2fef68:
    // 0x2fef68: 0x93a401d1
    ctx->pc = 0x2fef68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_2fef6c:
    // 0x2fef6c: 0x10600004
label_2fef70:
    if (ctx->pc == 0x2FEF70u) {
        ctx->pc = 0x2FEF70u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->pc = 0x2FEF74u;
        goto label_2fef74;
    }
    ctx->pc = 0x2FEF6Cu;
    {
        const bool branch_taken_0x2fef6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEF70u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        if (branch_taken_0x2fef6c) {
            ctx->pc = 0x2FEF80u;
            goto label_2fef80;
        }
    }
    ctx->pc = 0x2FEF74u;
label_2fef74:
    // 0x2fef74: 0x24a50001
    ctx->pc = 0x2fef74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2fef78:
    // 0x2fef78: 0x10000005
label_2fef7c:
    if (ctx->pc == 0x2FEF7Cu) {
        ctx->pc = 0x2FEF7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->pc = 0x2FEF80u;
        goto label_2fef80;
    }
    ctx->pc = 0x2FEF78u;
    {
        const bool branch_taken_0x2fef78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEF7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        if (branch_taken_0x2fef78) {
            ctx->pc = 0x2FEF90u;
            goto label_2fef90;
        }
    }
    ctx->pc = 0x2FEF80u;
label_2fef80:
    // 0x2fef80: 0x8fa60210
    ctx->pc = 0x2fef80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2fef84:
    // 0x2fef84: 0x33c20002
    ctx->pc = 0x2fef84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 2));
label_2fef88:
    // 0x2fef88: 0x463021
    ctx->pc = 0x2fef88u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2fef8c:
    // 0x2fef8c: 0xafa60210
    ctx->pc = 0x2fef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_2fef90:
    // 0x2fef90: 0x16c00037
label_2fef94:
    if (ctx->pc == 0x2FEF94u) {
        ctx->pc = 0x2FEF94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->pc = 0x2FEF98u;
        goto label_2fef98;
    }
    ctx->pc = 0x2FEF90u;
    {
        const bool branch_taken_0x2fef90 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEF94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        if (branch_taken_0x2fef90) {
            ctx->pc = 0x2FF070u;
            goto label_2ff070;
        }
    }
    ctx->pc = 0x2FEF98u;
label_2fef98:
    // 0x2fef98: 0x8fa30210
    ctx->pc = 0x2fef98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2fef9c:
    // 0x2fef9c: 0x438023
    ctx->pc = 0x2fef9cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fefa0:
    // 0x2fefa0: 0x1a000033
label_2fefa4:
    if (ctx->pc == 0x2FEFA4u) {
        ctx->pc = 0x2FEFA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FEFA8u;
        goto label_2fefa8;
    }
    ctx->pc = 0x2FEFA0u;
    {
        const bool branch_taken_0x2fefa0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FEFA4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2fefa0) {
            ctx->pc = 0x2FF070u;
            goto label_2ff070;
        }
    }
    ctx->pc = 0x2FEFA8u;
label_2fefa8:
    // 0x2fefa8: 0x1440001b
label_2fefac:
    if (ctx->pc == 0x2FEFACu) {
        ctx->pc = 0x2FEFACu;
        SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
        ctx->pc = 0x2FEFB0u;
        goto label_2fefb0;
    }
    ctx->pc = 0x2FEFA8u;
    {
        const bool branch_taken_0x2fefa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEFACu;
        SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
        if (branch_taken_0x2fefa8) {
            ctx->pc = 0x2FF018u;
            goto label_2ff018;
        }
    }
    ctx->pc = 0x2FEFB0u;
label_2fefb0:
    // 0x2fefb0: 0x10000002
label_2fefb4:
    if (ctx->pc == 0x2FEFB4u) {
        ctx->pc = 0x2FEFB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FEFB8u;
        goto label_2fefb8;
    }
    ctx->pc = 0x2FEFB0u;
    {
        const bool branch_taken_0x2fefb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FEFB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x2fefb0) {
            ctx->pc = 0x2FEFBCu;
            goto label_2fefbc;
        }
    }
    ctx->pc = 0x2FEFB8u;
label_2fefb8:
    // 0x2fefb8: 0x24020010
    ctx->pc = 0x2fefb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2fefbc:
    // 0x2fefbc: 0x24c4a960
    ctx->pc = 0x2fefbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294945120));
label_2fefc0:
    // 0x2fefc0: 0xae240000
    ctx->pc = 0x2fefc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2fefc4:
    // 0x2fefc4: 0xae220004
    ctx->pc = 0x2fefc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2fefc8:
    // 0x2fefc8: 0x240882d
    ctx->pc = 0x2fefc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fefcc:
    // 0x2fefcc: 0x8fa30018
    ctx->pc = 0x2fefccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2fefd0:
    // 0x2fefd0: 0x8fa20014
    ctx->pc = 0x2fefd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2fefd4:
    // 0x2fefd4: 0x24630010
    ctx->pc = 0x2fefd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2fefd8:
    // 0x2fefd8: 0x24420001
    ctx->pc = 0x2fefd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2fefdc:
    // 0x2fefdc: 0xafa30018
    ctx->pc = 0x2fefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2fefe0:
    // 0x2fefe0: 0x28440008
    ctx->pc = 0x2fefe0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2fefe4:
    // 0x2fefe4: 0x14800008
label_2fefe8:
    if (ctx->pc == 0x2FEFE8u) {
        ctx->pc = 0x2FEFE8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FEFECu;
        goto label_2fefec;
    }
    ctx->pc = 0x2FEFE4u;
    {
        const bool branch_taken_0x2fefe4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FEFE8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2fefe4) {
            ctx->pc = 0x2FF008u;
            goto label_2ff008;
        }
    }
    ctx->pc = 0x2FEFECu;
label_2fefec:
    // 0x2fefec: 0x8fa401e8
    ctx->pc = 0x2fefecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2feff0:
    // 0x2feff0: 0x27a50010
    ctx->pc = 0x2feff0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_2feff4:
    // 0x2feff4: 0xc0bf940
label_2feff8:
    if (ctx->pc == 0x2FEFF8u) {
        ctx->pc = 0x2FEFF8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->pc = 0x2FEFFCu;
        goto label_2feffc;
    }
    ctx->pc = 0x2FEFF4u;
    SET_GPR_U32(ctx, 31, 0x2FEFFCu);
    ctx->pc = 0x2FEFF8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEFFCu; }
    }
    if (ctx->pc != 0x2FEFFCu) { return; }
    ctx->pc = 0x2FEFFCu;
label_2feffc:
    // 0x2feffc: 0x144002d2
label_2ff000:
    if (ctx->pc == 0x2FF000u) {
        ctx->pc = 0x2FF000u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->pc = 0x2FF004u;
        goto label_2ff004;
    }
    ctx->pc = 0x2FEFFCu;
    {
        const bool branch_taken_0x2feffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF000u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        if (branch_taken_0x2feffc) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF004u;
label_2ff004:
    // 0x2ff004: 0x27b10020
    ctx->pc = 0x2ff004u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
label_2ff008:
    // 0x2ff008: 0x2610fff0
    ctx->pc = 0x2ff008u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ff00c:
    // 0x2ff00c: 0x2a020011
    ctx->pc = 0x2ff00cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ff010:
    // 0x2ff010: 0x1040ffe9
label_2ff014:
    if (ctx->pc == 0x2FF014u) {
        ctx->pc = 0x2FF014u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2FF018u;
        goto label_2ff018;
    }
    ctx->pc = 0x2FF010u;
    {
        const bool branch_taken_0x2ff010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF014u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x2ff010) {
            ctx->pc = 0x2FEFB8u;
            goto label_2fefb8;
        }
    }
    ctx->pc = 0x2FF018u;
label_2ff018:
    // 0x2ff018: 0x24c2a960
    ctx->pc = 0x2ff018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294945120));
label_2ff01c:
    // 0x2ff01c: 0xae300004
    ctx->pc = 0x2ff01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff020:
    // 0x2ff020: 0xae220000
    ctx->pc = 0x2ff020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff024:
    // 0x2ff024: 0x8fa20014
    ctx->pc = 0x2ff024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff028:
    // 0x2ff028: 0x240882d
    ctx->pc = 0x2ff028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff02c:
    // 0x2ff02c: 0x8fa30018
    ctx->pc = 0x2ff02cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff030:
    // 0x2ff030: 0x24420001
    ctx->pc = 0x2ff030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff034:
    // 0x2ff034: 0x701821
    ctx->pc = 0x2ff034u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ff038:
    // 0x2ff038: 0x28440008
    ctx->pc = 0x2ff038u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff03c:
    // 0x2ff03c: 0xafa30018
    ctx->pc = 0x2ff03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff040:
    // 0x2ff040: 0x14800009
label_2ff044:
    if (ctx->pc == 0x2FF044u) {
        ctx->pc = 0x2FF044u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF048u;
        goto label_2ff048;
    }
    ctx->pc = 0x2FF040u;
    {
        const bool branch_taken_0x2ff040 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF044u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff040) {
            ctx->pc = 0x2FF068u;
            goto label_2ff068;
        }
    }
    ctx->pc = 0x2FF048u;
label_2ff048:
    // 0x2ff048: 0x8fa401e8
    ctx->pc = 0x2ff048u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff04c:
    // 0x2ff04c: 0xc0bf940
label_2ff050:
    if (ctx->pc == 0x2FF050u) {
        ctx->pc = 0x2FF050u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF054u;
        goto label_2ff054;
    }
    ctx->pc = 0x2FF04Cu;
    SET_GPR_U32(ctx, 31, 0x2FF054u);
    ctx->pc = 0x2FF050u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF054u; }
    }
    if (ctx->pc != 0x2FF054u) { return; }
    ctx->pc = 0x2FF054u;
label_2ff054:
    // 0x2ff054: 0x144002bc
label_2ff058:
    if (ctx->pc == 0x2FF058u) {
        ctx->pc = 0x2FF058u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF05Cu;
        goto label_2ff05c;
    }
    ctx->pc = 0x2FF054u;
    {
        const bool branch_taken_0x2ff054 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF058u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff054) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF05Cu;
label_2ff05c:
    // 0x2ff05c: 0x27b20028
    ctx->pc = 0x2ff05cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
label_2ff060:
    // 0x2ff060: 0x10000003
label_2ff064:
    if (ctx->pc == 0x2FF064u) {
        ctx->pc = 0x2FF064u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->pc = 0x2FF068u;
        goto label_2ff068;
    }
    ctx->pc = 0x2FF060u;
    {
        const bool branch_taken_0x2ff060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF064u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        if (branch_taken_0x2ff060) {
            ctx->pc = 0x2FF070u;
            goto label_2ff070;
        }
    }
    ctx->pc = 0x2FF068u;
label_2ff068:
    // 0x2ff068: 0x93a401d1
    ctx->pc = 0x2ff068u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_2ff06c:
    // 0x2ff06c: 0x26320008
    ctx->pc = 0x2ff06cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2ff070:
    // 0x2ff070: 0x1080000f
label_2ff074:
    if (ctx->pc == 0x2FF074u) {
        ctx->pc = 0x2FF074u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF078u;
        goto label_2ff078;
    }
    ctx->pc = 0x2FF070u;
    {
        const bool branch_taken_0x2ff070 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF074u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ff070) {
            ctx->pc = 0x2FF0B0u;
            goto label_2ff0b0;
        }
    }
    ctx->pc = 0x2FF078u;
label_2ff078:
    // 0x2ff078: 0x27a401d1
    ctx->pc = 0x2ff078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 465));
label_2ff07c:
    // 0x2ff07c: 0xae240000
    ctx->pc = 0x2ff07cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ff080:
    // 0x2ff080: 0xae220004
    ctx->pc = 0x2ff080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff084:
    // 0x2ff084: 0x240882d
    ctx->pc = 0x2ff084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff088:
    // 0x2ff088: 0x8fa30018
    ctx->pc = 0x2ff088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff08c:
    // 0x2ff08c: 0x8fa20014
    ctx->pc = 0x2ff08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff090:
    // 0x2ff090: 0x24630001
    ctx->pc = 0x2ff090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff094:
    // 0x2ff094: 0x24420001
    ctx->pc = 0x2ff094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff098:
    // 0x2ff098: 0xafa30018
    ctx->pc = 0x2ff098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff09c:
    // 0x2ff09c: 0x28440008
    ctx->pc = 0x2ff09cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff0a0:
    // 0x2ff0a0: 0x1480001c
label_2ff0a4:
    if (ctx->pc == 0x2FF0A4u) {
        ctx->pc = 0x2FF0A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF0A8u;
        goto label_2ff0a8;
    }
    ctx->pc = 0x2FF0A0u;
    {
        const bool branch_taken_0x2ff0a0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF0A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff0a0) {
            ctx->pc = 0x2FF114u;
            goto label_2ff114;
        }
    }
    ctx->pc = 0x2FF0A8u;
label_2ff0a8:
    // 0x2ff0a8: 0x10000014
label_2ff0ac:
    if (ctx->pc == 0x2FF0ACu) {
        ctx->pc = 0x2FF0ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FF0B0u;
        goto label_2ff0b0;
    }
    ctx->pc = 0x2FF0A8u;
    {
        const bool branch_taken_0x2ff0a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF0ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ff0a8) {
            ctx->pc = 0x2FF0FCu;
            goto label_2ff0fc;
        }
    }
    ctx->pc = 0x2FF0B0u;
label_2ff0b0:
    // 0x2ff0b0: 0x33c20002
    ctx->pc = 0x2ff0b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 2));
label_2ff0b4:
    // 0x2ff0b4: 0x10400018
label_2ff0b8:
    if (ctx->pc == 0x2FF0B8u) {
        ctx->pc = 0x2FF0B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2FF0BCu;
        goto label_2ff0bc;
    }
    ctx->pc = 0x2FF0B4u;
    {
        const bool branch_taken_0x2ff0b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF0B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2ff0b4) {
            ctx->pc = 0x2FF118u;
            goto label_2ff118;
        }
    }
    ctx->pc = 0x2FF0BCu;
label_2ff0bc:
    // 0x2ff0bc: 0xa3b701c1
    ctx->pc = 0x2ff0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
label_2ff0c0:
    // 0x2ff0c0: 0xa3a301c0
    ctx->pc = 0x2ff0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
label_2ff0c4:
    // 0x2ff0c4: 0x24020002
    ctx->pc = 0x2ff0c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2ff0c8:
    // 0x2ff0c8: 0x27a301c0
    ctx->pc = 0x2ff0c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 448));
label_2ff0cc:
    // 0x2ff0cc: 0xae220004
    ctx->pc = 0x2ff0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff0d0:
    // 0x2ff0d0: 0xae230000
    ctx->pc = 0x2ff0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ff0d4:
    // 0x2ff0d4: 0x240882d
    ctx->pc = 0x2ff0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff0d8:
    // 0x2ff0d8: 0x8fa40018
    ctx->pc = 0x2ff0d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff0dc:
    // 0x2ff0dc: 0x8fa20014
    ctx->pc = 0x2ff0dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff0e0:
    // 0x2ff0e0: 0x24840002
    ctx->pc = 0x2ff0e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_2ff0e4:
    // 0x2ff0e4: 0x24420001
    ctx->pc = 0x2ff0e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff0e8:
    // 0x2ff0e8: 0xafa40018
    ctx->pc = 0x2ff0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2ff0ec:
    // 0x2ff0ec: 0x28430008
    ctx->pc = 0x2ff0ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
label_2ff0f0:
    // 0x2ff0f0: 0x14600008
label_2ff0f4:
    if (ctx->pc == 0x2FF0F4u) {
        ctx->pc = 0x2FF0F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF0F8u;
        goto label_2ff0f8;
    }
    ctx->pc = 0x2FF0F0u;
    {
        const bool branch_taken_0x2ff0f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF0F4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff0f0) {
            ctx->pc = 0x2FF114u;
            goto label_2ff114;
        }
    }
    ctx->pc = 0x2FF0F8u;
label_2ff0f8:
    // 0x2ff0f8: 0x8fa401e8
    ctx->pc = 0x2ff0f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff0fc:
    // 0x2ff0fc: 0xc0bf940
label_2ff100:
    if (ctx->pc == 0x2FF100u) {
        ctx->pc = 0x2FF100u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF104u;
        goto label_2ff104;
    }
    ctx->pc = 0x2FF0FCu;
    SET_GPR_U32(ctx, 31, 0x2FF104u);
    ctx->pc = 0x2FF100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF104u; }
    }
    if (ctx->pc != 0x2FF104u) { return; }
    ctx->pc = 0x2FF104u;
label_2ff104:
    // 0x2ff104: 0x14400290
label_2ff108:
    if (ctx->pc == 0x2FF108u) {
        ctx->pc = 0x2FF108u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF10Cu;
        goto label_2ff10c;
    }
    ctx->pc = 0x2FF104u;
    {
        const bool branch_taken_0x2ff104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF108u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff104) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF10Cu;
label_2ff10c:
    // 0x2ff10c: 0x10000002
label_2ff110:
    if (ctx->pc == 0x2FF110u) {
        ctx->pc = 0x2FF110u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x2FF114u;
        goto label_2ff114;
    }
    ctx->pc = 0x2FF10Cu;
    {
        const bool branch_taken_0x2ff10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF110u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        if (branch_taken_0x2ff10c) {
            ctx->pc = 0x2FF118u;
            goto label_2ff118;
        }
    }
    ctx->pc = 0x2FF114u;
label_2ff114:
    // 0x2ff114: 0x26320008
    ctx->pc = 0x2ff114u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2ff118:
    // 0x2ff118: 0x24020080
    ctx->pc = 0x2ff118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2ff11c:
    // 0x2ff11c: 0x16c20035
label_2ff120:
    if (ctx->pc == 0x2FF120u) {
        ctx->pc = 0x2FF120u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->pc = 0x2FF124u;
        goto label_2ff124;
    }
    ctx->pc = 0x2FF11Cu;
    {
        const bool branch_taken_0x2ff11c = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FF120u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x2ff11c) {
            ctx->pc = 0x2FF1F4u;
            goto label_2ff1f4;
        }
    }
    ctx->pc = 0x2FF124u;
label_2ff124:
    // 0x2ff124: 0x8fa401f4
    ctx->pc = 0x2ff124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_2ff128:
    // 0x2ff128: 0x8fa50210
    ctx->pc = 0x2ff128u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2ff12c:
    // 0x2ff12c: 0x858023
    ctx->pc = 0x2ff12cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2ff130:
    // 0x2ff130: 0x1a000030
label_2ff134:
    if (ctx->pc == 0x2FF134u) {
        ctx->pc = 0x2FF134u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FF138u;
        goto label_2ff138;
    }
    ctx->pc = 0x2FF130u;
    {
        const bool branch_taken_0x2ff130 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FF134u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2ff130) {
            ctx->pc = 0x2FF1F4u;
            goto label_2ff1f4;
        }
    }
    ctx->pc = 0x2FF138u;
label_2ff138:
    // 0x2ff138: 0x14400019
label_2ff13c:
    if (ctx->pc == 0x2FF13Cu) {
        ctx->pc = 0x2FF13Cu;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        ctx->pc = 0x2FF140u;
        goto label_2ff140;
    }
    ctx->pc = 0x2FF138u;
    {
        const bool branch_taken_0x2ff138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF13Cu;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        if (branch_taken_0x2ff138) {
            ctx->pc = 0x2FF1A0u;
            goto label_2ff1a0;
        }
    }
    ctx->pc = 0x2FF140u;
label_2ff140:
    // 0x2ff140: 0x10000002
label_2ff144:
    if (ctx->pc == 0x2FF144u) {
        ctx->pc = 0x2FF144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF148u;
        goto label_2ff148;
    }
    ctx->pc = 0x2FF140u;
    {
        const bool branch_taken_0x2ff140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x2ff140) {
            ctx->pc = 0x2FF14Cu;
            goto label_2ff14c;
        }
    }
    ctx->pc = 0x2FF148u;
label_2ff148:
    // 0x2ff148: 0x24020010
    ctx->pc = 0x2ff148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2ff14c:
    // 0x2ff14c: 0x26c4a970
    ctx->pc = 0x2ff14cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff150:
    // 0x2ff150: 0xae240000
    ctx->pc = 0x2ff150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ff154:
    // 0x2ff154: 0xae220004
    ctx->pc = 0x2ff154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff158:
    // 0x2ff158: 0x240882d
    ctx->pc = 0x2ff158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff15c:
    // 0x2ff15c: 0x8fa30018
    ctx->pc = 0x2ff15cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff160:
    // 0x2ff160: 0x8fa20014
    ctx->pc = 0x2ff160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff164:
    // 0x2ff164: 0x24630010
    ctx->pc = 0x2ff164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2ff168:
    // 0x2ff168: 0x24420001
    ctx->pc = 0x2ff168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff16c:
    // 0x2ff16c: 0xafa30018
    ctx->pc = 0x2ff16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff170:
    // 0x2ff170: 0x28440008
    ctx->pc = 0x2ff170u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff174:
    // 0x2ff174: 0x14800006
label_2ff178:
    if (ctx->pc == 0x2FF178u) {
        ctx->pc = 0x2FF178u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF17Cu;
        goto label_2ff17c;
    }
    ctx->pc = 0x2FF174u;
    {
        const bool branch_taken_0x2ff174 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF178u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff174) {
            ctx->pc = 0x2FF190u;
            goto label_2ff190;
        }
    }
    ctx->pc = 0x2FF17Cu;
label_2ff17c:
    // 0x2ff17c: 0x8fa401e8
    ctx->pc = 0x2ff17cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff180:
    // 0x2ff180: 0xc0bf940
label_2ff184:
    if (ctx->pc == 0x2FF184u) {
        ctx->pc = 0x2FF184u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF188u;
        goto label_2ff188;
    }
    ctx->pc = 0x2FF180u;
    SET_GPR_U32(ctx, 31, 0x2FF188u);
    ctx->pc = 0x2FF184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF188u; }
    }
    if (ctx->pc != 0x2FF188u) { return; }
    ctx->pc = 0x2FF188u;
label_2ff188:
    // 0x2ff188: 0x1440026f
label_2ff18c:
    if (ctx->pc == 0x2FF18Cu) {
        ctx->pc = 0x2FF18Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF190u;
        goto label_2ff190;
    }
    ctx->pc = 0x2FF188u;
    {
        const bool branch_taken_0x2ff188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF18Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff188) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF190u;
label_2ff190:
    // 0x2ff190: 0x2610fff0
    ctx->pc = 0x2ff190u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ff194:
    // 0x2ff194: 0x2a020011
    ctx->pc = 0x2ff194u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ff198:
    // 0x2ff198: 0x1040ffeb
label_2ff19c:
    if (ctx->pc == 0x2FF19Cu) {
        ctx->pc = 0x2FF19Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2FF1A0u;
        goto label_2ff1a0;
    }
    ctx->pc = 0x2FF198u;
    {
        const bool branch_taken_0x2ff198 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF19Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x2ff198) {
            ctx->pc = 0x2FF148u;
            goto label_2ff148;
        }
    }
    ctx->pc = 0x2FF1A0u;
label_2ff1a0:
    // 0x2ff1a0: 0x26c2a970
    ctx->pc = 0x2ff1a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff1a4:
    // 0x2ff1a4: 0xae300004
    ctx->pc = 0x2ff1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff1a8:
    // 0x2ff1a8: 0xae220000
    ctx->pc = 0x2ff1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff1ac:
    // 0x2ff1ac: 0x8fa20014
    ctx->pc = 0x2ff1acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff1b0:
    // 0x2ff1b0: 0x240882d
    ctx->pc = 0x2ff1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff1b4:
    // 0x2ff1b4: 0x8fa30018
    ctx->pc = 0x2ff1b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff1b8:
    // 0x2ff1b8: 0x24420001
    ctx->pc = 0x2ff1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff1bc:
    // 0x2ff1bc: 0x701821
    ctx->pc = 0x2ff1bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ff1c0:
    // 0x2ff1c0: 0x28440008
    ctx->pc = 0x2ff1c0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff1c4:
    // 0x2ff1c4: 0xafa30018
    ctx->pc = 0x2ff1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff1c8:
    // 0x2ff1c8: 0x14800008
label_2ff1cc:
    if (ctx->pc == 0x2FF1CCu) {
        ctx->pc = 0x2FF1CCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF1D0u;
        goto label_2ff1d0;
    }
    ctx->pc = 0x2FF1C8u;
    {
        const bool branch_taken_0x2ff1c8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF1CCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff1c8) {
            ctx->pc = 0x2FF1ECu;
            goto label_2ff1ec;
        }
    }
    ctx->pc = 0x2FF1D0u;
label_2ff1d0:
    // 0x2ff1d0: 0x8fa401e8
    ctx->pc = 0x2ff1d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff1d4:
    // 0x2ff1d4: 0xc0bf940
label_2ff1d8:
    if (ctx->pc == 0x2FF1D8u) {
        ctx->pc = 0x2FF1D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF1DCu;
        goto label_2ff1dc;
    }
    ctx->pc = 0x2FF1D4u;
    SET_GPR_U32(ctx, 31, 0x2FF1DCu);
    ctx->pc = 0x2FF1D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF1DCu; }
    }
    if (ctx->pc != 0x2FF1DCu) { return; }
    ctx->pc = 0x2FF1DCu;
label_2ff1dc:
    // 0x2ff1dc: 0x1440025a
label_2ff1e0:
    if (ctx->pc == 0x2FF1E0u) {
        ctx->pc = 0x2FF1E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF1E4u;
        goto label_2ff1e4;
    }
    ctx->pc = 0x2FF1DCu;
    {
        const bool branch_taken_0x2ff1dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF1E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff1dc) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF1E4u;
label_2ff1e4:
    // 0x2ff1e4: 0x10000002
label_2ff1e8:
    if (ctx->pc == 0x2FF1E8u) {
        ctx->pc = 0x2FF1E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x2FF1ECu;
        goto label_2ff1ec;
    }
    ctx->pc = 0x2FF1E4u;
    {
        const bool branch_taken_0x2ff1e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF1E8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        if (branch_taken_0x2ff1e4) {
            ctx->pc = 0x2FF1F0u;
            goto label_2ff1f0;
        }
    }
    ctx->pc = 0x2FF1ECu;
label_2ff1ec:
    // 0x2ff1ec: 0x26320008
    ctx->pc = 0x2ff1ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2ff1f0:
    // 0x2ff1f0: 0x8fa6020c
    ctx->pc = 0x2ff1f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_2ff1f4:
    // 0x2ff1f4: 0xd58023
    ctx->pc = 0x2ff1f4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_2ff1f8:
    // 0x2ff1f8: 0x1a00002f
label_2ff1fc:
    if (ctx->pc == 0x2FF1FCu) {
        ctx->pc = 0x2FF1FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FF200u;
        goto label_2ff200;
    }
    ctx->pc = 0x2FF1F8u;
    {
        const bool branch_taken_0x2ff1f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FF1FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2ff1f8) {
            ctx->pc = 0x2FF2B8u;
            goto label_2ff2b8;
        }
    }
    ctx->pc = 0x2FF200u;
label_2ff200:
    // 0x2ff200: 0x14400019
label_2ff204:
    if (ctx->pc == 0x2FF204u) {
        ctx->pc = 0x2FF204u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        ctx->pc = 0x2FF208u;
        goto label_2ff208;
    }
    ctx->pc = 0x2FF200u;
    {
        const bool branch_taken_0x2ff200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF204u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        if (branch_taken_0x2ff200) {
            ctx->pc = 0x2FF268u;
            goto label_2ff268;
        }
    }
    ctx->pc = 0x2FF208u;
label_2ff208:
    // 0x2ff208: 0x10000002
label_2ff20c:
    if (ctx->pc == 0x2FF20Cu) {
        ctx->pc = 0x2FF20Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2FF210u;
        goto label_2ff210;
    }
    ctx->pc = 0x2FF208u;
    {
        const bool branch_taken_0x2ff208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF20Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x2ff208) {
            ctx->pc = 0x2FF214u;
            goto label_2ff214;
        }
    }
    ctx->pc = 0x2FF210u;
label_2ff210:
    // 0x2ff210: 0x24020010
    ctx->pc = 0x2ff210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2ff214:
    // 0x2ff214: 0x26c4a970
    ctx->pc = 0x2ff214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff218:
    // 0x2ff218: 0xae240000
    ctx->pc = 0x2ff218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ff21c:
    // 0x2ff21c: 0xae220004
    ctx->pc = 0x2ff21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff220:
    // 0x2ff220: 0x240882d
    ctx->pc = 0x2ff220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff224:
    // 0x2ff224: 0x8fa30018
    ctx->pc = 0x2ff224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff228:
    // 0x2ff228: 0x8fa20014
    ctx->pc = 0x2ff228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff22c:
    // 0x2ff22c: 0x24630010
    ctx->pc = 0x2ff22cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2ff230:
    // 0x2ff230: 0x24420001
    ctx->pc = 0x2ff230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff234:
    // 0x2ff234: 0xafa30018
    ctx->pc = 0x2ff234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff238:
    // 0x2ff238: 0x28440008
    ctx->pc = 0x2ff238u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff23c:
    // 0x2ff23c: 0x14800006
label_2ff240:
    if (ctx->pc == 0x2FF240u) {
        ctx->pc = 0x2FF240u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF244u;
        goto label_2ff244;
    }
    ctx->pc = 0x2FF23Cu;
    {
        const bool branch_taken_0x2ff23c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF240u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff23c) {
            ctx->pc = 0x2FF258u;
            goto label_2ff258;
        }
    }
    ctx->pc = 0x2FF244u;
label_2ff244:
    // 0x2ff244: 0x8fa401e8
    ctx->pc = 0x2ff244u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff248:
    // 0x2ff248: 0xc0bf940
label_2ff24c:
    if (ctx->pc == 0x2FF24Cu) {
        ctx->pc = 0x2FF24Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF250u;
        goto label_2ff250;
    }
    ctx->pc = 0x2FF248u;
    SET_GPR_U32(ctx, 31, 0x2FF250u);
    ctx->pc = 0x2FF24Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF250u; }
    }
    if (ctx->pc != 0x2FF250u) { return; }
    ctx->pc = 0x2FF250u;
label_2ff250:
    // 0x2ff250: 0x1440023d
label_2ff254:
    if (ctx->pc == 0x2FF254u) {
        ctx->pc = 0x2FF254u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF258u;
        goto label_2ff258;
    }
    ctx->pc = 0x2FF250u;
    {
        const bool branch_taken_0x2ff250 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF254u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff250) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF258u;
label_2ff258:
    // 0x2ff258: 0x2610fff0
    ctx->pc = 0x2ff258u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ff25c:
    // 0x2ff25c: 0x2a020011
    ctx->pc = 0x2ff25cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ff260:
    // 0x2ff260: 0x1040ffeb
label_2ff264:
    if (ctx->pc == 0x2FF264u) {
        ctx->pc = 0x2FF264u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2FF268u;
        goto label_2ff268;
    }
    ctx->pc = 0x2FF260u;
    {
        const bool branch_taken_0x2ff260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF264u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x2ff260) {
            ctx->pc = 0x2FF210u;
            goto label_2ff210;
        }
    }
    ctx->pc = 0x2FF268u;
label_2ff268:
    // 0x2ff268: 0x26c2a970
    ctx->pc = 0x2ff268u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff26c:
    // 0x2ff26c: 0xae300004
    ctx->pc = 0x2ff26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff270:
    // 0x2ff270: 0xae220000
    ctx->pc = 0x2ff270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff274:
    // 0x2ff274: 0x8fa20014
    ctx->pc = 0x2ff274u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff278:
    // 0x2ff278: 0x240882d
    ctx->pc = 0x2ff278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff27c:
    // 0x2ff27c: 0x8fa30018
    ctx->pc = 0x2ff27cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff280:
    // 0x2ff280: 0x24420001
    ctx->pc = 0x2ff280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff284:
    // 0x2ff284: 0x701821
    ctx->pc = 0x2ff284u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ff288:
    // 0x2ff288: 0x28440008
    ctx->pc = 0x2ff288u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff28c:
    // 0x2ff28c: 0xafa30018
    ctx->pc = 0x2ff28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff290:
    // 0x2ff290: 0x14800008
label_2ff294:
    if (ctx->pc == 0x2FF294u) {
        ctx->pc = 0x2FF294u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF298u;
        goto label_2ff298;
    }
    ctx->pc = 0x2FF290u;
    {
        const bool branch_taken_0x2ff290 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF294u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff290) {
            ctx->pc = 0x2FF2B4u;
            goto label_2ff2b4;
        }
    }
    ctx->pc = 0x2FF298u;
label_2ff298:
    // 0x2ff298: 0x8fa401e8
    ctx->pc = 0x2ff298u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff29c:
    // 0x2ff29c: 0xc0bf940
label_2ff2a0:
    if (ctx->pc == 0x2FF2A0u) {
        ctx->pc = 0x2FF2A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF2A4u;
        goto label_2ff2a4;
    }
    ctx->pc = 0x2FF29Cu;
    SET_GPR_U32(ctx, 31, 0x2FF2A4u);
    ctx->pc = 0x2FF2A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2A4u; }
    }
    if (ctx->pc != 0x2FF2A4u) { return; }
    ctx->pc = 0x2FF2A4u;
label_2ff2a4:
    // 0x2ff2a4: 0x14400228
label_2ff2a8:
    if (ctx->pc == 0x2FF2A8u) {
        ctx->pc = 0x2FF2A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF2ACu;
        goto label_2ff2ac;
    }
    ctx->pc = 0x2FF2A4u;
    {
        const bool branch_taken_0x2ff2a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF2A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff2a4) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF2ACu;
label_2ff2ac:
    // 0x2ff2ac: 0x10000002
label_2ff2b0:
    if (ctx->pc == 0x2FF2B0u) {
        ctx->pc = 0x2FF2B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x2FF2B4u;
        goto label_2ff2b4;
    }
    ctx->pc = 0x2FF2ACu;
    {
        const bool branch_taken_0x2ff2ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF2B0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        if (branch_taken_0x2ff2ac) {
            ctx->pc = 0x2FF2B8u;
            goto label_2ff2b8;
        }
    }
    ctx->pc = 0x2FF2B4u;
label_2ff2b4:
    // 0x2ff2b4: 0x26320008
    ctx->pc = 0x2ff2b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_2ff2b8:
    // 0x2ff2b8: 0x33c20100
    ctx->pc = 0x2ff2b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 256));
label_2ff2bc:
    // 0x2ff2bc: 0x54400008
label_2ff2c0:
    if (ctx->pc == 0x2FF2C0u) {
        ctx->pc = 0x2FF2C0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 102));
        ctx->pc = 0x2FF2C4u;
        goto label_2ff2c4;
    }
    ctx->pc = 0x2FF2BCu;
    {
        const bool branch_taken_0x2ff2bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ff2bc) {
            ctx->pc = 0x2FF2C0u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 102));
            ctx->pc = 0x2FF2E0u;
            goto label_2ff2e0;
        }
    }
    ctx->pc = 0x2FF2C4u;
label_2ff2c4:
    // 0x2ff2c4: 0xae350004
    ctx->pc = 0x2ff2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
label_2ff2c8:
    // 0x2ff2c8: 0xae330000
    ctx->pc = 0x2ff2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2ff2cc:
    // 0x2ff2cc: 0x240882d
    ctx->pc = 0x2ff2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff2d0:
    // 0x2ff2d0: 0x8fa20018
    ctx->pc = 0x2ff2d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff2d4:
    // 0x2ff2d4: 0x8fa30014
    ctx->pc = 0x2ff2d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff2d8:
    // 0x2ff2d8: 0x100001c3
label_2ff2dc:
    if (ctx->pc == 0x2FF2DCu) {
        ctx->pc = 0x2FF2DCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->pc = 0x2FF2E0u;
        goto label_2ff2e0;
    }
    ctx->pc = 0x2FF2D8u;
    {
        const bool branch_taken_0x2ff2d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF2DCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x2ff2d8) {
            ctx->pc = 0x2FF9E8u;
            goto label_2ff9e8;
        }
    }
    ctx->pc = 0x2FF2E0u;
label_2ff2e0:
    // 0x2ff2e0: 0x1440014e
label_2ff2e4:
    if (ctx->pc == 0x2FF2E4u) {
        ctx->pc = 0x2FF2E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x2FF2E8u;
        goto label_2ff2e8;
    }
    ctx->pc = 0x2FF2E0u;
    {
        const bool branch_taken_0x2ff2e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF2E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x2ff2e0) {
            ctx->pc = 0x2FF81Cu;
            goto label_2ff81c;
        }
    }
    ctx->pc = 0x2FF2E8u;
label_2ff2e8:
    // 0x2ff2e8: 0xdfa40200
    ctx->pc = 0x2ff2e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_2ff2ec:
    // 0x2ff2ec: 0xc0be4ba
label_2ff2f0:
    if (ctx->pc == 0x2FF2F0u) {
        ctx->pc = 0x2FF2F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2F4u;
        goto label_2ff2f4;
    }
    ctx->pc = 0x2FF2ECu;
    SET_GPR_U32(ctx, 31, 0x2FF2F4u);
    ctx->pc = 0x2FF2F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF2F4u; }
    }
    if (ctx->pc != 0x2FF2F4u) { return; }
    ctx->pc = 0x2FF2F4u;
label_2ff2f4:
    // 0x2ff2f4: 0x14400058
label_2ff2f8:
    if (ctx->pc == 0x2FF2F8u) {
        ctx->pc = 0x2FF2F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->pc = 0x2FF2FCu;
        goto label_2ff2fc;
    }
    ctx->pc = 0x2FF2F4u;
    {
        const bool branch_taken_0x2ff2f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF2F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        if (branch_taken_0x2ff2f4) {
            ctx->pc = 0x2FF458u;
            goto label_2ff458;
        }
    }
    ctx->pc = 0x2FF2FCu;
label_2ff2fc:
    // 0x2ff2fc: 0x3c02003c
    ctx->pc = 0x2ff2fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2ff300:
    // 0x2ff300: 0x24100001
    ctx->pc = 0x2ff300u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_2ff304:
    // 0x2ff304: 0x2442a9e8
    ctx->pc = 0x2ff304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945256));
label_2ff308:
    // 0x2ff308: 0xae300004
    ctx->pc = 0x2ff308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff30c:
    // 0x2ff30c: 0xae220000
    ctx->pc = 0x2ff30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff310:
    // 0x2ff310: 0x8fa20014
    ctx->pc = 0x2ff310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff314:
    // 0x2ff314: 0x240882d
    ctx->pc = 0x2ff314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff318:
    // 0x2ff318: 0x8fa30018
    ctx->pc = 0x2ff318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff31c:
    // 0x2ff31c: 0x24420001
    ctx->pc = 0x2ff31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff320:
    // 0x2ff320: 0x24630001
    ctx->pc = 0x2ff320u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff324:
    // 0x2ff324: 0x28440008
    ctx->pc = 0x2ff324u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff328:
    // 0x2ff328: 0xafa30018
    ctx->pc = 0x2ff328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff32c:
    // 0x2ff32c: 0x14800006
label_2ff330:
    if (ctx->pc == 0x2FF330u) {
        ctx->pc = 0x2FF330u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF334u;
        goto label_2ff334;
    }
    ctx->pc = 0x2FF32Cu;
    {
        const bool branch_taken_0x2ff32c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF330u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff32c) {
            ctx->pc = 0x2FF348u;
            goto label_2ff348;
        }
    }
    ctx->pc = 0x2FF334u;
label_2ff334:
    // 0x2ff334: 0x8fa401e8
    ctx->pc = 0x2ff334u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff338:
    // 0x2ff338: 0xc0bf940
label_2ff33c:
    if (ctx->pc == 0x2FF33Cu) {
        ctx->pc = 0x2FF33Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF340u;
        goto label_2ff340;
    }
    ctx->pc = 0x2FF338u;
    SET_GPR_U32(ctx, 31, 0x2FF340u);
    ctx->pc = 0x2FF33Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF340u; }
    }
    if (ctx->pc != 0x2FF340u) { return; }
    ctx->pc = 0x2FF340u;
label_2ff340:
    // 0x2ff340: 0x14400201
label_2ff344:
    if (ctx->pc == 0x2FF344u) {
        ctx->pc = 0x2FF344u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF348u;
        goto label_2ff348;
    }
    ctx->pc = 0x2FF340u;
    {
        const bool branch_taken_0x2ff340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF344u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff340) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF348u;
label_2ff348:
    // 0x2ff348: 0x8fa201dc
    ctx->pc = 0x2ff348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ff34c:
    // 0x2ff34c: 0x8fa301e0
    ctx->pc = 0x2ff34cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff350:
    // 0x2ff350: 0x43102a
    ctx->pc = 0x2ff350u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2ff354:
    // 0x2ff354: 0x54400005
label_2ff358:
    if (ctx->pc == 0x2FF358u) {
        ctx->pc = 0x2FF358u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2FF35Cu;
        goto label_2ff35c;
    }
    ctx->pc = 0x2FF354u;
    {
        const bool branch_taken_0x2ff354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ff354) {
            ctx->pc = 0x2FF358u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->pc = 0x2FF36Cu;
            goto label_2ff36c;
        }
    }
    ctx->pc = 0x2FF35Cu;
label_2ff35c:
    // 0x2ff35c: 0x33c20001
    ctx->pc = 0x2ff35cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_2ff360:
    // 0x2ff360: 0x104001ad
label_2ff364:
    if (ctx->pc == 0x2FF364u) {
        ctx->pc = 0x2FF364u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x2FF368u;
        goto label_2ff368;
    }
    ctx->pc = 0x2FF360u;
    {
        const bool branch_taken_0x2ff360 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF364u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x2ff360) {
            ctx->pc = 0x2FFA18u;
            goto label_2ffa18;
        }
    }
    ctx->pc = 0x2FF368u;
label_2ff368:
    // 0x2ff368: 0xae300004
    ctx->pc = 0x2ff368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff36c:
    // 0x2ff36c: 0x8fa201f8
    ctx->pc = 0x2ff36cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_2ff370:
    // 0x2ff370: 0xae220000
    ctx->pc = 0x2ff370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff374:
    // 0x2ff374: 0x8fa20018
    ctx->pc = 0x2ff374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff378:
    // 0x2ff378: 0x26310008
    ctx->pc = 0x2ff378u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff37c:
    // 0x2ff37c: 0x8fa30014
    ctx->pc = 0x2ff37cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff380:
    // 0x2ff380: 0x24420001
    ctx->pc = 0x2ff380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff384:
    // 0x2ff384: 0x24630001
    ctx->pc = 0x2ff384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff388:
    // 0x2ff388: 0xafa20018
    ctx->pc = 0x2ff388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ff38c:
    // 0x2ff38c: 0x28640008
    ctx->pc = 0x2ff38cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_2ff390:
    // 0x2ff390: 0x14800006
label_2ff394:
    if (ctx->pc == 0x2FF394u) {
        ctx->pc = 0x2FF394u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2FF398u;
        goto label_2ff398;
    }
    ctx->pc = 0x2FF390u;
    {
        const bool branch_taken_0x2ff390 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF394u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x2ff390) {
            ctx->pc = 0x2FF3ACu;
            goto label_2ff3ac;
        }
    }
    ctx->pc = 0x2FF398u;
label_2ff398:
    // 0x2ff398: 0x8fa401e8
    ctx->pc = 0x2ff398u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff39c:
    // 0x2ff39c: 0xc0bf940
label_2ff3a0:
    if (ctx->pc == 0x2FF3A0u) {
        ctx->pc = 0x2FF3A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF3A4u;
        goto label_2ff3a4;
    }
    ctx->pc = 0x2FF39Cu;
    SET_GPR_U32(ctx, 31, 0x2FF3A4u);
    ctx->pc = 0x2FF3A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF3A4u; }
    }
    if (ctx->pc != 0x2FF3A4u) { return; }
    ctx->pc = 0x2FF3A4u;
label_2ff3a4:
    // 0x2ff3a4: 0x144001e8
label_2ff3a8:
    if (ctx->pc == 0x2FF3A8u) {
        ctx->pc = 0x2FF3A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF3ACu;
        goto label_2ff3ac;
    }
    ctx->pc = 0x2FF3A4u;
    {
        const bool branch_taken_0x2ff3a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF3A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff3a4) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF3ACu;
label_2ff3ac:
    // 0x2ff3ac: 0x8fa201e0
    ctx->pc = 0x2ff3acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff3b0:
    // 0x2ff3b0: 0x2450ffff
    ctx->pc = 0x2ff3b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ff3b4:
    // 0x2ff3b4: 0x1a000197
label_2ff3b8:
    if (ctx->pc == 0x2FF3B8u) {
        ctx->pc = 0x2FF3B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FF3BCu;
        goto label_2ff3bc;
    }
    ctx->pc = 0x2FF3B4u;
    {
        const bool branch_taken_0x2ff3b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FF3B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2ff3b4) {
            ctx->pc = 0x2FFA14u;
            goto label_2ffa14;
        }
    }
    ctx->pc = 0x2FF3BCu;
label_2ff3bc:
    // 0x2ff3bc: 0x1440001a
label_2ff3c0:
    if (ctx->pc == 0x2FF3C0u) {
        ctx->pc = 0x2FF3C0u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        ctx->pc = 0x2FF3C4u;
        goto label_2ff3c4;
    }
    ctx->pc = 0x2FF3BCu;
    {
        const bool branch_taken_0x2ff3bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF3C0u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        if (branch_taken_0x2ff3bc) {
            ctx->pc = 0x2FF428u;
            goto label_2ff428;
        }
    }
    ctx->pc = 0x2FF3C4u;
label_2ff3c4:
    // 0x2ff3c4: 0x0
    ctx->pc = 0x2ff3c4u;
    // NOP
label_2ff3c8:
    // 0x2ff3c8: 0x24020010
    ctx->pc = 0x2ff3c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2ff3cc:
    // 0x2ff3cc: 0x26c4a970
    ctx->pc = 0x2ff3ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff3d0:
    // 0x2ff3d0: 0xae240000
    ctx->pc = 0x2ff3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ff3d4:
    // 0x2ff3d4: 0xae220004
    ctx->pc = 0x2ff3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff3d8:
    // 0x2ff3d8: 0x26310008
    ctx->pc = 0x2ff3d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff3dc:
    // 0x2ff3dc: 0x8fa30018
    ctx->pc = 0x2ff3dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff3e0:
    // 0x2ff3e0: 0x8fa20014
    ctx->pc = 0x2ff3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff3e4:
    // 0x2ff3e4: 0x24630010
    ctx->pc = 0x2ff3e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2ff3e8:
    // 0x2ff3e8: 0x24420001
    ctx->pc = 0x2ff3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff3ec:
    // 0x2ff3ec: 0xafa30018
    ctx->pc = 0x2ff3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff3f0:
    // 0x2ff3f0: 0x28440008
    ctx->pc = 0x2ff3f0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff3f4:
    // 0x2ff3f4: 0x14800006
label_2ff3f8:
    if (ctx->pc == 0x2FF3F8u) {
        ctx->pc = 0x2FF3F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF3FCu;
        goto label_2ff3fc;
    }
    ctx->pc = 0x2FF3F4u;
    {
        const bool branch_taken_0x2ff3f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF3F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff3f4) {
            ctx->pc = 0x2FF410u;
            goto label_2ff410;
        }
    }
    ctx->pc = 0x2FF3FCu;
label_2ff3fc:
    // 0x2ff3fc: 0x8fa401e8
    ctx->pc = 0x2ff3fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff400:
    // 0x2ff400: 0xc0bf940
label_2ff404:
    if (ctx->pc == 0x2FF404u) {
        ctx->pc = 0x2FF404u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF408u;
        goto label_2ff408;
    }
    ctx->pc = 0x2FF400u;
    SET_GPR_U32(ctx, 31, 0x2FF408u);
    ctx->pc = 0x2FF404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF408u; }
    }
    if (ctx->pc != 0x2FF408u) { return; }
    ctx->pc = 0x2FF408u;
label_2ff408:
    // 0x2ff408: 0x144001cf
label_2ff40c:
    if (ctx->pc == 0x2FF40Cu) {
        ctx->pc = 0x2FF40Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF410u;
        goto label_2ff410;
    }
    ctx->pc = 0x2FF408u;
    {
        const bool branch_taken_0x2ff408 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF40Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff408) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF410u;
label_2ff410:
    // 0x2ff410: 0x2610fff0
    ctx->pc = 0x2ff410u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ff414:
    // 0x2ff414: 0x2a020011
    ctx->pc = 0x2ff414u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ff418:
    // 0x2ff418: 0x1040ffeb
label_2ff41c:
    if (ctx->pc == 0x2FF41Cu) {
        ctx->pc = 0x2FF41Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        ctx->pc = 0x2FF420u;
        goto label_2ff420;
    }
    ctx->pc = 0x2FF418u;
    {
        const bool branch_taken_0x2ff418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF41Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        if (branch_taken_0x2ff418) {
            ctx->pc = 0x2FF3C8u;
            goto label_2ff3c8;
        }
    }
    ctx->pc = 0x2FF420u;
label_2ff420:
    // 0x2ff420: 0x10000003
label_2ff424:
    if (ctx->pc == 0x2FF424u) {
        ctx->pc = 0x2FF424u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2FF428u;
        goto label_2ff428;
    }
    ctx->pc = 0x2FF420u;
    {
        const bool branch_taken_0x2ff420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF424u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x2ff420) {
            ctx->pc = 0x2FF430u;
            goto label_2ff430;
        }
    }
    ctx->pc = 0x2FF428u;
label_2ff428:
    // 0x2ff428: 0x26c2a970
    ctx->pc = 0x2ff428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff42c:
    // 0x2ff42c: 0xae300004
    ctx->pc = 0x2ff42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff430:
    // 0x2ff430: 0xae220000
    ctx->pc = 0x2ff430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff434:
    // 0x2ff434: 0x8fa20014
    ctx->pc = 0x2ff434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff438:
    // 0x2ff438: 0x26310008
    ctx->pc = 0x2ff438u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff43c:
    // 0x2ff43c: 0x8fa30018
    ctx->pc = 0x2ff43cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff440:
    // 0x2ff440: 0x24420001
    ctx->pc = 0x2ff440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff444:
    // 0x2ff444: 0x701821
    ctx->pc = 0x2ff444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ff448:
    // 0x2ff448: 0x28440008
    ctx->pc = 0x2ff448u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff44c:
    // 0x2ff44c: 0xafa30018
    ctx->pc = 0x2ff44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff450:
    // 0x2ff450: 0x10000169
label_2ff454:
    if (ctx->pc == 0x2FF454u) {
        ctx->pc = 0x2FF454u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF458u;
        goto label_2ff458;
    }
    ctx->pc = 0x2FF450u;
    {
        const bool branch_taken_0x2ff450 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF454u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff450) {
            ctx->pc = 0x2FF9F8u;
            goto label_2ff9f8;
        }
    }
    ctx->pc = 0x2FF458u;
label_2ff458:
    // 0x2ff458: 0x1c600063
label_2ff45c:
    if (ctx->pc == 0x2FF45Cu) {
        ctx->pc = 0x2FF45Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x2FF460u;
        goto label_2ff460;
    }
    ctx->pc = 0x2FF458u;
    {
        const bool branch_taken_0x2ff458 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2FF45Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x2ff458) {
            ctx->pc = 0x2FF5E8u;
            goto label_2ff5e8;
        }
    }
    ctx->pc = 0x2FF460u;
label_2ff460:
    // 0x2ff460: 0x3c02003c
    ctx->pc = 0x2ff460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2ff464:
    // 0x2ff464: 0x24100001
    ctx->pc = 0x2ff464u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_2ff468:
    // 0x2ff468: 0x2442a9e8
    ctx->pc = 0x2ff468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945256));
label_2ff46c:
    // 0x2ff46c: 0xae300004
    ctx->pc = 0x2ff46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff470:
    // 0x2ff470: 0xae220000
    ctx->pc = 0x2ff470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff474:
    // 0x2ff474: 0x8fa20014
    ctx->pc = 0x2ff474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff478:
    // 0x2ff478: 0x240882d
    ctx->pc = 0x2ff478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff47c:
    // 0x2ff47c: 0x8fa30018
    ctx->pc = 0x2ff47cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff480:
    // 0x2ff480: 0x24420001
    ctx->pc = 0x2ff480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff484:
    // 0x2ff484: 0x24630001
    ctx->pc = 0x2ff484u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff488:
    // 0x2ff488: 0x28440008
    ctx->pc = 0x2ff488u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff48c:
    // 0x2ff48c: 0xafa30018
    ctx->pc = 0x2ff48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff490:
    // 0x2ff490: 0x14800006
label_2ff494:
    if (ctx->pc == 0x2FF494u) {
        ctx->pc = 0x2FF494u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF498u;
        goto label_2ff498;
    }
    ctx->pc = 0x2FF490u;
    {
        const bool branch_taken_0x2ff490 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF494u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff490) {
            ctx->pc = 0x2FF4ACu;
            goto label_2ff4ac;
        }
    }
    ctx->pc = 0x2FF498u;
label_2ff498:
    // 0x2ff498: 0x8fa401e8
    ctx->pc = 0x2ff498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff49c:
    // 0x2ff49c: 0xc0bf940
label_2ff4a0:
    if (ctx->pc == 0x2FF4A0u) {
        ctx->pc = 0x2FF4A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF4A4u;
        goto label_2ff4a4;
    }
    ctx->pc = 0x2FF49Cu;
    SET_GPR_U32(ctx, 31, 0x2FF4A4u);
    ctx->pc = 0x2FF4A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4A4u; }
    }
    if (ctx->pc != 0x2FF4A4u) { return; }
    ctx->pc = 0x2FF4A4u;
label_2ff4a4:
    // 0x2ff4a4: 0x144001a8
label_2ff4a8:
    if (ctx->pc == 0x2FF4A8u) {
        ctx->pc = 0x2FF4A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF4ACu;
        goto label_2ff4ac;
    }
    ctx->pc = 0x2FF4A4u;
    {
        const bool branch_taken_0x2ff4a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF4A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff4a4) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF4ACu;
label_2ff4ac:
    // 0x2ff4ac: 0xae300004
    ctx->pc = 0x2ff4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff4b0:
    // 0x2ff4b0: 0x8fa301f8
    ctx->pc = 0x2ff4b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_2ff4b4:
    // 0x2ff4b4: 0xae230000
    ctx->pc = 0x2ff4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2ff4b8:
    // 0x2ff4b8: 0x8fa30014
    ctx->pc = 0x2ff4b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff4bc:
    // 0x2ff4bc: 0x26310008
    ctx->pc = 0x2ff4bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff4c0:
    // 0x2ff4c0: 0x8fa20018
    ctx->pc = 0x2ff4c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff4c4:
    // 0x2ff4c4: 0x24630001
    ctx->pc = 0x2ff4c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff4c8:
    // 0x2ff4c8: 0x24420001
    ctx->pc = 0x2ff4c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff4cc:
    // 0x2ff4cc: 0x28640008
    ctx->pc = 0x2ff4ccu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_2ff4d0:
    // 0x2ff4d0: 0xafa20018
    ctx->pc = 0x2ff4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ff4d4:
    // 0x2ff4d4: 0x14800006
label_2ff4d8:
    if (ctx->pc == 0x2FF4D8u) {
        ctx->pc = 0x2FF4D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2FF4DCu;
        goto label_2ff4dc;
    }
    ctx->pc = 0x2FF4D4u;
    {
        const bool branch_taken_0x2ff4d4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF4D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x2ff4d4) {
            ctx->pc = 0x2FF4F0u;
            goto label_2ff4f0;
        }
    }
    ctx->pc = 0x2FF4DCu;
label_2ff4dc:
    // 0x2ff4dc: 0x8fa401e8
    ctx->pc = 0x2ff4dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff4e0:
    // 0x2ff4e0: 0xc0bf940
label_2ff4e4:
    if (ctx->pc == 0x2FF4E4u) {
        ctx->pc = 0x2FF4E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF4E8u;
        goto label_2ff4e8;
    }
    ctx->pc = 0x2FF4E0u;
    SET_GPR_U32(ctx, 31, 0x2FF4E8u);
    ctx->pc = 0x2FF4E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF4E8u; }
    }
    if (ctx->pc != 0x2FF4E8u) { return; }
    ctx->pc = 0x2FF4E8u;
label_2ff4e8:
    // 0x2ff4e8: 0x14400197
label_2ff4ec:
    if (ctx->pc == 0x2FF4ECu) {
        ctx->pc = 0x2FF4ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF4F0u;
        goto label_2ff4f0;
    }
    ctx->pc = 0x2FF4E8u;
    {
        const bool branch_taken_0x2ff4e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF4ECu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff4e8) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF4F0u;
label_2ff4f0:
    // 0x2ff4f0: 0x8fa201dc
    ctx->pc = 0x2ff4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ff4f4:
    // 0x2ff4f4: 0x28023
    ctx->pc = 0x2ff4f4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2ff4f8:
    // 0x2ff4f8: 0x1a00002c
label_2ff4fc:
    if (ctx->pc == 0x2FF4FCu) {
        ctx->pc = 0x2FF4FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FF500u;
        goto label_2ff500;
    }
    ctx->pc = 0x2FF4F8u;
    {
        const bool branch_taken_0x2ff4f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FF4FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2ff4f8) {
            ctx->pc = 0x2FF5ACu;
            goto label_2ff5ac;
        }
    }
    ctx->pc = 0x2FF500u;
label_2ff500:
    // 0x2ff500: 0x14400019
label_2ff504:
    if (ctx->pc == 0x2FF504u) {
        ctx->pc = 0x2FF504u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        ctx->pc = 0x2FF508u;
        goto label_2ff508;
    }
    ctx->pc = 0x2FF500u;
    {
        const bool branch_taken_0x2ff500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF504u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        if (branch_taken_0x2ff500) {
            ctx->pc = 0x2FF568u;
            goto label_2ff568;
        }
    }
    ctx->pc = 0x2FF508u;
label_2ff508:
    // 0x2ff508: 0x24020010
    ctx->pc = 0x2ff508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2ff50c:
    // 0x2ff50c: 0x26c4a970
    ctx->pc = 0x2ff50cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff510:
    // 0x2ff510: 0xae240000
    ctx->pc = 0x2ff510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ff514:
    // 0x2ff514: 0xae220004
    ctx->pc = 0x2ff514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff518:
    // 0x2ff518: 0x26310008
    ctx->pc = 0x2ff518u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff51c:
    // 0x2ff51c: 0x8fa30018
    ctx->pc = 0x2ff51cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff520:
    // 0x2ff520: 0x8fa20014
    ctx->pc = 0x2ff520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff524:
    // 0x2ff524: 0x24630010
    ctx->pc = 0x2ff524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2ff528:
    // 0x2ff528: 0x24420001
    ctx->pc = 0x2ff528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff52c:
    // 0x2ff52c: 0xafa30018
    ctx->pc = 0x2ff52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff530:
    // 0x2ff530: 0x28440008
    ctx->pc = 0x2ff530u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff534:
    // 0x2ff534: 0x14800006
label_2ff538:
    if (ctx->pc == 0x2FF538u) {
        ctx->pc = 0x2FF538u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF53Cu;
        goto label_2ff53c;
    }
    ctx->pc = 0x2FF534u;
    {
        const bool branch_taken_0x2ff534 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF538u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff534) {
            ctx->pc = 0x2FF550u;
            goto label_2ff550;
        }
    }
    ctx->pc = 0x2FF53Cu;
label_2ff53c:
    // 0x2ff53c: 0x8fa401e8
    ctx->pc = 0x2ff53cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff540:
    // 0x2ff540: 0xc0bf940
label_2ff544:
    if (ctx->pc == 0x2FF544u) {
        ctx->pc = 0x2FF544u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF548u;
        goto label_2ff548;
    }
    ctx->pc = 0x2FF540u;
    SET_GPR_U32(ctx, 31, 0x2FF548u);
    ctx->pc = 0x2FF544u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF548u; }
    }
    if (ctx->pc != 0x2FF548u) { return; }
    ctx->pc = 0x2FF548u;
label_2ff548:
    // 0x2ff548: 0x1440017f
label_2ff54c:
    if (ctx->pc == 0x2FF54Cu) {
        ctx->pc = 0x2FF54Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF550u;
        goto label_2ff550;
    }
    ctx->pc = 0x2FF548u;
    {
        const bool branch_taken_0x2ff548 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF54Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff548) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF550u;
label_2ff550:
    // 0x2ff550: 0x2610fff0
    ctx->pc = 0x2ff550u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ff554:
    // 0x2ff554: 0x2a020011
    ctx->pc = 0x2ff554u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ff558:
    // 0x2ff558: 0x1040ffeb
label_2ff55c:
    if (ctx->pc == 0x2FF55Cu) {
        ctx->pc = 0x2FF55Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        ctx->pc = 0x2FF560u;
        goto label_2ff560;
    }
    ctx->pc = 0x2FF558u;
    {
        const bool branch_taken_0x2ff558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF55Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        if (branch_taken_0x2ff558) {
            ctx->pc = 0x2FF508u;
            goto label_2ff508;
        }
    }
    ctx->pc = 0x2FF560u;
label_2ff560:
    // 0x2ff560: 0x10000003
label_2ff564:
    if (ctx->pc == 0x2FF564u) {
        ctx->pc = 0x2FF564u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2FF568u;
        goto label_2ff568;
    }
    ctx->pc = 0x2FF560u;
    {
        const bool branch_taken_0x2ff560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF564u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x2ff560) {
            ctx->pc = 0x2FF570u;
            goto label_2ff570;
        }
    }
    ctx->pc = 0x2FF568u;
label_2ff568:
    // 0x2ff568: 0x26c2a970
    ctx->pc = 0x2ff568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff56c:
    // 0x2ff56c: 0xae300004
    ctx->pc = 0x2ff56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff570:
    // 0x2ff570: 0xae220000
    ctx->pc = 0x2ff570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff574:
    // 0x2ff574: 0x8fa20014
    ctx->pc = 0x2ff574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff578:
    // 0x2ff578: 0x26310008
    ctx->pc = 0x2ff578u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff57c:
    // 0x2ff57c: 0x8fa30018
    ctx->pc = 0x2ff57cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff580:
    // 0x2ff580: 0x24420001
    ctx->pc = 0x2ff580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff584:
    // 0x2ff584: 0x701821
    ctx->pc = 0x2ff584u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ff588:
    // 0x2ff588: 0x28440008
    ctx->pc = 0x2ff588u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff58c:
    // 0x2ff58c: 0xafa30018
    ctx->pc = 0x2ff58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff590:
    // 0x2ff590: 0x14800006
label_2ff594:
    if (ctx->pc == 0x2FF594u) {
        ctx->pc = 0x2FF594u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF598u;
        goto label_2ff598;
    }
    ctx->pc = 0x2FF590u;
    {
        const bool branch_taken_0x2ff590 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF594u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff590) {
            ctx->pc = 0x2FF5ACu;
            goto label_2ff5ac;
        }
    }
    ctx->pc = 0x2FF598u;
label_2ff598:
    // 0x2ff598: 0x8fa401e8
    ctx->pc = 0x2ff598u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff59c:
    // 0x2ff59c: 0xc0bf940
label_2ff5a0:
    if (ctx->pc == 0x2FF5A0u) {
        ctx->pc = 0x2FF5A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF5A4u;
        goto label_2ff5a4;
    }
    ctx->pc = 0x2FF59Cu;
    SET_GPR_U32(ctx, 31, 0x2FF5A4u);
    ctx->pc = 0x2FF5A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF5A4u; }
    }
    if (ctx->pc != 0x2FF5A4u) { return; }
    ctx->pc = 0x2FF5A4u;
label_2ff5a4:
    // 0x2ff5a4: 0x14400168
label_2ff5a8:
    if (ctx->pc == 0x2FF5A8u) {
        ctx->pc = 0x2FF5A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF5ACu;
        goto label_2ff5ac;
    }
    ctx->pc = 0x2FF5A4u;
    {
        const bool branch_taken_0x2ff5a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF5A8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff5a4) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF5ACu;
label_2ff5ac:
    // 0x2ff5ac: 0x8fa201e0
    ctx->pc = 0x2ff5acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff5b0:
    // 0x2ff5b0: 0xae330000
    ctx->pc = 0x2ff5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2ff5b4:
    // 0x2ff5b4: 0xae220004
    ctx->pc = 0x2ff5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff5b8:
    // 0x2ff5b8: 0x26310008
    ctx->pc = 0x2ff5b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff5bc:
    // 0x2ff5bc: 0x8fa30018
    ctx->pc = 0x2ff5bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff5c0:
    // 0x2ff5c0: 0x8fa20014
    ctx->pc = 0x2ff5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff5c4:
    // 0x2ff5c4: 0x8fa401e0
    ctx->pc = 0x2ff5c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff5c8:
    // 0x2ff5c8: 0x24420001
    ctx->pc = 0x2ff5c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff5cc:
    // 0x2ff5cc: 0x641821
    ctx->pc = 0x2ff5ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ff5d0:
    // 0x2ff5d0: 0x28450008
    ctx->pc = 0x2ff5d0u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), 8));
label_2ff5d4:
    // 0x2ff5d4: 0xafa30018
    ctx->pc = 0x2ff5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff5d8:
    // 0x2ff5d8: 0x14a0010e
label_2ff5dc:
    if (ctx->pc == 0x2FF5DCu) {
        ctx->pc = 0x2FF5DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF5E0u;
        goto label_2ff5e0;
    }
    ctx->pc = 0x2FF5D8u;
    {
        const bool branch_taken_0x2ff5d8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF5DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff5d8) {
            ctx->pc = 0x2FFA14u;
            goto label_2ffa14;
        }
    }
    ctx->pc = 0x2FF5E0u;
label_2ff5e0:
    // 0x2ff5e0: 0x10000108
label_2ff5e4:
    if (ctx->pc == 0x2FF5E4u) {
        ctx->pc = 0x2FF5E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FF5E8u;
        goto label_2ff5e8;
    }
    ctx->pc = 0x2FF5E0u;
    {
        const bool branch_taken_0x2ff5e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF5E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ff5e0) {
            ctx->pc = 0x2FFA04u;
            goto label_2ffa04;
        }
    }
    ctx->pc = 0x2FF5E8u;
label_2ff5e8:
    // 0x2ff5e8: 0x64102a
    ctx->pc = 0x2ff5e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_2ff5ec:
    // 0x2ff5ec: 0x54400053
label_2ff5f0:
    if (ctx->pc == 0x2FF5F0u) {
        ctx->pc = 0x2FF5F0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2FF5F4u;
        goto label_2ff5f4;
    }
    ctx->pc = 0x2FF5ECu;
    {
        const bool branch_taken_0x2ff5ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ff5ec) {
            ctx->pc = 0x2FF5F0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->pc = 0x2FF73Cu;
            goto label_2ff73c;
        }
    }
    ctx->pc = 0x2FF5F4u;
label_2ff5f4:
    // 0x2ff5f4: 0xae240004
    ctx->pc = 0x2ff5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_2ff5f8:
    // 0x2ff5f8: 0xae330000
    ctx->pc = 0x2ff5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2ff5fc:
    // 0x2ff5fc: 0x240882d
    ctx->pc = 0x2ff5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff600:
    // 0x2ff600: 0x8fa20018
    ctx->pc = 0x2ff600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff604:
    // 0x2ff604: 0x8fa30014
    ctx->pc = 0x2ff604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff608:
    // 0x2ff608: 0x8fa501e0
    ctx->pc = 0x2ff608u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff60c:
    // 0x2ff60c: 0x24630001
    ctx->pc = 0x2ff60cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff610:
    // 0x2ff610: 0x451021
    ctx->pc = 0x2ff610u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ff614:
    // 0x2ff614: 0x28640008
    ctx->pc = 0x2ff614u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_2ff618:
    // 0x2ff618: 0xafa20018
    ctx->pc = 0x2ff618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ff61c:
    // 0x2ff61c: 0x14800007
label_2ff620:
    if (ctx->pc == 0x2FF620u) {
        ctx->pc = 0x2FF620u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2FF624u;
        goto label_2ff624;
    }
    ctx->pc = 0x2FF61Cu;
    {
        const bool branch_taken_0x2ff61c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF620u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x2ff61c) {
            ctx->pc = 0x2FF63Cu;
            goto label_2ff63c;
        }
    }
    ctx->pc = 0x2FF624u;
label_2ff624:
    // 0x2ff624: 0x8fa401e8
    ctx->pc = 0x2ff624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff628:
    // 0x2ff628: 0xc0bf940
label_2ff62c:
    if (ctx->pc == 0x2FF62Cu) {
        ctx->pc = 0x2FF62Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF630u;
        goto label_2ff630;
    }
    ctx->pc = 0x2FF628u;
    SET_GPR_U32(ctx, 31, 0x2FF630u);
    ctx->pc = 0x2FF62Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF630u; }
    }
    if (ctx->pc != 0x2FF630u) { return; }
    ctx->pc = 0x2FF630u;
label_2ff630:
    // 0x2ff630: 0x14400145
label_2ff634:
    if (ctx->pc == 0x2FF634u) {
        ctx->pc = 0x2FF634u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF638u;
        goto label_2ff638;
    }
    ctx->pc = 0x2FF630u;
    {
        const bool branch_taken_0x2ff630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF634u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff630) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF638u;
label_2ff638:
    // 0x2ff638: 0x8fa501e0
    ctx->pc = 0x2ff638u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff63c:
    // 0x2ff63c: 0x8fa201dc
    ctx->pc = 0x2ff63cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ff640:
    // 0x2ff640: 0x458023
    ctx->pc = 0x2ff640u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ff644:
    // 0x2ff644: 0x1a00002d
label_2ff648:
    if (ctx->pc == 0x2FF648u) {
        ctx->pc = 0x2FF648u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FF64Cu;
        goto label_2ff64c;
    }
    ctx->pc = 0x2FF644u;
    {
        const bool branch_taken_0x2ff644 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FF648u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2ff644) {
            ctx->pc = 0x2FF6FCu;
            goto label_2ff6fc;
        }
    }
    ctx->pc = 0x2FF64Cu;
label_2ff64c:
    // 0x2ff64c: 0x1440001a
label_2ff650:
    if (ctx->pc == 0x2FF650u) {
        ctx->pc = 0x2FF650u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        ctx->pc = 0x2FF654u;
        goto label_2ff654;
    }
    ctx->pc = 0x2FF64Cu;
    {
        const bool branch_taken_0x2ff64c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF650u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        if (branch_taken_0x2ff64c) {
            ctx->pc = 0x2FF6B8u;
            goto label_2ff6b8;
        }
    }
    ctx->pc = 0x2FF654u;
label_2ff654:
    // 0x2ff654: 0x0
    ctx->pc = 0x2ff654u;
    // NOP
label_2ff658:
    // 0x2ff658: 0x24020010
    ctx->pc = 0x2ff658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2ff65c:
    // 0x2ff65c: 0x26c4a970
    ctx->pc = 0x2ff65cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff660:
    // 0x2ff660: 0xae240000
    ctx->pc = 0x2ff660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ff664:
    // 0x2ff664: 0xae220004
    ctx->pc = 0x2ff664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff668:
    // 0x2ff668: 0x26310008
    ctx->pc = 0x2ff668u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff66c:
    // 0x2ff66c: 0x8fa30018
    ctx->pc = 0x2ff66cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff670:
    // 0x2ff670: 0x8fa20014
    ctx->pc = 0x2ff670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff674:
    // 0x2ff674: 0x24630010
    ctx->pc = 0x2ff674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2ff678:
    // 0x2ff678: 0x24420001
    ctx->pc = 0x2ff678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff67c:
    // 0x2ff67c: 0xafa30018
    ctx->pc = 0x2ff67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff680:
    // 0x2ff680: 0x28440008
    ctx->pc = 0x2ff680u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff684:
    // 0x2ff684: 0x14800006
label_2ff688:
    if (ctx->pc == 0x2FF688u) {
        ctx->pc = 0x2FF688u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF68Cu;
        goto label_2ff68c;
    }
    ctx->pc = 0x2FF684u;
    {
        const bool branch_taken_0x2ff684 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF688u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff684) {
            ctx->pc = 0x2FF6A0u;
            goto label_2ff6a0;
        }
    }
    ctx->pc = 0x2FF68Cu;
label_2ff68c:
    // 0x2ff68c: 0x8fa401e8
    ctx->pc = 0x2ff68cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff690:
    // 0x2ff690: 0xc0bf940
label_2ff694:
    if (ctx->pc == 0x2FF694u) {
        ctx->pc = 0x2FF694u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF698u;
        goto label_2ff698;
    }
    ctx->pc = 0x2FF690u;
    SET_GPR_U32(ctx, 31, 0x2FF698u);
    ctx->pc = 0x2FF694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF698u; }
    }
    if (ctx->pc != 0x2FF698u) { return; }
    ctx->pc = 0x2FF698u;
label_2ff698:
    // 0x2ff698: 0x1440012b
label_2ff69c:
    if (ctx->pc == 0x2FF69Cu) {
        ctx->pc = 0x2FF69Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF6A0u;
        goto label_2ff6a0;
    }
    ctx->pc = 0x2FF698u;
    {
        const bool branch_taken_0x2ff698 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF69Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff698) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF6A0u;
label_2ff6a0:
    // 0x2ff6a0: 0x2610fff0
    ctx->pc = 0x2ff6a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ff6a4:
    // 0x2ff6a4: 0x2a020011
    ctx->pc = 0x2ff6a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ff6a8:
    // 0x2ff6a8: 0x1040ffeb
label_2ff6ac:
    if (ctx->pc == 0x2FF6ACu) {
        ctx->pc = 0x2FF6ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        ctx->pc = 0x2FF6B0u;
        goto label_2ff6b0;
    }
    ctx->pc = 0x2FF6A8u;
    {
        const bool branch_taken_0x2ff6a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF6ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        if (branch_taken_0x2ff6a8) {
            ctx->pc = 0x2FF658u;
            goto label_2ff658;
        }
    }
    ctx->pc = 0x2FF6B0u;
label_2ff6b0:
    // 0x2ff6b0: 0x10000003
label_2ff6b4:
    if (ctx->pc == 0x2FF6B4u) {
        ctx->pc = 0x2FF6B4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2FF6B8u;
        goto label_2ff6b8;
    }
    ctx->pc = 0x2FF6B0u;
    {
        const bool branch_taken_0x2ff6b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF6B4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x2ff6b0) {
            ctx->pc = 0x2FF6C0u;
            goto label_2ff6c0;
        }
    }
    ctx->pc = 0x2FF6B8u;
label_2ff6b8:
    // 0x2ff6b8: 0x26c2a970
    ctx->pc = 0x2ff6b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff6bc:
    // 0x2ff6bc: 0xae300004
    ctx->pc = 0x2ff6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff6c0:
    // 0x2ff6c0: 0xae220000
    ctx->pc = 0x2ff6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff6c4:
    // 0x2ff6c4: 0x8fa20014
    ctx->pc = 0x2ff6c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff6c8:
    // 0x2ff6c8: 0x26310008
    ctx->pc = 0x2ff6c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff6cc:
    // 0x2ff6cc: 0x8fa30018
    ctx->pc = 0x2ff6ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff6d0:
    // 0x2ff6d0: 0x24420001
    ctx->pc = 0x2ff6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff6d4:
    // 0x2ff6d4: 0x701821
    ctx->pc = 0x2ff6d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ff6d8:
    // 0x2ff6d8: 0x28440008
    ctx->pc = 0x2ff6d8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff6dc:
    // 0x2ff6dc: 0xafa30018
    ctx->pc = 0x2ff6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff6e0:
    // 0x2ff6e0: 0x14800006
label_2ff6e4:
    if (ctx->pc == 0x2FF6E4u) {
        ctx->pc = 0x2FF6E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF6E8u;
        goto label_2ff6e8;
    }
    ctx->pc = 0x2FF6E0u;
    {
        const bool branch_taken_0x2ff6e0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF6E4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff6e0) {
            ctx->pc = 0x2FF6FCu;
            goto label_2ff6fc;
        }
    }
    ctx->pc = 0x2FF6E8u;
label_2ff6e8:
    // 0x2ff6e8: 0x8fa401e8
    ctx->pc = 0x2ff6e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff6ec:
    // 0x2ff6ec: 0xc0bf940
label_2ff6f0:
    if (ctx->pc == 0x2FF6F0u) {
        ctx->pc = 0x2FF6F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF6F4u;
        goto label_2ff6f4;
    }
    ctx->pc = 0x2FF6ECu;
    SET_GPR_U32(ctx, 31, 0x2FF6F4u);
    ctx->pc = 0x2FF6F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6F4u; }
    }
    if (ctx->pc != 0x2FF6F4u) { return; }
    ctx->pc = 0x2FF6F4u;
label_2ff6f4:
    // 0x2ff6f4: 0x14400114
label_2ff6f8:
    if (ctx->pc == 0x2FF6F8u) {
        ctx->pc = 0x2FF6F8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF6FCu;
        goto label_2ff6fc;
    }
    ctx->pc = 0x2FF6F4u;
    {
        const bool branch_taken_0x2ff6f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF6F8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff6f4) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF6FCu;
label_2ff6fc:
    // 0x2ff6fc: 0x33c20001
    ctx->pc = 0x2ff6fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_2ff700:
    // 0x2ff700: 0x104000c4
label_2ff704:
    if (ctx->pc == 0x2FF704u) {
        ctx->pc = 0x2FF704u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2FF708u;
        goto label_2ff708;
    }
    ctx->pc = 0x2FF700u;
    {
        const bool branch_taken_0x2ff700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF704u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2ff700) {
            ctx->pc = 0x2FFA14u;
            goto label_2ffa14;
        }
    }
    ctx->pc = 0x2FF708u;
label_2ff708:
    // 0x2ff708: 0x24030001
    ctx->pc = 0x2ff708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2ff70c:
    // 0x2ff70c: 0x2442a9f0
    ctx->pc = 0x2ff70cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945264));
label_2ff710:
    // 0x2ff710: 0xae230004
    ctx->pc = 0x2ff710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2ff714:
    // 0x2ff714: 0xae220000
    ctx->pc = 0x2ff714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff718:
    // 0x2ff718: 0x8fa20014
    ctx->pc = 0x2ff718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff71c:
    // 0x2ff71c: 0x26310008
    ctx->pc = 0x2ff71cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff720:
    // 0x2ff720: 0x8fa30018
    ctx->pc = 0x2ff720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff724:
    // 0x2ff724: 0x24420001
    ctx->pc = 0x2ff724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff728:
    // 0x2ff728: 0x24630001
    ctx->pc = 0x2ff728u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff72c:
    // 0x2ff72c: 0x28440008
    ctx->pc = 0x2ff72cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff730:
    // 0x2ff730: 0xafa30018
    ctx->pc = 0x2ff730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff734:
    // 0x2ff734: 0x100000b0
label_2ff738:
    if (ctx->pc == 0x2FF738u) {
        ctx->pc = 0x2FF738u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF73Cu;
        goto label_2ff73c;
    }
    ctx->pc = 0x2FF734u;
    {
        const bool branch_taken_0x2ff734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF738u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff734) {
            ctx->pc = 0x2FF9F8u;
            goto label_2ff9f8;
        }
    }
    ctx->pc = 0x2FF73Cu;
label_2ff73c:
    // 0x2ff73c: 0xae330000
    ctx->pc = 0x2ff73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2ff740:
    // 0x2ff740: 0x240882d
    ctx->pc = 0x2ff740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff744:
    // 0x2ff744: 0x8fa20018
    ctx->pc = 0x2ff744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff748:
    // 0x2ff748: 0x8fa30014
    ctx->pc = 0x2ff748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff74c:
    // 0x2ff74c: 0x8fa501dc
    ctx->pc = 0x2ff74cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ff750:
    // 0x2ff750: 0x24630001
    ctx->pc = 0x2ff750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff754:
    // 0x2ff754: 0x451021
    ctx->pc = 0x2ff754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ff758:
    // 0x2ff758: 0x28640008
    ctx->pc = 0x2ff758u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_2ff75c:
    // 0x2ff75c: 0xafa20018
    ctx->pc = 0x2ff75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ff760:
    // 0x2ff760: 0x14800007
label_2ff764:
    if (ctx->pc == 0x2FF764u) {
        ctx->pc = 0x2FF764u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2FF768u;
        goto label_2ff768;
    }
    ctx->pc = 0x2FF760u;
    {
        const bool branch_taken_0x2ff760 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF764u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x2ff760) {
            ctx->pc = 0x2FF780u;
            goto label_2ff780;
        }
    }
    ctx->pc = 0x2FF768u;
label_2ff768:
    // 0x2ff768: 0x8fa401e8
    ctx->pc = 0x2ff768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff76c:
    // 0x2ff76c: 0xc0bf940
label_2ff770:
    if (ctx->pc == 0x2FF770u) {
        ctx->pc = 0x2FF770u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF774u;
        goto label_2ff774;
    }
    ctx->pc = 0x2FF76Cu;
    SET_GPR_U32(ctx, 31, 0x2FF774u);
    ctx->pc = 0x2FF770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF774u; }
    }
    if (ctx->pc != 0x2FF774u) { return; }
    ctx->pc = 0x2FF774u;
label_2ff774:
    // 0x2ff774: 0x144000f4
label_2ff778:
    if (ctx->pc == 0x2FF778u) {
        ctx->pc = 0x2FF778u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF77Cu;
        goto label_2ff77c;
    }
    ctx->pc = 0x2FF774u;
    {
        const bool branch_taken_0x2ff774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF778u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff774) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF77Cu;
label_2ff77c:
    // 0x2ff77c: 0x8fa501dc
    ctx->pc = 0x2ff77cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ff780:
    // 0x2ff780: 0x3c02003c
    ctx->pc = 0x2ff780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2ff784:
    // 0x2ff784: 0x24030001
    ctx->pc = 0x2ff784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2ff788:
    // 0x2ff788: 0x2442a9f0
    ctx->pc = 0x2ff788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945264));
label_2ff78c:
    // 0x2ff78c: 0xae230004
    ctx->pc = 0x2ff78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2ff790:
    // 0x2ff790: 0xae220000
    ctx->pc = 0x2ff790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff794:
    // 0x2ff794: 0x2659821
    ctx->pc = 0x2ff794u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_2ff798:
    // 0x2ff798: 0x8fa20014
    ctx->pc = 0x2ff798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff79c:
    // 0x2ff79c: 0x26310008
    ctx->pc = 0x2ff79cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff7a0:
    // 0x2ff7a0: 0x8fa30018
    ctx->pc = 0x2ff7a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff7a4:
    // 0x2ff7a4: 0x24420001
    ctx->pc = 0x2ff7a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff7a8:
    // 0x2ff7a8: 0x24630001
    ctx->pc = 0x2ff7a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff7ac:
    // 0x2ff7ac: 0x28440008
    ctx->pc = 0x2ff7acu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff7b0:
    // 0x2ff7b0: 0xafa30018
    ctx->pc = 0x2ff7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff7b4:
    // 0x2ff7b4: 0x14800006
label_2ff7b8:
    if (ctx->pc == 0x2FF7B8u) {
        ctx->pc = 0x2FF7B8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF7BCu;
        goto label_2ff7bc;
    }
    ctx->pc = 0x2FF7B4u;
    {
        const bool branch_taken_0x2ff7b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF7B8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff7b4) {
            ctx->pc = 0x2FF7D0u;
            goto label_2ff7d0;
        }
    }
    ctx->pc = 0x2FF7BCu;
label_2ff7bc:
    // 0x2ff7bc: 0x8fa401e8
    ctx->pc = 0x2ff7bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff7c0:
    // 0x2ff7c0: 0xc0bf940
label_2ff7c4:
    if (ctx->pc == 0x2FF7C4u) {
        ctx->pc = 0x2FF7C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF7C8u;
        goto label_2ff7c8;
    }
    ctx->pc = 0x2FF7C0u;
    SET_GPR_U32(ctx, 31, 0x2FF7C8u);
    ctx->pc = 0x2FF7C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF7C8u; }
    }
    if (ctx->pc != 0x2FF7C8u) { return; }
    ctx->pc = 0x2FF7C8u;
label_2ff7c8:
    // 0x2ff7c8: 0x144000df
label_2ff7cc:
    if (ctx->pc == 0x2FF7CCu) {
        ctx->pc = 0x2FF7CCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF7D0u;
        goto label_2ff7d0;
    }
    ctx->pc = 0x2FF7C8u;
    {
        const bool branch_taken_0x2ff7c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF7CCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff7c8) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF7D0u;
label_2ff7d0:
    // 0x2ff7d0: 0x8fa301dc
    ctx->pc = 0x2ff7d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ff7d4:
    // 0x2ff7d4: 0x8fa201e0
    ctx->pc = 0x2ff7d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff7d8:
    // 0x2ff7d8: 0xae330000
    ctx->pc = 0x2ff7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2ff7dc:
    // 0x2ff7dc: 0x431023
    ctx->pc = 0x2ff7dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ff7e0:
    // 0x2ff7e0: 0xae220004
    ctx->pc = 0x2ff7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff7e4:
    // 0x2ff7e4: 0x26310008
    ctx->pc = 0x2ff7e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff7e8:
    // 0x2ff7e8: 0x8fa301e0
    ctx->pc = 0x2ff7e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff7ec:
    // 0x2ff7ec: 0x8fa501dc
    ctx->pc = 0x2ff7ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2ff7f0:
    // 0x2ff7f0: 0x8fa40018
    ctx->pc = 0x2ff7f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff7f4:
    // 0x2ff7f4: 0x8fa20014
    ctx->pc = 0x2ff7f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff7f8:
    // 0x2ff7f8: 0x651823
    ctx->pc = 0x2ff7f8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ff7fc:
    // 0x2ff7fc: 0x832021
    ctx->pc = 0x2ff7fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2ff800:
    // 0x2ff800: 0x24420001
    ctx->pc = 0x2ff800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff804:
    // 0x2ff804: 0xafa40018
    ctx->pc = 0x2ff804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2ff808:
    // 0x2ff808: 0x28430008
    ctx->pc = 0x2ff808u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
label_2ff80c:
    // 0x2ff80c: 0x14600081
label_2ff810:
    if (ctx->pc == 0x2FF810u) {
        ctx->pc = 0x2FF810u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF814u;
        goto label_2ff814;
    }
    ctx->pc = 0x2FF80Cu;
    {
        const bool branch_taken_0x2ff80c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF810u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff80c) {
            ctx->pc = 0x2FFA14u;
            goto label_2ffa14;
        }
    }
    ctx->pc = 0x2FF814u;
label_2ff814:
    // 0x2ff814: 0x1000007b
label_2ff818:
    if (ctx->pc == 0x2FF818u) {
        ctx->pc = 0x2FF818u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FF81Cu;
        goto label_2ff81c;
    }
    ctx->pc = 0x2FF814u;
    {
        const bool branch_taken_0x2ff814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF818u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ff814) {
            ctx->pc = 0x2FFA04u;
            goto label_2ffa04;
        }
    }
    ctx->pc = 0x2FF81Cu;
label_2ff81c:
    // 0x2ff81c: 0x28420002
    ctx->pc = 0x2ff81cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_2ff820:
    // 0x2ff820: 0x10400003
label_2ff824:
    if (ctx->pc == 0x2FF824u) {
        ctx->pc = 0x2FF824u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x2FF828u;
        goto label_2ff828;
    }
    ctx->pc = 0x2FF820u;
    {
        const bool branch_taken_0x2ff820 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF824u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x2ff820) {
            ctx->pc = 0x2FF830u;
            goto label_2ff830;
        }
    }
    ctx->pc = 0x2FF828u;
label_2ff828:
    // 0x2ff828: 0x10400057
label_2ff82c:
    if (ctx->pc == 0x2FF82Cu) {
        ctx->pc = 0x2FF82Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF830u;
        goto label_2ff830;
    }
    ctx->pc = 0x2FF828u;
    {
        const bool branch_taken_0x2ff828 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF82Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ff828) {
            ctx->pc = 0x2FF988u;
            goto label_2ff988;
        }
    }
    ctx->pc = 0x2FF830u;
label_2ff830:
    // 0x2ff830: 0x92640000
    ctx->pc = 0x2ff830u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2ff834:
    // 0x2ff834: 0x2402002e
    ctx->pc = 0x2ff834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
label_2ff838:
    // 0x2ff838: 0xa3a201c1
    ctx->pc = 0x2ff838u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
label_2ff83c:
    // 0x2ff83c: 0x24030002
    ctx->pc = 0x2ff83cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2ff840:
    // 0x2ff840: 0xa3a401c0
    ctx->pc = 0x2ff840u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
label_2ff844:
    // 0x2ff844: 0x27a201c0
    ctx->pc = 0x2ff844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 448));
label_2ff848:
    // 0x2ff848: 0xae230004
    ctx->pc = 0x2ff848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2ff84c:
    // 0x2ff84c: 0x26730001
    ctx->pc = 0x2ff84cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_2ff850:
    // 0x2ff850: 0xae220000
    ctx->pc = 0x2ff850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff854:
    // 0x2ff854: 0x8fa20014
    ctx->pc = 0x2ff854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff858:
    // 0x2ff858: 0x240882d
    ctx->pc = 0x2ff858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff85c:
    // 0x2ff85c: 0x8fa30018
    ctx->pc = 0x2ff85cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff860:
    // 0x2ff860: 0x24420001
    ctx->pc = 0x2ff860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff864:
    // 0x2ff864: 0x24630002
    ctx->pc = 0x2ff864u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_2ff868:
    // 0x2ff868: 0x28440008
    ctx->pc = 0x2ff868u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff86c:
    // 0x2ff86c: 0xafa30018
    ctx->pc = 0x2ff86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff870:
    // 0x2ff870: 0x14800006
label_2ff874:
    if (ctx->pc == 0x2FF874u) {
        ctx->pc = 0x2FF874u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF878u;
        goto label_2ff878;
    }
    ctx->pc = 0x2FF870u;
    {
        const bool branch_taken_0x2ff870 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF874u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff870) {
            ctx->pc = 0x2FF88Cu;
            goto label_2ff88c;
        }
    }
    ctx->pc = 0x2FF878u;
label_2ff878:
    // 0x2ff878: 0x8fa401e8
    ctx->pc = 0x2ff878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff87c:
    // 0x2ff87c: 0xc0bf940
label_2ff880:
    if (ctx->pc == 0x2FF880u) {
        ctx->pc = 0x2FF880u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF884u;
        goto label_2ff884;
    }
    ctx->pc = 0x2FF87Cu;
    SET_GPR_U32(ctx, 31, 0x2FF884u);
    ctx->pc = 0x2FF880u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF884u; }
    }
    if (ctx->pc != 0x2FF884u) { return; }
    ctx->pc = 0x2FF884u;
label_2ff884:
    // 0x2ff884: 0x144000b0
label_2ff888:
    if (ctx->pc == 0x2FF888u) {
        ctx->pc = 0x2FF888u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF88Cu;
        goto label_2ff88c;
    }
    ctx->pc = 0x2FF884u;
    {
        const bool branch_taken_0x2ff884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF888u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff884) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF88Cu;
label_2ff88c:
    // 0x2ff88c: 0xdfa40200
    ctx->pc = 0x2ff88cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_2ff890:
    // 0x2ff890: 0xc0be4ba
label_2ff894:
    if (ctx->pc == 0x2FF894u) {
        ctx->pc = 0x2FF894u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF898u;
        goto label_2ff898;
    }
    ctx->pc = 0x2FF890u;
    SET_GPR_U32(ctx, 31, 0x2FF898u);
    ctx->pc = 0x2FF894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF898u; }
    }
    if (ctx->pc != 0x2FF898u) { return; }
    ctx->pc = 0x2FF898u;
label_2ff898:
    // 0x2ff898: 0x10400011
label_2ff89c:
    if (ctx->pc == 0x2FF89Cu) {
        ctx->pc = 0x2FF89Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x2FF8A0u;
        goto label_2ff8a0;
    }
    ctx->pc = 0x2FF898u;
    {
        const bool branch_taken_0x2ff898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF89Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x2ff898) {
            ctx->pc = 0x2FF8E0u;
            goto label_2ff8e0;
        }
    }
    ctx->pc = 0x2FF8A0u;
label_2ff8a0:
    // 0x2ff8a0: 0xae330000
    ctx->pc = 0x2ff8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2ff8a4:
    // 0x2ff8a4: 0x2442ffff
    ctx->pc = 0x2ff8a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ff8a8:
    // 0x2ff8a8: 0xae220004
    ctx->pc = 0x2ff8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff8ac:
    // 0x2ff8ac: 0x26310008
    ctx->pc = 0x2ff8acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff8b0:
    // 0x2ff8b0: 0x8fa20018
    ctx->pc = 0x2ff8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff8b4:
    // 0x2ff8b4: 0x8fa30014
    ctx->pc = 0x2ff8b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff8b8:
    // 0x2ff8b8: 0x8fa401e0
    ctx->pc = 0x2ff8b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ff8bc:
    // 0x2ff8bc: 0x2442ffff
    ctx->pc = 0x2ff8bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ff8c0:
    // 0x2ff8c0: 0x24630001
    ctx->pc = 0x2ff8c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff8c4:
    // 0x2ff8c4: 0x441021
    ctx->pc = 0x2ff8c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ff8c8:
    // 0x2ff8c8: 0x28650008
    ctx->pc = 0x2ff8c8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 8));
label_2ff8cc:
    // 0x2ff8cc: 0xafa20018
    ctx->pc = 0x2ff8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ff8d0:
    // 0x2ff8d0: 0x14a0003e
label_2ff8d4:
    if (ctx->pc == 0x2FF8D4u) {
        ctx->pc = 0x2FF8D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x2FF8D8u;
        goto label_2ff8d8;
    }
    ctx->pc = 0x2FF8D0u;
    {
        const bool branch_taken_0x2ff8d0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF8D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x2ff8d0) {
            ctx->pc = 0x2FF9CCu;
            goto label_2ff9cc;
        }
    }
    ctx->pc = 0x2FF8D8u;
label_2ff8d8:
    // 0x2ff8d8: 0x10000038
label_2ff8dc:
    if (ctx->pc == 0x2FF8DCu) {
        ctx->pc = 0x2FF8DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FF8E0u;
        goto label_2ff8e0;
    }
    ctx->pc = 0x2FF8D8u;
    {
        const bool branch_taken_0x2ff8d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF8DCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ff8d8) {
            ctx->pc = 0x2FF9BCu;
            goto label_2ff9bc;
        }
    }
    ctx->pc = 0x2FF8E0u;
label_2ff8e0:
    // 0x2ff8e0: 0x2450ffff
    ctx->pc = 0x2ff8e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ff8e4:
    // 0x2ff8e4: 0x1a000039
label_2ff8e8:
    if (ctx->pc == 0x2FF8E8u) {
        ctx->pc = 0x2FF8E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FF8ECu;
        goto label_2ff8ec;
    }
    ctx->pc = 0x2FF8E4u;
    {
        const bool branch_taken_0x2ff8e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FF8E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2ff8e4) {
            ctx->pc = 0x2FF9CCu;
            goto label_2ff9cc;
        }
    }
    ctx->pc = 0x2FF8ECu;
label_2ff8ec:
    // 0x2ff8ec: 0x1440001a
label_2ff8f0:
    if (ctx->pc == 0x2FF8F0u) {
        ctx->pc = 0x2FF8F0u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        ctx->pc = 0x2FF8F4u;
        goto label_2ff8f4;
    }
    ctx->pc = 0x2FF8ECu;
    {
        const bool branch_taken_0x2ff8ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF8F0u;
        SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
        if (branch_taken_0x2ff8ec) {
            ctx->pc = 0x2FF958u;
            goto label_2ff958;
        }
    }
    ctx->pc = 0x2FF8F4u;
label_2ff8f4:
    // 0x2ff8f4: 0x0
    ctx->pc = 0x2ff8f4u;
    // NOP
label_2ff8f8:
    // 0x2ff8f8: 0x24020010
    ctx->pc = 0x2ff8f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2ff8fc:
    // 0x2ff8fc: 0x26c4a970
    ctx->pc = 0x2ff8fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff900:
    // 0x2ff900: 0xae240000
    ctx->pc = 0x2ff900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ff904:
    // 0x2ff904: 0xae220004
    ctx->pc = 0x2ff904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff908:
    // 0x2ff908: 0x26310008
    ctx->pc = 0x2ff908u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff90c:
    // 0x2ff90c: 0x8fa30018
    ctx->pc = 0x2ff90cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff910:
    // 0x2ff910: 0x8fa20014
    ctx->pc = 0x2ff910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff914:
    // 0x2ff914: 0x24630010
    ctx->pc = 0x2ff914u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2ff918:
    // 0x2ff918: 0x24420001
    ctx->pc = 0x2ff918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff91c:
    // 0x2ff91c: 0xafa30018
    ctx->pc = 0x2ff91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff920:
    // 0x2ff920: 0x28440008
    ctx->pc = 0x2ff920u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff924:
    // 0x2ff924: 0x14800006
label_2ff928:
    if (ctx->pc == 0x2FF928u) {
        ctx->pc = 0x2FF928u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF92Cu;
        goto label_2ff92c;
    }
    ctx->pc = 0x2FF924u;
    {
        const bool branch_taken_0x2ff924 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF928u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff924) {
            ctx->pc = 0x2FF940u;
            goto label_2ff940;
        }
    }
    ctx->pc = 0x2FF92Cu;
label_2ff92c:
    // 0x2ff92c: 0x8fa401e8
    ctx->pc = 0x2ff92cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff930:
    // 0x2ff930: 0xc0bf940
label_2ff934:
    if (ctx->pc == 0x2FF934u) {
        ctx->pc = 0x2FF934u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF938u;
        goto label_2ff938;
    }
    ctx->pc = 0x2FF930u;
    SET_GPR_U32(ctx, 31, 0x2FF938u);
    ctx->pc = 0x2FF934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF938u; }
    }
    if (ctx->pc != 0x2FF938u) { return; }
    ctx->pc = 0x2FF938u;
label_2ff938:
    // 0x2ff938: 0x14400083
label_2ff93c:
    if (ctx->pc == 0x2FF93Cu) {
        ctx->pc = 0x2FF93Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF940u;
        goto label_2ff940;
    }
    ctx->pc = 0x2FF938u;
    {
        const bool branch_taken_0x2ff938 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF93Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff938) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF940u;
label_2ff940:
    // 0x2ff940: 0x2610fff0
    ctx->pc = 0x2ff940u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ff944:
    // 0x2ff944: 0x2a020011
    ctx->pc = 0x2ff944u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ff948:
    // 0x2ff948: 0x1040ffeb
label_2ff94c:
    if (ctx->pc == 0x2FF94Cu) {
        ctx->pc = 0x2FF94Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        ctx->pc = 0x2FF950u;
        goto label_2ff950;
    }
    ctx->pc = 0x2FF948u;
    {
        const bool branch_taken_0x2ff948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF94Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
        if (branch_taken_0x2ff948) {
            ctx->pc = 0x2FF8F8u;
            goto label_2ff8f8;
        }
    }
    ctx->pc = 0x2FF950u;
label_2ff950:
    // 0x2ff950: 0x10000003
label_2ff954:
    if (ctx->pc == 0x2FF954u) {
        ctx->pc = 0x2FF954u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2FF958u;
        goto label_2ff958;
    }
    ctx->pc = 0x2FF950u;
    {
        const bool branch_taken_0x2ff950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF954u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x2ff950) {
            ctx->pc = 0x2FF960u;
            goto label_2ff960;
        }
    }
    ctx->pc = 0x2FF958u;
label_2ff958:
    // 0x2ff958: 0x26c2a970
    ctx->pc = 0x2ff958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294945136));
label_2ff95c:
    // 0x2ff95c: 0xae300004
    ctx->pc = 0x2ff95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ff960:
    // 0x2ff960: 0xae220000
    ctx->pc = 0x2ff960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ff964:
    // 0x2ff964: 0x8fa20014
    ctx->pc = 0x2ff964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff968:
    // 0x2ff968: 0x26310008
    ctx->pc = 0x2ff968u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff96c:
    // 0x2ff96c: 0x8fa30018
    ctx->pc = 0x2ff96cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff970:
    // 0x2ff970: 0x24420001
    ctx->pc = 0x2ff970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff974:
    // 0x2ff974: 0x701821
    ctx->pc = 0x2ff974u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ff978:
    // 0x2ff978: 0x28440008
    ctx->pc = 0x2ff978u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ff97c:
    // 0x2ff97c: 0xafa30018
    ctx->pc = 0x2ff97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ff980:
    // 0x2ff980: 0x1000000b
label_2ff984:
    if (ctx->pc == 0x2FF984u) {
        ctx->pc = 0x2FF984u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF988u;
        goto label_2ff988;
    }
    ctx->pc = 0x2FF980u;
    {
        const bool branch_taken_0x2ff980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FF984u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ff980) {
            ctx->pc = 0x2FF9B0u;
            goto label_2ff9b0;
        }
    }
    ctx->pc = 0x2FF988u;
label_2ff988:
    // 0x2ff988: 0xae330000
    ctx->pc = 0x2ff988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_2ff98c:
    // 0x2ff98c: 0xae220004
    ctx->pc = 0x2ff98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ff990:
    // 0x2ff990: 0x240882d
    ctx->pc = 0x2ff990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ff994:
    // 0x2ff994: 0x8fa20018
    ctx->pc = 0x2ff994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff998:
    // 0x2ff998: 0x8fa30014
    ctx->pc = 0x2ff998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff99c:
    // 0x2ff99c: 0x24420001
    ctx->pc = 0x2ff99cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ff9a0:
    // 0x2ff9a0: 0x24630001
    ctx->pc = 0x2ff9a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff9a4:
    // 0x2ff9a4: 0xafa20018
    ctx->pc = 0x2ff9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ff9a8:
    // 0x2ff9a8: 0x28640008
    ctx->pc = 0x2ff9a8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_2ff9ac:
    // 0x2ff9ac: 0xafa30014
    ctx->pc = 0x2ff9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2ff9b0:
    // 0x2ff9b0: 0x14800007
label_2ff9b4:
    if (ctx->pc == 0x2FF9B4u) {
        ctx->pc = 0x2FF9B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->pc = 0x2FF9B8u;
        goto label_2ff9b8;
    }
    ctx->pc = 0x2FF9B0u;
    {
        const bool branch_taken_0x2ff9b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF9B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
        if (branch_taken_0x2ff9b0) {
            ctx->pc = 0x2FF9D0u;
            goto label_2ff9d0;
        }
    }
    ctx->pc = 0x2FF9B8u;
label_2ff9b8:
    // 0x2ff9b8: 0x8fa401e8
    ctx->pc = 0x2ff9b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ff9bc:
    // 0x2ff9bc: 0xc0bf940
label_2ff9c0:
    if (ctx->pc == 0x2FF9C0u) {
        ctx->pc = 0x2FF9C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FF9C4u;
        goto label_2ff9c4;
    }
    ctx->pc = 0x2FF9BCu;
    SET_GPR_U32(ctx, 31, 0x2FF9C4u);
    ctx->pc = 0x2FF9C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9C4u; }
    }
    if (ctx->pc != 0x2FF9C4u) { return; }
    ctx->pc = 0x2FF9C4u;
label_2ff9c4:
    // 0x2ff9c4: 0x14400060
label_2ff9c8:
    if (ctx->pc == 0x2FF9C8u) {
        ctx->pc = 0x2FF9C8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FF9CCu;
        goto label_2ff9cc;
    }
    ctx->pc = 0x2FF9C4u;
    {
        const bool branch_taken_0x2ff9c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF9C8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ff9c4) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FF9CCu;
label_2ff9cc:
    // 0x2ff9cc: 0x8fa40208
    ctx->pc = 0x2ff9ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_2ff9d0:
    // 0x2ff9d0: 0xae3d0000
    ctx->pc = 0x2ff9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
label_2ff9d4:
    // 0x2ff9d4: 0xae240004
    ctx->pc = 0x2ff9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_2ff9d8:
    // 0x2ff9d8: 0x26310008
    ctx->pc = 0x2ff9d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ff9dc:
    // 0x2ff9dc: 0x8fa20018
    ctx->pc = 0x2ff9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ff9e0:
    // 0x2ff9e0: 0x8fa30014
    ctx->pc = 0x2ff9e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ff9e4:
    // 0x2ff9e4: 0x441021
    ctx->pc = 0x2ff9e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2ff9e8:
    // 0x2ff9e8: 0x24630001
    ctx->pc = 0x2ff9e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ff9ec:
    // 0x2ff9ec: 0xafa20018
    ctx->pc = 0x2ff9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2ff9f0:
    // 0x2ff9f0: 0x28640008
    ctx->pc = 0x2ff9f0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_2ff9f4:
    // 0x2ff9f4: 0xafa30014
    ctx->pc = 0x2ff9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2ff9f8:
    // 0x2ff9f8: 0x14800007
label_2ff9fc:
    if (ctx->pc == 0x2FF9FCu) {
        ctx->pc = 0x2FF9FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x2FFA00u;
        goto label_2ffa00;
    }
    ctx->pc = 0x2FF9F8u;
    {
        const bool branch_taken_0x2ff9f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FF9FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x2ff9f8) {
            ctx->pc = 0x2FFA18u;
            goto label_2ffa18;
        }
    }
    ctx->pc = 0x2FFA00u;
label_2ffa00:
    // 0x2ffa00: 0x8fa401e8
    ctx->pc = 0x2ffa00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ffa04:
    // 0x2ffa04: 0xc0bf940
label_2ffa08:
    if (ctx->pc == 0x2FFA08u) {
        ctx->pc = 0x2FFA08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FFA0Cu;
        goto label_2ffa0c;
    }
    ctx->pc = 0x2FFA04u;
    SET_GPR_U32(ctx, 31, 0x2FFA0Cu);
    ctx->pc = 0x2FFA08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA0Cu; }
    }
    if (ctx->pc != 0x2FFA0Cu) { return; }
    ctx->pc = 0x2FFA0Cu;
label_2ffa0c:
    // 0x2ffa0c: 0x1440004e
label_2ffa10:
    if (ctx->pc == 0x2FFA10u) {
        ctx->pc = 0x2FFA10u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FFA14u;
        goto label_2ffa14;
    }
    ctx->pc = 0x2FFA0Cu;
    {
        const bool branch_taken_0x2ffa0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA10u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ffa0c) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FFA14u;
label_2ffa14:
    // 0x2ffa14: 0x33c20004
    ctx->pc = 0x2ffa14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
label_2ffa18:
    // 0x2ffa18: 0x10400031
label_2ffa1c:
    if (ctx->pc == 0x2FFA1Cu) {
        ctx->pc = 0x2FFA1Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->pc = 0x2FFA20u;
        goto label_2ffa20;
    }
    ctx->pc = 0x2FFA18u;
    {
        const bool branch_taken_0x2ffa18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA1Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        if (branch_taken_0x2ffa18) {
            ctx->pc = 0x2FFAE0u;
            goto label_2ffae0;
        }
    }
    ctx->pc = 0x2FFA20u;
label_2ffa20:
    // 0x2ffa20: 0x8fa60210
    ctx->pc = 0x2ffa20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2ffa24:
    // 0x2ffa24: 0xa68023
    ctx->pc = 0x2ffa24u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2ffa28:
    // 0x2ffa28: 0x1a00002d
label_2ffa2c:
    if (ctx->pc == 0x2FFA2Cu) {
        ctx->pc = 0x2FFA2Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x2FFA30u;
        goto label_2ffa30;
    }
    ctx->pc = 0x2FFA28u;
    {
        const bool branch_taken_0x2ffa28 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FFA2Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x2ffa28) {
            ctx->pc = 0x2FFAE0u;
            goto label_2ffae0;
        }
    }
    ctx->pc = 0x2FFA30u;
label_2ffa30:
    // 0x2ffa30: 0x1440001b
label_2ffa34:
    if (ctx->pc == 0x2FFA34u) {
        ctx->pc = 0x2FFA34u;
        SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
        ctx->pc = 0x2FFA38u;
        goto label_2ffa38;
    }
    ctx->pc = 0x2FFA30u;
    {
        const bool branch_taken_0x2ffa30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA34u;
        SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
        if (branch_taken_0x2ffa30) {
            ctx->pc = 0x2FFAA0u;
            goto label_2ffaa0;
        }
    }
    ctx->pc = 0x2FFA38u;
label_2ffa38:
    // 0x2ffa38: 0x24020010
    ctx->pc = 0x2ffa38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_2ffa3c:
    // 0x2ffa3c: 0x24c4a960
    ctx->pc = 0x2ffa3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 4294945120));
label_2ffa40:
    // 0x2ffa40: 0xae240000
    ctx->pc = 0x2ffa40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2ffa44:
    // 0x2ffa44: 0xae220004
    ctx->pc = 0x2ffa44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2ffa48:
    // 0x2ffa48: 0x26310008
    ctx->pc = 0x2ffa48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_2ffa4c:
    // 0x2ffa4c: 0x8fa30018
    ctx->pc = 0x2ffa4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ffa50:
    // 0x2ffa50: 0x8fa20014
    ctx->pc = 0x2ffa50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ffa54:
    // 0x2ffa54: 0x24630010
    ctx->pc = 0x2ffa54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_2ffa58:
    // 0x2ffa58: 0x24420001
    ctx->pc = 0x2ffa58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ffa5c:
    // 0x2ffa5c: 0xafa30018
    ctx->pc = 0x2ffa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ffa60:
    // 0x2ffa60: 0x28440008
    ctx->pc = 0x2ffa60u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ffa64:
    // 0x2ffa64: 0x14800008
label_2ffa68:
    if (ctx->pc == 0x2FFA68u) {
        ctx->pc = 0x2FFA68u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FFA6Cu;
        goto label_2ffa6c;
    }
    ctx->pc = 0x2FFA64u;
    {
        const bool branch_taken_0x2ffa64 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA68u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ffa64) {
            ctx->pc = 0x2FFA88u;
            goto label_2ffa88;
        }
    }
    ctx->pc = 0x2FFA6Cu;
label_2ffa6c:
    // 0x2ffa6c: 0x8fa401e8
    ctx->pc = 0x2ffa6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ffa70:
    // 0x2ffa70: 0x27a50010
    ctx->pc = 0x2ffa70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_2ffa74:
    // 0x2ffa74: 0xc0bf940
label_2ffa78:
    if (ctx->pc == 0x2FFA78u) {
        ctx->pc = 0x2FFA78u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->pc = 0x2FFA7Cu;
        goto label_2ffa7c;
    }
    ctx->pc = 0x2FFA74u;
    SET_GPR_U32(ctx, 31, 0x2FFA7Cu);
    ctx->pc = 0x2FFA78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA7Cu; }
    }
    if (ctx->pc != 0x2FFA7Cu) { return; }
    ctx->pc = 0x2FFA7Cu;
label_2ffa7c:
    // 0x2ffa7c: 0x14400032
label_2ffa80:
    if (ctx->pc == 0x2FFA80u) {
        ctx->pc = 0x2FFA80u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->pc = 0x2FFA84u;
        goto label_2ffa84;
    }
    ctx->pc = 0x2FFA7Cu;
    {
        const bool branch_taken_0x2ffa7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA80u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        if (branch_taken_0x2ffa7c) {
            ctx->pc = 0x2FFB48u;
            goto label_2ffb48;
        }
    }
    ctx->pc = 0x2FFA84u;
label_2ffa84:
    // 0x2ffa84: 0x27b10020
    ctx->pc = 0x2ffa84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
label_2ffa88:
    // 0x2ffa88: 0x2610fff0
    ctx->pc = 0x2ffa88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_2ffa8c:
    // 0x2ffa8c: 0x2a020011
    ctx->pc = 0x2ffa8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_2ffa90:
    // 0x2ffa90: 0x1040ffe9
label_2ffa94:
    if (ctx->pc == 0x2FFA94u) {
        ctx->pc = 0x2FFA94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294945120));
        ctx->pc = 0x2FFA98u;
        goto label_2ffa98;
    }
    ctx->pc = 0x2FFA90u;
    {
        const bool branch_taken_0x2ffa90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294945120));
        if (branch_taken_0x2ffa90) {
            ctx->pc = 0x2FFA38u;
            goto label_2ffa38;
        }
    }
    ctx->pc = 0x2FFA98u;
label_2ffa98:
    // 0x2ffa98: 0x10000003
label_2ffa9c:
    if (ctx->pc == 0x2FFA9Cu) {
        ctx->pc = 0x2FFA9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2FFAA0u;
        goto label_2ffaa0;
    }
    ctx->pc = 0x2FFA98u;
    {
        const bool branch_taken_0x2ffa98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFA9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x2ffa98) {
            ctx->pc = 0x2FFAA8u;
            goto label_2ffaa8;
        }
    }
    ctx->pc = 0x2FFAA0u;
label_2ffaa0:
    // 0x2ffaa0: 0x24c2a960
    ctx->pc = 0x2ffaa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294945120));
label_2ffaa4:
    // 0x2ffaa4: 0xae300004
    ctx->pc = 0x2ffaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2ffaa8:
    // 0x2ffaa8: 0xae220000
    ctx->pc = 0x2ffaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ffaac:
    // 0x2ffaac: 0x8fa20014
    ctx->pc = 0x2ffaacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ffab0:
    // 0x2ffab0: 0x8fa30018
    ctx->pc = 0x2ffab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ffab4:
    // 0x2ffab4: 0x24420001
    ctx->pc = 0x2ffab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ffab8:
    // 0x2ffab8: 0x701821
    ctx->pc = 0x2ffab8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2ffabc:
    // 0x2ffabc: 0x28440008
    ctx->pc = 0x2ffabcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_2ffac0:
    // 0x2ffac0: 0xafa30018
    ctx->pc = 0x2ffac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_2ffac4:
    // 0x2ffac4: 0x14800006
label_2ffac8:
    if (ctx->pc == 0x2FFAC8u) {
        ctx->pc = 0x2FFAC8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2FFACCu;
        goto label_2ffacc;
    }
    ctx->pc = 0x2FFAC4u;
    {
        const bool branch_taken_0x2ffac4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFAC8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2ffac4) {
            ctx->pc = 0x2FFAE0u;
            goto label_2ffae0;
        }
    }
    ctx->pc = 0x2FFACCu;
label_2ffacc:
    // 0x2ffacc: 0x8fa401e8
    ctx->pc = 0x2ffaccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ffad0:
    // 0x2ffad0: 0xc0bf940
label_2ffad4:
    if (ctx->pc == 0x2FFAD4u) {
        ctx->pc = 0x2FFAD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FFAD8u;
        goto label_2ffad8;
    }
    ctx->pc = 0x2FFAD0u;
    SET_GPR_U32(ctx, 31, 0x2FFAD8u);
    ctx->pc = 0x2FFAD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAD8u; }
    }
    if (ctx->pc != 0x2FFAD8u) { return; }
    ctx->pc = 0x2FFAD8u;
label_2ffad8:
    // 0x2ffad8: 0x1440001c
label_2ffadc:
    if (ctx->pc == 0x2FFADCu) {
        ctx->pc = 0x2FFADCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FFAE0u;
        goto label_2ffae0;
    }
    ctx->pc = 0x2FFAD8u;
    {
        const bool branch_taken_0x2ffad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFADCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ffad8) {
            ctx->pc = 0x2FFB4Cu;
            goto label_2ffb4c;
        }
    }
    ctx->pc = 0x2FFAE0u;
label_2ffae0:
    // 0x2ffae0: 0x8fa30210
    ctx->pc = 0x2ffae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2ffae4:
    // 0x2ffae4: 0x8fa401f4
    ctx->pc = 0x2ffae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_2ffae8:
    // 0x2ffae8: 0x8fa50210
    ctx->pc = 0x2ffae8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2ffaec:
    // 0x2ffaec: 0x64102a
    ctx->pc = 0x2ffaecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_2ffaf0:
    // 0x2ffaf0: 0x8fa601f0
    ctx->pc = 0x2ffaf0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ffaf4:
    // 0x2ffaf4: 0xa2200a
    ctx->pc = 0x2ffaf4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_2ffaf8:
    // 0x2ffaf8: 0x8fa30018
    ctx->pc = 0x2ffaf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ffafc:
    // 0x2ffafc: 0xc43021
    ctx->pc = 0x2ffafcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2ffb00:
    // 0x2ffb00: 0x10600006
label_2ffb04:
    if (ctx->pc == 0x2FFB04u) {
        ctx->pc = 0x2FFB04u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->pc = 0x2FFB08u;
        goto label_2ffb08;
    }
    ctx->pc = 0x2FFB00u;
    {
        const bool branch_taken_0x2ffb00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFB04u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        if (branch_taken_0x2ffb00) {
            ctx->pc = 0x2FFB1Cu;
            goto label_2ffb1c;
        }
    }
    ctx->pc = 0x2FFB08u;
label_2ffb08:
    // 0x2ffb08: 0x8fa401e8
    ctx->pc = 0x2ffb08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ffb0c:
    // 0x2ffb0c: 0xc0bf940
label_2ffb10:
    if (ctx->pc == 0x2FFB10u) {
        ctx->pc = 0x2FFB10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FFB14u;
        goto label_2ffb14;
    }
    ctx->pc = 0x2FFB0Cu;
    SET_GPR_U32(ctx, 31, 0x2FFB14u);
    ctx->pc = 0x2FFB10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB14u; }
    }
    if (ctx->pc != 0x2FFB14u) { return; }
    ctx->pc = 0x2FFB14u;
label_2ffb14:
    // 0x2ffb14: 0x1440000d
label_2ffb18:
    if (ctx->pc == 0x2FFB18u) {
        ctx->pc = 0x2FFB18u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FFB1Cu;
        goto label_2ffb1c;
    }
    ctx->pc = 0x2FFB14u;
    {
        const bool branch_taken_0x2ffb14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFB18u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ffb14) {
            ctx->pc = 0x2FFB4Cu;
            goto label_2ffb4c;
        }
    }
    ctx->pc = 0x2FFB1Cu;
label_2ffb1c:
    // 0x2ffb1c: 0xafa00014
    ctx->pc = 0x2ffb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2ffb20:
    // 0x2ffb20: 0x1000fb0d
label_2ffb24:
    if (ctx->pc == 0x2FFB24u) {
        ctx->pc = 0x2FFB24u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FFB28u;
        goto label_2ffb28;
    }
    ctx->pc = 0x2FFB20u;
    {
        const bool branch_taken_0x2ffb20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFB24u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2ffb20) {
            ctx->pc = 0x2FE758u;
            goto label_2fe758;
        }
    }
    ctx->pc = 0x2FFB28u;
label_2ffb28:
    // 0x2ffb28: 0x8fa20018
    ctx->pc = 0x2ffb28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2ffb2c:
    // 0x2ffb2c: 0x10400005
label_2ffb30:
    if (ctx->pc == 0x2FFB30u) {
        ctx->pc = 0x2FFB30u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FFB34u;
        goto label_2ffb34;
    }
    ctx->pc = 0x2FFB2Cu;
    {
        const bool branch_taken_0x2ffb2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFB30u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ffb2c) {
            ctx->pc = 0x2FFB44u;
            goto label_2ffb44;
        }
    }
    ctx->pc = 0x2FFB34u;
label_2ffb34:
    // 0x2ffb34: 0xc0bf940
label_2ffb38:
    if (ctx->pc == 0x2FFB38u) {
        ctx->pc = 0x2FFB38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2FFB3Cu;
        goto label_2ffb3c;
    }
    ctx->pc = 0x2FFB34u;
    SET_GPR_U32(ctx, 31, 0x2FFB3Cu);
    ctx->pc = 0x2FFB38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2FE500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x2fe500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB3Cu; }
    }
    if (ctx->pc != 0x2FFB3Cu) { return; }
    ctx->pc = 0x2FFB3Cu;
label_2ffb3c:
    // 0x2ffb3c: 0x14400003
label_2ffb40:
    if (ctx->pc == 0x2FFB40u) {
        ctx->pc = 0x2FFB40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x2FFB44u;
        goto label_2ffb44;
    }
    ctx->pc = 0x2FFB3Cu;
    {
        const bool branch_taken_0x2ffb3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2FFB40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x2ffb3c) {
            ctx->pc = 0x2FFB4Cu;
            goto label_2ffb4c;
        }
    }
    ctx->pc = 0x2FFB44u;
label_2ffb44:
    // 0x2ffb44: 0xafa00014
    ctx->pc = 0x2ffb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2ffb48:
    // 0x2ffb48: 0x8fa201e8
    ctx->pc = 0x2ffb48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2ffb4c:
    // 0x2ffb4c: 0x8fa401f0
    ctx->pc = 0x2ffb4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ffb50:
    // 0x2ffb50: 0x9443000c
    ctx->pc = 0x2ffb50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_2ffb54:
    // 0x2ffb54: 0x2402ffff
    ctx->pc = 0x2ffb54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ffb58:
    // 0x2ffb58: 0x30630040
    ctx->pc = 0x2ffb58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 64));
label_2ffb5c:
    // 0x2ffb5c: 0x83100a
    ctx->pc = 0x2ffb5cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2ffb60:
    // 0x2ffb60: 0xdfbf02c0
    ctx->pc = 0x2ffb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_2ffb64:
    // 0x2ffb64: 0xdfbe02b0
    ctx->pc = 0x2ffb64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_2ffb68:
    // 0x2ffb68: 0xdfb702a0
    ctx->pc = 0x2ffb68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_2ffb6c:
    // 0x2ffb6c: 0xdfb60290
    ctx->pc = 0x2ffb6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_2ffb70:
    // 0x2ffb70: 0xdfb50280
    ctx->pc = 0x2ffb70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_2ffb74:
    // 0x2ffb74: 0xdfb40270
    ctx->pc = 0x2ffb74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_2ffb78:
    // 0x2ffb78: 0xdfb30260
    ctx->pc = 0x2ffb78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_2ffb7c:
    // 0x2ffb7c: 0xdfb20250
    ctx->pc = 0x2ffb7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_2ffb80:
    // 0x2ffb80: 0xdfb10240
    ctx->pc = 0x2ffb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_2ffb84:
    // 0x2ffb84: 0xdfb00230
    ctx->pc = 0x2ffb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_2ffb88:
    // 0x2ffb88: 0x3e00008
label_2ffb8c:
    if (ctx->pc == 0x2FFB8Cu) {
        ctx->pc = 0x2FFB8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x2FFB90u;
        goto label_fallthrough_0x2ffb88;
    }
    ctx->pc = 0x2FFB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FE678u: goto label_2fe678;
            case 0x2FE67Cu: goto label_2fe67c;
            case 0x2FE680u: goto label_2fe680;
            case 0x2FE684u: goto label_2fe684;
            case 0x2FE688u: goto label_2fe688;
            case 0x2FE68Cu: goto label_2fe68c;
            case 0x2FE690u: goto label_2fe690;
            case 0x2FE694u: goto label_2fe694;
            case 0x2FE698u: goto label_2fe698;
            case 0x2FE69Cu: goto label_2fe69c;
            case 0x2FE6A0u: goto label_2fe6a0;
            case 0x2FE6A4u: goto label_2fe6a4;
            case 0x2FE6A8u: goto label_2fe6a8;
            case 0x2FE6ACu: goto label_2fe6ac;
            case 0x2FE6B0u: goto label_2fe6b0;
            case 0x2FE6B4u: goto label_2fe6b4;
            case 0x2FE6B8u: goto label_2fe6b8;
            case 0x2FE6BCu: goto label_2fe6bc;
            case 0x2FE6C0u: goto label_2fe6c0;
            case 0x2FE6C4u: goto label_2fe6c4;
            case 0x2FE6C8u: goto label_2fe6c8;
            case 0x2FE6CCu: goto label_2fe6cc;
            case 0x2FE6D0u: goto label_2fe6d0;
            case 0x2FE6D4u: goto label_2fe6d4;
            case 0x2FE6D8u: goto label_2fe6d8;
            case 0x2FE6DCu: goto label_2fe6dc;
            case 0x2FE6E0u: goto label_2fe6e0;
            case 0x2FE6E4u: goto label_2fe6e4;
            case 0x2FE6E8u: goto label_2fe6e8;
            case 0x2FE6ECu: goto label_2fe6ec;
            case 0x2FE6F0u: goto label_2fe6f0;
            case 0x2FE6F4u: goto label_2fe6f4;
            case 0x2FE6F8u: goto label_2fe6f8;
            case 0x2FE6FCu: goto label_2fe6fc;
            case 0x2FE700u: goto label_2fe700;
            case 0x2FE704u: goto label_2fe704;
            case 0x2FE708u: goto label_2fe708;
            case 0x2FE70Cu: goto label_2fe70c;
            case 0x2FE710u: goto label_2fe710;
            case 0x2FE714u: goto label_2fe714;
            case 0x2FE718u: goto label_2fe718;
            case 0x2FE71Cu: goto label_2fe71c;
            case 0x2FE720u: goto label_2fe720;
            case 0x2FE724u: goto label_2fe724;
            case 0x2FE728u: goto label_2fe728;
            case 0x2FE72Cu: goto label_2fe72c;
            case 0x2FE730u: goto label_2fe730;
            case 0x2FE734u: goto label_2fe734;
            case 0x2FE738u: goto label_2fe738;
            case 0x2FE73Cu: goto label_2fe73c;
            case 0x2FE740u: goto label_2fe740;
            case 0x2FE744u: goto label_2fe744;
            case 0x2FE748u: goto label_2fe748;
            case 0x2FE74Cu: goto label_2fe74c;
            case 0x2FE750u: goto label_2fe750;
            case 0x2FE754u: goto label_2fe754;
            case 0x2FE758u: goto label_2fe758;
            case 0x2FE75Cu: goto label_2fe75c;
            case 0x2FE760u: goto label_2fe760;
            case 0x2FE764u: goto label_2fe764;
            case 0x2FE768u: goto label_2fe768;
            case 0x2FE76Cu: goto label_2fe76c;
            case 0x2FE770u: goto label_2fe770;
            case 0x2FE774u: goto label_2fe774;
            case 0x2FE778u: goto label_2fe778;
            case 0x2FE77Cu: goto label_2fe77c;
            case 0x2FE780u: goto label_2fe780;
            case 0x2FE784u: goto label_2fe784;
            case 0x2FE788u: goto label_2fe788;
            case 0x2FE78Cu: goto label_2fe78c;
            case 0x2FE790u: goto label_2fe790;
            case 0x2FE794u: goto label_2fe794;
            case 0x2FE798u: goto label_2fe798;
            case 0x2FE79Cu: goto label_2fe79c;
            case 0x2FE7A0u: goto label_2fe7a0;
            case 0x2FE7A4u: goto label_2fe7a4;
            case 0x2FE7A8u: goto label_2fe7a8;
            case 0x2FE7ACu: goto label_2fe7ac;
            case 0x2FE7B0u: goto label_2fe7b0;
            case 0x2FE7B4u: goto label_2fe7b4;
            case 0x2FE7B8u: goto label_2fe7b8;
            case 0x2FE7BCu: goto label_2fe7bc;
            case 0x2FE7C0u: goto label_2fe7c0;
            case 0x2FE7C4u: goto label_2fe7c4;
            case 0x2FE7C8u: goto label_2fe7c8;
            case 0x2FE7CCu: goto label_2fe7cc;
            case 0x2FE7D0u: goto label_2fe7d0;
            case 0x2FE7D4u: goto label_2fe7d4;
            case 0x2FE7D8u: goto label_2fe7d8;
            case 0x2FE7DCu: goto label_2fe7dc;
            case 0x2FE7E0u: goto label_2fe7e0;
            case 0x2FE7E4u: goto label_2fe7e4;
            case 0x2FE7E8u: goto label_2fe7e8;
            case 0x2FE7ECu: goto label_2fe7ec;
            case 0x2FE7F0u: goto label_2fe7f0;
            case 0x2FE7F4u: goto label_2fe7f4;
            case 0x2FE7F8u: goto label_2fe7f8;
            case 0x2FE7FCu: goto label_2fe7fc;
            case 0x2FE800u: goto label_2fe800;
            case 0x2FE804u: goto label_2fe804;
            case 0x2FE808u: goto label_2fe808;
            case 0x2FE80Cu: goto label_2fe80c;
            case 0x2FE810u: goto label_2fe810;
            case 0x2FE814u: goto label_2fe814;
            case 0x2FE818u: goto label_2fe818;
            case 0x2FE81Cu: goto label_2fe81c;
            case 0x2FE820u: goto label_2fe820;
            case 0x2FE824u: goto label_2fe824;
            case 0x2FE828u: goto label_2fe828;
            case 0x2FE82Cu: goto label_2fe82c;
            case 0x2FE830u: goto label_2fe830;
            case 0x2FE834u: goto label_2fe834;
            case 0x2FE838u: goto label_2fe838;
            case 0x2FE83Cu: goto label_2fe83c;
            case 0x2FE840u: goto label_2fe840;
            case 0x2FE844u: goto label_2fe844;
            case 0x2FE848u: goto label_2fe848;
            case 0x2FE84Cu: goto label_2fe84c;
            case 0x2FE850u: goto label_2fe850;
            case 0x2FE854u: goto label_2fe854;
            case 0x2FE858u: goto label_2fe858;
            case 0x2FE85Cu: goto label_2fe85c;
            case 0x2FE860u: goto label_2fe860;
            case 0x2FE864u: goto label_2fe864;
            case 0x2FE868u: goto label_2fe868;
            case 0x2FE86Cu: goto label_2fe86c;
            case 0x2FE870u: goto label_2fe870;
            case 0x2FE874u: goto label_2fe874;
            case 0x2FE878u: goto label_2fe878;
            case 0x2FE87Cu: goto label_2fe87c;
            case 0x2FE880u: goto label_2fe880;
            case 0x2FE884u: goto label_2fe884;
            case 0x2FE888u: goto label_2fe888;
            case 0x2FE88Cu: goto label_2fe88c;
            case 0x2FE890u: goto label_2fe890;
            case 0x2FE894u: goto label_2fe894;
            case 0x2FE898u: goto label_2fe898;
            case 0x2FE89Cu: goto label_2fe89c;
            case 0x2FE8A0u: goto label_2fe8a0;
            case 0x2FE8A4u: goto label_2fe8a4;
            case 0x2FE8A8u: goto label_2fe8a8;
            case 0x2FE8ACu: goto label_2fe8ac;
            case 0x2FE8B0u: goto label_2fe8b0;
            case 0x2FE8B4u: goto label_2fe8b4;
            case 0x2FE8B8u: goto label_2fe8b8;
            case 0x2FE8BCu: goto label_2fe8bc;
            case 0x2FE8C0u: goto label_2fe8c0;
            case 0x2FE8C4u: goto label_2fe8c4;
            case 0x2FE8C8u: goto label_2fe8c8;
            case 0x2FE8CCu: goto label_2fe8cc;
            case 0x2FE8D0u: goto label_2fe8d0;
            case 0x2FE8D4u: goto label_2fe8d4;
            case 0x2FE8D8u: goto label_2fe8d8;
            case 0x2FE8DCu: goto label_2fe8dc;
            case 0x2FE8E0u: goto label_2fe8e0;
            case 0x2FE8E4u: goto label_2fe8e4;
            case 0x2FE8E8u: goto label_2fe8e8;
            case 0x2FE8ECu: goto label_2fe8ec;
            case 0x2FE8F0u: goto label_2fe8f0;
            case 0x2FE8F4u: goto label_2fe8f4;
            case 0x2FE8F8u: goto label_2fe8f8;
            case 0x2FE8FCu: goto label_2fe8fc;
            case 0x2FE900u: goto label_2fe900;
            case 0x2FE904u: goto label_2fe904;
            case 0x2FE908u: goto label_2fe908;
            case 0x2FE90Cu: goto label_2fe90c;
            case 0x2FE910u: goto label_2fe910;
            case 0x2FE914u: goto label_2fe914;
            case 0x2FE918u: goto label_2fe918;
            case 0x2FE91Cu: goto label_2fe91c;
            case 0x2FE920u: goto label_2fe920;
            case 0x2FE924u: goto label_2fe924;
            case 0x2FE928u: goto label_2fe928;
            case 0x2FE92Cu: goto label_2fe92c;
            case 0x2FE930u: goto label_2fe930;
            case 0x2FE934u: goto label_2fe934;
            case 0x2FE938u: goto label_2fe938;
            case 0x2FE93Cu: goto label_2fe93c;
            case 0x2FE940u: goto label_2fe940;
            case 0x2FE944u: goto label_2fe944;
            case 0x2FE948u: goto label_2fe948;
            case 0x2FE94Cu: goto label_2fe94c;
            case 0x2FE950u: goto label_2fe950;
            case 0x2FE954u: goto label_2fe954;
            case 0x2FE958u: goto label_2fe958;
            case 0x2FE95Cu: goto label_2fe95c;
            case 0x2FE960u: goto label_2fe960;
            case 0x2FE964u: goto label_2fe964;
            case 0x2FE968u: goto label_2fe968;
            case 0x2FE96Cu: goto label_2fe96c;
            case 0x2FE970u: goto label_2fe970;
            case 0x2FE974u: goto label_2fe974;
            case 0x2FE978u: goto label_2fe978;
            case 0x2FE97Cu: goto label_2fe97c;
            case 0x2FE980u: goto label_2fe980;
            case 0x2FE984u: goto label_2fe984;
            case 0x2FE988u: goto label_2fe988;
            case 0x2FE98Cu: goto label_2fe98c;
            case 0x2FE990u: goto label_2fe990;
            case 0x2FE994u: goto label_2fe994;
            case 0x2FE998u: goto label_2fe998;
            case 0x2FE99Cu: goto label_2fe99c;
            case 0x2FE9A0u: goto label_2fe9a0;
            case 0x2FE9A4u: goto label_2fe9a4;
            case 0x2FE9A8u: goto label_2fe9a8;
            case 0x2FE9ACu: goto label_2fe9ac;
            case 0x2FE9B0u: goto label_2fe9b0;
            case 0x2FE9B4u: goto label_2fe9b4;
            case 0x2FE9B8u: goto label_2fe9b8;
            case 0x2FE9BCu: goto label_2fe9bc;
            case 0x2FE9C0u: goto label_2fe9c0;
            case 0x2FE9C4u: goto label_2fe9c4;
            case 0x2FE9C8u: goto label_2fe9c8;
            case 0x2FE9CCu: goto label_2fe9cc;
            case 0x2FE9D0u: goto label_2fe9d0;
            case 0x2FE9D4u: goto label_2fe9d4;
            case 0x2FE9D8u: goto label_2fe9d8;
            case 0x2FE9DCu: goto label_2fe9dc;
            case 0x2FE9E0u: goto label_2fe9e0;
            case 0x2FE9E4u: goto label_2fe9e4;
            case 0x2FE9E8u: goto label_2fe9e8;
            case 0x2FE9ECu: goto label_2fe9ec;
            case 0x2FE9F0u: goto label_2fe9f0;
            case 0x2FE9F4u: goto label_2fe9f4;
            case 0x2FE9F8u: goto label_2fe9f8;
            case 0x2FE9FCu: goto label_2fe9fc;
            case 0x2FEA00u: goto label_2fea00;
            case 0x2FEA04u: goto label_2fea04;
            case 0x2FEA08u: goto label_2fea08;
            case 0x2FEA0Cu: goto label_2fea0c;
            case 0x2FEA10u: goto label_2fea10;
            case 0x2FEA14u: goto label_2fea14;
            case 0x2FEA18u: goto label_2fea18;
            case 0x2FEA1Cu: goto label_2fea1c;
            case 0x2FEA20u: goto label_2fea20;
            case 0x2FEA24u: goto label_2fea24;
            case 0x2FEA28u: goto label_2fea28;
            case 0x2FEA2Cu: goto label_2fea2c;
            case 0x2FEA30u: goto label_2fea30;
            case 0x2FEA34u: goto label_2fea34;
            case 0x2FEA38u: goto label_2fea38;
            case 0x2FEA3Cu: goto label_2fea3c;
            case 0x2FEA40u: goto label_2fea40;
            case 0x2FEA44u: goto label_2fea44;
            case 0x2FEA48u: goto label_2fea48;
            case 0x2FEA4Cu: goto label_2fea4c;
            case 0x2FEA50u: goto label_2fea50;
            case 0x2FEA54u: goto label_2fea54;
            case 0x2FEA58u: goto label_2fea58;
            case 0x2FEA5Cu: goto label_2fea5c;
            case 0x2FEA60u: goto label_2fea60;
            case 0x2FEA64u: goto label_2fea64;
            case 0x2FEA68u: goto label_2fea68;
            case 0x2FEA6Cu: goto label_2fea6c;
            case 0x2FEA70u: goto label_2fea70;
            case 0x2FEA74u: goto label_2fea74;
            case 0x2FEA78u: goto label_2fea78;
            case 0x2FEA7Cu: goto label_2fea7c;
            case 0x2FEA80u: goto label_2fea80;
            case 0x2FEA84u: goto label_2fea84;
            case 0x2FEA88u: goto label_2fea88;
            case 0x2FEA8Cu: goto label_2fea8c;
            case 0x2FEA90u: goto label_2fea90;
            case 0x2FEA94u: goto label_2fea94;
            case 0x2FEA98u: goto label_2fea98;
            case 0x2FEA9Cu: goto label_2fea9c;
            case 0x2FEAA0u: goto label_2feaa0;
            case 0x2FEAA4u: goto label_2feaa4;
            case 0x2FEAA8u: goto label_2feaa8;
            case 0x2FEAACu: goto label_2feaac;
            case 0x2FEAB0u: goto label_2feab0;
            case 0x2FEAB4u: goto label_2feab4;
            case 0x2FEAB8u: goto label_2feab8;
            case 0x2FEABCu: goto label_2feabc;
            case 0x2FEAC0u: goto label_2feac0;
            case 0x2FEAC4u: goto label_2feac4;
            case 0x2FEAC8u: goto label_2feac8;
            case 0x2FEACCu: goto label_2feacc;
            case 0x2FEAD0u: goto label_2fead0;
            case 0x2FEAD4u: goto label_2fead4;
            case 0x2FEAD8u: goto label_2fead8;
            case 0x2FEADCu: goto label_2feadc;
            case 0x2FEAE0u: goto label_2feae0;
            case 0x2FEAE4u: goto label_2feae4;
            case 0x2FEAE8u: goto label_2feae8;
            case 0x2FEAECu: goto label_2feaec;
            case 0x2FEAF0u: goto label_2feaf0;
            case 0x2FEAF4u: goto label_2feaf4;
            case 0x2FEAF8u: goto label_2feaf8;
            case 0x2FEAFCu: goto label_2feafc;
            case 0x2FEB00u: goto label_2feb00;
            case 0x2FEB04u: goto label_2feb04;
            case 0x2FEB08u: goto label_2feb08;
            case 0x2FEB0Cu: goto label_2feb0c;
            case 0x2FEB10u: goto label_2feb10;
            case 0x2FEB14u: goto label_2feb14;
            case 0x2FEB18u: goto label_2feb18;
            case 0x2FEB1Cu: goto label_2feb1c;
            case 0x2FEB20u: goto label_2feb20;
            case 0x2FEB24u: goto label_2feb24;
            case 0x2FEB28u: goto label_2feb28;
            case 0x2FEB2Cu: goto label_2feb2c;
            case 0x2FEB30u: goto label_2feb30;
            case 0x2FEB34u: goto label_2feb34;
            case 0x2FEB38u: goto label_2feb38;
            case 0x2FEB3Cu: goto label_2feb3c;
            case 0x2FEB40u: goto label_2feb40;
            case 0x2FEB44u: goto label_2feb44;
            case 0x2FEB48u: goto label_2feb48;
            case 0x2FEB4Cu: goto label_2feb4c;
            case 0x2FEB50u: goto label_2feb50;
            case 0x2FEB54u: goto label_2feb54;
            case 0x2FEB58u: goto label_2feb58;
            case 0x2FEB5Cu: goto label_2feb5c;
            case 0x2FEB60u: goto label_2feb60;
            case 0x2FEB64u: goto label_2feb64;
            case 0x2FEB68u: goto label_2feb68;
            case 0x2FEB6Cu: goto label_2feb6c;
            case 0x2FEB70u: goto label_2feb70;
            case 0x2FEB74u: goto label_2feb74;
            case 0x2FEB78u: goto label_2feb78;
            case 0x2FEB7Cu: goto label_2feb7c;
            case 0x2FEB80u: goto label_2feb80;
            case 0x2FEB84u: goto label_2feb84;
            case 0x2FEB88u: goto label_2feb88;
            case 0x2FEB8Cu: goto label_2feb8c;
            case 0x2FEB90u: goto label_2feb90;
            case 0x2FEB94u: goto label_2feb94;
            case 0x2FEB98u: goto label_2feb98;
            case 0x2FEB9Cu: goto label_2feb9c;
            case 0x2FEBA0u: goto label_2feba0;
            case 0x2FEBA4u: goto label_2feba4;
            case 0x2FEBA8u: goto label_2feba8;
            case 0x2FEBACu: goto label_2febac;
            case 0x2FEBB0u: goto label_2febb0;
            case 0x2FEBB4u: goto label_2febb4;
            case 0x2FEBB8u: goto label_2febb8;
            case 0x2FEBBCu: goto label_2febbc;
            case 0x2FEBC0u: goto label_2febc0;
            case 0x2FEBC4u: goto label_2febc4;
            case 0x2FEBC8u: goto label_2febc8;
            case 0x2FEBCCu: goto label_2febcc;
            case 0x2FEBD0u: goto label_2febd0;
            case 0x2FEBD4u: goto label_2febd4;
            case 0x2FEBD8u: goto label_2febd8;
            case 0x2FEBDCu: goto label_2febdc;
            case 0x2FEBE0u: goto label_2febe0;
            case 0x2FEBE4u: goto label_2febe4;
            case 0x2FEBE8u: goto label_2febe8;
            case 0x2FEBECu: goto label_2febec;
            case 0x2FEBF0u: goto label_2febf0;
            case 0x2FEBF4u: goto label_2febf4;
            case 0x2FEBF8u: goto label_2febf8;
            case 0x2FEBFCu: goto label_2febfc;
            case 0x2FEC00u: goto label_2fec00;
            case 0x2FEC04u: goto label_2fec04;
            case 0x2FEC08u: goto label_2fec08;
            case 0x2FEC0Cu: goto label_2fec0c;
            case 0x2FEC10u: goto label_2fec10;
            case 0x2FEC14u: goto label_2fec14;
            case 0x2FEC18u: goto label_2fec18;
            case 0x2FEC1Cu: goto label_2fec1c;
            case 0x2FEC20u: goto label_2fec20;
            case 0x2FEC24u: goto label_2fec24;
            case 0x2FEC28u: goto label_2fec28;
            case 0x2FEC2Cu: goto label_2fec2c;
            case 0x2FEC30u: goto label_2fec30;
            case 0x2FEC34u: goto label_2fec34;
            case 0x2FEC38u: goto label_2fec38;
            case 0x2FEC3Cu: goto label_2fec3c;
            case 0x2FEC40u: goto label_2fec40;
            case 0x2FEC44u: goto label_2fec44;
            case 0x2FEC48u: goto label_2fec48;
            case 0x2FEC4Cu: goto label_2fec4c;
            case 0x2FEC50u: goto label_2fec50;
            case 0x2FEC54u: goto label_2fec54;
            case 0x2FEC58u: goto label_2fec58;
            case 0x2FEC5Cu: goto label_2fec5c;
            case 0x2FEC60u: goto label_2fec60;
            case 0x2FEC64u: goto label_2fec64;
            case 0x2FEC68u: goto label_2fec68;
            case 0x2FEC6Cu: goto label_2fec6c;
            case 0x2FEC70u: goto label_2fec70;
            case 0x2FEC74u: goto label_2fec74;
            case 0x2FEC78u: goto label_2fec78;
            case 0x2FEC7Cu: goto label_2fec7c;
            case 0x2FEC80u: goto label_2fec80;
            case 0x2FEC84u: goto label_2fec84;
            case 0x2FEC88u: goto label_2fec88;
            case 0x2FEC8Cu: goto label_2fec8c;
            case 0x2FEC90u: goto label_2fec90;
            case 0x2FEC94u: goto label_2fec94;
            case 0x2FEC98u: goto label_2fec98;
            case 0x2FEC9Cu: goto label_2fec9c;
            case 0x2FECA0u: goto label_2feca0;
            case 0x2FECA4u: goto label_2feca4;
            case 0x2FECA8u: goto label_2feca8;
            case 0x2FECACu: goto label_2fecac;
            case 0x2FECB0u: goto label_2fecb0;
            case 0x2FECB4u: goto label_2fecb4;
            case 0x2FECB8u: goto label_2fecb8;
            case 0x2FECBCu: goto label_2fecbc;
            case 0x2FECC0u: goto label_2fecc0;
            case 0x2FECC4u: goto label_2fecc4;
            case 0x2FECC8u: goto label_2fecc8;
            case 0x2FECCCu: goto label_2feccc;
            case 0x2FECD0u: goto label_2fecd0;
            case 0x2FECD4u: goto label_2fecd4;
            case 0x2FECD8u: goto label_2fecd8;
            case 0x2FECDCu: goto label_2fecdc;
            case 0x2FECE0u: goto label_2fece0;
            case 0x2FECE4u: goto label_2fece4;
            case 0x2FECE8u: goto label_2fece8;
            case 0x2FECECu: goto label_2fecec;
            case 0x2FECF0u: goto label_2fecf0;
            case 0x2FECF4u: goto label_2fecf4;
            case 0x2FECF8u: goto label_2fecf8;
            case 0x2FECFCu: goto label_2fecfc;
            case 0x2FED00u: goto label_2fed00;
            case 0x2FED04u: goto label_2fed04;
            case 0x2FED08u: goto label_2fed08;
            case 0x2FED0Cu: goto label_2fed0c;
            case 0x2FED10u: goto label_2fed10;
            case 0x2FED14u: goto label_2fed14;
            case 0x2FED18u: goto label_2fed18;
            case 0x2FED1Cu: goto label_2fed1c;
            case 0x2FED20u: goto label_2fed20;
            case 0x2FED24u: goto label_2fed24;
            case 0x2FED28u: goto label_2fed28;
            case 0x2FED2Cu: goto label_2fed2c;
            case 0x2FED30u: goto label_2fed30;
            case 0x2FED34u: goto label_2fed34;
            case 0x2FED38u: goto label_2fed38;
            case 0x2FED3Cu: goto label_2fed3c;
            case 0x2FED40u: goto label_2fed40;
            case 0x2FED44u: goto label_2fed44;
            case 0x2FED48u: goto label_2fed48;
            case 0x2FED4Cu: goto label_2fed4c;
            case 0x2FED50u: goto label_2fed50;
            case 0x2FED54u: goto label_2fed54;
            case 0x2FED58u: goto label_2fed58;
            case 0x2FED5Cu: goto label_2fed5c;
            case 0x2FED60u: goto label_2fed60;
            case 0x2FED64u: goto label_2fed64;
            case 0x2FED68u: goto label_2fed68;
            case 0x2FED6Cu: goto label_2fed6c;
            case 0x2FED70u: goto label_2fed70;
            case 0x2FED74u: goto label_2fed74;
            case 0x2FED78u: goto label_2fed78;
            case 0x2FED7Cu: goto label_2fed7c;
            case 0x2FED80u: goto label_2fed80;
            case 0x2FED84u: goto label_2fed84;
            case 0x2FED88u: goto label_2fed88;
            case 0x2FED8Cu: goto label_2fed8c;
            case 0x2FED90u: goto label_2fed90;
            case 0x2FED94u: goto label_2fed94;
            case 0x2FED98u: goto label_2fed98;
            case 0x2FED9Cu: goto label_2fed9c;
            case 0x2FEDA0u: goto label_2feda0;
            case 0x2FEDA4u: goto label_2feda4;
            case 0x2FEDA8u: goto label_2feda8;
            case 0x2FEDACu: goto label_2fedac;
            case 0x2FEDB0u: goto label_2fedb0;
            case 0x2FEDB4u: goto label_2fedb4;
            case 0x2FEDB8u: goto label_2fedb8;
            case 0x2FEDBCu: goto label_2fedbc;
            case 0x2FEDC0u: goto label_2fedc0;
            case 0x2FEDC4u: goto label_2fedc4;
            case 0x2FEDC8u: goto label_2fedc8;
            case 0x2FEDCCu: goto label_2fedcc;
            case 0x2FEDD0u: goto label_2fedd0;
            case 0x2FEDD4u: goto label_2fedd4;
            case 0x2FEDD8u: goto label_2fedd8;
            case 0x2FEDDCu: goto label_2feddc;
            case 0x2FEDE0u: goto label_2fede0;
            case 0x2FEDE4u: goto label_2fede4;
            case 0x2FEDE8u: goto label_2fede8;
            case 0x2FEDECu: goto label_2fedec;
            case 0x2FEDF0u: goto label_2fedf0;
            case 0x2FEDF4u: goto label_2fedf4;
            case 0x2FEDF8u: goto label_2fedf8;
            case 0x2FEDFCu: goto label_2fedfc;
            case 0x2FEE00u: goto label_2fee00;
            case 0x2FEE04u: goto label_2fee04;
            case 0x2FEE08u: goto label_2fee08;
            case 0x2FEE0Cu: goto label_2fee0c;
            case 0x2FEE10u: goto label_2fee10;
            case 0x2FEE14u: goto label_2fee14;
            case 0x2FEE18u: goto label_2fee18;
            case 0x2FEE1Cu: goto label_2fee1c;
            case 0x2FEE20u: goto label_2fee20;
            case 0x2FEE24u: goto label_2fee24;
            case 0x2FEE28u: goto label_2fee28;
            case 0x2FEE2Cu: goto label_2fee2c;
            case 0x2FEE30u: goto label_2fee30;
            case 0x2FEE34u: goto label_2fee34;
            case 0x2FEE38u: goto label_2fee38;
            case 0x2FEE3Cu: goto label_2fee3c;
            case 0x2FEE40u: goto label_2fee40;
            case 0x2FEE44u: goto label_2fee44;
            case 0x2FEE48u: goto label_2fee48;
            case 0x2FEE4Cu: goto label_2fee4c;
            case 0x2FEE50u: goto label_2fee50;
            case 0x2FEE54u: goto label_2fee54;
            case 0x2FEE58u: goto label_2fee58;
            case 0x2FEE5Cu: goto label_2fee5c;
            case 0x2FEE60u: goto label_2fee60;
            case 0x2FEE64u: goto label_2fee64;
            case 0x2FEE68u: goto label_2fee68;
            case 0x2FEE6Cu: goto label_2fee6c;
            case 0x2FEE70u: goto label_2fee70;
            case 0x2FEE74u: goto label_2fee74;
            case 0x2FEE78u: goto label_2fee78;
            case 0x2FEE7Cu: goto label_2fee7c;
            case 0x2FEE80u: goto label_2fee80;
            case 0x2FEE84u: goto label_2fee84;
            case 0x2FEE88u: goto label_2fee88;
            case 0x2FEE8Cu: goto label_2fee8c;
            case 0x2FEE90u: goto label_2fee90;
            case 0x2FEE94u: goto label_2fee94;
            case 0x2FEE98u: goto label_2fee98;
            case 0x2FEE9Cu: goto label_2fee9c;
            case 0x2FEEA0u: goto label_2feea0;
            case 0x2FEEA4u: goto label_2feea4;
            case 0x2FEEA8u: goto label_2feea8;
            case 0x2FEEACu: goto label_2feeac;
            case 0x2FEEB0u: goto label_2feeb0;
            case 0x2FEEB4u: goto label_2feeb4;
            case 0x2FEEB8u: goto label_2feeb8;
            case 0x2FEEBCu: goto label_2feebc;
            case 0x2FEEC0u: goto label_2feec0;
            case 0x2FEEC4u: goto label_2feec4;
            case 0x2FEEC8u: goto label_2feec8;
            case 0x2FEECCu: goto label_2feecc;
            case 0x2FEED0u: goto label_2feed0;
            case 0x2FEED4u: goto label_2feed4;
            case 0x2FEED8u: goto label_2feed8;
            case 0x2FEEDCu: goto label_2feedc;
            case 0x2FEEE0u: goto label_2feee0;
            case 0x2FEEE4u: goto label_2feee4;
            case 0x2FEEE8u: goto label_2feee8;
            case 0x2FEEECu: goto label_2feeec;
            case 0x2FEEF0u: goto label_2feef0;
            case 0x2FEEF4u: goto label_2feef4;
            case 0x2FEEF8u: goto label_2feef8;
            case 0x2FEEFCu: goto label_2feefc;
            case 0x2FEF00u: goto label_2fef00;
            case 0x2FEF04u: goto label_2fef04;
            case 0x2FEF08u: goto label_2fef08;
            case 0x2FEF0Cu: goto label_2fef0c;
            case 0x2FEF10u: goto label_2fef10;
            case 0x2FEF14u: goto label_2fef14;
            case 0x2FEF18u: goto label_2fef18;
            case 0x2FEF1Cu: goto label_2fef1c;
            case 0x2FEF20u: goto label_2fef20;
            case 0x2FEF24u: goto label_2fef24;
            case 0x2FEF28u: goto label_2fef28;
            case 0x2FEF2Cu: goto label_2fef2c;
            case 0x2FEF30u: goto label_2fef30;
            case 0x2FEF34u: goto label_2fef34;
            case 0x2FEF38u: goto label_2fef38;
            case 0x2FEF3Cu: goto label_2fef3c;
            case 0x2FEF40u: goto label_2fef40;
            case 0x2FEF44u: goto label_2fef44;
            case 0x2FEF48u: goto label_2fef48;
            case 0x2FEF4Cu: goto label_2fef4c;
            case 0x2FEF50u: goto label_2fef50;
            case 0x2FEF54u: goto label_2fef54;
            case 0x2FEF58u: goto label_2fef58;
            case 0x2FEF5Cu: goto label_2fef5c;
            case 0x2FEF60u: goto label_2fef60;
            case 0x2FEF64u: goto label_2fef64;
            case 0x2FEF68u: goto label_2fef68;
            case 0x2FEF6Cu: goto label_2fef6c;
            case 0x2FEF70u: goto label_2fef70;
            case 0x2FEF74u: goto label_2fef74;
            case 0x2FEF78u: goto label_2fef78;
            case 0x2FEF7Cu: goto label_2fef7c;
            case 0x2FEF80u: goto label_2fef80;
            case 0x2FEF84u: goto label_2fef84;
            case 0x2FEF88u: goto label_2fef88;
            case 0x2FEF8Cu: goto label_2fef8c;
            case 0x2FEF90u: goto label_2fef90;
            case 0x2FEF94u: goto label_2fef94;
            case 0x2FEF98u: goto label_2fef98;
            case 0x2FEF9Cu: goto label_2fef9c;
            case 0x2FEFA0u: goto label_2fefa0;
            case 0x2FEFA4u: goto label_2fefa4;
            case 0x2FEFA8u: goto label_2fefa8;
            case 0x2FEFACu: goto label_2fefac;
            case 0x2FEFB0u: goto label_2fefb0;
            case 0x2FEFB4u: goto label_2fefb4;
            case 0x2FEFB8u: goto label_2fefb8;
            case 0x2FEFBCu: goto label_2fefbc;
            case 0x2FEFC0u: goto label_2fefc0;
            case 0x2FEFC4u: goto label_2fefc4;
            case 0x2FEFC8u: goto label_2fefc8;
            case 0x2FEFCCu: goto label_2fefcc;
            case 0x2FEFD0u: goto label_2fefd0;
            case 0x2FEFD4u: goto label_2fefd4;
            case 0x2FEFD8u: goto label_2fefd8;
            case 0x2FEFDCu: goto label_2fefdc;
            case 0x2FEFE0u: goto label_2fefe0;
            case 0x2FEFE4u: goto label_2fefe4;
            case 0x2FEFE8u: goto label_2fefe8;
            case 0x2FEFECu: goto label_2fefec;
            case 0x2FEFF0u: goto label_2feff0;
            case 0x2FEFF4u: goto label_2feff4;
            case 0x2FEFF8u: goto label_2feff8;
            case 0x2FEFFCu: goto label_2feffc;
            case 0x2FF000u: goto label_2ff000;
            case 0x2FF004u: goto label_2ff004;
            case 0x2FF008u: goto label_2ff008;
            case 0x2FF00Cu: goto label_2ff00c;
            case 0x2FF010u: goto label_2ff010;
            case 0x2FF014u: goto label_2ff014;
            case 0x2FF018u: goto label_2ff018;
            case 0x2FF01Cu: goto label_2ff01c;
            case 0x2FF020u: goto label_2ff020;
            case 0x2FF024u: goto label_2ff024;
            case 0x2FF028u: goto label_2ff028;
            case 0x2FF02Cu: goto label_2ff02c;
            case 0x2FF030u: goto label_2ff030;
            case 0x2FF034u: goto label_2ff034;
            case 0x2FF038u: goto label_2ff038;
            case 0x2FF03Cu: goto label_2ff03c;
            case 0x2FF040u: goto label_2ff040;
            case 0x2FF044u: goto label_2ff044;
            case 0x2FF048u: goto label_2ff048;
            case 0x2FF04Cu: goto label_2ff04c;
            case 0x2FF050u: goto label_2ff050;
            case 0x2FF054u: goto label_2ff054;
            case 0x2FF058u: goto label_2ff058;
            case 0x2FF05Cu: goto label_2ff05c;
            case 0x2FF060u: goto label_2ff060;
            case 0x2FF064u: goto label_2ff064;
            case 0x2FF068u: goto label_2ff068;
            case 0x2FF06Cu: goto label_2ff06c;
            case 0x2FF070u: goto label_2ff070;
            case 0x2FF074u: goto label_2ff074;
            case 0x2FF078u: goto label_2ff078;
            case 0x2FF07Cu: goto label_2ff07c;
            case 0x2FF080u: goto label_2ff080;
            case 0x2FF084u: goto label_2ff084;
            case 0x2FF088u: goto label_2ff088;
            case 0x2FF08Cu: goto label_2ff08c;
            case 0x2FF090u: goto label_2ff090;
            case 0x2FF094u: goto label_2ff094;
            case 0x2FF098u: goto label_2ff098;
            case 0x2FF09Cu: goto label_2ff09c;
            case 0x2FF0A0u: goto label_2ff0a0;
            case 0x2FF0A4u: goto label_2ff0a4;
            case 0x2FF0A8u: goto label_2ff0a8;
            case 0x2FF0ACu: goto label_2ff0ac;
            case 0x2FF0B0u: goto label_2ff0b0;
            case 0x2FF0B4u: goto label_2ff0b4;
            case 0x2FF0B8u: goto label_2ff0b8;
            case 0x2FF0BCu: goto label_2ff0bc;
            case 0x2FF0C0u: goto label_2ff0c0;
            case 0x2FF0C4u: goto label_2ff0c4;
            case 0x2FF0C8u: goto label_2ff0c8;
            case 0x2FF0CCu: goto label_2ff0cc;
            case 0x2FF0D0u: goto label_2ff0d0;
            case 0x2FF0D4u: goto label_2ff0d4;
            case 0x2FF0D8u: goto label_2ff0d8;
            case 0x2FF0DCu: goto label_2ff0dc;
            case 0x2FF0E0u: goto label_2ff0e0;
            case 0x2FF0E4u: goto label_2ff0e4;
            case 0x2FF0E8u: goto label_2ff0e8;
            case 0x2FF0ECu: goto label_2ff0ec;
            case 0x2FF0F0u: goto label_2ff0f0;
            case 0x2FF0F4u: goto label_2ff0f4;
            case 0x2FF0F8u: goto label_2ff0f8;
            case 0x2FF0FCu: goto label_2ff0fc;
            case 0x2FF100u: goto label_2ff100;
            case 0x2FF104u: goto label_2ff104;
            case 0x2FF108u: goto label_2ff108;
            case 0x2FF10Cu: goto label_2ff10c;
            case 0x2FF110u: goto label_2ff110;
            case 0x2FF114u: goto label_2ff114;
            case 0x2FF118u: goto label_2ff118;
            case 0x2FF11Cu: goto label_2ff11c;
            case 0x2FF120u: goto label_2ff120;
            case 0x2FF124u: goto label_2ff124;
            case 0x2FF128u: goto label_2ff128;
            case 0x2FF12Cu: goto label_2ff12c;
            case 0x2FF130u: goto label_2ff130;
            case 0x2FF134u: goto label_2ff134;
            case 0x2FF138u: goto label_2ff138;
            case 0x2FF13Cu: goto label_2ff13c;
            case 0x2FF140u: goto label_2ff140;
            case 0x2FF144u: goto label_2ff144;
            case 0x2FF148u: goto label_2ff148;
            case 0x2FF14Cu: goto label_2ff14c;
            case 0x2FF150u: goto label_2ff150;
            case 0x2FF154u: goto label_2ff154;
            case 0x2FF158u: goto label_2ff158;
            case 0x2FF15Cu: goto label_2ff15c;
            case 0x2FF160u: goto label_2ff160;
            case 0x2FF164u: goto label_2ff164;
            case 0x2FF168u: goto label_2ff168;
            case 0x2FF16Cu: goto label_2ff16c;
            case 0x2FF170u: goto label_2ff170;
            case 0x2FF174u: goto label_2ff174;
            case 0x2FF178u: goto label_2ff178;
            case 0x2FF17Cu: goto label_2ff17c;
            case 0x2FF180u: goto label_2ff180;
            case 0x2FF184u: goto label_2ff184;
            case 0x2FF188u: goto label_2ff188;
            case 0x2FF18Cu: goto label_2ff18c;
            case 0x2FF190u: goto label_2ff190;
            case 0x2FF194u: goto label_2ff194;
            case 0x2FF198u: goto label_2ff198;
            case 0x2FF19Cu: goto label_2ff19c;
            case 0x2FF1A0u: goto label_2ff1a0;
            case 0x2FF1A4u: goto label_2ff1a4;
            case 0x2FF1A8u: goto label_2ff1a8;
            case 0x2FF1ACu: goto label_2ff1ac;
            case 0x2FF1B0u: goto label_2ff1b0;
            case 0x2FF1B4u: goto label_2ff1b4;
            case 0x2FF1B8u: goto label_2ff1b8;
            case 0x2FF1BCu: goto label_2ff1bc;
            case 0x2FF1C0u: goto label_2ff1c0;
            case 0x2FF1C4u: goto label_2ff1c4;
            case 0x2FF1C8u: goto label_2ff1c8;
            case 0x2FF1CCu: goto label_2ff1cc;
            case 0x2FF1D0u: goto label_2ff1d0;
            case 0x2FF1D4u: goto label_2ff1d4;
            case 0x2FF1D8u: goto label_2ff1d8;
            case 0x2FF1DCu: goto label_2ff1dc;
            case 0x2FF1E0u: goto label_2ff1e0;
            case 0x2FF1E4u: goto label_2ff1e4;
            case 0x2FF1E8u: goto label_2ff1e8;
            case 0x2FF1ECu: goto label_2ff1ec;
            case 0x2FF1F0u: goto label_2ff1f0;
            case 0x2FF1F4u: goto label_2ff1f4;
            case 0x2FF1F8u: goto label_2ff1f8;
            case 0x2FF1FCu: goto label_2ff1fc;
            case 0x2FF200u: goto label_2ff200;
            case 0x2FF204u: goto label_2ff204;
            case 0x2FF208u: goto label_2ff208;
            case 0x2FF20Cu: goto label_2ff20c;
            case 0x2FF210u: goto label_2ff210;
            case 0x2FF214u: goto label_2ff214;
            case 0x2FF218u: goto label_2ff218;
            case 0x2FF21Cu: goto label_2ff21c;
            case 0x2FF220u: goto label_2ff220;
            case 0x2FF224u: goto label_2ff224;
            case 0x2FF228u: goto label_2ff228;
            case 0x2FF22Cu: goto label_2ff22c;
            case 0x2FF230u: goto label_2ff230;
            case 0x2FF234u: goto label_2ff234;
            case 0x2FF238u: goto label_2ff238;
            case 0x2FF23Cu: goto label_2ff23c;
            case 0x2FF240u: goto label_2ff240;
            case 0x2FF244u: goto label_2ff244;
            case 0x2FF248u: goto label_2ff248;
            case 0x2FF24Cu: goto label_2ff24c;
            case 0x2FF250u: goto label_2ff250;
            case 0x2FF254u: goto label_2ff254;
            case 0x2FF258u: goto label_2ff258;
            case 0x2FF25Cu: goto label_2ff25c;
            case 0x2FF260u: goto label_2ff260;
            case 0x2FF264u: goto label_2ff264;
            case 0x2FF268u: goto label_2ff268;
            case 0x2FF26Cu: goto label_2ff26c;
            case 0x2FF270u: goto label_2ff270;
            case 0x2FF274u: goto label_2ff274;
            case 0x2FF278u: goto label_2ff278;
            case 0x2FF27Cu: goto label_2ff27c;
            case 0x2FF280u: goto label_2ff280;
            case 0x2FF284u: goto label_2ff284;
            case 0x2FF288u: goto label_2ff288;
            case 0x2FF28Cu: goto label_2ff28c;
            case 0x2FF290u: goto label_2ff290;
            case 0x2FF294u: goto label_2ff294;
            case 0x2FF298u: goto label_2ff298;
            case 0x2FF29Cu: goto label_2ff29c;
            case 0x2FF2A0u: goto label_2ff2a0;
            case 0x2FF2A4u: goto label_2ff2a4;
            case 0x2FF2A8u: goto label_2ff2a8;
            case 0x2FF2ACu: goto label_2ff2ac;
            case 0x2FF2B0u: goto label_2ff2b0;
            case 0x2FF2B4u: goto label_2ff2b4;
            case 0x2FF2B8u: goto label_2ff2b8;
            case 0x2FF2BCu: goto label_2ff2bc;
            case 0x2FF2C0u: goto label_2ff2c0;
            case 0x2FF2C4u: goto label_2ff2c4;
            case 0x2FF2C8u: goto label_2ff2c8;
            case 0x2FF2CCu: goto label_2ff2cc;
            case 0x2FF2D0u: goto label_2ff2d0;
            case 0x2FF2D4u: goto label_2ff2d4;
            case 0x2FF2D8u: goto label_2ff2d8;
            case 0x2FF2DCu: goto label_2ff2dc;
            case 0x2FF2E0u: goto label_2ff2e0;
            case 0x2FF2E4u: goto label_2ff2e4;
            case 0x2FF2E8u: goto label_2ff2e8;
            case 0x2FF2ECu: goto label_2ff2ec;
            case 0x2FF2F0u: goto label_2ff2f0;
            case 0x2FF2F4u: goto label_2ff2f4;
            case 0x2FF2F8u: goto label_2ff2f8;
            case 0x2FF2FCu: goto label_2ff2fc;
            case 0x2FF300u: goto label_2ff300;
            case 0x2FF304u: goto label_2ff304;
            case 0x2FF308u: goto label_2ff308;
            case 0x2FF30Cu: goto label_2ff30c;
            case 0x2FF310u: goto label_2ff310;
            case 0x2FF314u: goto label_2ff314;
            case 0x2FF318u: goto label_2ff318;
            case 0x2FF31Cu: goto label_2ff31c;
            case 0x2FF320u: goto label_2ff320;
            case 0x2FF324u: goto label_2ff324;
            case 0x2FF328u: goto label_2ff328;
            case 0x2FF32Cu: goto label_2ff32c;
            case 0x2FF330u: goto label_2ff330;
            case 0x2FF334u: goto label_2ff334;
            case 0x2FF338u: goto label_2ff338;
            case 0x2FF33Cu: goto label_2ff33c;
            case 0x2FF340u: goto label_2ff340;
            case 0x2FF344u: goto label_2ff344;
            case 0x2FF348u: goto label_2ff348;
            case 0x2FF34Cu: goto label_2ff34c;
            case 0x2FF350u: goto label_2ff350;
            case 0x2FF354u: goto label_2ff354;
            case 0x2FF358u: goto label_2ff358;
            case 0x2FF35Cu: goto label_2ff35c;
            case 0x2FF360u: goto label_2ff360;
            case 0x2FF364u: goto label_2ff364;
            case 0x2FF368u: goto label_2ff368;
            case 0x2FF36Cu: goto label_2ff36c;
            case 0x2FF370u: goto label_2ff370;
            case 0x2FF374u: goto label_2ff374;
            case 0x2FF378u: goto label_2ff378;
            case 0x2FF37Cu: goto label_2ff37c;
            case 0x2FF380u: goto label_2ff380;
            case 0x2FF384u: goto label_2ff384;
            case 0x2FF388u: goto label_2ff388;
            case 0x2FF38Cu: goto label_2ff38c;
            case 0x2FF390u: goto label_2ff390;
            case 0x2FF394u: goto label_2ff394;
            case 0x2FF398u: goto label_2ff398;
            case 0x2FF39Cu: goto label_2ff39c;
            case 0x2FF3A0u: goto label_2ff3a0;
            case 0x2FF3A4u: goto label_2ff3a4;
            case 0x2FF3A8u: goto label_2ff3a8;
            case 0x2FF3ACu: goto label_2ff3ac;
            case 0x2FF3B0u: goto label_2ff3b0;
            case 0x2FF3B4u: goto label_2ff3b4;
            case 0x2FF3B8u: goto label_2ff3b8;
            case 0x2FF3BCu: goto label_2ff3bc;
            case 0x2FF3C0u: goto label_2ff3c0;
            case 0x2FF3C4u: goto label_2ff3c4;
            case 0x2FF3C8u: goto label_2ff3c8;
            case 0x2FF3CCu: goto label_2ff3cc;
            case 0x2FF3D0u: goto label_2ff3d0;
            case 0x2FF3D4u: goto label_2ff3d4;
            case 0x2FF3D8u: goto label_2ff3d8;
            case 0x2FF3DCu: goto label_2ff3dc;
            case 0x2FF3E0u: goto label_2ff3e0;
            case 0x2FF3E4u: goto label_2ff3e4;
            case 0x2FF3E8u: goto label_2ff3e8;
            case 0x2FF3ECu: goto label_2ff3ec;
            case 0x2FF3F0u: goto label_2ff3f0;
            case 0x2FF3F4u: goto label_2ff3f4;
            case 0x2FF3F8u: goto label_2ff3f8;
            case 0x2FF3FCu: goto label_2ff3fc;
            case 0x2FF400u: goto label_2ff400;
            case 0x2FF404u: goto label_2ff404;
            case 0x2FF408u: goto label_2ff408;
            case 0x2FF40Cu: goto label_2ff40c;
            case 0x2FF410u: goto label_2ff410;
            case 0x2FF414u: goto label_2ff414;
            case 0x2FF418u: goto label_2ff418;
            case 0x2FF41Cu: goto label_2ff41c;
            case 0x2FF420u: goto label_2ff420;
            case 0x2FF424u: goto label_2ff424;
            case 0x2FF428u: goto label_2ff428;
            case 0x2FF42Cu: goto label_2ff42c;
            case 0x2FF430u: goto label_2ff430;
            case 0x2FF434u: goto label_2ff434;
            case 0x2FF438u: goto label_2ff438;
            case 0x2FF43Cu: goto label_2ff43c;
            case 0x2FF440u: goto label_2ff440;
            case 0x2FF444u: goto label_2ff444;
            case 0x2FF448u: goto label_2ff448;
            case 0x2FF44Cu: goto label_2ff44c;
            case 0x2FF450u: goto label_2ff450;
            case 0x2FF454u: goto label_2ff454;
            case 0x2FF458u: goto label_2ff458;
            case 0x2FF45Cu: goto label_2ff45c;
            case 0x2FF460u: goto label_2ff460;
            case 0x2FF464u: goto label_2ff464;
            case 0x2FF468u: goto label_2ff468;
            case 0x2FF46Cu: goto label_2ff46c;
            case 0x2FF470u: goto label_2ff470;
            case 0x2FF474u: goto label_2ff474;
            case 0x2FF478u: goto label_2ff478;
            case 0x2FF47Cu: goto label_2ff47c;
            case 0x2FF480u: goto label_2ff480;
            case 0x2FF484u: goto label_2ff484;
            case 0x2FF488u: goto label_2ff488;
            case 0x2FF48Cu: goto label_2ff48c;
            case 0x2FF490u: goto label_2ff490;
            case 0x2FF494u: goto label_2ff494;
            case 0x2FF498u: goto label_2ff498;
            case 0x2FF49Cu: goto label_2ff49c;
            case 0x2FF4A0u: goto label_2ff4a0;
            case 0x2FF4A4u: goto label_2ff4a4;
            case 0x2FF4A8u: goto label_2ff4a8;
            case 0x2FF4ACu: goto label_2ff4ac;
            case 0x2FF4B0u: goto label_2ff4b0;
            case 0x2FF4B4u: goto label_2ff4b4;
            case 0x2FF4B8u: goto label_2ff4b8;
            case 0x2FF4BCu: goto label_2ff4bc;
            case 0x2FF4C0u: goto label_2ff4c0;
            case 0x2FF4C4u: goto label_2ff4c4;
            case 0x2FF4C8u: goto label_2ff4c8;
            case 0x2FF4CCu: goto label_2ff4cc;
            case 0x2FF4D0u: goto label_2ff4d0;
            case 0x2FF4D4u: goto label_2ff4d4;
            case 0x2FF4D8u: goto label_2ff4d8;
            case 0x2FF4DCu: goto label_2ff4dc;
            case 0x2FF4E0u: goto label_2ff4e0;
            case 0x2FF4E4u: goto label_2ff4e4;
            case 0x2FF4E8u: goto label_2ff4e8;
            case 0x2FF4ECu: goto label_2ff4ec;
            case 0x2FF4F0u: goto label_2ff4f0;
            case 0x2FF4F4u: goto label_2ff4f4;
            case 0x2FF4F8u: goto label_2ff4f8;
            case 0x2FF4FCu: goto label_2ff4fc;
            case 0x2FF500u: goto label_2ff500;
            case 0x2FF504u: goto label_2ff504;
            case 0x2FF508u: goto label_2ff508;
            case 0x2FF50Cu: goto label_2ff50c;
            case 0x2FF510u: goto label_2ff510;
            case 0x2FF514u: goto label_2ff514;
            case 0x2FF518u: goto label_2ff518;
            case 0x2FF51Cu: goto label_2ff51c;
            case 0x2FF520u: goto label_2ff520;
            case 0x2FF524u: goto label_2ff524;
            case 0x2FF528u: goto label_2ff528;
            case 0x2FF52Cu: goto label_2ff52c;
            case 0x2FF530u: goto label_2ff530;
            case 0x2FF534u: goto label_2ff534;
            case 0x2FF538u: goto label_2ff538;
            case 0x2FF53Cu: goto label_2ff53c;
            case 0x2FF540u: goto label_2ff540;
            case 0x2FF544u: goto label_2ff544;
            case 0x2FF548u: goto label_2ff548;
            case 0x2FF54Cu: goto label_2ff54c;
            case 0x2FF550u: goto label_2ff550;
            case 0x2FF554u: goto label_2ff554;
            case 0x2FF558u: goto label_2ff558;
            case 0x2FF55Cu: goto label_2ff55c;
            case 0x2FF560u: goto label_2ff560;
            case 0x2FF564u: goto label_2ff564;
            case 0x2FF568u: goto label_2ff568;
            case 0x2FF56Cu: goto label_2ff56c;
            case 0x2FF570u: goto label_2ff570;
            case 0x2FF574u: goto label_2ff574;
            case 0x2FF578u: goto label_2ff578;
            case 0x2FF57Cu: goto label_2ff57c;
            case 0x2FF580u: goto label_2ff580;
            case 0x2FF584u: goto label_2ff584;
            case 0x2FF588u: goto label_2ff588;
            case 0x2FF58Cu: goto label_2ff58c;
            case 0x2FF590u: goto label_2ff590;
            case 0x2FF594u: goto label_2ff594;
            case 0x2FF598u: goto label_2ff598;
            case 0x2FF59Cu: goto label_2ff59c;
            case 0x2FF5A0u: goto label_2ff5a0;
            case 0x2FF5A4u: goto label_2ff5a4;
            case 0x2FF5A8u: goto label_2ff5a8;
            case 0x2FF5ACu: goto label_2ff5ac;
            case 0x2FF5B0u: goto label_2ff5b0;
            case 0x2FF5B4u: goto label_2ff5b4;
            case 0x2FF5B8u: goto label_2ff5b8;
            case 0x2FF5BCu: goto label_2ff5bc;
            case 0x2FF5C0u: goto label_2ff5c0;
            case 0x2FF5C4u: goto label_2ff5c4;
            case 0x2FF5C8u: goto label_2ff5c8;
            case 0x2FF5CCu: goto label_2ff5cc;
            case 0x2FF5D0u: goto label_2ff5d0;
            case 0x2FF5D4u: goto label_2ff5d4;
            case 0x2FF5D8u: goto label_2ff5d8;
            case 0x2FF5DCu: goto label_2ff5dc;
            case 0x2FF5E0u: goto label_2ff5e0;
            case 0x2FF5E4u: goto label_2ff5e4;
            case 0x2FF5E8u: goto label_2ff5e8;
            case 0x2FF5ECu: goto label_2ff5ec;
            case 0x2FF5F0u: goto label_2ff5f0;
            case 0x2FF5F4u: goto label_2ff5f4;
            case 0x2FF5F8u: goto label_2ff5f8;
            case 0x2FF5FCu: goto label_2ff5fc;
            case 0x2FF600u: goto label_2ff600;
            case 0x2FF604u: goto label_2ff604;
            case 0x2FF608u: goto label_2ff608;
            case 0x2FF60Cu: goto label_2ff60c;
            case 0x2FF610u: goto label_2ff610;
            case 0x2FF614u: goto label_2ff614;
            case 0x2FF618u: goto label_2ff618;
            case 0x2FF61Cu: goto label_2ff61c;
            case 0x2FF620u: goto label_2ff620;
            case 0x2FF624u: goto label_2ff624;
            case 0x2FF628u: goto label_2ff628;
            case 0x2FF62Cu: goto label_2ff62c;
            case 0x2FF630u: goto label_2ff630;
            case 0x2FF634u: goto label_2ff634;
            case 0x2FF638u: goto label_2ff638;
            case 0x2FF63Cu: goto label_2ff63c;
            case 0x2FF640u: goto label_2ff640;
            case 0x2FF644u: goto label_2ff644;
            case 0x2FF648u: goto label_2ff648;
            case 0x2FF64Cu: goto label_2ff64c;
            case 0x2FF650u: goto label_2ff650;
            case 0x2FF654u: goto label_2ff654;
            case 0x2FF658u: goto label_2ff658;
            case 0x2FF65Cu: goto label_2ff65c;
            case 0x2FF660u: goto label_2ff660;
            case 0x2FF664u: goto label_2ff664;
            case 0x2FF668u: goto label_2ff668;
            case 0x2FF66Cu: goto label_2ff66c;
            case 0x2FF670u: goto label_2ff670;
            case 0x2FF674u: goto label_2ff674;
            case 0x2FF678u: goto label_2ff678;
            case 0x2FF67Cu: goto label_2ff67c;
            case 0x2FF680u: goto label_2ff680;
            case 0x2FF684u: goto label_2ff684;
            case 0x2FF688u: goto label_2ff688;
            case 0x2FF68Cu: goto label_2ff68c;
            case 0x2FF690u: goto label_2ff690;
            case 0x2FF694u: goto label_2ff694;
            case 0x2FF698u: goto label_2ff698;
            case 0x2FF69Cu: goto label_2ff69c;
            case 0x2FF6A0u: goto label_2ff6a0;
            case 0x2FF6A4u: goto label_2ff6a4;
            case 0x2FF6A8u: goto label_2ff6a8;
            case 0x2FF6ACu: goto label_2ff6ac;
            case 0x2FF6B0u: goto label_2ff6b0;
            case 0x2FF6B4u: goto label_2ff6b4;
            case 0x2FF6B8u: goto label_2ff6b8;
            case 0x2FF6BCu: goto label_2ff6bc;
            case 0x2FF6C0u: goto label_2ff6c0;
            case 0x2FF6C4u: goto label_2ff6c4;
            case 0x2FF6C8u: goto label_2ff6c8;
            case 0x2FF6CCu: goto label_2ff6cc;
            case 0x2FF6D0u: goto label_2ff6d0;
            case 0x2FF6D4u: goto label_2ff6d4;
            case 0x2FF6D8u: goto label_2ff6d8;
            case 0x2FF6DCu: goto label_2ff6dc;
            case 0x2FF6E0u: goto label_2ff6e0;
            case 0x2FF6E4u: goto label_2ff6e4;
            case 0x2FF6E8u: goto label_2ff6e8;
            case 0x2FF6ECu: goto label_2ff6ec;
            case 0x2FF6F0u: goto label_2ff6f0;
            case 0x2FF6F4u: goto label_2ff6f4;
            case 0x2FF6F8u: goto label_2ff6f8;
            case 0x2FF6FCu: goto label_2ff6fc;
            case 0x2FF700u: goto label_2ff700;
            case 0x2FF704u: goto label_2ff704;
            case 0x2FF708u: goto label_2ff708;
            case 0x2FF70Cu: goto label_2ff70c;
            case 0x2FF710u: goto label_2ff710;
            case 0x2FF714u: goto label_2ff714;
            case 0x2FF718u: goto label_2ff718;
            case 0x2FF71Cu: goto label_2ff71c;
            case 0x2FF720u: goto label_2ff720;
            case 0x2FF724u: goto label_2ff724;
            case 0x2FF728u: goto label_2ff728;
            case 0x2FF72Cu: goto label_2ff72c;
            case 0x2FF730u: goto label_2ff730;
            case 0x2FF734u: goto label_2ff734;
            case 0x2FF738u: goto label_2ff738;
            case 0x2FF73Cu: goto label_2ff73c;
            case 0x2FF740u: goto label_2ff740;
            case 0x2FF744u: goto label_2ff744;
            case 0x2FF748u: goto label_2ff748;
            case 0x2FF74Cu: goto label_2ff74c;
            case 0x2FF750u: goto label_2ff750;
            case 0x2FF754u: goto label_2ff754;
            case 0x2FF758u: goto label_2ff758;
            case 0x2FF75Cu: goto label_2ff75c;
            case 0x2FF760u: goto label_2ff760;
            case 0x2FF764u: goto label_2ff764;
            case 0x2FF768u: goto label_2ff768;
            case 0x2FF76Cu: goto label_2ff76c;
            case 0x2FF770u: goto label_2ff770;
            case 0x2FF774u: goto label_2ff774;
            case 0x2FF778u: goto label_2ff778;
            case 0x2FF77Cu: goto label_2ff77c;
            case 0x2FF780u: goto label_2ff780;
            case 0x2FF784u: goto label_2ff784;
            case 0x2FF788u: goto label_2ff788;
            case 0x2FF78Cu: goto label_2ff78c;
            case 0x2FF790u: goto label_2ff790;
            case 0x2FF794u: goto label_2ff794;
            case 0x2FF798u: goto label_2ff798;
            case 0x2FF79Cu: goto label_2ff79c;
            case 0x2FF7A0u: goto label_2ff7a0;
            case 0x2FF7A4u: goto label_2ff7a4;
            case 0x2FF7A8u: goto label_2ff7a8;
            case 0x2FF7ACu: goto label_2ff7ac;
            case 0x2FF7B0u: goto label_2ff7b0;
            case 0x2FF7B4u: goto label_2ff7b4;
            case 0x2FF7B8u: goto label_2ff7b8;
            case 0x2FF7BCu: goto label_2ff7bc;
            case 0x2FF7C0u: goto label_2ff7c0;
            case 0x2FF7C4u: goto label_2ff7c4;
            case 0x2FF7C8u: goto label_2ff7c8;
            case 0x2FF7CCu: goto label_2ff7cc;
            case 0x2FF7D0u: goto label_2ff7d0;
            case 0x2FF7D4u: goto label_2ff7d4;
            case 0x2FF7D8u: goto label_2ff7d8;
            case 0x2FF7DCu: goto label_2ff7dc;
            case 0x2FF7E0u: goto label_2ff7e0;
            case 0x2FF7E4u: goto label_2ff7e4;
            case 0x2FF7E8u: goto label_2ff7e8;
            case 0x2FF7ECu: goto label_2ff7ec;
            case 0x2FF7F0u: goto label_2ff7f0;
            case 0x2FF7F4u: goto label_2ff7f4;
            case 0x2FF7F8u: goto label_2ff7f8;
            case 0x2FF7FCu: goto label_2ff7fc;
            case 0x2FF800u: goto label_2ff800;
            case 0x2FF804u: goto label_2ff804;
            case 0x2FF808u: goto label_2ff808;
            case 0x2FF80Cu: goto label_2ff80c;
            case 0x2FF810u: goto label_2ff810;
            case 0x2FF814u: goto label_2ff814;
            case 0x2FF818u: goto label_2ff818;
            case 0x2FF81Cu: goto label_2ff81c;
            case 0x2FF820u: goto label_2ff820;
            case 0x2FF824u: goto label_2ff824;
            case 0x2FF828u: goto label_2ff828;
            case 0x2FF82Cu: goto label_2ff82c;
            case 0x2FF830u: goto label_2ff830;
            case 0x2FF834u: goto label_2ff834;
            case 0x2FF838u: goto label_2ff838;
            case 0x2FF83Cu: goto label_2ff83c;
            case 0x2FF840u: goto label_2ff840;
            case 0x2FF844u: goto label_2ff844;
            case 0x2FF848u: goto label_2ff848;
            case 0x2FF84Cu: goto label_2ff84c;
            case 0x2FF850u: goto label_2ff850;
            case 0x2FF854u: goto label_2ff854;
            case 0x2FF858u: goto label_2ff858;
            case 0x2FF85Cu: goto label_2ff85c;
            case 0x2FF860u: goto label_2ff860;
            case 0x2FF864u: goto label_2ff864;
            case 0x2FF868u: goto label_2ff868;
            case 0x2FF86Cu: goto label_2ff86c;
            case 0x2FF870u: goto label_2ff870;
            case 0x2FF874u: goto label_2ff874;
            case 0x2FF878u: goto label_2ff878;
            case 0x2FF87Cu: goto label_2ff87c;
            case 0x2FF880u: goto label_2ff880;
            case 0x2FF884u: goto label_2ff884;
            case 0x2FF888u: goto label_2ff888;
            case 0x2FF88Cu: goto label_2ff88c;
            case 0x2FF890u: goto label_2ff890;
            case 0x2FF894u: goto label_2ff894;
            case 0x2FF898u: goto label_2ff898;
            case 0x2FF89Cu: goto label_2ff89c;
            case 0x2FF8A0u: goto label_2ff8a0;
            case 0x2FF8A4u: goto label_2ff8a4;
            case 0x2FF8A8u: goto label_2ff8a8;
            case 0x2FF8ACu: goto label_2ff8ac;
            case 0x2FF8B0u: goto label_2ff8b0;
            case 0x2FF8B4u: goto label_2ff8b4;
            case 0x2FF8B8u: goto label_2ff8b8;
            case 0x2FF8BCu: goto label_2ff8bc;
            case 0x2FF8C0u: goto label_2ff8c0;
            case 0x2FF8C4u: goto label_2ff8c4;
            case 0x2FF8C8u: goto label_2ff8c8;
            case 0x2FF8CCu: goto label_2ff8cc;
            case 0x2FF8D0u: goto label_2ff8d0;
            case 0x2FF8D4u: goto label_2ff8d4;
            case 0x2FF8D8u: goto label_2ff8d8;
            case 0x2FF8DCu: goto label_2ff8dc;
            case 0x2FF8E0u: goto label_2ff8e0;
            case 0x2FF8E4u: goto label_2ff8e4;
            case 0x2FF8E8u: goto label_2ff8e8;
            case 0x2FF8ECu: goto label_2ff8ec;
            case 0x2FF8F0u: goto label_2ff8f0;
            case 0x2FF8F4u: goto label_2ff8f4;
            case 0x2FF8F8u: goto label_2ff8f8;
            case 0x2FF8FCu: goto label_2ff8fc;
            case 0x2FF900u: goto label_2ff900;
            case 0x2FF904u: goto label_2ff904;
            case 0x2FF908u: goto label_2ff908;
            case 0x2FF90Cu: goto label_2ff90c;
            case 0x2FF910u: goto label_2ff910;
            case 0x2FF914u: goto label_2ff914;
            case 0x2FF918u: goto label_2ff918;
            case 0x2FF91Cu: goto label_2ff91c;
            case 0x2FF920u: goto label_2ff920;
            case 0x2FF924u: goto label_2ff924;
            case 0x2FF928u: goto label_2ff928;
            case 0x2FF92Cu: goto label_2ff92c;
            case 0x2FF930u: goto label_2ff930;
            case 0x2FF934u: goto label_2ff934;
            case 0x2FF938u: goto label_2ff938;
            case 0x2FF93Cu: goto label_2ff93c;
            case 0x2FF940u: goto label_2ff940;
            case 0x2FF944u: goto label_2ff944;
            case 0x2FF948u: goto label_2ff948;
            case 0x2FF94Cu: goto label_2ff94c;
            case 0x2FF950u: goto label_2ff950;
            case 0x2FF954u: goto label_2ff954;
            case 0x2FF958u: goto label_2ff958;
            case 0x2FF95Cu: goto label_2ff95c;
            case 0x2FF960u: goto label_2ff960;
            case 0x2FF964u: goto label_2ff964;
            case 0x2FF968u: goto label_2ff968;
            case 0x2FF96Cu: goto label_2ff96c;
            case 0x2FF970u: goto label_2ff970;
            case 0x2FF974u: goto label_2ff974;
            case 0x2FF978u: goto label_2ff978;
            case 0x2FF97Cu: goto label_2ff97c;
            case 0x2FF980u: goto label_2ff980;
            case 0x2FF984u: goto label_2ff984;
            case 0x2FF988u: goto label_2ff988;
            case 0x2FF98Cu: goto label_2ff98c;
            case 0x2FF990u: goto label_2ff990;
            case 0x2FF994u: goto label_2ff994;
            case 0x2FF998u: goto label_2ff998;
            case 0x2FF99Cu: goto label_2ff99c;
            case 0x2FF9A0u: goto label_2ff9a0;
            case 0x2FF9A4u: goto label_2ff9a4;
            case 0x2FF9A8u: goto label_2ff9a8;
            case 0x2FF9ACu: goto label_2ff9ac;
            case 0x2FF9B0u: goto label_2ff9b0;
            case 0x2FF9B4u: goto label_2ff9b4;
            case 0x2FF9B8u: goto label_2ff9b8;
            case 0x2FF9BCu: goto label_2ff9bc;
            case 0x2FF9C0u: goto label_2ff9c0;
            case 0x2FF9C4u: goto label_2ff9c4;
            case 0x2FF9C8u: goto label_2ff9c8;
            case 0x2FF9CCu: goto label_2ff9cc;
            case 0x2FF9D0u: goto label_2ff9d0;
            case 0x2FF9D4u: goto label_2ff9d4;
            case 0x2FF9D8u: goto label_2ff9d8;
            case 0x2FF9DCu: goto label_2ff9dc;
            case 0x2FF9E0u: goto label_2ff9e0;
            case 0x2FF9E4u: goto label_2ff9e4;
            case 0x2FF9E8u: goto label_2ff9e8;
            case 0x2FF9ECu: goto label_2ff9ec;
            case 0x2FF9F0u: goto label_2ff9f0;
            case 0x2FF9F4u: goto label_2ff9f4;
            case 0x2FF9F8u: goto label_2ff9f8;
            case 0x2FF9FCu: goto label_2ff9fc;
            case 0x2FFA00u: goto label_2ffa00;
            case 0x2FFA04u: goto label_2ffa04;
            case 0x2FFA08u: goto label_2ffa08;
            case 0x2FFA0Cu: goto label_2ffa0c;
            case 0x2FFA10u: goto label_2ffa10;
            case 0x2FFA14u: goto label_2ffa14;
            case 0x2FFA18u: goto label_2ffa18;
            case 0x2FFA1Cu: goto label_2ffa1c;
            case 0x2FFA20u: goto label_2ffa20;
            case 0x2FFA24u: goto label_2ffa24;
            case 0x2FFA28u: goto label_2ffa28;
            case 0x2FFA2Cu: goto label_2ffa2c;
            case 0x2FFA30u: goto label_2ffa30;
            case 0x2FFA34u: goto label_2ffa34;
            case 0x2FFA38u: goto label_2ffa38;
            case 0x2FFA3Cu: goto label_2ffa3c;
            case 0x2FFA40u: goto label_2ffa40;
            case 0x2FFA44u: goto label_2ffa44;
            case 0x2FFA48u: goto label_2ffa48;
            case 0x2FFA4Cu: goto label_2ffa4c;
            case 0x2FFA50u: goto label_2ffa50;
            case 0x2FFA54u: goto label_2ffa54;
            case 0x2FFA58u: goto label_2ffa58;
            case 0x2FFA5Cu: goto label_2ffa5c;
            case 0x2FFA60u: goto label_2ffa60;
            case 0x2FFA64u: goto label_2ffa64;
            case 0x2FFA68u: goto label_2ffa68;
            case 0x2FFA6Cu: goto label_2ffa6c;
            case 0x2FFA70u: goto label_2ffa70;
            case 0x2FFA74u: goto label_2ffa74;
            case 0x2FFA78u: goto label_2ffa78;
            case 0x2FFA7Cu: goto label_2ffa7c;
            case 0x2FFA80u: goto label_2ffa80;
            case 0x2FFA84u: goto label_2ffa84;
            case 0x2FFA88u: goto label_2ffa88;
            case 0x2FFA8Cu: goto label_2ffa8c;
            case 0x2FFA90u: goto label_2ffa90;
            case 0x2FFA94u: goto label_2ffa94;
            case 0x2FFA98u: goto label_2ffa98;
            case 0x2FFA9Cu: goto label_2ffa9c;
            case 0x2FFAA0u: goto label_2ffaa0;
            case 0x2FFAA4u: goto label_2ffaa4;
            case 0x2FFAA8u: goto label_2ffaa8;
            case 0x2FFAACu: goto label_2ffaac;
            case 0x2FFAB0u: goto label_2ffab0;
            case 0x2FFAB4u: goto label_2ffab4;
            case 0x2FFAB8u: goto label_2ffab8;
            case 0x2FFABCu: goto label_2ffabc;
            case 0x2FFAC0u: goto label_2ffac0;
            case 0x2FFAC4u: goto label_2ffac4;
            case 0x2FFAC8u: goto label_2ffac8;
            case 0x2FFACCu: goto label_2ffacc;
            case 0x2FFAD0u: goto label_2ffad0;
            case 0x2FFAD4u: goto label_2ffad4;
            case 0x2FFAD8u: goto label_2ffad8;
            case 0x2FFADCu: goto label_2ffadc;
            case 0x2FFAE0u: goto label_2ffae0;
            case 0x2FFAE4u: goto label_2ffae4;
            case 0x2FFAE8u: goto label_2ffae8;
            case 0x2FFAECu: goto label_2ffaec;
            case 0x2FFAF0u: goto label_2ffaf0;
            case 0x2FFAF4u: goto label_2ffaf4;
            case 0x2FFAF8u: goto label_2ffaf8;
            case 0x2FFAFCu: goto label_2ffafc;
            case 0x2FFB00u: goto label_2ffb00;
            case 0x2FFB04u: goto label_2ffb04;
            case 0x2FFB08u: goto label_2ffb08;
            case 0x2FFB0Cu: goto label_2ffb0c;
            case 0x2FFB10u: goto label_2ffb10;
            case 0x2FFB14u: goto label_2ffb14;
            case 0x2FFB18u: goto label_2ffb18;
            case 0x2FFB1Cu: goto label_2ffb1c;
            case 0x2FFB20u: goto label_2ffb20;
            case 0x2FFB24u: goto label_2ffb24;
            case 0x2FFB28u: goto label_2ffb28;
            case 0x2FFB2Cu: goto label_2ffb2c;
            case 0x2FFB30u: goto label_2ffb30;
            case 0x2FFB34u: goto label_2ffb34;
            case 0x2FFB38u: goto label_2ffb38;
            case 0x2FFB3Cu: goto label_2ffb3c;
            case 0x2FFB40u: goto label_2ffb40;
            case 0x2FFB44u: goto label_2ffb44;
            case 0x2FFB48u: goto label_2ffb48;
            case 0x2FFB4Cu: goto label_2ffb4c;
            case 0x2FFB50u: goto label_2ffb50;
            case 0x2FFB54u: goto label_2ffb54;
            case 0x2FFB58u: goto label_2ffb58;
            case 0x2FFB5Cu: goto label_2ffb5c;
            case 0x2FFB60u: goto label_2ffb60;
            case 0x2FFB64u: goto label_2ffb64;
            case 0x2FFB68u: goto label_2ffb68;
            case 0x2FFB6Cu: goto label_2ffb6c;
            case 0x2FFB70u: goto label_2ffb70;
            case 0x2FFB74u: goto label_2ffb74;
            case 0x2FFB78u: goto label_2ffb78;
            case 0x2FFB7Cu: goto label_2ffb7c;
            case 0x2FFB80u: goto label_2ffb80;
            case 0x2FFB84u: goto label_2ffb84;
            case 0x2FFB88u: goto label_2ffb88;
            case 0x2FFB8Cu: goto label_2ffb8c;
            default: break;
        }
        return;
    }
label_fallthrough_0x2ffb88:
    ctx->pc = 0x2FFB90u;
}
