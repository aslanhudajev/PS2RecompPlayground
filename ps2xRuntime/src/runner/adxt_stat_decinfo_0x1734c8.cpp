#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_stat_decinfo
// Address: 0x1734c8 - 0x1737e4
void adxt_stat_decinfo_0x1734c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_stat_decinfo");


    ctx->pc = 0x1734c8u;

    // 0x1734c8: 0x27bdff80
    ctx->pc = 0x1734c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1734cc: 0xffb10030
    ctx->pc = 0x1734ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1734d0: 0xffb00020
    ctx->pc = 0x1734d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1734d4: 0x80882d
    ctx->pc = 0x1734d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1734d8: 0xffbf0070
    ctx->pc = 0x1734d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1734dc: 0x24100800
    ctx->pc = 0x1734dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1734e0: 0xffb40060
    ctx->pc = 0x1734e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1734e4: 0xffb30050
    ctx->pc = 0x1734e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1734e8: 0xffb20040
    ctx->pc = 0x1734e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1734ec: 0x8e320004
    ctx->pc = 0x1734ecu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1734f0: 0xc05b796
    ctx->pc = 0x1734F0u;
    SET_GPR_U32(ctx, 31, 0x1734F8u);
    ctx->pc = 0x1734F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetStat_0x16de58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1734F8u; }
        else if (ctx->pc != 0x1734F8u) { ctx->pc = 0x1734F8u; }
    }
    if (ctx->pc != 0x1734F8u) { return; }
    ctx->pc = 0x1734F8u;
    // 0x1734f8: 0x24030002
    ctx->pc = 0x1734f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1734fc: 0x144300b2
    ctx->pc = 0x1734FCu;
    {
        const bool branch_taken_0x1734fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x173500u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x1734fc) {
            ctx->pc = 0x1737C8u;
            goto label_1737c8;
        }
    }
    ctx->pc = 0x173504u;
    // 0x173504: 0xc05b9e4
    ctx->pc = 0x173504u;
    SET_GPR_U32(ctx, 31, 0x17350Cu);
    ctx->pc = 0x173508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E790u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetNumChan_0x16e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17350Cu; }
        else if (ctx->pc != 0x17350Cu) { ctx->pc = 0x17350Cu; }
    }
    if (ctx->pc != 0x17350Cu) { return; }
    ctx->pc = 0x17350Cu;
    // 0x17350c: 0x82250003
    ctx->pc = 0x17350cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x173510: 0x40a02d
    ctx->pc = 0x173510u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173514: 0xb4102a
    ctx->pc = 0x173514u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 20)));
    // 0x173518: 0x1040000c
    ctx->pc = 0x173518u;
    {
        const bool branch_taken_0x173518 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17351Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173518) {
            ctx->pc = 0x17354Cu;
            goto label_17354c;
        }
    }
    ctx->pc = 0x173520u;
    // 0x173520: 0x3a0302d
    ctx->pc = 0x173520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173524: 0xc05a8c0
    ctx->pc = 0x173524u;
    SET_GPR_U32(ctx, 31, 0x17352Cu);
    ctx->pc = 0x173528u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x16A300u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_ItoA2_0x16a300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17352Cu; }
        else if (ctx->pc != 0x17352Cu) { ctx->pc = 0x17352Cu; }
    }
    if (ctx->pc != 0x17352Cu) { return; }
    ctx->pc = 0x17352Cu;
    // 0x17352c: 0x3c04002c
    ctx->pc = 0x17352cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x173530: 0x3a0282d
    ctx->pc = 0x173530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173534: 0xc05a868
    ctx->pc = 0x173534u;
    SET_GPR_U32(ctx, 31, 0x17353Cu);
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943648));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17353Cu; }
        else if (ctx->pc != 0x17353Cu) { ctx->pc = 0x17353Cu; }
    }
    if (ctx->pc != 0x17353Cu) { return; }
    ctx->pc = 0x17353Cu;
    // 0x17353c: 0xc05c73a
    ctx->pc = 0x17353Cu;
    SET_GPR_U32(ctx, 31, 0x173544u);
    ctx->pc = 0x173540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173544u; }
        else if (ctx->pc != 0x173544u) { ctx->pc = 0x173544u; }
    }
    if (ctx->pc != 0x173544u) { return; }
    ctx->pc = 0x173544u;
    // 0x173544: 0x100000a0
    ctx->pc = 0x173544u;
    {
        const bool branch_taken_0x173544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173548u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x173544) {
            ctx->pc = 0x1737C8u;
            goto label_1737c8;
        }
    }
    ctx->pc = 0x17354Cu;
