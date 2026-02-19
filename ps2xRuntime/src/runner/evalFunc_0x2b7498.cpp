#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalFunc
// Address: 0x2b7498 - 0x2b76c0
void evalFunc_0x2b7498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7498u;

label_2b7498:
    // 0x2b7498: 0x27bdfcc0
    ctx->pc = 0x2b7498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966464));
label_2b749c:
    // 0x2b749c: 0xffbf0330
    ctx->pc = 0x2b749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 31));
label_2b74a0:
    // 0x2b74a0: 0xffbe0320
    ctx->pc = 0x2b74a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 30));
label_2b74a4:
    // 0x2b74a4: 0xffb70310
    ctx->pc = 0x2b74a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 23));
label_2b74a8:
    // 0x2b74a8: 0xffb60300
    ctx->pc = 0x2b74a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 22));
label_2b74ac:
    // 0x2b74ac: 0xffb502f0
    ctx->pc = 0x2b74acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 21));
label_2b74b0:
    // 0x2b74b0: 0xffb402e0
    ctx->pc = 0x2b74b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 20));
label_2b74b4:
    // 0x2b74b4: 0xffb302d0
    ctx->pc = 0x2b74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 19));
label_2b74b8:
    // 0x2b74b8: 0xffb202c0
    ctx->pc = 0x2b74b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 18));
label_2b74bc:
    // 0x2b74bc: 0xffb102b0
    ctx->pc = 0x2b74bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 17));
label_2b74c0:
    // 0x2b74c0: 0xffb002a0
    ctx->pc = 0x2b74c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 16));
label_2b74c4:
    // 0x2b74c4: 0x80a82d
    ctx->pc = 0x2b74c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b74c8:
    // 0x2b74c8: 0xa0a02d
    ctx->pc = 0x2b74c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b74cc:
    // 0x2b74cc: 0xc0982d
    ctx->pc = 0x2b74ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b74d0:
    // 0x2b74d0: 0xe0b02d
    ctx->pc = 0x2b74d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b74d4:
    // 0x2b74d4: 0x100902d
    ctx->pc = 0x2b74d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b74d8:
    // 0x2b74d8: 0x26d00001
    ctx->pc = 0x2b74d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 1));
label_2b74dc:
    // 0x2b74dc: 0x2121026
    ctx->pc = 0x2b74dcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2b74e0:
    // 0x2b74e0: 0x2800a
    ctx->pc = 0x2b74e0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
label_2b74e4:
    // 0x2b74e4: 0x12000011
label_2b74e8:
    if (ctx->pc == 0x2B74E8u) {
        ctx->pc = 0x2B74E8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B74ECu;
        goto label_2b74ec;
    }
    ctx->pc = 0x2B74E4u;
    {
        const bool branch_taken_0x2b74e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B74E8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b74e4) {
            ctx->pc = 0x2B752Cu;
            goto label_2b752c;
        }
    }
    ctx->pc = 0x2B74ECu;
label_2b74ec:
    // 0x2b74ec: 0x3c1e003b
    ctx->pc = 0x2b74ecu;
    SET_GPR_U32(ctx, 30, ((uint32_t)59 << 16));
label_2b74f0:
    // 0x2b74f0: 0x24170050
    ctx->pc = 0x2b74f0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 80));
label_2b74f4:
    // 0x2b74f4: 0x27c45100
    ctx->pc = 0x2b74f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 20736));
label_2b74f8:
    // 0x2b74f8: 0xc0addb0
label_2b74fc:
    if (ctx->pc == 0x2B74FCu) {
        ctx->pc = 0x2B74FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7500u;
        goto label_2b7500;
    }
    ctx->pc = 0x2B74F8u;
    SET_GPR_U32(ctx, 31, 0x2B7500u);
    ctx->pc = 0x2B74FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7500u; }
    }
    if (ctx->pc != 0x2B7500u) { return; }
    ctx->pc = 0x2B7500u;
label_2b7500:
    // 0x2b7500: 0x2371018
    ctx->pc = 0x2b7500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2b7504:
    // 0x2b7504: 0x5d2021
    ctx->pc = 0x2b7504u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2b7508:
    // 0x2b7508: 0x26310001
    ctx->pc = 0x2b7508u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2b750c:
    // 0x2b750c: 0x280282d
    ctx->pc = 0x2b750cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b7510:
    // 0x2b7510: 0x200302d
    ctx->pc = 0x2b7510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7514:
    // 0x2b7514: 0x2647ffff
    ctx->pc = 0x2b7514u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2b7518:
    // 0x2b7518: 0xc0ae35e
