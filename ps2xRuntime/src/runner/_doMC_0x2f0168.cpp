#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _doMC
// Address: 0x2f0168 - 0x2f02f4
void _doMC_0x2f0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f0168u;

label_2f0168:
    // 0x2f0168: 0x27bdff90
    ctx->pc = 0x2f0168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f016c:
    // 0x2f016c: 0x24020140
    ctx->pc = 0x2f016cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
label_2f0170:
    // 0x2f0170: 0xffb40040
    ctx->pc = 0x2f0170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2f0174:
    // 0x2f0174: 0x80a02d
    ctx->pc = 0x2f0174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0178:
    // 0x2f0178: 0xffb50050
    ctx->pc = 0x2f0178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2f017c:
    // 0x2f017c: 0x2822818
    ctx->pc = 0x2f017cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2f0180:
    // 0x2f0180: 0x3c15003a
    ctx->pc = 0x2f0180u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
label_2f0184:
    // 0x2f0184: 0xffbf0060
    ctx->pc = 0x2f0184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f0188:
    // 0x2f0188: 0x26a43638
    ctx->pc = 0x2f0188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 13880));
label_2f018c:
    // 0x2f018c: 0xffb30030
    ctx->pc = 0x2f018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2f0190:
    // 0x2f0190: 0xffb20020
    ctx->pc = 0x2f0190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2f0194:
    // 0x2f0194: 0xffb10010
    ctx->pc = 0x2f0194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2f0198:
    // 0x2f0198: 0x851021
    ctx->pc = 0x2f0198u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2f019c:
    // 0x2f019c: 0xffb00000
    ctx->pc = 0x2f019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f01a0:
    // 0x2f01a0: 0x8c430138
    ctx->pc = 0x2f01a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_2f01a4:
    // 0x2f01a4: 0x10600018
label_2f01a8:
    if (ctx->pc == 0x2F01A8u) {
        ctx->pc = 0x2F01A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 300));
        ctx->pc = 0x2F01ACu;
        goto label_2f01ac;
    }
    ctx->pc = 0x2F01A4u;
    {
        const bool branch_taken_0x2f01a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F01A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 300));
        if (branch_taken_0x2f01a4) {
            ctx->pc = 0x2F0208u;
            goto label_2f0208;
        }
    }
    ctx->pc = 0x2F01ACu;
label_2f01ac:
    // 0x2f01ac: 0xa33021
    ctx->pc = 0x2f01acu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2f01b0:
    // 0x2f01b0: 0x8cc20000
    ctx->pc = 0x2f01b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f01b4:
    // 0x2f01b4: 0x18400014
label_2f01b8:
    if (ctx->pc == 0x2F01B8u) {
        ctx->pc = 0x2F01B8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F01BCu;
        goto label_2f01bc;
    }
    ctx->pc = 0x2F01B4u;
    {
        const bool branch_taken_0x2f01b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F01B8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f01b4) {
            ctx->pc = 0x2F0208u;
            goto label_2f0208;
        }
    }
    ctx->pc = 0x2F01BCu;
label_2f01bc:
    // 0x2f01bc: 0x24a20048
    ctx->pc = 0x2f01bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 72));
label_2f01c0:
    // 0x2f01c0: 0x24830038
    ctx->pc = 0x2f01c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 56));
label_2f01c4:
    // 0x2f01c4: 0x448821
    ctx->pc = 0x2f01c4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f01c8:
    // 0x2f01c8: 0xc0982d
    ctx->pc = 0x2f01c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f01cc:
    // 0x2f01cc: 0xa38021
    ctx->pc = 0x2f01ccu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2f01d0:
    // 0x2f01d0: 0x8e02fff0
    ctx->pc = 0x2f01d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_2f01d4:
    // 0x2f01d4: 0x0
    ctx->pc = 0x2f01d4u;
    // NOP
label_2f01d8:
    // 0x2f01d8: 0x220202d
    ctx->pc = 0x2f01d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f01dc:
    // 0x2f01dc: 0x40f809
