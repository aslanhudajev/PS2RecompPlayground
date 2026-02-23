#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_IsPlayTimeAutoStop
// Address: 0x19b518 - 0x19b5a8
void sfply_IsPlayTimeAutoStop_0x19b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_IsPlayTimeAutoStop");


    ctx->pc = 0x19b518u;

    // 0x19b518: 0x27bdffc0
    ctx->pc = 0x19b518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b51c: 0x24030004
    ctx->pc = 0x19b51cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b520: 0xffb00010
    ctx->pc = 0x19b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19b524: 0xffbf0030
    ctx->pc = 0x19b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b528: 0x80802d
    ctx->pc = 0x19b528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b52c: 0xffb10020
    ctx->pc = 0x19b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19b530: 0x8e020040
    ctx->pc = 0x19b530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19b534: 0x14430017
    ctx->pc = 0x19B534u;
    {
        const bool branch_taken_0x19b534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19B538u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b534) {
            ctx->pc = 0x19B594u;
            goto label_19b594;
        }
    }
    ctx->pc = 0x19B53Cu;
    // 0x19b53c: 0x8e020048
    ctx->pc = 0x19b53cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19b540: 0x24110001
    ctx->pc = 0x19b540u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b544: 0x10510006
    ctx->pc = 0x19B544u;
    {
        const bool branch_taken_0x19b544 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x19B548u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b544) {
            ctx->pc = 0x19B560u;
            goto label_19b560;
        }
    }
    ctx->pc = 0x19B54Cu;
    // 0x19b54c: 0x3a0282d
    ctx->pc = 0x19b54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b550: 0xc067782
    ctx->pc = 0x19B550u;
    SET_GPR_U32(ctx, 31, 0x19B558u);
    ctx->pc = 0x19B554u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19DE08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTimeSub_0x19de08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B558u; }
        else if (ctx->pc != 0x19B558u) { ctx->pc = 0x19B558u; }
    }
    if (ctx->pc != 0x19B558u) { return; }
    ctx->pc = 0x19B558u;
    // 0x19b558: 0x10400003
    ctx->pc = 0x19B558u;
    {
        const bool branch_taken_0x19b558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B55Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x19b558) {
            ctx->pc = 0x19B568u;
            goto label_19b568;
        }
    }
    ctx->pc = 0x19B560u;
label_19b560:
    // 0x19b560: 0x1000000c
    ctx->pc = 0x19B560u;
    {
        const bool branch_taken_0x19b560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B564u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b560) {
            ctx->pc = 0x19B594u;
            goto label_19b594;
        }
    }
    ctx->pc = 0x19B568u;
label_19b568:
    // 0x19b568: 0x440fffd
    ctx->pc = 0x19B568u;
    {
        const bool branch_taken_0x19b568 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19B56Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b568) {
            ctx->pc = 0x19B560u;
            goto label_19b560;
        }
    }
    ctx->pc = 0x19B570u;
    // 0x19b570: 0xc0674c2
    ctx->pc = 0x19B570u;
    SET_GPR_U32(ctx, 31, 0x19B578u);
    ctx->pc = 0x19B574u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 54));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B578u; }
        else if (ctx->pc != 0x19B578u) { ctx->pc = 0x19B578u; }
    }
    if (ctx->pc != 0x19B578u) { return; }
    ctx->pc = 0x19B578u;
    // 0x19b578: 0x8fa70004
    ctx->pc = 0x19b578u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19b57c: 0x40202d
    ctx->pc = 0x19b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b580: 0x8fa60000
    ctx->pc = 0x19b580u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b584: 0xc067894
    ctx->pc = 0x19B584u;
    SET_GPR_U32(ctx, 31, 0x19B58Cu);
    ctx->pc = 0x19B588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x19E250u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_CmpTime_0x19e250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B58Cu; }
        else if (ctx->pc != 0x19B58Cu) { ctx->pc = 0x19B58Cu; }
    }
    if (ctx->pc != 0x19B58Cu) { return; }
    ctx->pc = 0x19B58Cu;
    // 0x19b58c: 0x2880a
    ctx->pc = 0x19b58cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x19b590: 0x220102d
    ctx->pc = 0x19b590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b594:
    // 0x19b594: 0xdfbf0030
    ctx->pc = 0x19b594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b598: 0xdfb10020
    ctx->pc = 0x19b598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b59c: 0xdfb00010
    ctx->pc = 0x19b59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b5a0: 0x3e00008
    ctx->pc = 0x19B5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B5A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B560u: goto label_19b560;
            case 0x19B568u: goto label_19b568;
            case 0x19B594u: goto label_19b594;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B5A8u;
}
