#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1DataI
// Address: 0x2b3528 - 0x2b3590
void pbGetVu1DataI_0x2b3528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3528u;

    // 0x2b3528: 0x27bdffe0
    ctx->pc = 0x2b3528u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b352c: 0xffbf0010
    ctx->pc = 0x2b352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3530: 0xffb00000
    ctx->pc = 0x2b3530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3534: 0xc0802d
    ctx->pc = 0x2b3534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3538: 0xc0accda
    ctx->pc = 0x2B3538u;
    SET_GPR_U32(ctx, 31, 0x2B3540u);
    ctx->pc = 0x2B353Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B3368u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataAddr_0x2b3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3540u; }
    }
    if (ctx->pc != 0x2B3540u) { return; }
    ctx->pc = 0x2B3540u;
    // 0x2b3540: 0x40202d
    ctx->pc = 0x2b3540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3544: 0x54800004
    ctx->pc = 0x2B3544u;
    {
        const bool branch_taken_0x2b3544 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3544) {
            ctx->pc = 0x2B3548u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B3558u;
            goto label_2b3558;
        }
    }
    ctx->pc = 0x2B354Cu;
    // 0x2b354c: 0x3c02ffff
    ctx->pc = 0x2b354cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b3550: 0x1000000b
    ctx->pc = 0x2B3550u;
    {
        const bool branch_taken_0x2b3550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3554u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
        if (branch_taken_0x2b3550) {
            ctx->pc = 0x2B3580u;
            goto label_2b3580;
        }
    }
    ctx->pc = 0x2B3558u;
label_2b3558:
    // 0x2b3558: 0x3c02ffff
    ctx->pc = 0x2b3558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b355c: 0x3442ffff
    ctx->pc = 0x2b355cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b3560: 0x10620007
    ctx->pc = 0x2B3560u;
    {
        const bool branch_taken_0x2b3560 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B3564u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2b3560) {
            ctx->pc = 0x2B3580u;
            goto label_2b3580;
        }
    }
    ctx->pc = 0x2B3568u;
    // 0x2b3568: 0x8c820000
    ctx->pc = 0x2b3568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b356c: 0x621821
    ctx->pc = 0x2b356cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3570: 0x3c021100
    ctx->pc = 0x2b3570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x2b3574: 0x3442c000
    ctx->pc = 0x2b3574u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2b3578: 0x621821
    ctx->pc = 0x2b3578u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b357c: 0x8c620000
    ctx->pc = 0x2b357cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b3580:
    // 0x2b3580: 0xdfbf0010
    ctx->pc = 0x2b3580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3584: 0xdfb00000
    ctx->pc = 0x2b3584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3588: 0x3e00008
    ctx->pc = 0x2B3588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B358Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3558u: goto label_2b3558;
            case 0x2B3580u: goto label_2b3580;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B3590u;
}
