#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_is_exec_hn
// Address: 0x178758 - 0x1787a0
void htci_is_exec_hn_0x178758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_is_exec_hn");


    ctx->pc = 0x178758u;

    // 0x178758: 0x3c020024
    ctx->pc = 0x178758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17875c: 0x24060001
    ctx->pc = 0x17875cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178760: 0x2443a120
    ctx->pc = 0x178760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x178764: 0x24050002
    ctx->pc = 0x178764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x178768: 0x246401d4
    ctx->pc = 0x178768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 468));
    // 0x17876c: 0x80620000
    ctx->pc = 0x17876cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_178770:
    // 0x178770: 0x54460006
    ctx->pc = 0x178770u;
    {
        const bool branch_taken_0x178770 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x178770) {
            ctx->pc = 0x178774u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 36));
            ctx->pc = 0x17878Cu;
            goto label_17878c;
        }
    }
    ctx->pc = 0x178778u;
    // 0x178778: 0x80620002
    ctx->pc = 0x178778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17877c: 0x14450003
    ctx->pc = 0x17877Cu;
    {
        const bool branch_taken_0x17877c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x178780u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 36));
        if (branch_taken_0x17877c) {
            ctx->pc = 0x17878Cu;
            goto label_17878c;
        }
    }
    ctx->pc = 0x178784u;
    // 0x178784: 0x3e00008
    ctx->pc = 0x178784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178788u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178770u: goto label_178770;
            case 0x17878Cu: goto label_17878c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17878Cu;
label_17878c:
    // 0x17878c: 0x64102a
    ctx->pc = 0x17878cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x178790: 0x5440fff7
    ctx->pc = 0x178790u;
    {
        const bool branch_taken_0x178790 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178790) {
            ctx->pc = 0x178794u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x178770u;
            goto label_178770;
        }
    }
    ctx->pc = 0x178798u;
    // 0x178798: 0x3e00008
    ctx->pc = 0x178798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17879Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178770u: goto label_178770;
            case 0x17878Cu: goto label_17878c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1787A0u;
}
