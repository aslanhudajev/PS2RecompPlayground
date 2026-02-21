#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EETransVAG
// Address: 0x10a8c0 - 0x10aa88
void EETransVAG_0x10a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a8c0u;

    // 0x10a8c0: 0x27bdffb0
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10a8c4: 0xffb00000
    ctx->pc = 0x10a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a8c8: 0x80802d
    ctx->pc = 0x10a8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8cc: 0xffb30030
    ctx->pc = 0x10a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a8d0: 0xffb20020
    ctx->pc = 0x10a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a8d4: 0x3c040017
    ctx->pc = 0x10a8d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10a8d8: 0xffbf0040
    ctx->pc = 0x10a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10a8dc: 0xa0902d
    ctx->pc = 0x10a8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8e0: 0xffb10010
    ctx->pc = 0x10a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a8e4: 0xc0982d
    ctx->pc = 0x10a8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8e8: 0xc04ace4
    ctx->pc = 0x10A8E8u;
    SET_GPR_U32(ctx, 31, 0x10A8F0u);
    ctx->pc = 0x10A8ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13496));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A8F0u; }
    }
    if (ctx->pc != 0x10A8F0u) { return; }
    ctx->pc = 0x10A8F0u;
    // 0x10a8f0: 0x3203003f
    ctx->pc = 0x10a8f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 16), 63));
    // 0x10a8f4: 0x50600004
    ctx->pc = 0x10A8F4u;
    {
        const bool branch_taken_0x10a8f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x10a8f4) {
            ctx->pc = 0x10A8F8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
            ctx->pc = 0x10A908u;
            goto label_10a908;
        }
    }
    ctx->pc = 0x10A8FCu;
    // 0x10a8fc: 0x3c040017
    ctx->pc = 0x10a8fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10a900: 0x10000027
    ctx->pc = 0x10A900u;
    {
        const bool branch_taken_0x10a900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A904u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14024));
        if (branch_taken_0x10a900) {
            ctx->pc = 0x10A9A0u;
            goto label_10a9a0;
        }
    }
    ctx->pc = 0x10A908u;
label_10a908:
    // 0x10a908: 0x200302d
    ctx->pc = 0x10a908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a90c: 0x240282d
    ctx->pc = 0x10a90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a910: 0xc04ace4
    ctx->pc = 0x10A910u;
    SET_GPR_U32(ctx, 31, 0x10A918u);
    ctx->pc = 0x10A914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14088));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A918u; }
    }
    if (ctx->pc != 0x10A918u) { return; }
    ctx->pc = 0x10A918u;
    // 0x10a918: 0x2651ffd0
    ctx->pc = 0x10a918u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x10a91c: 0xc042aa2
    ctx->pc = 0x10A91Cu;
    SET_GPR_U32(ctx, 31, 0x10A924u);
    ctx->pc = 0x10A920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AA88u;
    {
        const uint32_t __entryPc = ctx->pc;
        PrintVAGDetails_0x10aa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A924u; }
    }
    if (ctx->pc != 0x10A924u) { return; }
    ctx->pc = 0x10A924u;
    // 0x10a924: 0xc042fde
    ctx->pc = 0x10A924u;
    SET_GPR_U32(ctx, 31, 0x10A92Cu);
    ctx->pc = 0x10A928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10BF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPitchValue_0x10bf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A92Cu; }
    }
    if (ctx->pc != 0x10A92Cu) { return; }
    ctx->pc = 0x10A92Cu;
    // 0x10a92c: 0x200202d
    ctx->pc = 0x10a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a930: 0xae620000
    ctx->pc = 0x10a930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x10a934: 0x24850030
    ctx->pc = 0x10a934u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 48));
    // 0x10a938: 0xc04ac5f
    ctx->pc = 0x10A938u;
    SET_GPR_U32(ctx, 31, 0x10A940u);
    ctx->pc = 0x10A93Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B17Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        memmove_0x12b17c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A940u; }
    }
    if (ctx->pc != 0x10A940u) { return; }
    ctx->pc = 0x10A940u;
    // 0x10a940: 0x40802d
    ctx->pc = 0x10a940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a944: 0xc043948
    ctx->pc = 0x10A944u;
    SET_GPR_U32(ctx, 31, 0x10A94Cu);
    ctx->pc = 0x10A948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A94Cu; }
    }
    if (ctx->pc != 0x10A94Cu) { return; }
    ctx->pc = 0x10A94Cu;
    // 0x10a94c: 0xc045066
    ctx->pc = 0x10A94Cu;
    SET_GPR_U32(ctx, 31, 0x10A954u);
    ctx->pc = 0x10A950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114198u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A954u; }
    }
    if (ctx->pc != 0x10A954u) { return; }
    ctx->pc = 0x10A954u;
    // 0x10a954: 0x14400004
    ctx->pc = 0x10A954u;
    {
        const bool branch_taken_0x10a954 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A958u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        if (branch_taken_0x10a954) {
            ctx->pc = 0x10A968u;
            goto label_10a968;
        }
    }
    ctx->pc = 0x10A95Cu;
    // 0x10a95c: 0x3c040017
    ctx->pc = 0x10a95cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10a960: 0x1000000f
    ctx->pc = 0x10A960u;
    {
        const bool branch_taken_0x10a960 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A964u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13760));
        if (branch_taken_0x10a960) {
            ctx->pc = 0x10A9A0u;
            goto label_10a9a0;
        }
    }
    ctx->pc = 0x10A968u;
