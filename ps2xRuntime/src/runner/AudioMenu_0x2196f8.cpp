#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioMenu
// Address: 0x2196f8 - 0x21a458
void AudioMenu_0x2196f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2196f8u;

label_2196f8:
    // 0x2196f8: 0x27bdff40
    ctx->pc = 0x2196f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_2196fc:
    // 0x2196fc: 0xffbf00b0
    ctx->pc = 0x2196fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_219700:
    // 0x219700: 0xffb600a0
    ctx->pc = 0x219700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_219704:
    // 0x219704: 0xffb50090
    ctx->pc = 0x219704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_219708:
    // 0x219708: 0xffb40080
    ctx->pc = 0x219708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_21970c:
    // 0x21970c: 0xffb30070
    ctx->pc = 0x21970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_219710:
    // 0x219710: 0xffb20060
    ctx->pc = 0x219710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_219714:
    // 0x219714: 0xffb10050
    ctx->pc = 0x219714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_219718:
    // 0x219718: 0xffb00040
    ctx->pc = 0x219718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_21971c:
    // 0x21971c: 0x3c02003c
    ctx->pc = 0x21971cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219720:
    // 0x219720: 0x3c03003c
    ctx->pc = 0x219720u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219724:
    // 0x219724: 0x8c44cf3c
    ctx->pc = 0x219724u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954812)));
label_219728:
    // 0x219728: 0x8c62cf38
    ctx->pc = 0x219728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954808)));
label_21972c:
    // 0x21972c: 0x10820008
label_219730:
    if (ctx->pc == 0x219730u) {
        ctx->pc = 0x219730u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65280));
        ctx->pc = 0x219734u;
        goto label_219734;
    }
    ctx->pc = 0x21972Cu;
    {
        const bool branch_taken_0x21972c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x219730u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65280));
        if (branch_taken_0x21972c) {
            ctx->pc = 0x219750u;
            goto label_219750;
        }
    }
    ctx->pc = 0x219734u;
label_219734:
    // 0x219734: 0xc086440
label_219738:
    if (ctx->pc == 0x219738u) {
        ctx->pc = 0x21973Cu;
        goto label_21973c;
    }
    ctx->pc = 0x219734u;
    SET_GPR_U32(ctx, 31, 0x21973Cu);
    ctx->pc = 0x219100u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAudioView_0x219100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21973Cu; }
    }
    if (ctx->pc != 0x21973Cu) { return; }
    ctx->pc = 0x21973Cu;
label_21973c:
    // 0x21973c: 0x3c02003c
    ctx->pc = 0x21973cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219740:
    // 0x219740: 0xac40cef0
    ctx->pc = 0x219740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954736), GPR_U32(ctx, 0));
label_219744:
    // 0x219744: 0x3c02003c
    ctx->pc = 0x219744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219748:
    // 0x219748: 0xa440cef4
    ctx->pc = 0x219748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954740), (uint16_t)GPR_U32(ctx, 0));
label_21974c:
    // 0x21974c: 0x3404ff00
    ctx->pc = 0x21974cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65280));
label_219750:
    // 0x219750: 0x2405ffff
    ctx->pc = 0x219750u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_219754:
    // 0x219754: 0x24060001
    ctx->pc = 0x219754u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_219758:
    // 0x219758: 0x3c07003a
    ctx->pc = 0x219758u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
label_21975c:
    // 0x21975c: 0xc0b4724
label_219760:
    if (ctx->pc == 0x219760u) {
        ctx->pc = 0x219760u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24960));
        ctx->pc = 0x219764u;
        goto label_219764;
    }
    ctx->pc = 0x21975Cu;
    SET_GPR_U32(ctx, 31, 0x219764u);
    ctx->pc = 0x219760u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24960));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219764u; }
    }
    if (ctx->pc != 0x219764u) { return; }
    ctx->pc = 0x219764u;
label_219764:
    // 0x219764: 0x3c0400ff
    ctx->pc = 0x219764u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_219768:
    // 0x219768: 0x24050002
    ctx->pc = 0x219768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_21976c:
    // 0x21976c: 0x24060004
    ctx->pc = 0x21976cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_219770:
    // 0x219770: 0x3c07003a
    ctx->pc = 0x219770u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
label_219774:
    // 0x219774: 0xc0b4724
label_219778:
    if (ctx->pc == 0x219778u) {
        ctx->pc = 0x219778u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24976));
        ctx->pc = 0x21977Cu;
        goto label_21977c;
    }
    ctx->pc = 0x219774u;
    SET_GPR_U32(ctx, 31, 0x21977Cu);
    ctx->pc = 0x219778u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24976));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21977Cu; }
    }
    if (ctx->pc != 0x21977Cu) { return; }
    ctx->pc = 0x21977Cu;
label_21977c:
    // 0x21977c: 0xc086464
label_219780:
    if (ctx->pc == 0x219780u) {
        ctx->pc = 0x219784u;
        goto label_219784;
    }
    ctx->pc = 0x21977Cu;
    SET_GPR_U32(ctx, 31, 0x219784u);
    ctx->pc = 0x219190u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispAudioMenu_0x219190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219784u; }
    }
    if (ctx->pc != 0x219784u) { return; }
    ctx->pc = 0x219784u;
label_219784:
    // 0x219784: 0x3c020032
    ctx->pc = 0x219784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_219788:
    // 0x219788: 0x8c44fd6c
    ctx->pc = 0x219788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
label_21978c:
    // 0x21978c: 0x3c02003c
    ctx->pc = 0x21978cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219790:
    // 0x219790: 0x8c42d558
    ctx->pc = 0x219790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956376)));
label_219794:
    // 0x219794: 0x24032494
    ctx->pc = 0x219794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9364));
label_219798:
    // 0x219798: 0x431018
    ctx->pc = 0x219798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_21979c:
    // 0x21979c: 0x8c83000c
    ctx->pc = 0x21979cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2197a0:
    // 0x2197a0: 0x43a821
    ctx->pc = 0x2197a0u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2197a4:
    // 0x2197a4: 0x3c02003c
    ctx->pc = 0x2197a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2197a8:
    // 0x2197a8: 0x8c42d55c
    ctx->pc = 0x2197a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956380)));
label_2197ac:
    // 0x2197ac: 0x24030124
    ctx->pc = 0x2197acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 292));
label_2197b0:
    // 0x2197b0: 0x431018
    ctx->pc = 0x2197b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2197b4:
    // 0x2197b4: 0x24420014
    ctx->pc = 0x2197b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
label_2197b8:
    // 0x2197b8: 0x2a2a021
    ctx->pc = 0x2197b8u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2197bc:
    // 0x2197bc: 0x3c02003c
    ctx->pc = 0x2197bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2197c0:
    // 0x2197c0: 0x8c42d564
    ctx->pc = 0x2197c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956388)));
label_2197c4:
    // 0x2197c4: 0x21080
    ctx->pc = 0x2197c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2197c8:
    // 0x2197c8: 0x2821021
    ctx->pc = 0x2197c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2197cc:
    // 0x2197cc: 0x8c42001c
    ctx->pc = 0x2197ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2197d0:
    // 0x2197d0: 0x2403002c
    ctx->pc = 0x2197d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
label_2197d4:
    // 0x2197d4: 0x431018
    ctx->pc = 0x2197d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2197d8:
    // 0x2197d8: 0x8c830010
    ctx->pc = 0x2197d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2197dc:
    // 0x2197dc: 0x438821
    ctx->pc = 0x2197dcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2197e0:
    // 0x2197e0: 0x86220026
    ctx->pc = 0x2197e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
label_2197e4:
    // 0x2197e4: 0x2403001c
    ctx->pc = 0x2197e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_2197e8:
    // 0x2197e8: 0x431018
    ctx->pc = 0x2197e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2197ec:
    // 0x2197ec: 0x8c830014
    ctx->pc = 0x2197ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2197f0:
    // 0x2197f0: 0x43b021
    ctx->pc = 0x2197f0u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2197f4:
    // 0x2197f4: 0x3c02003c
    ctx->pc = 0x2197f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2197f8:
    // 0x2197f8: 0x8c44d588
    ctx->pc = 0x2197f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
label_2197fc:
    // 0x2197fc: 0x108000ab
label_219800:
    if (ctx->pc == 0x219800u) {
        ctx->pc = 0x219800u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x219804u;
        goto label_219804;
    }
    ctx->pc = 0x2197FCu;
    {
        const bool branch_taken_0x2197fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x219800u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2197fc) {
            ctx->pc = 0x219AACu;
            goto label_219aac;
        }
    }
    ctx->pc = 0x219804u;
label_219804:
    // 0x219804: 0x3c03003c
    ctx->pc = 0x219804u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219808:
    // 0x219808: 0xc441ffa4
    ctx->pc = 0x219808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21980c:
    // 0x21980c: 0xc460cef0
    ctx->pc = 0x21980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219810:
    // 0x219810: 0x46010036
    ctx->pc = 0x219810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219814:
    // 0x219814: 0x0
    ctx->pc = 0x219814u;
    // NOP
label_219818:
    // 0x219818: 0x450000a4
label_21981c:
    if (ctx->pc == 0x21981Cu) {
        ctx->pc = 0x21981Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->pc = 0x219820u;
        goto label_219820;
    }
    ctx->pc = 0x219818u;
    {
        const bool branch_taken_0x219818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21981Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967294));
        if (branch_taken_0x219818) {
            ctx->pc = 0x219AACu;
            goto label_219aac;
        }
    }
    ctx->pc = 0x219820u;
label_219820:
    // 0x219820: 0x2c420003
    ctx->pc = 0x219820u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
label_219824:
    // 0x219824: 0x10400005
label_219828:
    if (ctx->pc == 0x219828u) {
        ctx->pc = 0x219828u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x21982Cu;
        goto label_21982c;
    }
    ctx->pc = 0x219824u;
    {
        const bool branch_taken_0x219824 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219828u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x219824) {
            ctx->pc = 0x21983Cu;
            goto label_21983c;
        }
    }
    ctx->pc = 0x21982Cu;
label_21982c:
    // 0x21982c: 0x8c62d560
    ctx->pc = 0x21982cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956384)));
label_219830:
    // 0x219830: 0x24420001
    ctx->pc = 0x219830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_219834:
    // 0x219834: 0x1000000c
label_219838:
    if (ctx->pc == 0x219838u) {
        ctx->pc = 0x219838u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956384), GPR_U32(ctx, 2));
        ctx->pc = 0x21983Cu;
        goto label_21983c;
    }
    ctx->pc = 0x219834u;
    {
        const bool branch_taken_0x219834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219838u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956384), GPR_U32(ctx, 2));
        if (branch_taken_0x219834) {
            ctx->pc = 0x219868u;
            goto label_219868;
        }
    }
    ctx->pc = 0x21983Cu;
label_21983c:
    // 0x21983c: 0x3c02003c
    ctx->pc = 0x21983cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219840:
    // 0x219840: 0x8c44d588
    ctx->pc = 0x219840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
label_219844:
    // 0x219844: 0x28820005
    ctx->pc = 0x219844u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 5));
label_219848:
    // 0x219848: 0x14400008
label_21984c:
    if (ctx->pc == 0x21984Cu) {
        ctx->pc = 0x21984Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219850u;
        goto label_219850;
    }
    ctx->pc = 0x219848u;
    {
        const bool branch_taken_0x219848 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21984Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219848) {
            ctx->pc = 0x21986Cu;
            goto label_21986c;
        }
    }
    ctx->pc = 0x219850u;
label_219850:
    // 0x219850: 0xc0b5c24
label_219854:
    if (ctx->pc == 0x219854u) {
        ctx->pc = 0x219854u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x219858u;
        goto label_219858;
    }
    ctx->pc = 0x219850u;
    SET_GPR_U32(ctx, 31, 0x219858u);
    ctx->pc = 0x219854u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219858u; }
    }
    if (ctx->pc != 0x219858u) { return; }
    ctx->pc = 0x219858u;
label_219858:
    // 0x219858: 0x8e03d560
    ctx->pc = 0x219858u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294956384)));
label_21985c:
    // 0x21985c: 0x24630001
    ctx->pc = 0x21985cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_219860:
    // 0x219860: 0x621821
    ctx->pc = 0x219860u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_219864:
    // 0x219864: 0xae03d560
    ctx->pc = 0x219864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956384), GPR_U32(ctx, 3));
label_219868:
    // 0x219868: 0x3c02003c
    ctx->pc = 0x219868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21986c:
    // 0x21986c: 0x96230024
    ctx->pc = 0x21986cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_219870:
    // 0x219870: 0x60202d
    ctx->pc = 0x219870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_219874:
    // 0x219874: 0x31c00
    ctx->pc = 0x219874u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
label_219878:
    // 0x219878: 0x31c03
    ctx->pc = 0x219878u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_21987c:
    // 0x21987c: 0x8c42d560
    ctx->pc = 0x21987cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_219880:
    // 0x219880: 0x43102a
    ctx->pc = 0x219880u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_219884:
    // 0x219884: 0x14400030
label_219888:
    if (ctx->pc == 0x219888u) {
        ctx->pc = 0x219888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x21988Cu;
        goto label_21988c;
    }
    ctx->pc = 0x219884u;
    {
        const bool branch_taken_0x219884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x219888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x219884) {
            ctx->pc = 0x219948u;
            goto label_219948;
        }
    }
    ctx->pc = 0x21988Cu;
label_21988c:
    // 0x21988c: 0x3c07003c
    ctx->pc = 0x21988cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)60 << 16));
label_219890:
    // 0x219890: 0x3c05003c
    ctx->pc = 0x219890u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_219894:
    // 0x219894: 0x3c06003c
    ctx->pc = 0x219894u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
label_219898:
    // 0x219898: 0x582d
    ctx->pc = 0x219898u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21989c:
    // 0x21989c: 0x240a0124
    ctx->pc = 0x21989cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 292));
label_2198a0:
    // 0x2198a0: 0x8c48fd6c
    ctx->pc = 0x2198a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
label_2198a4:
    // 0x2198a4: 0x2409002c
    ctx->pc = 0x2198a4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 44));
label_2198a8:
    // 0x2198a8: 0x41400
    ctx->pc = 0x2198a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 16));
label_2198ac:
    // 0x2198ac: 0x21403
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2198b0:
    // 0x2198b0: 0x8ce3d560
    ctx->pc = 0x2198b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294956384)));
label_2198b4:
    // 0x2198b4: 0x621823
    ctx->pc = 0x2198b4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2198b8:
    // 0x2198b8: 0xace3d560
    ctx->pc = 0x2198b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294956384), GPR_U32(ctx, 3));
label_2198bc:
    // 0x2198bc: 0x8e820018
    ctx->pc = 0x2198bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2198c0:
    // 0x2198c0: 0x2442ffff
    ctx->pc = 0x2198c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2198c4:
    // 0x2198c4: 0x8ca3d564
    ctx->pc = 0x2198c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294956388)));
label_2198c8:
    // 0x2198c8: 0x62102a
    ctx->pc = 0x2198c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_2198cc:
    // 0x2198cc: 0x10400003
label_2198d0:
    if (ctx->pc == 0x2198D0u) {
        ctx->pc = 0x2198D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2198D4u;
        goto label_2198d4;
    }
    ctx->pc = 0x2198CCu;
    {
        const bool branch_taken_0x2198cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2198D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2198cc) {
            ctx->pc = 0x2198DCu;
            goto label_2198dc;
        }
    }
    ctx->pc = 0x2198D4u;
label_2198d4:
    // 0x2198d4: 0x1000000a
label_2198d8:
    if (ctx->pc == 0x2198D8u) {
        ctx->pc = 0x2198D8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294956388), GPR_U32(ctx, 2));
        ctx->pc = 0x2198DCu;
        goto label_2198dc;
    }
    ctx->pc = 0x2198D4u;
    {
        const bool branch_taken_0x2198d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2198D8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294956388), GPR_U32(ctx, 2));
        if (branch_taken_0x2198d4) {
            ctx->pc = 0x219900u;
            goto label_219900;
        }
    }
    ctx->pc = 0x2198DCu;
label_2198dc:
    // 0x2198dc: 0x8cc3d55c
    ctx->pc = 0x2198dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4294956380)));
label_2198e0:
    // 0x2198e0: 0x24630001
    ctx->pc = 0x2198e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2198e4:
    // 0x2198e4: 0x8ea20010
    ctx->pc = 0x2198e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2198e8:
    // 0x2198e8: 0x62001a
    ctx->pc = 0x2198e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2198ec:
    // 0x2198ec: 0x1810
    ctx->pc = 0x2198ecu;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_2198f0:
    // 0x2198f0: 0x504b0001
label_2198f4:
    if (ctx->pc == 0x2198F4u) {
        ctx->pc = 0x2198F4u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2198F8u;
        goto label_2198f8;
    }
    ctx->pc = 0x2198F0u;
    {
        const bool branch_taken_0x2198f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 11));
        if (branch_taken_0x2198f0) {
            ctx->pc = 0x2198F4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2198F8u;
            goto label_2198f8;
        }
    }
    ctx->pc = 0x2198F8u;
label_2198f8:
    // 0x2198f8: 0xacc3d55c
    ctx->pc = 0x2198f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294956380), GPR_U32(ctx, 3));
label_2198fc:
    // 0x2198fc: 0xaca0d564
    ctx->pc = 0x2198fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294956388), GPR_U32(ctx, 0));
label_219900:
    // 0x219900: 0x8cc2d55c
    ctx->pc = 0x219900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294956380)));
label_219904:
    // 0x219904: 0x4a1018
    ctx->pc = 0x219904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219908:
    // 0x219908: 0x24420014
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
label_21990c:
    // 0x21990c: 0x2a2a021
    ctx->pc = 0x21990cu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_219910:
    // 0x219910: 0x8ca2d564
    ctx->pc = 0x219910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294956388)));
label_219914:
    // 0x219914: 0x21080
    ctx->pc = 0x219914u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_219918:
    // 0x219918: 0x2821021
    ctx->pc = 0x219918u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_21991c:
    // 0x21991c: 0x8c42001c
    ctx->pc = 0x21991cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_219920:
    // 0x219920: 0x491018
    ctx->pc = 0x219920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219924:
    // 0x219924: 0x8d030010
    ctx->pc = 0x219924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_219928:
    // 0x219928: 0x438821
    ctx->pc = 0x219928u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21992c:
    // 0x21992c: 0x3c02003c
    ctx->pc = 0x21992cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219930:
    // 0x219930: 0x86230024
    ctx->pc = 0x219930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_219934:
    // 0x219934: 0x8c42d560
    ctx->pc = 0x219934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_219938:
    // 0x219938: 0x43102a
    ctx->pc = 0x219938u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_21993c:
    // 0x21993c: 0x1040ffda
label_219940:
    if (ctx->pc == 0x219940u) {
        ctx->pc = 0x219940u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x219944u;
        goto label_219944;
    }
    ctx->pc = 0x21993Cu;
    {
        const bool branch_taken_0x21993c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219940u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        if (branch_taken_0x21993c) {
            ctx->pc = 0x2198A8u;
            goto label_2198a8;
        }
    }
    ctx->pc = 0x219944u;
label_219944:
    // 0x219944: 0x3c020032
    ctx->pc = 0x219944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_219948:
    // 0x219948: 0x8c43fd6c
    ctx->pc = 0x219948u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
label_21994c:
    // 0x21994c: 0x86220026
    ctx->pc = 0x21994cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
label_219950:
    // 0x219950: 0x2404001c
    ctx->pc = 0x219950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
label_219954:
    // 0x219954: 0x441018
    ctx->pc = 0x219954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219958:
    // 0x219958: 0x8c630014
    ctx->pc = 0x219958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_21995c:
    // 0x21995c: 0x43b021
    ctx->pc = 0x21995cu;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219960:
    // 0x219960: 0x3c02003c
    ctx->pc = 0x219960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219964:
    // 0x219964: 0x8c42d560
    ctx->pc = 0x219964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_219968:
    // 0x219968: 0x441018
    ctx->pc = 0x219968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_21996c:
    // 0x21996c: 0x561021
    ctx->pc = 0x21996cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_219970:
    // 0x219970: 0xc4410014
    ctx->pc = 0x219970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219974:
    // 0x219974: 0x44800000
    ctx->pc = 0x219974u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_219978:
    // 0x219978: 0x46010034
    ctx->pc = 0x219978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21997c:
    // 0x21997c: 0x0
    ctx->pc = 0x21997cu;
    // NOP
label_219980:
    // 0x219980: 0x4500004a
label_219984:
    if (ctx->pc == 0x219984u) {
        ctx->pc = 0x219984u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219988u;
        goto label_219988;
    }
    ctx->pc = 0x219980u;
    {
        const bool branch_taken_0x219980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219984u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219980) {
            ctx->pc = 0x219AACu;
            goto label_219aac;
        }
    }
    ctx->pc = 0x219988u;
label_219988:
    // 0x219988: 0x8e83011c
    ctx->pc = 0x219988u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_21998c:
    // 0x21998c: 0x8c42d564
    ctx->pc = 0x21998cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956388)));
label_219990:
    // 0x219990: 0x10620008
label_219994:
    if (ctx->pc == 0x219994u) {
        ctx->pc = 0x219998u;
        goto label_219998;
    }
    ctx->pc = 0x219990u;
    {
        const bool branch_taken_0x219990 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x219990) {
            ctx->pc = 0x2199B4u;
            goto label_2199b4;
        }
    }
    ctx->pc = 0x219998u;
label_219998:
    // 0x219998: 0xc08830a
label_21999c:
    if (ctx->pc == 0x21999Cu) {
        ctx->pc = 0x21999Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x2199A0u;
        goto label_2199a0;
    }
    ctx->pc = 0x219998u;
    SET_GPR_U32(ctx, 31, 0x2199A0u);
    ctx->pc = 0x21999Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x220C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioUnloadAll_0x220c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2199A0u; }
    }
    if (ctx->pc != 0x2199A0u) { return; }
    ctx->pc = 0x2199A0u;
label_2199a0:
    // 0x2199a0: 0x280202d
    ctx->pc = 0x2199a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2199a4:
    // 0x2199a4: 0x26250010
    ctx->pc = 0x2199a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
label_2199a8:
    // 0x2199a8: 0xc088518
label_2199ac:
    if (ctx->pc == 0x2199ACu) {
        ctx->pc = 0x2199ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2199B0u;
        goto label_2199b0;
    }
    ctx->pc = 0x2199A8u;
    SET_GPR_U32(ctx, 31, 0x2199B0u);
    ctx->pc = 0x2199ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221460u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadBankDesc_0x221460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2199B0u; }
    }
    if (ctx->pc != 0x2199B0u) { return; }
    ctx->pc = 0x2199B0u;
label_2199b0:
    // 0x2199b0: 0xa602cef4
    ctx->pc = 0x2199b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294954740), (uint16_t)GPR_U32(ctx, 2));
label_2199b4:
    // 0x2199b4: 0xc08641a
label_2199b8:
    if (ctx->pc == 0x2199B8u) {
        ctx->pc = 0x2199BCu;
        goto label_2199bc;
    }
    ctx->pc = 0x2199B4u;
    SET_GPR_U32(ctx, 31, 0x2199BCu);
    ctx->pc = 0x219068u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAudioView_0x219068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2199BCu; }
    }
    if (ctx->pc != 0x2199BCu) { return; }
    ctx->pc = 0x2199BCu;
label_2199bc:
    // 0x2199bc: 0x3c03003c
    ctx->pc = 0x2199bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2199c0:
    // 0x2199c0: 0xa462cef4
    ctx->pc = 0x2199c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954740), (uint16_t)GPR_U32(ctx, 2));
label_2199c4:
    // 0x2199c4: 0x3c04003c
    ctx->pc = 0x2199c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2199c8:
    // 0x2199c8: 0x3042ffff
    ctx->pc = 0x2199c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_2199cc:
    // 0x2199cc: 0x21202
    ctx->pc = 0x2199ccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_2199d0:
    // 0x2199d0: 0xac82d584
    ctx->pc = 0x2199d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956420), GPR_U32(ctx, 2));
label_2199d4:
    // 0x2199d4: 0x3c02003c
    ctx->pc = 0x2199d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2199d8:
    // 0x2199d8: 0x8c42d588
    ctx->pc = 0x2199d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
label_2199dc:
    // 0x2199dc: 0x28420003
    ctx->pc = 0x2199dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
label_2199e0:
    // 0x2199e0: 0x1040001a
label_2199e4:
    if (ctx->pc == 0x2199E4u) {
        ctx->pc = 0x2199E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2199E8u;
        goto label_2199e8;
    }
    ctx->pc = 0x2199E0u;
    {
        const bool branch_taken_0x2199e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2199E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2199e0) {
            ctx->pc = 0x219A4Cu;
            goto label_219a4c;
        }
    }
    ctx->pc = 0x2199E8u;
label_2199e8:
    // 0x2199e8: 0x2444cef0
    ctx->pc = 0x2199e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954736));
label_2199ec:
    // 0x2199ec: 0x3c020031
    ctx->pc = 0x2199ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2199f0:
    // 0x2199f0: 0xc442ffa4
    ctx->pc = 0x2199f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2199f4:
    // 0x2199f4: 0x3c02003c
    ctx->pc = 0x2199f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2199f8:
    // 0x2199f8: 0x8c42d560
    ctx->pc = 0x2199f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_2199fc:
    // 0x2199fc: 0x2403001c
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_219a00:
    // 0x219a00: 0x432818
    ctx->pc = 0x219a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219a04:
    // 0x219a04: 0xb61021
    ctx->pc = 0x219a04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_219a08:
    // 0x219a08: 0xc4400014
    ctx->pc = 0x219a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219a0c:
    // 0x219a0c: 0x3c014120
    ctx->pc = 0x219a0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_219a10:
    // 0x219a10: 0x44810800
    ctx->pc = 0x219a10u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_219a14:
    // 0x219a14: 0x46000834
    ctx->pc = 0x219a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219a18:
    // 0x219a18: 0x0
    ctx->pc = 0x219a18u;
    // NOP
label_219a1c:
    // 0x219a1c: 0x45000003
label_219a20:
    if (ctx->pc == 0x219A20u) {
        ctx->pc = 0x219A20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219A24u;
        goto label_219a24;
    }
    ctx->pc = 0x219A1Cu;
    {
        const bool branch_taken_0x219a1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219A20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219a1c) {
            ctx->pc = 0x219A2Cu;
            goto label_219a2c;
        }
    }
    ctx->pc = 0x219A24u;
label_219a24:
    // 0x219a24: 0x10000007
label_219a28:
    if (ctx->pc == 0x219A28u) {
        ctx->pc = 0x219A28u;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x219A2Cu;
        goto label_219a2c;
    }
    ctx->pc = 0x219A24u;
    {
        const bool branch_taken_0x219a24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219A28u;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        if (branch_taken_0x219a24) {
            ctx->pc = 0x219A44u;
            goto label_219a44;
        }
    }
    ctx->pc = 0x219A2Cu;
label_219a2c:
    // 0x219a2c: 0x8c42d560
    ctx->pc = 0x219a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_219a30:
    // 0x219a30: 0x2403001c
    ctx->pc = 0x219a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_219a34:
    // 0x219a34: 0x432818
    ctx->pc = 0x219a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219a38:
    // 0x219a38: 0xb61021
    ctx->pc = 0x219a38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_219a3c:
    // 0x219a3c: 0xc4400014
    ctx->pc = 0x219a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219a40:
    // 0x219a40: 0x46001000
    ctx->pc = 0x219a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_219a44:
    // 0x219a44: 0x10000019
label_219a48:
    if (ctx->pc == 0x219A48u) {
        ctx->pc = 0x219A48u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x219A4Cu;
        goto label_219a4c;
    }
    ctx->pc = 0x219A44u;
    {
        const bool branch_taken_0x219a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219A48u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x219a44) {
            ctx->pc = 0x219AACu;
            goto label_219aac;
        }
    }
    ctx->pc = 0x219A4Cu;
label_219a4c:
    // 0x219a4c: 0x3c02003c
    ctx->pc = 0x219a4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219a50:
    // 0x219a50: 0x8c43d588
    ctx->pc = 0x219a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
label_219a54:
    // 0x219a54: 0x24020004
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_219a58:
    // 0x219a58: 0x14620009
label_219a5c:
    if (ctx->pc == 0x219A5Cu) {
        ctx->pc = 0x219A5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x219A60u;
        goto label_219a60;
    }
    ctx->pc = 0x219A58u;
    {
        const bool branch_taken_0x219a58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x219A5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x219a58) {
            ctx->pc = 0x219A80u;
            goto label_219a80;
        }
    }
    ctx->pc = 0x219A60u;
label_219a60:
    // 0x219a60: 0x3c020031
    ctx->pc = 0x219a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_219a64:
    // 0x219a64: 0xc440ffa4
    ctx->pc = 0x219a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219a68:
    // 0x219a68: 0x3c013dcc
    ctx->pc = 0x219a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_219a6c:
    // 0x219a6c: 0x3421cccd
    ctx->pc = 0x219a6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_219a70:
    // 0x219a70: 0x44810800
    ctx->pc = 0x219a70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_219a74:
    // 0x219a74: 0x46010000
    ctx->pc = 0x219a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_219a78:
    // 0x219a78: 0x1000000c
label_219a7c:
    if (ctx->pc == 0x219A7Cu) {
        ctx->pc = 0x219A7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954736), bits); }
        ctx->pc = 0x219A80u;
        goto label_219a80;
    }
    ctx->pc = 0x219A78u;
    {
        const bool branch_taken_0x219a78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219A7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954736), bits); }
        if (branch_taken_0x219a78) {
            ctx->pc = 0x219AACu;
            goto label_219aac;
        }
    }
    ctx->pc = 0x219A80u;
label_219a80:
    // 0x219a80: 0x3c014000
    ctx->pc = 0x219a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_219a84:
    // 0x219a84: 0x44816000
    ctx->pc = 0x219a84u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_219a88:
    // 0x219a88: 0xc0b5c06
label_219a8c:
    if (ctx->pc == 0x219A8Cu) {
        ctx->pc = 0x219A8Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x219A90u;
        goto label_219a90;
    }
    ctx->pc = 0x219A88u;
    SET_GPR_U32(ctx, 31, 0x219A90u);
    ctx->pc = 0x219A8Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A90u; }
    }
    if (ctx->pc != 0x219A90u) { return; }
    ctx->pc = 0x219A90u;
label_219a90:
    // 0x219a90: 0x3c020031
    ctx->pc = 0x219a90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_219a94:
    // 0x219a94: 0xc441ffa4
    ctx->pc = 0x219a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219a98:
    // 0x219a98: 0x3c013f80
    ctx->pc = 0x219a98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_219a9c:
    // 0x219a9c: 0x44811000
    ctx->pc = 0x219a9cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_219aa0:
    // 0x219aa0: 0x46020840
    ctx->pc = 0x219aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_219aa4:
    // 0x219aa4: 0x46000840
    ctx->pc = 0x219aa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_219aa8:
    // 0x219aa8: 0xe601cef0
    ctx->pc = 0x219aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954736), bits); }
label_219aac:
    // 0x219aac: 0x3c02003c
    ctx->pc = 0x219aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219ab0:
    // 0x219ab0: 0x3a0202d
    ctx->pc = 0x219ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219ab4:
    // 0x219ab4: 0x3c05003a
    ctx->pc = 0x219ab4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_219ab8:
    // 0x219ab8: 0x24a561d0
    ctx->pc = 0x219ab8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25040));
label_219abc:
    // 0x219abc: 0xc0b6252
label_219ac0:
    if (ctx->pc == 0x219AC0u) {
        ctx->pc = 0x219AC0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956400)));
        ctx->pc = 0x219AC4u;
        goto label_219ac4;
    }
    ctx->pc = 0x219ABCu;
    SET_GPR_U32(ctx, 31, 0x219AC4u);
    ctx->pc = 0x219AC0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956400)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AC4u; }
    }
    if (ctx->pc != 0x219AC4u) { return; }
    ctx->pc = 0x219AC4u;
label_219ac4:
    // 0x219ac4: 0x3c11003c
    ctx->pc = 0x219ac4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
label_219ac8:
    // 0x219ac8: 0x8e22d56c
    ctx->pc = 0x219ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294956396)));
label_219acc:
    // 0x219acc: 0x3c0400ff
    ctx->pc = 0x219accu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_219ad0:
    // 0x219ad0: 0x3484ffff
    ctx->pc = 0x219ad0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
label_219ad4:
    // 0x219ad4: 0x3c1200ff
    ctx->pc = 0x219ad4u;
    SET_GPR_U32(ctx, 18, ((uint32_t)255 << 16));
label_219ad8:
    // 0x219ad8: 0x3652ffff
    ctx->pc = 0x219ad8u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
label_219adc:
    // 0x219adc: 0x3410ff00
    ctx->pc = 0x219adcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 65280));
label_219ae0:
    // 0x219ae0: 0x202200a
    ctx->pc = 0x219ae0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
label_219ae4:
    // 0x219ae4: 0x24050002
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_219ae8:
    // 0x219ae8: 0x24060025
    ctx->pc = 0x219ae8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 37));
label_219aec:
    // 0x219aec: 0xc0b4724
label_219af0:
    if (ctx->pc == 0x219AF0u) {
        ctx->pc = 0x219AF0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219AF4u;
        goto label_219af4;
    }
    ctx->pc = 0x219AECu;
    SET_GPR_U32(ctx, 31, 0x219AF4u);
    ctx->pc = 0x219AF0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AF4u; }
    }
    if (ctx->pc != 0x219AF4u) { return; }
    ctx->pc = 0x219AF4u;
label_219af4:
    // 0x219af4: 0x3c02003c
    ctx->pc = 0x219af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219af8:
    // 0x219af8: 0x3a0202d
    ctx->pc = 0x219af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219afc:
    // 0x219afc: 0x3c05003a
    ctx->pc = 0x219afcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_219b00:
    // 0x219b00: 0x24a561e0
    ctx->pc = 0x219b00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25056));
label_219b04:
    // 0x219b04: 0xc0b6252
label_219b08:
    if (ctx->pc == 0x219B08u) {
        ctx->pc = 0x219B08u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956404)));
        ctx->pc = 0x219B0Cu;
        goto label_219b0c;
    }
    ctx->pc = 0x219B04u;
    SET_GPR_U32(ctx, 31, 0x219B0Cu);
    ctx->pc = 0x219B08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956404)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B0Cu; }
    }
    if (ctx->pc != 0x219B0Cu) { return; }
    ctx->pc = 0x219B0Cu;
label_219b0c:
    // 0x219b0c: 0x8e22d56c
    ctx->pc = 0x219b0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294956396)));
label_219b10:
    // 0x219b10: 0x24130001
    ctx->pc = 0x219b10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_219b14:
    // 0x219b14: 0x38420001
    ctx->pc = 0x219b14u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_219b18:
    // 0x219b18: 0x200202d
    ctx->pc = 0x219b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219b1c:
    // 0x219b1c: 0x242200b
    ctx->pc = 0x219b1cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
label_219b20:
    // 0x219b20: 0x24050010
    ctx->pc = 0x219b20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
label_219b24:
    // 0x219b24: 0x24060025
    ctx->pc = 0x219b24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 37));
label_219b28:
    // 0x219b28: 0xc0b4724
label_219b2c:
    if (ctx->pc == 0x219B2Cu) {
        ctx->pc = 0x219B2Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219B30u;
        goto label_219b30;
    }
    ctx->pc = 0x219B28u;
    SET_GPR_U32(ctx, 31, 0x219B30u);
    ctx->pc = 0x219B2Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B30u; }
    }
    if (ctx->pc != 0x219B30u) { return; }
    ctx->pc = 0x219B30u;
label_219b30:
    // 0x219b30: 0x3c02003c
    ctx->pc = 0x219b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219b34:
    // 0x219b34: 0x3a0202d
    ctx->pc = 0x219b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219b38:
    // 0x219b38: 0x3c05003a
    ctx->pc = 0x219b38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_219b3c:
    // 0x219b3c: 0x24a561f0
    ctx->pc = 0x219b3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25072));
label_219b40:
    // 0x219b40: 0xc0b6252
