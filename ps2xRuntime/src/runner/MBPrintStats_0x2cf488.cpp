#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPrintStats
// Address: 0x2cf488 - 0x2cf608
void MBPrintStats_0x2cf488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf488u;

    // 0x2cf488: 0x27bdfff0
    ctx->pc = 0x2cf488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf48c: 0xffbf0000
    ctx->pc = 0x2cf48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf490: 0x3c02003a
    ctx->pc = 0x2cf490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf494: 0x8c470c20
    ctx->pc = 0x2cf494u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2cf498: 0x28e2ff9d
    ctx->pc = 0x2cf498u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 4294967197));
    // 0x2cf49c: 0x54400004
    ctx->pc = 0x2CF49Cu;
    {
        const bool branch_taken_0x2cf49c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf49c) {
            ctx->pc = 0x2CF4A0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967197));
            ctx->pc = 0x2CF4B0u;
            goto label_2cf4b0;
        }
    }
    ctx->pc = 0x2CF4A4u;
    // 0x2cf4a4: 0x28e32710
    ctx->pc = 0x2cf4a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 10000));
    // 0x2cf4a8: 0x2402270f
    ctx->pc = 0x2cf4a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2cf4ac: 0x43380a
    ctx->pc = 0x2cf4acu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_2cf4b0:
    // 0x2cf4b0: 0x3c02003a
    ctx->pc = 0x2cf4b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf4b4: 0x8c480c34
    ctx->pc = 0x2cf4b4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 3124)));
    // 0x2cf4b8: 0x2902ff9d
    ctx->pc = 0x2cf4b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 4294967197));
    // 0x2cf4bc: 0x54400004
    ctx->pc = 0x2CF4BCu;
    {
        const bool branch_taken_0x2cf4bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf4bc) {
            ctx->pc = 0x2CF4C0u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967197));
            ctx->pc = 0x2CF4D0u;
            goto label_2cf4d0;
        }
    }
    ctx->pc = 0x2CF4C4u;
    // 0x2cf4c4: 0x29032710
    ctx->pc = 0x2cf4c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 10000));
    // 0x2cf4c8: 0x2402270f
    ctx->pc = 0x2cf4c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2cf4cc: 0x43400a
    ctx->pc = 0x2cf4ccu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 2));
label_2cf4d0:
    // 0x2cf4d0: 0x3c02003a
    ctx->pc = 0x2cf4d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf4d4: 0x24420c20
    ctx->pc = 0x2cf4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3104));
    // 0x2cf4d8: 0x8c440004
    ctx->pc = 0x2cf4d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cf4dc: 0x8c430010
    ctx->pc = 0x2cf4dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2cf4e0: 0x834821
    ctx->pc = 0x2cf4e0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf4e4: 0x8c42000c
    ctx->pc = 0x2cf4e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cf4e8: 0x1224821
    ctx->pc = 0x2cf4e8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2cf4ec: 0x2922ff9d
    ctx->pc = 0x2cf4ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 4294967197));
    // 0x2cf4f0: 0x54400005
    ctx->pc = 0x2CF4F0u;
    {
        const bool branch_taken_0x2cf4f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cf4f0) {
            ctx->pc = 0x2CF4F4u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967197));
            ctx->pc = 0x2CF508u;
            goto label_2cf508;
        }
    }
    ctx->pc = 0x2CF4F8u;
    // 0x2cf4f8: 0x3c030001
    ctx->pc = 0x2cf4f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2cf4fc: 0x3463869f
    ctx->pc = 0x2cf4fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34463));
    // 0x2cf500: 0x69102a
    ctx->pc = 0x2cf500u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
    // 0x2cf504: 0x62480b
    ctx->pc = 0x2cf504u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_2cf508:
    // 0x2cf508: 0x3c02003a
    ctx->pc = 0x2cf508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf50c: 0x8c420c18
    ctx->pc = 0x2cf50cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3096)));
    // 0x2cf510: 0x1040003a
    ctx->pc = 0x2CF510u;
    {
        const bool branch_taken_0x2cf510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF514u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2cf510) {
            ctx->pc = 0x2CF5FCu;
            goto label_2cf5fc;
        }
    }
    ctx->pc = 0x2CF518u;
    // 0x2cf518: 0x44890800
    ctx->pc = 0x2cf518u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 9);
    // 0x2cf51c: 0x46800860
    ctx->pc = 0x2cf51cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2cf520: 0x3c014d8f
    ctx->pc = 0x2cf520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19855 << 16));
    // 0x2cf524: 0x34210d18
    ctx->pc = 0x2cf524u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 3352));
    // 0x2cf528: 0x44810000
    ctx->pc = 0x2cf528u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cf52c: 0x24430c80
    ctx->pc = 0x2cf52cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2cf530: 0x8c620008
    ctx->pc = 0x2cf530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cf534: 0x4400005
    ctx->pc = 0x2CF534u;
    {
        const bool branch_taken_0x2cf534 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CF538u;
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2cf534) {
            ctx->pc = 0x2CF54Cu;
            goto label_2cf54c;
        }
    }
    ctx->pc = 0x2CF53Cu;
    // 0x2cf53c: 0x44820000
    ctx->pc = 0x2cf53cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cf540: 0x46800020
    ctx->pc = 0x2cf540u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cf544: 0x10000008
    ctx->pc = 0x2CF544u;
    {
        const bool branch_taken_0x2cf544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CF548u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        if (branch_taken_0x2cf544) {
            ctx->pc = 0x2CF568u;
            goto label_2cf568;
        }
    }
    ctx->pc = 0x2CF54Cu;