label_10a968:
    // 0x10a968: 0x3c040017
    ctx->pc = 0x10a968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10a96c: 0x40282d
    ctx->pc = 0x10a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a970: 0x248435e0
    ctx->pc = 0x10a970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13792));
    // 0x10a974: 0xc04ace4
    ctx->pc = 0x10A974u;
    SET_GPR_U32(ctx, 31, 0x10A97Cu);
    ctx->pc = 0x10A978u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A97Cu; }
    }
    if (ctx->pc != 0x10A97Cu) { return; }
    ctx->pc = 0x10A97Cu;
    // 0x10a97c: 0x8f85838c
    ctx->pc = 0x10a97cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10a980: 0x200202d
    ctx->pc = 0x10a980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a984: 0x220302d
    ctx->pc = 0x10a984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a988: 0xc045c60
    ctx->pc = 0x10A988u;
    SET_GPR_U32(ctx, 31, 0x10A990u);
    ctx->pc = 0x10A98Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117180u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A990u; }
    }
    if (ctx->pc != 0x10A990u) { return; }
    ctx->pc = 0x10A990u;
    // 0x10a990: 0x14530007
    ctx->pc = 0x10A990u;
    {
        const bool branch_taken_0x10a990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x10A994u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        if (branch_taken_0x10a990) {
            ctx->pc = 0x10A9B0u;
            goto label_10a9b0;
        }
    }
    ctx->pc = 0x10A998u;
    // 0x10a998: 0x3c040017
    ctx->pc = 0x10a998u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10a99c: 0x24843600
    ctx->pc = 0x10a99cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13824));
label_10a9a0:
    // 0x10a9a0: 0xc04ace4
    ctx->pc = 0x10A9A0u;
    SET_GPR_U32(ctx, 31, 0x10A9A8u);
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A9A8u; }
    }
    if (ctx->pc != 0x10A9A8u) { return; }
    ctx->pc = 0x10A9A8u;
    // 0x10a9a8: 0x10000030
    ctx->pc = 0x10A9A8u;
    {
        const bool branch_taken_0x10a9a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A9ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a9a8) {
            ctx->pc = 0x10AA6Cu;
            goto label_10aa6c;
        }
    }
    ctx->pc = 0x10A9B0u;
label_10a9b0:
    // 0x10a9b0: 0x3064000f
    ctx->pc = 0x10a9b0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 15));
    // 0x10a9b4: 0x10800003
    ctx->pc = 0x10A9B4u;
    {
        const bool branch_taken_0x10a9b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A9B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x10a9b4) {
            ctx->pc = 0x10A9C4u;
            goto label_10a9c4;
        }
    }
    ctx->pc = 0x10A9BCu;
    // 0x10a9bc: 0x441823
    ctx->pc = 0x10a9bcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10a9c0: 0xaf838388
    ctx->pc = 0x10a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 3));
