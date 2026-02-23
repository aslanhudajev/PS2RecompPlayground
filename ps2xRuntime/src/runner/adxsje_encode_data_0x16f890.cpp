#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_encode_data
// Address: 0x16f890 - 0x16f944
void adxsje_encode_data_0x16f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_encode_data");


    ctx->pc = 0x16f890u;

label_16f890:
    // 0x16f890: 0x27bdffb0
    ctx->pc = 0x16f890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_16f894:
    // 0x16f894: 0xffb30030
    ctx->pc = 0x16f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_16f898:
    // 0x16f898: 0xffb20020
    ctx->pc = 0x16f898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16f89c:
    // 0x16f89c: 0x982d
    ctx->pc = 0x16f89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f8a0:
    // 0x16f8a0: 0xffb00000
    ctx->pc = 0x16f8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16f8a4:
    // 0x16f8a4: 0x24120012
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 18));
label_16f8a8:
    // 0x16f8a8: 0xffbf0040
    ctx->pc = 0x16f8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16f8ac:
    // 0x16f8ac: 0x80802d
    ctx->pc = 0x16f8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f8b0:
    // 0x16f8b0: 0xffb10010
    ctx->pc = 0x16f8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16f8b4:
    // 0x16f8b4: 0x8e11000c
    ctx->pc = 0x16f8b4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16f8b8:
    // 0x16f8b8: 0x8e230000
    ctx->pc = 0x16f8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f8bc:
    // 0x16f8bc: 0x0
    ctx->pc = 0x16f8bcu;
    // NOP
label_16f8c0:
    // 0x16f8c0: 0x220202d
    ctx->pc = 0x16f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f8c4:
    // 0x16f8c4: 0x8c620024
    ctx->pc = 0x16f8c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16f8c8:
    // 0x16f8c8: 0x40f809
label_16f8cc:
    if (ctx->pc == 0x16F8CCu) {
        ctx->pc = 0x16F8CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8D0u;
        goto label_16f8d0;
    }
    ctx->pc = 0x16F8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F8D0u);
        ctx->pc = 0x16F8CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F890u: goto label_16f890;
            case 0x16F894u: goto label_16f894;
            case 0x16F898u: goto label_16f898;
            case 0x16F89Cu: goto label_16f89c;
            case 0x16F8A0u: goto label_16f8a0;
            case 0x16F8A4u: goto label_16f8a4;
            case 0x16F8A8u: goto label_16f8a8;
            case 0x16F8ACu: goto label_16f8ac;
            case 0x16F8B0u: goto label_16f8b0;
            case 0x16F8B4u: goto label_16f8b4;
            case 0x16F8B8u: goto label_16f8b8;
            case 0x16F8BCu: goto label_16f8bc;
            case 0x16F8C0u: goto label_16f8c0;
            case 0x16F8C4u: goto label_16f8c4;
            case 0x16F8C8u: goto label_16f8c8;
            case 0x16F8CCu: goto label_16f8cc;
            case 0x16F8D0u: goto label_16f8d0;
            case 0x16F8D4u: goto label_16f8d4;
            case 0x16F8D8u: goto label_16f8d8;
            case 0x16F8DCu: goto label_16f8dc;
            case 0x16F8E0u: goto label_16f8e0;
            case 0x16F8E4u: goto label_16f8e4;
            case 0x16F8E8u: goto label_16f8e8;
            case 0x16F8ECu: goto label_16f8ec;
            case 0x16F8F0u: goto label_16f8f0;
            case 0x16F8F4u: goto label_16f8f4;
            case 0x16F8F8u: goto label_16f8f8;
            case 0x16F8FCu: goto label_16f8fc;
            case 0x16F900u: goto label_16f900;
            case 0x16F904u: goto label_16f904;
            case 0x16F908u: goto label_16f908;
            case 0x16F90Cu: goto label_16f90c;
            case 0x16F910u: goto label_16f910;
            case 0x16F914u: goto label_16f914;
            case 0x16F918u: goto label_16f918;
            case 0x16F91Cu: goto label_16f91c;
            case 0x16F920u: goto label_16f920;
            case 0x16F924u: goto label_16f924;
            case 0x16F928u: goto label_16f928;
            case 0x16F92Cu: goto label_16f92c;
            case 0x16F930u: goto label_16f930;
            case 0x16F934u: goto label_16f934;
            case 0x16F938u: goto label_16f938;
            case 0x16F93Cu: goto label_16f93c;
            case 0x16F940u: goto label_16f940;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F8D0u; }
            if (ctx->pc != 0x16F8D0u) { return; }
        }
    }
    ctx->pc = 0x16F8D0u;
