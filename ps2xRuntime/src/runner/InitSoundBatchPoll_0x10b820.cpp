#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSoundBatchPoll
// Address: 0x10b820 - 0x10b9dc
void InitSoundBatchPoll_0x10b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b820u;

    // 0x10b820: 0x27bdffe0
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b824: 0x8f838390
    ctx->pc = 0x10b824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b828: 0xffbf0010
    ctx->pc = 0x10b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b82c: 0x1460001e
    ctx->pc = 0x10B82Cu;
    {
        const bool branch_taken_0x10b82c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B830u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x10b82c) {
            ctx->pc = 0x10B8A8u;
            goto label_10b8a8;
        }
    }
    ctx->pc = 0x10B834u;
    // 0x10b834: 0xc045044
    ctx->pc = 0x10B834u;
    SET_GPR_U32(ctx, 31, 0x10B83Cu);
    ctx->pc = 0x114110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x114110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B83Cu; }
    }
    if (ctx->pc != 0x10B83Cu) { return; }
    ctx->pc = 0x10B83Cu;
    // 0x10b83c: 0x4410003
    ctx->pc = 0x10B83Cu;
    {
        const bool branch_taken_0x10b83c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10B840u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x10b83c) {
            ctx->pc = 0x10B84Cu;
            goto label_10b84c;
        }
    }
    ctx->pc = 0x10B844u;
    // 0x10b844: 0xc04ace4
    ctx->pc = 0x10B844u;
    SET_GPR_U32(ctx, 31, 0x10B84Cu);
    ctx->pc = 0x10B848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14648));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B84Cu; }
    }
    if (ctx->pc != 0x10B84Cu) { return; }
    ctx->pc = 0x10B84Cu;
label_10b84c:
    // 0x10b84c: 0xc045c30
    ctx->pc = 0x10B84Cu;
    SET_GPR_U32(ctx, 31, 0x10B854u);
    ctx->pc = 0x10B850u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1170C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B854u; }
    }
    if (ctx->pc != 0x10B854u) { return; }
    ctx->pc = 0x10B854u;
    // 0x10b854: 0x54500006
    ctx->pc = 0x10B854u;
    {
        const bool branch_taken_0x10b854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x10b854) {
            ctx->pc = 0x10B858u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x10B870u;
            goto label_10b870;
        }
    }
    ctx->pc = 0x10B85Cu;
    // 0x10b85c: 0x3c040017
    ctx->pc = 0x10b85cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b860: 0xc04ace4
    ctx->pc = 0x10B860u;
    SET_GPR_U32(ctx, 31, 0x10B868u);
    ctx->pc = 0x10B864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14512));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B868u; }
    }
    if (ctx->pc != 0x10B868u) { return; }
    ctx->pc = 0x10B868u;
    // 0x10b868: 0x10000058
    ctx->pc = 0x10B868u;
    {
        const bool branch_taken_0x10b868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B86Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b868) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B870u;
label_10b870:
    // 0x10b870: 0x34058000
    ctx->pc = 0x10b870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x10b874: 0xc045c80
    ctx->pc = 0x10B874u;
    SET_GPR_U32(ctx, 31, 0x10B87Cu);
    ctx->pc = 0x10B878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B87Cu; }
    }
    if (ctx->pc != 0x10B87Cu) { return; }
    ctx->pc = 0x10B87Cu;
    // 0x10b87c: 0x14500006
    ctx->pc = 0x10B87Cu;
    {
        const bool branch_taken_0x10b87c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B880u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10b87c) {
            ctx->pc = 0x10B898u;
            goto label_10b898;
        }
    }
    ctx->pc = 0x10B884u;
    // 0x10b884: 0x3c040017
    ctx->pc = 0x10b884u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b888: 0xc04ace4
    ctx->pc = 0x10B888u;
    SET_GPR_U32(ctx, 31, 0x10B890u);
    ctx->pc = 0x10B88Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14544));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B890u; }
    }
    if (ctx->pc != 0x10B890u) { return; }
    ctx->pc = 0x10B890u;
    // 0x10b890: 0x1000004e
    ctx->pc = 0x10B890u;
    {
        const bool branch_taken_0x10b890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B894u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b890) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B898u;
label_10b898:
    // 0x10b898: 0x24020001
    ctx->pc = 0x10b898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b89c: 0x24630002
    ctx->pc = 0x10b89cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x10b8a0: 0x1000004a
    ctx->pc = 0x10B8A0u;
    {
        const bool branch_taken_0x10b8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B8A4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        if (branch_taken_0x10b8a0) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B8A8u;
label_10b8a8:
    // 0x10b8a8: 0x24020001
    ctx->pc = 0x10b8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b8ac: 0x14620006
    ctx->pc = 0x10B8ACu;
    {
        const bool branch_taken_0x10b8ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B8B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x10b8ac) {
            ctx->pc = 0x10B8C8u;
            goto label_10b8c8;
        }
    }
    ctx->pc = 0x10B8B4u;
    // 0x10b8b4: 0x3c020017
    ctx->pc = 0x10b8b4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x10b8b8: 0x3c040017
    ctx->pc = 0x10b8b8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b8bc: 0x8c45f040
    ctx->pc = 0x10b8bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294963264)));
    // 0x10b8c0: 0x10000035
    ctx->pc = 0x10B8C0u;
    {
        const bool branch_taken_0x10b8c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B8C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14784));
        if (branch_taken_0x10b8c0) {
            ctx->pc = 0x10B998u;
            goto label_10b998;
        }
    }
    ctx->pc = 0x10B8C8u;