label_219b44:
    if (ctx->pc == 0x219B44u) {
        ctx->pc = 0x219B44u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956408)));
        ctx->pc = 0x219B48u;
        goto label_219b48;
    }
    ctx->pc = 0x219B40u;
    SET_GPR_U32(ctx, 31, 0x219B48u);
    ctx->pc = 0x219B44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956408)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B48u; }
    }
    if (ctx->pc != 0x219B48u) { return; }
    ctx->pc = 0x219B48u;
label_219b48:
    // 0x219b48: 0x8e22d56c
    ctx->pc = 0x219b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294956396)));
label_219b4c:
    // 0x219b4c: 0x38420002
    ctx->pc = 0x219b4cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
label_219b50:
    // 0x219b50: 0x200202d
    ctx->pc = 0x219b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219b54:
    // 0x219b54: 0x242200b
    ctx->pc = 0x219b54u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
label_219b58:
    // 0x219b58: 0x2405001a
    ctx->pc = 0x219b58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
label_219b5c:
    // 0x219b5c: 0x24060025
    ctx->pc = 0x219b5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 37));
label_219b60:
    // 0x219b60: 0xc0b4724
label_219b64:
    if (ctx->pc == 0x219B64u) {
        ctx->pc = 0x219B64u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219B68u;
        goto label_219b68;
    }
    ctx->pc = 0x219B60u;
    SET_GPR_U32(ctx, 31, 0x219B68u);
    ctx->pc = 0x219B64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B68u; }
    }
    if (ctx->pc != 0x219B68u) { return; }
    ctx->pc = 0x219B68u;
label_219b68:
    // 0x219b68: 0x3c02003c
    ctx->pc = 0x219b68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219b6c:
    // 0x219b6c: 0x3a0202d
    ctx->pc = 0x219b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219b70:
    // 0x219b70: 0x3c05003a
    ctx->pc = 0x219b70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_219b74:
    // 0x219b74: 0x24a56200
    ctx->pc = 0x219b74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25088));
label_219b78:
    // 0x219b78: 0xc0b6252
label_219b7c:
    if (ctx->pc == 0x219B7Cu) {
        ctx->pc = 0x219B7Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
        ctx->pc = 0x219B80u;
        goto label_219b80;
    }
    ctx->pc = 0x219B78u;
    SET_GPR_U32(ctx, 31, 0x219B80u);
    ctx->pc = 0x219B7Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B80u; }
    }
    if (ctx->pc != 0x219B80u) { return; }
    ctx->pc = 0x219B80u;
label_219b80:
    // 0x219b80: 0x3c0400ff
    ctx->pc = 0x219b80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_219b84:
    // 0x219b84: 0x2405002d
    ctx->pc = 0x219b84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 45));
label_219b88:
    // 0x219b88: 0x24060025
    ctx->pc = 0x219b88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 37));
label_219b8c:
    // 0x219b8c: 0xc0b4724
label_219b90:
    if (ctx->pc == 0x219B90u) {
        ctx->pc = 0x219B90u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219B94u;
        goto label_219b94;
    }
    ctx->pc = 0x219B8Cu;
    SET_GPR_U32(ctx, 31, 0x219B94u);
    ctx->pc = 0x219B90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B94u; }
    }
    if (ctx->pc != 0x219B94u) { return; }
    ctx->pc = 0x219B94u;
label_219b94:
    // 0x219b94: 0x3c030032
    ctx->pc = 0x219b94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_219b98:
    // 0x219b98: 0x2463f988
    ctx->pc = 0x219b98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965640));
label_219b9c:
    // 0x219b9c: 0x3c02003c
    ctx->pc = 0x219b9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219ba0:
    // 0x219ba0: 0x8c42d57c
    ctx->pc = 0x219ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956412)));
label_219ba4:
    // 0x219ba4: 0x24420001
    ctx->pc = 0x219ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_219ba8:
    // 0x219ba8: 0x21080
    ctx->pc = 0x219ba8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_219bac:
    // 0x219bac: 0x431021
    ctx->pc = 0x219bacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219bb0:
    // 0x219bb0: 0x3a0202d
    ctx->pc = 0x219bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219bb4:
    // 0x219bb4: 0x3c05003a
    ctx->pc = 0x219bb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_219bb8:
    // 0x219bb8: 0x24a56210
    ctx->pc = 0x219bb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25104));
label_219bbc:
    // 0x219bbc: 0xc0b6252
label_219bc0:
    if (ctx->pc == 0x219BC0u) {
        ctx->pc = 0x219BC0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x219BC4u;
        goto label_219bc4;
    }
    ctx->pc = 0x219BBCu;
    SET_GPR_U32(ctx, 31, 0x219BC4u);
    ctx->pc = 0x219BC0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BC4u; }
    }
    if (ctx->pc != 0x219BC4u) { return; }
    ctx->pc = 0x219BC4u;
label_219bc4:
    // 0x219bc4: 0x8e22d56c
    ctx->pc = 0x219bc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294956396)));
label_219bc8:
    // 0x219bc8: 0x38420003
    ctx->pc = 0x219bc8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
label_219bcc:
    // 0x219bcc: 0x200202d
    ctx->pc = 0x219bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219bd0:
    // 0x219bd0: 0x242200b
    ctx->pc = 0x219bd0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
label_219bd4:
    // 0x219bd4: 0x24050002
    ctx->pc = 0x219bd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_219bd8:
    // 0x219bd8: 0x24060026
    ctx->pc = 0x219bd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 38));
label_219bdc:
    // 0x219bdc: 0xc0b4724
label_219be0:
    if (ctx->pc == 0x219BE0u) {
        ctx->pc = 0x219BE0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219BE4u;
        goto label_219be4;
    }
    ctx->pc = 0x219BDCu;
    SET_GPR_U32(ctx, 31, 0x219BE4u);
    ctx->pc = 0x219BE0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BE4u; }
    }
    if (ctx->pc != 0x219BE4u) { return; }
    ctx->pc = 0x219BE4u;
label_219be4:
    // 0x219be4: 0x3c02003c
    ctx->pc = 0x219be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219be8:
    // 0x219be8: 0x3a0202d
    ctx->pc = 0x219be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219bec:
    // 0x219bec: 0x3c05003a
    ctx->pc = 0x219becu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_219bf0:
    // 0x219bf0: 0x24a56220
    ctx->pc = 0x219bf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25120));
label_219bf4:
    // 0x219bf4: 0xc0b6252
label_219bf8:
    if (ctx->pc == 0x219BF8u) {
        ctx->pc = 0x219BF8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956416)));
        ctx->pc = 0x219BFCu;
        goto label_219bfc;
    }
    ctx->pc = 0x219BF4u;
    SET_GPR_U32(ctx, 31, 0x219BFCu);
    ctx->pc = 0x219BF8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956416)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219BFCu; }
    }
    if (ctx->pc != 0x219BFCu) { return; }
    ctx->pc = 0x219BFCu;
label_219bfc:
    // 0x219bfc: 0x8e22d56c
    ctx->pc = 0x219bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294956396)));
label_219c00:
    // 0x219c00: 0x38420004
    ctx->pc = 0x219c00u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
label_219c04:
    // 0x219c04: 0x200202d
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219c08:
    // 0x219c08: 0x242200b
    ctx->pc = 0x219c08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
label_219c0c:
    // 0x219c0c: 0x24050010
    ctx->pc = 0x219c0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
label_219c10:
    // 0x219c10: 0x24060026
    ctx->pc = 0x219c10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 38));
label_219c14:
    // 0x219c14: 0xc0b4724
label_219c18:
    if (ctx->pc == 0x219C18u) {
        ctx->pc = 0x219C18u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219C1Cu;
        goto label_219c1c;
    }
    ctx->pc = 0x219C14u;
    SET_GPR_U32(ctx, 31, 0x219C1Cu);
    ctx->pc = 0x219C18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C1Cu; }
    }
    if (ctx->pc != 0x219C1Cu) { return; }
    ctx->pc = 0x219C1Cu;
label_219c1c:
    // 0x219c1c: 0x3c10003c
    ctx->pc = 0x219c1cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_219c20:
    // 0x219c20: 0x202d
    ctx->pc = 0x219c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219c24:
    // 0x219c24: 0x282d
    ctx->pc = 0x219c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219c28:
    // 0x219c28: 0x8e06d568
    ctx->pc = 0x219c28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956392)));
label_219c2c:
    // 0x219c2c: 0x382d
    ctx->pc = 0x219c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219c30:
    // 0x219c30: 0xc085a1e
label_219c34:
    if (ctx->pc == 0x219C34u) {
        ctx->pc = 0x219C34u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x219C38u;
        goto label_219c38;
    }
    ctx->pc = 0x219C30u;
    SET_GPR_U32(ctx, 31, 0x219C38u);
    ctx->pc = 0x219C34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C38u; }
    }
    if (ctx->pc != 0x219C38u) { return; }
    ctx->pc = 0x219C38u;
label_219c38:
    // 0x219c38: 0x40182d
    ctx->pc = 0x219c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219c3c:
    // 0x219c3c: 0x10730028
label_219c40:
    if (ctx->pc == 0x219C40u) {
        ctx->pc = 0x219C40u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956392), GPR_U32(ctx, 2));
        ctx->pc = 0x219C44u;
        goto label_219c44;
    }
    ctx->pc = 0x219C3Cu;
    {
        const bool branch_taken_0x219c3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x219C40u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956392), GPR_U32(ctx, 2));
        if (branch_taken_0x219c3c) {
            ctx->pc = 0x219CE0u;
            goto label_219ce0;
        }
    }
    ctx->pc = 0x219C44u;
label_219c44:
    // 0x219c44: 0x28620002
    ctx->pc = 0x219c44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
label_219c48:
    // 0x219c48: 0x10400005
label_219c4c:
    if (ctx->pc == 0x219C4Cu) {
        ctx->pc = 0x219C4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x219C50u;
        goto label_219c50;
    }
    ctx->pc = 0x219C48u;
    {
        const bool branch_taken_0x219c48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219C4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x219c48) {
            ctx->pc = 0x219C60u;
            goto label_219c60;
        }
    }
    ctx->pc = 0x219C50u;
label_219c50:
    // 0x219c50: 0x10600007
label_219c54:
    if (ctx->pc == 0x219C54u) {
        ctx->pc = 0x219C54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219C58u;
        goto label_219c58;
    }
    ctx->pc = 0x219C50u;
    {
        const bool branch_taken_0x219c50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x219C54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219c50) {
            ctx->pc = 0x219C70u;
            goto label_219c70;
        }
    }
    ctx->pc = 0x219C58u;
label_219c58:
    // 0x219c58: 0x100000bc
label_219c5c:
    if (ctx->pc == 0x219C5Cu) {
        ctx->pc = 0x219C5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
        ctx->pc = 0x219C60u;
        goto label_219c60;
    }
    ctx->pc = 0x219C58u;
    {
        const bool branch_taken_0x219c58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219C5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
        if (branch_taken_0x219c58) {
            ctx->pc = 0x219F4Cu;
            goto label_219f4c;
        }
    }
    ctx->pc = 0x219C60u;
label_219c60:
    // 0x219c60: 0x1062007c
label_219c64:
    if (ctx->pc == 0x219C64u) {
        ctx->pc = 0x219C64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219C68u;
        goto label_219c68;
    }
    ctx->pc = 0x219C60u;
    {
        const bool branch_taken_0x219c60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x219C64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219c60) {
            ctx->pc = 0x219E54u;
            goto label_219e54;
        }
    }
    ctx->pc = 0x219C68u;
label_219c68:
    // 0x219c68: 0x100000b8
label_219c6c:
    if (ctx->pc == 0x219C6Cu) {
        ctx->pc = 0x219C6Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
        ctx->pc = 0x219C70u;
        goto label_219c70;
    }
    ctx->pc = 0x219C68u;
    {
        const bool branch_taken_0x219c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219C6Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
        if (branch_taken_0x219c68) {
            ctx->pc = 0x219F4Cu;
            goto label_219f4c;
        }
    }
    ctx->pc = 0x219C70u;
label_219c70:
    // 0x219c70: 0x3c10003c
    ctx->pc = 0x219c70u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_219c74:
    // 0x219c74: 0x3c110032
    ctx->pc = 0x219c74u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
label_219c78:
    // 0x219c78: 0x8e22fd6c
    ctx->pc = 0x219c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966636)));
label_219c7c:
    // 0x219c7c: 0x24040001
    ctx->pc = 0x219c7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_219c80:
    // 0x219c80: 0x282d
    ctx->pc = 0x219c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219c84:
    // 0x219c84: 0x8e06d558
    ctx->pc = 0x219c84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956376)));
label_219c88:
    // 0x219c88: 0x382d
    ctx->pc = 0x219c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219c8c:
    // 0x219c8c: 0xc085a1e
label_219c90:
    if (ctx->pc == 0x219C90u) {
        ctx->pc = 0x219C90u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x219C94u;
        goto label_219c94;
    }
    ctx->pc = 0x219C8Cu;
    SET_GPR_U32(ctx, 31, 0x219C94u);
    ctx->pc = 0x219C90u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219C94u; }
    }
    if (ctx->pc != 0x219C94u) { return; }
    ctx->pc = 0x219C94u;
label_219c94:
    // 0x219c94: 0x40282d
    ctx->pc = 0x219c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219c98:
    // 0x219c98: 0x8e02d558
    ctx->pc = 0x219c98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294956376)));
label_219c9c:
    // 0x219c9c: 0x10a200a9
label_219ca0:
    if (ctx->pc == 0x219CA0u) {
        ctx->pc = 0x219CA0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x219CA4u;
        goto label_219ca4;
    }
    ctx->pc = 0x219C9Cu;
    {
        const bool branch_taken_0x219c9c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x219CA0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x219c9c) {
            ctx->pc = 0x219F44u;
            goto label_219f44;
        }
    }
    ctx->pc = 0x219CA4u;
label_219ca4:
    // 0x219ca4: 0xae05d558
    ctx->pc = 0x219ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956376), GPR_U32(ctx, 5));
label_219ca8:
    // 0x219ca8: 0x3c03003c
    ctx->pc = 0x219ca8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219cac:
    // 0x219cac: 0x3c02003c
    ctx->pc = 0x219cacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219cb0:
    // 0x219cb0: 0xac40d560
    ctx->pc = 0x219cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956384), GPR_U32(ctx, 0));
label_219cb4:
    // 0x219cb4: 0xac60d564
    ctx->pc = 0x219cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956388), GPR_U32(ctx, 0));
label_219cb8:
    // 0x219cb8: 0xac80d55c
    ctx->pc = 0x219cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956380), GPR_U32(ctx, 0));
label_219cbc:
    // 0x219cbc: 0x8e22fd6c
    ctx->pc = 0x219cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966636)));
label_219cc0:
    // 0x219cc0: 0x24042494
    ctx->pc = 0x219cc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9364));
label_219cc4:
    // 0x219cc4: 0xa42018
    ctx->pc = 0x219cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219cc8:
    // 0x219cc8: 0x8c42000c
    ctx->pc = 0x219cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_219ccc:
    // 0x219ccc: 0x3c10003c
    ctx->pc = 0x219cccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_219cd0:
    // 0x219cd0: 0xc0885ea
label_219cd4:
    if (ctx->pc == 0x219CD4u) {
        ctx->pc = 0x219CD4u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x219CD8u;
        goto label_219cd8;
    }
    ctx->pc = 0x219CD0u;
    SET_GPR_U32(ctx, 31, 0x219CD8u);
    ctx->pc = 0x219CD4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x2217A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetMode_0x2217a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219CD8u; }
    }
    if (ctx->pc != 0x219CD8u) { return; }
    ctx->pc = 0x219CD8u;
label_219cd8:
    // 0x219cd8: 0x1000009a
label_219cdc:
    if (ctx->pc == 0x219CDCu) {
        ctx->pc = 0x219CDCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 4294954740), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x219CE0u;
        goto label_219ce0;
    }
    ctx->pc = 0x219CD8u;
    {
        const bool branch_taken_0x219cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219CDCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 4294954740), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x219cd8) {
            ctx->pc = 0x219F44u;
            goto label_219f44;
        }
    }
    ctx->pc = 0x219CE0u;
label_219ce0:
    // 0x219ce0: 0x3c03003c
    ctx->pc = 0x219ce0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219ce4:
    // 0x219ce4: 0x8c62cf40
    ctx->pc = 0x219ce4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954816)));
label_219ce8:
    // 0x219ce8: 0x14400097
label_219cec:
    if (ctx->pc == 0x219CECu) {
        ctx->pc = 0x219CECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219CF0u;
        goto label_219cf0;
    }
    ctx->pc = 0x219CE8u;
    {
        const bool branch_taken_0x219ce8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x219CECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219ce8) {
            ctx->pc = 0x219F48u;
            goto label_219f48;
        }
    }
    ctx->pc = 0x219CF0u;
label_219cf0:
    // 0x219cf0: 0x3c02003c
    ctx->pc = 0x219cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219cf4:
    // 0x219cf4: 0x8c42cef8
    ctx->pc = 0x219cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
label_219cf8:
    // 0x219cf8: 0x304200c0
    ctx->pc = 0x219cf8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
label_219cfc:
    // 0x219cfc: 0x1040001f
label_219d00:
    if (ctx->pc == 0x219D00u) {
        ctx->pc = 0x219D00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219D04u;
        goto label_219d04;
    }
    ctx->pc = 0x219CFCu;
    {
        const bool branch_taken_0x219cfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219D00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219cfc) {
            ctx->pc = 0x219D7Cu;
            goto label_219d7c;
        }
    }
    ctx->pc = 0x219D04u;
label_219d04:
    // 0x219d04: 0x8c42cf44
    ctx->pc = 0x219d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954820)));
label_219d08:
    // 0x219d08: 0xac62cf40
    ctx->pc = 0x219d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954816), GPR_U32(ctx, 2));
label_219d0c:
    // 0x219d0c: 0x3c04003c
    ctx->pc = 0x219d0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_219d10:
    // 0x219d10: 0x8e820018
    ctx->pc = 0x219d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_219d14:
    // 0x219d14: 0x2442ffff
    ctx->pc = 0x219d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_219d18:
    // 0x219d18: 0x8c83d564
    ctx->pc = 0x219d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294956388)));
label_219d1c:
    // 0x219d1c: 0x62102a
    ctx->pc = 0x219d1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_219d20:
    // 0x219d20: 0x50400004
label_219d24:
    if (ctx->pc == 0x219D24u) {
        ctx->pc = 0x219D24u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x219D28u;
        goto label_219d28;
    }
    ctx->pc = 0x219D20u;
    {
        const bool branch_taken_0x219d20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x219d20) {
            ctx->pc = 0x219D24u;
            SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
            ctx->pc = 0x219D34u;
            goto label_219d34;
        }
    }
    ctx->pc = 0x219D28u;
label_219d28:
    // 0x219d28: 0x24620001
    ctx->pc = 0x219d28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_219d2c:
    // 0x219d2c: 0x10000031
label_219d30:
    if (ctx->pc == 0x219D30u) {
        ctx->pc = 0x219D30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956388), GPR_U32(ctx, 2));
        ctx->pc = 0x219D34u;
        goto label_219d34;
    }
    ctx->pc = 0x219D2Cu;
    {
        const bool branch_taken_0x219d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219D30u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294956388), GPR_U32(ctx, 2));
        if (branch_taken_0x219d2c) {
            ctx->pc = 0x219DF4u;
            goto label_219df4;
        }
    }
    ctx->pc = 0x219D34u;
label_219d34:
    // 0x219d34: 0x8c83d55c
    ctx->pc = 0x219d34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294956380)));
label_219d38:
    // 0x219d38: 0x24630001
    ctx->pc = 0x219d38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_219d3c:
    // 0x219d3c: 0x8ea20010
    ctx->pc = 0x219d3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_219d40:
    // 0x219d40: 0x62001a
    ctx->pc = 0x219d40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_219d44:
    // 0x219d44: 0x1810
    ctx->pc = 0x219d44u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_219d48:
    // 0x219d48: 0x50400001
label_219d4c:
    if (ctx->pc == 0x219D4Cu) {
        ctx->pc = 0x219D4Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x219D50u;
        goto label_219d50;
    }
    ctx->pc = 0x219D48u;
    {
        const bool branch_taken_0x219d48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x219d48) {
            ctx->pc = 0x219D4Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x219D50u;
            goto label_219d50;
        }
    }
    ctx->pc = 0x219D50u;
label_219d50:
    // 0x219d50: 0xac83d55c
    ctx->pc = 0x219d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956380), GPR_U32(ctx, 3));
label_219d54:
    // 0x219d54: 0x24020124
    ctx->pc = 0x219d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 292));
label_219d58:
    // 0x219d58: 0x621818
    ctx->pc = 0x219d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219d5c:
    // 0x219d5c: 0x24630014
    ctx->pc = 0x219d5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
label_219d60:
    // 0x219d60: 0x2a3a021
    ctx->pc = 0x219d60u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_219d64:
    // 0x219d64: 0x3c02003c
    ctx->pc = 0x219d64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219d68:
    // 0x219d68: 0xac40d564
    ctx->pc = 0x219d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956388), GPR_U32(ctx, 0));
label_219d6c:
    // 0x219d6c: 0x3c020032
    ctx->pc = 0x219d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_219d70:
    // 0x219d70: 0x8c44fd6c
    ctx->pc = 0x219d70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
label_219d74:
    // 0x219d74: 0x10000024
label_219d78:
    if (ctx->pc == 0x219D78u) {
        ctx->pc = 0x219D78u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x219D7Cu;
        goto label_219d7c;
    }
    ctx->pc = 0x219D74u;
    {
        const bool branch_taken_0x219d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219D78u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
        if (branch_taken_0x219d74) {
            ctx->pc = 0x219E08u;
            goto label_219e08;
        }
    }
    ctx->pc = 0x219D7Cu;
label_219d7c:
    // 0x219d7c: 0x3c02003c
    ctx->pc = 0x219d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219d80:
    // 0x219d80: 0x8c42cef8
    ctx->pc = 0x219d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
label_219d84:
    // 0x219d84: 0x30420030
    ctx->pc = 0x219d84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
label_219d88:
    // 0x219d88: 0x1040006e
label_219d8c:
    if (ctx->pc == 0x219D8Cu) {
        ctx->pc = 0x219D8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219D90u;
        goto label_219d90;
    }
    ctx->pc = 0x219D88u;
    {
        const bool branch_taken_0x219d88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219D8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219d88) {
            ctx->pc = 0x219F44u;
            goto label_219f44;
        }
    }
    ctx->pc = 0x219D90u;
label_219d90:
    // 0x219d90: 0x3c03003c
    ctx->pc = 0x219d90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219d94:
    // 0x219d94: 0x8c63cf44
    ctx->pc = 0x219d94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954820)));
label_219d98:
    // 0x219d98: 0xac43cf40
    ctx->pc = 0x219d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954816), GPR_U32(ctx, 3));
label_219d9c:
    // 0x219d9c: 0x3c03003c
    ctx->pc = 0x219d9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219da0:
    // 0x219da0: 0x8c62d564
    ctx->pc = 0x219da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956388)));
label_219da4:
    // 0x219da4: 0x1c400012
label_219da8:
    if (ctx->pc == 0x219DA8u) {
        ctx->pc = 0x219DA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x219DACu;
        goto label_219dac;
    }
    ctx->pc = 0x219DA4u;
    {
        const bool branch_taken_0x219da4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x219DA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x219da4) {
            ctx->pc = 0x219DF0u;
            goto label_219df0;
        }
    }
    ctx->pc = 0x219DACu;
label_219dac:
    // 0x219dac: 0x3c03003c
    ctx->pc = 0x219dacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219db0:
    // 0x219db0: 0x8c62d55c
    ctx->pc = 0x219db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956380)));
label_219db4:
    // 0x219db4: 0x2442ffff
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_219db8:
    // 0x219db8: 0x4410004
label_219dbc:
    if (ctx->pc == 0x219DBCu) {
        ctx->pc = 0x219DBCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956380), GPR_U32(ctx, 2));
        ctx->pc = 0x219DC0u;
        goto label_219dc0;
    }
    ctx->pc = 0x219DB8u;
    {
        const bool branch_taken_0x219db8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x219DBCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956380), GPR_U32(ctx, 2));
        if (branch_taken_0x219db8) {
            ctx->pc = 0x219DCCu;
            goto label_219dcc;
        }
    }
    ctx->pc = 0x219DC0u;
label_219dc0:
    // 0x219dc0: 0x8ea20010
    ctx->pc = 0x219dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_219dc4:
    // 0x219dc4: 0x2442ffff
    ctx->pc = 0x219dc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_219dc8:
    // 0x219dc8: 0xac62d55c
    ctx->pc = 0x219dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956380), GPR_U32(ctx, 2));
label_219dcc:
    // 0x219dcc: 0x3c02003c
    ctx->pc = 0x219dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219dd0:
    // 0x219dd0: 0x8c42d55c
    ctx->pc = 0x219dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956380)));
label_219dd4:
    // 0x219dd4: 0x24030124
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 292));
label_219dd8:
    // 0x219dd8: 0x431018
    ctx->pc = 0x219dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219ddc:
    // 0x219ddc: 0x24420014
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
label_219de0:
    // 0x219de0: 0x2a2a021
    ctx->pc = 0x219de0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_219de4:
    // 0x219de4: 0x3c03003c
    ctx->pc = 0x219de4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219de8:
    // 0x219de8: 0x8e820018
    ctx->pc = 0x219de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_219dec:
    // 0x219dec: 0x2442ffff
    ctx->pc = 0x219decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_219df0:
    // 0x219df0: 0xac62d564
    ctx->pc = 0x219df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956388), GPR_U32(ctx, 2));
label_219df4:
    // 0x219df4: 0x3c030032
    ctx->pc = 0x219df4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_219df8:
    // 0x219df8: 0x8c64fd6c
    ctx->pc = 0x219df8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294966636)));
label_219dfc:
    // 0x219dfc: 0x21080
    ctx->pc = 0x219dfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_219e00:
    // 0x219e00: 0x2821021
    ctx->pc = 0x219e00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_219e04:
    // 0x219e04: 0x8c42001c
    ctx->pc = 0x219e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_219e08:
    // 0x219e08: 0x2403002c
    ctx->pc = 0x219e08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
label_219e0c:
    // 0x219e0c: 0x431018
    ctx->pc = 0x219e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219e10:
    // 0x219e10: 0x8c830010
    ctx->pc = 0x219e10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_219e14:
    // 0x219e14: 0x438821
    ctx->pc = 0x219e14u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219e18:
    // 0x219e18: 0x3c02003c
    ctx->pc = 0x219e18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219e1c:
    // 0x219e1c: 0xac40d560
    ctx->pc = 0x219e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956384), GPR_U32(ctx, 0));
label_219e20:
    // 0x219e20: 0x3c02003c
    ctx->pc = 0x219e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219e24:
    // 0x219e24: 0x8e83011c
    ctx->pc = 0x219e24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_219e28:
    // 0x219e28: 0x8c42d564
    ctx->pc = 0x219e28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956388)));
label_219e2c:
    // 0x219e2c: 0x10620046
label_219e30:
    if (ctx->pc == 0x219E30u) {
        ctx->pc = 0x219E30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219E34u;
        goto label_219e34;
    }
    ctx->pc = 0x219E2Cu;
    {
        const bool branch_taken_0x219e2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x219E30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219e2c) {
            ctx->pc = 0x219F48u;
            goto label_219f48;
        }
    }
    ctx->pc = 0x219E34u;
label_219e34:
    // 0x219e34: 0xc08830a
label_219e38:
    if (ctx->pc == 0x219E38u) {
        ctx->pc = 0x219E38u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x219E3Cu;
        goto label_219e3c;
    }
    ctx->pc = 0x219E34u;
    SET_GPR_U32(ctx, 31, 0x219E3Cu);
    ctx->pc = 0x219E38u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x220C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioUnloadAll_0x220c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E3Cu; }
    }
    if (ctx->pc != 0x219E3Cu) { return; }
    ctx->pc = 0x219E3Cu;
label_219e3c:
    // 0x219e3c: 0x280202d
    ctx->pc = 0x219e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_219e40:
    // 0x219e40: 0x26250010
    ctx->pc = 0x219e40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 16));
label_219e44:
    // 0x219e44: 0xc088518
label_219e48:
    if (ctx->pc == 0x219E48u) {
        ctx->pc = 0x219E48u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x219E4Cu;
        goto label_219e4c;
    }
    ctx->pc = 0x219E44u;
    SET_GPR_U32(ctx, 31, 0x219E4Cu);
    ctx->pc = 0x219E48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221460u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadBankDesc_0x221460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E4Cu; }
    }
    if (ctx->pc != 0x219E4Cu) { return; }
    ctx->pc = 0x219E4Cu;
label_219e4c:
    // 0x219e4c: 0x1000003d
label_219e50:
    if (ctx->pc == 0x219E50u) {
        ctx->pc = 0x219E50u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 4294954740), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x219E54u;
        goto label_219e54;
    }
    ctx->pc = 0x219E4Cu;
    {
        const bool branch_taken_0x219e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219E50u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 4294954740), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x219e4c) {
            ctx->pc = 0x219F44u;
            goto label_219f44;
        }
    }
    ctx->pc = 0x219E54u;
label_219e54:
    // 0x219e54: 0x3c10003c
    ctx->pc = 0x219e54u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_219e58:
    // 0x219e58: 0x24040001
    ctx->pc = 0x219e58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_219e5c:
    // 0x219e5c: 0x282d
    ctx->pc = 0x219e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219e60:
    // 0x219e60: 0x8e06d560
    ctx->pc = 0x219e60u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956384)));
label_219e64:
    // 0x219e64: 0x382d
    ctx->pc = 0x219e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219e68:
    // 0x219e68: 0xc085a1e
label_219e6c:
    if (ctx->pc == 0x219E6Cu) {
        ctx->pc = 0x219E6Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x219E70u;
        goto label_219e70;
    }
    ctx->pc = 0x219E68u;
    SET_GPR_U32(ctx, 31, 0x219E70u);
    ctx->pc = 0x219E6Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E70u; }
    }
    if (ctx->pc != 0x219E70u) { return; }
    ctx->pc = 0x219E70u;
label_219e70:
    // 0x219e70: 0x40182d
    ctx->pc = 0x219e70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219e74:
    // 0x219e74: 0x8e02d560
    ctx->pc = 0x219e74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294956384)));
label_219e78:
    // 0x219e78: 0x10620032
label_219e7c:
    if (ctx->pc == 0x219E7Cu) {
        ctx->pc = 0x219E7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219E80u;
        goto label_219e80;
    }
    ctx->pc = 0x219E78u;
    {
        const bool branch_taken_0x219e78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x219E7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219e78) {
            ctx->pc = 0x219F44u;
            goto label_219f44;
        }
    }
    ctx->pc = 0x219E80u;
label_219e80:
    // 0x219e80: 0xae03d560
    ctx->pc = 0x219e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956384), GPR_U32(ctx, 3));
label_219e84:
    // 0x219e84: 0x8c42cef8
    ctx->pc = 0x219e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
label_219e88:
    // 0x219e88: 0x3c030200
    ctx->pc = 0x219e88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_219e8c:
    // 0x219e8c: 0x431024
    ctx->pc = 0x219e8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219e90:
    // 0x219e90: 0x1040002d
label_219e94:
    if (ctx->pc == 0x219E94u) {
        ctx->pc = 0x219E94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219E98u;
        goto label_219e98;
    }
    ctx->pc = 0x219E90u;
    {
        const bool branch_taken_0x219e90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219E94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219e90) {
            ctx->pc = 0x219F48u;
            goto label_219f48;
        }
    }
    ctx->pc = 0x219E98u;
label_219e98:
    // 0x219e98: 0xc08641a
label_219e9c:
    if (ctx->pc == 0x219E9Cu) {
        ctx->pc = 0x219EA0u;
        goto label_219ea0;
    }
    ctx->pc = 0x219E98u;
    SET_GPR_U32(ctx, 31, 0x219EA0u);
    ctx->pc = 0x219068u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAudioView_0x219068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219EA0u; }
    }
    if (ctx->pc != 0x219EA0u) { return; }
    ctx->pc = 0x219EA0u;
label_219ea0:
    // 0x219ea0: 0x3c03003c
    ctx->pc = 0x219ea0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219ea4:
    // 0x219ea4: 0xa462cef4
    ctx->pc = 0x219ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954740), (uint16_t)GPR_U32(ctx, 2));
label_219ea8:
    // 0x219ea8: 0x3c04003c
    ctx->pc = 0x219ea8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_219eac:
    // 0x219eac: 0x3042ffff
    ctx->pc = 0x219eacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_219eb0:
    // 0x219eb0: 0x21202
    ctx->pc = 0x219eb0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_219eb4:
    // 0x219eb4: 0xac82d584
    ctx->pc = 0x219eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956420), GPR_U32(ctx, 2));
label_219eb8:
    // 0x219eb8: 0x8e02d560
    ctx->pc = 0x219eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294956384)));
label_219ebc:
    // 0x219ebc: 0x2403001c
    ctx->pc = 0x219ebcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_219ec0:
    // 0x219ec0: 0x432018
    ctx->pc = 0x219ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219ec4:
    // 0x219ec4: 0x961021
    ctx->pc = 0x219ec4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_219ec8:
    // 0x219ec8: 0xc4410014
    ctx->pc = 0x219ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219ecc:
    // 0x219ecc: 0x44800000
    ctx->pc = 0x219eccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_219ed0:
    // 0x219ed0: 0x46010034
    ctx->pc = 0x219ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219ed4:
    // 0x219ed4: 0x0
    ctx->pc = 0x219ed4u;
    // NOP
label_219ed8:
    // 0x219ed8: 0x45000013
label_219edc:
    if (ctx->pc == 0x219EDCu) {
        ctx->pc = 0x219EDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219EE0u;
        goto label_219ee0;
    }
    ctx->pc = 0x219ED8u;
    {
        const bool branch_taken_0x219ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219EDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219ed8) {
            ctx->pc = 0x219F28u;
            goto label_219f28;
        }
    }
    ctx->pc = 0x219EE0u;
label_219ee0:
    // 0x219ee0: 0x2444cef0
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954736));
label_219ee4:
    // 0x219ee4: 0x3c020031
    ctx->pc = 0x219ee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_219ee8:
    // 0x219ee8: 0xc442ffa4
    ctx->pc = 0x219ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219eec:
    // 0x219eec: 0x3c014120
    ctx->pc = 0x219eecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_219ef0:
    // 0x219ef0: 0x44810000
    ctx->pc = 0x219ef0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_219ef4:
    // 0x219ef4: 0x46010034
    ctx->pc = 0x219ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219ef8:
    // 0x219ef8: 0x0
    ctx->pc = 0x219ef8u;
    // NOP
label_219efc:
    // 0x219efc: 0x45030008
label_219f00:
    if (ctx->pc == 0x219F00u) {
        ctx->pc = 0x219F00u;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x219F04u;
        goto label_219f04;
    }
    ctx->pc = 0x219EFCu;
    {
        const bool branch_taken_0x219efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219efc) {
            ctx->pc = 0x219F00u;
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
            ctx->pc = 0x219F20u;
            goto label_219f20;
        }
    }
    ctx->pc = 0x219F04u;
label_219f04:
    // 0x219f04: 0x3c02003c
    ctx->pc = 0x219f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219f08:
    // 0x219f08: 0x8c42d560
    ctx->pc = 0x219f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_219f0c:
    // 0x219f0c: 0x2403001c
    ctx->pc = 0x219f0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_219f10:
    // 0x219f10: 0x432818
    ctx->pc = 0x219f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219f14:
    // 0x219f14: 0xb61021
    ctx->pc = 0x219f14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_219f18:
    // 0x219f18: 0xc4400014
    ctx->pc = 0x219f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219f1c:
    // 0x219f1c: 0x46001000
    ctx->pc = 0x219f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_219f20:
    // 0x219f20: 0x10000008
label_219f24:
    if (ctx->pc == 0x219F24u) {
        ctx->pc = 0x219F24u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x219F28u;
        goto label_219f28;
    }
    ctx->pc = 0x219F20u;
    {
        const bool branch_taken_0x219f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x219F24u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x219f20) {
            ctx->pc = 0x219F44u;
            goto label_219f44;
        }
    }
    ctx->pc = 0x219F28u;
