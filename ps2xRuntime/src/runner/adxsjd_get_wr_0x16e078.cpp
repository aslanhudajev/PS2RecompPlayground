#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsjd_get_wr
// Address: 0x16e078 - 0x16e184
void adxsjd_get_wr_0x16e078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsjd_get_wr");


    ctx->pc = 0x16e078u;

label_16e078:
    // 0x16e078: 0x27bdff70
    ctx->pc = 0x16e078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_16e07c:
    // 0x16e07c: 0xffb70070
    ctx->pc = 0x16e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_16e080:
    // 0x16e080: 0xffb60060
    ctx->pc = 0x16e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_16e084:
    // 0x16e084: 0xc0b82d
    ctx->pc = 0x16e084u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16e088:
    // 0x16e088: 0xffb50050
    ctx->pc = 0x16e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_16e08c:
    // 0x16e08c: 0xa0b02d
    ctx->pc = 0x16e08cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e090:
    // 0x16e090: 0xffb30030
    ctx->pc = 0x16e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_16e094:
    // 0x16e094: 0xe0a82d
    ctx->pc = 0x16e094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16e098:
    // 0x16e098: 0xffb20020
    ctx->pc = 0x16e098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16e09c:
    // 0x16e09c: 0x982d
    ctx->pc = 0x16e09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e0a0:
    // 0x16e0a0: 0xffb10010
    ctx->pc = 0x16e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16e0a4:
    // 0x16e0a4: 0xffb00000
    ctx->pc = 0x16e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e0a8:
    // 0x16e0a8: 0x80882d
    ctx->pc = 0x16e0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e0ac:
    // 0x16e0ac: 0xffbf0080
    ctx->pc = 0x16e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_16e0b0:
    // 0x16e0b0: 0x2632001c
    ctx->pc = 0x16e0b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 28));
label_16e0b4:
    // 0x16e0b4: 0xffb40040
    ctx->pc = 0x16e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_16e0b8:
    // 0x16e0b8: 0x2630000c
    ctx->pc = 0x16e0b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
label_16e0bc:
    // 0x16e0bc: 0x1000000b
label_16e0c0:
    if (ctx->pc == 0x16E0C0u) {
        ctx->pc = 0x16E0C0u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x16E0C4u;
        goto label_16e0c4;
    }
    ctx->pc = 0x16E0BCu;
    {
        const bool branch_taken_0x16e0bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E0C0u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x16e0bc) {
            ctx->pc = 0x16E0ECu;
            goto label_16e0ec;
        }
    }
    ctx->pc = 0x16E0C4u;
label_16e0c4:
    // 0x16e0c4: 0x0
    ctx->pc = 0x16e0c4u;
    // NOP
label_16e0c8:
    // 0x16e0c8: 0x240382d
    ctx->pc = 0x16e0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e0cc:
    // 0x16e0cc: 0x282d
    ctx->pc = 0x16e0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e0d0:
    // 0x16e0d0: 0x24064000
    ctx->pc = 0x16e0d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
label_16e0d4:
    // 0x16e0d4: 0x8c830000
    ctx->pc = 0x16e0d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e0d8:
    // 0x16e0d8: 0x26520008
    ctx->pc = 0x16e0d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
label_16e0dc:
    // 0x16e0dc: 0x26100004
    ctx->pc = 0x16e0dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_16e0e0:
    // 0x16e0e0: 0x8c620018
    ctx->pc = 0x16e0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16e0e4:
    // 0x16e0e4: 0x40f809
