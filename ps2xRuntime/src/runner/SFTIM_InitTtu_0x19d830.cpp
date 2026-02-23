#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_InitTtu
// Address: 0x19d830 - 0x19d874
void SFTIM_InitTtu_0x19d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_InitTtu");


    ctx->pc = 0x19d830u;

    // 0x19d830: 0x27bdffd0
    ctx->pc = 0x19d830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d834: 0xffb00000
    ctx->pc = 0x19d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d838: 0x80802d
    ctx->pc = 0x19d838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d83c: 0xffb10010
    ctx->pc = 0x19d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d840: 0xffbf0020
    ctx->pc = 0x19d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d844: 0xa0882d
    ctx->pc = 0x19d844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d848: 0xae000000
    ctx->pc = 0x19d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19d84c: 0xc06761e
    ctx->pc = 0x19D84Cu;
    SET_GPR_U32(ctx, 31, 0x19D854u);
    ctx->pc = 0x19D850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x19D878u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitTcode_0x19d878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D854u; }
        else if (ctx->pc != 0x19D854u) { ctx->pc = 0x19D854u; }
    }
    if (ctx->pc != 0x19D854u) { return; }
    ctx->pc = 0x19D854u;
    // 0x19d854: 0x24020001
    ctx->pc = 0x19d854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d858: 0xae110020
    ctx->pc = 0x19d858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x19d85c: 0xae020024
    ctx->pc = 0x19d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x19d860: 0xdfbf0020
    ctx->pc = 0x19d860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d864: 0xdfb10010
    ctx->pc = 0x19d864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d868: 0xdfb00000
    ctx->pc = 0x19d868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d86c: 0x3e00008
    ctx->pc = 0x19D86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D870u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D874u;
}