label_219f28:
    // 0x219f28: 0x3c03003c
    ctx->pc = 0x219f28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219f2c:
    // 0x219f2c: 0x3c020031
    ctx->pc = 0x219f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_219f30:
    // 0x219f30: 0xc440ffa4
    ctx->pc = 0x219f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219f34:
    // 0x219f34: 0x3c014120
    ctx->pc = 0x219f34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_219f38:
    // 0x219f38: 0x44810800
    ctx->pc = 0x219f38u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_219f3c:
    // 0x219f3c: 0x46010000
    ctx->pc = 0x219f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_219f40:
    // 0x219f40: 0xe460cef0
    ctx->pc = 0x219f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954736), bits); }
label_219f44:
    // 0x219f44: 0x3c02003c
    ctx->pc = 0x219f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219f48:
    // 0x219f48: 0x8c42cf08
    ctx->pc = 0x219f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
label_219f4c:
    // 0x219f4c: 0x3c030200
    ctx->pc = 0x219f4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_219f50:
    // 0x219f50: 0x431024
    ctx->pc = 0x219f50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219f54:
    // 0x219f54: 0x1440000c
label_219f58:
    if (ctx->pc == 0x219F58u) {
        ctx->pc = 0x219F58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219F5Cu;
        goto label_219f5c;
    }
    ctx->pc = 0x219F54u;
    {
        const bool branch_taken_0x219f54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x219F58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219f54) {
            ctx->pc = 0x219F88u;
            goto label_219f88;
        }
    }
    ctx->pc = 0x219F5Cu;
label_219f5c:
    // 0x219f5c: 0x8c42cef8
    ctx->pc = 0x219f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
label_219f60:
    // 0x219f60: 0x431024
    ctx->pc = 0x219f60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219f64:
    // 0x219f64: 0x10400034
label_219f68:
    if (ctx->pc == 0x219F68u) {
        ctx->pc = 0x219F68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x219F6Cu;
        goto label_219f6c;
    }
    ctx->pc = 0x219F64u;
    {
        const bool branch_taken_0x219f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x219F68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x219f64) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x219F6Cu;
label_219f6c:
    // 0x219f6c: 0x3c03003c
    ctx->pc = 0x219f6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219f70:
    // 0x219f70: 0xc441ffa4
    ctx->pc = 0x219f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219f74:
    // 0x219f74: 0xc460cef0
    ctx->pc = 0x219f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_219f78:
    // 0x219f78: 0x46010036
    ctx->pc = 0x219f78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219f7c:
    // 0x219f7c: 0x0
    ctx->pc = 0x219f7cu;
    // NOP
label_219f80:
    // 0x219f80: 0x4500002e
label_219f84:
    if (ctx->pc == 0x219F84u) {
        ctx->pc = 0x219F84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219F88u;
        goto label_219f88;
    }
    ctx->pc = 0x219F80u;
    {
        const bool branch_taken_0x219f80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219F84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219f80) {
            ctx->pc = 0x21A03Cu;
            goto label_21a03c;
        }
    }
    ctx->pc = 0x219F88u;
label_219f88:
    // 0x219f88: 0xc08641a
label_219f8c:
    if (ctx->pc == 0x219F8Cu) {
        ctx->pc = 0x219F90u;
        goto label_219f90;
    }
    ctx->pc = 0x219F88u;
    SET_GPR_U32(ctx, 31, 0x219F90u);
    ctx->pc = 0x219068u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAudioView_0x219068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F90u; }
    }
    if (ctx->pc != 0x219F90u) { return; }
    ctx->pc = 0x219F90u;
label_219f90:
    // 0x219f90: 0x3c03003c
    ctx->pc = 0x219f90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_219f94:
    // 0x219f94: 0xa462cef4
    ctx->pc = 0x219f94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954740), (uint16_t)GPR_U32(ctx, 2));
label_219f98:
    // 0x219f98: 0x3c04003c
    ctx->pc = 0x219f98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_219f9c:
    // 0x219f9c: 0x3042ffff
    ctx->pc = 0x219f9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_219fa0:
    // 0x219fa0: 0x21202
    ctx->pc = 0x219fa0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_219fa4:
    // 0x219fa4: 0xac82d584
    ctx->pc = 0x219fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956420), GPR_U32(ctx, 2));
label_219fa8:
    // 0x219fa8: 0x3c02003c
    ctx->pc = 0x219fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219fac:
    // 0x219fac: 0x8c42d560
    ctx->pc = 0x219facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_219fb0:
    // 0x219fb0: 0x2403001c
    ctx->pc = 0x219fb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_219fb4:
    // 0x219fb4: 0x432018
    ctx->pc = 0x219fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_219fb8:
    // 0x219fb8: 0x961021
    ctx->pc = 0x219fb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_219fbc:
    // 0x219fbc: 0xc4410014
    ctx->pc = 0x219fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_219fc0:
    // 0x219fc0: 0x44800000
    ctx->pc = 0x219fc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_219fc4:
    // 0x219fc4: 0x46010034
    ctx->pc = 0x219fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219fc8:
    // 0x219fc8: 0x0
    ctx->pc = 0x219fc8u;
    // NOP
label_219fcc:
    // 0x219fcc: 0x45000013
label_219fd0:
    if (ctx->pc == 0x219FD0u) {
        ctx->pc = 0x219FD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x219FD4u;
        goto label_219fd4;
    }
    ctx->pc = 0x219FCCu;
    {
        const bool branch_taken_0x219fcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219FD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x219fcc) {
            ctx->pc = 0x21A01Cu;
            goto label_21a01c;
        }
    }
    ctx->pc = 0x219FD4u;
label_219fd4:
    // 0x219fd4: 0x2444cef0
    ctx->pc = 0x219fd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954736));
label_219fd8:
    // 0x219fd8: 0x3c020031
    ctx->pc = 0x219fd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_219fdc:
    // 0x219fdc: 0xc442ffa4
    ctx->pc = 0x219fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_219fe0:
    // 0x219fe0: 0x3c014120
    ctx->pc = 0x219fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_219fe4:
    // 0x219fe4: 0x44810000
    ctx->pc = 0x219fe4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_219fe8:
    // 0x219fe8: 0x46010034
    ctx->pc = 0x219fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219fec:
    // 0x219fec: 0x0
    ctx->pc = 0x219fecu;
    // NOP
label_219ff0:
    // 0x219ff0: 0x45030008
label_219ff4:
    if (ctx->pc == 0x219FF4u) {
        ctx->pc = 0x219FF4u;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x219FF8u;
        goto label_219ff8;
    }
    ctx->pc = 0x219FF0u;
    {
        const bool branch_taken_0x219ff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x219ff0) {
            ctx->pc = 0x219FF4u;
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
            ctx->pc = 0x21A014u;
            goto label_21a014;
        }
    }
    ctx->pc = 0x219FF8u;
label_219ff8:
    // 0x219ff8: 0x3c02003c
    ctx->pc = 0x219ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_219ffc:
    // 0x219ffc: 0x8c42d560
    ctx->pc = 0x219ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_21a000:
    // 0x21a000: 0x2403001c
    ctx->pc = 0x21a000u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_21a004:
    // 0x21a004: 0x432818
    ctx->pc = 0x21a004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_21a008:
    // 0x21a008: 0xb61021
    ctx->pc = 0x21a008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_21a00c:
    // 0x21a00c: 0xc4400014
    ctx->pc = 0x21a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a010:
    // 0x21a010: 0x46001000
    ctx->pc = 0x21a010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_21a014:
    // 0x21a014: 0x10000008
label_21a018:
    if (ctx->pc == 0x21A018u) {
        ctx->pc = 0x21A018u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x21A01Cu;
        goto label_21a01c;
    }
    ctx->pc = 0x21A014u;
    {
        const bool branch_taken_0x21a014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A018u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x21a014) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x21A01Cu;
label_21a01c:
    // 0x21a01c: 0x3c03003c
    ctx->pc = 0x21a01cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a020:
    // 0x21a020: 0x3c020031
    ctx->pc = 0x21a020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_21a024:
    // 0x21a024: 0xc440ffa4
    ctx->pc = 0x21a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a028:
    // 0x21a028: 0x3c014120
    ctx->pc = 0x21a028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_21a02c:
    // 0x21a02c: 0x44810800
    ctx->pc = 0x21a02cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_21a030:
    // 0x21a030: 0x46010000
    ctx->pc = 0x21a030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21a034:
    // 0x21a034: 0xe460cef0
    ctx->pc = 0x21a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954736), bits); }
label_21a038:
    // 0x21a038: 0x3c02003c
    ctx->pc = 0x21a038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a03c:
    // 0x21a03c: 0x8c42cf08
    ctx->pc = 0x21a03cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
label_21a040:
    // 0x21a040: 0x3c030400
    ctx->pc = 0x21a040u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
label_21a044:
    // 0x21a044: 0x431024
    ctx->pc = 0x21a044u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a048:
    // 0x21a048: 0x10400011
label_21a04c:
    if (ctx->pc == 0x21A04Cu) {
        ctx->pc = 0x21A04Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A050u;
        goto label_21a050;
    }
    ctx->pc = 0x21A048u;
    {
        const bool branch_taken_0x21a048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A04Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a048) {
            ctx->pc = 0x21A090u;
            goto label_21a090;
        }
    }
    ctx->pc = 0x21A050u;
label_21a050:
    // 0x21a050: 0x8c42d57c
    ctx->pc = 0x21a050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956412)));
label_21a054:
    // 0x21a054: 0x4410006
label_21a058:
    if (ctx->pc == 0x21A058u) {
        ctx->pc = 0x21A058u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A05Cu;
        goto label_21a05c;
    }
    ctx->pc = 0x21A054u;
    {
        const bool branch_taken_0x21a054 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21A058u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a054) {
            ctx->pc = 0x21A070u;
            goto label_21a070;
        }
    }
    ctx->pc = 0x21A05Cu;
label_21a05c:
    // 0x21a05c: 0x3c02003c
    ctx->pc = 0x21a05cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a060:
    // 0x21a060: 0xc0886ae
label_21a064:
    if (ctx->pc == 0x21A064u) {
        ctx->pc = 0x21A064u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956420)));
        ctx->pc = 0x21A068u;
        goto label_21a068;
    }
    ctx->pc = 0x21A060u;
    SET_GPR_U32(ctx, 31, 0x21A068u);
    ctx->pc = 0x21A064u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956420)));
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A068u; }
    }
    if (ctx->pc != 0x21A068u) { return; }
    ctx->pc = 0x21A068u;
label_21a068:
    // 0x21a068: 0x10000006
label_21a06c:
    if (ctx->pc == 0x21A06Cu) {
        ctx->pc = 0x21A06Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x21A070u;
        goto label_21a070;
    }
    ctx->pc = 0x21A068u;
    {
        const bool branch_taken_0x21a068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A06Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21a068) {
            ctx->pc = 0x21A084u;
            goto label_21a084;
        }
    }
    ctx->pc = 0x21A070u;
label_21a070:
    // 0x21a070: 0x24030001
    ctx->pc = 0x21a070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_21a074:
    // 0x21a074: 0x8c44d57c
    ctx->pc = 0x21a074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956412)));
label_21a078:
    // 0x21a078: 0xc0886ae
label_21a07c:
    if (ctx->pc == 0x21A07Cu) {
        ctx->pc = 0x21A07Cu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        ctx->pc = 0x21A080u;
        goto label_21a080;
    }
    ctx->pc = 0x21A078u;
    SET_GPR_U32(ctx, 31, 0x21A080u);
    ctx->pc = 0x21A07Cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A080u; }
    }
    if (ctx->pc != 0x21A080u) { return; }
    ctx->pc = 0x21A080u;
label_21a080:
    // 0x21a080: 0x3c020032
    ctx->pc = 0x21a080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21a084:
    // 0x21a084: 0xac40fe30
    ctx->pc = 0x21a084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
label_21a088:
    // 0x21a088: 0x3c02003c
    ctx->pc = 0x21a088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a08c:
    // 0x21a08c: 0xac40cef0
    ctx->pc = 0x21a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954736), GPR_U32(ctx, 0));
label_21a090:
    // 0x21a090: 0x3c02003c
    ctx->pc = 0x21a090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a094:
    // 0x21a094: 0x8c42cf08
    ctx->pc = 0x21a094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
label_21a098:
    // 0x21a098: 0x3c030100
    ctx->pc = 0x21a098u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
label_21a09c:
    // 0x21a09c: 0x431024
    ctx->pc = 0x21a09cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a0a0:
    // 0x21a0a0: 0x10400005
label_21a0a4:
    if (ctx->pc == 0x21A0A4u) {
        ctx->pc = 0x21A0A4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        ctx->pc = 0x21A0A8u;
        goto label_21a0a8;
    }
    ctx->pc = 0x21A0A0u;
    {
        const bool branch_taken_0x21a0a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A0A4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x21a0a0) {
            ctx->pc = 0x21A0B8u;
            goto label_21a0b8;
        }
    }
    ctx->pc = 0x21A0A8u;
label_21a0a8:
    // 0x21a0a8: 0xc088ac4
label_21a0ac:
    if (ctx->pc == 0x21A0ACu) {
        ctx->pc = 0x21A0B0u;
        goto label_21a0b0;
    }
    ctx->pc = 0x21A0A8u;
    SET_GPR_U32(ctx, 31, 0x21A0B0u);
    ctx->pc = 0x222B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        audio_stop_all_0x222b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A0B0u; }
    }
    if (ctx->pc != 0x21A0B0u) { return; }
    ctx->pc = 0x21A0B0u;
label_21a0b0:
    // 0x21a0b0: 0x3c02003c
    ctx->pc = 0x21a0b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a0b4:
    // 0x21a0b4: 0xac40d588
    ctx->pc = 0x21a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956424), GPR_U32(ctx, 0));
label_21a0b8:
    // 0x21a0b8: 0x202d
    ctx->pc = 0x21a0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a0bc:
    // 0x21a0bc: 0x24050001
    ctx->pc = 0x21a0bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_21a0c0:
    // 0x21a0c0: 0x8e06d56c
    ctx->pc = 0x21a0c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956396)));
label_21a0c4:
    // 0x21a0c4: 0x382d
    ctx->pc = 0x21a0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a0c8:
    // 0x21a0c8: 0xc085a1e
label_21a0cc:
    if (ctx->pc == 0x21A0CCu) {
        ctx->pc = 0x21A0CCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21A0D0u;
        goto label_21a0d0;
    }
    ctx->pc = 0x21A0C8u;
    SET_GPR_U32(ctx, 31, 0x21A0D0u);
    ctx->pc = 0x21A0CCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A0D0u; }
    }
    if (ctx->pc != 0x21A0D0u) { return; }
    ctx->pc = 0x21A0D0u;
label_21a0d0:
    // 0x21a0d0: 0x40182d
    ctx->pc = 0x21a0d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a0d4:
    // 0x21a0d4: 0x2c620005
    ctx->pc = 0x21a0d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_21a0d8:
    // 0x21a0d8: 0x10400036
label_21a0dc:
    if (ctx->pc == 0x21A0DCu) {
        ctx->pc = 0x21A0DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956396), GPR_U32(ctx, 3));
        ctx->pc = 0x21A0E0u;
        goto label_21a0e0;
    }
    ctx->pc = 0x21A0D8u;
    {
        const bool branch_taken_0x21a0d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A0DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956396), GPR_U32(ctx, 3));
        if (branch_taken_0x21a0d8) {
            ctx->pc = 0x21A1B4u;
            goto label_21a1b4;
        }
    }
    ctx->pc = 0x21A0E0u;
label_21a0e0:
    // 0x21a0e0: 0x3c02003a
    ctx->pc = 0x21a0e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_21a0e4:
    // 0x21a0e4: 0x24426240
    ctx->pc = 0x21a0e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25152));
label_21a0e8:
    // 0x21a0e8: 0x31880
    ctx->pc = 0x21a0e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_21a0ec:
    // 0x21a0ec: 0x621821
    ctx->pc = 0x21a0ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21a0f0:
    // 0x21a0f0: 0x8c620000
    ctx->pc = 0x21a0f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21a0f4:
    // 0x21a0f4: 0x400008
