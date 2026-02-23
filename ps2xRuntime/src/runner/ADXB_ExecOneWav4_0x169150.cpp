#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneWav4
// Address: 0x169150 - 0x1692e4
void ADXB_ExecOneWav4_0x169150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneWav4");


    ctx->pc = 0x169150u;

label_169150:
    // 0x169150: 0x27bdffc0
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_169154:
    // 0x169154: 0x24020001
    ctx->pc = 0x169154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_169158:
    // 0x169158: 0xffb10010
    ctx->pc = 0x169158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16915c:
    // 0x16915c: 0xffb00000
    ctx->pc = 0x16915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_169160:
    // 0x169160: 0xffbf0030
    ctx->pc = 0x169160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_169164:
    // 0x169164: 0x80802d
    ctx->pc = 0x169164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169168:
    // 0x169168: 0xffb20020
    ctx->pc = 0x169168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16916c:
    // 0x16916c: 0x26110050
    ctx->pc = 0x16916cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_169170:
    // 0x169170: 0x8e030004
    ctx->pc = 0x169170u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_169174:
    // 0x169174: 0x1462004b
label_169178:
    if (ctx->pc == 0x169178u) {
        ctx->pc = 0x169178u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x16917Cu;
        goto label_16917c;
    }
    ctx->pc = 0x169174u;
    {
        const bool branch_taken_0x169174 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x169178u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x169174) {
            ctx->pc = 0x1692A4u;
            goto label_1692a4;
        }
    }
    ctx->pc = 0x16917Cu;
label_16917c:
    // 0x16917c: 0xc05cfec
label_169180:
    if (ctx->pc == 0x169180u) {
        ctx->pc = 0x169180u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x169184u;
        goto label_169184;
    }
    ctx->pc = 0x16917Cu;
    SET_GPR_U32(ctx, 31, 0x169184u);
    ctx->pc = 0x169180u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169184u; }
        else if (ctx->pc != 0x169184u) { ctx->pc = 0x169184u; }
    }
    if (ctx->pc != 0x169184u) { return; }
    ctx->pc = 0x169184u;
label_169184:
    // 0x169184: 0x54400047
label_169188:
    if (ctx->pc == 0x169188u) {
        ctx->pc = 0x169188u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x16918Cu;
        goto label_16918c;
    }
    ctx->pc = 0x169184u;
    {
        const bool branch_taken_0x169184 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x169184) {
            ctx->pc = 0x169188u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1692A4u;
            goto label_1692a4;
        }
    }
    ctx->pc = 0x16918Cu;
label_16918c:
    // 0x16918c: 0x8e020088
    ctx->pc = 0x16918cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_169190:
    // 0x169190: 0x26050070
    ctx->pc = 0x169190u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_169194:
    // 0x169194: 0x8e04008c
    ctx->pc = 0x169194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_169198:
    // 0x169198: 0x26060074
    ctx->pc = 0x169198u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_16919c:
    // 0x16919c: 0x40f809