label_17354c:
    // 0x17354c: 0xc05b9dc
    ctx->pc = 0x17354Cu;
    SET_GPR_U32(ctx, 31, 0x173554u);
    ctx->pc = 0x173550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSfreq_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173554u; }
        else if (ctx->pc != 0x173554u) { ctx->pc = 0x173554u; }
    }
    if (ctx->pc != 0x173554u) { return; }
    ctx->pc = 0x173554u;
    // 0x173554: 0x40982d
    ctx->pc = 0x173554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173558: 0xc05ba14
    ctx->pc = 0x173558u;
    SET_GPR_U32(ctx, 31, 0x173560u);
    ctx->pc = 0x17355Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E850u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetNumLoop_0x16e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173560u; }
        else if (ctx->pc != 0x173560u) { ctx->pc = 0x173560u; }
    }
    if (ctx->pc != 0x173560u) { return; }
    ctx->pc = 0x173560u;
    // 0x173560: 0x40a02d
    ctx->pc = 0x173560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173564: 0x5a80000a
    ctx->pc = 0x173564u;
    {
        const bool branch_taken_0x173564 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x173564) {
            ctx->pc = 0x173568u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->pc = 0x173590u;
            goto label_173590;
        }
    }
    ctx->pc = 0x17356Cu;
    // 0x17356c: 0x8e220038
    ctx->pc = 0x17356cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x173570: 0x262001a
    ctx->pc = 0x173570u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x173574: 0x50400001
    ctx->pc = 0x173574u;
    {
        const bool branch_taken_0x173574 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x173574) {
            ctx->pc = 0x173578u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17357Cu;
            goto label_17357c;
        }
    }
    ctx->pc = 0x17357Cu;
label_17357c:
    // 0x17357c: 0x2012
    ctx->pc = 0x17357cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x173580: 0x41840
    ctx->pc = 0x173580u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x173584: 0x641821
    ctx->pc = 0x173584u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173588: 0x1000000b
    ctx->pc = 0x173588u;
    {
        const bool branch_taken_0x173588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17358Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        if (branch_taken_0x173588) {
            ctx->pc = 0x1735B8u;
            goto label_1735b8;
        }
    }
    ctx->pc = 0x173590u;
label_173590:
    // 0x173590: 0x263001a
    ctx->pc = 0x173590u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x173594: 0x50600001
    ctx->pc = 0x173594u;
    {
        const bool branch_taken_0x173594 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x173594) {
            ctx->pc = 0x173598u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17359Cu;
            goto label_17359c;
        }
    }
    ctx->pc = 0x17359Cu;
label_17359c:
    // 0x17359c: 0x2012
    ctx->pc = 0x17359cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x1735a0: 0x41040
    ctx->pc = 0x1735a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1735a4: 0x441021
    ctx->pc = 0x1735a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1735a8: 0x21fc2
    ctx->pc = 0x1735a8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x1735ac: 0x431021
    ctx->pc = 0x1735acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1735b0: 0x21043
    ctx->pc = 0x1735b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1735b4: 0xae220048
    ctx->pc = 0x1735b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_1735b8:
    // 0x1735b8: 0xc05b9f4
    ctx->pc = 0x1735B8u;
    SET_GPR_U32(ctx, 31, 0x1735C0u);
    ctx->pc = 0x1735BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetBlkSmpl_0x16e7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735C0u; }
        else if (ctx->pc != 0x1735C0u) { ctx->pc = 0x1735C0u; }
    }
    if (ctx->pc != 0x1735C0u) { return; }
    ctx->pc = 0x1735C0u;
    // 0x1735c0: 0x8e230048
    ctx->pc = 0x1735c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1735c4: 0x21040
    ctx->pc = 0x1735c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1735c8: 0x50400001
    ctx->pc = 0x1735C8u;
    {
        const bool branch_taken_0x1735c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1735c8) {
            ctx->pc = 0x1735CCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1735D0u;
            goto label_1735d0;
        }
    }
    ctx->pc = 0x1735D0u;