label_2b751c:
    if (ctx->pc == 0x2B751Cu) {
        ctx->pc = 0x2B751Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7520u;
        goto label_2b7520;
    }
    ctx->pc = 0x2B7518u;
    SET_GPR_U32(ctx, 31, 0x2B7520u);
    ctx->pc = 0x2B751Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B8D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEval_0x2b8d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7520u; }
    }
    if (ctx->pc != 0x2B7520u) { return; }
    ctx->pc = 0x2B7520u;
label_2b7520:
    // 0x2b7520: 0x40802d
    ctx->pc = 0x2b7520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7524:
    // 0x2b7524: 0x1600fff4
label_2b7528:
    if (ctx->pc == 0x2B7528u) {
        ctx->pc = 0x2B7528u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 20736));
        ctx->pc = 0x2B752Cu;
        goto label_2b752c;
    }
    ctx->pc = 0x2B7524u;
    {
        const bool branch_taken_0x2b7524 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7528u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 20736));
        if (branch_taken_0x2b7524) {
            ctx->pc = 0x2B74F8u;
            goto label_2b74f8;
        }
    }
    ctx->pc = 0x2B752Cu;
label_2b752c:
    // 0x2b752c: 0x2d39023
    ctx->pc = 0x2b752cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_2b7530:
    // 0x2b7530: 0x3c020037
    ctx->pc = 0x2b7530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b7534:
    // 0x2b7534: 0x24502408
    ctx->pc = 0x2b7534u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 9224));
label_2b7538:
    // 0x2b7538: 0x8c422408
    ctx->pc = 0x2b7538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9224)));
label_2b753c:
    // 0x2b753c: 0x1040003e
label_2b7540:
    if (ctx->pc == 0x2B7540u) {
        ctx->pc = 0x2B7540u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2B7544u;
        goto label_2b7544;
    }
    ctx->pc = 0x2B753Cu;
    {
        const bool branch_taken_0x2b753c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7540u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2b753c) {
            ctx->pc = 0x2B7638u;
            goto label_2b7638;
        }
    }
    ctx->pc = 0x2B7544u;
label_2b7544:
    // 0x2b7544: 0x3c160037
    ctx->pc = 0x2b7544u;
    SET_GPR_U32(ctx, 22, ((uint32_t)55 << 16));
label_2b7548:
    // 0x2b7548: 0x260202d
    ctx->pc = 0x2b7548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b754c:
    // 0x2b754c: 0x0
    ctx->pc = 0x2b754cu;
    // NOP
label_2b7550:
    // 0x2b7550: 0x8e050000
    ctx->pc = 0x2b7550u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b7554:
    // 0x2b7554: 0xc0bf3c0
label_2b7558:
    if (ctx->pc == 0x2B7558u) {
        ctx->pc = 0x2B7558u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B755Cu;
        goto label_2b755c;
    }
    ctx->pc = 0x2B7554u;
    SET_GPR_U32(ctx, 31, 0x2B755Cu);
    ctx->pc = 0x2B7558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B755Cu; }
    }
    if (ctx->pc != 0x2B755Cu) { return; }
    ctx->pc = 0x2B755Cu;
label_2b755c:
    // 0x2b755c: 0x54400033
label_2b7560:
    if (ctx->pc == 0x2B7560u) {
        ctx->pc = 0x2B7560u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x2B7564u;
        goto label_2b7564;
    }
    ctx->pc = 0x2B755Cu;
    {
        const bool branch_taken_0x2b755c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b755c) {
            ctx->pc = 0x2B7560u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
            ctx->pc = 0x2B762Cu;
            goto label_2b762c;
        }
    }
    ctx->pc = 0x2B7564u;
label_2b7564:
    // 0x2b7564: 0x92020004
    ctx->pc = 0x2b7564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2b7568:
    // 0x2b7568: 0x222102a
    ctx->pc = 0x2b7568u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_2b756c:
    // 0x2b756c: 0x14400006
label_2b7570:
    if (ctx->pc == 0x2B7570u) {
        ctx->pc = 0x2B7570u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B7574u;
        goto label_2b7574;
    }
    ctx->pc = 0x2B756Cu;
    {
        const bool branch_taken_0x2b756c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B7570u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b756c) {
            ctx->pc = 0x2B7588u;
            goto label_2b7588;
        }
    }
    ctx->pc = 0x2B7574u;
label_2b7574:
    // 0x2b7574: 0x92020005
    ctx->pc = 0x2b7574u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_2b7578:
    // 0x2b7578: 0x1040001b
label_2b757c:
    if (ctx->pc == 0x2B757Cu) {
        ctx->pc = 0x2B757Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
        ctx->pc = 0x2B7580u;
        goto label_2b7580;
    }
    ctx->pc = 0x2B7578u;
    {
        const bool branch_taken_0x2b7578 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B757Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
        if (branch_taken_0x2b7578) {
            ctx->pc = 0x2B75E8u;
            goto label_2b75e8;
        }
    }
    ctx->pc = 0x2B7580u;
