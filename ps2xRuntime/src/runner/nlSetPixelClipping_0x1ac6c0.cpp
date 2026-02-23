#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetPixelClipping
// Address: 0x1ac6c0 - 0x1ac858
void nlSetPixelClipping_0x1ac6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetPixelClipping");


    ctx->pc = 0x1ac6c0u;

    // 0x1ac6c0: 0x27bdffb0
    ctx->pc = 0x1ac6c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ac6c4: 0x7fbf0040
    ctx->pc = 0x1ac6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ac6c8: 0x7fb30030
    ctx->pc = 0x1ac6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ac6cc: 0x7fb20020
    ctx->pc = 0x1ac6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ac6d0: 0x7fb10010
    ctx->pc = 0x1ac6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac6d4: 0x7fb00000
    ctx->pc = 0x1ac6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac6d8: 0x8f848a10
    ctx->pc = 0x1ac6d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x1ac6dc: 0x24020001
    ctx->pc = 0x1ac6dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac6e0: 0x8c830000
    ctx->pc = 0x1ac6e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac6e4: 0x1462000e
    ctx->pc = 0x1AC6E4u;
    {
        const bool branch_taken_0x1ac6e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AC6E8u;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
        if (branch_taken_0x1ac6e4) {
            ctx->pc = 0x1AC720u;
            goto label_1ac720;
        }
    }
    ctx->pc = 0x1AC6ECu;
    // 0x1ac6ec: 0x3c020030
    ctx->pc = 0x1ac6ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac6f0: 0x24423700
    ctx->pc = 0x1ac6f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1ac6f4: 0x10820003
    ctx->pc = 0x1AC6F4u;
    {
        const bool branch_taken_0x1ac6f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ac6f4) {
            ctx->pc = 0x1AC704u;
            goto label_1ac704;
        }
    }
    ctx->pc = 0x1AC6FCu;
label_1ac6fc:
    // 0x1ac6fc: 0x1000ffff
    ctx->pc = 0x1AC6FCu;
    {
        const bool branch_taken_0x1ac6fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ac6fc) {
            ctx->pc = 0x1AC6FCu;
            goto label_1ac6fc;
        }
    }
    ctx->pc = 0x1AC704u;
label_1ac704:
    // 0x1ac704: 0x3c010030
    ctx->pc = 0x1ac704u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac708: 0x94830090
    ctx->pc = 0x1ac708u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1ac70c: 0x94820094
    ctx->pc = 0x1ac70cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1ac710: 0x84255838
    ctx->pc = 0x1ac710u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1ac714: 0x31903
    ctx->pc = 0x1ac714u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1ac718: 0x10000006
    ctx->pc = 0x1AC718u;
    {
        const bool branch_taken_0x1ac718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AC71Cu;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        if (branch_taken_0x1ac718) {
            ctx->pc = 0x1AC734u;
            goto label_1ac734;
        }
    }
    ctx->pc = 0x1AC720u;
