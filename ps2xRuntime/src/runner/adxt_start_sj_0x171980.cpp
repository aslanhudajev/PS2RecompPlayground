#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_start_sj
// Address: 0x171980 - 0x171a44
void adxt_start_sj_0x171980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_start_sj");


    ctx->pc = 0x171980u;

label_171980:
    // 0x171980: 0x27bdffb0
    ctx->pc = 0x171980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_171984:
    // 0x171984: 0xffb30030
    ctx->pc = 0x171984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_171988:
    // 0x171988: 0xffb10010
    ctx->pc = 0x171988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17198c:
    // 0x17198c: 0xa0982d
    ctx->pc = 0x17198cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_171990:
    // 0x171990: 0xffb00000
    ctx->pc = 0x171990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_171994:
    // 0x171994: 0x80882d
    ctx->pc = 0x171994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171998:
    // 0x171998: 0xffbf0040
    ctx->pc = 0x171998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17199c:
    // 0x17199c: 0xffb20020
    ctx->pc = 0x17199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1719a0:
    // 0x1719a0: 0x82220003
    ctx->pc = 0x1719a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1719a4:
    // 0x1719a4: 0x1840000e
label_1719a8:
    if (ctx->pc == 0x1719A8u) {
        ctx->pc = 0x1719A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1719ACu;
        goto label_1719ac;
    }
    ctx->pc = 0x1719A4u;
    {
        const bool branch_taken_0x1719a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1719A8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1719a4) {
            ctx->pc = 0x1719E0u;
            goto label_1719e0;
        }
    }
    ctx->pc = 0x1719ACu;
label_1719ac:
    // 0x1719ac: 0x26320018
    ctx->pc = 0x1719acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 24));
label_1719b0:
    // 0x1719b0: 0x101080
    ctx->pc = 0x1719b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_1719b4:
    // 0x1719b4: 0x0
    ctx->pc = 0x1719b4u;
    // NOP
label_1719b8:
    // 0x1719b8: 0x2421021
    ctx->pc = 0x1719b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1719bc:
    // 0x1719bc: 0x8c440000
    ctx->pc = 0x1719bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1719c0:
    // 0x1719c0: 0x8c850000
    ctx->pc = 0x1719c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1719c4:
    // 0x1719c4: 0x8ca30014
    ctx->pc = 0x1719c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1719c8:
    // 0x1719c8: 0x60f809
label_1719cc:
    if (ctx->pc == 0x1719CCu) {
        ctx->pc = 0x1719CCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1719D0u;
        goto label_1719d0;
    }
    ctx->pc = 0x1719C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1719D0u);
        ctx->pc = 0x1719CCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171980u: goto label_171980;
            case 0x171984u: goto label_171984;
            case 0x171988u: goto label_171988;
            case 0x17198Cu: goto label_17198c;
            case 0x171990u: goto label_171990;
            case 0x171994u: goto label_171994;
            case 0x171998u: goto label_171998;
            case 0x17199Cu: goto label_17199c;
            case 0x1719A0u: goto label_1719a0;
            case 0x1719A4u: goto label_1719a4;
            case 0x1719A8u: goto label_1719a8;
            case 0x1719ACu: goto label_1719ac;
            case 0x1719B0u: goto label_1719b0;
            case 0x1719B4u: goto label_1719b4;
            case 0x1719B8u: goto label_1719b8;
            case 0x1719BCu: goto label_1719bc;
            case 0x1719C0u: goto label_1719c0;
            case 0x1719C4u: goto label_1719c4;
            case 0x1719C8u: goto label_1719c8;
            case 0x1719CCu: goto label_1719cc;
            case 0x1719D0u: goto label_1719d0;
            case 0x1719D4u: goto label_1719d4;
            case 0x1719D8u: goto label_1719d8;
            case 0x1719DCu: goto label_1719dc;
            case 0x1719E0u: goto label_1719e0;
            case 0x1719E4u: goto label_1719e4;
            case 0x1719E8u: goto label_1719e8;
            case 0x1719ECu: goto label_1719ec;
            case 0x1719F0u: goto label_1719f0;
            case 0x1719F4u: goto label_1719f4;
            case 0x1719F8u: goto label_1719f8;
            case 0x1719FCu: goto label_1719fc;
            case 0x171A00u: goto label_171a00;
            case 0x171A04u: goto label_171a04;
            case 0x171A08u: goto label_171a08;
            case 0x171A0Cu: goto label_171a0c;
            case 0x171A10u: goto label_171a10;
            case 0x171A14u: goto label_171a14;
            case 0x171A18u: goto label_171a18;
            case 0x171A1Cu: goto label_171a1c;
            case 0x171A20u: goto label_171a20;
            case 0x171A24u: goto label_171a24;
            case 0x171A28u: goto label_171a28;
            case 0x171A2Cu: goto label_171a2c;
            case 0x171A30u: goto label_171a30;
            case 0x171A34u: goto label_171a34;
            case 0x171A38u: goto label_171a38;
            case 0x171A3Cu: goto label_171a3c;
            case 0x171A40u: goto label_171a40;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1719D0u; }
            if (ctx->pc != 0x1719D0u) { return; }
        }
    }
    ctx->pc = 0x1719D0u;