label_2f01e0:
    if (ctx->pc == 0x2F01E0u) {
        ctx->pc = 0x2F01E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2F01E4u;
        goto label_2f01e4;
    }
    ctx->pc = 0x2F01DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F01E4u);
        ctx->pc = 0x2F01E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0168u: goto label_2f0168;
            case 0x2F016Cu: goto label_2f016c;
            case 0x2F0170u: goto label_2f0170;
            case 0x2F0174u: goto label_2f0174;
            case 0x2F0178u: goto label_2f0178;
            case 0x2F017Cu: goto label_2f017c;
            case 0x2F0180u: goto label_2f0180;
            case 0x2F0184u: goto label_2f0184;
            case 0x2F0188u: goto label_2f0188;
            case 0x2F018Cu: goto label_2f018c;
            case 0x2F0190u: goto label_2f0190;
            case 0x2F0194u: goto label_2f0194;
            case 0x2F0198u: goto label_2f0198;
            case 0x2F019Cu: goto label_2f019c;
            case 0x2F01A0u: goto label_2f01a0;
            case 0x2F01A4u: goto label_2f01a4;
            case 0x2F01A8u: goto label_2f01a8;
            case 0x2F01ACu: goto label_2f01ac;
            case 0x2F01B0u: goto label_2f01b0;
            case 0x2F01B4u: goto label_2f01b4;
            case 0x2F01B8u: goto label_2f01b8;
            case 0x2F01BCu: goto label_2f01bc;
            case 0x2F01C0u: goto label_2f01c0;
            case 0x2F01C4u: goto label_2f01c4;
            case 0x2F01C8u: goto label_2f01c8;
            case 0x2F01CCu: goto label_2f01cc;
            case 0x2F01D0u: goto label_2f01d0;
            case 0x2F01D4u: goto label_2f01d4;
            case 0x2F01D8u: goto label_2f01d8;
            case 0x2F01DCu: goto label_2f01dc;
            case 0x2F01E0u: goto label_2f01e0;
            case 0x2F01E4u: goto label_2f01e4;
            case 0x2F01E8u: goto label_2f01e8;
            case 0x2F01ECu: goto label_2f01ec;
            case 0x2F01F0u: goto label_2f01f0;
            case 0x2F01F4u: goto label_2f01f4;
            case 0x2F01F8u: goto label_2f01f8;
            case 0x2F01FCu: goto label_2f01fc;
            case 0x2F0200u: goto label_2f0200;
            case 0x2F0204u: goto label_2f0204;
            case 0x2F0208u: goto label_2f0208;
            case 0x2F020Cu: goto label_2f020c;
            case 0x2F0210u: goto label_2f0210;
            case 0x2F0214u: goto label_2f0214;
            case 0x2F0218u: goto label_2f0218;
            case 0x2F021Cu: goto label_2f021c;
            case 0x2F0220u: goto label_2f0220;
            case 0x2F0224u: goto label_2f0224;
            case 0x2F0228u: goto label_2f0228;
            case 0x2F022Cu: goto label_2f022c;
            case 0x2F0230u: goto label_2f0230;
            case 0x2F0234u: goto label_2f0234;
            case 0x2F0238u: goto label_2f0238;
            case 0x2F023Cu: goto label_2f023c;
            case 0x2F0240u: goto label_2f0240;
            case 0x2F0244u: goto label_2f0244;
            case 0x2F0248u: goto label_2f0248;
            case 0x2F024Cu: goto label_2f024c;
            case 0x2F0250u: goto label_2f0250;
            case 0x2F0254u: goto label_2f0254;
            case 0x2F0258u: goto label_2f0258;
            case 0x2F025Cu: goto label_2f025c;
            case 0x2F0260u: goto label_2f0260;
            case 0x2F0264u: goto label_2f0264;
            case 0x2F0268u: goto label_2f0268;
            case 0x2F026Cu: goto label_2f026c;
            case 0x2F0270u: goto label_2f0270;
            case 0x2F0274u: goto label_2f0274;
            case 0x2F0278u: goto label_2f0278;
            case 0x2F027Cu: goto label_2f027c;
            case 0x2F0280u: goto label_2f0280;
            case 0x2F0284u: goto label_2f0284;
            case 0x2F0288u: goto label_2f0288;
            case 0x2F028Cu: goto label_2f028c;
            case 0x2F0290u: goto label_2f0290;
            case 0x2F0294u: goto label_2f0294;
            case 0x2F0298u: goto label_2f0298;
            case 0x2F029Cu: goto label_2f029c;
            case 0x2F02A0u: goto label_2f02a0;
            case 0x2F02A4u: goto label_2f02a4;
            case 0x2F02A8u: goto label_2f02a8;
            case 0x2F02ACu: goto label_2f02ac;
            case 0x2F02B0u: goto label_2f02b0;
            case 0x2F02B4u: goto label_2f02b4;
            case 0x2F02B8u: goto label_2f02b8;
            case 0x2F02BCu: goto label_2f02bc;
            case 0x2F02C0u: goto label_2f02c0;
            case 0x2F02C4u: goto label_2f02c4;
            case 0x2F02C8u: goto label_2f02c8;
            case 0x2F02CCu: goto label_2f02cc;
            case 0x2F02D0u: goto label_2f02d0;
            case 0x2F02D4u: goto label_2f02d4;
            case 0x2F02D8u: goto label_2f02d8;
            case 0x2F02DCu: goto label_2f02dc;
            case 0x2F02E0u: goto label_2f02e0;
            case 0x2F02E4u: goto label_2f02e4;
            case 0x2F02E8u: goto label_2f02e8;
            case 0x2F02ECu: goto label_2f02ec;
            case 0x2F02F0u: goto label_2f02f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F01E4u; }
            if (ctx->pc != 0x2F01E4u) { return; }
        }
    }
    ctx->pc = 0x2F01E4u;