label_2cf54c:
    // 0x2cf54c: 0x30430001
    ctx->pc = 0x2cf54cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2cf550: 0x21042
    ctx->pc = 0x2cf550u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2cf554: 0x621825
    ctx->pc = 0x2cf554u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf558: 0x44830000
    ctx->pc = 0x2cf558u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2cf55c: 0x46800020
    ctx->pc = 0x2cf55cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cf560: 0x46000000
    ctx->pc = 0x2cf560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2cf564: 0x46000000
    ctx->pc = 0x2cf564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cf568:
    // 0x2cf568: 0x3c01447a
    ctx->pc = 0x2cf568u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x2cf56c: 0x44810800
    ctx->pc = 0x2cf56cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cf570: 0x46010002
    ctx->pc = 0x2cf570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cf574: 0x3c013f80
    ctx->pc = 0x2cf574u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2cf578: 0x44810800
    ctx->pc = 0x2cf578u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cf57c: 0x46010000
    ctx->pc = 0x2cf57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cf580: 0x0
    ctx->pc = 0x2cf580u;
    // NOP
    // 0x2cf584: 0x0
    ctx->pc = 0x2cf584u;
    // NOP
    // 0x2cf588: 0x46006303
    ctx->pc = 0x2cf588u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2cf58c: 0x3c02003a
    ctx->pc = 0x2cf58cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf590: 0x244a0c20
    ctx->pc = 0x2cf590u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 3104));
    // 0x2cf594: 0x3c02003a
    ctx->pc = 0x2cf594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cf598: 0x24430c80
    ctx->pc = 0x2cf598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2cf59c: 0x8c620008
    ctx->pc = 0x2cf59cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cf5a0: 0x4400005
    ctx->pc = 0x2CF5A0u;
    {
        const bool branch_taken_0x2cf5a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CF5A4u;
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5a0) {
            ctx->pc = 0x2CF5B8u;
            goto label_2cf5b8;
        }
    }
    ctx->pc = 0x2CF5A8u;
    // 0x2cf5a8: 0x44821000
    ctx->pc = 0x2cf5a8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x2cf5ac: 0x468010a0
    ctx->pc = 0x2cf5acu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2cf5b0: 0x10000007
    ctx->pc = 0x2CF5B0u;
    {
        const bool branch_taken_0x2cf5b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf5b0) {
            ctx->pc = 0x2CF5D0u;
            goto label_2cf5d0;
        }
    }
    ctx->pc = 0x2CF5B8u;
label_2cf5b8:
    // 0x2cf5b8: 0x30430001
    ctx->pc = 0x2cf5b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x2cf5bc: 0x21042
    ctx->pc = 0x2cf5bcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x2cf5c0: 0x621825
    ctx->pc = 0x2cf5c0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf5c4: 0x44831000
    ctx->pc = 0x2cf5c4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x2cf5c8: 0x468010a0
    ctx->pc = 0x2cf5c8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2cf5cc: 0x46021080
    ctx->pc = 0x2cf5ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cf5d0:
    // 0x2cf5d0: 0x3c013a83
    ctx->pc = 0x2cf5d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2cf5d4: 0x3421126f
    ctx->pc = 0x2cf5d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2cf5d8: 0x44816800
    ctx->pc = 0x2cf5d8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2cf5dc: 0x24040001
    ctx->pc = 0x2cf5dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf5e0: 0x2405002f
    ctx->pc = 0x2cf5e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x2cf5e4: 0x3c06003b
    ctx->pc = 0x2cf5e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2cf5e8: 0x24c676c8
    ctx->pc = 0x2cf5e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 30408));
    // 0x2cf5ec: 0x8d4a0010
    ctx->pc = 0x2cf5ecu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2cf5f0: 0x8d6b000c
    ctx->pc = 0x2cf5f0u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x2cf5f4: 0xc0b46ea
    ctx->pc = 0x2CF5F4u;
    SET_GPR_U32(ctx, 31, 0x2CF5FCu);
    ctx->pc = 0x2CF5F8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    ctx->pc = 0x2D1BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechof_0x2d1ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF5FCu; }
    }
    if (ctx->pc != 0x2CF5FCu) { return; }
    ctx->pc = 0x2CF5FCu;
label_2cf5fc:
    // 0x2cf5fc: 0xdfbf0000
    ctx->pc = 0x2cf5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf600: 0x80b3d82
    ctx->pc = 0x2CF600u;
    ctx->pc = 0x2CF604u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2CF608u;
    MBInitStats_0x2cf608(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF608u;
}
