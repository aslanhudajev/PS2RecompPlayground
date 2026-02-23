#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_FirstPicAtr
// Address: 0x1974b0 - 0x1975d8
void sfmpv_FirstPicAtr_0x1974b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_FirstPicAtr");


    ctx->pc = 0x1974b0u;

    // 0x1974b0: 0x27bdff80
    ctx->pc = 0x1974b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1974b4: 0xffb00010
    ctx->pc = 0x1974b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1974b8: 0xffb50060
    ctx->pc = 0x1974b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1974bc: 0x80802d
    ctx->pc = 0x1974bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974c0: 0xffb40050
    ctx->pc = 0x1974c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1974c4: 0xc0a82d
    ctx->pc = 0x1974c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974c8: 0xffb30040
    ctx->pc = 0x1974c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1974cc: 0xe0a02d
    ctx->pc = 0x1974ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974d0: 0xffb20030
    ctx->pc = 0x1974d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1974d4: 0x26133740
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 14144));
    // 0x1974d8: 0xffb10020
    ctx->pc = 0x1974d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1974dc: 0x26120900
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2304));
    // 0x1974e0: 0xffbf0070
    ctx->pc = 0x1974e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1974e4: 0x8e420010
    ctx->pc = 0x1974e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1974e8: 0x10400003
    ctx->pc = 0x1974E8u;
    {
        const bool branch_taken_0x1974e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1974ECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1974e8) {
            ctx->pc = 0x1974F8u;
            goto label_1974f8;
        }
    }
    ctx->pc = 0x1974F0u;
    // 0x1974f0: 0x10000030
    ctx->pc = 0x1974F0u;
    {
        const bool branch_taken_0x1974f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1974F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1974f0) {
            ctx->pc = 0x1975B4u;
            goto label_1975b4;
        }
    }
    ctx->pc = 0x1974F8u;
label_1974f8:
    // 0x1974f8: 0x220202d
    ctx->pc = 0x1974f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974fc: 0xc061926
    ctx->pc = 0x1974FCu;
    SET_GPR_U32(ctx, 31, 0x197504u);
    ctx->pc = 0x197500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_GetBitRate_0x186498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197504u; }
        else if (ctx->pc != 0x197504u) { ctx->pc = 0x197504u; }
    }
    if (ctx->pc != 0x197504u) { return; }
    ctx->pc = 0x197504u;
    // 0x197504: 0x10400006
    ctx->pc = 0x197504u;
    {
        const bool branch_taken_0x197504 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197508u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197504) {
            ctx->pc = 0x197520u;
            goto label_197520;
        }
    }
    ctx->pc = 0x19750Cu;
    // 0x19750c: 0x3c05ff00
    ctx->pc = 0x19750cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x197510: 0xc064ea0
    ctx->pc = 0x197510u;
    SET_GPR_U32(ctx, 31, 0x197518u);
    ctx->pc = 0x197514u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3862));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197518u; }
        else if (ctx->pc != 0x197518u) { ctx->pc = 0x197518u; }
    }
    if (ctx->pc != 0x197518u) { return; }
    ctx->pc = 0x197518u;
    // 0x197518: 0x10000027
    ctx->pc = 0x197518u;
    {
        const bool branch_taken_0x197518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19751Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x197518) {
            ctx->pc = 0x1975B8u;
            goto label_1975b8;
        }
    }
    ctx->pc = 0x197520u;
label_197520:
    // 0x197520: 0x220202d
    ctx->pc = 0x197520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197524: 0x37a50004
    ctx->pc = 0x197524u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    // 0x197528: 0x37a60008
    ctx->pc = 0x197528u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 8));
    // 0x19752c: 0xc06193c
    ctx->pc = 0x19752Cu;
    SET_GPR_U32(ctx, 31, 0x197534u);
    ctx->pc = 0x197530u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x1864F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_GetVbvBufSiz_0x1864f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197534u; }
        else if (ctx->pc != 0x197534u) { ctx->pc = 0x197534u; }
    }
    if (ctx->pc != 0x197534u) { return; }
    ctx->pc = 0x197534u;
    // 0x197534: 0x200202d
    ctx->pc = 0x197534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197538: 0xc0674c2
    ctx->pc = 0x197538u;
    SET_GPR_U32(ctx, 31, 0x197540u);
    ctx->pc = 0x19753Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197540u; }
        else if (ctx->pc != 0x197540u) { ctx->pc = 0x197540u; }
    }
    if (ctx->pc != 0x197540u) { return; }
    ctx->pc = 0x197540u;
    // 0x197540: 0x14400003
    ctx->pc = 0x197540u;
    {
        const bool branch_taken_0x197540 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x197544u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197540) {
            ctx->pc = 0x197550u;
            goto label_197550;
        }
    }
    ctx->pc = 0x197548u;
    // 0x197548: 0x1000000e
    ctx->pc = 0x197548u;
    {
        const bool branch_taken_0x197548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19754Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
        if (branch_taken_0x197548) {
            ctx->pc = 0x197584u;
            goto label_197584;
        }
    }
    ctx->pc = 0x197550u;
