#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetDecNumSmpl
// Address: 0x172948 - 0x172964
void ADXT_GetDecNumSmpl_0x172948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetDecNumSmpl");


    ctx->pc = 0x172948u;

    // 0x172948: 0x27bdfff0
    ctx->pc = 0x172948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17294c: 0xffbf0000
    ctx->pc = 0x17294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172950: 0xc05b9ba
    ctx->pc = 0x172950u;
    SET_GPR_U32(ctx, 31, 0x172958u);
    ctx->pc = 0x172954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x16E6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetDecNumSmpl_0x16e6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172958u; }
        else if (ctx->pc != 0x172958u) { ctx->pc = 0x172958u; }
    }
    if (ctx->pc != 0x172958u) { return; }
    ctx->pc = 0x172958u;
    // 0x172958: 0xdfbf0000
    ctx->pc = 0x172958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17295c: 0x3e00008
    ctx->pc = 0x17295Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172960u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172964u;
}
