#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioReplaceBank
// Address: 0x2214e8 - 0x2215dc
void AudioReplaceBank_0x2214e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2214e8u;

    // 0x2214e8: 0x27bdff90
    ctx->pc = 0x2214e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2214ec: 0xffbf0060
    ctx->pc = 0x2214ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2214f0: 0xffb50050
    ctx->pc = 0x2214f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2214f4: 0xffb40040
    ctx->pc = 0x2214f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2214f8: 0xffb30030
    ctx->pc = 0x2214f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2214fc: 0xffb20020
    ctx->pc = 0x2214fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x221500: 0xffb10010
    ctx->pc = 0x221500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x221504: 0xffb00000
    ctx->pc = 0x221504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221508: 0x80a02d
    ctx->pc = 0x221508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22150c: 0xa0882d
    ctx->pc = 0x22150cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221510: 0x3c020032
    ctx->pc = 0x221510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221514: 0x8c42fd58
    ctx->pc = 0x221514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x221518: 0x10400003
    ctx->pc = 0x221518u;
    {
        const bool branch_taken_0x221518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22151Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x221518) {
            ctx->pc = 0x221528u;
            goto label_221528;
        }
    }
    ctx->pc = 0x221520u;
    // 0x221520: 0x10000025
    ctx->pc = 0x221520u;
    {
        const bool branch_taken_0x221520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221520) {
            ctx->pc = 0x2215B8u;
            goto label_2215b8;
        }
    }
    ctx->pc = 0x221528u;
label_221528:
    // 0x221528: 0xc0880b4
    ctx->pc = 0x221528u;
    SET_GPR_U32(ctx, 31, 0x221530u);
    ctx->pc = 0x22152Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2202D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindPart_0x2202d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221530u; }
    }
    if (ctx->pc != 0x221530u) { return; }
    ctx->pc = 0x221530u;
    // 0x221530: 0x40982d
    ctx->pc = 0x221530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221534: 0x3c030032
    ctx->pc = 0x221534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x221538: 0x24020124
    ctx->pc = 0x221538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 292));
    // 0x22153c: 0x2621018
    ctx->pc = 0x22153cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221540: 0x24420014
    ctx->pc = 0x221540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x221544: 0x8c63fe28
    ctx->pc = 0x221544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
    // 0x221548: 0x438021
    ctx->pc = 0x221548u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22154c: 0x200202d
    ctx->pc = 0x22154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221550: 0xc0880da
    ctx->pc = 0x221550u;
    SET_GPR_U32(ctx, 31, 0x221558u);
    ctx->pc = 0x221554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220368u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindBank_0x220368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221558u; }
    }
    if (ctx->pc != 0x221558u) { return; }
    ctx->pc = 0x221558u;
    // 0x221558: 0x40882d
    ctx->pc = 0x221558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22155c: 0x8e02011c
    ctx->pc = 0x22155cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x221560: 0x1051000c
    ctx->pc = 0x221560u;
    {
        const bool branch_taken_0x221560 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x221564u;
        SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
        if (branch_taken_0x221560) {
            ctx->pc = 0x221594u;
            goto label_221594;
        }
    }
    ctx->pc = 0x221568u;
    // 0x221568: 0x10000003
    ctx->pc = 0x221568u;
    {
        const bool branch_taken_0x221568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221568) {
            ctx->pc = 0x221578u;
            goto label_221578;
        }
    }
    ctx->pc = 0x221570u;
label_221570:
    // 0x221570: 0xc0b521c
    ctx->pc = 0x221570u;
    SET_GPR_U32(ctx, 31, 0x221578u);
    ctx->pc = 0x221574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D4870u;
    {
        const uint32_t __entryPc = ctx->pc;
        wait_vb_0x2d4870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221578u; }
    }
    if (ctx->pc != 0x221578u) { return; }
    ctx->pc = 0x221578u;
label_221578:
    // 0x221578: 0xc088290
    ctx->pc = 0x221578u;
    SET_GPR_U32(ctx, 31, 0x221580u);
    ctx->pc = 0x22157Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221580u; }
    }
    if (ctx->pc != 0x221580u) { return; }
    ctx->pc = 0x221580u;
    // 0x221580: 0x5440fffb
    ctx->pc = 0x221580u;
    {
        const bool branch_taken_0x221580 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x221580) {
            ctx->pc = 0x221584u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294956548), GPR_U32(ctx, 0));
            ctx->pc = 0x221570u;
            goto label_221570;
        }
    }
    ctx->pc = 0x221588u;
    // 0x221588: 0x8e02011c
    ctx->pc = 0x221588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x22158c: 0x14510003
    ctx->pc = 0x22158Cu;
    {
        const bool branch_taken_0x22158c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x22158c) {
            ctx->pc = 0x22159Cu;
            goto label_22159c;
        }
    }
    ctx->pc = 0x221594u;
label_221594:
    // 0x221594: 0x10000008
    ctx->pc = 0x221594u;
    {
        const bool branch_taken_0x221594 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221598u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x221594) {
            ctx->pc = 0x2215B8u;
            goto label_2215b8;
        }
    }
    ctx->pc = 0x22159Cu;
label_22159c:
    // 0x22159c: 0xc0882ba
    ctx->pc = 0x22159Cu;
    SET_GPR_U32(ctx, 31, 0x2215A4u);
    ctx->pc = 0x2215A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioUnloadPart_0x220ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2215A4u; }
    }
    if (ctx->pc != 0x2215A4u) { return; }
    ctx->pc = 0x2215A4u;
    // 0x2215a4: 0x260202d
    ctx->pc = 0x2215a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215a8: 0x220282d
    ctx->pc = 0x2215a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215ac: 0x2a0302d
    ctx->pc = 0x2215acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2215b0: 0xc088468
    ctx->pc = 0x2215B0u;
    SET_GPR_U32(ctx, 31, 0x2215B8u);
    ctx->pc = 0x2215B4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2211A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadBank_0x2211a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2215B8u; }
    }
    if (ctx->pc != 0x2215B8u) { return; }
    ctx->pc = 0x2215B8u;
label_2215b8:
    // 0x2215b8: 0xdfbf0060
    ctx->pc = 0x2215b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2215bc: 0xdfb50050
    ctx->pc = 0x2215bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2215c0: 0xdfb40040
    ctx->pc = 0x2215c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2215c4: 0xdfb30030
    ctx->pc = 0x2215c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2215c8: 0xdfb20020
    ctx->pc = 0x2215c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2215cc: 0xdfb10010
    ctx->pc = 0x2215ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2215d0: 0xdfb00000
    ctx->pc = 0x2215d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2215d4: 0x3e00008
    ctx->pc = 0x2215D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2215D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221528u: goto label_221528;
            case 0x221570u: goto label_221570;
            case 0x221578u: goto label_221578;
            case 0x221594u: goto label_221594;
            case 0x22159Cu: goto label_22159c;
            case 0x2215B8u: goto label_2215b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2215DCu;
}