label_2b7580:
    // 0x2b7580: 0x1040001a
label_2b7584:
    if (ctx->pc == 0x2B7584u) {
        ctx->pc = 0x2B7584u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8364)));
        ctx->pc = 0x2B7588u;
        goto label_2b7588;
    }
    ctx->pc = 0x2B7580u;
    {
        const bool branch_taken_0x2b7580 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7584u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8364)));
        if (branch_taken_0x2b7580) {
            ctx->pc = 0x2B75ECu;
            goto label_2b75ec;
        }
    }
    ctx->pc = 0x2B7588u;
label_2b7588:
    // 0x2b7588: 0x3c06003b
    ctx->pc = 0x2b7588u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b758c:
    // 0x2b758c: 0x24844650
    ctx->pc = 0x2b758cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b7590:
    // 0x2b7590: 0x24050020
    ctx->pc = 0x2b7590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b7594:
    // 0x2b7594: 0x24c60d80
    ctx->pc = 0x2b7594u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b7598:
    // 0x2b7598: 0xc0ad0d6
label_2b759c:
    if (ctx->pc == 0x2B759Cu) {
        ctx->pc = 0x2B759Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B75A0u;
        goto label_2b75a0;
    }
    ctx->pc = 0x2B7598u;
    SET_GPR_U32(ctx, 31, 0x2B75A0u);
    ctx->pc = 0x2B759Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75A0u; }
    }
    if (ctx->pc != 0x2B75A0u) { return; }
    ctx->pc = 0x2B75A0u;
label_2b75a0:
    // 0x2b75a0: 0x3c04003b
    ctx->pc = 0x2b75a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b75a4:
    // 0x2b75a4: 0x24845118
    ctx->pc = 0x2b75a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20760));
label_2b75a8:
    // 0x2b75a8: 0x220282d
    ctx->pc = 0x2b75a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b75ac:
    // 0x2b75ac: 0x2646ffff
    ctx->pc = 0x2b75acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2b75b0:
    // 0x2b75b0: 0x260382d
    ctx->pc = 0x2b75b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b75b4:
    // 0x2b75b4: 0x92080004
    ctx->pc = 0x2b75b4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2b75b8:
    // 0x2b75b8: 0xc0b4a34
label_2b75bc:
    if (ctx->pc == 0x2B75BCu) {
        ctx->pc = 0x2B75BCu;
        SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->pc = 0x2B75C0u;
        goto label_2b75c0;
    }
    ctx->pc = 0x2B75B8u;
    SET_GPR_U32(ctx, 31, 0x2B75C0u);
    ctx->pc = 0x2B75BCu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75C0u; }
    }
    if (ctx->pc != 0x2B75C0u) { return; }
    ctx->pc = 0x2B75C0u;
label_2b75c0:
    // 0x2b75c0: 0x3c04003b
    ctx->pc = 0x2b75c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b75c4:
    // 0x2b75c4: 0xc0b4a34
label_2b75c8:
    if (ctx->pc == 0x2B75C8u) {
        ctx->pc = 0x2B75C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B75CCu;
        goto label_2b75cc;
    }
    ctx->pc = 0x2B75C4u;
    SET_GPR_U32(ctx, 31, 0x2B75CCu);
    ctx->pc = 0x2B75C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75CCu; }
    }
    if (ctx->pc != 0x2B75CCu) { return; }
    ctx->pc = 0x2B75CCu;
label_2b75cc:
    // 0x2b75cc: 0x8ec320ac
    ctx->pc = 0x2b75ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 8364)));
label_2b75d0:
    // 0x2b75d0: 0x8c620048
    ctx->pc = 0x2b75d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b75d4:
    // 0x2b75d4: 0x34420001
    ctx->pc = 0x2b75d4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b75d8:
    // 0x2b75d8: 0xac620048
    ctx->pc = 0x2b75d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b75dc:
    // 0x2b75dc: 0x24020020
    ctx->pc = 0x2b75dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b75e0:
    // 0x2b75e0: 0x1000002b
label_2b75e4:
    if (ctx->pc == 0x2B75E4u) {
        ctx->pc = 0x2B75E4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B75E8u;
        goto label_2b75e8;
    }
    ctx->pc = 0x2B75E0u;
    {
        const bool branch_taken_0x2b75e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B75E4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b75e0) {
            ctx->pc = 0x2B7690u;
            goto label_2b7690;
        }
    }
    ctx->pc = 0x2B75E8u;
label_2b75e8:
    // 0x2b75e8: 0x8ec220ac
    ctx->pc = 0x2b75e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8364)));