label_1691a0:
    if (ctx->pc == 0x1691A0u) {
        ctx->pc = 0x1691A0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x1691A4u;
        goto label_1691a4;
    }
    ctx->pc = 0x16919Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1691A4u);
        ctx->pc = 0x1691A0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169150u: goto label_169150;
            case 0x169154u: goto label_169154;
            case 0x169158u: goto label_169158;
            case 0x16915Cu: goto label_16915c;
            case 0x169160u: goto label_169160;
            case 0x169164u: goto label_169164;
            case 0x169168u: goto label_169168;
            case 0x16916Cu: goto label_16916c;
            case 0x169170u: goto label_169170;
            case 0x169174u: goto label_169174;
            case 0x169178u: goto label_169178;
            case 0x16917Cu: goto label_16917c;
            case 0x169180u: goto label_169180;
            case 0x169184u: goto label_169184;
            case 0x169188u: goto label_169188;
            case 0x16918Cu: goto label_16918c;
            case 0x169190u: goto label_169190;
            case 0x169194u: goto label_169194;
            case 0x169198u: goto label_169198;
            case 0x16919Cu: goto label_16919c;
            case 0x1691A0u: goto label_1691a0;
            case 0x1691A4u: goto label_1691a4;
            case 0x1691A8u: goto label_1691a8;
            case 0x1691ACu: goto label_1691ac;
            case 0x1691B0u: goto label_1691b0;
            case 0x1691B4u: goto label_1691b4;
            case 0x1691B8u: goto label_1691b8;
            case 0x1691BCu: goto label_1691bc;
            case 0x1691C0u: goto label_1691c0;
            case 0x1691C4u: goto label_1691c4;
            case 0x1691C8u: goto label_1691c8;
            case 0x1691CCu: goto label_1691cc;
            case 0x1691D0u: goto label_1691d0;
            case 0x1691D4u: goto label_1691d4;
            case 0x1691D8u: goto label_1691d8;
            case 0x1691DCu: goto label_1691dc;
            case 0x1691E0u: goto label_1691e0;
            case 0x1691E4u: goto label_1691e4;
            case 0x1691E8u: goto label_1691e8;
            case 0x1691ECu: goto label_1691ec;
            case 0x1691F0u: goto label_1691f0;
            case 0x1691F4u: goto label_1691f4;
            case 0x1691F8u: goto label_1691f8;
            case 0x1691FCu: goto label_1691fc;
            case 0x169200u: goto label_169200;
            case 0x169204u: goto label_169204;
            case 0x169208u: goto label_169208;
            case 0x16920Cu: goto label_16920c;
            case 0x169210u: goto label_169210;
            case 0x169214u: goto label_169214;
            case 0x169218u: goto label_169218;
            case 0x16921Cu: goto label_16921c;
            case 0x169220u: goto label_169220;
            case 0x169224u: goto label_169224;
            case 0x169228u: goto label_169228;
            case 0x16922Cu: goto label_16922c;
            case 0x169230u: goto label_169230;
            case 0x169234u: goto label_169234;
            case 0x169238u: goto label_169238;
            case 0x16923Cu: goto label_16923c;
            case 0x169240u: goto label_169240;
            case 0x169244u: goto label_169244;
            case 0x169248u: goto label_169248;
            case 0x16924Cu: goto label_16924c;
            case 0x169250u: goto label_169250;
            case 0x169254u: goto label_169254;
            case 0x169258u: goto label_169258;
            case 0x16925Cu: goto label_16925c;
            case 0x169260u: goto label_169260;
            case 0x169264u: goto label_169264;
            case 0x169268u: goto label_169268;
            case 0x16926Cu: goto label_16926c;
            case 0x169270u: goto label_169270;
            case 0x169274u: goto label_169274;
            case 0x169278u: goto label_169278;
            case 0x16927Cu: goto label_16927c;
            case 0x169280u: goto label_169280;
            case 0x169284u: goto label_169284;
            case 0x169288u: goto label_169288;
            case 0x16928Cu: goto label_16928c;
            case 0x169290u: goto label_169290;
            case 0x169294u: goto label_169294;
            case 0x169298u: goto label_169298;
            case 0x16929Cu: goto label_16929c;
            case 0x1692A0u: goto label_1692a0;
            case 0x1692A4u: goto label_1692a4;
            case 0x1692A8u: goto label_1692a8;
            case 0x1692ACu: goto label_1692ac;
            case 0x1692B0u: goto label_1692b0;
            case 0x1692B4u: goto label_1692b4;
            case 0x1692B8u: goto label_1692b8;
            case 0x1692BCu: goto label_1692bc;
            case 0x1692C0u: goto label_1692c0;
            case 0x1692C4u: goto label_1692c4;
            case 0x1692C8u: goto label_1692c8;
            case 0x1692CCu: goto label_1692cc;
            case 0x1692D0u: goto label_1692d0;
            case 0x1692D4u: goto label_1692d4;
            case 0x1692D8u: goto label_1692d8;
            case 0x1692DCu: goto label_1692dc;
            case 0x1692E0u: goto label_1692e0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1691A4u; }
            if (ctx->pc != 0x1691A4u) { return; }
        }
    }
    ctx->pc = 0x1691A4u;