label_21a0f8:
    if (ctx->pc == 0x21A0F8u) {
        ctx->pc = 0x21A0FCu;
        goto label_21a0fc;
    }
    ctx->pc = 0x21A0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2196F8u: goto label_2196f8;
            case 0x2196FCu: goto label_2196fc;
            case 0x219700u: goto label_219700;
            case 0x219704u: goto label_219704;
            case 0x219708u: goto label_219708;
            case 0x21970Cu: goto label_21970c;
            case 0x219710u: goto label_219710;
            case 0x219714u: goto label_219714;
            case 0x219718u: goto label_219718;
            case 0x21971Cu: goto label_21971c;
            case 0x219720u: goto label_219720;
            case 0x219724u: goto label_219724;
            case 0x219728u: goto label_219728;
            case 0x21972Cu: goto label_21972c;
            case 0x219730u: goto label_219730;
            case 0x219734u: goto label_219734;
            case 0x219738u: goto label_219738;
            case 0x21973Cu: goto label_21973c;
            case 0x219740u: goto label_219740;
            case 0x219744u: goto label_219744;
            case 0x219748u: goto label_219748;
            case 0x21974Cu: goto label_21974c;
            case 0x219750u: goto label_219750;
            case 0x219754u: goto label_219754;
            case 0x219758u: goto label_219758;
            case 0x21975Cu: goto label_21975c;
            case 0x219760u: goto label_219760;
            case 0x219764u: goto label_219764;
            case 0x219768u: goto label_219768;
            case 0x21976Cu: goto label_21976c;
            case 0x219770u: goto label_219770;
            case 0x219774u: goto label_219774;
            case 0x219778u: goto label_219778;
            case 0x21977Cu: goto label_21977c;
            case 0x219780u: goto label_219780;
            case 0x219784u: goto label_219784;
            case 0x219788u: goto label_219788;
            case 0x21978Cu: goto label_21978c;
            case 0x219790u: goto label_219790;
            case 0x219794u: goto label_219794;
            case 0x219798u: goto label_219798;
            case 0x21979Cu: goto label_21979c;
            case 0x2197A0u: goto label_2197a0;
            case 0x2197A4u: goto label_2197a4;
            case 0x2197A8u: goto label_2197a8;
            case 0x2197ACu: goto label_2197ac;
            case 0x2197B0u: goto label_2197b0;
            case 0x2197B4u: goto label_2197b4;
            case 0x2197B8u: goto label_2197b8;
            case 0x2197BCu: goto label_2197bc;
            case 0x2197C0u: goto label_2197c0;
            case 0x2197C4u: goto label_2197c4;
            case 0x2197C8u: goto label_2197c8;
            case 0x2197CCu: goto label_2197cc;
            case 0x2197D0u: goto label_2197d0;
            case 0x2197D4u: goto label_2197d4;
            case 0x2197D8u: goto label_2197d8;
            case 0x2197DCu: goto label_2197dc;
            case 0x2197E0u: goto label_2197e0;
            case 0x2197E4u: goto label_2197e4;
            case 0x2197E8u: goto label_2197e8;
            case 0x2197ECu: goto label_2197ec;
            case 0x2197F0u: goto label_2197f0;
            case 0x2197F4u: goto label_2197f4;
            case 0x2197F8u: goto label_2197f8;
            case 0x2197FCu: goto label_2197fc;
            case 0x219800u: goto label_219800;
            case 0x219804u: goto label_219804;
            case 0x219808u: goto label_219808;
            case 0x21980Cu: goto label_21980c;
            case 0x219810u: goto label_219810;
            case 0x219814u: goto label_219814;
            case 0x219818u: goto label_219818;
            case 0x21981Cu: goto label_21981c;
            case 0x219820u: goto label_219820;
            case 0x219824u: goto label_219824;
            case 0x219828u: goto label_219828;
            case 0x21982Cu: goto label_21982c;
            case 0x219830u: goto label_219830;
            case 0x219834u: goto label_219834;
            case 0x219838u: goto label_219838;
            case 0x21983Cu: goto label_21983c;
            case 0x219840u: goto label_219840;
            case 0x219844u: goto label_219844;
            case 0x219848u: goto label_219848;
            case 0x21984Cu: goto label_21984c;
            case 0x219850u: goto label_219850;
            case 0x219854u: goto label_219854;
            case 0x219858u: goto label_219858;
            case 0x21985Cu: goto label_21985c;
            case 0x219860u: goto label_219860;
            case 0x219864u: goto label_219864;
            case 0x219868u: goto label_219868;
            case 0x21986Cu: goto label_21986c;
            case 0x219870u: goto label_219870;
            case 0x219874u: goto label_219874;
            case 0x219878u: goto label_219878;
            case 0x21987Cu: goto label_21987c;
            case 0x219880u: goto label_219880;
            case 0x219884u: goto label_219884;
            case 0x219888u: goto label_219888;
            case 0x21988Cu: goto label_21988c;
            case 0x219890u: goto label_219890;
            case 0x219894u: goto label_219894;
            case 0x219898u: goto label_219898;
            case 0x21989Cu: goto label_21989c;
            case 0x2198A0u: goto label_2198a0;
            case 0x2198A4u: goto label_2198a4;
            case 0x2198A8u: goto label_2198a8;
            case 0x2198ACu: goto label_2198ac;
            case 0x2198B0u: goto label_2198b0;
            case 0x2198B4u: goto label_2198b4;
            case 0x2198B8u: goto label_2198b8;
            case 0x2198BCu: goto label_2198bc;
            case 0x2198C0u: goto label_2198c0;
            case 0x2198C4u: goto label_2198c4;
            case 0x2198C8u: goto label_2198c8;
            case 0x2198CCu: goto label_2198cc;
            case 0x2198D0u: goto label_2198d0;
            case 0x2198D4u: goto label_2198d4;
            case 0x2198D8u: goto label_2198d8;
            case 0x2198DCu: goto label_2198dc;
            case 0x2198E0u: goto label_2198e0;
            case 0x2198E4u: goto label_2198e4;
            case 0x2198E8u: goto label_2198e8;
            case 0x2198ECu: goto label_2198ec;
            case 0x2198F0u: goto label_2198f0;
            case 0x2198F4u: goto label_2198f4;
            case 0x2198F8u: goto label_2198f8;
            case 0x2198FCu: goto label_2198fc;
            case 0x219900u: goto label_219900;
            case 0x219904u: goto label_219904;
            case 0x219908u: goto label_219908;
            case 0x21990Cu: goto label_21990c;
            case 0x219910u: goto label_219910;
            case 0x219914u: goto label_219914;
            case 0x219918u: goto label_219918;
            case 0x21991Cu: goto label_21991c;
            case 0x219920u: goto label_219920;
            case 0x219924u: goto label_219924;
            case 0x219928u: goto label_219928;
            case 0x21992Cu: goto label_21992c;
            case 0x219930u: goto label_219930;
            case 0x219934u: goto label_219934;
            case 0x219938u: goto label_219938;
            case 0x21993Cu: goto label_21993c;
            case 0x219940u: goto label_219940;
            case 0x219944u: goto label_219944;
            case 0x219948u: goto label_219948;
            case 0x21994Cu: goto label_21994c;
            case 0x219950u: goto label_219950;
            case 0x219954u: goto label_219954;
            case 0x219958u: goto label_219958;
            case 0x21995Cu: goto label_21995c;
            case 0x219960u: goto label_219960;
            case 0x219964u: goto label_219964;
            case 0x219968u: goto label_219968;
            case 0x21996Cu: goto label_21996c;
            case 0x219970u: goto label_219970;
            case 0x219974u: goto label_219974;
            case 0x219978u: goto label_219978;
            case 0x21997Cu: goto label_21997c;
            case 0x219980u: goto label_219980;
            case 0x219984u: goto label_219984;
            case 0x219988u: goto label_219988;
            case 0x21998Cu: goto label_21998c;
            case 0x219990u: goto label_219990;
            case 0x219994u: goto label_219994;
            case 0x219998u: goto label_219998;
            case 0x21999Cu: goto label_21999c;
            case 0x2199A0u: goto label_2199a0;
            case 0x2199A4u: goto label_2199a4;
            case 0x2199A8u: goto label_2199a8;
            case 0x2199ACu: goto label_2199ac;
            case 0x2199B0u: goto label_2199b0;
            case 0x2199B4u: goto label_2199b4;
            case 0x2199B8u: goto label_2199b8;
            case 0x2199BCu: goto label_2199bc;
            case 0x2199C0u: goto label_2199c0;
            case 0x2199C4u: goto label_2199c4;
            case 0x2199C8u: goto label_2199c8;
            case 0x2199CCu: goto label_2199cc;
            case 0x2199D0u: goto label_2199d0;
            case 0x2199D4u: goto label_2199d4;
            case 0x2199D8u: goto label_2199d8;
            case 0x2199DCu: goto label_2199dc;
            case 0x2199E0u: goto label_2199e0;
            case 0x2199E4u: goto label_2199e4;
            case 0x2199E8u: goto label_2199e8;
            case 0x2199ECu: goto label_2199ec;
            case 0x2199F0u: goto label_2199f0;
            case 0x2199F4u: goto label_2199f4;
            case 0x2199F8u: goto label_2199f8;
            case 0x2199FCu: goto label_2199fc;
            case 0x219A00u: goto label_219a00;
            case 0x219A04u: goto label_219a04;
            case 0x219A08u: goto label_219a08;
            case 0x219A0Cu: goto label_219a0c;
            case 0x219A10u: goto label_219a10;
            case 0x219A14u: goto label_219a14;
            case 0x219A18u: goto label_219a18;
            case 0x219A1Cu: goto label_219a1c;
            case 0x219A20u: goto label_219a20;
            case 0x219A24u: goto label_219a24;
            case 0x219A28u: goto label_219a28;
            case 0x219A2Cu: goto label_219a2c;
            case 0x219A30u: goto label_219a30;
            case 0x219A34u: goto label_219a34;
            case 0x219A38u: goto label_219a38;
            case 0x219A3Cu: goto label_219a3c;
            case 0x219A40u: goto label_219a40;
            case 0x219A44u: goto label_219a44;
            case 0x219A48u: goto label_219a48;
            case 0x219A4Cu: goto label_219a4c;
            case 0x219A50u: goto label_219a50;
            case 0x219A54u: goto label_219a54;
            case 0x219A58u: goto label_219a58;
            case 0x219A5Cu: goto label_219a5c;
            case 0x219A60u: goto label_219a60;
            case 0x219A64u: goto label_219a64;
            case 0x219A68u: goto label_219a68;
            case 0x219A6Cu: goto label_219a6c;
            case 0x219A70u: goto label_219a70;
            case 0x219A74u: goto label_219a74;
            case 0x219A78u: goto label_219a78;
            case 0x219A7Cu: goto label_219a7c;
            case 0x219A80u: goto label_219a80;
            case 0x219A84u: goto label_219a84;
            case 0x219A88u: goto label_219a88;
            case 0x219A8Cu: goto label_219a8c;
            case 0x219A90u: goto label_219a90;
            case 0x219A94u: goto label_219a94;
            case 0x219A98u: goto label_219a98;
            case 0x219A9Cu: goto label_219a9c;
            case 0x219AA0u: goto label_219aa0;
            case 0x219AA4u: goto label_219aa4;
            case 0x219AA8u: goto label_219aa8;
            case 0x219AACu: goto label_219aac;
            case 0x219AB0u: goto label_219ab0;
            case 0x219AB4u: goto label_219ab4;
            case 0x219AB8u: goto label_219ab8;
            case 0x219ABCu: goto label_219abc;
            case 0x219AC0u: goto label_219ac0;
            case 0x219AC4u: goto label_219ac4;
            case 0x219AC8u: goto label_219ac8;
            case 0x219ACCu: goto label_219acc;
            case 0x219AD0u: goto label_219ad0;
            case 0x219AD4u: goto label_219ad4;
            case 0x219AD8u: goto label_219ad8;
            case 0x219ADCu: goto label_219adc;
            case 0x219AE0u: goto label_219ae0;
            case 0x219AE4u: goto label_219ae4;
            case 0x219AE8u: goto label_219ae8;
            case 0x219AECu: goto label_219aec;
            case 0x219AF0u: goto label_219af0;
            case 0x219AF4u: goto label_219af4;
            case 0x219AF8u: goto label_219af8;
            case 0x219AFCu: goto label_219afc;
            case 0x219B00u: goto label_219b00;
            case 0x219B04u: goto label_219b04;
            case 0x219B08u: goto label_219b08;
            case 0x219B0Cu: goto label_219b0c;
            case 0x219B10u: goto label_219b10;
            case 0x219B14u: goto label_219b14;
            case 0x219B18u: goto label_219b18;
            case 0x219B1Cu: goto label_219b1c;
            case 0x219B20u: goto label_219b20;
            case 0x219B24u: goto label_219b24;
            case 0x219B28u: goto label_219b28;
            case 0x219B2Cu: goto label_219b2c;
            case 0x219B30u: goto label_219b30;
            case 0x219B34u: goto label_219b34;
            case 0x219B38u: goto label_219b38;
            case 0x219B3Cu: goto label_219b3c;
            case 0x219B40u: goto label_219b40;
            case 0x219B44u: goto label_219b44;
            case 0x219B48u: goto label_219b48;
            case 0x219B4Cu: goto label_219b4c;
            case 0x219B50u: goto label_219b50;
            case 0x219B54u: goto label_219b54;
            case 0x219B58u: goto label_219b58;
            case 0x219B5Cu: goto label_219b5c;
            case 0x219B60u: goto label_219b60;
            case 0x219B64u: goto label_219b64;
            case 0x219B68u: goto label_219b68;
            case 0x219B6Cu: goto label_219b6c;
            case 0x219B70u: goto label_219b70;
            case 0x219B74u: goto label_219b74;
            case 0x219B78u: goto label_219b78;
            case 0x219B7Cu: goto label_219b7c;
            case 0x219B80u: goto label_219b80;
            case 0x219B84u: goto label_219b84;
            case 0x219B88u: goto label_219b88;
            case 0x219B8Cu: goto label_219b8c;
            case 0x219B90u: goto label_219b90;
            case 0x219B94u: goto label_219b94;
            case 0x219B98u: goto label_219b98;
            case 0x219B9Cu: goto label_219b9c;
            case 0x219BA0u: goto label_219ba0;
            case 0x219BA4u: goto label_219ba4;
            case 0x219BA8u: goto label_219ba8;
            case 0x219BACu: goto label_219bac;
            case 0x219BB0u: goto label_219bb0;
            case 0x219BB4u: goto label_219bb4;
            case 0x219BB8u: goto label_219bb8;
            case 0x219BBCu: goto label_219bbc;
            case 0x219BC0u: goto label_219bc0;
            case 0x219BC4u: goto label_219bc4;
            case 0x219BC8u: goto label_219bc8;
            case 0x219BCCu: goto label_219bcc;
            case 0x219BD0u: goto label_219bd0;
            case 0x219BD4u: goto label_219bd4;
            case 0x219BD8u: goto label_219bd8;
            case 0x219BDCu: goto label_219bdc;
            case 0x219BE0u: goto label_219be0;
            case 0x219BE4u: goto label_219be4;
            case 0x219BE8u: goto label_219be8;
            case 0x219BECu: goto label_219bec;
            case 0x219BF0u: goto label_219bf0;
            case 0x219BF4u: goto label_219bf4;
            case 0x219BF8u: goto label_219bf8;
            case 0x219BFCu: goto label_219bfc;
            case 0x219C00u: goto label_219c00;
            case 0x219C04u: goto label_219c04;
            case 0x219C08u: goto label_219c08;
            case 0x219C0Cu: goto label_219c0c;
            case 0x219C10u: goto label_219c10;
            case 0x219C14u: goto label_219c14;
            case 0x219C18u: goto label_219c18;
            case 0x219C1Cu: goto label_219c1c;
            case 0x219C20u: goto label_219c20;
            case 0x219C24u: goto label_219c24;
            case 0x219C28u: goto label_219c28;
            case 0x219C2Cu: goto label_219c2c;
            case 0x219C30u: goto label_219c30;
            case 0x219C34u: goto label_219c34;
            case 0x219C38u: goto label_219c38;
            case 0x219C3Cu: goto label_219c3c;
            case 0x219C40u: goto label_219c40;
            case 0x219C44u: goto label_219c44;
            case 0x219C48u: goto label_219c48;
            case 0x219C4Cu: goto label_219c4c;
            case 0x219C50u: goto label_219c50;
            case 0x219C54u: goto label_219c54;
            case 0x219C58u: goto label_219c58;
            case 0x219C5Cu: goto label_219c5c;
            case 0x219C60u: goto label_219c60;
            case 0x219C64u: goto label_219c64;
            case 0x219C68u: goto label_219c68;
            case 0x219C6Cu: goto label_219c6c;
            case 0x219C70u: goto label_219c70;
            case 0x219C74u: goto label_219c74;
            case 0x219C78u: goto label_219c78;
            case 0x219C7Cu: goto label_219c7c;
            case 0x219C80u: goto label_219c80;
            case 0x219C84u: goto label_219c84;
            case 0x219C88u: goto label_219c88;
            case 0x219C8Cu: goto label_219c8c;
            case 0x219C90u: goto label_219c90;
            case 0x219C94u: goto label_219c94;
            case 0x219C98u: goto label_219c98;
            case 0x219C9Cu: goto label_219c9c;
            case 0x219CA0u: goto label_219ca0;
            case 0x219CA4u: goto label_219ca4;
            case 0x219CA8u: goto label_219ca8;
            case 0x219CACu: goto label_219cac;
            case 0x219CB0u: goto label_219cb0;
            case 0x219CB4u: goto label_219cb4;
            case 0x219CB8u: goto label_219cb8;
            case 0x219CBCu: goto label_219cbc;
            case 0x219CC0u: goto label_219cc0;
            case 0x219CC4u: goto label_219cc4;
            case 0x219CC8u: goto label_219cc8;
            case 0x219CCCu: goto label_219ccc;
            case 0x219CD0u: goto label_219cd0;
            case 0x219CD4u: goto label_219cd4;
            case 0x219CD8u: goto label_219cd8;
            case 0x219CDCu: goto label_219cdc;
            case 0x219CE0u: goto label_219ce0;
            case 0x219CE4u: goto label_219ce4;
            case 0x219CE8u: goto label_219ce8;
            case 0x219CECu: goto label_219cec;
            case 0x219CF0u: goto label_219cf0;
            case 0x219CF4u: goto label_219cf4;
            case 0x219CF8u: goto label_219cf8;
            case 0x219CFCu: goto label_219cfc;
            case 0x219D00u: goto label_219d00;
            case 0x219D04u: goto label_219d04;
            case 0x219D08u: goto label_219d08;
            case 0x219D0Cu: goto label_219d0c;
            case 0x219D10u: goto label_219d10;
            case 0x219D14u: goto label_219d14;
            case 0x219D18u: goto label_219d18;
            case 0x219D1Cu: goto label_219d1c;
            case 0x219D20u: goto label_219d20;
            case 0x219D24u: goto label_219d24;
            case 0x219D28u: goto label_219d28;
            case 0x219D2Cu: goto label_219d2c;
            case 0x219D30u: goto label_219d30;
            case 0x219D34u: goto label_219d34;
            case 0x219D38u: goto label_219d38;
            case 0x219D3Cu: goto label_219d3c;
            case 0x219D40u: goto label_219d40;
            case 0x219D44u: goto label_219d44;
            case 0x219D48u: goto label_219d48;
            case 0x219D4Cu: goto label_219d4c;
            case 0x219D50u: goto label_219d50;
            case 0x219D54u: goto label_219d54;
            case 0x219D58u: goto label_219d58;
            case 0x219D5Cu: goto label_219d5c;
            case 0x219D60u: goto label_219d60;
            case 0x219D64u: goto label_219d64;
            case 0x219D68u: goto label_219d68;
            case 0x219D6Cu: goto label_219d6c;
            case 0x219D70u: goto label_219d70;
            case 0x219D74u: goto label_219d74;
            case 0x219D78u: goto label_219d78;
            case 0x219D7Cu: goto label_219d7c;
            case 0x219D80u: goto label_219d80;
            case 0x219D84u: goto label_219d84;
            case 0x219D88u: goto label_219d88;
            case 0x219D8Cu: goto label_219d8c;
            case 0x219D90u: goto label_219d90;
            case 0x219D94u: goto label_219d94;
            case 0x219D98u: goto label_219d98;
            case 0x219D9Cu: goto label_219d9c;
            case 0x219DA0u: goto label_219da0;
            case 0x219DA4u: goto label_219da4;
            case 0x219DA8u: goto label_219da8;
            case 0x219DACu: goto label_219dac;
            case 0x219DB0u: goto label_219db0;
            case 0x219DB4u: goto label_219db4;
            case 0x219DB8u: goto label_219db8;
            case 0x219DBCu: goto label_219dbc;
            case 0x219DC0u: goto label_219dc0;
            case 0x219DC4u: goto label_219dc4;
            case 0x219DC8u: goto label_219dc8;
            case 0x219DCCu: goto label_219dcc;
            case 0x219DD0u: goto label_219dd0;
            case 0x219DD4u: goto label_219dd4;
            case 0x219DD8u: goto label_219dd8;
            case 0x219DDCu: goto label_219ddc;
            case 0x219DE0u: goto label_219de0;
            case 0x219DE4u: goto label_219de4;
            case 0x219DE8u: goto label_219de8;
            case 0x219DECu: goto label_219dec;
            case 0x219DF0u: goto label_219df0;
            case 0x219DF4u: goto label_219df4;
            case 0x219DF8u: goto label_219df8;
            case 0x219DFCu: goto label_219dfc;
            case 0x219E00u: goto label_219e00;
            case 0x219E04u: goto label_219e04;
            case 0x219E08u: goto label_219e08;
            case 0x219E0Cu: goto label_219e0c;
            case 0x219E10u: goto label_219e10;
            case 0x219E14u: goto label_219e14;
            case 0x219E18u: goto label_219e18;
            case 0x219E1Cu: goto label_219e1c;
            case 0x219E20u: goto label_219e20;
            case 0x219E24u: goto label_219e24;
            case 0x219E28u: goto label_219e28;
            case 0x219E2Cu: goto label_219e2c;
            case 0x219E30u: goto label_219e30;
            case 0x219E34u: goto label_219e34;
            case 0x219E38u: goto label_219e38;
            case 0x219E3Cu: goto label_219e3c;
            case 0x219E40u: goto label_219e40;
            case 0x219E44u: goto label_219e44;
            case 0x219E48u: goto label_219e48;
            case 0x219E4Cu: goto label_219e4c;
            case 0x219E50u: goto label_219e50;
            case 0x219E54u: goto label_219e54;
            case 0x219E58u: goto label_219e58;
            case 0x219E5Cu: goto label_219e5c;
            case 0x219E60u: goto label_219e60;
            case 0x219E64u: goto label_219e64;
            case 0x219E68u: goto label_219e68;
            case 0x219E6Cu: goto label_219e6c;
            case 0x219E70u: goto label_219e70;
            case 0x219E74u: goto label_219e74;
            case 0x219E78u: goto label_219e78;
            case 0x219E7Cu: goto label_219e7c;
            case 0x219E80u: goto label_219e80;
            case 0x219E84u: goto label_219e84;
            case 0x219E88u: goto label_219e88;
            case 0x219E8Cu: goto label_219e8c;
            case 0x219E90u: goto label_219e90;
            case 0x219E94u: goto label_219e94;
            case 0x219E98u: goto label_219e98;
            case 0x219E9Cu: goto label_219e9c;
            case 0x219EA0u: goto label_219ea0;
            case 0x219EA4u: goto label_219ea4;
            case 0x219EA8u: goto label_219ea8;
            case 0x219EACu: goto label_219eac;
            case 0x219EB0u: goto label_219eb0;
            case 0x219EB4u: goto label_219eb4;
            case 0x219EB8u: goto label_219eb8;
            case 0x219EBCu: goto label_219ebc;
            case 0x219EC0u: goto label_219ec0;
            case 0x219EC4u: goto label_219ec4;
            case 0x219EC8u: goto label_219ec8;
            case 0x219ECCu: goto label_219ecc;
            case 0x219ED0u: goto label_219ed0;
            case 0x219ED4u: goto label_219ed4;
            case 0x219ED8u: goto label_219ed8;
            case 0x219EDCu: goto label_219edc;
            case 0x219EE0u: goto label_219ee0;
            case 0x219EE4u: goto label_219ee4;
            case 0x219EE8u: goto label_219ee8;
            case 0x219EECu: goto label_219eec;
            case 0x219EF0u: goto label_219ef0;
            case 0x219EF4u: goto label_219ef4;
            case 0x219EF8u: goto label_219ef8;
            case 0x219EFCu: goto label_219efc;
            case 0x219F00u: goto label_219f00;
            case 0x219F04u: goto label_219f04;
            case 0x219F08u: goto label_219f08;
            case 0x219F0Cu: goto label_219f0c;
            case 0x219F10u: goto label_219f10;
            case 0x219F14u: goto label_219f14;
            case 0x219F18u: goto label_219f18;
            case 0x219F1Cu: goto label_219f1c;
            case 0x219F20u: goto label_219f20;
            case 0x219F24u: goto label_219f24;
            case 0x219F28u: goto label_219f28;
            case 0x219F2Cu: goto label_219f2c;
            case 0x219F30u: goto label_219f30;
            case 0x219F34u: goto label_219f34;
            case 0x219F38u: goto label_219f38;
            case 0x219F3Cu: goto label_219f3c;
            case 0x219F40u: goto label_219f40;
            case 0x219F44u: goto label_219f44;
            case 0x219F48u: goto label_219f48;
            case 0x219F4Cu: goto label_219f4c;
            case 0x219F50u: goto label_219f50;
            case 0x219F54u: goto label_219f54;
            case 0x219F58u: goto label_219f58;
            case 0x219F5Cu: goto label_219f5c;
            case 0x219F60u: goto label_219f60;
            case 0x219F64u: goto label_219f64;
            case 0x219F68u: goto label_219f68;
            case 0x219F6Cu: goto label_219f6c;
            case 0x219F70u: goto label_219f70;
            case 0x219F74u: goto label_219f74;
            case 0x219F78u: goto label_219f78;
            case 0x219F7Cu: goto label_219f7c;
            case 0x219F80u: goto label_219f80;
            case 0x219F84u: goto label_219f84;
            case 0x219F88u: goto label_219f88;
            case 0x219F8Cu: goto label_219f8c;
            case 0x219F90u: goto label_219f90;
            case 0x219F94u: goto label_219f94;
            case 0x219F98u: goto label_219f98;
            case 0x219F9Cu: goto label_219f9c;
            case 0x219FA0u: goto label_219fa0;
            case 0x219FA4u: goto label_219fa4;
            case 0x219FA8u: goto label_219fa8;
            case 0x219FACu: goto label_219fac;
            case 0x219FB0u: goto label_219fb0;
            case 0x219FB4u: goto label_219fb4;
            case 0x219FB8u: goto label_219fb8;
            case 0x219FBCu: goto label_219fbc;
            case 0x219FC0u: goto label_219fc0;
            case 0x219FC4u: goto label_219fc4;
            case 0x219FC8u: goto label_219fc8;
            case 0x219FCCu: goto label_219fcc;
            case 0x219FD0u: goto label_219fd0;
            case 0x219FD4u: goto label_219fd4;
            case 0x219FD8u: goto label_219fd8;
            case 0x219FDCu: goto label_219fdc;
            case 0x219FE0u: goto label_219fe0;
            case 0x219FE4u: goto label_219fe4;
            case 0x219FE8u: goto label_219fe8;
            case 0x219FECu: goto label_219fec;
            case 0x219FF0u: goto label_219ff0;
            case 0x219FF4u: goto label_219ff4;
            case 0x219FF8u: goto label_219ff8;
            case 0x219FFCu: goto label_219ffc;
            case 0x21A000u: goto label_21a000;
            case 0x21A004u: goto label_21a004;
            case 0x21A008u: goto label_21a008;
            case 0x21A00Cu: goto label_21a00c;
            case 0x21A010u: goto label_21a010;
            case 0x21A014u: goto label_21a014;
            case 0x21A018u: goto label_21a018;
            case 0x21A01Cu: goto label_21a01c;
            case 0x21A020u: goto label_21a020;
            case 0x21A024u: goto label_21a024;
            case 0x21A028u: goto label_21a028;
            case 0x21A02Cu: goto label_21a02c;
            case 0x21A030u: goto label_21a030;
            case 0x21A034u: goto label_21a034;
            case 0x21A038u: goto label_21a038;
            case 0x21A03Cu: goto label_21a03c;
            case 0x21A040u: goto label_21a040;
            case 0x21A044u: goto label_21a044;
            case 0x21A048u: goto label_21a048;
            case 0x21A04Cu: goto label_21a04c;
            case 0x21A050u: goto label_21a050;
            case 0x21A054u: goto label_21a054;
            case 0x21A058u: goto label_21a058;
            case 0x21A05Cu: goto label_21a05c;
            case 0x21A060u: goto label_21a060;
            case 0x21A064u: goto label_21a064;
            case 0x21A068u: goto label_21a068;
            case 0x21A06Cu: goto label_21a06c;
            case 0x21A070u: goto label_21a070;
            case 0x21A074u: goto label_21a074;
            case 0x21A078u: goto label_21a078;
            case 0x21A07Cu: goto label_21a07c;
            case 0x21A080u: goto label_21a080;
            case 0x21A084u: goto label_21a084;
            case 0x21A088u: goto label_21a088;
            case 0x21A08Cu: goto label_21a08c;
            case 0x21A090u: goto label_21a090;
            case 0x21A094u: goto label_21a094;
            case 0x21A098u: goto label_21a098;
            case 0x21A09Cu: goto label_21a09c;
            case 0x21A0A0u: goto label_21a0a0;
            case 0x21A0A4u: goto label_21a0a4;
            case 0x21A0A8u: goto label_21a0a8;
            case 0x21A0ACu: goto label_21a0ac;
            case 0x21A0B0u: goto label_21a0b0;
            case 0x21A0B4u: goto label_21a0b4;
            case 0x21A0B8u: goto label_21a0b8;
            case 0x21A0BCu: goto label_21a0bc;
            case 0x21A0C0u: goto label_21a0c0;
            case 0x21A0C4u: goto label_21a0c4;
            case 0x21A0C8u: goto label_21a0c8;
            case 0x21A0CCu: goto label_21a0cc;
            case 0x21A0D0u: goto label_21a0d0;
            case 0x21A0D4u: goto label_21a0d4;
            case 0x21A0D8u: goto label_21a0d8;
            case 0x21A0DCu: goto label_21a0dc;
            case 0x21A0E0u: goto label_21a0e0;
            case 0x21A0E4u: goto label_21a0e4;
            case 0x21A0E8u: goto label_21a0e8;
            case 0x21A0ECu: goto label_21a0ec;
            case 0x21A0F0u: goto label_21a0f0;
            case 0x21A0F4u: goto label_21a0f4;
            case 0x21A0F8u: goto label_21a0f8;
            case 0x21A0FCu: goto label_21a0fc;
            case 0x21A100u: goto label_21a100;
            case 0x21A104u: goto label_21a104;
            case 0x21A108u: goto label_21a108;
            case 0x21A10Cu: goto label_21a10c;
            case 0x21A110u: goto label_21a110;
            case 0x21A114u: goto label_21a114;
            case 0x21A118u: goto label_21a118;
            case 0x21A11Cu: goto label_21a11c;
            case 0x21A120u: goto label_21a120;
            case 0x21A124u: goto label_21a124;
            case 0x21A128u: goto label_21a128;
            case 0x21A12Cu: goto label_21a12c;
            case 0x21A130u: goto label_21a130;
            case 0x21A134u: goto label_21a134;
            case 0x21A138u: goto label_21a138;
            case 0x21A13Cu: goto label_21a13c;
            case 0x21A140u: goto label_21a140;
            case 0x21A144u: goto label_21a144;
            case 0x21A148u: goto label_21a148;
            case 0x21A14Cu: goto label_21a14c;
            case 0x21A150u: goto label_21a150;
            case 0x21A154u: goto label_21a154;
            case 0x21A158u: goto label_21a158;
            case 0x21A15Cu: goto label_21a15c;
            case 0x21A160u: goto label_21a160;
            case 0x21A164u: goto label_21a164;
            case 0x21A168u: goto label_21a168;
            case 0x21A16Cu: goto label_21a16c;
            case 0x21A170u: goto label_21a170;
            case 0x21A174u: goto label_21a174;
            case 0x21A178u: goto label_21a178;
            case 0x21A17Cu: goto label_21a17c;
            case 0x21A180u: goto label_21a180;
            case 0x21A184u: goto label_21a184;
            case 0x21A188u: goto label_21a188;
            case 0x21A18Cu: goto label_21a18c;
            case 0x21A190u: goto label_21a190;
            case 0x21A194u: goto label_21a194;
            case 0x21A198u: goto label_21a198;
            case 0x21A19Cu: goto label_21a19c;
            case 0x21A1A0u: goto label_21a1a0;
            case 0x21A1A4u: goto label_21a1a4;
            case 0x21A1A8u: goto label_21a1a8;
            case 0x21A1ACu: goto label_21a1ac;
            case 0x21A1B0u: goto label_21a1b0;
            case 0x21A1B4u: goto label_21a1b4;
            case 0x21A1B8u: goto label_21a1b8;
            case 0x21A1BCu: goto label_21a1bc;
            case 0x21A1C0u: goto label_21a1c0;
            case 0x21A1C4u: goto label_21a1c4;
            case 0x21A1C8u: goto label_21a1c8;
            case 0x21A1CCu: goto label_21a1cc;
            case 0x21A1D0u: goto label_21a1d0;
            case 0x21A1D4u: goto label_21a1d4;
            case 0x21A1D8u: goto label_21a1d8;
            case 0x21A1DCu: goto label_21a1dc;
            case 0x21A1E0u: goto label_21a1e0;
            case 0x21A1E4u: goto label_21a1e4;
            case 0x21A1E8u: goto label_21a1e8;
            case 0x21A1ECu: goto label_21a1ec;
            case 0x21A1F0u: goto label_21a1f0;
            case 0x21A1F4u: goto label_21a1f4;
            case 0x21A1F8u: goto label_21a1f8;
            case 0x21A1FCu: goto label_21a1fc;
            case 0x21A200u: goto label_21a200;
            case 0x21A204u: goto label_21a204;
            case 0x21A208u: goto label_21a208;
            case 0x21A20Cu: goto label_21a20c;
            case 0x21A210u: goto label_21a210;
            case 0x21A214u: goto label_21a214;
            case 0x21A218u: goto label_21a218;
            case 0x21A21Cu: goto label_21a21c;
            case 0x21A220u: goto label_21a220;
            case 0x21A224u: goto label_21a224;
            case 0x21A228u: goto label_21a228;
            case 0x21A22Cu: goto label_21a22c;
            case 0x21A230u: goto label_21a230;
            case 0x21A234u: goto label_21a234;
            case 0x21A238u: goto label_21a238;
            case 0x21A23Cu: goto label_21a23c;
            case 0x21A240u: goto label_21a240;
            case 0x21A244u: goto label_21a244;
            case 0x21A248u: goto label_21a248;
            case 0x21A24Cu: goto label_21a24c;
            case 0x21A250u: goto label_21a250;
            case 0x21A254u: goto label_21a254;
            case 0x21A258u: goto label_21a258;
            case 0x21A25Cu: goto label_21a25c;
            case 0x21A260u: goto label_21a260;
            case 0x21A264u: goto label_21a264;
            case 0x21A268u: goto label_21a268;
            case 0x21A26Cu: goto label_21a26c;
            case 0x21A270u: goto label_21a270;
            case 0x21A274u: goto label_21a274;
            case 0x21A278u: goto label_21a278;
            case 0x21A27Cu: goto label_21a27c;
            case 0x21A280u: goto label_21a280;
            case 0x21A284u: goto label_21a284;
            case 0x21A288u: goto label_21a288;
            case 0x21A28Cu: goto label_21a28c;
            case 0x21A290u: goto label_21a290;
            case 0x21A294u: goto label_21a294;
            case 0x21A298u: goto label_21a298;
            case 0x21A29Cu: goto label_21a29c;
            case 0x21A2A0u: goto label_21a2a0;
            case 0x21A2A4u: goto label_21a2a4;
            case 0x21A2A8u: goto label_21a2a8;
            case 0x21A2ACu: goto label_21a2ac;
            case 0x21A2B0u: goto label_21a2b0;
            case 0x21A2B4u: goto label_21a2b4;
            case 0x21A2B8u: goto label_21a2b8;
            case 0x21A2BCu: goto label_21a2bc;
            case 0x21A2C0u: goto label_21a2c0;
            case 0x21A2C4u: goto label_21a2c4;
            case 0x21A2C8u: goto label_21a2c8;
            case 0x21A2CCu: goto label_21a2cc;
            case 0x21A2D0u: goto label_21a2d0;
            case 0x21A2D4u: goto label_21a2d4;
            case 0x21A2D8u: goto label_21a2d8;
            case 0x21A2DCu: goto label_21a2dc;
            case 0x21A2E0u: goto label_21a2e0;
            case 0x21A2E4u: goto label_21a2e4;
            case 0x21A2E8u: goto label_21a2e8;
            case 0x21A2ECu: goto label_21a2ec;
            case 0x21A2F0u: goto label_21a2f0;
            case 0x21A2F4u: goto label_21a2f4;
            case 0x21A2F8u: goto label_21a2f8;
            case 0x21A2FCu: goto label_21a2fc;
            case 0x21A300u: goto label_21a300;
            case 0x21A304u: goto label_21a304;
            case 0x21A308u: goto label_21a308;
            case 0x21A30Cu: goto label_21a30c;
            case 0x21A310u: goto label_21a310;
            case 0x21A314u: goto label_21a314;
            case 0x21A318u: goto label_21a318;
            case 0x21A31Cu: goto label_21a31c;
            case 0x21A320u: goto label_21a320;
            case 0x21A324u: goto label_21a324;
            case 0x21A328u: goto label_21a328;
            case 0x21A32Cu: goto label_21a32c;
            case 0x21A330u: goto label_21a330;
            case 0x21A334u: goto label_21a334;
            case 0x21A338u: goto label_21a338;
            case 0x21A33Cu: goto label_21a33c;
            case 0x21A340u: goto label_21a340;
            case 0x21A344u: goto label_21a344;
            case 0x21A348u: goto label_21a348;
            case 0x21A34Cu: goto label_21a34c;
            case 0x21A350u: goto label_21a350;
            case 0x21A354u: goto label_21a354;
            case 0x21A358u: goto label_21a358;
            case 0x21A35Cu: goto label_21a35c;
            case 0x21A360u: goto label_21a360;
            case 0x21A364u: goto label_21a364;
            case 0x21A368u: goto label_21a368;
            case 0x21A36Cu: goto label_21a36c;
            case 0x21A370u: goto label_21a370;
            case 0x21A374u: goto label_21a374;
            case 0x21A378u: goto label_21a378;
            case 0x21A37Cu: goto label_21a37c;
            case 0x21A380u: goto label_21a380;
            case 0x21A384u: goto label_21a384;
            case 0x21A388u: goto label_21a388;
            case 0x21A38Cu: goto label_21a38c;
            case 0x21A390u: goto label_21a390;
            case 0x21A394u: goto label_21a394;
            case 0x21A398u: goto label_21a398;
            case 0x21A39Cu: goto label_21a39c;
            case 0x21A3A0u: goto label_21a3a0;
            case 0x21A3A4u: goto label_21a3a4;
            case 0x21A3A8u: goto label_21a3a8;
            case 0x21A3ACu: goto label_21a3ac;
            case 0x21A3B0u: goto label_21a3b0;
            case 0x21A3B4u: goto label_21a3b4;
            case 0x21A3B8u: goto label_21a3b8;
            case 0x21A3BCu: goto label_21a3bc;
            case 0x21A3C0u: goto label_21a3c0;
            case 0x21A3C4u: goto label_21a3c4;
            case 0x21A3C8u: goto label_21a3c8;
            case 0x21A3CCu: goto label_21a3cc;
            case 0x21A3D0u: goto label_21a3d0;
            case 0x21A3D4u: goto label_21a3d4;
            case 0x21A3D8u: goto label_21a3d8;
            case 0x21A3DCu: goto label_21a3dc;
            case 0x21A3E0u: goto label_21a3e0;
            case 0x21A3E4u: goto label_21a3e4;
            case 0x21A3E8u: goto label_21a3e8;
            case 0x21A3ECu: goto label_21a3ec;
            case 0x21A3F0u: goto label_21a3f0;
            case 0x21A3F4u: goto label_21a3f4;
            case 0x21A3F8u: goto label_21a3f8;
            case 0x21A3FCu: goto label_21a3fc;
            case 0x21A400u: goto label_21a400;
            case 0x21A404u: goto label_21a404;
            case 0x21A408u: goto label_21a408;
            case 0x21A40Cu: goto label_21a40c;
            case 0x21A410u: goto label_21a410;
            case 0x21A414u: goto label_21a414;
            case 0x21A418u: goto label_21a418;
            case 0x21A41Cu: goto label_21a41c;
            case 0x21A420u: goto label_21a420;
            case 0x21A424u: goto label_21a424;
            case 0x21A428u: goto label_21a428;
            case 0x21A42Cu: goto label_21a42c;
            case 0x21A430u: goto label_21a430;
            case 0x21A434u: goto label_21a434;
            case 0x21A438u: goto label_21a438;
            case 0x21A43Cu: goto label_21a43c;
            case 0x21A440u: goto label_21a440;
            case 0x21A444u: goto label_21a444;
            case 0x21A448u: goto label_21a448;
            case 0x21A44Cu: goto label_21a44c;
            case 0x21A450u: goto label_21a450;
            case 0x21A454u: goto label_21a454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A0FCu;
label_21a0fc:
    // 0x21a0fc: 0x3c10003c
    ctx->pc = 0x21a0fcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_21a100:
    // 0x21a100: 0x24040001
    ctx->pc = 0x21a100u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_21a104:
    // 0x21a104: 0x24050001
    ctx->pc = 0x21a104u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_21a108:
    // 0x21a108: 0x8e06d570
    ctx->pc = 0x21a108u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956400)));
label_21a10c:
    // 0x21a10c: 0x382d
    ctx->pc = 0x21a10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a110:
    // 0x21a110: 0xc085a1e
label_21a114:
    if (ctx->pc == 0x21A114u) {
        ctx->pc = 0x21A114u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x21A118u;
        goto label_21a118;
    }
    ctx->pc = 0x21A110u;
    SET_GPR_U32(ctx, 31, 0x21A118u);
    ctx->pc = 0x21A114u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A118u; }
    }
    if (ctx->pc != 0x21A118u) { return; }
    ctx->pc = 0x21A118u;
label_21a118:
    // 0x21a118: 0x10000026
label_21a11c:
    if (ctx->pc == 0x21A11Cu) {
        ctx->pc = 0x21A11Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956400), GPR_U32(ctx, 2));
        ctx->pc = 0x21A120u;
        goto label_21a120;
    }
    ctx->pc = 0x21A118u;
    {
        const bool branch_taken_0x21a118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A11Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956400), GPR_U32(ctx, 2));
        if (branch_taken_0x21a118) {
            ctx->pc = 0x21A1B4u;
            goto label_21a1b4;
        }
    }
    ctx->pc = 0x21A120u;
label_21a120:
    // 0x21a120: 0x3c10003c
    ctx->pc = 0x21a120u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_21a124:
    // 0x21a124: 0x24040001
    ctx->pc = 0x21a124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_21a128:
    // 0x21a128: 0x24050001
    ctx->pc = 0x21a128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_21a12c:
    // 0x21a12c: 0x8e06d574
    ctx->pc = 0x21a12cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956404)));
label_21a130:
    // 0x21a130: 0x382d
    ctx->pc = 0x21a130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a134:
    // 0x21a134: 0xc085a1e
label_21a138:
    if (ctx->pc == 0x21A138u) {
        ctx->pc = 0x21A138u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x21A13Cu;
        goto label_21a13c;
    }
    ctx->pc = 0x21A134u;
    SET_GPR_U32(ctx, 31, 0x21A13Cu);
    ctx->pc = 0x21A138u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A13Cu; }
    }
    if (ctx->pc != 0x21A13Cu) { return; }
    ctx->pc = 0x21A13Cu;
label_21a13c:
    // 0x21a13c: 0x1000001d
label_21a140:
    if (ctx->pc == 0x21A140u) {
        ctx->pc = 0x21A140u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956404), GPR_U32(ctx, 2));
        ctx->pc = 0x21A144u;
        goto label_21a144;
    }
    ctx->pc = 0x21A13Cu;
    {
        const bool branch_taken_0x21a13c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A140u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956404), GPR_U32(ctx, 2));
        if (branch_taken_0x21a13c) {
            ctx->pc = 0x21A1B4u;
            goto label_21a1b4;
        }
    }
    ctx->pc = 0x21A144u;
label_21a144:
    // 0x21a144: 0x3c02003c
    ctx->pc = 0x21a144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a148:
    // 0x21a148: 0x24040001
    ctx->pc = 0x21a148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_21a14c:
    // 0x21a14c: 0x24050001
    ctx->pc = 0x21a14cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_21a150:
    // 0x21a150: 0x8c46d578
    ctx->pc = 0x21a150u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294956408)));
label_21a154:
    // 0x21a154: 0x382d
    ctx->pc = 0x21a154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a158:
    // 0x21a158: 0xc085a1e
label_21a15c:
    if (ctx->pc == 0x21A15Cu) {
        ctx->pc = 0x21A15Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x21A160u;
        goto label_21a160;
    }
    ctx->pc = 0x21A158u;
    SET_GPR_U32(ctx, 31, 0x21A160u);
    ctx->pc = 0x21A15Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A160u; }
    }
    if (ctx->pc != 0x21A160u) { return; }
    ctx->pc = 0x21A160u;
label_21a160:
    // 0x21a160: 0xc08640a
label_21a164:
    if (ctx->pc == 0x21A164u) {
        ctx->pc = 0x21A164u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21A168u;
        goto label_21a168;
    }
    ctx->pc = 0x21A160u;
    SET_GPR_U32(ctx, 31, 0x21A168u);
    ctx->pc = 0x21A164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x219028u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudSetMasterVol_0x219028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A168u; }
    }
    if (ctx->pc != 0x21A168u) { return; }
    ctx->pc = 0x21A168u;
label_21a168:
    // 0x21a168: 0x10000013
label_21a16c:
    if (ctx->pc == 0x21A16Cu) {
        ctx->pc = 0x21A16Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A170u;
        goto label_21a170;
    }
    ctx->pc = 0x21A168u;
    {
        const bool branch_taken_0x21a168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A16Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a168) {
            ctx->pc = 0x21A1B8u;
            goto label_21a1b8;
        }
    }
    ctx->pc = 0x21A170u;
label_21a170:
    // 0x21a170: 0x3c10003c
    ctx->pc = 0x21a170u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_21a174:
    // 0x21a174: 0x24040001
    ctx->pc = 0x21a174u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_21a178:
    // 0x21a178: 0x24050001
    ctx->pc = 0x21a178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_21a17c:
    // 0x21a17c: 0x8e06d57c
    ctx->pc = 0x21a17cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956412)));
label_21a180:
    // 0x21a180: 0x2407ffff
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21a184:
    // 0x21a184: 0xc085a1e
label_21a188:
    if (ctx->pc == 0x21A188u) {
        ctx->pc = 0x21A188u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x21A18Cu;
        goto label_21a18c;
    }
    ctx->pc = 0x21A184u;
    SET_GPR_U32(ctx, 31, 0x21A18Cu);
    ctx->pc = 0x21A188u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A18Cu; }
    }
    if (ctx->pc != 0x21A18Cu) { return; }
    ctx->pc = 0x21A18Cu;
label_21a18c:
    // 0x21a18c: 0x10000009
label_21a190:
    if (ctx->pc == 0x21A190u) {
        ctx->pc = 0x21A190u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956412), GPR_U32(ctx, 2));
        ctx->pc = 0x21A194u;
        goto label_21a194;
    }
    ctx->pc = 0x21A18Cu;
    {
        const bool branch_taken_0x21a18c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A190u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294956412), GPR_U32(ctx, 2));
        if (branch_taken_0x21a18c) {
            ctx->pc = 0x21A1B4u;
            goto label_21a1b4;
        }
    }
    ctx->pc = 0x21A194u;
label_21a194:
    // 0x21a194: 0x3c10003c
    ctx->pc = 0x21a194u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_21a198:
    // 0x21a198: 0x24040001
    ctx->pc = 0x21a198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_21a19c:
    // 0x21a19c: 0x24050001
    ctx->pc = 0x21a19cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_21a1a0:
    // 0x21a1a0: 0x8e06d580
    ctx->pc = 0x21a1a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294956416)));
label_21a1a4:
    // 0x21a1a4: 0x382d
    ctx->pc = 0x21a1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a1a8:
    // 0x21a1a8: 0xc085a1e
label_21a1ac:
    if (ctx->pc == 0x21A1ACu) {
        ctx->pc = 0x21A1ACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x21A1B0u;
        goto label_21a1b0;
    }
    ctx->pc = 0x21A1A8u;
    SET_GPR_U32(ctx, 31, 0x21A1B0u);
    ctx->pc = 0x21A1ACu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 127));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A1B0u; }
    }
    if (ctx->pc != 0x21A1B0u) { return; }
    ctx->pc = 0x21A1B0u;
label_21a1b0:
    // 0x21a1b0: 0xae02d580
    ctx->pc = 0x21a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956416), GPR_U32(ctx, 2));
label_21a1b4:
    // 0x21a1b4: 0x3c02003c
    ctx->pc = 0x21a1b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a1b8:
    // 0x21a1b8: 0x8c42cf0c
    ctx->pc = 0x21a1b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954764)));
label_21a1bc:
    // 0x21a1bc: 0x3c030400
    ctx->pc = 0x21a1bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
label_21a1c0:
    // 0x21a1c0: 0x431024
    ctx->pc = 0x21a1c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a1c4:
    // 0x21a1c4: 0x1040001d
label_21a1c8:
    if (ctx->pc == 0x21A1C8u) {
        ctx->pc = 0x21A1C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A1CCu;
        goto label_21a1cc;
    }
    ctx->pc = 0x21A1C4u;
    {
        const bool branch_taken_0x21a1c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A1C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a1c4) {
            ctx->pc = 0x21A23Cu;
            goto label_21a23c;
        }
    }
    ctx->pc = 0x21A1CCu;
label_21a1cc:
    // 0x21a1cc: 0x8c43d56c
    ctx->pc = 0x21a1ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956396)));
label_21a1d0:
    // 0x21a1d0: 0x2c620005
    ctx->pc = 0x21a1d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_21a1d4:
    // 0x21a1d4: 0x10400019
label_21a1d8:
    if (ctx->pc == 0x21A1D8u) {
        ctx->pc = 0x21A1D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x21A1DCu;
        goto label_21a1dc;
    }
    ctx->pc = 0x21A1D4u;
    {
        const bool branch_taken_0x21a1d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A1D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x21a1d4) {
            ctx->pc = 0x21A23Cu;
            goto label_21a23c;
        }
    }
    ctx->pc = 0x21A1DCu;
label_21a1dc:
    // 0x21a1dc: 0x24426260
    ctx->pc = 0x21a1dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25184));
label_21a1e0:
    // 0x21a1e0: 0x31880
    ctx->pc = 0x21a1e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_21a1e4:
    // 0x21a1e4: 0x621821
    ctx->pc = 0x21a1e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21a1e8:
    // 0x21a1e8: 0x8c620000
    ctx->pc = 0x21a1e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21a1ec:
    // 0x21a1ec: 0x400008
