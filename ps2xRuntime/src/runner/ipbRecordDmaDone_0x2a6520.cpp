#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbRecordDmaDone
// Address: 0x2a6520 - 0x2a65c8
void ipbRecordDmaDone_0x2a6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a6520u;

    // 0x2a6520: 0x27bdffe0
    ctx->pc = 0x2a6520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6524: 0xffbe0010
    ctx->pc = 0x2a6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a6528: 0x3a0f02d
    ctx->pc = 0x2a6528u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a652c: 0xafc40000
    ctx->pc = 0x2a652cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a6530: 0x8fc20000
    ctx->pc = 0x2a6530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6534: 0x2c430003
    ctx->pc = 0x2a6534u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x2a6538: 0x14600003
    ctx->pc = 0x2A6538u;
    {
        const bool branch_taken_0x2a6538 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a6538) {
            ctx->pc = 0x2A6548u;
            goto label_2a6548;
        }
    }
    ctx->pc = 0x2A6540u;
    // 0x2a6540: 0x1000001c
    ctx->pc = 0x2A6540u;
    {
        const bool branch_taken_0x2a6540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6540) {
            ctx->pc = 0x2A65B4u;
            goto label_2a65b4;
        }
    }
    ctx->pc = 0x2A6548u;
label_2a6548:
    // 0x2a6548: 0x8fc20000
    ctx->pc = 0x2a6548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a654c: 0x2403001c
    ctx->pc = 0x2a654cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a6550: 0x431018
    ctx->pc = 0x2a6550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a6554: 0x24430008
    ctx->pc = 0x2a6554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a6558: 0x3c020037
    ctx->pc = 0x2a6558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a655c: 0x8c42807c
    ctx->pc = 0x2a655cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294934652)));
    // 0x2a6560: 0x431821
    ctx->pc = 0x2a6560u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6564: 0xafc30004
    ctx->pc = 0x2a6564u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2a6568: 0x8fc20004
    ctx->pc = 0x2a6568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a656c: 0xac400000
    ctx->pc = 0x2a656cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a6570: 0x8fc20004
    ctx->pc = 0x2a6570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6574: 0x8c430014
    ctx->pc = 0x2a6574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a6578: 0x4610003
    ctx->pc = 0x2A6578u;
    {
        const bool branch_taken_0x2a6578 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2a6578) {
            ctx->pc = 0x2A6588u;
            goto label_2a6588;
        }
    }
    ctx->pc = 0x2A6580u;
    // 0x2a6580: 0x1000000c
    ctx->pc = 0x2A6580u;
    {
        const bool branch_taken_0x2a6580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6580) {
            ctx->pc = 0x2A65B4u;
            goto label_2a65b4;
        }
    }
    ctx->pc = 0x2A6588u;
label_2a6588:
    // 0x2a6588: 0x8fc20004
    ctx->pc = 0x2a6588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a658c: 0x8fc30004
    ctx->pc = 0x2a658cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6590: 0x8c640014
    ctx->pc = 0x2a6590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a6594: 0x2405001c
    ctx->pc = 0x2a6594u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2a6598: 0x851818
    ctx->pc = 0x2a6598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a659c: 0x8c420010
    ctx->pc = 0x2a659cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a65a0: 0x431821
    ctx->pc = 0x2a65a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a65a4: 0xafc30008
    ctx->pc = 0x2a65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x2a65a8: 0x8fc20008
    ctx->pc = 0x2a65a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a65ac: 0x24030001
    ctx->pc = 0x2a65acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a65b0: 0xac430000
    ctx->pc = 0x2a65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a65b4:
    // 0x2a65b4: 0x3c0e82d
    ctx->pc = 0x2a65b4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65b8: 0xdfbe0010
    ctx->pc = 0x2a65b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a65bc: 0x27bd0020
    ctx->pc = 0x2a65bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a65c0: 0x3e00008
    ctx->pc = 0x2A65C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6548u: goto label_2a6548;
            case 0x2A6588u: goto label_2a6588;
            case 0x2A65B4u: goto label_2a65b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A65C8u;
}
