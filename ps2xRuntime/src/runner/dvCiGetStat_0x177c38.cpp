#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiGetStat
// Address: 0x177c38 - 0x177c6c
void dvCiGetStat_0x177c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiGetStat");


    ctx->pc = 0x177c38u;

    // 0x177c38: 0x27bdfff0
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177c3c: 0x14800007
    ctx->pc = 0x177C3Cu;
    {
        const bool branch_taken_0x177c3c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x177C40u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x177c3c) {
            ctx->pc = 0x177C5Cu;
            goto label_177c5c;
        }
    }
    ctx->pc = 0x177C44u;
    // 0x177c44: 0x3c05002c
    ctx->pc = 0x177c44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177c48: 0x202d
    ctx->pc = 0x177c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c4c: 0xc05dd3c
    ctx->pc = 0x177C4Cu;
    SET_GPR_U32(ctx, 31, 0x177C54u);
    ctx->pc = 0x177C50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947840));
    ctx->pc = 0x1774F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_call_errfn_0x1774f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C54u; }
        else if (ctx->pc != 0x177C54u) { ctx->pc = 0x177C54u; }
    }
    if (ctx->pc != 0x177C54u) { return; }
    ctx->pc = 0x177C54u;
    // 0x177c54: 0x10000002
    ctx->pc = 0x177C54u;
    {
        const bool branch_taken_0x177c54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177C58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177c54) {
            ctx->pc = 0x177C60u;
            goto label_177c60;
        }
    }
    ctx->pc = 0x177C5Cu;
label_177c5c:
    // 0x177c5c: 0x80820002
    ctx->pc = 0x177c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_177c60:
    // 0x177c60: 0xdfbf0000
    ctx->pc = 0x177c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177c64: 0x3e00008
    ctx->pc = 0x177C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177C5Cu: goto label_177c5c;
            case 0x177C60u: goto label_177c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177C6Cu;
}