label_2b75ec:
    // 0x2b75ec: 0x8c42002c
    ctx->pc = 0x2b75ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b75f0:
    // 0x2b75f0: 0x10400004
label_2b75f4:
    if (ctx->pc == 0x2B75F4u) {
        ctx->pc = 0x2B75F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B75F8u;
        goto label_2b75f8;
    }
    ctx->pc = 0x2B75F0u;
    {
        const bool branch_taken_0x2b75f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B75F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b75f0) {
            ctx->pc = 0x2B7604u;
            goto label_2b7604;
        }
    }
    ctx->pc = 0x2B75F8u;
label_2b75f8:
    // 0x2b75f8: 0x220282d
    ctx->pc = 0x2b75f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b75fc:
    // 0x2b75fc: 0xc0adcce
label_2b7600:
    if (ctx->pc == 0x2B7600u) {
        ctx->pc = 0x2B7600u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7604u;
        goto label_2b7604;
    }
    ctx->pc = 0x2B75FCu;
    SET_GPR_U32(ctx, 31, 0x2B7604u);
    ctx->pc = 0x2B7600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7338u;
    {
        const uint32_t __entryPc = ctx->pc;
        debugExprFuncCall_0x2b7338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7604u; }
    }
    if (ctx->pc != 0x2B7604u) { return; }
    ctx->pc = 0x2B7604u;
label_2b7604:
    // 0x2b7604: 0xafb50280
    ctx->pc = 0x2b7604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 21));
label_2b7608:
    // 0x2b7608: 0xafb00284
    ctx->pc = 0x2b7608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 16));
label_2b760c:
    // 0x2b760c: 0xafb40288
    ctx->pc = 0x2b760cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 20));
label_2b7610:
    // 0x2b7610: 0xafb1028c
    ctx->pc = 0x2b7610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 17));
label_2b7614:
    // 0x2b7614: 0xafbd0290
    ctx->pc = 0x2b7614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 29));
label_2b7618:
    // 0x2b7618: 0x8e020008
    ctx->pc = 0x2b7618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b761c:
    // 0x2b761c: 0x40f809