label_1735d0:
    // 0x1735d0: 0x240202d
    ctx->pc = 0x1735d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735d4: 0x621821
    ctx->pc = 0x1735d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1735d8: 0x62001a
    ctx->pc = 0x1735d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1735dc: 0x1812
    ctx->pc = 0x1735dcu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1735e0: 0x621818
    ctx->pc = 0x1735e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1735e4: 0x60282d
    ctx->pc = 0x1735e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735e8: 0xc05b7a2
    ctx->pc = 0x1735E8u;
    SET_GPR_U32(ctx, 31, 0x1735F0u);
    ctx->pc = 0x1735ECu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    ctx->pc = 0x16DE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetMaxDecSmpl_0x16de88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735F0u; }
        else if (ctx->pc != 0x1735F0u) { ctx->pc = 0x1735F0u; }
    }
    if (ctx->pc != 0x1735F0u) { return; }
    ctx->pc = 0x1735F0u;
    // 0x1735f0: 0x1a80002f
    ctx->pc = 0x1735F0u;
    {
        const bool branch_taken_0x1735f0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1735F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1735f0) {
            ctx->pc = 0x1736B0u;
            goto label_1736b0;
        }
    }
    ctx->pc = 0x1735F8u;
    // 0x1735f8: 0x82230002
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1735fc: 0x14620003
    ctx->pc = 0x1735FCu;
    {
        const bool branch_taken_0x1735fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1735fc) {
            ctx->pc = 0x17360Cu;
            goto label_17360c;
        }
    }
    ctx->pc = 0x173604u;
    // 0x173604: 0x10000017
    ctx->pc = 0x173604u;
    {
        const bool branch_taken_0x173604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173608u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        if (branch_taken_0x173604) {
            ctx->pc = 0x173664u;
            goto label_173664;
        }
    }
    ctx->pc = 0x17360Cu;
label_17360c:
    // 0x17360c: 0xc05ba3c
    ctx->pc = 0x17360Cu;
    SET_GPR_U32(ctx, 31, 0x173614u);
    ctx->pc = 0x173610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetLpEndOfst_0x16e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173614u; }
        else if (ctx->pc != 0x173614u) { ctx->pc = 0x173614u; }
    }
    if (ctx->pc != 0x173614u) { return; }
    ctx->pc = 0x173614u;
    // 0x173614: 0x50001a
    ctx->pc = 0x173614u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x173618: 0x52000001
    ctx->pc = 0x173618u;
    {
        const bool branch_taken_0x173618 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x173618) {
            ctx->pc = 0x17361Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x173620u;
            goto label_173620;
        }
    }
    ctx->pc = 0x173620u;
label_173620:
    // 0x173620: 0x244207ff
    ctx->pc = 0x173620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x173624: 0x1810
    ctx->pc = 0x173624u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x173628: 0x50001a
    ctx->pc = 0x173628u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x17362c: 0x2031823
    ctx->pc = 0x17362cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x173630: 0x1012
    ctx->pc = 0x173630u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x173634: 0x70001a
    ctx->pc = 0x173634u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x173638: 0x40282d
    ctx->pc = 0x173638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17363c: 0x2010
    ctx->pc = 0x17363cu;
    SET_GPR_U32(ctx, 4, ctx->hi);
    // 0x173640: 0xae240050
    ctx->pc = 0x173640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
    // 0x173644: 0x8e240008
    ctx->pc = 0x173644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x173648: 0xc05c338
    ctx->pc = 0x173648u;
    SET_GPR_U32(ctx, 31, 0x173650u);
    ctx->pc = 0x17364Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    ctx->pc = 0x170CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetEos_0x170ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173650u; }
        else if (ctx->pc != 0x173650u) { ctx->pc = 0x173650u; }
    }
    if (ctx->pc != 0x173650u) { return; }
    ctx->pc = 0x173650u;
    // 0x173650: 0x3c050017
    ctx->pc = 0x173650u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x173654: 0x8e240008
    ctx->pc = 0x173654u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x173658: 0x24a530c0
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12480));
    // 0x17365c: 0xc05c334
    ctx->pc = 0x17365Cu;
    SET_GPR_U32(ctx, 31, 0x173664u);
    ctx->pc = 0x173660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_EntryEosFunc_0x170cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173664u; }
        else if (ctx->pc != 0x173664u) { ctx->pc = 0x173664u; }
    }
    if (ctx->pc != 0x173664u) { return; }
    ctx->pc = 0x173664u;