label_21a1f0:
    if (ctx->pc == 0x21A1F0u) {
        ctx->pc = 0x21A1F4u;
        goto label_21a1f4;
    }
    ctx->pc = 0x21A1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2196F8u: goto label_2196f8;
            case 0x2196FCu: goto label_2196fc;
            case 0x219700u: goto label_219700;
            case 0x219704u: goto label_219704;
            case 0x219708u: goto label_219708;
            case 0x21970Cu: goto label_21970c;
            case 0x219710u: goto label_219710;
            case 0x219714u: goto label_219714;
            case 0x219718u: goto label_219718;
            case 0x21971Cu: goto label_21971c;
            case 0x219720u: goto label_219720;
            case 0x219724u: goto label_219724;
            case 0x219728u: goto label_219728;
            case 0x21972Cu: goto label_21972c;
            case 0x219730u: goto label_219730;
            case 0x219734u: goto label_219734;
            case 0x219738u: goto label_219738;
            case 0x21973Cu: goto label_21973c;
            case 0x219740u: goto label_219740;
            case 0x219744u: goto label_219744;
            case 0x219748u: goto label_219748;
            case 0x21974Cu: goto label_21974c;
            case 0x219750u: goto label_219750;
            case 0x219754u: goto label_219754;
            case 0x219758u: goto label_219758;
            case 0x21975Cu: goto label_21975c;
            case 0x219760u: goto label_219760;
            case 0x219764u: goto label_219764;
            case 0x219768u: goto label_219768;
            case 0x21976Cu: goto label_21976c;
            case 0x219770u: goto label_219770;
            case 0x219774u: goto label_219774;
            case 0x219778u: goto label_219778;
            case 0x21977Cu: goto label_21977c;
            case 0x219780u: goto label_219780;
            case 0x219784u: goto label_219784;
            case 0x219788u: goto label_219788;
            case 0x21978Cu: goto label_21978c;
            case 0x219790u: goto label_219790;
            case 0x219794u: goto label_219794;
            case 0x219798u: goto label_219798;
            case 0x21979Cu: goto label_21979c;
            case 0x2197A0u: goto label_2197a0;
            case 0x2197A4u: goto label_2197a4;
            case 0x2197A8u: goto label_2197a8;
            case 0x2197ACu: goto label_2197ac;
            case 0x2197B0u: goto label_2197b0;
            case 0x2197B4u: goto label_2197b4;
            case 0x2197B8u: goto label_2197b8;
            case 0x2197BCu: goto label_2197bc;
            case 0x2197C0u: goto label_2197c0;
            case 0x2197C4u: goto label_2197c4;
            case 0x2197C8u: goto label_2197c8;
            case 0x2197CCu: goto label_2197cc;
            case 0x2197D0u: goto label_2197d0;
            case 0x2197D4u: goto label_2197d4;
            case 0x2197D8u: goto label_2197d8;
            case 0x2197DCu: goto label_2197dc;
            case 0x2197E0u: goto label_2197e0;
            case 0x2197E4u: goto label_2197e4;
            case 0x2197E8u: goto label_2197e8;
            case 0x2197ECu: goto label_2197ec;
            case 0x2197F0u: goto label_2197f0;
            case 0x2197F4u: goto label_2197f4;
            case 0x2197F8u: goto label_2197f8;
            case 0x2197FCu: goto label_2197fc;
            case 0x219800u: goto label_219800;
            case 0x219804u: goto label_219804;
            case 0x219808u: goto label_219808;
            case 0x21980Cu: goto label_21980c;
            case 0x219810u: goto label_219810;
            case 0x219814u: goto label_219814;
            case 0x219818u: goto label_219818;
            case 0x21981Cu: goto label_21981c;
            case 0x219820u: goto label_219820;
            case 0x219824u: goto label_219824;
            case 0x219828u: goto label_219828;
            case 0x21982Cu: goto label_21982c;
            case 0x219830u: goto label_219830;
            case 0x219834u: goto label_219834;
            case 0x219838u: goto label_219838;
            case 0x21983Cu: goto label_21983c;
            case 0x219840u: goto label_219840;
            case 0x219844u: goto label_219844;
            case 0x219848u: goto label_219848;
            case 0x21984Cu: goto label_21984c;
            case 0x219850u: goto label_219850;
            case 0x219854u: goto label_219854;
            case 0x219858u: goto label_219858;
            case 0x21985Cu: goto label_21985c;
            case 0x219860u: goto label_219860;
            case 0x219864u: goto label_219864;
            case 0x219868u: goto label_219868;
            case 0x21986Cu: goto label_21986c;
            case 0x219870u: goto label_219870;
            case 0x219874u: goto label_219874;
            case 0x219878u: goto label_219878;
            case 0x21987Cu: goto label_21987c;
            case 0x219880u: goto label_219880;
            case 0x219884u: goto label_219884;
            case 0x219888u: goto label_219888;
            case 0x21988Cu: goto label_21988c;
            case 0x219890u: goto label_219890;
            case 0x219894u: goto label_219894;
            case 0x219898u: goto label_219898;
            case 0x21989Cu: goto label_21989c;
            case 0x2198A0u: goto label_2198a0;
            case 0x2198A4u: goto label_2198a4;
            case 0x2198A8u: goto label_2198a8;
            case 0x2198ACu: goto label_2198ac;
            case 0x2198B0u: goto label_2198b0;
            case 0x2198B4u: goto label_2198b4;
            case 0x2198B8u: goto label_2198b8;
            case 0x2198BCu: goto label_2198bc;
            case 0x2198C0u: goto label_2198c0;
            case 0x2198C4u: goto label_2198c4;
            case 0x2198C8u: goto label_2198c8;
            case 0x2198CCu: goto label_2198cc;
            case 0x2198D0u: goto label_2198d0;
            case 0x2198D4u: goto label_2198d4;
            case 0x2198D8u: goto label_2198d8;
            case 0x2198DCu: goto label_2198dc;
            case 0x2198E0u: goto label_2198e0;
            case 0x2198E4u: goto label_2198e4;
            case 0x2198E8u: goto label_2198e8;
            case 0x2198ECu: goto label_2198ec;
            case 0x2198F0u: goto label_2198f0;
            case 0x2198F4u: goto label_2198f4;
            case 0x2198F8u: goto label_2198f8;
            case 0x2198FCu: goto label_2198fc;
            case 0x219900u: goto label_219900;
            case 0x219904u: goto label_219904;
            case 0x219908u: goto label_219908;
            case 0x21990Cu: goto label_21990c;
            case 0x219910u: goto label_219910;
            case 0x219914u: goto label_219914;
            case 0x219918u: goto label_219918;
            case 0x21991Cu: goto label_21991c;
            case 0x219920u: goto label_219920;
            case 0x219924u: goto label_219924;
            case 0x219928u: goto label_219928;
            case 0x21992Cu: goto label_21992c;
            case 0x219930u: goto label_219930;
            case 0x219934u: goto label_219934;
            case 0x219938u: goto label_219938;
            case 0x21993Cu: goto label_21993c;
            case 0x219940u: goto label_219940;
            case 0x219944u: goto label_219944;
            case 0x219948u: goto label_219948;
            case 0x21994Cu: goto label_21994c;
            case 0x219950u: goto label_219950;
            case 0x219954u: goto label_219954;
            case 0x219958u: goto label_219958;
            case 0x21995Cu: goto label_21995c;
            case 0x219960u: goto label_219960;
            case 0x219964u: goto label_219964;
            case 0x219968u: goto label_219968;
            case 0x21996Cu: goto label_21996c;
            case 0x219970u: goto label_219970;
            case 0x219974u: goto label_219974;
            case 0x219978u: goto label_219978;
            case 0x21997Cu: goto label_21997c;
            case 0x219980u: goto label_219980;
            case 0x219984u: goto label_219984;
            case 0x219988u: goto label_219988;
            case 0x21998Cu: goto label_21998c;
            case 0x219990u: goto label_219990;
            case 0x219994u: goto label_219994;
            case 0x219998u: goto label_219998;
            case 0x21999Cu: goto label_21999c;
            case 0x2199A0u: goto label_2199a0;
            case 0x2199A4u: goto label_2199a4;
            case 0x2199A8u: goto label_2199a8;
            case 0x2199ACu: goto label_2199ac;
            case 0x2199B0u: goto label_2199b0;
            case 0x2199B4u: goto label_2199b4;
            case 0x2199B8u: goto label_2199b8;
            case 0x2199BCu: goto label_2199bc;
            case 0x2199C0u: goto label_2199c0;
            case 0x2199C4u: goto label_2199c4;
            case 0x2199C8u: goto label_2199c8;
            case 0x2199CCu: goto label_2199cc;
            case 0x2199D0u: goto label_2199d0;
            case 0x2199D4u: goto label_2199d4;
            case 0x2199D8u: goto label_2199d8;
            case 0x2199DCu: goto label_2199dc;
            case 0x2199E0u: goto label_2199e0;
            case 0x2199E4u: goto label_2199e4;
            case 0x2199E8u: goto label_2199e8;
            case 0x2199ECu: goto label_2199ec;
            case 0x2199F0u: goto label_2199f0;
            case 0x2199F4u: goto label_2199f4;
            case 0x2199F8u: goto label_2199f8;
            case 0x2199FCu: goto label_2199fc;
            case 0x219A00u: goto label_219a00;
            case 0x219A04u: goto label_219a04;
            case 0x219A08u: goto label_219a08;
            case 0x219A0Cu: goto label_219a0c;
            case 0x219A10u: goto label_219a10;
            case 0x219A14u: goto label_219a14;
            case 0x219A18u: goto label_219a18;
            case 0x219A1Cu: goto label_219a1c;
            case 0x219A20u: goto label_219a20;
            case 0x219A24u: goto label_219a24;
            case 0x219A28u: goto label_219a28;
            case 0x219A2Cu: goto label_219a2c;
            case 0x219A30u: goto label_219a30;
            case 0x219A34u: goto label_219a34;
            case 0x219A38u: goto label_219a38;
            case 0x219A3Cu: goto label_219a3c;
            case 0x219A40u: goto label_219a40;
            case 0x219A44u: goto label_219a44;
            case 0x219A48u: goto label_219a48;
            case 0x219A4Cu: goto label_219a4c;
            case 0x219A50u: goto label_219a50;
            case 0x219A54u: goto label_219a54;
            case 0x219A58u: goto label_219a58;
            case 0x219A5Cu: goto label_219a5c;
            case 0x219A60u: goto label_219a60;
            case 0x219A64u: goto label_219a64;
            case 0x219A68u: goto label_219a68;
            case 0x219A6Cu: goto label_219a6c;
            case 0x219A70u: goto label_219a70;
            case 0x219A74u: goto label_219a74;
            case 0x219A78u: goto label_219a78;
            case 0x219A7Cu: goto label_219a7c;
            case 0x219A80u: goto label_219a80;
            case 0x219A84u: goto label_219a84;
            case 0x219A88u: goto label_219a88;
            case 0x219A8Cu: goto label_219a8c;
            case 0x219A90u: goto label_219a90;
            case 0x219A94u: goto label_219a94;
            case 0x219A98u: goto label_219a98;
            case 0x219A9Cu: goto label_219a9c;
            case 0x219AA0u: goto label_219aa0;
            case 0x219AA4u: goto label_219aa4;
            case 0x219AA8u: goto label_219aa8;
            case 0x219AACu: goto label_219aac;
            case 0x219AB0u: goto label_219ab0;
            case 0x219AB4u: goto label_219ab4;
            case 0x219AB8u: goto label_219ab8;
            case 0x219ABCu: goto label_219abc;
            case 0x219AC0u: goto label_219ac0;
            case 0x219AC4u: goto label_219ac4;
            case 0x219AC8u: goto label_219ac8;
            case 0x219ACCu: goto label_219acc;
            case 0x219AD0u: goto label_219ad0;
            case 0x219AD4u: goto label_219ad4;
            case 0x219AD8u: goto label_219ad8;
            case 0x219ADCu: goto label_219adc;
            case 0x219AE0u: goto label_219ae0;
            case 0x219AE4u: goto label_219ae4;
            case 0x219AE8u: goto label_219ae8;
            case 0x219AECu: goto label_219aec;
            case 0x219AF0u: goto label_219af0;
            case 0x219AF4u: goto label_219af4;
            case 0x219AF8u: goto label_219af8;
            case 0x219AFCu: goto label_219afc;
            case 0x219B00u: goto label_219b00;
            case 0x219B04u: goto label_219b04;
            case 0x219B08u: goto label_219b08;
            case 0x219B0Cu: goto label_219b0c;
            case 0x219B10u: goto label_219b10;
            case 0x219B14u: goto label_219b14;
            case 0x219B18u: goto label_219b18;
            case 0x219B1Cu: goto label_219b1c;
            case 0x219B20u: goto label_219b20;
            case 0x219B24u: goto label_219b24;
            case 0x219B28u: goto label_219b28;
            case 0x219B2Cu: goto label_219b2c;
            case 0x219B30u: goto label_219b30;
            case 0x219B34u: goto label_219b34;
            case 0x219B38u: goto label_219b38;
            case 0x219B3Cu: goto label_219b3c;
            case 0x219B40u: goto label_219b40;
            case 0x219B44u: goto label_219b44;
            case 0x219B48u: goto label_219b48;
            case 0x219B4Cu: goto label_219b4c;
            case 0x219B50u: goto label_219b50;
            case 0x219B54u: goto label_219b54;
            case 0x219B58u: goto label_219b58;
            case 0x219B5Cu: goto label_219b5c;
            case 0x219B60u: goto label_219b60;
            case 0x219B64u: goto label_219b64;
            case 0x219B68u: goto label_219b68;
            case 0x219B6Cu: goto label_219b6c;
            case 0x219B70u: goto label_219b70;
            case 0x219B74u: goto label_219b74;
            case 0x219B78u: goto label_219b78;
            case 0x219B7Cu: goto label_219b7c;
            case 0x219B80u: goto label_219b80;
            case 0x219B84u: goto label_219b84;
            case 0x219B88u: goto label_219b88;
            case 0x219B8Cu: goto label_219b8c;
            case 0x219B90u: goto label_219b90;
            case 0x219B94u: goto label_219b94;
            case 0x219B98u: goto label_219b98;
            case 0x219B9Cu: goto label_219b9c;
            case 0x219BA0u: goto label_219ba0;
            case 0x219BA4u: goto label_219ba4;
            case 0x219BA8u: goto label_219ba8;
            case 0x219BACu: goto label_219bac;
            case 0x219BB0u: goto label_219bb0;
            case 0x219BB4u: goto label_219bb4;
            case 0x219BB8u: goto label_219bb8;
            case 0x219BBCu: goto label_219bbc;
            case 0x219BC0u: goto label_219bc0;
            case 0x219BC4u: goto label_219bc4;
            case 0x219BC8u: goto label_219bc8;
            case 0x219BCCu: goto label_219bcc;
            case 0x219BD0u: goto label_219bd0;
            case 0x219BD4u: goto label_219bd4;
            case 0x219BD8u: goto label_219bd8;
            case 0x219BDCu: goto label_219bdc;
            case 0x219BE0u: goto label_219be0;
            case 0x219BE4u: goto label_219be4;
            case 0x219BE8u: goto label_219be8;
            case 0x219BECu: goto label_219bec;
            case 0x219BF0u: goto label_219bf0;
            case 0x219BF4u: goto label_219bf4;
            case 0x219BF8u: goto label_219bf8;
            case 0x219BFCu: goto label_219bfc;
            case 0x219C00u: goto label_219c00;
            case 0x219C04u: goto label_219c04;
            case 0x219C08u: goto label_219c08;
            case 0x219C0Cu: goto label_219c0c;
            case 0x219C10u: goto label_219c10;
            case 0x219C14u: goto label_219c14;
            case 0x219C18u: goto label_219c18;
            case 0x219C1Cu: goto label_219c1c;
            case 0x219C20u: goto label_219c20;
            case 0x219C24u: goto label_219c24;
            case 0x219C28u: goto label_219c28;
            case 0x219C2Cu: goto label_219c2c;
            case 0x219C30u: goto label_219c30;
            case 0x219C34u: goto label_219c34;
            case 0x219C38u: goto label_219c38;
            case 0x219C3Cu: goto label_219c3c;
            case 0x219C40u: goto label_219c40;
            case 0x219C44u: goto label_219c44;
            case 0x219C48u: goto label_219c48;
            case 0x219C4Cu: goto label_219c4c;
            case 0x219C50u: goto label_219c50;
            case 0x219C54u: goto label_219c54;
            case 0x219C58u: goto label_219c58;
            case 0x219C5Cu: goto label_219c5c;
            case 0x219C60u: goto label_219c60;
            case 0x219C64u: goto label_219c64;
            case 0x219C68u: goto label_219c68;
            case 0x219C6Cu: goto label_219c6c;
            case 0x219C70u: goto label_219c70;
            case 0x219C74u: goto label_219c74;
            case 0x219C78u: goto label_219c78;
            case 0x219C7Cu: goto label_219c7c;
            case 0x219C80u: goto label_219c80;
            case 0x219C84u: goto label_219c84;
            case 0x219C88u: goto label_219c88;
            case 0x219C8Cu: goto label_219c8c;
            case 0x219C90u: goto label_219c90;
            case 0x219C94u: goto label_219c94;
            case 0x219C98u: goto label_219c98;
            case 0x219C9Cu: goto label_219c9c;
            case 0x219CA0u: goto label_219ca0;
            case 0x219CA4u: goto label_219ca4;
            case 0x219CA8u: goto label_219ca8;
            case 0x219CACu: goto label_219cac;
            case 0x219CB0u: goto label_219cb0;
            case 0x219CB4u: goto label_219cb4;
            case 0x219CB8u: goto label_219cb8;
            case 0x219CBCu: goto label_219cbc;
            case 0x219CC0u: goto label_219cc0;
            case 0x219CC4u: goto label_219cc4;
            case 0x219CC8u: goto label_219cc8;
            case 0x219CCCu: goto label_219ccc;
            case 0x219CD0u: goto label_219cd0;
            case 0x219CD4u: goto label_219cd4;
            case 0x219CD8u: goto label_219cd8;
            case 0x219CDCu: goto label_219cdc;
            case 0x219CE0u: goto label_219ce0;
            case 0x219CE4u: goto label_219ce4;
            case 0x219CE8u: goto label_219ce8;
            case 0x219CECu: goto label_219cec;
            case 0x219CF0u: goto label_219cf0;
            case 0x219CF4u: goto label_219cf4;
            case 0x219CF8u: goto label_219cf8;
            case 0x219CFCu: goto label_219cfc;
            case 0x219D00u: goto label_219d00;
            case 0x219D04u: goto label_219d04;
            case 0x219D08u: goto label_219d08;
            case 0x219D0Cu: goto label_219d0c;
            case 0x219D10u: goto label_219d10;
            case 0x219D14u: goto label_219d14;
            case 0x219D18u: goto label_219d18;
            case 0x219D1Cu: goto label_219d1c;
            case 0x219D20u: goto label_219d20;
            case 0x219D24u: goto label_219d24;
            case 0x219D28u: goto label_219d28;
            case 0x219D2Cu: goto label_219d2c;
            case 0x219D30u: goto label_219d30;
            case 0x219D34u: goto label_219d34;
            case 0x219D38u: goto label_219d38;
            case 0x219D3Cu: goto label_219d3c;
            case 0x219D40u: goto label_219d40;
            case 0x219D44u: goto label_219d44;
            case 0x219D48u: goto label_219d48;
            case 0x219D4Cu: goto label_219d4c;
            case 0x219D50u: goto label_219d50;
            case 0x219D54u: goto label_219d54;
            case 0x219D58u: goto label_219d58;
            case 0x219D5Cu: goto label_219d5c;
            case 0x219D60u: goto label_219d60;
            case 0x219D64u: goto label_219d64;
            case 0x219D68u: goto label_219d68;
            case 0x219D6Cu: goto label_219d6c;
            case 0x219D70u: goto label_219d70;
            case 0x219D74u: goto label_219d74;
            case 0x219D78u: goto label_219d78;
            case 0x219D7Cu: goto label_219d7c;
            case 0x219D80u: goto label_219d80;
            case 0x219D84u: goto label_219d84;
            case 0x219D88u: goto label_219d88;
            case 0x219D8Cu: goto label_219d8c;
            case 0x219D90u: goto label_219d90;
            case 0x219D94u: goto label_219d94;
            case 0x219D98u: goto label_219d98;
            case 0x219D9Cu: goto label_219d9c;
            case 0x219DA0u: goto label_219da0;
            case 0x219DA4u: goto label_219da4;
            case 0x219DA8u: goto label_219da8;
            case 0x219DACu: goto label_219dac;
            case 0x219DB0u: goto label_219db0;
            case 0x219DB4u: goto label_219db4;
            case 0x219DB8u: goto label_219db8;
            case 0x219DBCu: goto label_219dbc;
            case 0x219DC0u: goto label_219dc0;
            case 0x219DC4u: goto label_219dc4;
            case 0x219DC8u: goto label_219dc8;
            case 0x219DCCu: goto label_219dcc;
            case 0x219DD0u: goto label_219dd0;
            case 0x219DD4u: goto label_219dd4;
            case 0x219DD8u: goto label_219dd8;
            case 0x219DDCu: goto label_219ddc;
            case 0x219DE0u: goto label_219de0;
            case 0x219DE4u: goto label_219de4;
            case 0x219DE8u: goto label_219de8;
            case 0x219DECu: goto label_219dec;
            case 0x219DF0u: goto label_219df0;
            case 0x219DF4u: goto label_219df4;
            case 0x219DF8u: goto label_219df8;
            case 0x219DFCu: goto label_219dfc;
            case 0x219E00u: goto label_219e00;
            case 0x219E04u: goto label_219e04;
            case 0x219E08u: goto label_219e08;
            case 0x219E0Cu: goto label_219e0c;
            case 0x219E10u: goto label_219e10;
            case 0x219E14u: goto label_219e14;
            case 0x219E18u: goto label_219e18;
            case 0x219E1Cu: goto label_219e1c;
            case 0x219E20u: goto label_219e20;
            case 0x219E24u: goto label_219e24;
            case 0x219E28u: goto label_219e28;
            case 0x219E2Cu: goto label_219e2c;
            case 0x219E30u: goto label_219e30;
            case 0x219E34u: goto label_219e34;
            case 0x219E38u: goto label_219e38;
            case 0x219E3Cu: goto label_219e3c;
            case 0x219E40u: goto label_219e40;
            case 0x219E44u: goto label_219e44;
            case 0x219E48u: goto label_219e48;
            case 0x219E4Cu: goto label_219e4c;
            case 0x219E50u: goto label_219e50;
            case 0x219E54u: goto label_219e54;
            case 0x219E58u: goto label_219e58;
            case 0x219E5Cu: goto label_219e5c;
            case 0x219E60u: goto label_219e60;
            case 0x219E64u: goto label_219e64;
            case 0x219E68u: goto label_219e68;
            case 0x219E6Cu: goto label_219e6c;
            case 0x219E70u: goto label_219e70;
            case 0x219E74u: goto label_219e74;
            case 0x219E78u: goto label_219e78;
            case 0x219E7Cu: goto label_219e7c;
            case 0x219E80u: goto label_219e80;
            case 0x219E84u: goto label_219e84;
            case 0x219E88u: goto label_219e88;
            case 0x219E8Cu: goto label_219e8c;
            case 0x219E90u: goto label_219e90;
            case 0x219E94u: goto label_219e94;
            case 0x219E98u: goto label_219e98;
            case 0x219E9Cu: goto label_219e9c;
            case 0x219EA0u: goto label_219ea0;
            case 0x219EA4u: goto label_219ea4;
            case 0x219EA8u: goto label_219ea8;
            case 0x219EACu: goto label_219eac;
            case 0x219EB0u: goto label_219eb0;
            case 0x219EB4u: goto label_219eb4;
            case 0x219EB8u: goto label_219eb8;
            case 0x219EBCu: goto label_219ebc;
            case 0x219EC0u: goto label_219ec0;
            case 0x219EC4u: goto label_219ec4;
            case 0x219EC8u: goto label_219ec8;
            case 0x219ECCu: goto label_219ecc;
            case 0x219ED0u: goto label_219ed0;
            case 0x219ED4u: goto label_219ed4;
            case 0x219ED8u: goto label_219ed8;
            case 0x219EDCu: goto label_219edc;
            case 0x219EE0u: goto label_219ee0;
            case 0x219EE4u: goto label_219ee4;
            case 0x219EE8u: goto label_219ee8;
            case 0x219EECu: goto label_219eec;
            case 0x219EF0u: goto label_219ef0;
            case 0x219EF4u: goto label_219ef4;
            case 0x219EF8u: goto label_219ef8;
            case 0x219EFCu: goto label_219efc;
            case 0x219F00u: goto label_219f00;
            case 0x219F04u: goto label_219f04;
            case 0x219F08u: goto label_219f08;
            case 0x219F0Cu: goto label_219f0c;
            case 0x219F10u: goto label_219f10;
            case 0x219F14u: goto label_219f14;
            case 0x219F18u: goto label_219f18;
            case 0x219F1Cu: goto label_219f1c;
            case 0x219F20u: goto label_219f20;
            case 0x219F24u: goto label_219f24;
            case 0x219F28u: goto label_219f28;
            case 0x219F2Cu: goto label_219f2c;
            case 0x219F30u: goto label_219f30;
            case 0x219F34u: goto label_219f34;
            case 0x219F38u: goto label_219f38;
            case 0x219F3Cu: goto label_219f3c;
            case 0x219F40u: goto label_219f40;
            case 0x219F44u: goto label_219f44;
            case 0x219F48u: goto label_219f48;
            case 0x219F4Cu: goto label_219f4c;
            case 0x219F50u: goto label_219f50;
            case 0x219F54u: goto label_219f54;
            case 0x219F58u: goto label_219f58;
            case 0x219F5Cu: goto label_219f5c;
            case 0x219F60u: goto label_219f60;
            case 0x219F64u: goto label_219f64;
            case 0x219F68u: goto label_219f68;
            case 0x219F6Cu: goto label_219f6c;
            case 0x219F70u: goto label_219f70;
            case 0x219F74u: goto label_219f74;
            case 0x219F78u: goto label_219f78;
            case 0x219F7Cu: goto label_219f7c;
            case 0x219F80u: goto label_219f80;
            case 0x219F84u: goto label_219f84;
            case 0x219F88u: goto label_219f88;
            case 0x219F8Cu: goto label_219f8c;
            case 0x219F90u: goto label_219f90;
            case 0x219F94u: goto label_219f94;
            case 0x219F98u: goto label_219f98;
            case 0x219F9Cu: goto label_219f9c;
            case 0x219FA0u: goto label_219fa0;
            case 0x219FA4u: goto label_219fa4;
            case 0x219FA8u: goto label_219fa8;
            case 0x219FACu: goto label_219fac;
            case 0x219FB0u: goto label_219fb0;
            case 0x219FB4u: goto label_219fb4;
            case 0x219FB8u: goto label_219fb8;
            case 0x219FBCu: goto label_219fbc;
            case 0x219FC0u: goto label_219fc0;
            case 0x219FC4u: goto label_219fc4;
            case 0x219FC8u: goto label_219fc8;
            case 0x219FCCu: goto label_219fcc;
            case 0x219FD0u: goto label_219fd0;
            case 0x219FD4u: goto label_219fd4;
            case 0x219FD8u: goto label_219fd8;
            case 0x219FDCu: goto label_219fdc;
            case 0x219FE0u: goto label_219fe0;
            case 0x219FE4u: goto label_219fe4;
            case 0x219FE8u: goto label_219fe8;
            case 0x219FECu: goto label_219fec;
            case 0x219FF0u: goto label_219ff0;
            case 0x219FF4u: goto label_219ff4;
            case 0x219FF8u: goto label_219ff8;
            case 0x219FFCu: goto label_219ffc;
            case 0x21A000u: goto label_21a000;
            case 0x21A004u: goto label_21a004;
            case 0x21A008u: goto label_21a008;
            case 0x21A00Cu: goto label_21a00c;
            case 0x21A010u: goto label_21a010;
            case 0x21A014u: goto label_21a014;
            case 0x21A018u: goto label_21a018;
            case 0x21A01Cu: goto label_21a01c;
            case 0x21A020u: goto label_21a020;
            case 0x21A024u: goto label_21a024;
            case 0x21A028u: goto label_21a028;
            case 0x21A02Cu: goto label_21a02c;
            case 0x21A030u: goto label_21a030;
            case 0x21A034u: goto label_21a034;
            case 0x21A038u: goto label_21a038;
            case 0x21A03Cu: goto label_21a03c;
            case 0x21A040u: goto label_21a040;
            case 0x21A044u: goto label_21a044;
            case 0x21A048u: goto label_21a048;
            case 0x21A04Cu: goto label_21a04c;
            case 0x21A050u: goto label_21a050;
            case 0x21A054u: goto label_21a054;
            case 0x21A058u: goto label_21a058;
            case 0x21A05Cu: goto label_21a05c;
            case 0x21A060u: goto label_21a060;
            case 0x21A064u: goto label_21a064;
            case 0x21A068u: goto label_21a068;
            case 0x21A06Cu: goto label_21a06c;
            case 0x21A070u: goto label_21a070;
            case 0x21A074u: goto label_21a074;
            case 0x21A078u: goto label_21a078;
            case 0x21A07Cu: goto label_21a07c;
            case 0x21A080u: goto label_21a080;
            case 0x21A084u: goto label_21a084;
            case 0x21A088u: goto label_21a088;
            case 0x21A08Cu: goto label_21a08c;
            case 0x21A090u: goto label_21a090;
            case 0x21A094u: goto label_21a094;
            case 0x21A098u: goto label_21a098;
            case 0x21A09Cu: goto label_21a09c;
            case 0x21A0A0u: goto label_21a0a0;
            case 0x21A0A4u: goto label_21a0a4;
            case 0x21A0A8u: goto label_21a0a8;
            case 0x21A0ACu: goto label_21a0ac;
            case 0x21A0B0u: goto label_21a0b0;
            case 0x21A0B4u: goto label_21a0b4;
            case 0x21A0B8u: goto label_21a0b8;
            case 0x21A0BCu: goto label_21a0bc;
            case 0x21A0C0u: goto label_21a0c0;
            case 0x21A0C4u: goto label_21a0c4;
            case 0x21A0C8u: goto label_21a0c8;
            case 0x21A0CCu: goto label_21a0cc;
            case 0x21A0D0u: goto label_21a0d0;
            case 0x21A0D4u: goto label_21a0d4;
            case 0x21A0D8u: goto label_21a0d8;
            case 0x21A0DCu: goto label_21a0dc;
            case 0x21A0E0u: goto label_21a0e0;
            case 0x21A0E4u: goto label_21a0e4;
            case 0x21A0E8u: goto label_21a0e8;
            case 0x21A0ECu: goto label_21a0ec;
            case 0x21A0F0u: goto label_21a0f0;
            case 0x21A0F4u: goto label_21a0f4;
            case 0x21A0F8u: goto label_21a0f8;
            case 0x21A0FCu: goto label_21a0fc;
            case 0x21A100u: goto label_21a100;
            case 0x21A104u: goto label_21a104;
            case 0x21A108u: goto label_21a108;
            case 0x21A10Cu: goto label_21a10c;
            case 0x21A110u: goto label_21a110;
            case 0x21A114u: goto label_21a114;
            case 0x21A118u: goto label_21a118;
            case 0x21A11Cu: goto label_21a11c;
            case 0x21A120u: goto label_21a120;
            case 0x21A124u: goto label_21a124;
            case 0x21A128u: goto label_21a128;
            case 0x21A12Cu: goto label_21a12c;
            case 0x21A130u: goto label_21a130;
            case 0x21A134u: goto label_21a134;
            case 0x21A138u: goto label_21a138;
            case 0x21A13Cu: goto label_21a13c;
            case 0x21A140u: goto label_21a140;
            case 0x21A144u: goto label_21a144;
            case 0x21A148u: goto label_21a148;
            case 0x21A14Cu: goto label_21a14c;
            case 0x21A150u: goto label_21a150;
            case 0x21A154u: goto label_21a154;
            case 0x21A158u: goto label_21a158;
            case 0x21A15Cu: goto label_21a15c;
            case 0x21A160u: goto label_21a160;
            case 0x21A164u: goto label_21a164;
            case 0x21A168u: goto label_21a168;
            case 0x21A16Cu: goto label_21a16c;
            case 0x21A170u: goto label_21a170;
            case 0x21A174u: goto label_21a174;
            case 0x21A178u: goto label_21a178;
            case 0x21A17Cu: goto label_21a17c;
            case 0x21A180u: goto label_21a180;
            case 0x21A184u: goto label_21a184;
            case 0x21A188u: goto label_21a188;
            case 0x21A18Cu: goto label_21a18c;
            case 0x21A190u: goto label_21a190;
            case 0x21A194u: goto label_21a194;
            case 0x21A198u: goto label_21a198;
            case 0x21A19Cu: goto label_21a19c;
            case 0x21A1A0u: goto label_21a1a0;
            case 0x21A1A4u: goto label_21a1a4;
            case 0x21A1A8u: goto label_21a1a8;
            case 0x21A1ACu: goto label_21a1ac;
            case 0x21A1B0u: goto label_21a1b0;
            case 0x21A1B4u: goto label_21a1b4;
            case 0x21A1B8u: goto label_21a1b8;
            case 0x21A1BCu: goto label_21a1bc;
            case 0x21A1C0u: goto label_21a1c0;
            case 0x21A1C4u: goto label_21a1c4;
            case 0x21A1C8u: goto label_21a1c8;
            case 0x21A1CCu: goto label_21a1cc;
            case 0x21A1D0u: goto label_21a1d0;
            case 0x21A1D4u: goto label_21a1d4;
            case 0x21A1D8u: goto label_21a1d8;
            case 0x21A1DCu: goto label_21a1dc;
            case 0x21A1E0u: goto label_21a1e0;
            case 0x21A1E4u: goto label_21a1e4;
            case 0x21A1E8u: goto label_21a1e8;
            case 0x21A1ECu: goto label_21a1ec;
            case 0x21A1F0u: goto label_21a1f0;
            case 0x21A1F4u: goto label_21a1f4;
            case 0x21A1F8u: goto label_21a1f8;
            case 0x21A1FCu: goto label_21a1fc;
            case 0x21A200u: goto label_21a200;
            case 0x21A204u: goto label_21a204;
            case 0x21A208u: goto label_21a208;
            case 0x21A20Cu: goto label_21a20c;
            case 0x21A210u: goto label_21a210;
            case 0x21A214u: goto label_21a214;
            case 0x21A218u: goto label_21a218;
            case 0x21A21Cu: goto label_21a21c;
            case 0x21A220u: goto label_21a220;
            case 0x21A224u: goto label_21a224;
            case 0x21A228u: goto label_21a228;
            case 0x21A22Cu: goto label_21a22c;
            case 0x21A230u: goto label_21a230;
            case 0x21A234u: goto label_21a234;
            case 0x21A238u: goto label_21a238;
            case 0x21A23Cu: goto label_21a23c;
            case 0x21A240u: goto label_21a240;
            case 0x21A244u: goto label_21a244;
            case 0x21A248u: goto label_21a248;
            case 0x21A24Cu: goto label_21a24c;
            case 0x21A250u: goto label_21a250;
            case 0x21A254u: goto label_21a254;
            case 0x21A258u: goto label_21a258;
            case 0x21A25Cu: goto label_21a25c;
            case 0x21A260u: goto label_21a260;
            case 0x21A264u: goto label_21a264;
            case 0x21A268u: goto label_21a268;
            case 0x21A26Cu: goto label_21a26c;
            case 0x21A270u: goto label_21a270;
            case 0x21A274u: goto label_21a274;
            case 0x21A278u: goto label_21a278;
            case 0x21A27Cu: goto label_21a27c;
            case 0x21A280u: goto label_21a280;
            case 0x21A284u: goto label_21a284;
            case 0x21A288u: goto label_21a288;
            case 0x21A28Cu: goto label_21a28c;
            case 0x21A290u: goto label_21a290;
            case 0x21A294u: goto label_21a294;
            case 0x21A298u: goto label_21a298;
            case 0x21A29Cu: goto label_21a29c;
            case 0x21A2A0u: goto label_21a2a0;
            case 0x21A2A4u: goto label_21a2a4;
            case 0x21A2A8u: goto label_21a2a8;
            case 0x21A2ACu: goto label_21a2ac;
            case 0x21A2B0u: goto label_21a2b0;
            case 0x21A2B4u: goto label_21a2b4;
            case 0x21A2B8u: goto label_21a2b8;
            case 0x21A2BCu: goto label_21a2bc;
            case 0x21A2C0u: goto label_21a2c0;
            case 0x21A2C4u: goto label_21a2c4;
            case 0x21A2C8u: goto label_21a2c8;
            case 0x21A2CCu: goto label_21a2cc;
            case 0x21A2D0u: goto label_21a2d0;
            case 0x21A2D4u: goto label_21a2d4;
            case 0x21A2D8u: goto label_21a2d8;
            case 0x21A2DCu: goto label_21a2dc;
            case 0x21A2E0u: goto label_21a2e0;
            case 0x21A2E4u: goto label_21a2e4;
            case 0x21A2E8u: goto label_21a2e8;
            case 0x21A2ECu: goto label_21a2ec;
            case 0x21A2F0u: goto label_21a2f0;
            case 0x21A2F4u: goto label_21a2f4;
            case 0x21A2F8u: goto label_21a2f8;
            case 0x21A2FCu: goto label_21a2fc;
            case 0x21A300u: goto label_21a300;
            case 0x21A304u: goto label_21a304;
            case 0x21A308u: goto label_21a308;
            case 0x21A30Cu: goto label_21a30c;
            case 0x21A310u: goto label_21a310;
            case 0x21A314u: goto label_21a314;
            case 0x21A318u: goto label_21a318;
            case 0x21A31Cu: goto label_21a31c;
            case 0x21A320u: goto label_21a320;
            case 0x21A324u: goto label_21a324;
            case 0x21A328u: goto label_21a328;
            case 0x21A32Cu: goto label_21a32c;
            case 0x21A330u: goto label_21a330;
            case 0x21A334u: goto label_21a334;
            case 0x21A338u: goto label_21a338;
            case 0x21A33Cu: goto label_21a33c;
            case 0x21A340u: goto label_21a340;
            case 0x21A344u: goto label_21a344;
            case 0x21A348u: goto label_21a348;
            case 0x21A34Cu: goto label_21a34c;
            case 0x21A350u: goto label_21a350;
            case 0x21A354u: goto label_21a354;
            case 0x21A358u: goto label_21a358;
            case 0x21A35Cu: goto label_21a35c;
            case 0x21A360u: goto label_21a360;
            case 0x21A364u: goto label_21a364;
            case 0x21A368u: goto label_21a368;
            case 0x21A36Cu: goto label_21a36c;
            case 0x21A370u: goto label_21a370;
            case 0x21A374u: goto label_21a374;
            case 0x21A378u: goto label_21a378;
            case 0x21A37Cu: goto label_21a37c;
            case 0x21A380u: goto label_21a380;
            case 0x21A384u: goto label_21a384;
            case 0x21A388u: goto label_21a388;
            case 0x21A38Cu: goto label_21a38c;
            case 0x21A390u: goto label_21a390;
            case 0x21A394u: goto label_21a394;
            case 0x21A398u: goto label_21a398;
            case 0x21A39Cu: goto label_21a39c;
            case 0x21A3A0u: goto label_21a3a0;
            case 0x21A3A4u: goto label_21a3a4;
            case 0x21A3A8u: goto label_21a3a8;
            case 0x21A3ACu: goto label_21a3ac;
            case 0x21A3B0u: goto label_21a3b0;
            case 0x21A3B4u: goto label_21a3b4;
            case 0x21A3B8u: goto label_21a3b8;
            case 0x21A3BCu: goto label_21a3bc;
            case 0x21A3C0u: goto label_21a3c0;
            case 0x21A3C4u: goto label_21a3c4;
            case 0x21A3C8u: goto label_21a3c8;
            case 0x21A3CCu: goto label_21a3cc;
            case 0x21A3D0u: goto label_21a3d0;
            case 0x21A3D4u: goto label_21a3d4;
            case 0x21A3D8u: goto label_21a3d8;
            case 0x21A3DCu: goto label_21a3dc;
            case 0x21A3E0u: goto label_21a3e0;
            case 0x21A3E4u: goto label_21a3e4;
            case 0x21A3E8u: goto label_21a3e8;
            case 0x21A3ECu: goto label_21a3ec;
            case 0x21A3F0u: goto label_21a3f0;
            case 0x21A3F4u: goto label_21a3f4;
            case 0x21A3F8u: goto label_21a3f8;
            case 0x21A3FCu: goto label_21a3fc;
            case 0x21A400u: goto label_21a400;
            case 0x21A404u: goto label_21a404;
            case 0x21A408u: goto label_21a408;
            case 0x21A40Cu: goto label_21a40c;
            case 0x21A410u: goto label_21a410;
            case 0x21A414u: goto label_21a414;
            case 0x21A418u: goto label_21a418;
            case 0x21A41Cu: goto label_21a41c;
            case 0x21A420u: goto label_21a420;
            case 0x21A424u: goto label_21a424;
            case 0x21A428u: goto label_21a428;
            case 0x21A42Cu: goto label_21a42c;
            case 0x21A430u: goto label_21a430;
            case 0x21A434u: goto label_21a434;
            case 0x21A438u: goto label_21a438;
            case 0x21A43Cu: goto label_21a43c;
            case 0x21A440u: goto label_21a440;
            case 0x21A444u: goto label_21a444;
            case 0x21A448u: goto label_21a448;
            case 0x21A44Cu: goto label_21a44c;
            case 0x21A450u: goto label_21a450;
            case 0x21A454u: goto label_21a454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A1F4u;