label_2b7620:
    if (ctx->pc == 0x2B7620u) {
        ctx->pc = 0x2B7620u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2B7624u;
        goto label_2b7624;
    }
    ctx->pc = 0x2B761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B7624u);
        ctx->pc = 0x2B7620u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7498u: goto label_2b7498;
            case 0x2B749Cu: goto label_2b749c;
            case 0x2B74A0u: goto label_2b74a0;
            case 0x2B74A4u: goto label_2b74a4;
            case 0x2B74A8u: goto label_2b74a8;
            case 0x2B74ACu: goto label_2b74ac;
            case 0x2B74B0u: goto label_2b74b0;
            case 0x2B74B4u: goto label_2b74b4;
            case 0x2B74B8u: goto label_2b74b8;
            case 0x2B74BCu: goto label_2b74bc;
            case 0x2B74C0u: goto label_2b74c0;
            case 0x2B74C4u: goto label_2b74c4;
            case 0x2B74C8u: goto label_2b74c8;
            case 0x2B74CCu: goto label_2b74cc;
            case 0x2B74D0u: goto label_2b74d0;
            case 0x2B74D4u: goto label_2b74d4;
            case 0x2B74D8u: goto label_2b74d8;
            case 0x2B74DCu: goto label_2b74dc;
            case 0x2B74E0u: goto label_2b74e0;
            case 0x2B74E4u: goto label_2b74e4;
            case 0x2B74E8u: goto label_2b74e8;
            case 0x2B74ECu: goto label_2b74ec;
            case 0x2B74F0u: goto label_2b74f0;
            case 0x2B74F4u: goto label_2b74f4;
            case 0x2B74F8u: goto label_2b74f8;
            case 0x2B74FCu: goto label_2b74fc;
            case 0x2B7500u: goto label_2b7500;
            case 0x2B7504u: goto label_2b7504;
            case 0x2B7508u: goto label_2b7508;
            case 0x2B750Cu: goto label_2b750c;
            case 0x2B7510u: goto label_2b7510;
            case 0x2B7514u: goto label_2b7514;
            case 0x2B7518u: goto label_2b7518;
            case 0x2B751Cu: goto label_2b751c;
            case 0x2B7520u: goto label_2b7520;
            case 0x2B7524u: goto label_2b7524;
            case 0x2B7528u: goto label_2b7528;
            case 0x2B752Cu: goto label_2b752c;
            case 0x2B7530u: goto label_2b7530;
            case 0x2B7534u: goto label_2b7534;
            case 0x2B7538u: goto label_2b7538;
            case 0x2B753Cu: goto label_2b753c;
            case 0x2B7540u: goto label_2b7540;
            case 0x2B7544u: goto label_2b7544;
            case 0x2B7548u: goto label_2b7548;
            case 0x2B754Cu: goto label_2b754c;
            case 0x2B7550u: goto label_2b7550;
            case 0x2B7554u: goto label_2b7554;
            case 0x2B7558u: goto label_2b7558;
            case 0x2B755Cu: goto label_2b755c;
            case 0x2B7560u: goto label_2b7560;
            case 0x2B7564u: goto label_2b7564;
            case 0x2B7568u: goto label_2b7568;
            case 0x2B756Cu: goto label_2b756c;
            case 0x2B7570u: goto label_2b7570;
            case 0x2B7574u: goto label_2b7574;
            case 0x2B7578u: goto label_2b7578;
            case 0x2B757Cu: goto label_2b757c;
            case 0x2B7580u: goto label_2b7580;
            case 0x2B7584u: goto label_2b7584;
            case 0x2B7588u: goto label_2b7588;
            case 0x2B758Cu: goto label_2b758c;
            case 0x2B7590u: goto label_2b7590;
            case 0x2B7594u: goto label_2b7594;
            case 0x2B7598u: goto label_2b7598;
            case 0x2B759Cu: goto label_2b759c;
            case 0x2B75A0u: goto label_2b75a0;
            case 0x2B75A4u: goto label_2b75a4;
            case 0x2B75A8u: goto label_2b75a8;
            case 0x2B75ACu: goto label_2b75ac;
            case 0x2B75B0u: goto label_2b75b0;
            case 0x2B75B4u: goto label_2b75b4;
            case 0x2B75B8u: goto label_2b75b8;
            case 0x2B75BCu: goto label_2b75bc;
            case 0x2B75C0u: goto label_2b75c0;
            case 0x2B75C4u: goto label_2b75c4;
            case 0x2B75C8u: goto label_2b75c8;
            case 0x2B75CCu: goto label_2b75cc;
            case 0x2B75D0u: goto label_2b75d0;
            case 0x2B75D4u: goto label_2b75d4;
            case 0x2B75D8u: goto label_2b75d8;
            case 0x2B75DCu: goto label_2b75dc;
            case 0x2B75E0u: goto label_2b75e0;
            case 0x2B75E4u: goto label_2b75e4;
            case 0x2B75E8u: goto label_2b75e8;
            case 0x2B75ECu: goto label_2b75ec;
            case 0x2B75F0u: goto label_2b75f0;
            case 0x2B75F4u: goto label_2b75f4;
            case 0x2B75F8u: goto label_2b75f8;
            case 0x2B75FCu: goto label_2b75fc;
            case 0x2B7600u: goto label_2b7600;
            case 0x2B7604u: goto label_2b7604;
            case 0x2B7608u: goto label_2b7608;
            case 0x2B760Cu: goto label_2b760c;
            case 0x2B7610u: goto label_2b7610;
            case 0x2B7614u: goto label_2b7614;
            case 0x2B7618u: goto label_2b7618;
            case 0x2B761Cu: goto label_2b761c;
            case 0x2B7620u: goto label_2b7620;
            case 0x2B7624u: goto label_2b7624;
            case 0x2B7628u: goto label_2b7628;
            case 0x2B762Cu: goto label_2b762c;
            case 0x2B7630u: goto label_2b7630;
            case 0x2B7634u: goto label_2b7634;
            case 0x2B7638u: goto label_2b7638;
            case 0x2B763Cu: goto label_2b763c;
            case 0x2B7640u: goto label_2b7640;
            case 0x2B7644u: goto label_2b7644;
            case 0x2B7648u: goto label_2b7648;
            case 0x2B764Cu: goto label_2b764c;
            case 0x2B7650u: goto label_2b7650;
            case 0x2B7654u: goto label_2b7654;
            case 0x2B7658u: goto label_2b7658;
            case 0x2B765Cu: goto label_2b765c;
            case 0x2B7660u: goto label_2b7660;
            case 0x2B7664u: goto label_2b7664;
            case 0x2B7668u: goto label_2b7668;
            case 0x2B766Cu: goto label_2b766c;
            case 0x2B7670u: goto label_2b7670;
            case 0x2B7674u: goto label_2b7674;
            case 0x2B7678u: goto label_2b7678;
            case 0x2B767Cu: goto label_2b767c;
            case 0x2B7680u: goto label_2b7680;
            case 0x2B7684u: goto label_2b7684;
            case 0x2B7688u: goto label_2b7688;
            case 0x2B768Cu: goto label_2b768c;
            case 0x2B7690u: goto label_2b7690;
            case 0x2B7694u: goto label_2b7694;
            case 0x2B7698u: goto label_2b7698;
            case 0x2B769Cu: goto label_2b769c;
            case 0x2B76A0u: goto label_2b76a0;
            case 0x2B76A4u: goto label_2b76a4;
            case 0x2B76A8u: goto label_2b76a8;
            case 0x2B76ACu: goto label_2b76ac;
            case 0x2B76B0u: goto label_2b76b0;
            case 0x2B76B4u: goto label_2b76b4;
            case 0x2B76B8u: goto label_2b76b8;
            case 0x2B76BCu: goto label_2b76bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7624u; }
            if (ctx->pc != 0x2B7624u) { return; }
        }
    }
    ctx->pc = 0x2B7624u;
