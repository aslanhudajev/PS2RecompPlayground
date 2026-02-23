#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiGetNumTr
// Address: 0x177c78 - 0x177cb0
void dvCiGetNumTr_0x177c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiGetNumTr");


    ctx->pc = 0x177c78u;

    // 0x177c78: 0x27bdfff0
    ctx->pc = 0x177c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177c7c: 0x14800007
    ctx->pc = 0x177C7Cu;
    {
        const bool branch_taken_0x177c7c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x177C80u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x177c7c) {
            ctx->pc = 0x177C9Cu;
            goto label_177c9c;
        }
    }
    ctx->pc = 0x177C84u;
    // 0x177c84: 0x3c05002c
    ctx->pc = 0x177c84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177c88: 0x202d
    ctx->pc = 0x177c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c8c: 0xc05dd3c
    ctx->pc = 0x177C8Cu;
    SET_GPR_U32(ctx, 31, 0x177C94u);
    ctx->pc = 0x177C90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947840));
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C94u; }
        else if (ctx->pc != 0x177C94u) { ctx->pc = 0x177C94u; }
    }
    if (ctx->pc != 0x177C94u) { return; }
    ctx->pc = 0x177C94u;
    // 0x177c94: 0x10000003
    ctx->pc = 0x177C94u;
    {
        const bool branch_taken_0x177c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177C98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177c94) {
            ctx->pc = 0x177CA4u;
            goto label_177ca4;
        }
    }
    ctx->pc = 0x177C9Cu;
label_177c9c:
    // 0x177c9c: 0x8c820010
    ctx->pc = 0x177c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x177ca0: 0x212c0
    ctx->pc = 0x177ca0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
label_177ca4:
    // 0x177ca4: 0xdfbf0000
    ctx->pc = 0x177ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ca8: 0x3e00008
    ctx->pc = 0x177CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177CACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177C9Cu: goto label_177c9c;
            case 0x177CA4u: goto label_177ca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177CB0u;
}