label_16e0e8:
    if (ctx->pc == 0x16E0E8u) {
        ctx->pc = 0x16E0E8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x16E0ECu;
        goto label_16e0ec;
    }
    ctx->pc = 0x16E0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E0ECu);
        ctx->pc = 0x16E0E8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E078u: goto label_16e078;
            case 0x16E07Cu: goto label_16e07c;
            case 0x16E080u: goto label_16e080;
            case 0x16E084u: goto label_16e084;
            case 0x16E088u: goto label_16e088;
            case 0x16E08Cu: goto label_16e08c;
            case 0x16E090u: goto label_16e090;
            case 0x16E094u: goto label_16e094;
            case 0x16E098u: goto label_16e098;
            case 0x16E09Cu: goto label_16e09c;
            case 0x16E0A0u: goto label_16e0a0;
            case 0x16E0A4u: goto label_16e0a4;
            case 0x16E0A8u: goto label_16e0a8;
            case 0x16E0ACu: goto label_16e0ac;
            case 0x16E0B0u: goto label_16e0b0;
            case 0x16E0B4u: goto label_16e0b4;
            case 0x16E0B8u: goto label_16e0b8;
            case 0x16E0BCu: goto label_16e0bc;
            case 0x16E0C0u: goto label_16e0c0;
            case 0x16E0C4u: goto label_16e0c4;
            case 0x16E0C8u: goto label_16e0c8;
            case 0x16E0CCu: goto label_16e0cc;
            case 0x16E0D0u: goto label_16e0d0;
            case 0x16E0D4u: goto label_16e0d4;
            case 0x16E0D8u: goto label_16e0d8;
            case 0x16E0DCu: goto label_16e0dc;
            case 0x16E0E0u: goto label_16e0e0;
            case 0x16E0E4u: goto label_16e0e4;
            case 0x16E0E8u: goto label_16e0e8;
            case 0x16E0ECu: goto label_16e0ec;
            case 0x16E0F0u: goto label_16e0f0;
            case 0x16E0F4u: goto label_16e0f4;
            case 0x16E0F8u: goto label_16e0f8;
            case 0x16E0FCu: goto label_16e0fc;
            case 0x16E100u: goto label_16e100;
            case 0x16E104u: goto label_16e104;
            case 0x16E108u: goto label_16e108;
            case 0x16E10Cu: goto label_16e10c;
            case 0x16E110u: goto label_16e110;
            case 0x16E114u: goto label_16e114;
            case 0x16E118u: goto label_16e118;
            case 0x16E11Cu: goto label_16e11c;
            case 0x16E120u: goto label_16e120;
            case 0x16E124u: goto label_16e124;
            case 0x16E128u: goto label_16e128;
            case 0x16E12Cu: goto label_16e12c;
            case 0x16E130u: goto label_16e130;
            case 0x16E134u: goto label_16e134;
            case 0x16E138u: goto label_16e138;
            case 0x16E13Cu: goto label_16e13c;
            case 0x16E140u: goto label_16e140;
            case 0x16E144u: goto label_16e144;
            case 0x16E148u: goto label_16e148;
            case 0x16E14Cu: goto label_16e14c;
            case 0x16E150u: goto label_16e150;
            case 0x16E154u: goto label_16e154;
            case 0x16E158u: goto label_16e158;
            case 0x16E15Cu: goto label_16e15c;
            case 0x16E160u: goto label_16e160;
            case 0x16E164u: goto label_16e164;
            case 0x16E168u: goto label_16e168;
            case 0x16E16Cu: goto label_16e16c;
            case 0x16E170u: goto label_16e170;
            case 0x16E174u: goto label_16e174;
            case 0x16E178u: goto label_16e178;
            case 0x16E17Cu: goto label_16e17c;
            case 0x16E180u: goto label_16e180;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E0ECu; }
            if (ctx->pc != 0x16E0ECu) { return; }
        }
    }
    ctx->pc = 0x16E0ECu;
label_16e0ec:
    // 0x16e0ec: 0xc059ffe
label_16e0f0:
    if (ctx->pc == 0x16E0F0u) {
        ctx->pc = 0x16E0F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x16E0F4u;
        goto label_16e0f4;
    }
    ctx->pc = 0x16E0ECu;
    SET_GPR_U32(ctx, 31, 0x16E0F4u);
    ctx->pc = 0x16E0F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x167FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetNumChan_0x167ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0F4u; }
        else if (ctx->pc != 0x16E0F4u) { ctx->pc = 0x16E0F4u; }
    }
    if (ctx->pc != 0x16E0F4u) { return; }
    ctx->pc = 0x16E0F4u;
label_16e0f4:
    // 0x16e0f4: 0x262102a
    ctx->pc = 0x16e0f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_16e0f8:
    // 0x16e0f8: 0x5440fff3
label_16e0fc:
    if (ctx->pc == 0x16E0FCu) {
        ctx->pc = 0x16E0FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16E100u;
        goto label_16e100;
    }
    ctx->pc = 0x16E0F8u;
    {
        const bool branch_taken_0x16e0f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e0f8) {
            ctx->pc = 0x16E0FCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16E0C8u;
            goto label_16e0c8;
        }
    }
    ctx->pc = 0x16E100u;
