#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AU_GetInfo
// Address: 0x167108 - 0x167418
void AU_GetInfo_0x167108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AU_GetInfo");


    ctx->pc = 0x167108u;

    // 0x167108: 0x27bdffd0
    ctx->pc = 0x167108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16710c: 0x80782d
    ctx->pc = 0x16710cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167110: 0xffb20020
    ctx->pc = 0x167110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x167114: 0x3c0c0064
    ctx->pc = 0x167114u;
    SET_GPR_U32(ctx, 12, ((uint32_t)100 << 16));
    // 0x167118: 0xffb10010
    ctx->pc = 0x167118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16711c: 0xe0902d
    ctx->pc = 0x16711cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167120: 0xffb00000
    ctx->pc = 0x167120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167124: 0xc0882d
    ctx->pc = 0x167124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167128: 0xa0802d
    ctx->pc = 0x167128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16712c: 0x100702d
    ctx->pc = 0x16712cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167130: 0x91eb0003
    ctx->pc = 0x167130u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x167134: 0x120c82d
    ctx->pc = 0x167134u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167138: 0x91e30002
    ctx->pc = 0x167138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x16713c: 0x358c732e
    ctx->pc = 0x16713cu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), 29486));
    // 0x167140: 0x91e40001
    ctx->pc = 0x167140u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x167144: 0xb5e00
    ctx->pc = 0x167144u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 24));
    // 0x167148: 0x91e20000
    ctx->pc = 0x167148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x16714c: 0x31c00
    ctx->pc = 0x16714cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x167150: 0x42200
    ctx->pc = 0x167150u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x167154: 0x4b1025
    ctx->pc = 0x167154u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x167158: 0x641825
    ctx->pc = 0x167158u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16715c: 0x431825
    ctx->pc = 0x16715cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167160: 0x106c0005
    ctx->pc = 0x167160u;
    {
        const bool branch_taken_0x167160 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 12));
        ctx->pc = 0x167164u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 15), 4));
        if (branch_taken_0x167160) {
            ctx->pc = 0x167178u;
            goto label_167178;
        }
    }
    ctx->pc = 0x167168u;
    // 0x167168: 0x3c02646e
    ctx->pc = 0x167168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)25710 << 16));
    // 0x16716c: 0x3442732e
    ctx->pc = 0x16716cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 29486));
    // 0x167170: 0x146200a4
    ctx->pc = 0x167170u;
    {
        const bool branch_taken_0x167170 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x167174u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167170) {
            ctx->pc = 0x167404u;
            goto label_167404;
        }
    }
    ctx->pc = 0x167178u;
