#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSoundBatchAsync
// Address: 0x10b660 - 0x10b81c
void InitSoundBatchAsync_0x10b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b660u;

    // 0x10b660: 0x27bdffe0
    ctx->pc = 0x10b660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b664: 0x3c040011
    ctx->pc = 0x10b664u;
    SET_GPR_U32(ctx, 4, ((uint32_t)17 << 16));
    // 0x10b668: 0xffbf0010
    ctx->pc = 0x10b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b66c: 0x2484c018
    ctx->pc = 0x10b66cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950936));
    // 0x10b670: 0xc045c7c
    ctx->pc = 0x10B670u;
    SET_GPR_U32(ctx, 31, 0x10B678u);
    ctx->pc = 0x10B674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1171F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdCallBack_0x1171f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B678u; }
    }
    if (ctx->pc != 0x10B678u) { return; }
    ctx->pc = 0x10B678u;
    // 0x10b678: 0x8f858390
    ctx->pc = 0x10b678u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b67c: 0x14a0001a
    ctx->pc = 0x10B67Cu;
    {
        const bool branch_taken_0x10b67c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b67c) {
            ctx->pc = 0x10B6E8u;
            goto label_10b6e8;
        }
    }
    ctx->pc = 0x10B684u;
    // 0x10b684: 0xc045044
    ctx->pc = 0x10B684u;
    SET_GPR_U32(ctx, 31, 0x10B68Cu);
    ctx->pc = 0x114110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x114110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B68Cu; }
    }
    if (ctx->pc != 0x10B68Cu) { return; }
    ctx->pc = 0x10B68Cu;
    // 0x10b68c: 0x4410003
    ctx->pc = 0x10B68Cu;
    {
        const bool branch_taken_0x10b68c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10B690u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x10b68c) {
            ctx->pc = 0x10B69Cu;
            goto label_10b69c;
        }
    }
    ctx->pc = 0x10B694u;
    // 0x10b694: 0xc04ace4
    ctx->pc = 0x10B694u;
    SET_GPR_U32(ctx, 31, 0x10B69Cu);
    ctx->pc = 0x10B698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14648));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B69Cu; }
    }
    if (ctx->pc != 0x10B69Cu) { return; }
    ctx->pc = 0x10B69Cu;
label_10b69c:
    // 0x10b69c: 0xc045c30
    ctx->pc = 0x10B69Cu;
    SET_GPR_U32(ctx, 31, 0x10B6A4u);
    ctx->pc = 0x10B6A0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1170C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6A4u; }
    }
    if (ctx->pc != 0x10B6A4u) { return; }
    ctx->pc = 0x10B6A4u;
    // 0x10b6a4: 0x54500006
    ctx->pc = 0x10B6A4u;
    {
        const bool branch_taken_0x10b6a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x10b6a4) {
            ctx->pc = 0x10B6A8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10B6C0u;
            goto label_10b6c0;
        }
    }
    ctx->pc = 0x10B6ACu;
    // 0x10b6ac: 0x3c040017
    ctx->pc = 0x10b6acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b6b0: 0xc04ace4
    ctx->pc = 0x10B6B0u;
    SET_GPR_U32(ctx, 31, 0x10B6B8u);
    ctx->pc = 0x10B6B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14512));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6B8u; }
    }
    if (ctx->pc != 0x10B6B8u) { return; }
    ctx->pc = 0x10B6B8u;
    // 0x10b6b8: 0x10000054
    ctx->pc = 0x10B6B8u;
    {
        const bool branch_taken_0x10b6b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B6BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b6b8) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B6C0u;
label_10b6c0:
    // 0x10b6c0: 0x34058000
    ctx->pc = 0x10b6c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x10b6c4: 0xc045c80
    ctx->pc = 0x10B6C4u;
    SET_GPR_U32(ctx, 31, 0x10B6CCu);
    ctx->pc = 0x10B6C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6CCu; }
    }
    if (ctx->pc != 0x10B6CCu) { return; }
    ctx->pc = 0x10B6CCu;
    // 0x10b6cc: 0x14500039
    ctx->pc = 0x10B6CCu;
    {
        const bool branch_taken_0x10b6cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B6D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10b6cc) {
            ctx->pc = 0x10B7B4u;
            goto label_10b7b4;
        }
    }
    ctx->pc = 0x10B6D4u;
    // 0x10b6d4: 0x3c040017
    ctx->pc = 0x10b6d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b6d8: 0xc04ace4
    ctx->pc = 0x10B6D8u;
    SET_GPR_U32(ctx, 31, 0x10B6E0u);
    ctx->pc = 0x10B6DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14544));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6E0u; }
    }
    if (ctx->pc != 0x10B6E0u) { return; }
    ctx->pc = 0x10B6E0u;
    // 0x10b6e0: 0x1000004a
    ctx->pc = 0x10B6E0u;
    {
        const bool branch_taken_0x10b6e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B6E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b6e0) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B6E8u;
