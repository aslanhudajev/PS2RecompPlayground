#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_SearchFreeHn
// Address: 0x19b730 - 0x19b770
void sfply_SearchFreeHn_0x19b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_SearchFreeHn");


    ctx->pc = 0x19b730u;

    // 0x19b730: 0x3c020026
    ctx->pc = 0x19b730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19b734: 0x202d
    ctx->pc = 0x19b734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b738: 0x2442ddc0
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x19b73c: 0x8c450174
    ctx->pc = 0x19b73cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x19b740: 0x18a00009
    ctx->pc = 0x19B740u;
    {
        const bool branch_taken_0x19b740 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x19B744u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 376)));
        if (branch_taken_0x19b740) {
            ctx->pc = 0x19B768u;
            goto label_19b768;
        }
    }
    ctx->pc = 0x19B748u;
label_19b748:
    // 0x19b748: 0x8c620040
    ctx->pc = 0x19b748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x19b74c: 0x14400003
    ctx->pc = 0x19B74Cu;
    {
        const bool branch_taken_0x19b74c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B750u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x19b74c) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B754u;
    // 0x19b754: 0x3e00008
    ctx->pc = 0x19B754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B758u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B748u: goto label_19b748;
            case 0x19B75Cu: goto label_19b75c;
            case 0x19B768u: goto label_19b768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B75Cu;
label_19b75c:
    // 0x19b75c: 0x85102a
    ctx->pc = 0x19b75cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x19b760: 0x1440fff9
    ctx->pc = 0x19B760u;
    {
        const bool branch_taken_0x19b760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B764u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 26664));
        if (branch_taken_0x19b760) {
            ctx->pc = 0x19B748u;
            goto label_19b748;
        }
    }
    ctx->pc = 0x19B768u;
label_19b768:
    // 0x19b768: 0x3e00008
    ctx->pc = 0x19B768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B76Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B748u: goto label_19b748;
            case 0x19B75Cu: goto label_19b75c;
            case 0x19B768u: goto label_19b768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B770u;
}