label_167178:
    // 0x167178: 0x91650003
    ctx->pc = 0x167178u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x16717c: 0x3c1800ff
    ctx->pc = 0x16717cu;
    SET_GPR_U32(ctx, 24, ((uint32_t)255 << 16));
    // 0x167180: 0x91620002
    ctx->pc = 0x167180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x167184: 0x91640001
    ctx->pc = 0x167184u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x167188: 0x52e00
    ctx->pc = 0x167188u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16718c: 0x91630000
    ctx->pc = 0x16718cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x167190: 0x21400
    ctx->pc = 0x167190u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x167194: 0x42200
    ctx->pc = 0x167194u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x167198: 0x651825
    ctx->pc = 0x167198u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16719c: 0x441025
    ctx->pc = 0x16719cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1671a0: 0x626825
    ctx->pc = 0x1671a0u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1671a4: 0xd2a02
    ctx->pc = 0x1671a4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 13), 8));
    // 0x1671a8: 0xd2200
    ctx->pc = 0x1671a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 13), 8));
    // 0x1671ac: 0xd1e00
    ctx->pc = 0x1671acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 13), 24));
    // 0x1671b0: 0xd1602
    ctx->pc = 0x1671b0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), 24));
    // 0x1671b4: 0x982024
    ctx->pc = 0x1671b4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x1671b8: 0x30a5ff00
    ctx->pc = 0x1671b8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x1671bc: 0x431025
    ctx->pc = 0x1671bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1671c0: 0x852025
    ctx->pc = 0x1671c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1671c4: 0x446825
    ctx->pc = 0x1671c4u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1671c8: 0x20d182a
    ctx->pc = 0x1671c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 13)));
    // 0x1671cc: 0x14600044
    ctx->pc = 0x1671CCu;
    {
        const bool branch_taken_0x1671cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1671D0u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1671cc) {
            ctx->pc = 0x1672E0u;
            goto label_1672e0;
        }
    }
    ctx->pc = 0x1671D4u;
    // 0x1671d4: 0x91630003
    ctx->pc = 0x1671d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1671d8: 0x24100002
    ctx->pc = 0x1671d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1671dc: 0x91680000
    ctx->pc = 0x1671dcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1671e0: 0x91660002
    ctx->pc = 0x1671e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1671e4: 0x31e00
    ctx->pc = 0x1671e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x1671e8: 0x91670001
    ctx->pc = 0x1671e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1671ec: 0x1034025
    ctx->pc = 0x1671ecu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1671f0: 0x256b0004
    ctx->pc = 0x1671f0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x1671f4: 0x63400
    ctx->pc = 0x1671f4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x1671f8: 0x91650003
    ctx->pc = 0x1671f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1671fc: 0x73a00
    ctx->pc = 0x1671fcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x167200: 0x91640002
    ctx->pc = 0x167200u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x167204: 0xc73025
    ctx->pc = 0x167204u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x167208: 0x91620001
    ctx->pc = 0x167208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x16720c: 0x52e00
    ctx->pc = 0x16720cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x167210: 0x91630000
    ctx->pc = 0x167210u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x167214: 0x42400
    ctx->pc = 0x167214u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x167218: 0x21200
    ctx->pc = 0x167218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16721c: 0x1066025
    ctx->pc = 0x16721cu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x167220: 0x651825
    ctx->pc = 0x167220u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167224: 0x822025
    ctx->pc = 0x167224u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167228: 0x643825
    ctx->pc = 0x167228u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16722c: 0xc4202
    ctx->pc = 0x16722cu;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 12), 8));
    // 0x167230: 0x74a02
    ctx->pc = 0x167230u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 7), 8));
    // 0x167234: 0x72a00
    ctx->pc = 0x167234u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 8));
    // 0x167238: 0x71602
    ctx->pc = 0x167238u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 24));
    // 0x16723c: 0xc2200
    ctx->pc = 0x16723cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 12), 8));
    // 0x167240: 0xc1e02
    ctx->pc = 0x167240u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 12), 24));
    // 0x167244: 0xc3600
    ctx->pc = 0x167244u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 12), 24));
    // 0x167248: 0x73e00
    ctx->pc = 0x167248u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 24));
    // 0x16724c: 0xb82824
    ctx->pc = 0x16724cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x167250: 0x982024
    ctx->pc = 0x167250u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x167254: 0x3108ff00
    ctx->pc = 0x167254u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 65280));
    // 0x167258: 0x3129ff00
    ctx->pc = 0x167258u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 9), 65280));
    // 0x16725c: 0x661825
    ctx->pc = 0x16725cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x167260: 0x882025
    ctx->pc = 0x167260u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x167264: 0x471025
    ctx->pc = 0x167264u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x167268: 0xa92825
    ctx->pc = 0x167268u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x16726c: 0x646025
    ctx->pc = 0x16726cu;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167270: 0x453825
    ctx->pc = 0x167270u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167274: 0x10f00011
    ctx->pc = 0x167274u;
    {
        const bool branch_taken_0x167274 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 16));
        ctx->pc = 0x167278u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x167274) {
            ctx->pc = 0x1672BCu;
            goto label_1672bc;
        }
    }
    ctx->pc = 0x16727Cu;
    // 0x16727c: 0x2ce20003
    ctx->pc = 0x16727cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 3));
    // 0x167280: 0x10400005
    ctx->pc = 0x167280u;
    {
        const bool branch_taken_0x167280 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x167284u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x167280) {
            ctx->pc = 0x167298u;
            goto label_167298;
        }
    }
    ctx->pc = 0x167288u;
    // 0x167288: 0x10e20008
    ctx->pc = 0x167288u;
    {
        const bool branch_taken_0x167288 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x16728Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167288) {
            ctx->pc = 0x1672ACu;
            goto label_1672ac;
        }
    }
    ctx->pc = 0x167290u;
    // 0x167290: 0x1000005d
    ctx->pc = 0x167290u;
    {
        const bool branch_taken_0x167290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167294u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x167290) {
            ctx->pc = 0x167408u;
            goto label_167408;
        }
    }
    ctx->pc = 0x167298u;
label_167298:
    // 0x167298: 0x24020003
    ctx->pc = 0x167298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16729c: 0x10e2000c
    ctx->pc = 0x16729Cu;
    {
        const bool branch_taken_0x16729c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x1672A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16729c) {
            ctx->pc = 0x1672D0u;
            goto label_1672d0;
        }
    }
    ctx->pc = 0x1672A4u;
    // 0x1672a4: 0x10000058
    ctx->pc = 0x1672A4u;
    {
        const bool branch_taken_0x1672a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1672A8u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1672a4) {
            ctx->pc = 0x167408u;
            goto label_167408;
        }
    }
    ctx->pc = 0x1672ACu;