label_16f8d0:
    // 0x16f8d0: 0x52001a
    ctx->pc = 0x16f8d0u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_16f8d4:
    // 0x16f8d4: 0x52400001
label_16f8d8:
    if (ctx->pc == 0x16F8D8u) {
        ctx->pc = 0x16F8D8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x16F8DCu;
        goto label_16f8dc;
    }
    ctx->pc = 0x16F8D4u;
    {
        const bool branch_taken_0x16f8d4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x16f8d4) {
            ctx->pc = 0x16F8D8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16F8DCu;
            goto label_16f8dc;
        }
    }
    ctx->pc = 0x16F8DCu;
label_16f8dc:
    // 0x16f8dc: 0x8e030058
    ctx->pc = 0x16f8dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_16f8e0:
    // 0x16f8e0: 0x1012
    ctx->pc = 0x16f8e0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_16f8e4:
    // 0x16f8e4: 0x43001a
    ctx->pc = 0x16f8e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_16f8e8:
    // 0x16f8e8: 0x1012
    ctx->pc = 0x16f8e8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_16f8ec:
    // 0x16f8ec: 0x1840000e
label_16f8f0:
    if (ctx->pc == 0x16F8F0u) {
        ctx->pc = 0x16F8F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8F4u;
        goto label_16f8f4;
    }
    ctx->pc = 0x16F8ECu;
    {
        const bool branch_taken_0x16f8ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F8F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f8ec) {
            ctx->pc = 0x16F928u;
            goto label_16f928;
        }
    }
    ctx->pc = 0x16F8F4u;
label_16f8f4:
    // 0x16f8f4: 0xc05bd78
label_16f8f8:
    if (ctx->pc == 0x16F8F8u) {
        ctx->pc = 0x16F8F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F8FCu;
        goto label_16f8fc;
    }
    ctx->pc = 0x16F8F4u;
    SET_GPR_U32(ctx, 31, 0x16F8FCu);
    ctx->pc = 0x16F8F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F5E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_encode_blk_0x16f5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8FCu; }
        else if (ctx->pc != 0x16F8FCu) { ctx->pc = 0x16F8FCu; }
    }
    if (ctx->pc != 0x16F8FCu) { return; }
    ctx->pc = 0x16F8FCu;
label_16f8fc:
    // 0x16f8fc: 0x1040000a
label_16f900:
    if (ctx->pc == 0x16F900u) {
        ctx->pc = 0x16F900u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F904u;
        goto label_16f904;
    }
    ctx->pc = 0x16F8FCu;
    {
        const bool branch_taken_0x16f8fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F900u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f8fc) {
            ctx->pc = 0x16F928u;
            goto label_16f928;
        }
    }
    ctx->pc = 0x16F904u;
label_16f904:
    // 0x16f904: 0xc05bdea
label_16f908:
    if (ctx->pc == 0x16F908u) {
        ctx->pc = 0x16F908u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F90Cu;
        goto label_16f90c;
    }
    ctx->pc = 0x16F904u;
    SET_GPR_U32(ctx, 31, 0x16F90Cu);
    ctx->pc = 0x16F908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_output_sdata_0x16f7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F90Cu; }
        else if (ctx->pc != 0x16F90Cu) { ctx->pc = 0x16F90Cu; }
    }
    if (ctx->pc != 0x16F90Cu) { return; }
    ctx->pc = 0x16F90Cu;
