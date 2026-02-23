#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: kputs
// Address: 0x155b80 - 0x155ba4
void kputs_0x155b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("kputs");


    ctx->pc = 0x155b80u;

    // 0x155b80: 0x27bdffe0
    ctx->pc = 0x155b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155b84: 0xafa40000
    ctx->pc = 0x155b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x155b88: 0x3a0282d
    ctx->pc = 0x155b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b8c: 0xffbf0010
    ctx->pc = 0x155b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155b90: 0xc055344
    ctx->pc = 0x155B90u;
    SET_GPR_U32(ctx, 31, 0x155B98u);
    ctx->pc = 0x155B94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x154D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        Deci2Call_0x154d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155B98u; }
        else if (ctx->pc != 0x155B98u) { ctx->pc = 0x155B98u; }
    }
    if (ctx->pc != 0x155B98u) { return; }
    ctx->pc = 0x155B98u;
    // 0x155b98: 0xdfbf0010
    ctx->pc = 0x155b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155b9c: 0x3e00008
    ctx->pc = 0x155B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155BA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155BA4u;
}
