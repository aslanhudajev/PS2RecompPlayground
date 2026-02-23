#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_CheckSpsd
// Address: 0x168ab8 - 0x168ae0
void ADXB_CheckSpsd_0x168ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_CheckSpsd");


    ctx->pc = 0x168ab8u;

    // 0x168ab8: 0x27bdfff0
    ctx->pc = 0x168ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168abc: 0x3c05002d
    ctx->pc = 0x168abcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x168ac0: 0xffbf0000
    ctx->pc = 0x168ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168ac4: 0x24a55730
    ctx->pc = 0x168ac4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22320));
    // 0x168ac8: 0xc050c6a
    ctx->pc = 0x168AC8u;
    SET_GPR_U32(ctx, 31, 0x168AD0u);
    ctx->pc = 0x168ACCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AD0u; }
        else if (ctx->pc != 0x168AD0u) { ctx->pc = 0x168AD0u; }
    }
    if (ctx->pc != 0x168AD0u) { return; }
    ctx->pc = 0x168AD0u;
    // 0x168ad0: 0xdfbf0000
    ctx->pc = 0x168ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ad4: 0x2c420001
    ctx->pc = 0x168ad4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x168ad8: 0x3e00008
    ctx->pc = 0x168AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168ADCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168AE0u;
}