label_1691a4:
    // 0x1691a4: 0x8e270020
    ctx->pc = 0x1691a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1691a8:
    // 0x1691a8: 0x24060002
    ctx->pc = 0x1691a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1691ac:
    // 0x1691ac: 0x8e230018
    ctx->pc = 0x1691acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1691b0:
    // 0x1691b0: 0x8e290014
    ctx->pc = 0x1691b0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1691b4:
    // 0x1691b4: 0x71040
    ctx->pc = 0x1691b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
label_1691b8:
    // 0x1691b8: 0x8e240024
    ctx->pc = 0x1691b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1691bc:
    // 0x1691bc: 0x674023
    ctx->pc = 0x1691bcu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1691c0:
    // 0x1691c0: 0x1225021
    ctx->pc = 0x1691c0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1691c4:
    // 0x1691c4: 0x8e250004
    ctx->pc = 0x1691c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1691c8:
    // 0x1691c8: 0x88102a
    ctx->pc = 0x1691c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
label_1691cc:
    // 0x1691cc: 0x8203000e
    ctx->pc = 0x1691ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1691d0:
    // 0x1691d0: 0x82400b
    ctx->pc = 0x1691d0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 4));
label_1691d4:
    // 0x1691d4: 0xa8102a
    ctx->pc = 0x1691d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
label_1691d8:
    // 0x1691d8: 0x9204000e
    ctx->pc = 0x1691d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1691dc:
    // 0x1691dc: 0x1466001b
label_1691e0:
    if (ctx->pc == 0x1691E0u) {
        ctx->pc = 0x1691E0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
        ctx->pc = 0x1691E4u;
        goto label_1691e4;
    }
    ctx->pc = 0x1691DCu;
    {
        const bool branch_taken_0x1691dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x1691E0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
        if (branch_taken_0x1691dc) {
            ctx->pc = 0x16924Cu;
            goto label_16924c;
        }
    }
    ctx->pc = 0x1691E4u;
label_1691e4:
    // 0x1691e4: 0x8e22001c
    ctx->pc = 0x1691e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1691e8:
    // 0x1691e8: 0x471021
    ctx->pc = 0x1691e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1691ec:
    // 0x1691ec: 0x21040
    ctx->pc = 0x1691ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1691f0:
    // 0x1691f0: 0x19000025
label_1691f4:
    if (ctx->pc == 0x1691F4u) {
        ctx->pc = 0x1691F4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x1691F8u;
        goto label_1691f8;
    }
    ctx->pc = 0x1691F0u;
    {
        const bool branch_taken_0x1691f0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1691F4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x1691f0) {
            ctx->pc = 0x169288u;
            goto label_169288;
        }
    }
    ctx->pc = 0x1691F8u;
label_1691f8:
    // 0x1691f8: 0x40382d
    ctx->pc = 0x1691f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1691fc:
    // 0x1691fc: 0x140302d
    ctx->pc = 0x1691fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_169200:
    // 0x169200: 0x240202d
    ctx->pc = 0x169200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_169204:
    // 0x169204: 0x100282d
    ctx->pc = 0x169204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_169208:
    // 0x169208: 0x90830002
    ctx->pc = 0x169208u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_16920c:
    // 0x16920c: 0x24a5ffff
    ctx->pc = 0x16920cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_169210:
    // 0x169210: 0x90820000
    ctx->pc = 0x169210u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_169214:
    // 0x169214: 0x31a00
    ctx->pc = 0x169214u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_169218:
    // 0x169218: 0x431025
    ctx->pc = 0x169218u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16921c:
    // 0x16921c: 0xa4c20000
    ctx->pc = 0x16921cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_169220:
    // 0x169220: 0x24c60002
    ctx->pc = 0x169220u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_169224:
    // 0x169224: 0x90820003
    ctx->pc = 0x169224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_169228:
    // 0x169228: 0x90830001
    ctx->pc = 0x169228u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_16922c:
    // 0x16922c: 0x21200
    ctx->pc = 0x16922cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_169230:
    // 0x169230: 0x24840004
    ctx->pc = 0x169230u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_169234:
    // 0x169234: 0x621825
    ctx->pc = 0x169234u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_169238:
    // 0x169238: 0xa4e30000
    ctx->pc = 0x169238u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_16923c:
    // 0x16923c: 0x14a0fff2