label_16e100:
    // 0x16e100: 0xc05f2bc
label_16e104:
    if (ctx->pc == 0x16E104u) {
        ctx->pc = 0x16E104u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E108u;
        goto label_16e108;
    }
    ctx->pc = 0x16E100u;
    SET_GPR_U32(ctx, 31, 0x16E108u);
    ctx->pc = 0x16E104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17CAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_GetBufPtr_0x17caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E108u; }
        else if (ctx->pc != 0x16E108u) { ctx->pc = 0x16E108u; }
    }
    if (ctx->pc != 0x16E108u) { return; }
    ctx->pc = 0x16E108u;
label_16e108:
    // 0x16e108: 0x8e23001c
    ctx->pc = 0x16e108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_16e10c:
    // 0x16e10c: 0x621823
    ctx->pc = 0x16e10cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16e110:
    // 0x16e110: 0x31842
    ctx->pc = 0x16e110u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
label_16e114:
    // 0x16e114: 0xaec30000
    ctx->pc = 0x16e114u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_16e118:
    // 0x16e118: 0x8e220020
    ctx->pc = 0x16e118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_16e11c:
    // 0x16e11c: 0x8e230038
    ctx->pc = 0x16e11cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_16e120:
    // 0x16e120: 0x21042
    ctx->pc = 0x16e120u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_16e124:
    // 0x16e124: 0x43202a
    ctx->pc = 0x16e124u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_16e128:
    // 0x16e128: 0x44180b
    ctx->pc = 0x16e128u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
label_16e12c:
    // 0x16e12c: 0xaee30000
    ctx->pc = 0x16e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_16e130:
    // 0x16e130: 0x8e23003c
    ctx->pc = 0x16e130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_16e134:
    // 0x16e134: 0x4620004
label_16e138:
    if (ctx->pc == 0x16E138u) {
        ctx->pc = 0x16E138u;
        SET_GPR_U32(ctx, 2, ((uint32_t)8191 << 16));
        ctx->pc = 0x16E13Cu;
        goto label_16e13c;
    }
    ctx->pc = 0x16E134u;
    {
        const bool branch_taken_0x16e134 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16e134) {
            ctx->pc = 0x16E138u;
            SET_GPR_U32(ctx, 2, ((uint32_t)8191 << 16));
            ctx->pc = 0x16E148u;
            goto label_16e148;
        }
    }
    ctx->pc = 0x16E13Cu;
label_16e13c:
    // 0x16e13c: 0x8e220040
    ctx->pc = 0x16e13cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_16e140:
    // 0x16e140: 0x10000002
label_16e144:
    if (ctx->pc == 0x16E144u) {
        ctx->pc = 0x16E144u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x16E148u;
        goto label_16e148;
    }
    ctx->pc = 0x16E140u;
    {
        const bool branch_taken_0x16e140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E144u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x16e140) {
            ctx->pc = 0x16E14Cu;
            goto label_16e14c;
        }
    }
    ctx->pc = 0x16E148u;
label_16e148:
    // 0x16e148: 0x3442ffff
    ctx->pc = 0x16e148u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_16e14c:
    // 0x16e14c: 0xaea20000
    ctx->pc = 0x16e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_16e150:
    // 0x16e150: 0xc059ff8
label_16e154:
    if (ctx->pc == 0x16E154u) {
        ctx->pc = 0x16E154u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x16E158u;
        goto label_16e158;
    }
    ctx->pc = 0x16E150u;
    SET_GPR_U32(ctx, 31, 0x16E158u);
    ctx->pc = 0x16E154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x167FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetPcmBuf_0x167fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E158u; }
        else if (ctx->pc != 0x16E158u) { ctx->pc = 0x16E158u; }
    }
    if (ctx->pc != 0x16E158u) { return; }
    ctx->pc = 0x16E158u;
label_16e158:
    // 0x16e158: 0xdfbf0080
    ctx->pc = 0x16e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16e15c:
    // 0x16e15c: 0xdfb70070
    ctx->pc = 0x16e15cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16e160:
    // 0x16e160: 0xdfb60060
    ctx->pc = 0x16e160u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16e164:
    // 0x16e164: 0xdfb50050
    ctx->pc = 0x16e164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16e168:
    // 0x16e168: 0xdfb40040
    ctx->pc = 0x16e168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16e16c:
    // 0x16e16c: 0xdfb30030
    ctx->pc = 0x16e16cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e170:
    // 0x16e170: 0xdfb20020
    ctx->pc = 0x16e170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e174:
    // 0x16e174: 0xdfb10010
    ctx->pc = 0x16e174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e178:
    // 0x16e178: 0xdfb00000
    ctx->pc = 0x16e178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e17c:
    // 0x16e17c: 0x3e00008
