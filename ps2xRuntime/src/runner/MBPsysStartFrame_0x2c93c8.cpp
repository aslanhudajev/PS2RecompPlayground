#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPsysStartFrame
// Address: 0x2c93c8 - 0x2c9530
void MBPsysStartFrame_0x2c93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c93c8u;

    // 0x2c93c8: 0x27bdffe0
    ctx->pc = 0x2c93c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c93cc: 0xffbf0010
    ctx->pc = 0x2c93ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c93d0: 0xffb00000
    ctx->pc = 0x2c93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c93d4: 0x3c02003a
    ctx->pc = 0x2c93d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c93d8: 0x2450aa38
    ctx->pc = 0x2c93d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2c93dc: 0x3c02003a
    ctx->pc = 0x2c93dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c93e0: 0xac40aa30
    ctx->pc = 0x2c93e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945328), GPR_U32(ctx, 0));
    // 0x2c93e4: 0x3c020031
    ctx->pc = 0x2c93e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2c93e8: 0x8c43ffc8
    ctx->pc = 0x2c93e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967240)));
    // 0x2c93ec: 0x3c02004c
    ctx->pc = 0x2c93ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x2c93f0: 0x34424b40
    ctx->pc = 0x2c93f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19264));
    // 0x2c93f4: 0x621821
    ctx->pc = 0x2c93f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c93f8: 0x3c0208f0
    ctx->pc = 0x2c93f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2288 << 16));
    // 0x2c93fc: 0x3442d180
    ctx->pc = 0x2c93fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53632));
    // 0x2c9400: 0x43102b
    ctx->pc = 0x2c9400u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9404: 0x1040000c
    ctx->pc = 0x2C9404u;
    {
        const bool branch_taken_0x2c9404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9408u;
        SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
        if (branch_taken_0x2c9404) {
            ctx->pc = 0x2C9438u;
            goto label_2c9438;
        }
    }
    ctx->pc = 0x2C940Cu;
    // 0x2c940c: 0x8e020014
    ctx->pc = 0x2c940cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c9410: 0x24420001
    ctx->pc = 0x2c9410u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c9414: 0xae020014
    ctx->pc = 0x2c9414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2c9418: 0xae000018
    ctx->pc = 0x2c9418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c941c: 0x3c03003a
    ctx->pc = 0x2c941cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c9420: 0x8c62b66c
    ctx->pc = 0x2c9420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294948460)));
    // 0x2c9424: 0x28420010
    ctx->pc = 0x2c9424u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
    // 0x2c9428: 0x10400029
    ctx->pc = 0x2C9428u;
    {
        const bool branch_taken_0x2c9428 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C942Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x2c9428) {
            ctx->pc = 0x2C94D0u;
            goto label_2c94d0;
        }
    }
    ctx->pc = 0x2C9430u;
    // 0x2c9430: 0x10000027
    ctx->pc = 0x2C9430u;
    {
        const bool branch_taken_0x2c9430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9434u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294948460), GPR_U32(ctx, 2));
        if (branch_taken_0x2c9430) {
            ctx->pc = 0x2C94D0u;
            goto label_2c94d0;
        }
    }
    ctx->pc = 0x2C9438u;
label_2c9438:
    // 0x2c9438: 0x8ca4b66c
    ctx->pc = 0x2c9438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294948460)));
    // 0x2c943c: 0x1080000a
    ctx->pc = 0x2C943Cu;
    {
        const bool branch_taken_0x2c943c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c943c) {
            ctx->pc = 0x2C9468u;
            goto label_2c9468;
        }
    }
    ctx->pc = 0x2C9444u;
    // 0x2c9444: 0x8e020014
    ctx->pc = 0x2c9444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c9448: 0x24420001
    ctx->pc = 0x2c9448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c944c: 0xae020014
    ctx->pc = 0x2c944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2c9450: 0x28820010
    ctx->pc = 0x2c9450u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x2c9454: 0x1040001e
    ctx->pc = 0x2C9454u;
    {
        const bool branch_taken_0x2c9454 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9458u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x2c9454) {
            ctx->pc = 0x2C94D0u;
            goto label_2c94d0;
        }
    }
    ctx->pc = 0x2C945Cu;
    // 0x2c945c: 0x2482ffff
    ctx->pc = 0x2c945cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c9460: 0x1000001b
    ctx->pc = 0x2C9460u;
    {
        const bool branch_taken_0x2c9460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9464u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294948460), GPR_U32(ctx, 2));
        if (branch_taken_0x2c9460) {
            ctx->pc = 0x2C94D0u;
            goto label_2c94d0;
        }
    }
    ctx->pc = 0x2C9468u;
label_2c9468:
    // 0x2c9468: 0x4600005
    ctx->pc = 0x2C9468u;
    {
        const bool branch_taken_0x2c9468 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2C946Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2c9468) {
            ctx->pc = 0x2C9480u;
            goto label_2c9480;
        }
    }
    ctx->pc = 0x2C9470u;
    // 0x2c9470: 0x44830000
    ctx->pc = 0x2c9470u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2c9474: 0x46800020
    ctx->pc = 0x2c9474u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c9478: 0x10000006
    ctx->pc = 0x2C9478u;
    {
        const bool branch_taken_0x2c9478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c9478) {
            ctx->pc = 0x2C9494u;
            goto label_2c9494;
        }
    }
    ctx->pc = 0x2C9480u;