label_10b8c8:
    // 0x10b8c8: 0x1462002c
    ctx->pc = 0x10B8C8u;
    {
        const bool branch_taken_0x10b8c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B8CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x10b8c8) {
            ctx->pc = 0x10B97Cu;
            goto label_10b97c;
        }
    }
    ctx->pc = 0x10B8D0u;
    // 0x10b8d0: 0xc043948
    ctx->pc = 0x10B8D0u;
    SET_GPR_U32(ctx, 31, 0x10B8D8u);
    ctx->pc = 0x10B8D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8D8u; }
    }
    if (ctx->pc != 0x10B8D8u) { return; }
    ctx->pc = 0x10B8D8u;
    // 0x10b8d8: 0xc045066
    ctx->pc = 0x10B8D8u;
    SET_GPR_U32(ctx, 31, 0x10B8E0u);
    ctx->pc = 0x10B8DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x114198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8E0u; }
    }
    if (ctx->pc != 0x10B8E0u) { return; }
    ctx->pc = 0x10B8E0u;
    // 0x10b8e0: 0x14400006
    ctx->pc = 0x10B8E0u;
    {
        const bool branch_taken_0x10b8e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B8E4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        if (branch_taken_0x10b8e0) {
            ctx->pc = 0x10B8FCu;
            goto label_10b8fc;
        }
    }
    ctx->pc = 0x10B8E8u;
    // 0x10b8e8: 0x3c040017
    ctx->pc = 0x10b8e8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b8ec: 0xc04ace4
    ctx->pc = 0x10B8ECu;
    SET_GPR_U32(ctx, 31, 0x10B8F4u);
    ctx->pc = 0x10B8F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13760));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8F4u; }
    }
    if (ctx->pc != 0x10B8F4u) { return; }
    ctx->pc = 0x10B8F4u;
    // 0x10b8f4: 0x10000035
    ctx->pc = 0x10B8F4u;
    {
        const bool branch_taken_0x10b8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B8F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b8f4) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B8FCu;
label_10b8fc:
    // 0x10b8fc: 0x3c040017
    ctx->pc = 0x10b8fcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b900: 0x40282d
    ctx->pc = 0x10b900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b904: 0x248435e0
    ctx->pc = 0x10b904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13792));
    // 0x10b908: 0xc04ace4
    ctx->pc = 0x10B908u;
    SET_GPR_U32(ctx, 31, 0x10B910u);
    ctx->pc = 0x10B90Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B910u; }
    }
    if (ctx->pc != 0x10B910u) { return; }
    ctx->pc = 0x10B910u;
    // 0x10b910: 0x3c040017
    ctx->pc = 0x10b910u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b914: 0x8f85838c
    ctx->pc = 0x10b914u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10b918: 0x2484f000
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963200));
    // 0x10b91c: 0x24060028
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    // 0x10b920: 0xc045c60
    ctx->pc = 0x10B920u;
    SET_GPR_U32(ctx, 31, 0x10B928u);
    ctx->pc = 0x10B924u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B928u; }
    }
    if (ctx->pc != 0x10B928u) { return; }
    ctx->pc = 0x10B928u;
    // 0x10b928: 0x14500005
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B92Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B940u;
            goto label_10b940;
        }
    }
    ctx->pc = 0x10B930u;
    // 0x10b930: 0x3c040017
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b934: 0xc04ace4
    ctx->pc = 0x10B934u;
    SET_GPR_U32(ctx, 31, 0x10B93Cu);
    ctx->pc = 0x10B938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13824));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B93Cu; }
    }
    if (ctx->pc != 0x10B93Cu) { return; }
    ctx->pc = 0x10B93Cu;
    // 0x10b93c: 0x8f86838c
    ctx->pc = 0x10b93cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_10b940:
    // 0x10b940: 0x202d
    ctx->pc = 0x10b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b944: 0x340580b0
    ctx->pc = 0x10b944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32944);
    // 0x10b948: 0x382d
    ctx->pc = 0x10b948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b94c: 0xc045c80
    ctx->pc = 0x10B94Cu;
    SET_GPR_U32(ctx, 31, 0x10B954u);
    ctx->pc = 0x10B950u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B954u; }
    }
    if (ctx->pc != 0x10B954u) { return; }
    ctx->pc = 0x10B954u;
    // 0x10b954: 0x14500005
    ctx->pc = 0x10B954u;
    {
        const bool branch_taken_0x10b954 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B958u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10b954) {
            ctx->pc = 0x10B96Cu;
            goto label_10b96c;
        }
    }
    ctx->pc = 0x10B95Cu;
    // 0x10b95c: 0x3c040017
    ctx->pc = 0x10b95cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b960: 0xc04ace4
    ctx->pc = 0x10B960u;
    SET_GPR_U32(ctx, 31, 0x10B968u);
    ctx->pc = 0x10B964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14680));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B968u; }
    }
    if (ctx->pc != 0x10B968u) { return; }
    ctx->pc = 0x10B968u;
    // 0x10b968: 0x8f838390
    ctx->pc = 0x10b968u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10b96c:
    // 0x10b96c: 0x24020001
    ctx->pc = 0x10b96cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b970: 0x24630001
    ctx->pc = 0x10b970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b974: 0x10000015
    ctx->pc = 0x10B974u;
    {
        const bool branch_taken_0x10b974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B978u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        if (branch_taken_0x10b974) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B97Cu;
label_10b97c:
    // 0x10b97c: 0x1462000a
    ctx->pc = 0x10B97Cu;
    {
        const bool branch_taken_0x10b97c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B980u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x10b97c) {
            ctx->pc = 0x10B9A8u;
            goto label_10b9a8;
        }
    }
    ctx->pc = 0x10B984u;
    // 0x10b984: 0x240300ff
    ctx->pc = 0x10b984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x10b988: 0x8c45f040
    ctx->pc = 0x10b988u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294963264)));
    // 0x10b98c: 0x10a30006
    ctx->pc = 0x10B98Cu;
    {
        const bool branch_taken_0x10b98c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x10B990u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x10b98c) {
            ctx->pc = 0x10B9A8u;
            goto label_10b9a8;
        }
    }
    ctx->pc = 0x10B994u;
    // 0x10b994: 0x248439e8
    ctx->pc = 0x10b994u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14824));
