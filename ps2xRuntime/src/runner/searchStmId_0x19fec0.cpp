#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: searchStmId
// Address: 0x19fec0 - 0x19ff10
void searchStmId_0x19fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("searchStmId");


    ctx->pc = 0x19fec0u;

    // 0x19fec0: 0x24830180
    ctx->pc = 0x19fec0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 384));
    // 0x19fec4: 0x382d
    ctx->pc = 0x19fec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fec8: 0x90620018
    ctx->pc = 0x19fec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19fecc: 0x14450004
    ctx->pc = 0x19FECCu;
    {
        const bool branch_taken_0x19fecc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x19FED0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fecc) {
            ctx->pc = 0x19FEE0u;
            goto label_19fee0;
        }
    }
    ctx->pc = 0x19FED4u;
    // 0x19fed4: 0x1000000c
    ctx->pc = 0x19FED4u;
    {
        const bool branch_taken_0x19fed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FED8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19fed4) {
            ctx->pc = 0x19FF08u;
            goto label_19ff08;
        }
    }
    ctx->pc = 0x19FEDCu;
    // 0x19fedc: 0x0
    ctx->pc = 0x19fedcu;
    // NOP
label_19fee0:
    // 0x19fee0: 0x24c60001
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_19fee4:
    // 0x19fee4: 0x28c2001a
    ctx->pc = 0x19fee4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 26));
    // 0x19fee8: 0x10400007
    ctx->pc = 0x19FEE8u;
    {
        const bool branch_taken_0x19fee8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FEECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 6));
        if (branch_taken_0x19fee8) {
            ctx->pc = 0x19FF08u;
            goto label_19ff08;
        }
    }
    ctx->pc = 0x19FEF0u;
    // 0x19fef0: 0x24420180
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 384));
    // 0x19fef4: 0x821021
    ctx->pc = 0x19fef4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19fef8: 0x90430018
    ctx->pc = 0x19fef8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x19fefc: 0x1465fff9
    ctx->pc = 0x19FEFCu;
    {
        const bool branch_taken_0x19fefc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x19FF00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x19fefc) {
            ctx->pc = 0x19FEE4u;
            goto label_19fee4;
        }
    }
    ctx->pc = 0x19FF04u;
    // 0x19ff04: 0x40382d
    ctx->pc = 0x19ff04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ff08:
    // 0x19ff08: 0x3e00008
    ctx->pc = 0x19FF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FEE0u: goto label_19fee0;
            case 0x19FEE4u: goto label_19fee4;
            case 0x19FF08u: goto label_19ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FF10u;
}