label_169240:
    if (ctx->pc == 0x169240u) {
        ctx->pc = 0x169240u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x169244u;
        goto label_169244;
    }
    ctx->pc = 0x16923Cu;
    {
        const bool branch_taken_0x16923c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x169240u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x16923c) {
            ctx->pc = 0x169208u;
            goto label_169208;
        }
    }
    ctx->pc = 0x169244u;
label_169244:
    // 0x169244: 0x10000010
label_169248:
    if (ctx->pc == 0x169248u) {
        ctx->pc = 0x169248u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16924Cu;
        goto label_16924c;
    }
    ctx->pc = 0x169244u;
    {
        const bool branch_taken_0x169244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169248u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x169244) {
            ctx->pc = 0x169288u;
            goto label_169288;
        }
    }
    ctx->pc = 0x16924Cu;
label_16924c:
    // 0x16924c: 0x1900000e
label_169250:
    if (ctx->pc == 0x169250u) {
        ctx->pc = 0x169250u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169254u;
        goto label_169254;
    }
    ctx->pc = 0x16924Cu;
    {
        const bool branch_taken_0x16924c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x169250u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16924c) {
            ctx->pc = 0x169288u;
            goto label_169288;
        }
    }
    ctx->pc = 0x169254u;
label_169254:
    // 0x169254: 0x240202d
    ctx->pc = 0x169254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_169258:
    // 0x169258: 0x100282d
    ctx->pc = 0x169258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16925c:
    // 0x16925c: 0x0
    ctx->pc = 0x16925cu;
    // NOP
label_169260:
    // 0x169260: 0x90830001
    ctx->pc = 0x169260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_169264:
    // 0x169264: 0x24a5ffff
    ctx->pc = 0x169264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_169268:
    // 0x169268: 0x90820000
    ctx->pc = 0x169268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_16926c:
    // 0x16926c: 0x31a00
    ctx->pc = 0x16926cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_169270:
    // 0x169270: 0x24840002
    ctx->pc = 0x169270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_169274:
    // 0x169274: 0x431025
    ctx->pc = 0x169274u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_169278:
    // 0x169278: 0xa4c20000
    ctx->pc = 0x169278u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_16927c:
    // 0x16927c: 0x14a0fff8
label_169280:
    if (ctx->pc == 0x169280u) {
        ctx->pc = 0x169280u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x169284u;
        goto label_169284;
    }
    ctx->pc = 0x16927Cu;
    {
        const bool branch_taken_0x16927c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x169280u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x16927c) {
            ctx->pc = 0x169260u;
            goto label_169260;
        }
    }
    ctx->pc = 0x169284u;
label_169284:
    // 0x169284: 0x9204000e
    ctx->pc = 0x169284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_169288:
    // 0x169288: 0x41600
    ctx->pc = 0x169288u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_16928c:
    // 0x16928c: 0x24030002
    ctx->pc = 0x16928cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_169290:
    // 0x169290: 0x215c3
    ctx->pc = 0x169290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
label_169294:
    // 0x169294: 0xae030004
    ctx->pc = 0x169294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_169298:
    // 0x169298: 0x1021018
    ctx->pc = 0x169298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_16929c:
    // 0x16929c: 0xae0800a0
    ctx->pc = 0x16929cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 8));