label_2f01e4:
    // 0x2f01e4: 0x8e030000
    ctx->pc = 0x2f01e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f01e8:
    // 0x2f01e8: 0x26240070
    ctx->pc = 0x2f01e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 112));
label_2f01ec:
    // 0x2f01ec: 0x26100004
    ctx->pc = 0x2f01ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_2f01f0:
    // 0x2f01f0: 0x60f809
label_2f01f4:
    if (ctx->pc == 0x2F01F4u) {
        ctx->pc = 0x2F01F4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = 0x2F01F8u;
        goto label_2f01f8;
    }
    ctx->pc = 0x2F01F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F01F8u);
        ctx->pc = 0x2F01F4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0168u: goto label_2f0168;
            case 0x2F016Cu: goto label_2f016c;
            case 0x2F0170u: goto label_2f0170;
            case 0x2F0174u: goto label_2f0174;
            case 0x2F0178u: goto label_2f0178;
            case 0x2F017Cu: goto label_2f017c;
            case 0x2F0180u: goto label_2f0180;
            case 0x2F0184u: goto label_2f0184;
            case 0x2F0188u: goto label_2f0188;
            case 0x2F018Cu: goto label_2f018c;
            case 0x2F0190u: goto label_2f0190;
            case 0x2F0194u: goto label_2f0194;
            case 0x2F0198u: goto label_2f0198;
            case 0x2F019Cu: goto label_2f019c;
            case 0x2F01A0u: goto label_2f01a0;
            case 0x2F01A4u: goto label_2f01a4;
            case 0x2F01A8u: goto label_2f01a8;
            case 0x2F01ACu: goto label_2f01ac;
            case 0x2F01B0u: goto label_2f01b0;
            case 0x2F01B4u: goto label_2f01b4;
            case 0x2F01B8u: goto label_2f01b8;
            case 0x2F01BCu: goto label_2f01bc;
            case 0x2F01C0u: goto label_2f01c0;
            case 0x2F01C4u: goto label_2f01c4;
            case 0x2F01C8u: goto label_2f01c8;
            case 0x2F01CCu: goto label_2f01cc;
            case 0x2F01D0u: goto label_2f01d0;
            case 0x2F01D4u: goto label_2f01d4;
            case 0x2F01D8u: goto label_2f01d8;
            case 0x2F01DCu: goto label_2f01dc;
            case 0x2F01E0u: goto label_2f01e0;
            case 0x2F01E4u: goto label_2f01e4;
            case 0x2F01E8u: goto label_2f01e8;
            case 0x2F01ECu: goto label_2f01ec;
            case 0x2F01F0u: goto label_2f01f0;
            case 0x2F01F4u: goto label_2f01f4;
            case 0x2F01F8u: goto label_2f01f8;
            case 0x2F01FCu: goto label_2f01fc;
            case 0x2F0200u: goto label_2f0200;
            case 0x2F0204u: goto label_2f0204;
            case 0x2F0208u: goto label_2f0208;
            case 0x2F020Cu: goto label_2f020c;
            case 0x2F0210u: goto label_2f0210;
            case 0x2F0214u: goto label_2f0214;
            case 0x2F0218u: goto label_2f0218;
            case 0x2F021Cu: goto label_2f021c;
            case 0x2F0220u: goto label_2f0220;
            case 0x2F0224u: goto label_2f0224;
            case 0x2F0228u: goto label_2f0228;
            case 0x2F022Cu: goto label_2f022c;
            case 0x2F0230u: goto label_2f0230;
            case 0x2F0234u: goto label_2f0234;
            case 0x2F0238u: goto label_2f0238;
            case 0x2F023Cu: goto label_2f023c;
            case 0x2F0240u: goto label_2f0240;
            case 0x2F0244u: goto label_2f0244;
            case 0x2F0248u: goto label_2f0248;
            case 0x2F024Cu: goto label_2f024c;
            case 0x2F0250u: goto label_2f0250;
            case 0x2F0254u: goto label_2f0254;
            case 0x2F0258u: goto label_2f0258;
            case 0x2F025Cu: goto label_2f025c;
            case 0x2F0260u: goto label_2f0260;
            case 0x2F0264u: goto label_2f0264;
            case 0x2F0268u: goto label_2f0268;
            case 0x2F026Cu: goto label_2f026c;
            case 0x2F0270u: goto label_2f0270;
            case 0x2F0274u: goto label_2f0274;
            case 0x2F0278u: goto label_2f0278;
            case 0x2F027Cu: goto label_2f027c;
            case 0x2F0280u: goto label_2f0280;
            case 0x2F0284u: goto label_2f0284;
            case 0x2F0288u: goto label_2f0288;
            case 0x2F028Cu: goto label_2f028c;
            case 0x2F0290u: goto label_2f0290;
            case 0x2F0294u: goto label_2f0294;
            case 0x2F0298u: goto label_2f0298;
            case 0x2F029Cu: goto label_2f029c;
            case 0x2F02A0u: goto label_2f02a0;
            case 0x2F02A4u: goto label_2f02a4;
            case 0x2F02A8u: goto label_2f02a8;
            case 0x2F02ACu: goto label_2f02ac;
            case 0x2F02B0u: goto label_2f02b0;
            case 0x2F02B4u: goto label_2f02b4;
            case 0x2F02B8u: goto label_2f02b8;
            case 0x2F02BCu: goto label_2f02bc;
            case 0x2F02C0u: goto label_2f02c0;
            case 0x2F02C4u: goto label_2f02c4;
            case 0x2F02C8u: goto label_2f02c8;
            case 0x2F02CCu: goto label_2f02cc;
            case 0x2F02D0u: goto label_2f02d0;
            case 0x2F02D4u: goto label_2f02d4;
            case 0x2F02D8u: goto label_2f02d8;
            case 0x2F02DCu: goto label_2f02dc;
            case 0x2F02E0u: goto label_2f02e0;
            case 0x2F02E4u: goto label_2f02e4;
            case 0x2F02E8u: goto label_2f02e8;
            case 0x2F02ECu: goto label_2f02ec;
            case 0x2F02F0u: goto label_2f02f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F01F8u; }
            if (ctx->pc != 0x2F01F8u) { return; }
        }
    }
    ctx->pc = 0x2F01F8u;