label_21a1f4:
    // 0x21a1f4: 0x3c03003c
    ctx->pc = 0x21a1f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a1f8:
    // 0x21a1f8: 0x2402007f
    ctx->pc = 0x21a1f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
label_21a1fc:
    // 0x21a1fc: 0x1000000f
label_21a200:
    if (ctx->pc == 0x21A200u) {
        ctx->pc = 0x21A200u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956400), GPR_U32(ctx, 2));
        ctx->pc = 0x21A204u;
        goto label_21a204;
    }
    ctx->pc = 0x21A1FCu;
    {
        const bool branch_taken_0x21a1fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A200u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956400), GPR_U32(ctx, 2));
        if (branch_taken_0x21a1fc) {
            ctx->pc = 0x21A23Cu;
            goto label_21a23c;
        }
    }
    ctx->pc = 0x21A204u;
label_21a204:
    // 0x21a204: 0x3c03003c
    ctx->pc = 0x21a204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a208:
    // 0x21a208: 0x2402007f
    ctx->pc = 0x21a208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
label_21a20c:
    // 0x21a20c: 0x1000000b
label_21a210:
    if (ctx->pc == 0x21A210u) {
        ctx->pc = 0x21A210u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956404), GPR_U32(ctx, 2));
        ctx->pc = 0x21A214u;
        goto label_21a214;
    }
    ctx->pc = 0x21A20Cu;
    {
        const bool branch_taken_0x21a20c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A210u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956404), GPR_U32(ctx, 2));
        if (branch_taken_0x21a20c) {
            ctx->pc = 0x21A23Cu;
            goto label_21a23c;
        }
    }
    ctx->pc = 0x21A214u;
label_21a214:
    // 0x21a214: 0xc08640a
label_21a218:
    if (ctx->pc == 0x21A218u) {
        ctx->pc = 0x21A218u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x21A21Cu;
        goto label_21a21c;
    }
    ctx->pc = 0x21A214u;
    SET_GPR_U32(ctx, 31, 0x21A21Cu);
    ctx->pc = 0x21A218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 127));
    ctx->pc = 0x219028u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudSetMasterVol_0x219028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A21Cu; }
    }
    if (ctx->pc != 0x21A21Cu) { return; }
    ctx->pc = 0x21A21Cu;
label_21a21c:
    // 0x21a21c: 0x10000008
label_21a220:
    if (ctx->pc == 0x21A220u) {
        ctx->pc = 0x21A220u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A224u;
        goto label_21a224;
    }
    ctx->pc = 0x21A21Cu;
    {
        const bool branch_taken_0x21a21c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A220u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a21c) {
            ctx->pc = 0x21A240u;
            goto label_21a240;
        }
    }
    ctx->pc = 0x21A224u;
label_21a224:
    // 0x21a224: 0x3c03003c
    ctx->pc = 0x21a224u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a228:
    // 0x21a228: 0x2402ffff
    ctx->pc = 0x21a228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21a22c:
    // 0x21a22c: 0x10000003
label_21a230:
    if (ctx->pc == 0x21A230u) {
        ctx->pc = 0x21A230u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956412), GPR_U32(ctx, 2));
        ctx->pc = 0x21A234u;
        goto label_21a234;
    }
    ctx->pc = 0x21A22Cu;
    {
        const bool branch_taken_0x21a22c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A230u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956412), GPR_U32(ctx, 2));
        if (branch_taken_0x21a22c) {
            ctx->pc = 0x21A23Cu;
            goto label_21a23c;
        }
    }
    ctx->pc = 0x21A234u;
label_21a234:
    // 0x21a234: 0x3c02003c
    ctx->pc = 0x21a234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a238:
    // 0x21a238: 0xac40d580
    ctx->pc = 0x21a238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956416), GPR_U32(ctx, 0));
label_21a23c:
    // 0x21a23c: 0x3c02003c
    ctx->pc = 0x21a23cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a240:
    // 0x21a240: 0x8c42cf0c
    ctx->pc = 0x21a240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954764)));
label_21a244:
    // 0x21a244: 0x3c030200
    ctx->pc = 0x21a244u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_21a248:
    // 0x21a248: 0x431024
    ctx->pc = 0x21a248u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a24c:
    // 0x21a24c: 0x1440000c
label_21a250:
    if (ctx->pc == 0x21A250u) {
        ctx->pc = 0x21A250u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A254u;
        goto label_21a254;
    }
    ctx->pc = 0x21A24Cu;
    {
        const bool branch_taken_0x21a24c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A250u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a24c) {
            ctx->pc = 0x21A280u;
            goto label_21a280;
        }
    }
    ctx->pc = 0x21A254u;
label_21a254:
    // 0x21a254: 0x8c42cefc
    ctx->pc = 0x21a254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954748)));
label_21a258:
    // 0x21a258: 0x431024
    ctx->pc = 0x21a258u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a25c:
    // 0x21a25c: 0x10400034
label_21a260:
    if (ctx->pc == 0x21A260u) {
        ctx->pc = 0x21A260u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x21A264u;
        goto label_21a264;
    }
    ctx->pc = 0x21A25Cu;
    {
        const bool branch_taken_0x21a25c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A260u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x21a25c) {
            ctx->pc = 0x21A330u;
            goto label_21a330;
        }
    }
    ctx->pc = 0x21A264u;
label_21a264:
    // 0x21a264: 0x3c03003c
    ctx->pc = 0x21a264u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a268:
    // 0x21a268: 0xc441ffa4
    ctx->pc = 0x21a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a26c:
    // 0x21a26c: 0xc460cef0
    ctx->pc = 0x21a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a270:
    // 0x21a270: 0x46010036
    ctx->pc = 0x21a270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a274:
    // 0x21a274: 0x0
    ctx->pc = 0x21a274u;
    // NOP
label_21a278:
    // 0x21a278: 0x4500002e
label_21a27c:
    if (ctx->pc == 0x21A27Cu) {
        ctx->pc = 0x21A27Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A280u;
        goto label_21a280;
    }
    ctx->pc = 0x21A278u;
    {
        const bool branch_taken_0x21a278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A27Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a278) {
            ctx->pc = 0x21A334u;
            goto label_21a334;
        }
    }
    ctx->pc = 0x21A280u;
label_21a280:
    // 0x21a280: 0xc08641a
label_21a284:
    if (ctx->pc == 0x21A284u) {
        ctx->pc = 0x21A288u;
        goto label_21a288;
    }
    ctx->pc = 0x21A280u;
    SET_GPR_U32(ctx, 31, 0x21A288u);
    ctx->pc = 0x219068u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAudioView_0x219068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A288u; }
    }
    if (ctx->pc != 0x21A288u) { return; }
    ctx->pc = 0x21A288u;
label_21a288:
    // 0x21a288: 0x3c03003c
    ctx->pc = 0x21a288u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a28c:
    // 0x21a28c: 0xa462cef4
    ctx->pc = 0x21a28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294954740), (uint16_t)GPR_U32(ctx, 2));
label_21a290:
    // 0x21a290: 0x3c04003c
    ctx->pc = 0x21a290u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_21a294:
    // 0x21a294: 0x3042ffff
    ctx->pc = 0x21a294u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_21a298:
    // 0x21a298: 0x21202
    ctx->pc = 0x21a298u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_21a29c:
    // 0x21a29c: 0xac82d584
    ctx->pc = 0x21a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956420), GPR_U32(ctx, 2));
label_21a2a0:
    // 0x21a2a0: 0x3c02003c
    ctx->pc = 0x21a2a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a2a4:
    // 0x21a2a4: 0x8c42d560
    ctx->pc = 0x21a2a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_21a2a8:
    // 0x21a2a8: 0x2403001c
    ctx->pc = 0x21a2a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_21a2ac:
    // 0x21a2ac: 0x432018
    ctx->pc = 0x21a2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_21a2b0:
    // 0x21a2b0: 0x961021
    ctx->pc = 0x21a2b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_21a2b4:
    // 0x21a2b4: 0xc4410014
    ctx->pc = 0x21a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21a2b8:
    // 0x21a2b8: 0x44800000
    ctx->pc = 0x21a2b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_21a2bc:
    // 0x21a2bc: 0x46010034
    ctx->pc = 0x21a2bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a2c0:
    // 0x21a2c0: 0x0
    ctx->pc = 0x21a2c0u;
    // NOP
label_21a2c4:
    // 0x21a2c4: 0x45000013
label_21a2c8:
    if (ctx->pc == 0x21A2C8u) {
        ctx->pc = 0x21A2C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A2CCu;
        goto label_21a2cc;
    }
    ctx->pc = 0x21A2C4u;
    {
        const bool branch_taken_0x21a2c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A2C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a2c4) {
            ctx->pc = 0x21A314u;
            goto label_21a314;
        }
    }
    ctx->pc = 0x21A2CCu;
label_21a2cc:
    // 0x21a2cc: 0x2444cef0
    ctx->pc = 0x21a2ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954736));
label_21a2d0:
    // 0x21a2d0: 0x3c020031
    ctx->pc = 0x21a2d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_21a2d4:
    // 0x21a2d4: 0xc442ffa4
    ctx->pc = 0x21a2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21a2d8:
    // 0x21a2d8: 0x3c014120
    ctx->pc = 0x21a2d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_21a2dc:
    // 0x21a2dc: 0x44810000
    ctx->pc = 0x21a2dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_21a2e0:
    // 0x21a2e0: 0x46010034
    ctx->pc = 0x21a2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a2e4:
    // 0x21a2e4: 0x0
    ctx->pc = 0x21a2e4u;
    // NOP
label_21a2e8:
    // 0x21a2e8: 0x45030008
label_21a2ec:
    if (ctx->pc == 0x21A2ECu) {
        ctx->pc = 0x21A2ECu;
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x21A2F0u;
        goto label_21a2f0;
    }
    ctx->pc = 0x21A2E8u;
    {
        const bool branch_taken_0x21a2e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a2e8) {
            ctx->pc = 0x21A2ECu;
            ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
            ctx->pc = 0x21A30Cu;
            goto label_21a30c;
        }
    }
    ctx->pc = 0x21A2F0u;
label_21a2f0:
    // 0x21a2f0: 0x3c02003c
    ctx->pc = 0x21a2f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a2f4:
    // 0x21a2f4: 0x8c42d560
    ctx->pc = 0x21a2f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956384)));
label_21a2f8:
    // 0x21a2f8: 0x2403001c
    ctx->pc = 0x21a2f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_21a2fc:
    // 0x21a2fc: 0x432818
    ctx->pc = 0x21a2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_21a300:
    // 0x21a300: 0xb61021
    ctx->pc = 0x21a300u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_21a304:
    // 0x21a304: 0xc4400014
    ctx->pc = 0x21a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a308:
    // 0x21a308: 0x46001000
    ctx->pc = 0x21a308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_21a30c:
    // 0x21a30c: 0x10000008
label_21a310:
    if (ctx->pc == 0x21A310u) {
        ctx->pc = 0x21A310u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x21A314u;
        goto label_21a314;
    }
    ctx->pc = 0x21A30Cu;
    {
        const bool branch_taken_0x21a30c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A310u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        if (branch_taken_0x21a30c) {
            ctx->pc = 0x21A330u;
            goto label_21a330;
        }
    }
    ctx->pc = 0x21A314u;
label_21a314:
    // 0x21a314: 0x3c03003c
    ctx->pc = 0x21a314u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a318:
    // 0x21a318: 0x3c020031
    ctx->pc = 0x21a318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_21a31c:
    // 0x21a31c: 0xc440ffa4
    ctx->pc = 0x21a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21a320:
    // 0x21a320: 0x3c014120
    ctx->pc = 0x21a320u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
label_21a324:
    // 0x21a324: 0x44810800
    ctx->pc = 0x21a324u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_21a328:
    // 0x21a328: 0x46010000
    ctx->pc = 0x21a328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_21a32c:
    // 0x21a32c: 0xe460cef0
    ctx->pc = 0x21a32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954736), bits); }
label_21a330:
    // 0x21a330: 0x3c02003c
    ctx->pc = 0x21a330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a334:
    // 0x21a334: 0x8c42cf0c
    ctx->pc = 0x21a334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954764)));
label_21a338:
    // 0x21a338: 0x3c030100
    ctx->pc = 0x21a338u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
label_21a33c:
    // 0x21a33c: 0x431024
    ctx->pc = 0x21a33cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a340:
    // 0x21a340: 0x10400027
label_21a344:
    if (ctx->pc == 0x21A344u) {
        ctx->pc = 0x21A344u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21A348u;
        goto label_21a348;
    }
    ctx->pc = 0x21A340u;
    {
        const bool branch_taken_0x21a340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A344u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21a340) {
            ctx->pc = 0x21A3E0u;
            goto label_21a3e0;
        }
    }
    ctx->pc = 0x21A348u;
label_21a348:
    // 0x21a348: 0x8c43d588
    ctx->pc = 0x21a348u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956424)));
label_21a34c:
    // 0x21a34c: 0x2c620041
    ctx->pc = 0x21a34cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 65));
label_21a350:
    // 0x21a350: 0x1040001f
label_21a354:
    if (ctx->pc == 0x21A354u) {
        ctx->pc = 0x21A354u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x21A358u;
        goto label_21a358;
    }
    ctx->pc = 0x21A350u;
    {
        const bool branch_taken_0x21a350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A354u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x21a350) {
            ctx->pc = 0x21A3D0u;
            goto label_21a3d0;
        }
    }
    ctx->pc = 0x21A358u;
label_21a358:
    // 0x21a358: 0x24426280
    ctx->pc = 0x21a358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 25216));
label_21a35c:
    // 0x21a35c: 0x31880
    ctx->pc = 0x21a35cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_21a360:
    // 0x21a360: 0x621821
    ctx->pc = 0x21a360u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21a364:
    // 0x21a364: 0x8c620000
    ctx->pc = 0x21a364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21a368:
    // 0x21a368: 0x400008