label_2b7624:
    // 0x2b7624: 0x1000001b
label_2b7628:
    if (ctx->pc == 0x2B7628u) {
        ctx->pc = 0x2B7628u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 816)));
        ctx->pc = 0x2B762Cu;
        goto label_2b762c;
    }
    ctx->pc = 0x2B7624u;
    {
        const bool branch_taken_0x2b7624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7628u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 816)));
        if (branch_taken_0x2b7624) {
            ctx->pc = 0x2B7694u;
            goto label_2b7694;
        }
    }
    ctx->pc = 0x2B762Cu;
label_2b762c:
    // 0x2b762c: 0x8e020000
    ctx->pc = 0x2b762cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b7630:
    // 0x2b7630: 0x5440ffc7
label_2b7634:
    if (ctx->pc == 0x2B7634u) {
        ctx->pc = 0x2B7634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7638u;
        goto label_2b7638;
    }
    ctx->pc = 0x2B7630u;
    {
        const bool branch_taken_0x2b7630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b7630) {
            ctx->pc = 0x2B7634u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2B7550u;
            goto label_2b7550;
        }
    }
    ctx->pc = 0x2B7638u;
label_2b7638:
    // 0x2b7638: 0x24020020
    ctx->pc = 0x2b7638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b763c:
    // 0x2b763c: 0xaea20000
    ctx->pc = 0x2b763cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2b7640:
    // 0x2b7640: 0x3c04003b
    ctx->pc = 0x2b7640u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b7644:
    // 0x2b7644: 0x24844650
    ctx->pc = 0x2b7644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b7648:
    // 0x2b7648: 0x24050020
    ctx->pc = 0x2b7648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b764c:
    // 0x2b764c: 0x3c06003b
    ctx->pc = 0x2b764cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b7650:
    // 0x2b7650: 0x24c60d80
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b7654:
    // 0x2b7654: 0xc0ad0d6
label_2b7658:
    if (ctx->pc == 0x2B7658u) {
        ctx->pc = 0x2B7658u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B765Cu;
        goto label_2b765c;
    }
    ctx->pc = 0x2B7654u;
    SET_GPR_U32(ctx, 31, 0x2B765Cu);
    ctx->pc = 0x2B7658u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B765Cu; }
    }
    if (ctx->pc != 0x2B765Cu) { return; }
    ctx->pc = 0x2B765Cu;
label_2b765c:
    // 0x2b765c: 0x3c04003b
    ctx->pc = 0x2b765cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b7660:
    // 0x2b7660: 0x24845150
    ctx->pc = 0x2b7660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20816));
label_2b7664:
    // 0x2b7664: 0x240282d
    ctx->pc = 0x2b7664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b7668:
    // 0x2b7668: 0xc0b4a34
label_2b766c:
    if (ctx->pc == 0x2B766Cu) {
        ctx->pc = 0x2B766Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B7670u;
        goto label_2b7670;
    }
    ctx->pc = 0x2B7668u;
    SET_GPR_U32(ctx, 31, 0x2B7670u);
    ctx->pc = 0x2B766Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7670u; }
    }
    if (ctx->pc != 0x2B7670u) { return; }
    ctx->pc = 0x2B7670u;
label_2b7670:
    // 0x2b7670: 0x3c04003b
    ctx->pc = 0x2b7670u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b7674:
    // 0x2b7674: 0xc0b4a34
label_2b7678:
    if (ctx->pc == 0x2B7678u) {
        ctx->pc = 0x2B7678u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B767Cu;
        goto label_2b767c;
    }
    ctx->pc = 0x2B7674u;
    SET_GPR_U32(ctx, 31, 0x2B767Cu);
    ctx->pc = 0x2B7678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B767Cu; }
    }
    if (ctx->pc != 0x2B767Cu) { return; }
    ctx->pc = 0x2B767Cu;
