#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _dualPrimeVector
// Address: 0x160198 - 0x160320
void _dualPrimeVector_0x160198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_dualPrimeVector");


    ctx->pc = 0x160198u;

    // 0x160198: 0x3c080023
    ctx->pc = 0x160198u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x16019c: 0x24020003
    ctx->pc = 0x16019cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1601a0: 0x8d03a3ec
    ctx->pc = 0x1601a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294943724)));
    // 0x1601a4: 0x14620045
    ctx->pc = 0x1601A4u;
    {
        const bool branch_taken_0x1601a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1601A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1601a4) {
            ctx->pc = 0x1602BCu;
            goto label_1602bc;
        }
    }
    ctx->pc = 0x1601ACu;
    // 0x1601ac: 0x8c43a3f0
    ctx->pc = 0x1601acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943728)));
    // 0x1601b0: 0x50600024
    ctx->pc = 0x1601B0u;
    {
        const bool branch_taken_0x1601b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1601b0) {
            ctx->pc = 0x1601B4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x160244u;
            goto label_160244;
        }
    }
    ctx->pc = 0x1601B8u;
    // 0x1601b8: 0x18c00004
    ctx->pc = 0x1601B8u;
    {
        const bool branch_taken_0x1601b8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1601BCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x1601b8) {
            ctx->pc = 0x1601CCu;
            goto label_1601cc;
        }
    }
    ctx->pc = 0x1601C0u;
    // 0x1601c0: 0x24c20001
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1601c4: 0x10000002
    ctx->pc = 0x1601C4u;
    {
        const bool branch_taken_0x1601c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1601C8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1601c4) {
            ctx->pc = 0x1601D0u;
            goto label_1601d0;
        }
    }
    ctx->pc = 0x1601CCu;
label_1601cc:
    // 0x1601cc: 0x61043
    ctx->pc = 0x1601ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_1601d0:
    // 0x1601d0: 0x431021
    ctx->pc = 0x1601d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1601d4: 0xac820000
    ctx->pc = 0x1601d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1601d8: 0x18e00004
    ctx->pc = 0x1601D8u;
    {
        const bool branch_taken_0x1601d8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1601DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x1601d8) {
            ctx->pc = 0x1601ECu;
            goto label_1601ec;
        }
    }
    ctx->pc = 0x1601E0u;
    // 0x1601e0: 0x24e20001
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1601e4: 0x10000002
    ctx->pc = 0x1601E4u;
    {
        const bool branch_taken_0x1601e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1601E8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1601e4) {
            ctx->pc = 0x1601F0u;
            goto label_1601f0;
        }
    }
    ctx->pc = 0x1601ECu;
label_1601ec:
    // 0x1601ec: 0x71043
    ctx->pc = 0x1601ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_1601f0:
    // 0x1601f0: 0x431021
    ctx->pc = 0x1601f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1601f4: 0x2442ffff
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1601f8: 0xac820004
    ctx->pc = 0x1601f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1601fc: 0x61040
    ctx->pc = 0x1601fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x160200: 0x461021
    ctx->pc = 0x160200u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x160204: 0x18c00002
    ctx->pc = 0x160204u;
    {
        const bool branch_taken_0x160204 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x160208u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x160204) {
            ctx->pc = 0x160210u;
            goto label_160210;
        }
    }
    ctx->pc = 0x16020Cu;
    // 0x16020c: 0x24420001
    ctx->pc = 0x16020cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_160210:
    // 0x160210: 0x21043
    ctx->pc = 0x160210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x160214: 0x431021
    ctx->pc = 0x160214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160218: 0xac820008
    ctx->pc = 0x160218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x16021c: 0x71040
    ctx->pc = 0x16021cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x160220: 0x471021
    ctx->pc = 0x160220u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160224: 0x18e00002
    ctx->pc = 0x160224u;
    {
        const bool branch_taken_0x160224 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x160228u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x160224) {
            ctx->pc = 0x160230u;
            goto label_160230;
        }
    }
    ctx->pc = 0x16022Cu;
    // 0x16022c: 0x24420001
    ctx->pc = 0x16022cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_160230:
    // 0x160230: 0x21043
    ctx->pc = 0x160230u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_160234:
    // 0x160234: 0x451021
    ctx->pc = 0x160234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x160238: 0x24420001
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16023c: 0x3e00008
    ctx->pc = 0x16023Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160240u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1601CCu: goto label_1601cc;
            case 0x1601D0u: goto label_1601d0;
            case 0x1601ECu: goto label_1601ec;
            case 0x1601F0u: goto label_1601f0;
            case 0x160210u: goto label_160210;
            case 0x160230u: goto label_160230;
            case 0x160234u: goto label_160234;
            case 0x160244u: goto label_160244;
            case 0x160254u: goto label_160254;
            case 0x160274u: goto label_160274;
            case 0x160298u: goto label_160298;
            case 0x16029Cu: goto label_16029c;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602BCu: goto label_1602bc;
            case 0x1602D0u: goto label_1602d0;
            case 0x1602D4u: goto label_1602d4;
            case 0x1602F0u: goto label_1602f0;
            case 0x1602F4u: goto label_1602f4;
            case 0x160314u: goto label_160314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160244u;