label_10b6e8:
    // 0x10b6e8: 0x14a20004
    ctx->pc = 0x10B6E8u;
    {
        const bool branch_taken_0x10b6e8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B6ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x10b6e8) {
            ctx->pc = 0x10B6FCu;
            goto label_10b6fc;
        }
    }
    ctx->pc = 0x10B6F0u;
    // 0x10b6f0: 0x3c040017
    ctx->pc = 0x10b6f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b6f4: 0x10000036
    ctx->pc = 0x10B6F4u;
    {
        const bool branch_taken_0x10b6f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B6F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14720));
        if (branch_taken_0x10b6f4) {
            ctx->pc = 0x10B7D0u;
            goto label_10b7d0;
        }
    }
    ctx->pc = 0x10B6FCu;
label_10b6fc:
    // 0x10b6fc: 0x24503998
    ctx->pc = 0x10b6fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 14744));
    // 0x10b700: 0xc04ace4
    ctx->pc = 0x10B700u;
    SET_GPR_U32(ctx, 31, 0x10B708u);
    ctx->pc = 0x10B704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B708u; }
    }
    if (ctx->pc != 0x10B708u) { return; }
    ctx->pc = 0x10B708u;
    // 0x10b708: 0x8f858390
    ctx->pc = 0x10b708u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b70c: 0x24020002
    ctx->pc = 0x10b70cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b710: 0x14a2002c
    ctx->pc = 0x10B710u;
    {
        const bool branch_taken_0x10b710 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B714u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x10b710) {
            ctx->pc = 0x10B7C4u;
            goto label_10b7c4;
        }
    }
    ctx->pc = 0x10B718u;
    // 0x10b718: 0xc043948
    ctx->pc = 0x10B718u;
    SET_GPR_U32(ctx, 31, 0x10B720u);
    ctx->pc = 0x10B71Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B720u; }
    }
    if (ctx->pc != 0x10B720u) { return; }
    ctx->pc = 0x10B720u;
    // 0x10b720: 0xc045066
    ctx->pc = 0x10B720u;
    SET_GPR_U32(ctx, 31, 0x10B728u);
    ctx->pc = 0x10B724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x114198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B728u; }
    }
    if (ctx->pc != 0x10B728u) { return; }
    ctx->pc = 0x10B728u;
    // 0x10b728: 0x14400006
    ctx->pc = 0x10B728u;
    {
        const bool branch_taken_0x10b728 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B72Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        if (branch_taken_0x10b728) {
            ctx->pc = 0x10B744u;
            goto label_10b744;
        }
    }
    ctx->pc = 0x10B730u;
    // 0x10b730: 0x3c040017
    ctx->pc = 0x10b730u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b734: 0xc04ace4
    ctx->pc = 0x10B734u;
    SET_GPR_U32(ctx, 31, 0x10B73Cu);
    ctx->pc = 0x10B738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13760));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B73Cu; }
    }
    if (ctx->pc != 0x10B73Cu) { return; }
    ctx->pc = 0x10B73Cu;
    // 0x10b73c: 0x10000033
    ctx->pc = 0x10B73Cu;
    {
        const bool branch_taken_0x10b73c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10b73c) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B744u;
label_10b744:
    // 0x10b744: 0x3c040017
    ctx->pc = 0x10b744u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b748: 0x40282d
    ctx->pc = 0x10b748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b74c: 0x248435e0
    ctx->pc = 0x10b74cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13792));
    // 0x10b750: 0xc04ace4
    ctx->pc = 0x10B750u;
    SET_GPR_U32(ctx, 31, 0x10B758u);
    ctx->pc = 0x10B754u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B758u; }
    }
    if (ctx->pc != 0x10B758u) { return; }
    ctx->pc = 0x10B758u;
    // 0x10b758: 0x3c040017
    ctx->pc = 0x10b758u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b75c: 0x8f85838c
    ctx->pc = 0x10b75cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10b760: 0x2484efc0
    ctx->pc = 0x10b760u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963136));
    // 0x10b764: 0x24060020
    ctx->pc = 0x10b764u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x10b768: 0xc045c60
    ctx->pc = 0x10B768u;
    SET_GPR_U32(ctx, 31, 0x10B770u);
    ctx->pc = 0x10B76Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B770u; }
    }
    if (ctx->pc != 0x10B770u) { return; }
    ctx->pc = 0x10B770u;
    // 0x10b770: 0x14500005
    ctx->pc = 0x10B770u;
    {
        const bool branch_taken_0x10b770 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B774u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        if (branch_taken_0x10b770) {
            ctx->pc = 0x10B788u;
            goto label_10b788;
        }
    }
    ctx->pc = 0x10B778u;
    // 0x10b778: 0x3c040017
    ctx->pc = 0x10b778u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b77c: 0xc04ace4
    ctx->pc = 0x10B77Cu;
    SET_GPR_U32(ctx, 31, 0x10B784u);
    ctx->pc = 0x10B780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13824));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B784u; }
    }
    if (ctx->pc != 0x10B784u) { return; }
    ctx->pc = 0x10B784u;
    // 0x10b784: 0x8f86838c
    ctx->pc = 0x10b784u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_10b788:
    // 0x10b788: 0x202d
    ctx->pc = 0x10b788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b78c: 0x340580b0
    ctx->pc = 0x10b78cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32944));
    // 0x10b790: 0x382d
    ctx->pc = 0x10b790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b794: 0xc045c80
    ctx->pc = 0x10B794u;
    SET_GPR_U32(ctx, 31, 0x10B79Cu);
    ctx->pc = 0x10B798u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B79Cu; }
    }
    if (ctx->pc != 0x10B79Cu) { return; }
    ctx->pc = 0x10B79Cu;
    // 0x10b79c: 0x14500005
    ctx->pc = 0x10B79Cu;
    {
        const bool branch_taken_0x10b79c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x10B7A0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        if (branch_taken_0x10b79c) {
            ctx->pc = 0x10B7B4u;
            goto label_10b7b4;
        }
    }
    ctx->pc = 0x10B7A4u;
    // 0x10b7a4: 0x3c040017
    ctx->pc = 0x10b7a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b7a8: 0xc04ace4
    ctx->pc = 0x10B7A8u;
    SET_GPR_U32(ctx, 31, 0x10B7B0u);
    ctx->pc = 0x10B7ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14680));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7B0u; }
    }
    if (ctx->pc != 0x10B7B0u) { return; }
    ctx->pc = 0x10B7B0u;
    // 0x10b7b0: 0x8f838390
    ctx->pc = 0x10b7b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10b7b4:
    // 0x10b7b4: 0x24020001
    ctx->pc = 0x10b7b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b7b8: 0x24630001
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b7bc: 0x10000013
    ctx->pc = 0x10B7BCu;
    {
        const bool branch_taken_0x10b7bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B7C0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        if (branch_taken_0x10b7bc) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B7C4u;
label_10b7c4:
    // 0x10b7c4: 0x14a20006
    ctx->pc = 0x10B7C4u;
    {
        const bool branch_taken_0x10b7c4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x10B7C8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x10b7c4) {
            ctx->pc = 0x10B7E0u;
            goto label_10b7e0;
        }
    }
    ctx->pc = 0x10B7CCu;
    // 0x10b7cc: 0x248439a8
    ctx->pc = 0x10b7ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14760));