label_1719d0:
    // 0x1719d0: 0x82220003
    ctx->pc = 0x1719d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1719d4:
    // 0x1719d4: 0x202102a
    ctx->pc = 0x1719d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_1719d8:
    // 0x1719d8: 0x1440fff7
label_1719dc:
    if (ctx->pc == 0x1719DCu) {
        ctx->pc = 0x1719DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x1719E0u;
        goto label_1719e0;
    }
    ctx->pc = 0x1719D8u;
    {
        const bool branch_taken_0x1719d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1719DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1719d8) {
            ctx->pc = 0x1719B8u;
            goto label_1719b8;
        }
    }
    ctx->pc = 0x1719E0u;
label_1719e0:
    // 0x1719e0: 0x8e240004
    ctx->pc = 0x1719e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1719e4:
    // 0x1719e4: 0xc05b798
label_1719e8:
    if (ctx->pc == 0x1719E8u) {
        ctx->pc = 0x1719E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1719ECu;
        goto label_1719ec;
    }
    ctx->pc = 0x1719E4u;
    SET_GPR_U32(ctx, 31, 0x1719ECu);
    ctx->pc = 0x1719E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetInSj_0x16de60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719ECu; }
        else if (ctx->pc != 0x1719ECu) { ctx->pc = 0x1719ECu; }
    }
    if (ctx->pc != 0x1719ECu) { return; }
    ctx->pc = 0x1719ECu;
label_1719ec:
    // 0x1719ec: 0xae330014
    ctx->pc = 0x1719ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 19));
label_1719f0:
    // 0x1719f0: 0xc05b7a8
label_1719f4:
    if (ctx->pc == 0x1719F4u) {
        ctx->pc = 0x1719F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1719F8u;
        goto label_1719f8;
    }
    ctx->pc = 0x1719F0u;
    SET_GPR_U32(ctx, 31, 0x1719F8u);
    ctx->pc = 0x1719F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x16DEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Start_0x16dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1719F8u; }
        else if (ctx->pc != 0x1719F8u) { ctx->pc = 0x1719F8u; }
    }
    if (ctx->pc != 0x1719F8u) { return; }
    ctx->pc = 0x1719F8u;
label_1719f8:
    // 0x1719f8: 0x24030001
    ctx->pc = 0x1719f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1719fc:
    // 0x1719fc: 0xa2200071
    ctx->pc = 0x1719fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
label_171a00:
    // 0x171a00: 0xa2230001
    ctx->pc = 0x171a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_171a04:
    // 0x171a04: 0x3c027fff
    ctx->pc = 0x171a04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