label_21a36c:
    if (ctx->pc == 0x21A36Cu) {
        ctx->pc = 0x21A370u;
        goto label_21a370;
    }
    ctx->pc = 0x21A368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2196F8u: goto label_2196f8;
            case 0x2196FCu: goto label_2196fc;
            case 0x219700u: goto label_219700;
            case 0x219704u: goto label_219704;
            case 0x219708u: goto label_219708;
            case 0x21970Cu: goto label_21970c;
            case 0x219710u: goto label_219710;
            case 0x219714u: goto label_219714;
            case 0x219718u: goto label_219718;
            case 0x21971Cu: goto label_21971c;
            case 0x219720u: goto label_219720;
            case 0x219724u: goto label_219724;
            case 0x219728u: goto label_219728;
            case 0x21972Cu: goto label_21972c;
            case 0x219730u: goto label_219730;
            case 0x219734u: goto label_219734;
            case 0x219738u: goto label_219738;
            case 0x21973Cu: goto label_21973c;
            case 0x219740u: goto label_219740;
            case 0x219744u: goto label_219744;
            case 0x219748u: goto label_219748;
            case 0x21974Cu: goto label_21974c;
            case 0x219750u: goto label_219750;
            case 0x219754u: goto label_219754;
            case 0x219758u: goto label_219758;
            case 0x21975Cu: goto label_21975c;
            case 0x219760u: goto label_219760;
            case 0x219764u: goto label_219764;
            case 0x219768u: goto label_219768;
            case 0x21976Cu: goto label_21976c;
            case 0x219770u: goto label_219770;
            case 0x219774u: goto label_219774;
            case 0x219778u: goto label_219778;
            case 0x21977Cu: goto label_21977c;
            case 0x219780u: goto label_219780;
            case 0x219784u: goto label_219784;
            case 0x219788u: goto label_219788;
            case 0x21978Cu: goto label_21978c;
            case 0x219790u: goto label_219790;
            case 0x219794u: goto label_219794;
            case 0x219798u: goto label_219798;
            case 0x21979Cu: goto label_21979c;
            case 0x2197A0u: goto label_2197a0;
            case 0x2197A4u: goto label_2197a4;
            case 0x2197A8u: goto label_2197a8;
            case 0x2197ACu: goto label_2197ac;
            case 0x2197B0u: goto label_2197b0;
            case 0x2197B4u: goto label_2197b4;
            case 0x2197B8u: goto label_2197b8;
            case 0x2197BCu: goto label_2197bc;
            case 0x2197C0u: goto label_2197c0;
            case 0x2197C4u: goto label_2197c4;
            case 0x2197C8u: goto label_2197c8;
            case 0x2197CCu: goto label_2197cc;
            case 0x2197D0u: goto label_2197d0;
            case 0x2197D4u: goto label_2197d4;
            case 0x2197D8u: goto label_2197d8;
            case 0x2197DCu: goto label_2197dc;
            case 0x2197E0u: goto label_2197e0;
            case 0x2197E4u: goto label_2197e4;
            case 0x2197E8u: goto label_2197e8;
            case 0x2197ECu: goto label_2197ec;
            case 0x2197F0u: goto label_2197f0;
            case 0x2197F4u: goto label_2197f4;
            case 0x2197F8u: goto label_2197f8;
            case 0x2197FCu: goto label_2197fc;
            case 0x219800u: goto label_219800;
            case 0x219804u: goto label_219804;
            case 0x219808u: goto label_219808;
            case 0x21980Cu: goto label_21980c;
            case 0x219810u: goto label_219810;
            case 0x219814u: goto label_219814;
            case 0x219818u: goto label_219818;
            case 0x21981Cu: goto label_21981c;
            case 0x219820u: goto label_219820;
            case 0x219824u: goto label_219824;
            case 0x219828u: goto label_219828;
            case 0x21982Cu: goto label_21982c;
            case 0x219830u: goto label_219830;
            case 0x219834u: goto label_219834;
            case 0x219838u: goto label_219838;
            case 0x21983Cu: goto label_21983c;
            case 0x219840u: goto label_219840;
            case 0x219844u: goto label_219844;
            case 0x219848u: goto label_219848;
            case 0x21984Cu: goto label_21984c;
            case 0x219850u: goto label_219850;
            case 0x219854u: goto label_219854;
            case 0x219858u: goto label_219858;
            case 0x21985Cu: goto label_21985c;
            case 0x219860u: goto label_219860;
            case 0x219864u: goto label_219864;
            case 0x219868u: goto label_219868;
            case 0x21986Cu: goto label_21986c;
            case 0x219870u: goto label_219870;
            case 0x219874u: goto label_219874;
            case 0x219878u: goto label_219878;
            case 0x21987Cu: goto label_21987c;
            case 0x219880u: goto label_219880;
            case 0x219884u: goto label_219884;
            case 0x219888u: goto label_219888;
            case 0x21988Cu: goto label_21988c;
            case 0x219890u: goto label_219890;
            case 0x219894u: goto label_219894;
            case 0x219898u: goto label_219898;
            case 0x21989Cu: goto label_21989c;
            case 0x2198A0u: goto label_2198a0;
            case 0x2198A4u: goto label_2198a4;
            case 0x2198A8u: goto label_2198a8;
            case 0x2198ACu: goto label_2198ac;
            case 0x2198B0u: goto label_2198b0;
            case 0x2198B4u: goto label_2198b4;
            case 0x2198B8u: goto label_2198b8;
            case 0x2198BCu: goto label_2198bc;
            case 0x2198C0u: goto label_2198c0;
            case 0x2198C4u: goto label_2198c4;
            case 0x2198C8u: goto label_2198c8;
            case 0x2198CCu: goto label_2198cc;
            case 0x2198D0u: goto label_2198d0;
            case 0x2198D4u: goto label_2198d4;
            case 0x2198D8u: goto label_2198d8;
            case 0x2198DCu: goto label_2198dc;
            case 0x2198E0u: goto label_2198e0;
            case 0x2198E4u: goto label_2198e4;
            case 0x2198E8u: goto label_2198e8;
            case 0x2198ECu: goto label_2198ec;
            case 0x2198F0u: goto label_2198f0;
            case 0x2198F4u: goto label_2198f4;
            case 0x2198F8u: goto label_2198f8;
            case 0x2198FCu: goto label_2198fc;
            case 0x219900u: goto label_219900;
            case 0x219904u: goto label_219904;
            case 0x219908u: goto label_219908;
            case 0x21990Cu: goto label_21990c;
            case 0x219910u: goto label_219910;
            case 0x219914u: goto label_219914;
            case 0x219918u: goto label_219918;
            case 0x21991Cu: goto label_21991c;
            case 0x219920u: goto label_219920;
            case 0x219924u: goto label_219924;
            case 0x219928u: goto label_219928;
            case 0x21992Cu: goto label_21992c;
            case 0x219930u: goto label_219930;
            case 0x219934u: goto label_219934;
            case 0x219938u: goto label_219938;
            case 0x21993Cu: goto label_21993c;
            case 0x219940u: goto label_219940;
            case 0x219944u: goto label_219944;
            case 0x219948u: goto label_219948;
            case 0x21994Cu: goto label_21994c;
            case 0x219950u: goto label_219950;
            case 0x219954u: goto label_219954;
            case 0x219958u: goto label_219958;
            case 0x21995Cu: goto label_21995c;
            case 0x219960u: goto label_219960;
            case 0x219964u: goto label_219964;
            case 0x219968u: goto label_219968;
            case 0x21996Cu: goto label_21996c;
            case 0x219970u: goto label_219970;
            case 0x219974u: goto label_219974;
            case 0x219978u: goto label_219978;
            case 0x21997Cu: goto label_21997c;
            case 0x219980u: goto label_219980;
            case 0x219984u: goto label_219984;
            case 0x219988u: goto label_219988;
            case 0x21998Cu: goto label_21998c;
            case 0x219990u: goto label_219990;
            case 0x219994u: goto label_219994;
            case 0x219998u: goto label_219998;
            case 0x21999Cu: goto label_21999c;
            case 0x2199A0u: goto label_2199a0;
            case 0x2199A4u: goto label_2199a4;
            case 0x2199A8u: goto label_2199a8;
            case 0x2199ACu: goto label_2199ac;
            case 0x2199B0u: goto label_2199b0;
            case 0x2199B4u: goto label_2199b4;
            case 0x2199B8u: goto label_2199b8;
            case 0x2199BCu: goto label_2199bc;
            case 0x2199C0u: goto label_2199c0;
            case 0x2199C4u: goto label_2199c4;
            case 0x2199C8u: goto label_2199c8;
            case 0x2199CCu: goto label_2199cc;
            case 0x2199D0u: goto label_2199d0;
            case 0x2199D4u: goto label_2199d4;
            case 0x2199D8u: goto label_2199d8;
            case 0x2199DCu: goto label_2199dc;
            case 0x2199E0u: goto label_2199e0;
            case 0x2199E4u: goto label_2199e4;
            case 0x2199E8u: goto label_2199e8;
            case 0x2199ECu: goto label_2199ec;
            case 0x2199F0u: goto label_2199f0;
            case 0x2199F4u: goto label_2199f4;
            case 0x2199F8u: goto label_2199f8;
            case 0x2199FCu: goto label_2199fc;
            case 0x219A00u: goto label_219a00;
            case 0x219A04u: goto label_219a04;
            case 0x219A08u: goto label_219a08;
            case 0x219A0Cu: goto label_219a0c;
            case 0x219A10u: goto label_219a10;
            case 0x219A14u: goto label_219a14;
            case 0x219A18u: goto label_219a18;
            case 0x219A1Cu: goto label_219a1c;
            case 0x219A20u: goto label_219a20;
            case 0x219A24u: goto label_219a24;
            case 0x219A28u: goto label_219a28;
            case 0x219A2Cu: goto label_219a2c;
            case 0x219A30u: goto label_219a30;
            case 0x219A34u: goto label_219a34;
            case 0x219A38u: goto label_219a38;
            case 0x219A3Cu: goto label_219a3c;
            case 0x219A40u: goto label_219a40;
            case 0x219A44u: goto label_219a44;
            case 0x219A48u: goto label_219a48;
            case 0x219A4Cu: goto label_219a4c;
            case 0x219A50u: goto label_219a50;
            case 0x219A54u: goto label_219a54;
            case 0x219A58u: goto label_219a58;
            case 0x219A5Cu: goto label_219a5c;
            case 0x219A60u: goto label_219a60;
            case 0x219A64u: goto label_219a64;
            case 0x219A68u: goto label_219a68;
            case 0x219A6Cu: goto label_219a6c;
            case 0x219A70u: goto label_219a70;
            case 0x219A74u: goto label_219a74;
            case 0x219A78u: goto label_219a78;
            case 0x219A7Cu: goto label_219a7c;
            case 0x219A80u: goto label_219a80;
            case 0x219A84u: goto label_219a84;
            case 0x219A88u: goto label_219a88;
            case 0x219A8Cu: goto label_219a8c;
            case 0x219A90u: goto label_219a90;
            case 0x219A94u: goto label_219a94;
            case 0x219A98u: goto label_219a98;
            case 0x219A9Cu: goto label_219a9c;
            case 0x219AA0u: goto label_219aa0;
            case 0x219AA4u: goto label_219aa4;
            case 0x219AA8u: goto label_219aa8;
            case 0x219AACu: goto label_219aac;
            case 0x219AB0u: goto label_219ab0;
            case 0x219AB4u: goto label_219ab4;
            case 0x219AB8u: goto label_219ab8;
            case 0x219ABCu: goto label_219abc;
            case 0x219AC0u: goto label_219ac0;
            case 0x219AC4u: goto label_219ac4;
            case 0x219AC8u: goto label_219ac8;
            case 0x219ACCu: goto label_219acc;
            case 0x219AD0u: goto label_219ad0;
            case 0x219AD4u: goto label_219ad4;
            case 0x219AD8u: goto label_219ad8;
            case 0x219ADCu: goto label_219adc;
            case 0x219AE0u: goto label_219ae0;
            case 0x219AE4u: goto label_219ae4;
            case 0x219AE8u: goto label_219ae8;
            case 0x219AECu: goto label_219aec;
            case 0x219AF0u: goto label_219af0;
            case 0x219AF4u: goto label_219af4;
            case 0x219AF8u: goto label_219af8;
            case 0x219AFCu: goto label_219afc;
            case 0x219B00u: goto label_219b00;
            case 0x219B04u: goto label_219b04;
            case 0x219B08u: goto label_219b08;
            case 0x219B0Cu: goto label_219b0c;
            case 0x219B10u: goto label_219b10;
            case 0x219B14u: goto label_219b14;
            case 0x219B18u: goto label_219b18;
            case 0x219B1Cu: goto label_219b1c;
            case 0x219B20u: goto label_219b20;
            case 0x219B24u: goto label_219b24;
            case 0x219B28u: goto label_219b28;
            case 0x219B2Cu: goto label_219b2c;
            case 0x219B30u: goto label_219b30;
            case 0x219B34u: goto label_219b34;
            case 0x219B38u: goto label_219b38;
            case 0x219B3Cu: goto label_219b3c;
            case 0x219B40u: goto label_219b40;
            case 0x219B44u: goto label_219b44;
            case 0x219B48u: goto label_219b48;
            case 0x219B4Cu: goto label_219b4c;
            case 0x219B50u: goto label_219b50;
            case 0x219B54u: goto label_219b54;
            case 0x219B58u: goto label_219b58;
            case 0x219B5Cu: goto label_219b5c;
            case 0x219B60u: goto label_219b60;
            case 0x219B64u: goto label_219b64;
            case 0x219B68u: goto label_219b68;
            case 0x219B6Cu: goto label_219b6c;
            case 0x219B70u: goto label_219b70;
            case 0x219B74u: goto label_219b74;
            case 0x219B78u: goto label_219b78;
            case 0x219B7Cu: goto label_219b7c;
            case 0x219B80u: goto label_219b80;
            case 0x219B84u: goto label_219b84;
            case 0x219B88u: goto label_219b88;
            case 0x219B8Cu: goto label_219b8c;
            case 0x219B90u: goto label_219b90;
            case 0x219B94u: goto label_219b94;
            case 0x219B98u: goto label_219b98;
            case 0x219B9Cu: goto label_219b9c;
            case 0x219BA0u: goto label_219ba0;
            case 0x219BA4u: goto label_219ba4;
            case 0x219BA8u: goto label_219ba8;
            case 0x219BACu: goto label_219bac;
            case 0x219BB0u: goto label_219bb0;
            case 0x219BB4u: goto label_219bb4;
            case 0x219BB8u: goto label_219bb8;
            case 0x219BBCu: goto label_219bbc;
            case 0x219BC0u: goto label_219bc0;
            case 0x219BC4u: goto label_219bc4;
            case 0x219BC8u: goto label_219bc8;
            case 0x219BCCu: goto label_219bcc;
            case 0x219BD0u: goto label_219bd0;
            case 0x219BD4u: goto label_219bd4;
            case 0x219BD8u: goto label_219bd8;
            case 0x219BDCu: goto label_219bdc;
            case 0x219BE0u: goto label_219be0;
            case 0x219BE4u: goto label_219be4;
            case 0x219BE8u: goto label_219be8;
            case 0x219BECu: goto label_219bec;
            case 0x219BF0u: goto label_219bf0;
            case 0x219BF4u: goto label_219bf4;
            case 0x219BF8u: goto label_219bf8;
            case 0x219BFCu: goto label_219bfc;
            case 0x219C00u: goto label_219c00;
            case 0x219C04u: goto label_219c04;
            case 0x219C08u: goto label_219c08;
            case 0x219C0Cu: goto label_219c0c;
            case 0x219C10u: goto label_219c10;
            case 0x219C14u: goto label_219c14;
            case 0x219C18u: goto label_219c18;
            case 0x219C1Cu: goto label_219c1c;
            case 0x219C20u: goto label_219c20;
            case 0x219C24u: goto label_219c24;
            case 0x219C28u: goto label_219c28;
            case 0x219C2Cu: goto label_219c2c;
            case 0x219C30u: goto label_219c30;
            case 0x219C34u: goto label_219c34;
            case 0x219C38u: goto label_219c38;
            case 0x219C3Cu: goto label_219c3c;
            case 0x219C40u: goto label_219c40;
            case 0x219C44u: goto label_219c44;
            case 0x219C48u: goto label_219c48;
            case 0x219C4Cu: goto label_219c4c;
            case 0x219C50u: goto label_219c50;
            case 0x219C54u: goto label_219c54;
            case 0x219C58u: goto label_219c58;
            case 0x219C5Cu: goto label_219c5c;
            case 0x219C60u: goto label_219c60;
            case 0x219C64u: goto label_219c64;
            case 0x219C68u: goto label_219c68;
            case 0x219C6Cu: goto label_219c6c;
            case 0x219C70u: goto label_219c70;
            case 0x219C74u: goto label_219c74;
            case 0x219C78u: goto label_219c78;
            case 0x219C7Cu: goto label_219c7c;
            case 0x219C80u: goto label_219c80;
            case 0x219C84u: goto label_219c84;
            case 0x219C88u: goto label_219c88;
            case 0x219C8Cu: goto label_219c8c;
            case 0x219C90u: goto label_219c90;
            case 0x219C94u: goto label_219c94;
            case 0x219C98u: goto label_219c98;
            case 0x219C9Cu: goto label_219c9c;
            case 0x219CA0u: goto label_219ca0;
            case 0x219CA4u: goto label_219ca4;
            case 0x219CA8u: goto label_219ca8;
            case 0x219CACu: goto label_219cac;
            case 0x219CB0u: goto label_219cb0;
            case 0x219CB4u: goto label_219cb4;
            case 0x219CB8u: goto label_219cb8;
            case 0x219CBCu: goto label_219cbc;
            case 0x219CC0u: goto label_219cc0;
            case 0x219CC4u: goto label_219cc4;
            case 0x219CC8u: goto label_219cc8;
            case 0x219CCCu: goto label_219ccc;
            case 0x219CD0u: goto label_219cd0;
            case 0x219CD4u: goto label_219cd4;
            case 0x219CD8u: goto label_219cd8;
            case 0x219CDCu: goto label_219cdc;
            case 0x219CE0u: goto label_219ce0;
            case 0x219CE4u: goto label_219ce4;
            case 0x219CE8u: goto label_219ce8;
            case 0x219CECu: goto label_219cec;
            case 0x219CF0u: goto label_219cf0;
            case 0x219CF4u: goto label_219cf4;
            case 0x219CF8u: goto label_219cf8;
            case 0x219CFCu: goto label_219cfc;
            case 0x219D00u: goto label_219d00;
            case 0x219D04u: goto label_219d04;
            case 0x219D08u: goto label_219d08;
            case 0x219D0Cu: goto label_219d0c;
            case 0x219D10u: goto label_219d10;
            case 0x219D14u: goto label_219d14;
            case 0x219D18u: goto label_219d18;
            case 0x219D1Cu: goto label_219d1c;
            case 0x219D20u: goto label_219d20;
            case 0x219D24u: goto label_219d24;
            case 0x219D28u: goto label_219d28;
            case 0x219D2Cu: goto label_219d2c;
            case 0x219D30u: goto label_219d30;
            case 0x219D34u: goto label_219d34;
            case 0x219D38u: goto label_219d38;
            case 0x219D3Cu: goto label_219d3c;
            case 0x219D40u: goto label_219d40;
            case 0x219D44u: goto label_219d44;
            case 0x219D48u: goto label_219d48;
            case 0x219D4Cu: goto label_219d4c;
            case 0x219D50u: goto label_219d50;
            case 0x219D54u: goto label_219d54;
            case 0x219D58u: goto label_219d58;
            case 0x219D5Cu: goto label_219d5c;
            case 0x219D60u: goto label_219d60;
            case 0x219D64u: goto label_219d64;
            case 0x219D68u: goto label_219d68;
            case 0x219D6Cu: goto label_219d6c;
            case 0x219D70u: goto label_219d70;
            case 0x219D74u: goto label_219d74;
            case 0x219D78u: goto label_219d78;
            case 0x219D7Cu: goto label_219d7c;
            case 0x219D80u: goto label_219d80;
            case 0x219D84u: goto label_219d84;
            case 0x219D88u: goto label_219d88;
            case 0x219D8Cu: goto label_219d8c;
            case 0x219D90u: goto label_219d90;
            case 0x219D94u: goto label_219d94;
            case 0x219D98u: goto label_219d98;
            case 0x219D9Cu: goto label_219d9c;
            case 0x219DA0u: goto label_219da0;
            case 0x219DA4u: goto label_219da4;
            case 0x219DA8u: goto label_219da8;
            case 0x219DACu: goto label_219dac;
            case 0x219DB0u: goto label_219db0;
            case 0x219DB4u: goto label_219db4;
            case 0x219DB8u: goto label_219db8;
            case 0x219DBCu: goto label_219dbc;
            case 0x219DC0u: goto label_219dc0;
            case 0x219DC4u: goto label_219dc4;
            case 0x219DC8u: goto label_219dc8;
            case 0x219DCCu: goto label_219dcc;
            case 0x219DD0u: goto label_219dd0;
            case 0x219DD4u: goto label_219dd4;
            case 0x219DD8u: goto label_219dd8;
            case 0x219DDCu: goto label_219ddc;
            case 0x219DE0u: goto label_219de0;
            case 0x219DE4u: goto label_219de4;
            case 0x219DE8u: goto label_219de8;
            case 0x219DECu: goto label_219dec;
            case 0x219DF0u: goto label_219df0;
            case 0x219DF4u: goto label_219df4;
            case 0x219DF8u: goto label_219df8;
            case 0x219DFCu: goto label_219dfc;
            case 0x219E00u: goto label_219e00;
            case 0x219E04u: goto label_219e04;
            case 0x219E08u: goto label_219e08;
            case 0x219E0Cu: goto label_219e0c;
            case 0x219E10u: goto label_219e10;
            case 0x219E14u: goto label_219e14;
            case 0x219E18u: goto label_219e18;
            case 0x219E1Cu: goto label_219e1c;
            case 0x219E20u: goto label_219e20;
            case 0x219E24u: goto label_219e24;
            case 0x219E28u: goto label_219e28;
            case 0x219E2Cu: goto label_219e2c;
            case 0x219E30u: goto label_219e30;
            case 0x219E34u: goto label_219e34;
            case 0x219E38u: goto label_219e38;
            case 0x219E3Cu: goto label_219e3c;
            case 0x219E40u: goto label_219e40;
            case 0x219E44u: goto label_219e44;
            case 0x219E48u: goto label_219e48;
            case 0x219E4Cu: goto label_219e4c;
            case 0x219E50u: goto label_219e50;
            case 0x219E54u: goto label_219e54;
            case 0x219E58u: goto label_219e58;
            case 0x219E5Cu: goto label_219e5c;
            case 0x219E60u: goto label_219e60;
            case 0x219E64u: goto label_219e64;
            case 0x219E68u: goto label_219e68;
            case 0x219E6Cu: goto label_219e6c;
            case 0x219E70u: goto label_219e70;
            case 0x219E74u: goto label_219e74;
            case 0x219E78u: goto label_219e78;
            case 0x219E7Cu: goto label_219e7c;
            case 0x219E80u: goto label_219e80;
            case 0x219E84u: goto label_219e84;
            case 0x219E88u: goto label_219e88;
            case 0x219E8Cu: goto label_219e8c;
            case 0x219E90u: goto label_219e90;
            case 0x219E94u: goto label_219e94;
            case 0x219E98u: goto label_219e98;
            case 0x219E9Cu: goto label_219e9c;
            case 0x219EA0u: goto label_219ea0;
            case 0x219EA4u: goto label_219ea4;
            case 0x219EA8u: goto label_219ea8;
            case 0x219EACu: goto label_219eac;
            case 0x219EB0u: goto label_219eb0;
            case 0x219EB4u: goto label_219eb4;
            case 0x219EB8u: goto label_219eb8;
            case 0x219EBCu: goto label_219ebc;
            case 0x219EC0u: goto label_219ec0;
            case 0x219EC4u: goto label_219ec4;
            case 0x219EC8u: goto label_219ec8;
            case 0x219ECCu: goto label_219ecc;
            case 0x219ED0u: goto label_219ed0;
            case 0x219ED4u: goto label_219ed4;
            case 0x219ED8u: goto label_219ed8;
            case 0x219EDCu: goto label_219edc;
            case 0x219EE0u: goto label_219ee0;
            case 0x219EE4u: goto label_219ee4;
            case 0x219EE8u: goto label_219ee8;
            case 0x219EECu: goto label_219eec;
            case 0x219EF0u: goto label_219ef0;
            case 0x219EF4u: goto label_219ef4;
            case 0x219EF8u: goto label_219ef8;
            case 0x219EFCu: goto label_219efc;
            case 0x219F00u: goto label_219f00;
            case 0x219F04u: goto label_219f04;
            case 0x219F08u: goto label_219f08;
            case 0x219F0Cu: goto label_219f0c;
            case 0x219F10u: goto label_219f10;
            case 0x219F14u: goto label_219f14;
            case 0x219F18u: goto label_219f18;
            case 0x219F1Cu: goto label_219f1c;
            case 0x219F20u: goto label_219f20;
            case 0x219F24u: goto label_219f24;
            case 0x219F28u: goto label_219f28;
            case 0x219F2Cu: goto label_219f2c;
            case 0x219F30u: goto label_219f30;
            case 0x219F34u: goto label_219f34;
            case 0x219F38u: goto label_219f38;
            case 0x219F3Cu: goto label_219f3c;
            case 0x219F40u: goto label_219f40;
            case 0x219F44u: goto label_219f44;
            case 0x219F48u: goto label_219f48;
            case 0x219F4Cu: goto label_219f4c;
            case 0x219F50u: goto label_219f50;
            case 0x219F54u: goto label_219f54;
            case 0x219F58u: goto label_219f58;
            case 0x219F5Cu: goto label_219f5c;
            case 0x219F60u: goto label_219f60;
            case 0x219F64u: goto label_219f64;
            case 0x219F68u: goto label_219f68;
            case 0x219F6Cu: goto label_219f6c;
            case 0x219F70u: goto label_219f70;
            case 0x219F74u: goto label_219f74;
            case 0x219F78u: goto label_219f78;
            case 0x219F7Cu: goto label_219f7c;
            case 0x219F80u: goto label_219f80;
            case 0x219F84u: goto label_219f84;
            case 0x219F88u: goto label_219f88;
            case 0x219F8Cu: goto label_219f8c;
            case 0x219F90u: goto label_219f90;
            case 0x219F94u: goto label_219f94;
            case 0x219F98u: goto label_219f98;
            case 0x219F9Cu: goto label_219f9c;
            case 0x219FA0u: goto label_219fa0;
            case 0x219FA4u: goto label_219fa4;
            case 0x219FA8u: goto label_219fa8;
            case 0x219FACu: goto label_219fac;
            case 0x219FB0u: goto label_219fb0;
            case 0x219FB4u: goto label_219fb4;
            case 0x219FB8u: goto label_219fb8;
            case 0x219FBCu: goto label_219fbc;
            case 0x219FC0u: goto label_219fc0;
            case 0x219FC4u: goto label_219fc4;
            case 0x219FC8u: goto label_219fc8;
            case 0x219FCCu: goto label_219fcc;
            case 0x219FD0u: goto label_219fd0;
            case 0x219FD4u: goto label_219fd4;
            case 0x219FD8u: goto label_219fd8;
            case 0x219FDCu: goto label_219fdc;
            case 0x219FE0u: goto label_219fe0;
            case 0x219FE4u: goto label_219fe4;
            case 0x219FE8u: goto label_219fe8;
            case 0x219FECu: goto label_219fec;
            case 0x219FF0u: goto label_219ff0;
            case 0x219FF4u: goto label_219ff4;
            case 0x219FF8u: goto label_219ff8;
            case 0x219FFCu: goto label_219ffc;
            case 0x21A000u: goto label_21a000;
            case 0x21A004u: goto label_21a004;
            case 0x21A008u: goto label_21a008;
            case 0x21A00Cu: goto label_21a00c;
            case 0x21A010u: goto label_21a010;
            case 0x21A014u: goto label_21a014;
            case 0x21A018u: goto label_21a018;
            case 0x21A01Cu: goto label_21a01c;
            case 0x21A020u: goto label_21a020;
            case 0x21A024u: goto label_21a024;
            case 0x21A028u: goto label_21a028;
            case 0x21A02Cu: goto label_21a02c;
            case 0x21A030u: goto label_21a030;
            case 0x21A034u: goto label_21a034;
            case 0x21A038u: goto label_21a038;
            case 0x21A03Cu: goto label_21a03c;
            case 0x21A040u: goto label_21a040;
            case 0x21A044u: goto label_21a044;
            case 0x21A048u: goto label_21a048;
            case 0x21A04Cu: goto label_21a04c;
            case 0x21A050u: goto label_21a050;
            case 0x21A054u: goto label_21a054;
            case 0x21A058u: goto label_21a058;
            case 0x21A05Cu: goto label_21a05c;
            case 0x21A060u: goto label_21a060;
            case 0x21A064u: goto label_21a064;
            case 0x21A068u: goto label_21a068;
            case 0x21A06Cu: goto label_21a06c;
            case 0x21A070u: goto label_21a070;
            case 0x21A074u: goto label_21a074;
            case 0x21A078u: goto label_21a078;
            case 0x21A07Cu: goto label_21a07c;
            case 0x21A080u: goto label_21a080;
            case 0x21A084u: goto label_21a084;
            case 0x21A088u: goto label_21a088;
            case 0x21A08Cu: goto label_21a08c;
            case 0x21A090u: goto label_21a090;
            case 0x21A094u: goto label_21a094;
            case 0x21A098u: goto label_21a098;
            case 0x21A09Cu: goto label_21a09c;
            case 0x21A0A0u: goto label_21a0a0;
            case 0x21A0A4u: goto label_21a0a4;
            case 0x21A0A8u: goto label_21a0a8;
            case 0x21A0ACu: goto label_21a0ac;
            case 0x21A0B0u: goto label_21a0b0;
            case 0x21A0B4u: goto label_21a0b4;
            case 0x21A0B8u: goto label_21a0b8;
            case 0x21A0BCu: goto label_21a0bc;
            case 0x21A0C0u: goto label_21a0c0;
            case 0x21A0C4u: goto label_21a0c4;
            case 0x21A0C8u: goto label_21a0c8;
            case 0x21A0CCu: goto label_21a0cc;
            case 0x21A0D0u: goto label_21a0d0;
            case 0x21A0D4u: goto label_21a0d4;
            case 0x21A0D8u: goto label_21a0d8;
            case 0x21A0DCu: goto label_21a0dc;
            case 0x21A0E0u: goto label_21a0e0;
            case 0x21A0E4u: goto label_21a0e4;
            case 0x21A0E8u: goto label_21a0e8;
            case 0x21A0ECu: goto label_21a0ec;
            case 0x21A0F0u: goto label_21a0f0;
            case 0x21A0F4u: goto label_21a0f4;
            case 0x21A0F8u: goto label_21a0f8;
            case 0x21A0FCu: goto label_21a0fc;
            case 0x21A100u: goto label_21a100;
            case 0x21A104u: goto label_21a104;
            case 0x21A108u: goto label_21a108;
            case 0x21A10Cu: goto label_21a10c;
            case 0x21A110u: goto label_21a110;
            case 0x21A114u: goto label_21a114;
            case 0x21A118u: goto label_21a118;
            case 0x21A11Cu: goto label_21a11c;
            case 0x21A120u: goto label_21a120;
            case 0x21A124u: goto label_21a124;
            case 0x21A128u: goto label_21a128;
            case 0x21A12Cu: goto label_21a12c;
            case 0x21A130u: goto label_21a130;
            case 0x21A134u: goto label_21a134;
            case 0x21A138u: goto label_21a138;
            case 0x21A13Cu: goto label_21a13c;
            case 0x21A140u: goto label_21a140;
            case 0x21A144u: goto label_21a144;
            case 0x21A148u: goto label_21a148;
            case 0x21A14Cu: goto label_21a14c;
            case 0x21A150u: goto label_21a150;
            case 0x21A154u: goto label_21a154;
            case 0x21A158u: goto label_21a158;
            case 0x21A15Cu: goto label_21a15c;
            case 0x21A160u: goto label_21a160;
            case 0x21A164u: goto label_21a164;
            case 0x21A168u: goto label_21a168;
            case 0x21A16Cu: goto label_21a16c;
            case 0x21A170u: goto label_21a170;
            case 0x21A174u: goto label_21a174;
            case 0x21A178u: goto label_21a178;
            case 0x21A17Cu: goto label_21a17c;
            case 0x21A180u: goto label_21a180;
            case 0x21A184u: goto label_21a184;
            case 0x21A188u: goto label_21a188;
            case 0x21A18Cu: goto label_21a18c;
            case 0x21A190u: goto label_21a190;
            case 0x21A194u: goto label_21a194;
            case 0x21A198u: goto label_21a198;
            case 0x21A19Cu: goto label_21a19c;
            case 0x21A1A0u: goto label_21a1a0;
            case 0x21A1A4u: goto label_21a1a4;
            case 0x21A1A8u: goto label_21a1a8;
            case 0x21A1ACu: goto label_21a1ac;
            case 0x21A1B0u: goto label_21a1b0;
            case 0x21A1B4u: goto label_21a1b4;
            case 0x21A1B8u: goto label_21a1b8;
            case 0x21A1BCu: goto label_21a1bc;
            case 0x21A1C0u: goto label_21a1c0;
            case 0x21A1C4u: goto label_21a1c4;
            case 0x21A1C8u: goto label_21a1c8;
            case 0x21A1CCu: goto label_21a1cc;
            case 0x21A1D0u: goto label_21a1d0;
            case 0x21A1D4u: goto label_21a1d4;
            case 0x21A1D8u: goto label_21a1d8;
            case 0x21A1DCu: goto label_21a1dc;
            case 0x21A1E0u: goto label_21a1e0;
            case 0x21A1E4u: goto label_21a1e4;
            case 0x21A1E8u: goto label_21a1e8;
            case 0x21A1ECu: goto label_21a1ec;
            case 0x21A1F0u: goto label_21a1f0;
            case 0x21A1F4u: goto label_21a1f4;
            case 0x21A1F8u: goto label_21a1f8;
            case 0x21A1FCu: goto label_21a1fc;
            case 0x21A200u: goto label_21a200;
            case 0x21A204u: goto label_21a204;
            case 0x21A208u: goto label_21a208;
            case 0x21A20Cu: goto label_21a20c;
            case 0x21A210u: goto label_21a210;
            case 0x21A214u: goto label_21a214;
            case 0x21A218u: goto label_21a218;
            case 0x21A21Cu: goto label_21a21c;
            case 0x21A220u: goto label_21a220;
            case 0x21A224u: goto label_21a224;
            case 0x21A228u: goto label_21a228;
            case 0x21A22Cu: goto label_21a22c;
            case 0x21A230u: goto label_21a230;
            case 0x21A234u: goto label_21a234;
            case 0x21A238u: goto label_21a238;
            case 0x21A23Cu: goto label_21a23c;
            case 0x21A240u: goto label_21a240;
            case 0x21A244u: goto label_21a244;
            case 0x21A248u: goto label_21a248;
            case 0x21A24Cu: goto label_21a24c;
            case 0x21A250u: goto label_21a250;
            case 0x21A254u: goto label_21a254;
            case 0x21A258u: goto label_21a258;
            case 0x21A25Cu: goto label_21a25c;
            case 0x21A260u: goto label_21a260;
            case 0x21A264u: goto label_21a264;
            case 0x21A268u: goto label_21a268;
            case 0x21A26Cu: goto label_21a26c;
            case 0x21A270u: goto label_21a270;
            case 0x21A274u: goto label_21a274;
            case 0x21A278u: goto label_21a278;
            case 0x21A27Cu: goto label_21a27c;
            case 0x21A280u: goto label_21a280;
            case 0x21A284u: goto label_21a284;
            case 0x21A288u: goto label_21a288;
            case 0x21A28Cu: goto label_21a28c;
            case 0x21A290u: goto label_21a290;
            case 0x21A294u: goto label_21a294;
            case 0x21A298u: goto label_21a298;
            case 0x21A29Cu: goto label_21a29c;
            case 0x21A2A0u: goto label_21a2a0;
            case 0x21A2A4u: goto label_21a2a4;
            case 0x21A2A8u: goto label_21a2a8;
            case 0x21A2ACu: goto label_21a2ac;
            case 0x21A2B0u: goto label_21a2b0;
            case 0x21A2B4u: goto label_21a2b4;
            case 0x21A2B8u: goto label_21a2b8;
            case 0x21A2BCu: goto label_21a2bc;
            case 0x21A2C0u: goto label_21a2c0;
            case 0x21A2C4u: goto label_21a2c4;
            case 0x21A2C8u: goto label_21a2c8;
            case 0x21A2CCu: goto label_21a2cc;
            case 0x21A2D0u: goto label_21a2d0;
            case 0x21A2D4u: goto label_21a2d4;
            case 0x21A2D8u: goto label_21a2d8;
            case 0x21A2DCu: goto label_21a2dc;
            case 0x21A2E0u: goto label_21a2e0;
            case 0x21A2E4u: goto label_21a2e4;
            case 0x21A2E8u: goto label_21a2e8;
            case 0x21A2ECu: goto label_21a2ec;
            case 0x21A2F0u: goto label_21a2f0;
            case 0x21A2F4u: goto label_21a2f4;
            case 0x21A2F8u: goto label_21a2f8;
            case 0x21A2FCu: goto label_21a2fc;
            case 0x21A300u: goto label_21a300;
            case 0x21A304u: goto label_21a304;
            case 0x21A308u: goto label_21a308;
            case 0x21A30Cu: goto label_21a30c;
            case 0x21A310u: goto label_21a310;
            case 0x21A314u: goto label_21a314;
            case 0x21A318u: goto label_21a318;
            case 0x21A31Cu: goto label_21a31c;
            case 0x21A320u: goto label_21a320;
            case 0x21A324u: goto label_21a324;
            case 0x21A328u: goto label_21a328;
            case 0x21A32Cu: goto label_21a32c;
            case 0x21A330u: goto label_21a330;
            case 0x21A334u: goto label_21a334;
            case 0x21A338u: goto label_21a338;
            case 0x21A33Cu: goto label_21a33c;
            case 0x21A340u: goto label_21a340;
            case 0x21A344u: goto label_21a344;
            case 0x21A348u: goto label_21a348;
            case 0x21A34Cu: goto label_21a34c;
            case 0x21A350u: goto label_21a350;
            case 0x21A354u: goto label_21a354;
            case 0x21A358u: goto label_21a358;
            case 0x21A35Cu: goto label_21a35c;
            case 0x21A360u: goto label_21a360;
            case 0x21A364u: goto label_21a364;
            case 0x21A368u: goto label_21a368;
            case 0x21A36Cu: goto label_21a36c;
            case 0x21A370u: goto label_21a370;
            case 0x21A374u: goto label_21a374;
            case 0x21A378u: goto label_21a378;
            case 0x21A37Cu: goto label_21a37c;
            case 0x21A380u: goto label_21a380;
            case 0x21A384u: goto label_21a384;
            case 0x21A388u: goto label_21a388;
            case 0x21A38Cu: goto label_21a38c;
            case 0x21A390u: goto label_21a390;
            case 0x21A394u: goto label_21a394;
            case 0x21A398u: goto label_21a398;
            case 0x21A39Cu: goto label_21a39c;
            case 0x21A3A0u: goto label_21a3a0;
            case 0x21A3A4u: goto label_21a3a4;
            case 0x21A3A8u: goto label_21a3a8;
            case 0x21A3ACu: goto label_21a3ac;
            case 0x21A3B0u: goto label_21a3b0;
            case 0x21A3B4u: goto label_21a3b4;
            case 0x21A3B8u: goto label_21a3b8;
            case 0x21A3BCu: goto label_21a3bc;
            case 0x21A3C0u: goto label_21a3c0;
            case 0x21A3C4u: goto label_21a3c4;
            case 0x21A3C8u: goto label_21a3c8;
            case 0x21A3CCu: goto label_21a3cc;
            case 0x21A3D0u: goto label_21a3d0;
            case 0x21A3D4u: goto label_21a3d4;
            case 0x21A3D8u: goto label_21a3d8;
            case 0x21A3DCu: goto label_21a3dc;
            case 0x21A3E0u: goto label_21a3e0;
            case 0x21A3E4u: goto label_21a3e4;
            case 0x21A3E8u: goto label_21a3e8;
            case 0x21A3ECu: goto label_21a3ec;
            case 0x21A3F0u: goto label_21a3f0;
            case 0x21A3F4u: goto label_21a3f4;
            case 0x21A3F8u: goto label_21a3f8;
            case 0x21A3FCu: goto label_21a3fc;
            case 0x21A400u: goto label_21a400;
            case 0x21A404u: goto label_21a404;
            case 0x21A408u: goto label_21a408;
            case 0x21A40Cu: goto label_21a40c;
            case 0x21A410u: goto label_21a410;
            case 0x21A414u: goto label_21a414;
            case 0x21A418u: goto label_21a418;
            case 0x21A41Cu: goto label_21a41c;
            case 0x21A420u: goto label_21a420;
            case 0x21A424u: goto label_21a424;
            case 0x21A428u: goto label_21a428;
            case 0x21A42Cu: goto label_21a42c;
            case 0x21A430u: goto label_21a430;
            case 0x21A434u: goto label_21a434;
            case 0x21A438u: goto label_21a438;
            case 0x21A43Cu: goto label_21a43c;
            case 0x21A440u: goto label_21a440;
            case 0x21A444u: goto label_21a444;
            case 0x21A448u: goto label_21a448;
            case 0x21A44Cu: goto label_21a44c;
            case 0x21A450u: goto label_21a450;
            case 0x21A454u: goto label_21a454;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A370u;
label_21a370:
    // 0x21a370: 0x3c03003c
    ctx->pc = 0x21a370u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a374:
    // 0x21a374: 0x24020001
    ctx->pc = 0x21a374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21a378:
    // 0x21a378: 0x10000017
label_21a37c:
    if (ctx->pc == 0x21A37Cu) {
        ctx->pc = 0x21A37Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        ctx->pc = 0x21A380u;
        goto label_21a380;
    }
    ctx->pc = 0x21A378u;
    {
        const bool branch_taken_0x21a378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A37Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        if (branch_taken_0x21a378) {
            ctx->pc = 0x21A3D8u;
            goto label_21a3d8;
        }
    }
    ctx->pc = 0x21A380u;
label_21a380:
    // 0x21a380: 0x3c03003c
    ctx->pc = 0x21a380u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a384:
    // 0x21a384: 0x24020002
    ctx->pc = 0x21a384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_21a388:
    // 0x21a388: 0x10000013
label_21a38c:
    if (ctx->pc == 0x21A38Cu) {
        ctx->pc = 0x21A38Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        ctx->pc = 0x21A390u;
        goto label_21a390;
    }
    ctx->pc = 0x21A388u;
    {
        const bool branch_taken_0x21a388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A38Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        if (branch_taken_0x21a388) {
            ctx->pc = 0x21A3D8u;
            goto label_21a3d8;
        }
    }
    ctx->pc = 0x21A390u;
label_21a390:
    // 0x21a390: 0x3c03003c
    ctx->pc = 0x21a390u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a394:
    // 0x21a394: 0x24020003
    ctx->pc = 0x21a394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_21a398:
    // 0x21a398: 0x1000000f
label_21a39c:
    if (ctx->pc == 0x21A39Cu) {
        ctx->pc = 0x21A39Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        ctx->pc = 0x21A3A0u;
        goto label_21a3a0;
    }
    ctx->pc = 0x21A398u;
    {
        const bool branch_taken_0x21a398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A39Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        if (branch_taken_0x21a398) {
            ctx->pc = 0x21A3D8u;
            goto label_21a3d8;
        }
    }
    ctx->pc = 0x21A3A0u;
label_21a3a0:
    // 0x21a3a0: 0x3c03003c
    ctx->pc = 0x21a3a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a3a4:
    // 0x21a3a4: 0x24020004
    ctx->pc = 0x21a3a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_21a3a8:
    // 0x21a3a8: 0x1000000b
label_21a3ac:
    if (ctx->pc == 0x21A3ACu) {
        ctx->pc = 0x21A3ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        ctx->pc = 0x21A3B0u;
        goto label_21a3b0;
    }
    ctx->pc = 0x21A3A8u;
    {
        const bool branch_taken_0x21a3a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A3ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        if (branch_taken_0x21a3a8) {
            ctx->pc = 0x21A3D8u;
            goto label_21a3d8;
        }
    }
    ctx->pc = 0x21A3B0u;
label_21a3b0:
    // 0x21a3b0: 0x3c03003c
    ctx->pc = 0x21a3b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a3b4:
    // 0x21a3b4: 0x24020010
    ctx->pc = 0x21a3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_21a3b8:
    // 0x21a3b8: 0x10000007
label_21a3bc:
    if (ctx->pc == 0x21A3BCu) {
        ctx->pc = 0x21A3BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        ctx->pc = 0x21A3C0u;
        goto label_21a3c0;
    }
    ctx->pc = 0x21A3B8u;
    {
        const bool branch_taken_0x21a3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A3BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        if (branch_taken_0x21a3b8) {
            ctx->pc = 0x21A3D8u;
            goto label_21a3d8;
        }
    }
    ctx->pc = 0x21A3C0u;
label_21a3c0:
    // 0x21a3c0: 0x3c03003c
    ctx->pc = 0x21a3c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_21a3c4:
    // 0x21a3c4: 0x24020040
    ctx->pc = 0x21a3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
label_21a3c8:
    // 0x21a3c8: 0x10000003
label_21a3cc:
    if (ctx->pc == 0x21A3CCu) {
        ctx->pc = 0x21A3CCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        ctx->pc = 0x21A3D0u;
        goto label_21a3d0;
    }
    ctx->pc = 0x21A3C8u;
    {
        const bool branch_taken_0x21a3c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A3CCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 2));
        if (branch_taken_0x21a3c8) {
            ctx->pc = 0x21A3D8u;
            goto label_21a3d8;
        }
    }
    ctx->pc = 0x21A3D0u;
label_21a3d0:
    // 0x21a3d0: 0x3c02003c
    ctx->pc = 0x21a3d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a3d4:
    // 0x21a3d4: 0xac40d588
    ctx->pc = 0x21a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956424), GPR_U32(ctx, 0));
label_21a3d8:
    // 0x21a3d8: 0x3c02003c
    ctx->pc = 0x21a3d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a3dc:
    // 0x21a3dc: 0xac40cef0
    ctx->pc = 0x21a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954736), GPR_U32(ctx, 0));
label_21a3e0:
    // 0x21a3e0: 0x3c02003c
    ctx->pc = 0x21a3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a3e4:
    // 0x21a3e4: 0x3a0202d
    ctx->pc = 0x21a3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21a3e8:
    // 0x21a3e8: 0x3c05003a
    ctx->pc = 0x21a3e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_21a3ec:
    // 0x21a3ec: 0x24a56230
    ctx->pc = 0x21a3ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25136));
label_21a3f0:
    // 0x21a3f0: 0xc0b6252
label_21a3f4:
    if (ctx->pc == 0x21A3F4u) {
        ctx->pc = 0x21A3F4u;
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954740)));
        ctx->pc = 0x21A3F8u;
        goto label_21a3f8;
    }
    ctx->pc = 0x21A3F0u;
    SET_GPR_U32(ctx, 31, 0x21A3F8u);
    ctx->pc = 0x21A3F4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294954740)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A3F8u; }
    }
    if (ctx->pc != 0x21A3F8u) { return; }
    ctx->pc = 0x21A3F8u;
label_21a3f8:
    // 0x21a3f8: 0x3c0400ff
    ctx->pc = 0x21a3f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
label_21a3fc:
    // 0x21a3fc: 0x24050002
    ctx->pc = 0x21a3fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_21a400:
    // 0x21a400: 0x24060027
    ctx->pc = 0x21a400u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 39));
label_21a404:
    // 0x21a404: 0xc0b4724
label_21a408:
    if (ctx->pc == 0x21A408u) {
        ctx->pc = 0x21A408u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21A40Cu;
        goto label_21a40c;
    }
    ctx->pc = 0x21A404u;
    SET_GPR_U32(ctx, 31, 0x21A40Cu);
    ctx->pc = 0x21A408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A40Cu; }
    }
    if (ctx->pc != 0x21A40Cu) { return; }
    ctx->pc = 0x21A40Cu;
label_21a40c:
    // 0x21a40c: 0x3c02003c
    ctx->pc = 0x21a40cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21a410:
    // 0x21a410: 0x8c42cef8
    ctx->pc = 0x21a410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954744)));
label_21a414:
    // 0x21a414: 0x3c030800
    ctx->pc = 0x21a414u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
label_21a418:
    // 0x21a418: 0x431024
    ctx->pc = 0x21a418u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a41c:
    // 0x21a41c: 0x10400004
label_21a420:
    if (ctx->pc == 0x21A420u) {
        ctx->pc = 0x21A420u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21A424u;
        goto label_21a424;
    }
    ctx->pc = 0x21A41Cu;
    {
        const bool branch_taken_0x21a41c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A420u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a41c) {
            ctx->pc = 0x21A430u;
            goto label_21a430;
        }
    }
    ctx->pc = 0x21A424u;
label_21a424:
    // 0x21a424: 0xc088ac4
label_21a428:
    if (ctx->pc == 0x21A428u) {
        ctx->pc = 0x21A42Cu;
        goto label_21a42c;
    }
    ctx->pc = 0x21A424u;
    SET_GPR_U32(ctx, 31, 0x21A42Cu);
    ctx->pc = 0x222B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        audio_stop_all_0x222b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A42Cu; }
    }
    if (ctx->pc != 0x21A42Cu) { return; }
    ctx->pc = 0x21A42Cu;
label_21a42c:
    // 0x21a42c: 0x24020001
    ctx->pc = 0x21a42cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21a430:
    // 0x21a430: 0xdfbf00b0
    ctx->pc = 0x21a430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_21a434:
    // 0x21a434: 0xdfb600a0
    ctx->pc = 0x21a434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21a438:
    // 0x21a438: 0xdfb50090
    ctx->pc = 0x21a438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21a43c:
    // 0x21a43c: 0xdfb40080
    ctx->pc = 0x21a43cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_21a440:
    // 0x21a440: 0xdfb30070
    ctx->pc = 0x21a440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21a444:
    // 0x21a444: 0xdfb20060
    ctx->pc = 0x21a444u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21a448:
    // 0x21a448: 0xdfb10050
    ctx->pc = 0x21a448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21a44c:
    // 0x21a44c: 0xdfb00040
    ctx->pc = 0x21a44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21a450:
    // 0x21a450: 0x3e00008