label_2f01f8:
    // 0x2f01f8: 0x8e620000
    ctx->pc = 0x2f01f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f01fc:
    // 0x2f01fc: 0x242102a
    ctx->pc = 0x2f01fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_2f0200:
    // 0x2f0200: 0x5440fff5
label_2f0204:
    if (ctx->pc == 0x2F0204u) {
        ctx->pc = 0x2F0204u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->pc = 0x2F0208u;
        goto label_2f0208;
    }
    ctx->pc = 0x2F0200u;
    {
        const bool branch_taken_0x2f0200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f0200) {
            ctx->pc = 0x2F0204u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->pc = 0x2F01D8u;
            goto label_2f01d8;
        }
    }
    ctx->pc = 0x2F0208u;
label_2f0208:
    // 0x2f0208: 0x24030140
    ctx->pc = 0x2f0208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
label_2f020c:
    // 0x2f020c: 0x26a53638
    ctx->pc = 0x2f020cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 13880));
label_2f0210:
    // 0x2f0210: 0x2832018
    ctx->pc = 0x2f0210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2f0214:
    // 0x2f0214: 0xa41021
    ctx->pc = 0x2f0214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2f0218:
    // 0x2f0218: 0x8c430130
    ctx->pc = 0x2f0218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2f021c:
    // 0x2f021c: 0x10600008