label_173664:
    // 0x173664: 0xc05ba34
    ctx->pc = 0x173664u;
    SET_GPR_U32(ctx, 31, 0x17366Cu);
    ctx->pc = 0x173668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E8D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetLpEndPos_0x16e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17366Cu; }
        else if (ctx->pc != 0x17366Cu) { ctx->pc = 0x17366Cu; }
    }
    if (ctx->pc != 0x17366Cu) { return; }
    ctx->pc = 0x17366Cu;
    // 0x17366c: 0x240202d
    ctx->pc = 0x17366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173670: 0x40282d
    ctx->pc = 0x173670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173674: 0xc05b9c8
    ctx->pc = 0x173674u;
    SET_GPR_U32(ctx, 31, 0x17367Cu);
    ctx->pc = 0x173678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    ctx->pc = 0x16E720u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapNumSmpl_0x16e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17367Cu; }
        else if (ctx->pc != 0x17367Cu) { ctx->pc = 0x17367Cu; }
    }
    if (ctx->pc != 0x17367Cu) { return; }
    ctx->pc = 0x17367Cu;
    // 0x17367c: 0x240202d
    ctx->pc = 0x17367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173680: 0xc05b9d0
    ctx->pc = 0x173680u;
    SET_GPR_U32(ctx, 31, 0x173688u);
    ctx->pc = 0x173684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E740u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapDtLen_0x16e740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173688u; }
        else if (ctx->pc != 0x173688u) { ctx->pc = 0x173688u; }
    }
    if (ctx->pc != 0x173688u) { return; }
    ctx->pc = 0x173688u;
    // 0x173688: 0x240202d
    ctx->pc = 0x173688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17368c: 0xc05b9cc
    ctx->pc = 0x17368Cu;
    SET_GPR_U32(ctx, 31, 0x173694u);
    ctx->pc = 0x173690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E730u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapCnt_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173694u; }
        else if (ctx->pc != 0x173694u) { ctx->pc = 0x173694u; }
    }
    if (ctx->pc != 0x173694u) { return; }
    ctx->pc = 0x173694u;
    // 0x173694: 0x3c050017
    ctx->pc = 0x173694u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x173698: 0x240202d
    ctx->pc = 0x173698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17369c: 0x24a52f38
    ctx->pc = 0x17369cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12088));
    // 0x1736a0: 0xc05b9c4
    ctx->pc = 0x1736A0u;
    SET_GPR_U32(ctx, 31, 0x1736A8u);
    ctx->pc = 0x1736A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_EntryTrapFunc_0x16e710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736A8u; }
        else if (ctx->pc != 0x1736A8u) { ctx->pc = 0x1736A8u; }
    }
    if (ctx->pc != 0x1736A8u) { return; }
    ctx->pc = 0x1736A8u;
    // 0x1736a8: 0x10000017
    ctx->pc = 0x1736A8u;
    {
        const bool branch_taken_0x1736a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1736a8) {
            ctx->pc = 0x173708u;
            goto label_173708;
        }
    }
    ctx->pc = 0x1736B0u;
label_1736b0:
    // 0x1736b0: 0x8e240008
    ctx->pc = 0x1736b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1736b4: 0x10800004
    ctx->pc = 0x1736B4u;
    {
        const bool branch_taken_0x1736b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1736b4) {
            ctx->pc = 0x1736C8u;
            goto label_1736c8;
        }
    }
    ctx->pc = 0x1736BCu;
    // 0x1736bc: 0x3c057fff
    ctx->pc = 0x1736bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x1736c0: 0xc05c338
    ctx->pc = 0x1736C0u;
    SET_GPR_U32(ctx, 31, 0x1736C8u);
    ctx->pc = 0x1736C4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x170CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetEos_0x170ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736C8u; }
        else if (ctx->pc != 0x1736C8u) { ctx->pc = 0x1736C8u; }
    }
    if (ctx->pc != 0x1736C8u) { return; }
    ctx->pc = 0x1736C8u;