label_10a9c4:
    // 0x10a9c4: 0x24705010
    ctx->pc = 0x10a9c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 20496));
    // 0x10a9c8: 0x2462ffd0
    ctx->pc = 0x10a9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x10a9cc: 0x521821
    ctx->pc = 0x10a9ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10a9d0: 0x3c040017
    ctx->pc = 0x10a9d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10a9d4: 0xaf838388
    ctx->pc = 0x10a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 3));
    // 0x10a9d8: 0x24843620
    ctx->pc = 0x10a9d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13856));
    // 0x10a9dc: 0x220282d
    ctx->pc = 0x10a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9e0: 0xc04ace4
    ctx->pc = 0x10A9E0u;
    SET_GPR_U32(ctx, 31, 0x10A9E8u);
    ctx->pc = 0x10A9E4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A9E8u; }
    }
    if (ctx->pc != 0x10A9E8u) { return; }
    ctx->pc = 0x10A9E8u;
    // 0x10a9e8: 0x8f88838c
    ctx->pc = 0x10a9e8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10a9ec: 0x220502d
    ctx->pc = 0x10a9ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9f0: 0x24040001
    ctx->pc = 0x10a9f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9f4: 0x340580d0
    ctx->pc = 0x10a9f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32976));
    // 0x10a9f8: 0x302d
    ctx->pc = 0x10a9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9fc: 0x382d
    ctx->pc = 0x10a9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa00: 0xc045c80
    ctx->pc = 0x10AA00u;
    SET_GPR_U32(ctx, 31, 0x10AA08u);
    ctx->pc = 0x10AA04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA08u; }
    }
    if (ctx->pc != 0x10AA08u) { return; }
    ctx->pc = 0x10AA08u;
    // 0x10aa08: 0x54530005
    ctx->pc = 0x10AA08u;
    {
        const bool branch_taken_0x10aa08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x10aa08) {
            ctx->pc = 0x10AA0Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x10AA20u;
            goto label_10aa20;
        }
    }
    ctx->pc = 0x10AA10u;
    // 0x10aa10: 0x3c040017
    ctx->pc = 0x10aa10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10aa14: 0xc04ace4
    ctx->pc = 0x10AA14u;
    SET_GPR_U32(ctx, 31, 0x10AA1Cu);
    ctx->pc = 0x10AA18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13896));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA1Cu; }
    }
    if (ctx->pc != 0x10AA1Cu) { return; }
    ctx->pc = 0x10AA1Cu;
    // 0x10aa1c: 0x24040001
    ctx->pc = 0x10aa1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10aa20:
    // 0x10aa20: 0x340580f0
    ctx->pc = 0x10aa20u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33008));
    // 0x10aa24: 0x302d
    ctx->pc = 0x10aa24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aa28: 0xc045c80
    ctx->pc = 0x10AA28u;
    SET_GPR_U32(ctx, 31, 0x10AA30u);
    ctx->pc = 0x10AA2Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA30u; }
    }
    if (ctx->pc != 0x10AA30u) { return; }
    ctx->pc = 0x10AA30u;
    // 0x10aa30: 0x14530003
    ctx->pc = 0x10AA30u;
    {
        const bool branch_taken_0x10aa30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x10AA34u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x10aa30) {
            ctx->pc = 0x10AA40u;
            goto label_10aa40;
        }
    }
    ctx->pc = 0x10AA38u;
    // 0x10aa38: 0xc04ace4
    ctx->pc = 0x10AA38u;
    SET_GPR_U32(ctx, 31, 0x10AA40u);
    ctx->pc = 0x10AA3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13928));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA40u; }
    }
    if (ctx->pc != 0x10AA40u) { return; }
    ctx->pc = 0x10AA40u;
label_10aa40:
    // 0x10aa40: 0xc045082
    ctx->pc = 0x10AA40u;
    SET_GPR_U32(ctx, 31, 0x10AA48u);
    ctx->pc = 0x10AA44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    ctx->pc = 0x114208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA48u; }
    }
    if (ctx->pc != 0x10AA48u) { return; }
    ctx->pc = 0x10AA48u;
    // 0x10aa48: 0x50400005
    ctx->pc = 0x10AA48u;
    {
        const bool branch_taken_0x10aa48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10aa48) {
            ctx->pc = 0x10AA4Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
            ctx->pc = 0x10AA60u;
            goto label_10aa60;
        }
    }
    ctx->pc = 0x10AA50u;
    // 0x10aa50: 0x3c040017
    ctx->pc = 0x10aa50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10aa54: 0xc04ace4
    ctx->pc = 0x10AA54u;
    SET_GPR_U32(ctx, 31, 0x10AA5Cu);
    ctx->pc = 0x10AA58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13960));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA5Cu; }
    }
    if (ctx->pc != 0x10AA5Cu) { return; }
    ctx->pc = 0x10AA5Cu;
    // 0x10aa5c: 0x3c040017
    ctx->pc = 0x10aa5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
label_10aa60:
    // 0x10aa60: 0xc04ace4
    ctx->pc = 0x10AA60u;
    SET_GPR_U32(ctx, 31, 0x10AA68u);
    ctx->pc = 0x10AA64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13992));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AA68u; }
    }
    if (ctx->pc != 0x10AA68u) { return; }
    ctx->pc = 0x10AA68u;
    // 0x10aa68: 0x200102d
    ctx->pc = 0x10aa68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10aa6c:
    // 0x10aa6c: 0xdfbf0040
    ctx->pc = 0x10aa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10aa70: 0xdfb30030
    ctx->pc = 0x10aa70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10aa74: 0xdfb20020
    ctx->pc = 0x10aa74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10aa78: 0xdfb10010
    ctx->pc = 0x10aa78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aa7c: 0xdfb00000
    ctx->pc = 0x10aa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aa80: 0x3e00008
    ctx->pc = 0x10AA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A908u: goto label_10a908;
            case 0x10A968u: goto label_10a968;
            case 0x10A9A0u: goto label_10a9a0;
            case 0x10A9B0u: goto label_10a9b0;
            case 0x10A9C4u: goto label_10a9c4;
            case 0x10AA20u: goto label_10aa20;
            case 0x10AA40u: goto label_10aa40;
            case 0x10AA60u: goto label_10aa60;
            case 0x10AA6Cu: goto label_10aa6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AA88u;
}
