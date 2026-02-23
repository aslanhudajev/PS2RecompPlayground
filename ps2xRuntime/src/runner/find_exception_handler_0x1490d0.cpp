#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: find_exception_handler
// Address: 0x1490d0 - 0x149214
void find_exception_handler_0x1490d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("find_exception_handler");


    ctx->pc = 0x1490d0u;

label_1490d0:
    // 0x1490d0: 0x27bdff80
    ctx->pc = 0x1490d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_1490d4:
    // 0x1490d4: 0x24020001
    ctx->pc = 0x1490d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1490d8:
    // 0x1490d8: 0xffb60060
    ctx->pc = 0x1490d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1490dc:
    // 0x1490dc: 0xffb50050
    ctx->pc = 0x1490dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1490e0:
    // 0x1490e0: 0x100b02d
    ctx->pc = 0x1490e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1490e4:
    // 0x1490e4: 0xffb40040
    ctx->pc = 0x1490e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1490e8:
    // 0x1490e8: 0xa0a82d
    ctx->pc = 0x1490e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1490ec:
    // 0x1490ec: 0xffb30030
    ctx->pc = 0x1490ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1490f0:
    // 0x1490f0: 0xc0a02d
    ctx->pc = 0x1490f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1490f4:
    // 0x1490f4: 0xffb10010
    ctx->pc = 0x1490f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1490f8:
    // 0x1490f8: 0x982d
    ctx->pc = 0x1490f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1490fc:
    // 0x1490fc: 0xffbf0070
    ctx->pc = 0x1490fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_149100:
    // 0x149100: 0x80882d
    ctx->pc = 0x149100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149104:
    // 0x149104: 0xffb20020
    ctx->pc = 0x149104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_149108:
    // 0x149108: 0xffb00000
    ctx->pc = 0x149108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14910c:
    // 0x14910c: 0x12a00036
label_149110:
    if (ctx->pc == 0x149110u) {
        ctx->pc = 0x149110u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x149114u;
        goto label_149114;
    }
    ctx->pc = 0x14910Cu;
    {
        const bool branch_taken_0x14910c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x149110u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x14910c) {
            ctx->pc = 0x1491E8u;
            goto label_1491e8;
        }
    }
    ctx->pc = 0x149114u;
label_149114:
    // 0x149114: 0x302d
    ctx->pc = 0x149114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149118:
    // 0x149118: 0x10e0000c
label_14911c:
    if (ctx->pc == 0x14911Cu) {
        ctx->pc = 0x14911Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x149120u;
        goto label_149120;
    }
    ctx->pc = 0x149118u;
    {
        const bool branch_taken_0x149118 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x14911Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 21), 8));
        if (branch_taken_0x149118) {
            ctx->pc = 0x14914Cu;
            goto label_14914c;
        }
    }
    ctx->pc = 0x149120u;
label_149120:
    // 0x149120: 0x2281023
    ctx->pc = 0x149120u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_149124:
    // 0x149124: 0x8e240004
    ctx->pc = 0x149124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_149128:
    // 0x149128: 0x23103
    ctx->pc = 0x149128u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_14912c:
    // 0x14912c: 0x61900
    ctx->pc = 0x14912cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
label_149130:
    // 0x149130: 0x24c50001
    ctx->pc = 0x149130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 1));
label_149134:
    // 0x149134: 0x681821
    ctx->pc = 0x149134u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_149138:
    // 0x149138: 0x2491ffff
    ctx->pc = 0x149138u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 4294967295));
label_14913c:
    // 0x14913c: 0x8c620000
    ctx->pc = 0x14913cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_149140:
    // 0x149140: 0x21027
    ctx->pc = 0x149140u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_149144:
    // 0x149144: 0x10000002
label_149148:
    if (ctx->pc == 0x149148u) {
        ctx->pc = 0x149148u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
        ctx->pc = 0x14914Cu;
        goto label_14914c;
    }
    ctx->pc = 0x149144u;
    {
        const bool branch_taken_0x149144 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x149148u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
        if (branch_taken_0x149144) {
            ctx->pc = 0x149150u;
            goto label_149150;
        }
    }
    ctx->pc = 0x14914Cu;