label_1736c8:
    // 0x1736c8: 0xc05ba04
    ctx->pc = 0x1736C8u;
    SET_GPR_U32(ctx, 31, 0x1736D0u);
    ctx->pc = 0x1736CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736D0u; }
        else if (ctx->pc != 0x1736D0u) { ctx->pc = 0x1736D0u; }
    }
    if (ctx->pc != 0x1736D0u) { return; }
    ctx->pc = 0x1736D0u;
    // 0x1736d0: 0x40282d
    ctx->pc = 0x1736d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736d4: 0xc05b9c8
    ctx->pc = 0x1736D4u;
    SET_GPR_U32(ctx, 31, 0x1736DCu);
    ctx->pc = 0x1736D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E720u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapNumSmpl_0x16e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736DCu; }
        else if (ctx->pc != 0x1736DCu) { ctx->pc = 0x1736DCu; }
    }
    if (ctx->pc != 0x1736DCu) { return; }
    ctx->pc = 0x1736DCu;
    // 0x1736dc: 0x240202d
    ctx->pc = 0x1736dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736e0: 0xc05b9d0
    ctx->pc = 0x1736E0u;
    SET_GPR_U32(ctx, 31, 0x1736E8u);
    ctx->pc = 0x1736E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E740u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapDtLen_0x16e740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736E8u; }
        else if (ctx->pc != 0x1736E8u) { ctx->pc = 0x1736E8u; }
    }
    if (ctx->pc != 0x1736E8u) { return; }
    ctx->pc = 0x1736E8u;
    // 0x1736e8: 0x240202d
    ctx->pc = 0x1736e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736ec: 0xc05b9cc
    ctx->pc = 0x1736ECu;
    SET_GPR_U32(ctx, 31, 0x1736F4u);
    ctx->pc = 0x1736F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E730u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapCnt_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1736F4u; }
        else if (ctx->pc != 0x1736F4u) { ctx->pc = 0x1736F4u; }
    }
    if (ctx->pc != 0x1736F4u) { return; }
    ctx->pc = 0x1736F4u;
    // 0x1736f4: 0x3c050017
    ctx->pc = 0x1736f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x1736f8: 0x240202d
    ctx->pc = 0x1736f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736fc: 0x24a53208
    ctx->pc = 0x1736fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12808));
    // 0x173700: 0xc05b9c4
    ctx->pc = 0x173700u;
    SET_GPR_U32(ctx, 31, 0x173708u);
    ctx->pc = 0x173704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_EntryTrapFunc_0x16e710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173708u; }
        else if (ctx->pc != 0x173708u) { ctx->pc = 0x173708u; }
    }
    if (ctx->pc != 0x173708u) { return; }
    ctx->pc = 0x173708u;