label_171a08:
    // 0x171a08: 0x3442ffff
    ctx->pc = 0x171a08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_171a0c:
    // 0x171a0c: 0x2404ffff
    ctx->pc = 0x171a0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_171a10:
    // 0x171a10: 0x8f838120
    ctx->pc = 0x171a10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
label_171a14:
    // 0x171a14: 0xae22008c
    ctx->pc = 0x171a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_171a18:
    // 0x171a18: 0xae2300a0
    ctx->pc = 0x171a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_171a1c:
    // 0x171a1c: 0xae240090
    ctx->pc = 0x171a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_171a20:
    // 0x171a20: 0xae20004c
    ctx->pc = 0x171a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_171a24:
    // 0x171a24: 0xae20009c
    ctx->pc = 0x171a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_171a28:
    // 0x171a28: 0xdfbf0040
    ctx->pc = 0x171a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_171a2c:
    // 0x171a2c: 0xdfb30030
    ctx->pc = 0x171a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_171a30:
    // 0x171a30: 0xdfb20020
    ctx->pc = 0x171a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_171a34:
    // 0x171a34: 0xdfb10010
    ctx->pc = 0x171a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171a38:
    // 0x171a38: 0xdfb00000
    ctx->pc = 0x171a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171a3c:
    // 0x171a3c: 0x3e00008
label_171a40:
    if (ctx->pc == 0x171A40u) {
        ctx->pc = 0x171A40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x171A44u;
        goto label_fallthrough_0x171a3c;
    }
    ctx->pc = 0x171A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171980u: goto label_171980;
            case 0x171984u: goto label_171984;
            case 0x171988u: goto label_171988;
            case 0x17198Cu: goto label_17198c;
            case 0x171990u: goto label_171990;
            case 0x171994u: goto label_171994;
            case 0x171998u: goto label_171998;
            case 0x17199Cu: goto label_17199c;
            case 0x1719A0u: goto label_1719a0;
            case 0x1719A4u: goto label_1719a4;
            case 0x1719A8u: goto label_1719a8;
            case 0x1719ACu: goto label_1719ac;
            case 0x1719B0u: goto label_1719b0;
            case 0x1719B4u: goto label_1719b4;
            case 0x1719B8u: goto label_1719b8;
            case 0x1719BCu: goto label_1719bc;
            case 0x1719C0u: goto label_1719c0;
            case 0x1719C4u: goto label_1719c4;
            case 0x1719C8u: goto label_1719c8;
            case 0x1719CCu: goto label_1719cc;
            case 0x1719D0u: goto label_1719d0;
            case 0x1719D4u: goto label_1719d4;
            case 0x1719D8u: goto label_1719d8;
            case 0x1719DCu: goto label_1719dc;
            case 0x1719E0u: goto label_1719e0;
            case 0x1719E4u: goto label_1719e4;
            case 0x1719E8u: goto label_1719e8;
            case 0x1719ECu: goto label_1719ec;
            case 0x1719F0u: goto label_1719f0;
            case 0x1719F4u: goto label_1719f4;
            case 0x1719F8u: goto label_1719f8;
            case 0x1719FCu: goto label_1719fc;
            case 0x171A00u: goto label_171a00;
            case 0x171A04u: goto label_171a04;
            case 0x171A08u: goto label_171a08;
            case 0x171A0Cu: goto label_171a0c;
            case 0x171A10u: goto label_171a10;
            case 0x171A14u: goto label_171a14;
            case 0x171A18u: goto label_171a18;
            case 0x171A1Cu: goto label_171a1c;
            case 0x171A20u: goto label_171a20;
            case 0x171A24u: goto label_171a24;
            case 0x171A28u: goto label_171a28;
            case 0x171A2Cu: goto label_171a2c;
            case 0x171A30u: goto label_171a30;
            case 0x171A34u: goto label_171a34;
            case 0x171A38u: goto label_171a38;
            case 0x171A3Cu: goto label_171a3c;
            case 0x171A40u: goto label_171a40;
            default: break;
        }
        return;
    }
label_fallthrough_0x171a3c:
    ctx->pc = 0x171A44u;
}