label_16f90c:
    // 0x16f90c: 0x2629821
    ctx->pc = 0x16f90cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_16f910:
    // 0x16f910: 0x8e030030
    ctx->pc = 0x16f910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_16f914:
    // 0x16f914: 0x8e02003c
    ctx->pc = 0x16f914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_16f918:
    // 0x16f918: 0x62182a
    ctx->pc = 0x16f918u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_16f91c:
    // 0x16f91c: 0x5460ffe8
label_16f920:
    if (ctx->pc == 0x16F920u) {
        ctx->pc = 0x16F920u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16F924u;
        goto label_16f924;
    }
    ctx->pc = 0x16F91Cu;
    {
        const bool branch_taken_0x16f91c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x16f91c) {
            ctx->pc = 0x16F920u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x16F8C0u;
            goto label_16f8c0;
        }
    }
    ctx->pc = 0x16F924u;
label_16f924:
    // 0x16f924: 0x260102d
    ctx->pc = 0x16f924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f928:
    // 0x16f928: 0xdfbf0040
    ctx->pc = 0x16f928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f92c:
    // 0x16f92c: 0xdfb30030
    ctx->pc = 0x16f92cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16f930:
    // 0x16f930: 0xdfb20020
    ctx->pc = 0x16f930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16f934:
    // 0x16f934: 0xdfb10010
    ctx->pc = 0x16f934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16f938:
    // 0x16f938: 0xdfb00000
    ctx->pc = 0x16f938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f93c:
    // 0x16f93c: 0x3e00008
label_16f940:
    if (ctx->pc == 0x16F940u) {
        ctx->pc = 0x16F940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16F944u;
        goto label_fallthrough_0x16f93c;
    }
    ctx->pc = 0x16F93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F890u: goto label_16f890;
            case 0x16F894u: goto label_16f894;
            case 0x16F898u: goto label_16f898;
            case 0x16F89Cu: goto label_16f89c;
            case 0x16F8A0u: goto label_16f8a0;
            case 0x16F8A4u: goto label_16f8a4;
            case 0x16F8A8u: goto label_16f8a8;
            case 0x16F8ACu: goto label_16f8ac;
            case 0x16F8B0u: goto label_16f8b0;
            case 0x16F8B4u: goto label_16f8b4;
            case 0x16F8B8u: goto label_16f8b8;
            case 0x16F8BCu: goto label_16f8bc;
            case 0x16F8C0u: goto label_16f8c0;
            case 0x16F8C4u: goto label_16f8c4;
            case 0x16F8C8u: goto label_16f8c8;
            case 0x16F8CCu: goto label_16f8cc;
            case 0x16F8D0u: goto label_16f8d0;
            case 0x16F8D4u: goto label_16f8d4;
            case 0x16F8D8u: goto label_16f8d8;
            case 0x16F8DCu: goto label_16f8dc;
            case 0x16F8E0u: goto label_16f8e0;
            case 0x16F8E4u: goto label_16f8e4;
            case 0x16F8E8u: goto label_16f8e8;
            case 0x16F8ECu: goto label_16f8ec;
            case 0x16F8F0u: goto label_16f8f0;
            case 0x16F8F4u: goto label_16f8f4;
            case 0x16F8F8u: goto label_16f8f8;
            case 0x16F8FCu: goto label_16f8fc;
            case 0x16F900u: goto label_16f900;
            case 0x16F904u: goto label_16f904;
            case 0x16F908u: goto label_16f908;
            case 0x16F90Cu: goto label_16f90c;
            case 0x16F910u: goto label_16f910;
            case 0x16F914u: goto label_16f914;
            case 0x16F918u: goto label_16f918;
            case 0x16F91Cu: goto label_16f91c;
            case 0x16F920u: goto label_16f920;
            case 0x16F924u: goto label_16f924;
            case 0x16F928u: goto label_16f928;
            case 0x16F92Cu: goto label_16f92c;
            case 0x16F930u: goto label_16f930;
            case 0x16F934u: goto label_16f934;
            case 0x16F938u: goto label_16f938;
            case 0x16F93Cu: goto label_16f93c;
            case 0x16F940u: goto label_16f940;
            default: break;
        }
        return;
    }
label_fallthrough_0x16f93c:
    ctx->pc = 0x16F944u;
}