label_1692a0:
    // 0x1692a0: 0xae0200a4
    ctx->pc = 0x1692a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1692a4:
    // 0x1692a4: 0x24020002
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1692a8:
    // 0x1692a8: 0x14620009
label_1692ac:
    if (ctx->pc == 0x1692ACu) {
        ctx->pc = 0x1692ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1692B0u;
        goto label_1692b0;
    }
    ctx->pc = 0x1692A8u;
    {
        const bool branch_taken_0x1692a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1692ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1692a8) {
            ctx->pc = 0x1692D0u;
            goto label_1692d0;
        }
    }
    ctx->pc = 0x1692B0u;
label_1692b0:
    // 0x1692b0: 0x8e030090
    ctx->pc = 0x1692b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1692b4:
    // 0x1692b4: 0x8e040094
    ctx->pc = 0x1692b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1692b8:
    // 0x1692b8: 0x8e0500a4
    ctx->pc = 0x1692b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1692bc:
    // 0x1692bc: 0x60f809
label_1692c0:
    if (ctx->pc == 0x1692C0u) {
        ctx->pc = 0x1692C0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x1692C4u;
        goto label_1692c4;
    }
    ctx->pc = 0x1692BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1692C4u);
        ctx->pc = 0x1692C0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169150u: goto label_169150;
            case 0x169154u: goto label_169154;
            case 0x169158u: goto label_169158;
            case 0x16915Cu: goto label_16915c;
            case 0x169160u: goto label_169160;
            case 0x169164u: goto label_169164;
            case 0x169168u: goto label_169168;
            case 0x16916Cu: goto label_16916c;
            case 0x169170u: goto label_169170;
            case 0x169174u: goto label_169174;
            case 0x169178u: goto label_169178;
            case 0x16917Cu: goto label_16917c;
            case 0x169180u: goto label_169180;
            case 0x169184u: goto label_169184;
            case 0x169188u: goto label_169188;
            case 0x16918Cu: goto label_16918c;
            case 0x169190u: goto label_169190;
            case 0x169194u: goto label_169194;
            case 0x169198u: goto label_169198;
            case 0x16919Cu: goto label_16919c;
            case 0x1691A0u: goto label_1691a0;
            case 0x1691A4u: goto label_1691a4;
            case 0x1691A8u: goto label_1691a8;
            case 0x1691ACu: goto label_1691ac;
            case 0x1691B0u: goto label_1691b0;
            case 0x1691B4u: goto label_1691b4;
            case 0x1691B8u: goto label_1691b8;
            case 0x1691BCu: goto label_1691bc;
            case 0x1691C0u: goto label_1691c0;
            case 0x1691C4u: goto label_1691c4;
            case 0x1691C8u: goto label_1691c8;
            case 0x1691CCu: goto label_1691cc;
            case 0x1691D0u: goto label_1691d0;
            case 0x1691D4u: goto label_1691d4;
            case 0x1691D8u: goto label_1691d8;
            case 0x1691DCu: goto label_1691dc;
            case 0x1691E0u: goto label_1691e0;
            case 0x1691E4u: goto label_1691e4;
            case 0x1691E8u: goto label_1691e8;
            case 0x1691ECu: goto label_1691ec;
            case 0x1691F0u: goto label_1691f0;
            case 0x1691F4u: goto label_1691f4;
            case 0x1691F8u: goto label_1691f8;
            case 0x1691FCu: goto label_1691fc;
            case 0x169200u: goto label_169200;
            case 0x169204u: goto label_169204;
            case 0x169208u: goto label_169208;
            case 0x16920Cu: goto label_16920c;
            case 0x169210u: goto label_169210;
            case 0x169214u: goto label_169214;
            case 0x169218u: goto label_169218;
            case 0x16921Cu: goto label_16921c;
            case 0x169220u: goto label_169220;
            case 0x169224u: goto label_169224;
            case 0x169228u: goto label_169228;
            case 0x16922Cu: goto label_16922c;
            case 0x169230u: goto label_169230;
            case 0x169234u: goto label_169234;
            case 0x169238u: goto label_169238;
            case 0x16923Cu: goto label_16923c;
            case 0x169240u: goto label_169240;
            case 0x169244u: goto label_169244;
            case 0x169248u: goto label_169248;
            case 0x16924Cu: goto label_16924c;
            case 0x169250u: goto label_169250;
            case 0x169254u: goto label_169254;
            case 0x169258u: goto label_169258;
            case 0x16925Cu: goto label_16925c;
            case 0x169260u: goto label_169260;
            case 0x169264u: goto label_169264;
            case 0x169268u: goto label_169268;
            case 0x16926Cu: goto label_16926c;
            case 0x169270u: goto label_169270;
            case 0x169274u: goto label_169274;
            case 0x169278u: goto label_169278;
            case 0x16927Cu: goto label_16927c;
            case 0x169280u: goto label_169280;
            case 0x169284u: goto label_169284;
            case 0x169288u: goto label_169288;
            case 0x16928Cu: goto label_16928c;
            case 0x169290u: goto label_169290;
            case 0x169294u: goto label_169294;
            case 0x169298u: goto label_169298;
            case 0x16929Cu: goto label_16929c;
            case 0x1692A0u: goto label_1692a0;
            case 0x1692A4u: goto label_1692a4;
            case 0x1692A8u: goto label_1692a8;
            case 0x1692ACu: goto label_1692ac;
            case 0x1692B0u: goto label_1692b0;
            case 0x1692B4u: goto label_1692b4;
            case 0x1692B8u: goto label_1692b8;
            case 0x1692BCu: goto label_1692bc;
            case 0x1692C0u: goto label_1692c0;
            case 0x1692C4u: goto label_1692c4;
            case 0x1692C8u: goto label_1692c8;
            case 0x1692CCu: goto label_1692cc;
            case 0x1692D0u: goto label_1692d0;
            case 0x1692D4u: goto label_1692d4;
            case 0x1692D8u: goto label_1692d8;
            case 0x1692DCu: goto label_1692dc;
            case 0x1692E0u: goto label_1692e0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1692C4u; }
            if (ctx->pc != 0x1692C4u) { return; }
        }
    }
    ctx->pc = 0x1692C4u;
