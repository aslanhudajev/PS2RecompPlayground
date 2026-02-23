#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_Stop
// Address: 0x17b768 - 0x17b798
void PS2RNA_Stop_0x17b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_Stop");


    ctx->pc = 0x17b768u;

    // 0x17b768: 0x27bdffe0
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b76c: 0x282d
    ctx->pc = 0x17b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b770: 0xffb00000
    ctx->pc = 0x17b770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b774: 0xffbf0010
    ctx->pc = 0x17b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b778: 0xc05ede6
    ctx->pc = 0x17B778u;
    SET_GPR_U32(ctx, 31, 0x17B780u);
    ctx->pc = 0x17B77Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17B798u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_SetTransSw_0x17b798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B780u; }
        else if (ctx->pc != 0x17B780u) { ctx->pc = 0x17B780u; }
    }
    if (ctx->pc != 0x17B780u) { return; }
    ctx->pc = 0x17B780u;
    // 0x17b780: 0x200202d
    ctx->pc = 0x17b780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b784: 0xdfbf0010
    ctx->pc = 0x17b784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b788: 0xdfb00000
    ctx->pc = 0x17b788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b78c: 0x282d
    ctx->pc = 0x17b78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b790: 0x805ee28
    ctx->pc = 0x17B790u;
    ctx->pc = 0x17B794u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17B8A0u;
    PS2RNA_SetPlaySw_0x17b8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x17B798u;
}