label_1ac720:
    // 0x1ac720: 0x94830040
    ctx->pc = 0x1ac720u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1ac724: 0x94820044
    ctx->pc = 0x1ac724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ac728: 0x52c3f
    ctx->pc = 0x1ac728u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ac72c: 0x31903
    ctx->pc = 0x1ac72cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1ac730: 0x22103
    ctx->pc = 0x1ac730u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1ac734:
    // 0x1ac734: 0x46006024
    ctx->pc = 0x1ac734u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x1ac738: 0x44020000
    ctx->pc = 0x1ac738u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ac73c: 0x460e6040
    ctx->pc = 0x1ac73cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x1ac740: 0x438823
    ctx->pc = 0x1ac740u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac744: 0x46000824
    ctx->pc = 0x1ac744u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1ac748: 0x44020000
    ctx->pc = 0x1ac748u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ac74c: 0x44850000
    ctx->pc = 0x1ac74cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1ac750: 0x431023
    ctx->pc = 0x1ac750u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ac754: 0x46800060
    ctx->pc = 0x1ac754u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ac758: 0x2452ffff
    ctx->pc = 0x1ac758u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ac75c: 0x46016883
    ctx->pc = 0x1ac75cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[2] = ctx->f[13] / ctx->f[1];
    // 0x1ac760: 0x460f6800
    ctx->pc = 0x1ac760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x1ac764: 0x46010043
    ctx->pc = 0x1ac764u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1ac768: 0x46001024
    ctx->pc = 0x1ac768u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1ac76c: 0x44020000
    ctx->pc = 0x1ac76cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ac770: 0x46000824
    ctx->pc = 0x1ac770u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1ac774: 0x448023
    ctx->pc = 0x1ac774u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ac778: 0x44020000
    ctx->pc = 0x1ac778u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1ac77c: 0x0
    ctx->pc = 0x1ac77cu;
    // NOP
    // 0x1ac780: 0x441023
    ctx->pc = 0x1ac780u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ac784: 0x2453ffff
    ctx->pc = 0x1ac784u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ac788:
    // 0x1ac788: 0x3c011001
    ctx->pc = 0x1ac788u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1ac78c: 0x8c22d000
    ctx->pc = 0x1ac78cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1ac790: 0x30420100
    ctx->pc = 0x1ac790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1ac794: 0x0
    ctx->pc = 0x1ac794u;
    // NOP
    // 0x1ac798: 0x0
    ctx->pc = 0x1ac798u;
    // NOP
    // 0x1ac79c: 0x1440fffa
    ctx->pc = 0x1AC79Cu;
    {
        const bool branch_taken_0x1ac79c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ac79c) {
            ctx->pc = 0x1AC788u;
            goto label_1ac788;
        }
    }
    ctx->pc = 0x1AC7A4u;
    // 0x1ac7a4: 0xc069528
    ctx->pc = 0x1AC7A4u;
    SET_GPR_U32(ctx, 31, 0x1AC7ACu);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7ACu; }
        else if (ctx->pc != 0x1AC7ACu) { ctx->pc = 0x1AC7ACu; }
    }
    if (ctx->pc != 0x1AC7ACu) { return; }
    ctx->pc = 0x1AC7ACu;
    // 0x1ac7ac: 0x12183c
    ctx->pc = 0x1ac7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1ac7b0: 0x11203c
    ctx->pc = 0x1ac7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1ac7b4: 0x3183f
    ctx->pc = 0x1ac7b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ac7b8: 0x4203f
    ctx->pc = 0x1ac7b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1ac7bc: 0x31c38
    ctx->pc = 0x1ac7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ac7c0: 0x832025
    ctx->pc = 0x1ac7c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ac7c4: 0x10183c
    ctx->pc = 0x1ac7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ac7c8: 0x3183f
    ctx->pc = 0x1ac7c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ac7cc: 0x3183c
    ctx->pc = 0x1ac7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac7d0: 0x642025
    ctx->pc = 0x1ac7d0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ac7d4: 0x13183c
    ctx->pc = 0x1ac7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ac7d8: 0x3183f
    ctx->pc = 0x1ac7d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ac7dc: 0x31c3c
    ctx->pc = 0x1ac7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ac7e0: 0x642825
    ctx->pc = 0x1ac7e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ac7e4: 0x3c031000
    ctx->pc = 0x1ac7e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1ac7e8: 0x34640003
    ctx->pc = 0x1ac7e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), 3));
    // 0x1ac7ec: 0xac440000
    ctx->pc = 0x1ac7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1ac7f0: 0xac400004
    ctx->pc = 0x1ac7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ac7f4: 0xac430008
    ctx->pc = 0x1ac7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1ac7f8: 0x3203c
    ctx->pc = 0x1ac7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ac7fc: 0x3c035100
    ctx->pc = 0x1ac7fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)20736 << 16));
    // 0x1ac800: 0x34630003
    ctx->pc = 0x1ac800u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 3));
    // 0x1ac804: 0xac43000c
    ctx->pc = 0x1ac804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1ac808: 0x34038002
    ctx->pc = 0x1ac808u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32770));
    // 0x1ac80c: 0x641825
    ctx->pc = 0x1ac80cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ac810: 0xfc430010
    ctx->pc = 0x1ac810u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1ac814: 0x2403000e
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ac818: 0xfc430018
    ctx->pc = 0x1ac818u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x1ac81c: 0xfc450020
    ctx->pc = 0x1ac81cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 5));
    // 0x1ac820: 0x24030040
    ctx->pc = 0x1ac820u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ac824: 0xfc430028
    ctx->pc = 0x1ac824u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x1ac828: 0xfc450030
    ctx->pc = 0x1ac828u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
    // 0x1ac82c: 0x24030041
    ctx->pc = 0x1ac82cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ac830: 0xfc430038
    ctx->pc = 0x1ac830u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x1ac834: 0xc06952c
    ctx->pc = 0x1AC834u;
    SET_GPR_U32(ctx, 31, 0x1AC83Cu);
    ctx->pc = 0x1AC838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC83Cu; }
        else if (ctx->pc != 0x1AC83Cu) { ctx->pc = 0x1AC83Cu; }
    }
    if (ctx->pc != 0x1AC83Cu) { return; }
    ctx->pc = 0x1AC83Cu;
    // 0x1ac83c: 0x7bbf0040
    ctx->pc = 0x1ac83cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac840: 0x7bb30030
    ctx->pc = 0x1ac840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac844: 0x7bb20020
    ctx->pc = 0x1ac844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac848: 0x7bb10010
    ctx->pc = 0x1ac848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac84c: 0x7bb00000
    ctx->pc = 0x1ac84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac850: 0x3e00008
    ctx->pc = 0x1AC850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AC6FCu: goto label_1ac6fc;
            case 0x1AC704u: goto label_1ac704;
            case 0x1AC720u: goto label_1ac720;
            case 0x1AC734u: goto label_1ac734;
            case 0x1AC788u: goto label_1ac788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AC858u;
}