label_1672ac:
    // 0x1672ac: 0xad500000
    ctx->pc = 0x1672acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
    // 0x1672b0: 0x24020008
    ctx->pc = 0x1672b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1672b4: 0x1000000c
    ctx->pc = 0x1672B4u;
    {
        const bool branch_taken_0x1672b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1672B8u;
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1672b4) {
            ctx->pc = 0x1672E8u;
            goto label_1672e8;
        }
    }
    ctx->pc = 0x1672BCu;
label_1672bc:
    // 0x1672bc: 0x24020001
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1672c0: 0x24030008
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1672c4: 0xad420000
    ctx->pc = 0x1672c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1672c8: 0x10000007
    ctx->pc = 0x1672C8u;
    {
        const bool branch_taken_0x1672c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1672CCu;
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1672c8) {
            ctx->pc = 0x1672E8u;
            goto label_1672e8;
        }
    }
    ctx->pc = 0x1672D0u;
label_1672d0:
    // 0x1672d0: 0xad400000
    ctx->pc = 0x1672d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1672d4: 0x24020010
    ctx->pc = 0x1672d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1672d8: 0x10000003
    ctx->pc = 0x1672D8u;
    {
        const bool branch_taken_0x1672d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1672DCu;
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1672d8) {
            ctx->pc = 0x1672E8u;
            goto label_1672e8;
        }
    }
    ctx->pc = 0x1672E0u;
label_1672e0:
    // 0x1672e0: 0x10000048
    ctx->pc = 0x1672E0u;
    {
        const bool branch_taken_0x1672e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1672E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1672e0) {
            ctx->pc = 0x167404u;
            goto label_167404;
        }
    }
    ctx->pc = 0x1672E8u;
label_1672e8:
    // 0x1672e8: 0x91650003
    ctx->pc = 0x1672e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1672ec: 0x3c0600ff
    ctx->pc = 0x1672ecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)255 << 16));
    // 0x1672f0: 0x91630002
    ctx->pc = 0x1672f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1672f4: 0x24070002
    ctx->pc = 0x1672f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1672f8: 0x91640001
    ctx->pc = 0x1672f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x1672fc: 0x52e00
    ctx->pc = 0x1672fcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x167300: 0x91620000
    ctx->pc = 0x167300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x167304: 0x31c00
    ctx->pc = 0x167304u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x167308: 0x42200
    ctx->pc = 0x167308u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16730c: 0x256b0004
    ctx->pc = 0x16730cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4));
    // 0x167310: 0x641825
    ctx->pc = 0x167310u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167314: 0x451025
    ctx->pc = 0x167314u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x167318: 0x431025
    ctx->pc = 0x167318u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16731c: 0x22a03
    ctx->pc = 0x16731cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x167320: 0x22200
    ctx->pc = 0x167320u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    // 0x167324: 0x21e02
    ctx->pc = 0x167324u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 24));
    // 0x167328: 0x30a5ff00
    ctx->pc = 0x167328u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x16732c: 0x21600
    ctx->pc = 0x16732cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x167330: 0x862024
    ctx->pc = 0x167330u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x167334: 0x852025
    ctx->pc = 0x167334u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x167338: 0x621825
    ctx->pc = 0x167338u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16733c: 0x641825
    ctx->pc = 0x16733cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167340: 0xae230000
    ctx->pc = 0x167340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x167344: 0x91650001
    ctx->pc = 0x167344u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x167348: 0x91640003
    ctx->pc = 0x167348u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x16734c: 0x91630002
    ctx->pc = 0x16734cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x167350: 0x52a00
    ctx->pc = 0x167350u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x167354: 0x91620000
    ctx->pc = 0x167354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x167358: 0x42600
    ctx->pc = 0x167358u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x16735c: 0x31c00
    ctx->pc = 0x16735cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x167360: 0x651825
    ctx->pc = 0x167360u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x167364: 0x441025
    ctx->pc = 0x167364u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167368: 0x431025
    ctx->pc = 0x167368u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16736c: 0x22a03
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x167370: 0x22200
    ctx->pc = 0x167370u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
    // 0x167374: 0x21e02
    ctx->pc = 0x167374u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 24));
    // 0x167378: 0x862024
    ctx->pc = 0x167378u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16737c: 0x30a5ff00
    ctx->pc = 0x16737cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x167380: 0x21600
    ctx->pc = 0x167380u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x167384: 0x621825
    ctx->pc = 0x167384u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167388: 0x852025
    ctx->pc = 0x167388u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16738c: 0x641825
    ctx->pc = 0x16738cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x167390: 0xae430000
    ctx->pc = 0x167390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x167394: 0x8d4a0000
    ctx->pc = 0x167394u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x167398: 0x15470007
    ctx->pc = 0x167398u;
    {
        const bool branch_taken_0x167398 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 7));
        ctx->pc = 0x16739Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x167398) {
            ctx->pc = 0x1673B8u;
            goto label_1673b8;
        }
    }
    ctx->pc = 0x1673A0u;
    // 0x1673a0: 0x183001b
    ctx->pc = 0x1673a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 12) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,12); } }
    // 0x1673a4: 0x50600001
    ctx->pc = 0x1673A4u;
    {
        const bool branch_taken_0x1673a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1673a4) {
            ctx->pc = 0x1673A8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1673ACu;
            goto label_1673ac;
        }
    }
    ctx->pc = 0x1673ACu;