label_14914c:
    // 0x14914c: 0x2631ffff
    ctx->pc = 0x14914cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_149150:
    // 0x149150: 0x61100
    ctx->pc = 0x149150u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
label_149154:
    // 0x149154: 0x3c03ffff
    ctx->pc = 0x149154u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_149158:
    // 0x149158: 0x482821
    ctx->pc = 0x149158u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_14915c:
    // 0x14915c: 0x3463ffff
    ctx->pc = 0x14915cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
label_149160:
    // 0x149160: 0x8ca20000
    ctx->pc = 0x149160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_149164:
    // 0x149164: 0x10430020
label_149168:
    if (ctx->pc == 0x149168u) {
        ctx->pc = 0x149168u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14916Cu;
        goto label_14916c;
    }
    ctx->pc = 0x149164u;
    {
        const bool branch_taken_0x149164 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x149168u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x149164) {
            ctx->pc = 0x1491E8u;
            goto label_1491e8;
        }
    }
    ctx->pc = 0x14916Cu;
label_14916c:
    // 0x14916c: 0x3c12ffff
    ctx->pc = 0x14916cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)65535 << 16));
label_149170:
    // 0x149170: 0x3652ffff
    ctx->pc = 0x149170u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
label_149174:
    // 0x149174: 0x8e020000
    ctx->pc = 0x149174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_149178:
    // 0x149178: 0x222102b
    ctx->pc = 0x149178u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_14917c:
    // 0x14917c: 0x0
    ctx->pc = 0x14917cu;
    // NOP
label_149180:
    // 0x149180: 0x54400016
label_149184:
    if (ctx->pc == 0x149184u) {
        ctx->pc = 0x149184u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x149188u;
        goto label_149188;
    }
    ctx->pc = 0x149180u;
    {
        const bool branch_taken_0x149180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x149180) {
            ctx->pc = 0x149184u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
            ctx->pc = 0x1491DCu;
            goto label_1491dc;
        }
    }
    ctx->pc = 0x149188u;
label_149188:
    // 0x149188: 0x8e020004
    ctx->pc = 0x149188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14918c:
    // 0x14918c: 0x222102b
    ctx->pc = 0x14918cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_149190:
    // 0x149190: 0x50400012
label_149194:
    if (ctx->pc == 0x149194u) {
        ctx->pc = 0x149194u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x149198u;
        goto label_149198;
    }
    ctx->pc = 0x149190u;
    {
        const bool branch_taken_0x149190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x149190) {
            ctx->pc = 0x149194u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
            ctx->pc = 0x1491DCu;
            goto label_1491dc;
        }
    }
    ctx->pc = 0x149198u;
label_149198:
    // 0x149198: 0x8e05000c
    ctx->pc = 0x149198u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14919c:
    // 0x14919c: 0x10a0000c
label_1491a0:
    if (ctx->pc == 0x1491A0u) {
        ctx->pc = 0x1491A4u;
        goto label_1491a4;
    }
    ctx->pc = 0x14919Cu;
    {
        const bool branch_taken_0x14919c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x14919c) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x1491A4u;
label_1491a4:
    // 0x1491a4: 0x8e820000
    ctx->pc = 0x1491a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1491a8:
    // 0x1491a8: 0x1040000b
label_1491ac:
    if (ctx->pc == 0x1491ACu) {
        ctx->pc = 0x1491ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1491B0u;
        goto label_1491b0;
    }
    ctx->pc = 0x1491A8u;
    {
        const bool branch_taken_0x1491a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1491ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1491a8) {
            ctx->pc = 0x1491D8u;
            goto label_1491d8;
        }
    }
    ctx->pc = 0x1491B0u;
label_1491b0:
    // 0x1491b0: 0x40f809
