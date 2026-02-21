#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBGetFromWad
// Address: 0x2d4528 - 0x2d4588
void MBGetFromWad_0x2d4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4528u;

    // 0x2d4528: 0x27bdffe0
    ctx->pc = 0x2d4528u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d452c: 0xffbf0010
    ctx->pc = 0x2d452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4530: 0xffb00000
    ctx->pc = 0x2d4530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4534: 0xc0802d
    ctx->pc = 0x2d4534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4538: 0x10800004
    ctx->pc = 0x2D4538u;
    {
        const bool branch_taken_0x2d4538 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D453Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d4538) {
            ctx->pc = 0x2D454Cu;
            goto label_2d454c;
        }
    }
    ctx->pc = 0x2D4540u;
    // 0x2d4540: 0xc0b5134
    ctx->pc = 0x2D4540u;
    SET_GPR_U32(ctx, 31, 0x2D4548u);
    ctx->pc = 0x2D44D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFindInWad_0x2d44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4548u; }
    }
    if (ctx->pc != 0x2D4548u) { return; }
    ctx->pc = 0x2D4548u;
    // 0x2d4548: 0x40182d
    ctx->pc = 0x2d4548u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d454c:
    // 0x2d454c: 0x14600005
    ctx->pc = 0x2D454Cu;
    {
        const bool branch_taken_0x2d454c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d454c) {
            ctx->pc = 0x2D4564u;
            goto label_2d4564;
        }
    }
    ctx->pc = 0x2D4554u;
    // 0x2d4554: 0x56000001
    ctx->pc = 0x2D4554u;
    {
        const bool branch_taken_0x2d4554 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d4554) {
            ctx->pc = 0x2D4558u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2D455Cu;
            goto label_2d455c;
        }
    }
    ctx->pc = 0x2D455Cu;
label_2d455c:
    // 0x2d455c: 0x10000006
    ctx->pc = 0x2D455Cu;
    {
        const bool branch_taken_0x2d455c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4560u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d455c) {
            ctx->pc = 0x2D4578u;
            goto label_2d4578;
        }
    }
    ctx->pc = 0x2D4564u;
label_2d4564:
    // 0x2d4564: 0x52000004
    ctx->pc = 0x2D4564u;
    {
        const bool branch_taken_0x2d4564 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d4564) {
            ctx->pc = 0x2D4568u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->pc = 0x2D4578u;
            goto label_2d4578;
        }
    }
    ctx->pc = 0x2D456Cu;
    // 0x2d456c: 0x8c620008
    ctx->pc = 0x2d456cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d4570: 0xae020000
    ctx->pc = 0x2d4570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d4574: 0x8c620004
    ctx->pc = 0x2d4574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d4578:
    // 0x2d4578: 0xdfbf0010
    ctx->pc = 0x2d4578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d457c: 0xdfb00000
    ctx->pc = 0x2d457cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4580: 0x3e00008
    ctx->pc = 0x2D4580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D454Cu: goto label_2d454c;
            case 0x2D455Cu: goto label_2d455c;
            case 0x2D4564u: goto label_2d4564;
            case 0x2D4578u: goto label_2d4578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4588u;
}