label_16e180:
    if (ctx->pc == 0x16E180u) {
        ctx->pc = 0x16E180u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16E184u;
        goto label_fallthrough_0x16e17c;
    }
    ctx->pc = 0x16E17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E180u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E078u: goto label_16e078;
            case 0x16E07Cu: goto label_16e07c;
            case 0x16E080u: goto label_16e080;
            case 0x16E084u: goto label_16e084;
            case 0x16E088u: goto label_16e088;
            case 0x16E08Cu: goto label_16e08c;
            case 0x16E090u: goto label_16e090;
            case 0x16E094u: goto label_16e094;
            case 0x16E098u: goto label_16e098;
            case 0x16E09Cu: goto label_16e09c;
            case 0x16E0A0u: goto label_16e0a0;
            case 0x16E0A4u: goto label_16e0a4;
            case 0x16E0A8u: goto label_16e0a8;
            case 0x16E0ACu: goto label_16e0ac;
            case 0x16E0B0u: goto label_16e0b0;
            case 0x16E0B4u: goto label_16e0b4;
            case 0x16E0B8u: goto label_16e0b8;
            case 0x16E0BCu: goto label_16e0bc;
            case 0x16E0C0u: goto label_16e0c0;
            case 0x16E0C4u: goto label_16e0c4;
            case 0x16E0C8u: goto label_16e0c8;
            case 0x16E0CCu: goto label_16e0cc;
            case 0x16E0D0u: goto label_16e0d0;
            case 0x16E0D4u: goto label_16e0d4;
            case 0x16E0D8u: goto label_16e0d8;
            case 0x16E0DCu: goto label_16e0dc;
            case 0x16E0E0u: goto label_16e0e0;
            case 0x16E0E4u: goto label_16e0e4;
            case 0x16E0E8u: goto label_16e0e8;
            case 0x16E0ECu: goto label_16e0ec;
            case 0x16E0F0u: goto label_16e0f0;
            case 0x16E0F4u: goto label_16e0f4;
            case 0x16E0F8u: goto label_16e0f8;
            case 0x16E0FCu: goto label_16e0fc;
            case 0x16E100u: goto label_16e100;
            case 0x16E104u: goto label_16e104;
            case 0x16E108u: goto label_16e108;
            case 0x16E10Cu: goto label_16e10c;
            case 0x16E110u: goto label_16e110;
            case 0x16E114u: goto label_16e114;
            case 0x16E118u: goto label_16e118;
            case 0x16E11Cu: goto label_16e11c;
            case 0x16E120u: goto label_16e120;
            case 0x16E124u: goto label_16e124;
            case 0x16E128u: goto label_16e128;
            case 0x16E12Cu: goto label_16e12c;
            case 0x16E130u: goto label_16e130;
            case 0x16E134u: goto label_16e134;
            case 0x16E138u: goto label_16e138;
            case 0x16E13Cu: goto label_16e13c;
            case 0x16E140u: goto label_16e140;
            case 0x16E144u: goto label_16e144;
            case 0x16E148u: goto label_16e148;
            case 0x16E14Cu: goto label_16e14c;
            case 0x16E150u: goto label_16e150;
            case 0x16E154u: goto label_16e154;
            case 0x16E158u: goto label_16e158;
            case 0x16E15Cu: goto label_16e15c;
            case 0x16E160u: goto label_16e160;
            case 0x16E164u: goto label_16e164;
            case 0x16E168u: goto label_16e168;
            case 0x16E16Cu: goto label_16e16c;
            case 0x16E170u: goto label_16e170;
            case 0x16E174u: goto label_16e174;
            case 0x16E178u: goto label_16e178;
            case 0x16E17Cu: goto label_16e17c;
            case 0x16E180u: goto label_16e180;
            default: break;
        }
        return;
    }
label_fallthrough_0x16e17c:
    ctx->pc = 0x16E184u;
}