label_1491b4:
    if (ctx->pc == 0x1491B4u) {
        ctx->pc = 0x1491B4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1491B8u;
        goto label_1491b8;
    }
    ctx->pc = 0x1491B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1491B8u);
        ctx->pc = 0x1491B4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1490D0u: goto label_1490d0;
            case 0x1490D4u: goto label_1490d4;
            case 0x1490D8u: goto label_1490d8;
            case 0x1490DCu: goto label_1490dc;
            case 0x1490E0u: goto label_1490e0;
            case 0x1490E4u: goto label_1490e4;
            case 0x1490E8u: goto label_1490e8;
            case 0x1490ECu: goto label_1490ec;
            case 0x1490F0u: goto label_1490f0;
            case 0x1490F4u: goto label_1490f4;
            case 0x1490F8u: goto label_1490f8;
            case 0x1490FCu: goto label_1490fc;
            case 0x149100u: goto label_149100;
            case 0x149104u: goto label_149104;
            case 0x149108u: goto label_149108;
            case 0x14910Cu: goto label_14910c;
            case 0x149110u: goto label_149110;
            case 0x149114u: goto label_149114;
            case 0x149118u: goto label_149118;
            case 0x14911Cu: goto label_14911c;
            case 0x149120u: goto label_149120;
            case 0x149124u: goto label_149124;
            case 0x149128u: goto label_149128;
            case 0x14912Cu: goto label_14912c;
            case 0x149130u: goto label_149130;
            case 0x149134u: goto label_149134;
            case 0x149138u: goto label_149138;
            case 0x14913Cu: goto label_14913c;
            case 0x149140u: goto label_149140;
            case 0x149144u: goto label_149144;
            case 0x149148u: goto label_149148;
            case 0x14914Cu: goto label_14914c;
            case 0x149150u: goto label_149150;
            case 0x149154u: goto label_149154;
            case 0x149158u: goto label_149158;
            case 0x14915Cu: goto label_14915c;
            case 0x149160u: goto label_149160;
            case 0x149164u: goto label_149164;
            case 0x149168u: goto label_149168;
            case 0x14916Cu: goto label_14916c;
            case 0x149170u: goto label_149170;
            case 0x149174u: goto label_149174;
            case 0x149178u: goto label_149178;
            case 0x14917Cu: goto label_14917c;
            case 0x149180u: goto label_149180;
            case 0x149184u: goto label_149184;
            case 0x149188u: goto label_149188;
            case 0x14918Cu: goto label_14918c;
            case 0x149190u: goto label_149190;
            case 0x149194u: goto label_149194;
            case 0x149198u: goto label_149198;
            case 0x14919Cu: goto label_14919c;
            case 0x1491A0u: goto label_1491a0;
            case 0x1491A4u: goto label_1491a4;
            case 0x1491A8u: goto label_1491a8;
            case 0x1491ACu: goto label_1491ac;
            case 0x1491B0u: goto label_1491b0;
            case 0x1491B4u: goto label_1491b4;
            case 0x1491B8u: goto label_1491b8;
            case 0x1491BCu: goto label_1491bc;
            case 0x1491C0u: goto label_1491c0;
            case 0x1491C4u: goto label_1491c4;
            case 0x1491C8u: goto label_1491c8;
            case 0x1491CCu: goto label_1491cc;
            case 0x1491D0u: goto label_1491d0;
            case 0x1491D4u: goto label_1491d4;
            case 0x1491D8u: goto label_1491d8;
            case 0x1491DCu: goto label_1491dc;
            case 0x1491E0u: goto label_1491e0;
            case 0x1491E4u: goto label_1491e4;
            case 0x1491E8u: goto label_1491e8;
            case 0x1491ECu: goto label_1491ec;
            case 0x1491F0u: goto label_1491f0;
            case 0x1491F4u: goto label_1491f4;
            case 0x1491F8u: goto label_1491f8;
            case 0x1491FCu: goto label_1491fc;
            case 0x149200u: goto label_149200;
            case 0x149204u: goto label_149204;
            case 0x149208u: goto label_149208;
            case 0x14920Cu: goto label_14920c;
            case 0x149210u: goto label_149210;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1491B8u; }
            if (ctx->pc != 0x1491B8u) { return; }
        }
    }
    ctx->pc = 0x1491B8u;