label_10b998:
    // 0x10b998: 0xc04ace4
    ctx->pc = 0x10B998u;
    SET_GPR_U32(ctx, 31, 0x10B9A0u);
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9A0u; }
    }
    if (ctx->pc != 0x10B9A0u) { return; }
    ctx->pc = 0x10B9A0u;
    // 0x10b9a0: 0x1000000a
    ctx->pc = 0x10B9A0u;
    {
        const bool branch_taken_0x10b9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B9A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b9a0) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B9A8u;
label_10b9a8:
    // 0x10b9a8: 0xc045082
    ctx->pc = 0x10B9A8u;
    SET_GPR_U32(ctx, 31, 0x10B9B0u);
    ctx->pc = 0x10B9ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    ctx->pc = 0x114208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9B0u; }
    }
    if (ctx->pc != 0x10B9B0u) { return; }
    ctx->pc = 0x10B9B0u;
    // 0x10b9b0: 0x50400005
    ctx->pc = 0x10B9B0u;
    {
        const bool branch_taken_0x10b9b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b9b0) {
            ctx->pc = 0x10B9B4u;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
            ctx->pc = 0x10B9C8u;
            goto label_10b9c8;
        }
    }
    ctx->pc = 0x10B9B8u;
    // 0x10b9b8: 0x3c040017
    ctx->pc = 0x10b9b8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b9bc: 0xc04ace4
    ctx->pc = 0x10B9BCu;
    SET_GPR_U32(ctx, 31, 0x10B9C4u);
    ctx->pc = 0x10B9C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13960));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9C4u; }
    }
    if (ctx->pc != 0x10B9C4u) { return; }
    ctx->pc = 0x10B9C4u;
    // 0x10b9c4: 0xaf808390
    ctx->pc = 0x10b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10b9c8:
    // 0x10b9c8: 0x102d
    ctx->pc = 0x10b9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b9cc:
    // 0x10b9cc: 0xdfbf0010
    ctx->pc = 0x10b9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b9d0: 0xdfb00000
    ctx->pc = 0x10b9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b9d4: 0x3e00008
    ctx->pc = 0x10B9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B9D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B84Cu: goto label_10b84c;
            case 0x10B870u: goto label_10b870;
            case 0x10B898u: goto label_10b898;
            case 0x10B8A8u: goto label_10b8a8;
            case 0x10B8C8u: goto label_10b8c8;
            case 0x10B8FCu: goto label_10b8fc;
            case 0x10B940u: goto label_10b940;
            case 0x10B96Cu: goto label_10b96c;
            case 0x10B97Cu: goto label_10b97c;
            case 0x10B998u: goto label_10b998;
            case 0x10B9A8u: goto label_10b9a8;
            case 0x10B9C8u: goto label_10b9c8;
            case 0x10B9CCu: goto label_10b9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B9DCu;
}