label_160244:
    // 0x160244: 0x8ca30000
    ctx->pc = 0x160244u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160248: 0x18c00002
    ctx->pc = 0x160248u;
    {
        const bool branch_taken_0x160248 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x16024Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        if (branch_taken_0x160248) {
            ctx->pc = 0x160254u;
            goto label_160254;
        }
    }
    ctx->pc = 0x160250u;
    // 0x160250: 0x24420001
    ctx->pc = 0x160250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_160254:
    // 0x160254: 0x21043
    ctx->pc = 0x160254u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x160258: 0x431021
    ctx->pc = 0x160258u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16025c: 0xac820000
    ctx->pc = 0x16025cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x160260: 0x71040
    ctx->pc = 0x160260u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
    // 0x160264: 0x471021
    ctx->pc = 0x160264u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160268: 0x18e00002
    ctx->pc = 0x160268u;
    {
        const bool branch_taken_0x160268 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x16026Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x160268) {
            ctx->pc = 0x160274u;
            goto label_160274;
        }
    }
    ctx->pc = 0x160270u;
    // 0x160270: 0x24420001
    ctx->pc = 0x160270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_160274:
    // 0x160274: 0x21043
    ctx->pc = 0x160274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x160278: 0x431021
    ctx->pc = 0x160278u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16027c: 0x2442ffff
    ctx->pc = 0x16027cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x160280: 0xac820004
    ctx->pc = 0x160280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x160284: 0x18c00004
    ctx->pc = 0x160284u;
    {
        const bool branch_taken_0x160284 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x160288u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x160284) {
            ctx->pc = 0x160298u;
            goto label_160298;
        }
    }
    ctx->pc = 0x16028Cu;
    // 0x16028c: 0x24c20001
    ctx->pc = 0x16028cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x160290: 0x10000002
    ctx->pc = 0x160290u;
    {
        const bool branch_taken_0x160290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160294u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x160290) {
            ctx->pc = 0x16029Cu;
            goto label_16029c;
        }
    }
    ctx->pc = 0x160298u;
label_160298:
    // 0x160298: 0x61043
    ctx->pc = 0x160298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_16029c:
    // 0x16029c: 0x431021
    ctx->pc = 0x16029cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1602a0: 0xac820008
    ctx->pc = 0x1602a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1602a4: 0x18e00003
    ctx->pc = 0x1602A4u;
    {
        const bool branch_taken_0x1602a4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1602A8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x1602a4) {
            ctx->pc = 0x1602B4u;
            goto label_1602b4;
        }
    }
    ctx->pc = 0x1602ACu;
    // 0x1602ac: 0x1000ffe0
    ctx->pc = 0x1602ACu;
    {
        const bool branch_taken_0x1602ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1602B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1602ac) {
            ctx->pc = 0x160230u;
            goto label_160230;
        }
    }
    ctx->pc = 0x1602B4u;
label_1602b4:
    // 0x1602b4: 0x1000ffdf
    ctx->pc = 0x1602B4u;
    {
        const bool branch_taken_0x1602b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1602B8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        if (branch_taken_0x1602b4) {
            ctx->pc = 0x160234u;
            goto label_160234;
        }
    }
    ctx->pc = 0x1602BCu;