label_1491b8:
    // 0x1491b8: 0x50400008
label_1491bc:
    if (ctx->pc == 0x1491BCu) {
        ctx->pc = 0x1491BCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1491C0u;
        goto label_1491c0;
    }
    ctx->pc = 0x1491B8u;
    {
        const bool branch_taken_0x1491b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1491b8) {
            ctx->pc = 0x1491BCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
            ctx->pc = 0x1491DCu;
            goto label_1491dc;
        }
    }
    ctx->pc = 0x1491C0u;
label_1491c0:
    // 0x1491c0: 0x52600001
label_1491c4:
    if (ctx->pc == 0x1491C4u) {
        ctx->pc = 0x1491C4u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1491C8u;
        goto label_1491c8;
    }
    ctx->pc = 0x1491C0u;
    {
        const bool branch_taken_0x1491c0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1491c0) {
            ctx->pc = 0x1491C4u;
            SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x1491C8u;
            goto label_1491c8;
        }
    }
    ctx->pc = 0x1491C8u;
label_1491c8:
    // 0x1491c8: 0x10000007
label_1491cc:
    if (ctx->pc == 0x1491CCu) {
        ctx->pc = 0x1491CCu;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1491D0u;
        goto label_1491d0;
    }
    ctx->pc = 0x1491C8u;
    {
        const bool branch_taken_0x1491c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1491CCu;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1491c8) {
            ctx->pc = 0x1491E8u;
            goto label_1491e8;
        }
    }
    ctx->pc = 0x1491D0u;
label_1491d0:
    // 0x1491d0: 0x52600001
label_1491d4:
    if (ctx->pc == 0x1491D4u) {
        ctx->pc = 0x1491D4u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1491D8u;
        goto label_1491d8;
    }
    ctx->pc = 0x1491D0u;
    {
        const bool branch_taken_0x1491d0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1491d0) {
            ctx->pc = 0x1491D4u;
            SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x1491D8u;
            goto label_1491d8;
        }
    }
    ctx->pc = 0x1491D8u;
label_1491d8:
    // 0x1491d8: 0x26100010
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_1491dc:
    // 0x1491dc: 0x8e020000
    ctx->pc = 0x1491dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1491e0:
    // 0x1491e0: 0x1452ffe7
label_1491e4:
    if (ctx->pc == 0x1491E4u) {
        ctx->pc = 0x1491E4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x1491E8u;
        goto label_1491e8;
    }
    ctx->pc = 0x1491E0u;
    {
        const bool branch_taken_0x1491e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x1491E4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x1491e0) {
            ctx->pc = 0x149180u;
            goto label_149180;
        }
    }
    ctx->pc = 0x1491E8u;
label_1491e8:
    // 0x1491e8: 0x260102d
    ctx->pc = 0x1491e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1491ec:
    // 0x1491ec: 0xdfbf0070
    ctx->pc = 0x1491ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1491f0:
    // 0x1491f0: 0xdfb60060
    ctx->pc = 0x1491f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1491f4:
    // 0x1491f4: 0xdfb50050
    ctx->pc = 0x1491f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1491f8:
    // 0x1491f8: 0xdfb40040
    ctx->pc = 0x1491f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1491fc:
    // 0x1491fc: 0xdfb30030
    ctx->pc = 0x1491fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_149200:
    // 0x149200: 0xdfb20020
    ctx->pc = 0x149200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_149204:
    // 0x149204: 0xdfb10010
    ctx->pc = 0x149204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_149208:
    // 0x149208: 0xdfb00000
    ctx->pc = 0x149208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14920c:
    // 0x14920c: 0x3e00008
