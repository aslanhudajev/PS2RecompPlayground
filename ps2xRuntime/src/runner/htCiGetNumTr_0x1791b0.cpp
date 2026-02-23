#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiGetNumTr
// Address: 0x1791b0 - 0x1791e8
void htCiGetNumTr_0x1791b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiGetNumTr");


    ctx->pc = 0x1791b0u;

    // 0x1791b0: 0x27bdfff0
    ctx->pc = 0x1791b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1791b4: 0x14800007
    ctx->pc = 0x1791B4u;
    {
        const bool branch_taken_0x1791b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1791B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1791b4) {
            ctx->pc = 0x1791D4u;
            goto label_1791d4;
        }
    }
    ctx->pc = 0x1791BCu;
    // 0x1791bc: 0x3c05002c
    ctx->pc = 0x1791bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1791c0: 0x202d
    ctx->pc = 0x1791c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791c4: 0xc05e1ca
    ctx->pc = 0x1791C4u;
    SET_GPR_U32(ctx, 31, 0x1791CCu);
    ctx->pc = 0x1791C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294948912));
    ctx->pc = 0x178728u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_call_errfn_0x178728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1791CCu; }
        else if (ctx->pc != 0x1791CCu) { ctx->pc = 0x1791CCu; }
    }
    if (ctx->pc != 0x1791CCu) { return; }
    ctx->pc = 0x1791CCu;
    // 0x1791cc: 0x10000003
    ctx->pc = 0x1791CCu;
    {
        const bool branch_taken_0x1791cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1791D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1791cc) {
            ctx->pc = 0x1791DCu;
            goto label_1791dc;
        }
    }
    ctx->pc = 0x1791D4u;
label_1791d4:
    // 0x1791d4: 0x8c820020
    ctx->pc = 0x1791d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1791d8: 0x212c0
    ctx->pc = 0x1791d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
label_1791dc:
    // 0x1791dc: 0xdfbf0000
    ctx->pc = 0x1791dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1791e0: 0x3e00008
    ctx->pc = 0x1791E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1791E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1791D4u: goto label_1791d4;
            case 0x1791DCu: goto label_1791dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1791E8u;
}