label_2c9480:
    // 0x2c9480: 0x31842
    ctx->pc = 0x2c9480u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c9484: 0x431025
    ctx->pc = 0x2c9484u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9488: 0x44820000
    ctx->pc = 0x2c9488u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c948c: 0x46800020
    ctx->pc = 0x2c948cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c9490: 0x46000000
    ctx->pc = 0x2c9490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c9494:
    // 0x2c9494: 0x3c014b18
    ctx->pc = 0x2c9494u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19224 << 16));
    // 0x2c9498: 0x34219680
    ctx->pc = 0x2c9498u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 38528));
    // 0x2c949c: 0x44810800
    ctx->pc = 0x2c949cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c94a0: 0x0
    ctx->pc = 0x2c94a0u;
    // NOP
    // 0x2c94a4: 0x0
    ctx->pc = 0x2c94a4u;
    // NOP
    // 0x2c94a8: 0x46010043
    ctx->pc = 0x2c94a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2c94ac: 0x46000824
    ctx->pc = 0x2c94acu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x2c94b0: 0x44030000
    ctx->pc = 0x2c94b0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x2c94b4: 0x8e020014
    ctx->pc = 0x2c94b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c94b8: 0x621021
    ctx->pc = 0x2c94b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c94bc: 0xae020014
    ctx->pc = 0x2c94bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2c94c0: 0x44830000
    ctx->pc = 0x2c94c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2c94c4: 0x46800020
    ctx->pc = 0x2c94c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c94c8: 0x46000841
    ctx->pc = 0x2c94c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c94cc: 0xe6010018
    ctx->pc = 0x2c94ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2c94d0:
    // 0x2c94d0: 0xc0b2484
    ctx->pc = 0x2C94D0u;
    SET_GPR_U32(ctx, 31, 0x2C94D8u);
    ctx->pc = 0x2C9210u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeQueuedPsys_0x2c9210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C94D8u; }
    }
    if (ctx->pc != 0x2C94D8u) { return; }
    ctx->pc = 0x2C94D8u;
    // 0x2c94d8: 0x8e040064
    ctx->pc = 0x2c94d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2c94dc: 0x10800005
    ctx->pc = 0x2C94DCu;
    {
        const bool branch_taken_0x2c94dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C94E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2c94dc) {
            ctx->pc = 0x2C94F4u;
            goto label_2c94f4;
        }
    }
    ctx->pc = 0x2C94E4u;
    // 0x2c94e4: 0xc0b2e44
    ctx->pc = 0x2C94E4u;
    SET_GPR_U32(ctx, 31, 0x2C94ECu);
    ctx->pc = 0x2CB910u;
    {
        const uint32_t __entryPc = ctx->pc;
        newDebugPsys_0x2cb910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C94ECu; }
    }
    if (ctx->pc != 0x2C94ECu) { return; }
    ctx->pc = 0x2C94ECu;
    // 0x2c94ec: 0xae000064
    ctx->pc = 0x2c94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2c94f0: 0x3c02003a
    ctx->pc = 0x2c94f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2c94f4:
    // 0x2c94f4: 0x8c42b634
    ctx->pc = 0x2c94f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948404)));
    // 0x2c94f8: 0x10400004
    ctx->pc = 0x2C94F8u;
    {
        const bool branch_taken_0x2c94f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C94FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2c94f8) {
            ctx->pc = 0x2C950Cu;
            goto label_2c950c;
        }
    }
    ctx->pc = 0x2C9500u;
    // 0x2c9500: 0xc0b24b8
    ctx->pc = 0x2C9500u;
    SET_GPR_U32(ctx, 31, 0x2C9508u);
    ctx->pc = 0x2C92E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        doAcornFunc_0x2c92e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9508u; }
    }
    if (ctx->pc != 0x2C9508u) { return; }
    ctx->pc = 0x2C9508u;
    // 0x2c9508: 0x3c02003a
    ctx->pc = 0x2c9508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2c950c:
    // 0x2c950c: 0x8c42aa34
    ctx->pc = 0x2c950cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294945332)));
    // 0x2c9510: 0x10400004
    ctx->pc = 0x2C9510u;
    {
        const bool branch_taken_0x2c9510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9514u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2c9510) {
            ctx->pc = 0x2C9524u;
            goto label_2c9524;
        }
    }
    ctx->pc = 0x2C9518u;
    // 0x2c9518: 0xdfb00000
    ctx->pc = 0x2c9518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c951c: 0x80b254c
    ctx->pc = 0x2C951Cu;
    ctx->pc = 0x2C9520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C9530u;
    doDebugTask_0x2c9530(rdram, ctx, runtime); return;
    ctx->pc = 0x2C9524u;
label_2c9524:
    // 0x2c9524: 0xdfb00000
    ctx->pc = 0x2c9524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9528: 0x3e00008
    ctx->pc = 0x2C9528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C952Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9438u: goto label_2c9438;
            case 0x2C9468u: goto label_2c9468;
            case 0x2C9480u: goto label_2c9480;
            case 0x2C9494u: goto label_2c9494;
            case 0x2C94D0u: goto label_2c94d0;
            case 0x2C94F4u: goto label_2c94f4;
            case 0x2C950Cu: goto label_2c950c;
            case 0x2C9524u: goto label_2c9524;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9530u;
}