label_2b767c:
    // 0x2b767c: 0x3c020037
    ctx->pc = 0x2b767cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b7680:
    // 0x2b7680: 0x8c4320ac
    ctx->pc = 0x2b7680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b7684:
    // 0x2b7684: 0x8c620048
    ctx->pc = 0x2b7684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b7688:
    // 0x2b7688: 0x34420001
    ctx->pc = 0x2b7688u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b768c:
    // 0x2b768c: 0xac620048
    ctx->pc = 0x2b768cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b7690:
    // 0x2b7690: 0xdfbf0330
    ctx->pc = 0x2b7690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 816)));
label_2b7694:
    // 0x2b7694: 0xdfbe0320
    ctx->pc = 0x2b7694u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_2b7698:
    // 0x2b7698: 0xdfb70310
    ctx->pc = 0x2b7698u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_2b769c:
    // 0x2b769c: 0xdfb60300
    ctx->pc = 0x2b769cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_2b76a0:
    // 0x2b76a0: 0xdfb502f0
    ctx->pc = 0x2b76a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_2b76a4:
    // 0x2b76a4: 0xdfb402e0
    ctx->pc = 0x2b76a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 736)));
label_2b76a8:
    // 0x2b76a8: 0xdfb302d0
    ctx->pc = 0x2b76a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_2b76ac:
    // 0x2b76ac: 0xdfb202c0
    ctx->pc = 0x2b76acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_2b76b0:
    // 0x2b76b0: 0xdfb102b0
    ctx->pc = 0x2b76b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_2b76b4:
    // 0x2b76b4: 0xdfb002a0
    ctx->pc = 0x2b76b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_2b76b8:
    // 0x2b76b8: 0x3e00008