label_10b7d0:
    // 0x10b7d0: 0xc04ace4
    ctx->pc = 0x10B7D0u;
    SET_GPR_U32(ctx, 31, 0x10B7D8u);
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7D8u; }
    }
    if (ctx->pc != 0x10B7D8u) { return; }
    ctx->pc = 0x10B7D8u;
    // 0x10b7d8: 0x1000000c
    ctx->pc = 0x10B7D8u;
    {
        const bool branch_taken_0x10b7d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B7DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b7d8) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B7E0u;
label_10b7e0:
    // 0x10b7e0: 0xc04ace4
    ctx->pc = 0x10B7E0u;
    SET_GPR_U32(ctx, 31, 0x10B7E8u);
    ctx->pc = 0x10B7E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7E8u; }
    }
    if (ctx->pc != 0x10B7E8u) { return; }
    ctx->pc = 0x10B7E8u;
    // 0x10b7e8: 0xc045082
    ctx->pc = 0x10B7E8u;
    SET_GPR_U32(ctx, 31, 0x10B7F0u);
    ctx->pc = 0x10B7ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    ctx->pc = 0x114208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7F0u; }
    }
    if (ctx->pc != 0x10B7F0u) { return; }
    ctx->pc = 0x10B7F0u;
    // 0x10b7f0: 0x50400005
    ctx->pc = 0x10B7F0u;
    {
        const bool branch_taken_0x10b7f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10b7f0) {
            ctx->pc = 0x10B7F4u;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
            ctx->pc = 0x10B808u;
            goto label_10b808;
        }
    }
    ctx->pc = 0x10B7F8u;
    // 0x10b7f8: 0x3c040017
    ctx->pc = 0x10b7f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b7fc: 0xc04ace4
    ctx->pc = 0x10B7FCu;
    SET_GPR_U32(ctx, 31, 0x10B804u);
    ctx->pc = 0x10B800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13960));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B804u; }
    }
    if (ctx->pc != 0x10B804u) { return; }
    ctx->pc = 0x10B804u;
    // 0x10b804: 0xaf808390
    ctx->pc = 0x10b804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10b808:
    // 0x10b808: 0x102d
    ctx->pc = 0x10b808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b80c:
    // 0x10b80c: 0xdfbf0010
    ctx->pc = 0x10b80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b810: 0xdfb00000
    ctx->pc = 0x10b810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b814: 0x3e00008
    ctx->pc = 0x10B814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B69Cu: goto label_10b69c;
            case 0x10B6C0u: goto label_10b6c0;
            case 0x10B6E8u: goto label_10b6e8;
            case 0x10B6FCu: goto label_10b6fc;
            case 0x10B744u: goto label_10b744;
            case 0x10B788u: goto label_10b788;
            case 0x10B7B4u: goto label_10b7b4;
            case 0x10B7C4u: goto label_10b7c4;
            case 0x10B7D0u: goto label_10b7d0;
            case 0x10B7E0u: goto label_10b7e0;
            case 0x10B808u: goto label_10b808;
            case 0x10B80Cu: goto label_10b80c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B81Cu;
}