label_2f0220:
    if (ctx->pc == 0x2F0220u) {
        ctx->pc = 0x2F0220u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x2F0224u;
        goto label_2f0224;
    }
    ctx->pc = 0x2F021Cu;
    {
        const bool branch_taken_0x2f021c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F0220u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
        if (branch_taken_0x2f021c) {
            ctx->pc = 0x2F0240u;
            goto label_2f0240;
        }
    }
    ctx->pc = 0x2F0224u;
label_2f0224:
    // 0x2f0224: 0x8c43013c
    ctx->pc = 0x2f0224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_2f0228:
    // 0x2f0228: 0x10600003
label_2f022c:
    if (ctx->pc == 0x2F022Cu) {
        ctx->pc = 0x2F022Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        ctx->pc = 0x2F0230u;
        goto label_2f0230;
    }
    ctx->pc = 0x2F0228u;
    {
        const bool branch_taken_0x2f0228 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F022Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2f0228) {
            ctx->pc = 0x2F0238u;
            goto label_2f0238;
        }
    }
    ctx->pc = 0x2F0230u;
label_2f0230:
    // 0x2f0230: 0xc0bba56
label_2f0234:
    if (ctx->pc == 0x2F0234u) {
        ctx->pc = 0x2F0234u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942568));
        ctx->pc = 0x2F0238u;
        goto label_2f0238;
    }
    ctx->pc = 0x2F0230u;
    SET_GPR_U32(ctx, 31, 0x2F0238u);
    ctx->pc = 0x2F0234u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942568));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0238u; }
    }
    if (ctx->pc != 0x2F0238u) { return; }
    ctx->pc = 0x2F0238u;
label_2f0238:
    // 0x2f0238: 0x24030140
    ctx->pc = 0x2f0238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
label_2f023c:
    // 0x2f023c: 0x26a53638
    ctx->pc = 0x2f023cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 13880));
label_2f0240:
    // 0x2f0240: 0x2832018
    ctx->pc = 0x2f0240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2f0244:
    // 0x2f0244: 0xa41021
    ctx->pc = 0x2f0244u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2f0248:
    // 0x2f0248: 0x8c430130
    ctx->pc = 0x2f0248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_2f024c:
    // 0x2f024c: 0x5060000d
label_2f0250:
    if (ctx->pc == 0x2F0250u) {
        ctx->pc = 0x2F0250u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->pc = 0x2F0254u;
        goto label_2f0254;
    }
    ctx->pc = 0x2F024Cu;
    {
        const bool branch_taken_0x2f024c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f024c) {
            ctx->pc = 0x2F0250u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
            ctx->pc = 0x2F0284u;
            goto label_2f0284;
        }
    }
    ctx->pc = 0x2F0254u;
label_2f0254:
    // 0x2f0254: 0x40182d
    ctx->pc = 0x2f0254u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0258:
    // 0x2f0258: 0x8c440128
    ctx->pc = 0x2f0258u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_2f025c:
    // 0x2f025c: 0x8c650004
    ctx->pc = 0x2f025cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2f0260:
    // 0x2f0260: 0xdfbf0060
    ctx->pc = 0x2f0260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f0264:
    // 0x2f0264: 0xdfb50050
    ctx->pc = 0x2f0264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0268:
    // 0x2f0268: 0xdfb40040
    ctx->pc = 0x2f0268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f026c:
    // 0x2f026c: 0xdfb30030
    ctx->pc = 0x2f026cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0270:
    // 0x2f0270: 0xdfb20020
    ctx->pc = 0x2f0270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0274:
    // 0x2f0274: 0xdfb10010
    ctx->pc = 0x2f0274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0278:
    // 0x2f0278: 0xdfb00000
    ctx->pc = 0x2f0278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f027c:
    // 0x2f027c: 0x80bc41a