label_21a454:
    if (ctx->pc == 0x21A454u) {
        ctx->pc = 0x21A454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x21A458u;
        goto label_fallthrough_0x21a450;
    }
    ctx->pc = 0x21A450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2196F8u: goto label_2196f8;
            case 0x2196FCu: goto label_2196fc;
            case 0x219700u: goto label_219700;
            case 0x219704u: goto label_219704;
            case 0x219708u: goto label_219708;
            case 0x21970Cu: goto label_21970c;
            case 0x219710u: goto label_219710;
            case 0x219714u: goto label_219714;
            case 0x219718u: goto label_219718;
            case 0x21971Cu: goto label_21971c;
            case 0x219720u: goto label_219720;
            case 0x219724u: goto label_219724;
            case 0x219728u: goto label_219728;
            case 0x21972Cu: goto label_21972c;
            case 0x219730u: goto label_219730;
            case 0x219734u: goto label_219734;
            case 0x219738u: goto label_219738;
            case 0x21973Cu: goto label_21973c;
            case 0x219740u: goto label_219740;
            case 0x219744u: goto label_219744;
            case 0x219748u: goto label_219748;
            case 0x21974Cu: goto label_21974c;
            case 0x219750u: goto label_219750;
            case 0x219754u: goto label_219754;
            case 0x219758u: goto label_219758;
            case 0x21975Cu: goto label_21975c;
            case 0x219760u: goto label_219760;
            case 0x219764u: goto label_219764;
            case 0x219768u: goto label_219768;
            case 0x21976Cu: goto label_21976c;
            case 0x219770u: goto label_219770;
            case 0x219774u: goto label_219774;
            case 0x219778u: goto label_219778;
            case 0x21977Cu: goto label_21977c;
            case 0x219780u: goto label_219780;
            case 0x219784u: goto label_219784;
            case 0x219788u: goto label_219788;
            case 0x21978Cu: goto label_21978c;
            case 0x219790u: goto label_219790;
            case 0x219794u: goto label_219794;
            case 0x219798u: goto label_219798;
            case 0x21979Cu: goto label_21979c;
            case 0x2197A0u: goto label_2197a0;
            case 0x2197A4u: goto label_2197a4;
            case 0x2197A8u: goto label_2197a8;
            case 0x2197ACu: goto label_2197ac;
            case 0x2197B0u: goto label_2197b0;
            case 0x2197B4u: goto label_2197b4;
            case 0x2197B8u: goto label_2197b8;
            case 0x2197BCu: goto label_2197bc;
            case 0x2197C0u: goto label_2197c0;
            case 0x2197C4u: goto label_2197c4;
            case 0x2197C8u: goto label_2197c8;
            case 0x2197CCu: goto label_2197cc;
            case 0x2197D0u: goto label_2197d0;
            case 0x2197D4u: goto label_2197d4;
            case 0x2197D8u: goto label_2197d8;
            case 0x2197DCu: goto label_2197dc;
            case 0x2197E0u: goto label_2197e0;
            case 0x2197E4u: goto label_2197e4;
            case 0x2197E8u: goto label_2197e8;
            case 0x2197ECu: goto label_2197ec;
            case 0x2197F0u: goto label_2197f0;
            case 0x2197F4u: goto label_2197f4;
            case 0x2197F8u: goto label_2197f8;
            case 0x2197FCu: goto label_2197fc;
            case 0x219800u: goto label_219800;
            case 0x219804u: goto label_219804;
            case 0x219808u: goto label_219808;
            case 0x21980Cu: goto label_21980c;
            case 0x219810u: goto label_219810;
            case 0x219814u: goto label_219814;
            case 0x219818u: goto label_219818;
            case 0x21981Cu: goto label_21981c;
            case 0x219820u: goto label_219820;
            case 0x219824u: goto label_219824;
            case 0x219828u: goto label_219828;
            case 0x21982Cu: goto label_21982c;
            case 0x219830u: goto label_219830;
            case 0x219834u: goto label_219834;
            case 0x219838u: goto label_219838;
            case 0x21983Cu: goto label_21983c;
            case 0x219840u: goto label_219840;
            case 0x219844u: goto label_219844;
            case 0x219848u: goto label_219848;
            case 0x21984Cu: goto label_21984c;
            case 0x219850u: goto label_219850;
            case 0x219854u: goto label_219854;
            case 0x219858u: goto label_219858;
            case 0x21985Cu: goto label_21985c;
            case 0x219860u: goto label_219860;
            case 0x219864u: goto label_219864;
            case 0x219868u: goto label_219868;
            case 0x21986Cu: goto label_21986c;
            case 0x219870u: goto label_219870;
            case 0x219874u: goto label_219874;
            case 0x219878u: goto label_219878;
            case 0x21987Cu: goto label_21987c;
            case 0x219880u: goto label_219880;
            case 0x219884u: goto label_219884;
            case 0x219888u: goto label_219888;
            case 0x21988Cu: goto label_21988c;
            case 0x219890u: goto label_219890;
            case 0x219894u: goto label_219894;
            case 0x219898u: goto label_219898;
            case 0x21989Cu: goto label_21989c;
            case 0x2198A0u: goto label_2198a0;
            case 0x2198A4u: goto label_2198a4;
            case 0x2198A8u: goto label_2198a8;
            case 0x2198ACu: goto label_2198ac;
            case 0x2198B0u: goto label_2198b0;
            case 0x2198B4u: goto label_2198b4;
            case 0x2198B8u: goto label_2198b8;
            case 0x2198BCu: goto label_2198bc;
            case 0x2198C0u: goto label_2198c0;
            case 0x2198C4u: goto label_2198c4;
            case 0x2198C8u: goto label_2198c8;
            case 0x2198CCu: goto label_2198cc;
            case 0x2198D0u: goto label_2198d0;
            case 0x2198D4u: goto label_2198d4;
            case 0x2198D8u: goto label_2198d8;
            case 0x2198DCu: goto label_2198dc;
            case 0x2198E0u: goto label_2198e0;
            case 0x2198E4u: goto label_2198e4;
            case 0x2198E8u: goto label_2198e8;
            case 0x2198ECu: goto label_2198ec;
            case 0x2198F0u: goto label_2198f0;
            case 0x2198F4u: goto label_2198f4;
            case 0x2198F8u: goto label_2198f8;
            case 0x2198FCu: goto label_2198fc;
            case 0x219900u: goto label_219900;
            case 0x219904u: goto label_219904;
            case 0x219908u: goto label_219908;
            case 0x21990Cu: goto label_21990c;
            case 0x219910u: goto label_219910;
            case 0x219914u: goto label_219914;
            case 0x219918u: goto label_219918;
            case 0x21991Cu: goto label_21991c;
            case 0x219920u: goto label_219920;
            case 0x219924u: goto label_219924;
            case 0x219928u: goto label_219928;
            case 0x21992Cu: goto label_21992c;
            case 0x219930u: goto label_219930;
            case 0x219934u: goto label_219934;
            case 0x219938u: goto label_219938;
            case 0x21993Cu: goto label_21993c;
            case 0x219940u: goto label_219940;
            case 0x219944u: goto label_219944;
            case 0x219948u: goto label_219948;
            case 0x21994Cu: goto label_21994c;
            case 0x219950u: goto label_219950;
            case 0x219954u: goto label_219954;
            case 0x219958u: goto label_219958;
            case 0x21995Cu: goto label_21995c;
            case 0x219960u: goto label_219960;
            case 0x219964u: goto label_219964;
            case 0x219968u: goto label_219968;
            case 0x21996Cu: goto label_21996c;
            case 0x219970u: goto label_219970;
            case 0x219974u: goto label_219974;
            case 0x219978u: goto label_219978;
            case 0x21997Cu: goto label_21997c;
            case 0x219980u: goto label_219980;
            case 0x219984u: goto label_219984;
            case 0x219988u: goto label_219988;
            case 0x21998Cu: goto label_21998c;
            case 0x219990u: goto label_219990;
            case 0x219994u: goto label_219994;
            case 0x219998u: goto label_219998;
            case 0x21999Cu: goto label_21999c;
            case 0x2199A0u: goto label_2199a0;
            case 0x2199A4u: goto label_2199a4;
            case 0x2199A8u: goto label_2199a8;
            case 0x2199ACu: goto label_2199ac;
            case 0x2199B0u: goto label_2199b0;
            case 0x2199B4u: goto label_2199b4;
            case 0x2199B8u: goto label_2199b8;
            case 0x2199BCu: goto label_2199bc;
            case 0x2199C0u: goto label_2199c0;
            case 0x2199C4u: goto label_2199c4;
            case 0x2199C8u: goto label_2199c8;
            case 0x2199CCu: goto label_2199cc;
            case 0x2199D0u: goto label_2199d0;
            case 0x2199D4u: goto label_2199d4;
            case 0x2199D8u: goto label_2199d8;
            case 0x2199DCu: goto label_2199dc;
            case 0x2199E0u: goto label_2199e0;
            case 0x2199E4u: goto label_2199e4;
            case 0x2199E8u: goto label_2199e8;
            case 0x2199ECu: goto label_2199ec;
            case 0x2199F0u: goto label_2199f0;
            case 0x2199F4u: goto label_2199f4;
            case 0x2199F8u: goto label_2199f8;
            case 0x2199FCu: goto label_2199fc;
            case 0x219A00u: goto label_219a00;
            case 0x219A04u: goto label_219a04;
            case 0x219A08u: goto label_219a08;
            case 0x219A0Cu: goto label_219a0c;
            case 0x219A10u: goto label_219a10;
            case 0x219A14u: goto label_219a14;
            case 0x219A18u: goto label_219a18;
            case 0x219A1Cu: goto label_219a1c;
            case 0x219A20u: goto label_219a20;
            case 0x219A24u: goto label_219a24;
            case 0x219A28u: goto label_219a28;
            case 0x219A2Cu: goto label_219a2c;
            case 0x219A30u: goto label_219a30;
            case 0x219A34u: goto label_219a34;
            case 0x219A38u: goto label_219a38;
            case 0x219A3Cu: goto label_219a3c;
            case 0x219A40u: goto label_219a40;
            case 0x219A44u: goto label_219a44;
            case 0x219A48u: goto label_219a48;
            case 0x219A4Cu: goto label_219a4c;
            case 0x219A50u: goto label_219a50;
            case 0x219A54u: goto label_219a54;
            case 0x219A58u: goto label_219a58;
            case 0x219A5Cu: goto label_219a5c;
            case 0x219A60u: goto label_219a60;
            case 0x219A64u: goto label_219a64;
            case 0x219A68u: goto label_219a68;
            case 0x219A6Cu: goto label_219a6c;
            case 0x219A70u: goto label_219a70;
            case 0x219A74u: goto label_219a74;
            case 0x219A78u: goto label_219a78;
            case 0x219A7Cu: goto label_219a7c;
            case 0x219A80u: goto label_219a80;
            case 0x219A84u: goto label_219a84;
            case 0x219A88u: goto label_219a88;
            case 0x219A8Cu: goto label_219a8c;
            case 0x219A90u: goto label_219a90;
            case 0x219A94u: goto label_219a94;
            case 0x219A98u: goto label_219a98;
            case 0x219A9Cu: goto label_219a9c;
            case 0x219AA0u: goto label_219aa0;
            case 0x219AA4u: goto label_219aa4;
            case 0x219AA8u: goto label_219aa8;
            case 0x219AACu: goto label_219aac;
            case 0x219AB0u: goto label_219ab0;
            case 0x219AB4u: goto label_219ab4;
            case 0x219AB8u: goto label_219ab8;
            case 0x219ABCu: goto label_219abc;
            case 0x219AC0u: goto label_219ac0;
            case 0x219AC4u: goto label_219ac4;
            case 0x219AC8u: goto label_219ac8;
            case 0x219ACCu: goto label_219acc;
            case 0x219AD0u: goto label_219ad0;
            case 0x219AD4u: goto label_219ad4;
            case 0x219AD8u: goto label_219ad8;
            case 0x219ADCu: goto label_219adc;
            case 0x219AE0u: goto label_219ae0;
            case 0x219AE4u: goto label_219ae4;
            case 0x219AE8u: goto label_219ae8;
            case 0x219AECu: goto label_219aec;
            case 0x219AF0u: goto label_219af0;
            case 0x219AF4u: goto label_219af4;
            case 0x219AF8u: goto label_219af8;
            case 0x219AFCu: goto label_219afc;
            case 0x219B00u: goto label_219b00;
            case 0x219B04u: goto label_219b04;
            case 0x219B08u: goto label_219b08;
            case 0x219B0Cu: goto label_219b0c;
            case 0x219B10u: goto label_219b10;
            case 0x219B14u: goto label_219b14;
            case 0x219B18u: goto label_219b18;
            case 0x219B1Cu: goto label_219b1c;
            case 0x219B20u: goto label_219b20;
            case 0x219B24u: goto label_219b24;
            case 0x219B28u: goto label_219b28;
            case 0x219B2Cu: goto label_219b2c;
            case 0x219B30u: goto label_219b30;
            case 0x219B34u: goto label_219b34;
            case 0x219B38u: goto label_219b38;
            case 0x219B3Cu: goto label_219b3c;
            case 0x219B40u: goto label_219b40;
            case 0x219B44u: goto label_219b44;
            case 0x219B48u: goto label_219b48;
            case 0x219B4Cu: goto label_219b4c;
            case 0x219B50u: goto label_219b50;
            case 0x219B54u: goto label_219b54;
            case 0x219B58u: goto label_219b58;
            case 0x219B5Cu: goto label_219b5c;
            case 0x219B60u: goto label_219b60;
            case 0x219B64u: goto label_219b64;
            case 0x219B68u: goto label_219b68;
            case 0x219B6Cu: goto label_219b6c;
            case 0x219B70u: goto label_219b70;
            case 0x219B74u: goto label_219b74;
            case 0x219B78u: goto label_219b78;
            case 0x219B7Cu: goto label_219b7c;
            case 0x219B80u: goto label_219b80;
            case 0x219B84u: goto label_219b84;
            case 0x219B88u: goto label_219b88;
            case 0x219B8Cu: goto label_219b8c;
            case 0x219B90u: goto label_219b90;
            case 0x219B94u: goto label_219b94;
            case 0x219B98u: goto label_219b98;
            case 0x219B9Cu: goto label_219b9c;
            case 0x219BA0u: goto label_219ba0;
            case 0x219BA4u: goto label_219ba4;
            case 0x219BA8u: goto label_219ba8;
            case 0x219BACu: goto label_219bac;
            case 0x219BB0u: goto label_219bb0;
            case 0x219BB4u: goto label_219bb4;
            case 0x219BB8u: goto label_219bb8;
            case 0x219BBCu: goto label_219bbc;
            case 0x219BC0u: goto label_219bc0;
            case 0x219BC4u: goto label_219bc4;
            case 0x219BC8u: goto label_219bc8;
            case 0x219BCCu: goto label_219bcc;
            case 0x219BD0u: goto label_219bd0;
            case 0x219BD4u: goto label_219bd4;
            case 0x219BD8u: goto label_219bd8;
            case 0x219BDCu: goto label_219bdc;
            case 0x219BE0u: goto label_219be0;
            case 0x219BE4u: goto label_219be4;
            case 0x219BE8u: goto label_219be8;
            case 0x219BECu: goto label_219bec;
            case 0x219BF0u: goto label_219bf0;
            case 0x219BF4u: goto label_219bf4;
            case 0x219BF8u: goto label_219bf8;
            case 0x219BFCu: goto label_219bfc;
            case 0x219C00u: goto label_219c00;
            case 0x219C04u: goto label_219c04;
            case 0x219C08u: goto label_219c08;
            case 0x219C0Cu: goto label_219c0c;
            case 0x219C10u: goto label_219c10;
            case 0x219C14u: goto label_219c14;
            case 0x219C18u: goto label_219c18;
            case 0x219C1Cu: goto label_219c1c;
            case 0x219C20u: goto label_219c20;
            case 0x219C24u: goto label_219c24;
            case 0x219C28u: goto label_219c28;
            case 0x219C2Cu: goto label_219c2c;
            case 0x219C30u: goto label_219c30;
            case 0x219C34u: goto label_219c34;
            case 0x219C38u: goto label_219c38;
            case 0x219C3Cu: goto label_219c3c;
            case 0x219C40u: goto label_219c40;
            case 0x219C44u: goto label_219c44;
            case 0x219C48u: goto label_219c48;
            case 0x219C4Cu: goto label_219c4c;
            case 0x219C50u: goto label_219c50;
            case 0x219C54u: goto label_219c54;
            case 0x219C58u: goto label_219c58;
            case 0x219C5Cu: goto label_219c5c;
            case 0x219C60u: goto label_219c60;
            case 0x219C64u: goto label_219c64;
            case 0x219C68u: goto label_219c68;
            case 0x219C6Cu: goto label_219c6c;
            case 0x219C70u: goto label_219c70;
            case 0x219C74u: goto label_219c74;
            case 0x219C78u: goto label_219c78;
            case 0x219C7Cu: goto label_219c7c;
            case 0x219C80u: goto label_219c80;
            case 0x219C84u: goto label_219c84;
            case 0x219C88u: goto label_219c88;
            case 0x219C8Cu: goto label_219c8c;
            case 0x219C90u: goto label_219c90;
            case 0x219C94u: goto label_219c94;
            case 0x219C98u: goto label_219c98;
            case 0x219C9Cu: goto label_219c9c;
            case 0x219CA0u: goto label_219ca0;
            case 0x219CA4u: goto label_219ca4;
            case 0x219CA8u: goto label_219ca8;
            case 0x219CACu: goto label_219cac;
            case 0x219CB0u: goto label_219cb0;
            case 0x219CB4u: goto label_219cb4;
            case 0x219CB8u: goto label_219cb8;
            case 0x219CBCu: goto label_219cbc;
            case 0x219CC0u: goto label_219cc0;
            case 0x219CC4u: goto label_219cc4;
            case 0x219CC8u: goto label_219cc8;
            case 0x219CCCu: goto label_219ccc;
            case 0x219CD0u: goto label_219cd0;
            case 0x219CD4u: goto label_219cd4;
            case 0x219CD8u: goto label_219cd8;
            case 0x219CDCu: goto label_219cdc;
            case 0x219CE0u: goto label_219ce0;
            case 0x219CE4u: goto label_219ce4;
            case 0x219CE8u: goto label_219ce8;
            case 0x219CECu: goto label_219cec;
            case 0x219CF0u: goto label_219cf0;
            case 0x219CF4u: goto label_219cf4;
            case 0x219CF8u: goto label_219cf8;
            case 0x219CFCu: goto label_219cfc;
            case 0x219D00u: goto label_219d00;
            case 0x219D04u: goto label_219d04;
            case 0x219D08u: goto label_219d08;
            case 0x219D0Cu: goto label_219d0c;
            case 0x219D10u: goto label_219d10;
            case 0x219D14u: goto label_219d14;
            case 0x219D18u: goto label_219d18;
            case 0x219D1Cu: goto label_219d1c;
            case 0x219D20u: goto label_219d20;
            case 0x219D24u: goto label_219d24;
            case 0x219D28u: goto label_219d28;
            case 0x219D2Cu: goto label_219d2c;
            case 0x219D30u: goto label_219d30;
            case 0x219D34u: goto label_219d34;
            case 0x219D38u: goto label_219d38;
            case 0x219D3Cu: goto label_219d3c;
            case 0x219D40u: goto label_219d40;
            case 0x219D44u: goto label_219d44;
            case 0x219D48u: goto label_219d48;
            case 0x219D4Cu: goto label_219d4c;
            case 0x219D50u: goto label_219d50;
            case 0x219D54u: goto label_219d54;
            case 0x219D58u: goto label_219d58;
            case 0x219D5Cu: goto label_219d5c;
            case 0x219D60u: goto label_219d60;
            case 0x219D64u: goto label_219d64;
            case 0x219D68u: goto label_219d68;
            case 0x219D6Cu: goto label_219d6c;
            case 0x219D70u: goto label_219d70;
            case 0x219D74u: goto label_219d74;
            case 0x219D78u: goto label_219d78;
            case 0x219D7Cu: goto label_219d7c;
            case 0x219D80u: goto label_219d80;
            case 0x219D84u: goto label_219d84;
            case 0x219D88u: goto label_219d88;
            case 0x219D8Cu: goto label_219d8c;
            case 0x219D90u: goto label_219d90;
            case 0x219D94u: goto label_219d94;
            case 0x219D98u: goto label_219d98;
            case 0x219D9Cu: goto label_219d9c;
            case 0x219DA0u: goto label_219da0;
            case 0x219DA4u: goto label_219da4;
            case 0x219DA8u: goto label_219da8;
            case 0x219DACu: goto label_219dac;
            case 0x219DB0u: goto label_219db0;
            case 0x219DB4u: goto label_219db4;
            case 0x219DB8u: goto label_219db8;
            case 0x219DBCu: goto label_219dbc;
            case 0x219DC0u: goto label_219dc0;
            case 0x219DC4u: goto label_219dc4;
            case 0x219DC8u: goto label_219dc8;
            case 0x219DCCu: goto label_219dcc;
            case 0x219DD0u: goto label_219dd0;
            case 0x219DD4u: goto label_219dd4;
            case 0x219DD8u: goto label_219dd8;
            case 0x219DDCu: goto label_219ddc;
            case 0x219DE0u: goto label_219de0;
            case 0x219DE4u: goto label_219de4;
            case 0x219DE8u: goto label_219de8;
            case 0x219DECu: goto label_219dec;
            case 0x219DF0u: goto label_219df0;
            case 0x219DF4u: goto label_219df4;
            case 0x219DF8u: goto label_219df8;
            case 0x219DFCu: goto label_219dfc;
            case 0x219E00u: goto label_219e00;
            case 0x219E04u: goto label_219e04;
            case 0x219E08u: goto label_219e08;
            case 0x219E0Cu: goto label_219e0c;
            case 0x219E10u: goto label_219e10;
            case 0x219E14u: goto label_219e14;
            case 0x219E18u: goto label_219e18;
            case 0x219E1Cu: goto label_219e1c;
            case 0x219E20u: goto label_219e20;
            case 0x219E24u: goto label_219e24;
            case 0x219E28u: goto label_219e28;
            case 0x219E2Cu: goto label_219e2c;
            case 0x219E30u: goto label_219e30;
            case 0x219E34u: goto label_219e34;
            case 0x219E38u: goto label_219e38;
            case 0x219E3Cu: goto label_219e3c;
            case 0x219E40u: goto label_219e40;
            case 0x219E44u: goto label_219e44;
            case 0x219E48u: goto label_219e48;
            case 0x219E4Cu: goto label_219e4c;
            case 0x219E50u: goto label_219e50;
            case 0x219E54u: goto label_219e54;
            case 0x219E58u: goto label_219e58;
            case 0x219E5Cu: goto label_219e5c;
            case 0x219E60u: goto label_219e60;
            case 0x219E64u: goto label_219e64;
            case 0x219E68u: goto label_219e68;
            case 0x219E6Cu: goto label_219e6c;
            case 0x219E70u: goto label_219e70;
            case 0x219E74u: goto label_219e74;
            case 0x219E78u: goto label_219e78;
            case 0x219E7Cu: goto label_219e7c;
            case 0x219E80u: goto label_219e80;
            case 0x219E84u: goto label_219e84;
            case 0x219E88u: goto label_219e88;
            case 0x219E8Cu: goto label_219e8c;
            case 0x219E90u: goto label_219e90;
            case 0x219E94u: goto label_219e94;
            case 0x219E98u: goto label_219e98;
            case 0x219E9Cu: goto label_219e9c;
            case 0x219EA0u: goto label_219ea0;
            case 0x219EA4u: goto label_219ea4;
            case 0x219EA8u: goto label_219ea8;
            case 0x219EACu: goto label_219eac;
            case 0x219EB0u: goto label_219eb0;
            case 0x219EB4u: goto label_219eb4;
            case 0x219EB8u: goto label_219eb8;
            case 0x219EBCu: goto label_219ebc;
            case 0x219EC0u: goto label_219ec0;
            case 0x219EC4u: goto label_219ec4;
            case 0x219EC8u: goto label_219ec8;
            case 0x219ECCu: goto label_219ecc;
            case 0x219ED0u: goto label_219ed0;
            case 0x219ED4u: goto label_219ed4;
            case 0x219ED8u: goto label_219ed8;
            case 0x219EDCu: goto label_219edc;
            case 0x219EE0u: goto label_219ee0;
            case 0x219EE4u: goto label_219ee4;
            case 0x219EE8u: goto label_219ee8;
            case 0x219EECu: goto label_219eec;
            case 0x219EF0u: goto label_219ef0;
            case 0x219EF4u: goto label_219ef4;
            case 0x219EF8u: goto label_219ef8;
            case 0x219EFCu: goto label_219efc;
            case 0x219F00u: goto label_219f00;
            case 0x219F04u: goto label_219f04;
            case 0x219F08u: goto label_219f08;
            case 0x219F0Cu: goto label_219f0c;
            case 0x219F10u: goto label_219f10;
            case 0x219F14u: goto label_219f14;
            case 0x219F18u: goto label_219f18;
            case 0x219F1Cu: goto label_219f1c;
            case 0x219F20u: goto label_219f20;
            case 0x219F24u: goto label_219f24;
            case 0x219F28u: goto label_219f28;
            case 0x219F2Cu: goto label_219f2c;
            case 0x219F30u: goto label_219f30;
            case 0x219F34u: goto label_219f34;
            case 0x219F38u: goto label_219f38;
            case 0x219F3Cu: goto label_219f3c;
            case 0x219F40u: goto label_219f40;
            case 0x219F44u: goto label_219f44;
            case 0x219F48u: goto label_219f48;
            case 0x219F4Cu: goto label_219f4c;
            case 0x219F50u: goto label_219f50;
            case 0x219F54u: goto label_219f54;
            case 0x219F58u: goto label_219f58;
            case 0x219F5Cu: goto label_219f5c;
            case 0x219F60u: goto label_219f60;
            case 0x219F64u: goto label_219f64;
            case 0x219F68u: goto label_219f68;
            case 0x219F6Cu: goto label_219f6c;
            case 0x219F70u: goto label_219f70;
            case 0x219F74u: goto label_219f74;
            case 0x219F78u: goto label_219f78;
            case 0x219F7Cu: goto label_219f7c;
            case 0x219F80u: goto label_219f80;
            case 0x219F84u: goto label_219f84;
            case 0x219F88u: goto label_219f88;
            case 0x219F8Cu: goto label_219f8c;
            case 0x219F90u: goto label_219f90;
            case 0x219F94u: goto label_219f94;
            case 0x219F98u: goto label_219f98;
            case 0x219F9Cu: goto label_219f9c;
            case 0x219FA0u: goto label_219fa0;
            case 0x219FA4u: goto label_219fa4;
            case 0x219FA8u: goto label_219fa8;
            case 0x219FACu: goto label_219fac;
            case 0x219FB0u: goto label_219fb0;
            case 0x219FB4u: goto label_219fb4;
            case 0x219FB8u: goto label_219fb8;
            case 0x219FBCu: goto label_219fbc;
            case 0x219FC0u: goto label_219fc0;
            case 0x219FC4u: goto label_219fc4;
            case 0x219FC8u: goto label_219fc8;
            case 0x219FCCu: goto label_219fcc;
            case 0x219FD0u: goto label_219fd0;
            case 0x219FD4u: goto label_219fd4;
            case 0x219FD8u: goto label_219fd8;
            case 0x219FDCu: goto label_219fdc;
            case 0x219FE0u: goto label_219fe0;
            case 0x219FE4u: goto label_219fe4;
            case 0x219FE8u: goto label_219fe8;
            case 0x219FECu: goto label_219fec;
            case 0x219FF0u: goto label_219ff0;
            case 0x219FF4u: goto label_219ff4;
            case 0x219FF8u: goto label_219ff8;
            case 0x219FFCu: goto label_219ffc;
            case 0x21A000u: goto label_21a000;
            case 0x21A004u: goto label_21a004;
            case 0x21A008u: goto label_21a008;
            case 0x21A00Cu: goto label_21a00c;
            case 0x21A010u: goto label_21a010;
            case 0x21A014u: goto label_21a014;
            case 0x21A018u: goto label_21a018;
            case 0x21A01Cu: goto label_21a01c;
            case 0x21A020u: goto label_21a020;
            case 0x21A024u: goto label_21a024;
            case 0x21A028u: goto label_21a028;
            case 0x21A02Cu: goto label_21a02c;
            case 0x21A030u: goto label_21a030;
            case 0x21A034u: goto label_21a034;
            case 0x21A038u: goto label_21a038;
            case 0x21A03Cu: goto label_21a03c;
            case 0x21A040u: goto label_21a040;
            case 0x21A044u: goto label_21a044;
            case 0x21A048u: goto label_21a048;
            case 0x21A04Cu: goto label_21a04c;
            case 0x21A050u: goto label_21a050;
            case 0x21A054u: goto label_21a054;
            case 0x21A058u: goto label_21a058;
            case 0x21A05Cu: goto label_21a05c;
            case 0x21A060u: goto label_21a060;
            case 0x21A064u: goto label_21a064;
            case 0x21A068u: goto label_21a068;
            case 0x21A06Cu: goto label_21a06c;
            case 0x21A070u: goto label_21a070;
            case 0x21A074u: goto label_21a074;
            case 0x21A078u: goto label_21a078;
            case 0x21A07Cu: goto label_21a07c;
            case 0x21A080u: goto label_21a080;
            case 0x21A084u: goto label_21a084;
            case 0x21A088u: goto label_21a088;
            case 0x21A08Cu: goto label_21a08c;
            case 0x21A090u: goto label_21a090;
            case 0x21A094u: goto label_21a094;
            case 0x21A098u: goto label_21a098;
            case 0x21A09Cu: goto label_21a09c;
            case 0x21A0A0u: goto label_21a0a0;
            case 0x21A0A4u: goto label_21a0a4;
            case 0x21A0A8u: goto label_21a0a8;
            case 0x21A0ACu: goto label_21a0ac;
            case 0x21A0B0u: goto label_21a0b0;
            case 0x21A0B4u: goto label_21a0b4;
            case 0x21A0B8u: goto label_21a0b8;
            case 0x21A0BCu: goto label_21a0bc;
            case 0x21A0C0u: goto label_21a0c0;
            case 0x21A0C4u: goto label_21a0c4;
            case 0x21A0C8u: goto label_21a0c8;
            case 0x21A0CCu: goto label_21a0cc;
            case 0x21A0D0u: goto label_21a0d0;
            case 0x21A0D4u: goto label_21a0d4;
            case 0x21A0D8u: goto label_21a0d8;
            case 0x21A0DCu: goto label_21a0dc;
            case 0x21A0E0u: goto label_21a0e0;
            case 0x21A0E4u: goto label_21a0e4;
            case 0x21A0E8u: goto label_21a0e8;
            case 0x21A0ECu: goto label_21a0ec;
            case 0x21A0F0u: goto label_21a0f0;
            case 0x21A0F4u: goto label_21a0f4;
            case 0x21A0F8u: goto label_21a0f8;
            case 0x21A0FCu: goto label_21a0fc;
            case 0x21A100u: goto label_21a100;
            case 0x21A104u: goto label_21a104;
            case 0x21A108u: goto label_21a108;
            case 0x21A10Cu: goto label_21a10c;
            case 0x21A110u: goto label_21a110;
            case 0x21A114u: goto label_21a114;
            case 0x21A118u: goto label_21a118;
            case 0x21A11Cu: goto label_21a11c;
            case 0x21A120u: goto label_21a120;
            case 0x21A124u: goto label_21a124;
            case 0x21A128u: goto label_21a128;
            case 0x21A12Cu: goto label_21a12c;
            case 0x21A130u: goto label_21a130;
            case 0x21A134u: goto label_21a134;
            case 0x21A138u: goto label_21a138;
            case 0x21A13Cu: goto label_21a13c;
            case 0x21A140u: goto label_21a140;
            case 0x21A144u: goto label_21a144;
            case 0x21A148u: goto label_21a148;
            case 0x21A14Cu: goto label_21a14c;
            case 0x21A150u: goto label_21a150;
            case 0x21A154u: goto label_21a154;
            case 0x21A158u: goto label_21a158;
            case 0x21A15Cu: goto label_21a15c;
            case 0x21A160u: goto label_21a160;
            case 0x21A164u: goto label_21a164;
            case 0x21A168u: goto label_21a168;
            case 0x21A16Cu: goto label_21a16c;
            case 0x21A170u: goto label_21a170;
            case 0x21A174u: goto label_21a174;
            case 0x21A178u: goto label_21a178;
            case 0x21A17Cu: goto label_21a17c;
            case 0x21A180u: goto label_21a180;
            case 0x21A184u: goto label_21a184;
            case 0x21A188u: goto label_21a188;
            case 0x21A18Cu: goto label_21a18c;
            case 0x21A190u: goto label_21a190;
            case 0x21A194u: goto label_21a194;
            case 0x21A198u: goto label_21a198;
            case 0x21A19Cu: goto label_21a19c;
            case 0x21A1A0u: goto label_21a1a0;
            case 0x21A1A4u: goto label_21a1a4;
            case 0x21A1A8u: goto label_21a1a8;
            case 0x21A1ACu: goto label_21a1ac;
            case 0x21A1B0u: goto label_21a1b0;
            case 0x21A1B4u: goto label_21a1b4;
            case 0x21A1B8u: goto label_21a1b8;
            case 0x21A1BCu: goto label_21a1bc;
            case 0x21A1C0u: goto label_21a1c0;
            case 0x21A1C4u: goto label_21a1c4;
            case 0x21A1C8u: goto label_21a1c8;
            case 0x21A1CCu: goto label_21a1cc;
            case 0x21A1D0u: goto label_21a1d0;
            case 0x21A1D4u: goto label_21a1d4;
            case 0x21A1D8u: goto label_21a1d8;
            case 0x21A1DCu: goto label_21a1dc;
            case 0x21A1E0u: goto label_21a1e0;
            case 0x21A1E4u: goto label_21a1e4;
            case 0x21A1E8u: goto label_21a1e8;
            case 0x21A1ECu: goto label_21a1ec;
            case 0x21A1F0u: goto label_21a1f0;
            case 0x21A1F4u: goto label_21a1f4;
            case 0x21A1F8u: goto label_21a1f8;
            case 0x21A1FCu: goto label_21a1fc;
            case 0x21A200u: goto label_21a200;
            case 0x21A204u: goto label_21a204;
            case 0x21A208u: goto label_21a208;
            case 0x21A20Cu: goto label_21a20c;
            case 0x21A210u: goto label_21a210;
            case 0x21A214u: goto label_21a214;
            case 0x21A218u: goto label_21a218;
            case 0x21A21Cu: goto label_21a21c;
            case 0x21A220u: goto label_21a220;
            case 0x21A224u: goto label_21a224;
            case 0x21A228u: goto label_21a228;
            case 0x21A22Cu: goto label_21a22c;
            case 0x21A230u: goto label_21a230;
            case 0x21A234u: goto label_21a234;
            case 0x21A238u: goto label_21a238;
            case 0x21A23Cu: goto label_21a23c;
            case 0x21A240u: goto label_21a240;
            case 0x21A244u: goto label_21a244;
            case 0x21A248u: goto label_21a248;
            case 0x21A24Cu: goto label_21a24c;
            case 0x21A250u: goto label_21a250;
            case 0x21A254u: goto label_21a254;
            case 0x21A258u: goto label_21a258;
            case 0x21A25Cu: goto label_21a25c;
            case 0x21A260u: goto label_21a260;
            case 0x21A264u: goto label_21a264;
            case 0x21A268u: goto label_21a268;
            case 0x21A26Cu: goto label_21a26c;
            case 0x21A270u: goto label_21a270;
            case 0x21A274u: goto label_21a274;
            case 0x21A278u: goto label_21a278;
            case 0x21A27Cu: goto label_21a27c;
            case 0x21A280u: goto label_21a280;
            case 0x21A284u: goto label_21a284;
            case 0x21A288u: goto label_21a288;
            case 0x21A28Cu: goto label_21a28c;
            case 0x21A290u: goto label_21a290;
            case 0x21A294u: goto label_21a294;
            case 0x21A298u: goto label_21a298;
            case 0x21A29Cu: goto label_21a29c;
            case 0x21A2A0u: goto label_21a2a0;
            case 0x21A2A4u: goto label_21a2a4;
            case 0x21A2A8u: goto label_21a2a8;
            case 0x21A2ACu: goto label_21a2ac;
            case 0x21A2B0u: goto label_21a2b0;
            case 0x21A2B4u: goto label_21a2b4;
            case 0x21A2B8u: goto label_21a2b8;
            case 0x21A2BCu: goto label_21a2bc;
            case 0x21A2C0u: goto label_21a2c0;
            case 0x21A2C4u: goto label_21a2c4;
            case 0x21A2C8u: goto label_21a2c8;
            case 0x21A2CCu: goto label_21a2cc;
            case 0x21A2D0u: goto label_21a2d0;
            case 0x21A2D4u: goto label_21a2d4;
            case 0x21A2D8u: goto label_21a2d8;
            case 0x21A2DCu: goto label_21a2dc;
            case 0x21A2E0u: goto label_21a2e0;
            case 0x21A2E4u: goto label_21a2e4;
            case 0x21A2E8u: goto label_21a2e8;
            case 0x21A2ECu: goto label_21a2ec;
            case 0x21A2F0u: goto label_21a2f0;
            case 0x21A2F4u: goto label_21a2f4;
            case 0x21A2F8u: goto label_21a2f8;
            case 0x21A2FCu: goto label_21a2fc;
            case 0x21A300u: goto label_21a300;
            case 0x21A304u: goto label_21a304;
            case 0x21A308u: goto label_21a308;
            case 0x21A30Cu: goto label_21a30c;
            case 0x21A310u: goto label_21a310;
            case 0x21A314u: goto label_21a314;
            case 0x21A318u: goto label_21a318;
            case 0x21A31Cu: goto label_21a31c;
            case 0x21A320u: goto label_21a320;
            case 0x21A324u: goto label_21a324;
            case 0x21A328u: goto label_21a328;
            case 0x21A32Cu: goto label_21a32c;
            case 0x21A330u: goto label_21a330;
            case 0x21A334u: goto label_21a334;
            case 0x21A338u: goto label_21a338;
            case 0x21A33Cu: goto label_21a33c;
            case 0x21A340u: goto label_21a340;
            case 0x21A344u: goto label_21a344;
            case 0x21A348u: goto label_21a348;
            case 0x21A34Cu: goto label_21a34c;
            case 0x21A350u: goto label_21a350;
            case 0x21A354u: goto label_21a354;
            case 0x21A358u: goto label_21a358;
            case 0x21A35Cu: goto label_21a35c;
            case 0x21A360u: goto label_21a360;
            case 0x21A364u: goto label_21a364;
            case 0x21A368u: goto label_21a368;
            case 0x21A36Cu: goto label_21a36c;
            case 0x21A370u: goto label_21a370;
            case 0x21A374u: goto label_21a374;
            case 0x21A378u: goto label_21a378;
            case 0x21A37Cu: goto label_21a37c;
            case 0x21A380u: goto label_21a380;
            case 0x21A384u: goto label_21a384;
            case 0x21A388u: goto label_21a388;
            case 0x21A38Cu: goto label_21a38c;
            case 0x21A390u: goto label_21a390;
            case 0x21A394u: goto label_21a394;
            case 0x21A398u: goto label_21a398;
            case 0x21A39Cu: goto label_21a39c;
            case 0x21A3A0u: goto label_21a3a0;
            case 0x21A3A4u: goto label_21a3a4;
            case 0x21A3A8u: goto label_21a3a8;
            case 0x21A3ACu: goto label_21a3ac;
            case 0x21A3B0u: goto label_21a3b0;
            case 0x21A3B4u: goto label_21a3b4;
            case 0x21A3B8u: goto label_21a3b8;
            case 0x21A3BCu: goto label_21a3bc;
            case 0x21A3C0u: goto label_21a3c0;
            case 0x21A3C4u: goto label_21a3c4;
            case 0x21A3C8u: goto label_21a3c8;
            case 0x21A3CCu: goto label_21a3cc;
            case 0x21A3D0u: goto label_21a3d0;
            case 0x21A3D4u: goto label_21a3d4;
            case 0x21A3D8u: goto label_21a3d8;
            case 0x21A3DCu: goto label_21a3dc;
            case 0x21A3E0u: goto label_21a3e0;
            case 0x21A3E4u: goto label_21a3e4;
            case 0x21A3E8u: goto label_21a3e8;
            case 0x21A3ECu: goto label_21a3ec;
            case 0x21A3F0u: goto label_21a3f0;
            case 0x21A3F4u: goto label_21a3f4;
            case 0x21A3F8u: goto label_21a3f8;
            case 0x21A3FCu: goto label_21a3fc;
            case 0x21A400u: goto label_21a400;
            case 0x21A404u: goto label_21a404;
            case 0x21A408u: goto label_21a408;
            case 0x21A40Cu: goto label_21a40c;
            case 0x21A410u: goto label_21a410;
            case 0x21A414u: goto label_21a414;
            case 0x21A418u: goto label_21a418;
            case 0x21A41Cu: goto label_21a41c;
            case 0x21A420u: goto label_21a420;
            case 0x21A424u: goto label_21a424;
            case 0x21A428u: goto label_21a428;
            case 0x21A42Cu: goto label_21a42c;
            case 0x21A430u: goto label_21a430;
            case 0x21A434u: goto label_21a434;
            case 0x21A438u: goto label_21a438;
            case 0x21A43Cu: goto label_21a43c;
            case 0x21A440u: goto label_21a440;
            case 0x21A444u: goto label_21a444;
            case 0x21A448u: goto label_21a448;
            case 0x21A44Cu: goto label_21a44c;
            case 0x21A450u: goto label_21a450;
            case 0x21A454u: goto label_21a454;
            default: break;
        }
        return;
    }
label_fallthrough_0x21a450:
    ctx->pc = 0x21A458u;
}
