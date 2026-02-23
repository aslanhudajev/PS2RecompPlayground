#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFCON_IsEndcodeSkip
// Address: 0x1929f0 - 0x192a10
void SFCON_IsEndcodeSkip_0x1929f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFCON_IsEndcodeSkip");


    ctx->pc = 0x1929f0u;

    // 0x1929f0: 0x27bdfff0
    ctx->pc = 0x1929f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1929f4: 0xffbf0000
    ctx->pc = 0x1929f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1929f8: 0xc0674c2
    ctx->pc = 0x1929F8u;
    SET_GPR_U32(ctx, 31, 0x192A00u);
    ctx->pc = 0x1929FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A00u; }
        else if (ctx->pc != 0x192A00u) { ctx->pc = 0x192A00u; }
    }
    if (ctx->pc != 0x192A00u) { return; }
    ctx->pc = 0x192A00u;
    // 0x192a00: 0xdfbf0000
    ctx->pc = 0x192a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a04: 0x2102b
    ctx->pc = 0x192a04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x192a08: 0x3e00008
    ctx->pc = 0x192A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192A10u;
}