label_1692c4:
    // 0x1692c4: 0x24020003
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1692c8:
    // 0x1692c8: 0xae020004
    ctx->pc = 0x1692c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1692cc:
    // 0x1692cc: 0xdfbf0030
    ctx->pc = 0x1692ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1692d0:
    // 0x1692d0: 0xdfb20020
    ctx->pc = 0x1692d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1692d4:
    // 0x1692d4: 0xdfb10010
    ctx->pc = 0x1692d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1692d8:
    // 0x1692d8: 0xdfb00000
    ctx->pc = 0x1692d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1692dc:
    // 0x1692dc: 0x3e00008
label_1692e0:
    if (ctx->pc == 0x1692E0u) {
        ctx->pc = 0x1692E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1692E4u;
        goto label_fallthrough_0x1692dc;
    }
    ctx->pc = 0x1692DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1692E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169150u: goto label_169150;
            case 0x169154u: goto label_169154;
            case 0x169158u: goto label_169158;
            case 0x16915Cu: goto label_16915c;
            case 0x169160u: goto label_169160;
            case 0x169164u: goto label_169164;
            case 0x169168u: goto label_169168;
            case 0x16916Cu: goto label_16916c;
            case 0x169170u: goto label_169170;
            case 0x169174u: goto label_169174;
            case 0x169178u: goto label_169178;
            case 0x16917Cu: goto label_16917c;
            case 0x169180u: goto label_169180;
            case 0x169184u: goto label_169184;
            case 0x169188u: goto label_169188;
            case 0x16918Cu: goto label_16918c;
            case 0x169190u: goto label_169190;
            case 0x169194u: goto label_169194;
            case 0x169198u: goto label_169198;
            case 0x16919Cu: goto label_16919c;
            case 0x1691A0u: goto label_1691a0;
            case 0x1691A4u: goto label_1691a4;
            case 0x1691A8u: goto label_1691a8;
            case 0x1691ACu: goto label_1691ac;
            case 0x1691B0u: goto label_1691b0;
            case 0x1691B4u: goto label_1691b4;
            case 0x1691B8u: goto label_1691b8;
            case 0x1691BCu: goto label_1691bc;
            case 0x1691C0u: goto label_1691c0;
            case 0x1691C4u: goto label_1691c4;
            case 0x1691C8u: goto label_1691c8;
            case 0x1691CCu: goto label_1691cc;
            case 0x1691D0u: goto label_1691d0;
            case 0x1691D4u: goto label_1691d4;
            case 0x1691D8u: goto label_1691d8;
            case 0x1691DCu: goto label_1691dc;
            case 0x1691E0u: goto label_1691e0;
            case 0x1691E4u: goto label_1691e4;
            case 0x1691E8u: goto label_1691e8;
            case 0x1691ECu: goto label_1691ec;
            case 0x1691F0u: goto label_1691f0;
            case 0x1691F4u: goto label_1691f4;
            case 0x1691F8u: goto label_1691f8;
            case 0x1691FCu: goto label_1691fc;
            case 0x169200u: goto label_169200;
            case 0x169204u: goto label_169204;
            case 0x169208u: goto label_169208;
            case 0x16920Cu: goto label_16920c;
            case 0x169210u: goto label_169210;
            case 0x169214u: goto label_169214;
            case 0x169218u: goto label_169218;
            case 0x16921Cu: goto label_16921c;
            case 0x169220u: goto label_169220;
            case 0x169224u: goto label_169224;
            case 0x169228u: goto label_169228;
            case 0x16922Cu: goto label_16922c;
            case 0x169230u: goto label_169230;
            case 0x169234u: goto label_169234;
            case 0x169238u: goto label_169238;
            case 0x16923Cu: goto label_16923c;
            case 0x169240u: goto label_169240;
            case 0x169244u: goto label_169244;
            case 0x169248u: goto label_169248;
            case 0x16924Cu: goto label_16924c;
            case 0x169250u: goto label_169250;
            case 0x169254u: goto label_169254;
            case 0x169258u: goto label_169258;
            case 0x16925Cu: goto label_16925c;
            case 0x169260u: goto label_169260;
            case 0x169264u: goto label_169264;
            case 0x169268u: goto label_169268;
            case 0x16926Cu: goto label_16926c;
            case 0x169270u: goto label_169270;
            case 0x169274u: goto label_169274;
            case 0x169278u: goto label_169278;
            case 0x16927Cu: goto label_16927c;
            case 0x169280u: goto label_169280;
            case 0x169284u: goto label_169284;
            case 0x169288u: goto label_169288;
            case 0x16928Cu: goto label_16928c;
            case 0x169290u: goto label_169290;
            case 0x169294u: goto label_169294;
            case 0x169298u: goto label_169298;
            case 0x16929Cu: goto label_16929c;
            case 0x1692A0u: goto label_1692a0;
            case 0x1692A4u: goto label_1692a4;
            case 0x1692A8u: goto label_1692a8;
            case 0x1692ACu: goto label_1692ac;
            case 0x1692B0u: goto label_1692b0;
            case 0x1692B4u: goto label_1692b4;
            case 0x1692B8u: goto label_1692b8;
            case 0x1692BCu: goto label_1692bc;
            case 0x1692C0u: goto label_1692c0;
            case 0x1692C4u: goto label_1692c4;
            case 0x1692C8u: goto label_1692c8;
            case 0x1692CCu: goto label_1692cc;
            case 0x1692D0u: goto label_1692d0;
            case 0x1692D4u: goto label_1692d4;
            case 0x1692D8u: goto label_1692d8;
            case 0x1692DCu: goto label_1692dc;
            case 0x1692E0u: goto label_1692e0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1692dc:
    ctx->pc = 0x1692E4u;
}