label_2f0280:
    if (ctx->pc == 0x2F0280u) {
        ctx->pc = 0x2F0280u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F0284u;
        goto label_2f0284;
    }
    ctx->pc = 0x2F027Cu;
    ctx->pc = 0x2F0280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2F1068u;
    _copyRefImage_0x2f1068(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0284u;
label_2f0284:
    // 0x2f0284: 0x5060000d
label_2f0288:
    if (ctx->pc == 0x2F0288u) {
        ctx->pc = 0x2F0288u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x2F028Cu;
        goto label_2f028c;
    }
    ctx->pc = 0x2F0284u;
    {
        const bool branch_taken_0x2f0284 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f0284) {
            ctx->pc = 0x2F0288u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->pc = 0x2F02BCu;
            goto label_2f02bc;
        }
    }
    ctx->pc = 0x2F028Cu;
label_2f028c:
    // 0x2f028c: 0x3c03003a
    ctx->pc = 0x2f028cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2f0290:
    // 0x2f0290: 0x8c440128
    ctx->pc = 0x2f0290u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_2f0294:
    // 0x2f0294: 0x8c653020
    ctx->pc = 0x2f0294u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12320)));
label_2f0298:
    // 0x2f0298: 0xdfbf0060
    ctx->pc = 0x2f0298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f029c:
    // 0x2f029c: 0xdfb50050
    ctx->pc = 0x2f029cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f02a0:
    // 0x2f02a0: 0xdfb40040
    ctx->pc = 0x2f02a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f02a4:
    // 0x2f02a4: 0xdfb30030
    ctx->pc = 0x2f02a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f02a8:
    // 0x2f02a8: 0xdfb20020
    ctx->pc = 0x2f02a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f02ac:
    // 0x2f02ac: 0xdfb10010
    ctx->pc = 0x2f02acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f02b0:
    // 0x2f02b0: 0xdfb00000
    ctx->pc = 0x2f02b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f02b4:
    // 0x2f02b4: 0x80bc41a
label_2f02b8:
    if (ctx->pc == 0x2F02B8u) {
        ctx->pc = 0x2F02B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F02BCu;
        goto label_2f02bc;
    }
    ctx->pc = 0x2F02B4u;
    ctx->pc = 0x2F02B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2F1068u;
    _copyRefImage_0x2f1068(rdram, ctx, runtime); return;
    ctx->pc = 0x2F02BCu;
label_2f02bc:
    // 0x2f02bc: 0x3c06003a
    ctx->pc = 0x2f02bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
label_2f02c0:
    // 0x2f02c0: 0x40182d
    ctx->pc = 0x2f02c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f02c4:
    // 0x2f02c4: 0x8cc53020
    ctx->pc = 0x2f02c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12320)));
label_2f02c8:
    // 0x2f02c8: 0x8c640128
    ctx->pc = 0x2f02c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 296)));
label_2f02cc:
    // 0x2f02cc: 0x8c460004
    ctx->pc = 0x2f02ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f02d0:
    // 0x2f02d0: 0xdfbf0060
    ctx->pc = 0x2f02d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f02d4:
    // 0x2f02d4: 0xdfb50050
    ctx->pc = 0x2f02d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f02d8:
    // 0x2f02d8: 0xdfb40040
    ctx->pc = 0x2f02d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f02dc:
    // 0x2f02dc: 0xdfb30030
    ctx->pc = 0x2f02dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f02e0:
    // 0x2f02e0: 0xdfb20020
    ctx->pc = 0x2f02e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f02e4:
    // 0x2f02e4: 0xdfb10010
    ctx->pc = 0x2f02e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f02e8:
    // 0x2f02e8: 0xdfb00000
    ctx->pc = 0x2f02e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f02ec:
    // 0x2f02ec: 0x80bc402
label_2f02f0:
    if (ctx->pc == 0x2F02F0u) {
        ctx->pc = 0x2F02F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F02F4u;
        goto label_fallthrough_0x2f02ec;
    }
    ctx->pc = 0x2F02ECu;
    ctx->pc = 0x2F02F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2F1008u;
    _copyAddRefImage_0x2f1008(rdram, ctx, runtime); return;
label_fallthrough_0x2f02ec:
    ctx->pc = 0x2F02F4u;
}