label_1602bc:
    // 0x1602bc: 0x18c00004
    ctx->pc = 0x1602BCu;
    {
        const bool branch_taken_0x1602bc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1602C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x1602bc) {
            ctx->pc = 0x1602D0u;
            goto label_1602d0;
        }
    }
    ctx->pc = 0x1602C4u;
    // 0x1602c4: 0x24c20001
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1602c8: 0x10000002
    ctx->pc = 0x1602C8u;
    {
        const bool branch_taken_0x1602c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1602CCu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1602c8) {
            ctx->pc = 0x1602D4u;
            goto label_1602d4;
        }
    }
    ctx->pc = 0x1602D0u;
label_1602d0:
    // 0x1602d0: 0x61043
    ctx->pc = 0x1602d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_1602d4:
    // 0x1602d4: 0x431021
    ctx->pc = 0x1602d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1602d8: 0xac820000
    ctx->pc = 0x1602d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1602dc: 0x18e00004
    ctx->pc = 0x1602DCu;
    {
        const bool branch_taken_0x1602dc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1602E0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        if (branch_taken_0x1602dc) {
            ctx->pc = 0x1602F0u;
            goto label_1602f0;
        }
    }
    ctx->pc = 0x1602E4u;
    // 0x1602e4: 0x24e20001
    ctx->pc = 0x1602e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1602e8: 0x10000002
    ctx->pc = 0x1602E8u;
    {
        const bool branch_taken_0x1602e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1602ECu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1602e8) {
            ctx->pc = 0x1602F4u;
            goto label_1602f4;
        }
    }
    ctx->pc = 0x1602F0u;
label_1602f0:
    // 0x1602f0: 0x71043
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_1602f4:
    // 0x1602f4: 0x452821
    ctx->pc = 0x1602f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1602f8: 0x8d03a3ec
    ctx->pc = 0x1602f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4294943724)));
    // 0x1602fc: 0x24020001
    ctx->pc = 0x1602fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160300: 0x14620004
    ctx->pc = 0x160300u;
    {
        const bool branch_taken_0x160300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x160304u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x160300) {
            ctx->pc = 0x160314u;
            goto label_160314;
        }
    }
    ctx->pc = 0x160308u;
    // 0x160308: 0x24a2ffff
    ctx->pc = 0x160308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16030c: 0x3e00008
    ctx->pc = 0x16030Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160310u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1601CCu: goto label_1601cc;
            case 0x1601D0u: goto label_1601d0;
            case 0x1601ECu: goto label_1601ec;
            case 0x1601F0u: goto label_1601f0;
            case 0x160210u: goto label_160210;
            case 0x160230u: goto label_160230;
            case 0x160234u: goto label_160234;
            case 0x160244u: goto label_160244;
            case 0x160254u: goto label_160254;
            case 0x160274u: goto label_160274;
            case 0x160298u: goto label_160298;
            case 0x16029Cu: goto label_16029c;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602BCu: goto label_1602bc;
            case 0x1602D0u: goto label_1602d0;
            case 0x1602D4u: goto label_1602d4;
            case 0x1602F0u: goto label_1602f0;
            case 0x1602F4u: goto label_1602f4;
            case 0x160314u: goto label_160314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160314u;
label_160314:
    // 0x160314: 0x24a20001
    ctx->pc = 0x160314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x160318: 0x3e00008
    ctx->pc = 0x160318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16031Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1601CCu: goto label_1601cc;
            case 0x1601D0u: goto label_1601d0;
            case 0x1601ECu: goto label_1601ec;
            case 0x1601F0u: goto label_1601f0;
            case 0x160210u: goto label_160210;
            case 0x160230u: goto label_160230;
            case 0x160234u: goto label_160234;
            case 0x160244u: goto label_160244;
            case 0x160254u: goto label_160254;
            case 0x160274u: goto label_160274;
            case 0x160298u: goto label_160298;
            case 0x16029Cu: goto label_16029c;
            case 0x1602B4u: goto label_1602b4;
            case 0x1602BCu: goto label_1602bc;
            case 0x1602D0u: goto label_1602d0;
            case 0x1602D4u: goto label_1602d4;
            case 0x1602F0u: goto label_1602f0;
            case 0x1602F4u: goto label_1602f4;
            case 0x160314u: goto label_160314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160320u;
}