label_149210:
    if (ctx->pc == 0x149210u) {
        ctx->pc = 0x149210u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x149214u;
        goto label_fallthrough_0x14920c;
    }
    ctx->pc = 0x14920Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149210u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1490D0u: goto label_1490d0;
            case 0x1490D4u: goto label_1490d4;
            case 0x1490D8u: goto label_1490d8;
            case 0x1490DCu: goto label_1490dc;
            case 0x1490E0u: goto label_1490e0;
            case 0x1490E4u: goto label_1490e4;
            case 0x1490E8u: goto label_1490e8;
            case 0x1490ECu: goto label_1490ec;
            case 0x1490F0u: goto label_1490f0;
            case 0x1490F4u: goto label_1490f4;
            case 0x1490F8u: goto label_1490f8;
            case 0x1490FCu: goto label_1490fc;
            case 0x149100u: goto label_149100;
            case 0x149104u: goto label_149104;
            case 0x149108u: goto label_149108;
            case 0x14910Cu: goto label_14910c;
            case 0x149110u: goto label_149110;
            case 0x149114u: goto label_149114;
            case 0x149118u: goto label_149118;
            case 0x14911Cu: goto label_14911c;
            case 0x149120u: goto label_149120;
            case 0x149124u: goto label_149124;
            case 0x149128u: goto label_149128;
            case 0x14912Cu: goto label_14912c;
            case 0x149130u: goto label_149130;
            case 0x149134u: goto label_149134;
            case 0x149138u: goto label_149138;
            case 0x14913Cu: goto label_14913c;
            case 0x149140u: goto label_149140;
            case 0x149144u: goto label_149144;
            case 0x149148u: goto label_149148;
            case 0x14914Cu: goto label_14914c;
            case 0x149150u: goto label_149150;
            case 0x149154u: goto label_149154;
            case 0x149158u: goto label_149158;
            case 0x14915Cu: goto label_14915c;
            case 0x149160u: goto label_149160;
            case 0x149164u: goto label_149164;
            case 0x149168u: goto label_149168;
            case 0x14916Cu: goto label_14916c;
            case 0x149170u: goto label_149170;
            case 0x149174u: goto label_149174;
            case 0x149178u: goto label_149178;
            case 0x14917Cu: goto label_14917c;
            case 0x149180u: goto label_149180;
            case 0x149184u: goto label_149184;
            case 0x149188u: goto label_149188;
            case 0x14918Cu: goto label_14918c;
            case 0x149190u: goto label_149190;
            case 0x149194u: goto label_149194;
            case 0x149198u: goto label_149198;
            case 0x14919Cu: goto label_14919c;
            case 0x1491A0u: goto label_1491a0;
            case 0x1491A4u: goto label_1491a4;
            case 0x1491A8u: goto label_1491a8;
            case 0x1491ACu: goto label_1491ac;
            case 0x1491B0u: goto label_1491b0;
            case 0x1491B4u: goto label_1491b4;
            case 0x1491B8u: goto label_1491b8;
            case 0x1491BCu: goto label_1491bc;
            case 0x1491C0u: goto label_1491c0;
            case 0x1491C4u: goto label_1491c4;
            case 0x1491C8u: goto label_1491c8;
            case 0x1491CCu: goto label_1491cc;
            case 0x1491D0u: goto label_1491d0;
            case 0x1491D4u: goto label_1491d4;
            case 0x1491D8u: goto label_1491d8;
            case 0x1491DCu: goto label_1491dc;
            case 0x1491E0u: goto label_1491e0;
            case 0x1491E4u: goto label_1491e4;
            case 0x1491E8u: goto label_1491e8;
            case 0x1491ECu: goto label_1491ec;
            case 0x1491F0u: goto label_1491f0;
            case 0x1491F4u: goto label_1491f4;
            case 0x1491F8u: goto label_1491f8;
            case 0x1491FCu: goto label_1491fc;
            case 0x149200u: goto label_149200;
            case 0x149204u: goto label_149204;
            case 0x149208u: goto label_149208;
            case 0x14920Cu: goto label_14920c;
            case 0x149210u: goto label_149210;
            default: break;
        }
        return;
    }
label_fallthrough_0x14920c:
    ctx->pc = 0x149214u;
}