label_173708:
    // 0x173708: 0xc05b9dc
    ctx->pc = 0x173708u;
    SET_GPR_U32(ctx, 31, 0x173710u);
    ctx->pc = 0x17370Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSfreq_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173710u; }
        else if (ctx->pc != 0x173710u) { ctx->pc = 0x173710u; }
    }
    if (ctx->pc != 0x173710u) { return; }
    ctx->pc = 0x173710u;
    // 0x173710: 0x40982d
    ctx->pc = 0x173710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173714: 0xc05b9e4
    ctx->pc = 0x173714u;
    SET_GPR_U32(ctx, 31, 0x17371Cu);
    ctx->pc = 0x173718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E790u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetNumChan_0x16e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17371Cu; }
        else if (ctx->pc != 0x17371Cu) { ctx->pc = 0x17371Cu; }
    }
    if (ctx->pc != 0x17371Cu) { return; }
    ctx->pc = 0x17371Cu;
    // 0x17371c: 0x40a02d
    ctx->pc = 0x17371cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173720: 0xc05ba04
    ctx->pc = 0x173720u;
    SET_GPR_U32(ctx, 31, 0x173728u);
    ctx->pc = 0x173724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173728u; }
        else if (ctx->pc != 0x173728u) { ctx->pc = 0x173728u; }
    }
    if (ctx->pc != 0x173728u) { return; }
    ctx->pc = 0x173728u;
    // 0x173728: 0x40802d
    ctx->pc = 0x173728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17372c: 0xc05b9ec
    ctx->pc = 0x17372Cu;
    SET_GPR_U32(ctx, 31, 0x173734u);
    ctx->pc = 0x173730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetOutBps_0x16e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173734u; }
        else if (ctx->pc != 0x173734u) { ctx->pc = 0x173734u; }
    }
    if (ctx->pc != 0x173734u) { return; }
    ctx->pc = 0x173734u;
    // 0x173734: 0x8e24000c
    ctx->pc = 0x173734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x173738: 0xc05b6c0
    ctx->pc = 0x173738u;
    SET_GPR_U32(ctx, 31, 0x173740u);
    ctx->pc = 0x17373Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetBitPerSmpl_0x16db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173740u; }
        else if (ctx->pc != 0x173740u) { ctx->pc = 0x173740u; }
    }
    if (ctx->pc != 0x173740u) { return; }
    ctx->pc = 0x173740u;
    // 0x173740: 0x8e24000c
    ctx->pc = 0x173740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x173744: 0xc05b6ba
    ctx->pc = 0x173744u;
    SET_GPR_U32(ctx, 31, 0x17374Cu);
    ctx->pc = 0x173748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetSfreq_0x16dae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17374Cu; }
        else if (ctx->pc != 0x17374Cu) { ctx->pc = 0x17374Cu; }
    }
    if (ctx->pc != 0x17374Cu) { return; }
    ctx->pc = 0x17374Cu;
    // 0x17374c: 0x8e24000c
    ctx->pc = 0x17374cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x173750: 0xc05b6b8
    ctx->pc = 0x173750u;
    SET_GPR_U32(ctx, 31, 0x173758u);
    ctx->pc = 0x173754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetNumChan_0x16dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173758u; }
        else if (ctx->pc != 0x173758u) { ctx->pc = 0x173758u; }
    }
    if (ctx->pc != 0x173758u) { return; }
    ctx->pc = 0x173758u;
    // 0x173758: 0x8e24000c
    ctx->pc = 0x173758u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x17375c: 0xc05b6ee
    ctx->pc = 0x17375Cu;
    SET_GPR_U32(ctx, 31, 0x173764u);
    ctx->pc = 0x173760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetTotalNumSmpl_0x16dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173764u; }
        else if (ctx->pc != 0x173764u) { ctx->pc = 0x173764u; }
    }
    if (ctx->pc != 0x173764u) { return; }
    ctx->pc = 0x173764u;
    // 0x173764: 0x8e24000c
    ctx->pc = 0x173764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x173768: 0xc05b6bc
    ctx->pc = 0x173768u;
    SET_GPR_U32(ctx, 31, 0x173770u);
    ctx->pc = 0x17376Cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x16DAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetOutVol_0x16daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173770u; }
        else if (ctx->pc != 0x173770u) { ctx->pc = 0x173770u; }
    }
    if (ctx->pc != 0x173770u) { return; }
    ctx->pc = 0x173770u;
    // 0x173770: 0xc05cc52
    ctx->pc = 0x173770u;
    SET_GPR_U32(ctx, 31, 0x173778u);
    ctx->pc = 0x173774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173148u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_set_outpan_0x173148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173778u; }
        else if (ctx->pc != 0x173778u) { ctx->pc = 0x173778u; }
    }
    if (ctx->pc != 0x173778u) { return; }
    ctx->pc = 0x173778u;
    // 0x173778: 0x8e240074
    ctx->pc = 0x173778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x17377c: 0x50800004
    ctx->pc = 0x17377Cu;
    {
        const bool branch_taken_0x17377c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x17377c) {
            ctx->pc = 0x173780u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x173790u;
            goto label_173790;
        }
    }
    ctx->pc = 0x173784u;
    // 0x173784: 0xc0599d2
    ctx->pc = 0x173784u;
    SET_GPR_U32(ctx, 31, 0x17378Cu);
    ctx->pc = 0x173788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x166748u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXAMP_SetSfreq_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17378Cu; }
        else if (ctx->pc != 0x17378Cu) { ctx->pc = 0x17378Cu; }
    }
    if (ctx->pc != 0x17378Cu) { return; }
    ctx->pc = 0x17378Cu;
    // 0x17378c: 0x240202d
    ctx->pc = 0x17378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173790:
    // 0x173790: 0xc05b9d4
    ctx->pc = 0x173790u;
    SET_GPR_U32(ctx, 31, 0x173798u);
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x16E750u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetFormat_0x16e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173798u; }
        else if (ctx->pc != 0x173798u) { ctx->pc = 0x173798u; }
    }
    if (ctx->pc != 0x173798u) { return; }
    ctx->pc = 0x173798u;
    // 0x173798: 0x54500007
    ctx->pc = 0x173798u;
    {
        const bool branch_taken_0x173798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x173798) {
            ctx->pc = 0x17379Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x1737B8u;
            goto label_1737b8;
        }
    }
    ctx->pc = 0x1737A0u;
    // 0x1737a0: 0xc05ba4e
    ctx->pc = 0x1737A0u;
    SET_GPR_U32(ctx, 31, 0x1737A8u);
    ctx->pc = 0x1737A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E938u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSpsdInfo_0x16e938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737A8u; }
        else if (ctx->pc != 0x1737A8u) { ctx->pc = 0x1737A8u; }
    }
    if (ctx->pc != 0x1737A8u) { return; }
    ctx->pc = 0x1737A8u;
    // 0x1737a8: 0x8e24000c
    ctx->pc = 0x1737a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1737ac: 0xc05b6f2
    ctx->pc = 0x1737ACu;
    SET_GPR_U32(ctx, 31, 0x1737B4u);
    ctx->pc = 0x1737B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetStmHdInfo_0x16dbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737B4u; }
        else if (ctx->pc != 0x1737B4u) { ctx->pc = 0x1737B4u; }
    }
    if (ctx->pc != 0x1737B4u) { return; }
    ctx->pc = 0x1737B4u;
    // 0x1737b4: 0x8e24000c
    ctx->pc = 0x1737b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1737b8:
    // 0x1737b8: 0xc05b690
    ctx->pc = 0x1737B8u;
    SET_GPR_U32(ctx, 31, 0x1737C0u);
    ctx->pc = 0x1737BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetTransSw_0x16da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1737C0u; }
        else if (ctx->pc != 0x1737C0u) { ctx->pc = 0x1737C0u; }
    }
    if (ctx->pc != 0x1737C0u) { return; }
    ctx->pc = 0x1737C0u;
    // 0x1737c0: 0xa2300001
    ctx->pc = 0x1737c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1737c4: 0xdfbf0070
    ctx->pc = 0x1737c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1737c8:
    // 0x1737c8: 0xdfb40060
    ctx->pc = 0x1737c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1737cc: 0xdfb30050
    ctx->pc = 0x1737ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1737d0: 0xdfb20040
    ctx->pc = 0x1737d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1737d4: 0xdfb10030
    ctx->pc = 0x1737d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1737d8: 0xdfb00020
    ctx->pc = 0x1737d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1737dc: 0x3e00008
    ctx->pc = 0x1737DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17354Cu: goto label_17354c;
            case 0x17357Cu: goto label_17357c;
            case 0x173590u: goto label_173590;
            case 0x17359Cu: goto label_17359c;
            case 0x1735B8u: goto label_1735b8;
            case 0x1735D0u: goto label_1735d0;
            case 0x17360Cu: goto label_17360c;
            case 0x173620u: goto label_173620;
            case 0x173664u: goto label_173664;
            case 0x1736B0u: goto label_1736b0;
            case 0x1736C8u: goto label_1736c8;
            case 0x173708u: goto label_173708;
            case 0x173790u: goto label_173790;
            case 0x1737B8u: goto label_1737b8;
            case 0x1737C8u: goto label_1737c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1737E4u;
}