label_197550:
    // 0x197550: 0xc06489c
    ctx->pc = 0x197550u;
    SET_GPR_U32(ctx, 31, 0x197558u);
    ctx->pc = 0x197554u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x192270u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetRingBufSiz_0x192270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197558u; }
        else if (ctx->pc != 0x197558u) { ctx->pc = 0x197558u; }
    }
    if (ctx->pc != 0x197558u) { return; }
    ctx->pc = 0x197558u;
    // 0x197558: 0x40202d
    ctx->pc = 0x197558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19755c: 0x8fa3000c
    ctx->pc = 0x19755cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x197560: 0x2402ffff
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197564: 0x14620005
    ctx->pc = 0x197564u;
    {
        const bool branch_taken_0x197564 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x197568u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
        if (branch_taken_0x197564) {
            ctx->pc = 0x19757Cu;
            goto label_19757c;
        }
    }
    ctx->pc = 0x19756Cu;
    // 0x19756c: 0x8fa20004
    ctx->pc = 0x19756cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x197570: 0xafa2000c
    ctx->pc = 0x197570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x197574: 0x40182d
    ctx->pc = 0x197574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197578: 0x64102a
    ctx->pc = 0x197578u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_19757c:
    // 0x19757c: 0x82180a
    ctx->pc = 0x19757cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x197580: 0xae630080
    ctx->pc = 0x197580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
label_197584:
    // 0x197584: 0x8fa50000
    ctx->pc = 0x197584u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197588: 0x280302d
    ctx->pc = 0x197588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19758c: 0xc065d76
    ctx->pc = 0x19758Cu;
    SET_GPR_U32(ctx, 31, 0x197594u);
    ctx->pc = 0x197590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1975D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetMpvHd_0x1975d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197594u; }
        else if (ctx->pc != 0x197594u) { ctx->pc = 0x197594u; }
    }
    if (ctx->pc != 0x197594u) { return; }
    ctx->pc = 0x197594u;
    // 0x197594: 0x8fa70004
    ctx->pc = 0x197594u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x197598: 0x2a0302d
    ctx->pc = 0x197598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19759c: 0x8fa50000
    ctx->pc = 0x19759cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1975a0: 0xc065dba
    ctx->pc = 0x1975A0u;
    SET_GPR_U32(ctx, 31, 0x1975A8u);
    ctx->pc = 0x1975A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1976E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetMvInf_0x1976e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975A8u; }
        else if (ctx->pc != 0x1975A8u) { ctx->pc = 0x1975A8u; }
    }
    if (ctx->pc != 0x1975A8u) { return; }
    ctx->pc = 0x1975A8u;
    // 0x1975a8: 0x200202d
    ctx->pc = 0x1975a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1975ac: 0xc065dc8
    ctx->pc = 0x1975ACu;
    SET_GPR_U32(ctx, 31, 0x1975B4u);
    ctx->pc = 0x1975B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ChkBufSiz_0x197720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1975B4u; }
        else if (ctx->pc != 0x1975B4u) { ctx->pc = 0x1975B4u; }
    }
    if (ctx->pc != 0x1975B4u) { return; }
    ctx->pc = 0x1975B4u;
label_1975b4:
    // 0x1975b4: 0xdfbf0070
    ctx->pc = 0x1975b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1975b8:
    // 0x1975b8: 0xdfb50060
    ctx->pc = 0x1975b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1975bc: 0xdfb40050
    ctx->pc = 0x1975bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1975c0: 0xdfb30040
    ctx->pc = 0x1975c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1975c4: 0xdfb20030
    ctx->pc = 0x1975c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1975c8: 0xdfb10020
    ctx->pc = 0x1975c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1975cc: 0xdfb00010
    ctx->pc = 0x1975ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1975d0: 0x3e00008
    ctx->pc = 0x1975D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1975D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1974F8u: goto label_1974f8;
            case 0x197520u: goto label_197520;
            case 0x197550u: goto label_197550;
            case 0x19757Cu: goto label_19757c;
            case 0x197584u: goto label_197584;
            case 0x1975B4u: goto label_1975b4;
            case 0x1975B8u: goto label_1975b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1975D8u;
}