label_2b76bc:
    if (ctx->pc == 0x2B76BCu) {
        ctx->pc = 0x2B76BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x2B76C0u;
        goto label_fallthrough_0x2b76b8;
    }
    ctx->pc = 0x2B76B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B76BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7498u: goto label_2b7498;
            case 0x2B749Cu: goto label_2b749c;
            case 0x2B74A0u: goto label_2b74a0;
            case 0x2B74A4u: goto label_2b74a4;
            case 0x2B74A8u: goto label_2b74a8;
            case 0x2B74ACu: goto label_2b74ac;
            case 0x2B74B0u: goto label_2b74b0;
            case 0x2B74B4u: goto label_2b74b4;
            case 0x2B74B8u: goto label_2b74b8;
            case 0x2B74BCu: goto label_2b74bc;
            case 0x2B74C0u: goto label_2b74c0;
            case 0x2B74C4u: goto label_2b74c4;
            case 0x2B74C8u: goto label_2b74c8;
            case 0x2B74CCu: goto label_2b74cc;
            case 0x2B74D0u: goto label_2b74d0;
            case 0x2B74D4u: goto label_2b74d4;
            case 0x2B74D8u: goto label_2b74d8;
            case 0x2B74DCu: goto label_2b74dc;
            case 0x2B74E0u: goto label_2b74e0;
            case 0x2B74E4u: goto label_2b74e4;
            case 0x2B74E8u: goto label_2b74e8;
            case 0x2B74ECu: goto label_2b74ec;
            case 0x2B74F0u: goto label_2b74f0;
            case 0x2B74F4u: goto label_2b74f4;
            case 0x2B74F8u: goto label_2b74f8;
            case 0x2B74FCu: goto label_2b74fc;
            case 0x2B7500u: goto label_2b7500;
            case 0x2B7504u: goto label_2b7504;
            case 0x2B7508u: goto label_2b7508;
            case 0x2B750Cu: goto label_2b750c;
            case 0x2B7510u: goto label_2b7510;
            case 0x2B7514u: goto label_2b7514;
            case 0x2B7518u: goto label_2b7518;
            case 0x2B751Cu: goto label_2b751c;
            case 0x2B7520u: goto label_2b7520;
            case 0x2B7524u: goto label_2b7524;
            case 0x2B7528u: goto label_2b7528;
            case 0x2B752Cu: goto label_2b752c;
            case 0x2B7530u: goto label_2b7530;
            case 0x2B7534u: goto label_2b7534;
            case 0x2B7538u: goto label_2b7538;
            case 0x2B753Cu: goto label_2b753c;
            case 0x2B7540u: goto label_2b7540;
            case 0x2B7544u: goto label_2b7544;
            case 0x2B7548u: goto label_2b7548;
            case 0x2B754Cu: goto label_2b754c;
            case 0x2B7550u: goto label_2b7550;
            case 0x2B7554u: goto label_2b7554;
            case 0x2B7558u: goto label_2b7558;
            case 0x2B755Cu: goto label_2b755c;
            case 0x2B7560u: goto label_2b7560;
            case 0x2B7564u: goto label_2b7564;
            case 0x2B7568u: goto label_2b7568;
            case 0x2B756Cu: goto label_2b756c;
            case 0x2B7570u: goto label_2b7570;
            case 0x2B7574u: goto label_2b7574;
            case 0x2B7578u: goto label_2b7578;
            case 0x2B757Cu: goto label_2b757c;
            case 0x2B7580u: goto label_2b7580;
            case 0x2B7584u: goto label_2b7584;
            case 0x2B7588u: goto label_2b7588;
            case 0x2B758Cu: goto label_2b758c;
            case 0x2B7590u: goto label_2b7590;
            case 0x2B7594u: goto label_2b7594;
            case 0x2B7598u: goto label_2b7598;
            case 0x2B759Cu: goto label_2b759c;
            case 0x2B75A0u: goto label_2b75a0;
            case 0x2B75A4u: goto label_2b75a4;
            case 0x2B75A8u: goto label_2b75a8;
            case 0x2B75ACu: goto label_2b75ac;
            case 0x2B75B0u: goto label_2b75b0;
            case 0x2B75B4u: goto label_2b75b4;
            case 0x2B75B8u: goto label_2b75b8;
            case 0x2B75BCu: goto label_2b75bc;
            case 0x2B75C0u: goto label_2b75c0;
            case 0x2B75C4u: goto label_2b75c4;
            case 0x2B75C8u: goto label_2b75c8;
            case 0x2B75CCu: goto label_2b75cc;
            case 0x2B75D0u: goto label_2b75d0;
            case 0x2B75D4u: goto label_2b75d4;
            case 0x2B75D8u: goto label_2b75d8;
            case 0x2B75DCu: goto label_2b75dc;
            case 0x2B75E0u: goto label_2b75e0;
            case 0x2B75E4u: goto label_2b75e4;
            case 0x2B75E8u: goto label_2b75e8;
            case 0x2B75ECu: goto label_2b75ec;
            case 0x2B75F0u: goto label_2b75f0;
            case 0x2B75F4u: goto label_2b75f4;
            case 0x2B75F8u: goto label_2b75f8;
            case 0x2B75FCu: goto label_2b75fc;
            case 0x2B7600u: goto label_2b7600;
            case 0x2B7604u: goto label_2b7604;
            case 0x2B7608u: goto label_2b7608;
            case 0x2B760Cu: goto label_2b760c;
            case 0x2B7610u: goto label_2b7610;
            case 0x2B7614u: goto label_2b7614;
            case 0x2B7618u: goto label_2b7618;
            case 0x2B761Cu: goto label_2b761c;
            case 0x2B7620u: goto label_2b7620;
            case 0x2B7624u: goto label_2b7624;
            case 0x2B7628u: goto label_2b7628;
            case 0x2B762Cu: goto label_2b762c;
            case 0x2B7630u: goto label_2b7630;
            case 0x2B7634u: goto label_2b7634;
            case 0x2B7638u: goto label_2b7638;
            case 0x2B763Cu: goto label_2b763c;
            case 0x2B7640u: goto label_2b7640;
            case 0x2B7644u: goto label_2b7644;
            case 0x2B7648u: goto label_2b7648;
            case 0x2B764Cu: goto label_2b764c;
            case 0x2B7650u: goto label_2b7650;
            case 0x2B7654u: goto label_2b7654;
            case 0x2B7658u: goto label_2b7658;
            case 0x2B765Cu: goto label_2b765c;
            case 0x2B7660u: goto label_2b7660;
            case 0x2B7664u: goto label_2b7664;
            case 0x2B7668u: goto label_2b7668;
            case 0x2B766Cu: goto label_2b766c;
            case 0x2B7670u: goto label_2b7670;
            case 0x2B7674u: goto label_2b7674;
            case 0x2B7678u: goto label_2b7678;
            case 0x2B767Cu: goto label_2b767c;
            case 0x2B7680u: goto label_2b7680;
            case 0x2B7684u: goto label_2b7684;
            case 0x2B7688u: goto label_2b7688;
            case 0x2B768Cu: goto label_2b768c;
            case 0x2B7690u: goto label_2b7690;
            case 0x2B7694u: goto label_2b7694;
            case 0x2B7698u: goto label_2b7698;
            case 0x2B769Cu: goto label_2b769c;
            case 0x2B76A0u: goto label_2b76a0;
            case 0x2B76A4u: goto label_2b76a4;
            case 0x2B76A8u: goto label_2b76a8;
            case 0x2B76ACu: goto label_2b76ac;
            case 0x2B76B0u: goto label_2b76b0;
            case 0x2B76B4u: goto label_2b76b4;
            case 0x2B76B8u: goto label_2b76b8;
            case 0x2B76BCu: goto label_2b76bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b76b8:
    ctx->pc = 0x2B76C0u;
}