label_1673ac:
    // 0x1673ac: 0x1012
    ctx->pc = 0x1673acu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1673b0: 0x10000013
    ctx->pc = 0x1673B0u;
    {
        const bool branch_taken_0x1673b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1673B4u;
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1673b0) {
            ctx->pc = 0x167400u;
            goto label_167400;
        }
    }
    ctx->pc = 0x1673B8u;
label_1673b8:
    // 0x1673b8: 0x15420007
    ctx->pc = 0x1673B8u;
    {
        const bool branch_taken_0x1673b8 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 2));
        if (branch_taken_0x1673b8) {
            ctx->pc = 0x1673D8u;
            goto label_1673d8;
        }
    }
    ctx->pc = 0x1673C0u;
    // 0x1673c0: 0x183001b
    ctx->pc = 0x1673c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 12) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,12); } }
    // 0x1673c4: 0x50600001
    ctx->pc = 0x1673C4u;
    {
        const bool branch_taken_0x1673c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1673c4) {
            ctx->pc = 0x1673C8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1673CCu;
            goto label_1673cc;
        }
    }
    ctx->pc = 0x1673CCu;
label_1673cc:
    // 0x1673cc: 0x1012
    ctx->pc = 0x1673ccu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1673d0: 0x1000000b
    ctx->pc = 0x1673D0u;
    {
        const bool branch_taken_0x1673d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1673D4u;
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1673d0) {
            ctx->pc = 0x167400u;
            goto label_167400;
        }
    }
    ctx->pc = 0x1673D8u;
label_1673d8:
    // 0x1673d8: 0x15400008
    ctx->pc = 0x1673D8u;
    {
        const bool branch_taken_0x1673d8 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x1673DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x1673d8) {
            ctx->pc = 0x1673FCu;
            goto label_1673fc;
        }
    }
    ctx->pc = 0x1673E0u;
    // 0x1673e0: 0xc1042
    ctx->pc = 0x1673e0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 12), 1));
    // 0x1673e4: 0x50600001
    ctx->pc = 0x1673E4u;
    {
        const bool branch_taken_0x1673e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1673e4) {
            ctx->pc = 0x1673E8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1673ECu;
            goto label_1673ec;
        }
    }
    ctx->pc = 0x1673ECu;
label_1673ec:
    // 0x1673ec: 0x43001b
    ctx->pc = 0x1673ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 3) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
    // 0x1673f0: 0x1012
    ctx->pc = 0x1673f0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1673f4: 0x10000002
    ctx->pc = 0x1673F4u;
    {
        const bool branch_taken_0x1673f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1673F8u;
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1673f4) {
            ctx->pc = 0x167400u;
            goto label_167400;
        }
    }
    ctx->pc = 0x1673FCu;
label_1673fc:
    // 0x1673fc: 0xaf220000
    ctx->pc = 0x1673fcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
label_167400:
    // 0x167400: 0x1ed1021
    ctx->pc = 0x167400u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_167404:
    // 0x167404: 0xdfb20020
    ctx->pc = 0x167404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167408:
    // 0x167408: 0xdfb10010
    ctx->pc = 0x167408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16740c: 0xdfb00000
    ctx->pc = 0x16740cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167410: 0x3e00008
    ctx->pc = 0x167410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167178u: goto label_167178;
            case 0x167298u: goto label_167298;
            case 0x1672ACu: goto label_1672ac;
            case 0x1672BCu: goto label_1672bc;
            case 0x1672D0u: goto label_1672d0;
            case 0x1672E0u: goto label_1672e0;
            case 0x1672E8u: goto label_1672e8;
            case 0x1673ACu: goto label_1673ac;
            case 0x1673B8u: goto label_1673b8;
            case 0x1673CCu: goto label_1673cc;
            case 0x1673D8u: goto label_1673d8;
            case 0x1673ECu: goto label_1673ec;
            case 0x1673FCu: goto label_1673fc;
            case 0x167400u: goto label_167400;
            case 0x167404u: goto label_167404;
            case 0x167408u: goto label_167408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167418u;
}
