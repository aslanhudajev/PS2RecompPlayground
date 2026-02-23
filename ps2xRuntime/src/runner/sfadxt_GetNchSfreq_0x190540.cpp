#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_GetNchSfreq
// Address: 0x190540 - 0x190598
void sfadxt_GetNchSfreq_0x190540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_GetNchSfreq");


    ctx->pc = 0x190540u;

    // 0x190540: 0x27bdffd0
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190544: 0xffb10010
    ctx->pc = 0x190544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x190548: 0xffb00000
    ctx->pc = 0x190548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19054c: 0xc0882d
    ctx->pc = 0x19054cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190550: 0xffbf0020
    ctx->pc = 0x190550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190554: 0xc0643d2
    ctx->pc = 0x190554u;
    SET_GPR_U32(ctx, 31, 0x19055Cu);
    ctx->pc = 0x190558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetHd_0x190f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19055Cu; }
        else if (ctx->pc != 0x19055Cu) { ctx->pc = 0x19055Cu; }
    }
    if (ctx->pc != 0x19055Cu) { return; }
    ctx->pc = 0x19055Cu;
    // 0x19055c: 0x40182d
    ctx->pc = 0x19055cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190560: 0x54600004
    ctx->pc = 0x190560u;
    {
        const bool branch_taken_0x190560 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x190560) {
            ctx->pc = 0x190564u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->pc = 0x190574u;
            goto label_190574;
        }
    }
    ctx->pc = 0x190568u;
    // 0x190568: 0x3c02ffff
    ctx->pc = 0x190568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19056c: 0x10000005
    ctx->pc = 0x19056Cu;
    {
        const bool branch_taken_0x19056c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190570u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x19056c) {
            ctx->pc = 0x190584u;
            goto label_190584;
        }
    }
    ctx->pc = 0x190574u;
label_190574:
    // 0x190574: 0x102d
    ctx->pc = 0x190574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190578: 0xae040000
    ctx->pc = 0x190578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x19057c: 0x8c630010
    ctx->pc = 0x19057cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x190580: 0xae230000
    ctx->pc = 0x190580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_190584:
    // 0x190584: 0xdfbf0020
    ctx->pc = 0x190584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190588: 0xdfb10010
    ctx->pc = 0x190588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19058c: 0xdfb00000
    ctx->pc = 0x19058cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190590: 0x3e00008
    ctx->pc = 0x190590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190574u: goto label_190574;
            case 0x190584u: goto label_190584;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190598u;
}
