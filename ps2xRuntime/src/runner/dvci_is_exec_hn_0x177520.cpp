#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_is_exec_hn
// Address: 0x177520 - 0x17756c
void dvci_is_exec_hn_0x177520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_is_exec_hn");


    ctx->pc = 0x177520u;

    // 0x177520: 0x3c020024
    ctx->pc = 0x177520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x177524: 0x202d
    ctx->pc = 0x177524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177528: 0x244393d8
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939608));
    // 0x17752c: 0x24060001
    ctx->pc = 0x17752cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177530: 0x24050002
    ctx->pc = 0x177530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x177534: 0x0
    ctx->pc = 0x177534u;
    // NOP
label_177538:
    // 0x177538: 0x80620000
    ctx->pc = 0x177538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17753c: 0x14460006
    ctx->pc = 0x17753Cu;
    {
        const bool branch_taken_0x17753c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x177540u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x17753c) {
            ctx->pc = 0x177558u;
            goto label_177558;
        }
    }
    ctx->pc = 0x177544u;
    // 0x177544: 0x80620002
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x177548: 0x14450004
    ctx->pc = 0x177548u;
    {
        const bool branch_taken_0x177548 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x17754Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 40));
        if (branch_taken_0x177548) {
            ctx->pc = 0x17755Cu;
            goto label_17755c;
        }
    }
    ctx->pc = 0x177550u;
    // 0x177550: 0x3e00008
    ctx->pc = 0x177550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177538u: goto label_177538;
            case 0x177558u: goto label_177558;
            case 0x17755Cu: goto label_17755c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177558u;
label_177558:
    // 0x177558: 0x28820028
    ctx->pc = 0x177558u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 40));
label_17755c:
    // 0x17755c: 0x1440fff6
    ctx->pc = 0x17755Cu;
    {
        const bool branch_taken_0x17755c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177560u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x17755c) {
            ctx->pc = 0x177538u;
            goto label_177538;
        }
    }
    ctx->pc = 0x177564u;
    // 0x177564: 0x3e00008
    ctx->pc = 0x177564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177568u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177538u: goto label_177538;
            case 0x177558u: goto label_177558;
            case 0x17755Cu: goto label_17755c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17756Cu;
}
