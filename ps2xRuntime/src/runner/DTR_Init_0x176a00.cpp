#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTR_Init
// Address: 0x176a00 - 0x176a58
void DTR_Init_0x176a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTR_Init");


    ctx->pc = 0x176a00u;

    // 0x176a00: 0x27bdfff0
    ctx->pc = 0x176a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176a04: 0x3c04002c
    ctx->pc = 0x176a04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x176a08: 0x8f858278
    ctx->pc = 0x176a08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935160)));
    // 0x176a0c: 0xffbf0000
    ctx->pc = 0x176a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176a10: 0xc05114a
    ctx->pc = 0x176A10u;
    SET_GPR_U32(ctx, 31, 0x176A18u);
    ctx->pc = 0x176A14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947136));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A18u; }
        else if (ctx->pc != 0x176A18u) { ctx->pc = 0x176A18u; }
    }
    if (ctx->pc != 0x176A18u) { return; }
    ctx->pc = 0x176A18u;
    // 0x176a18: 0x8f828278
    ctx->pc = 0x176a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935160)));
    // 0x176a1c: 0x14400008
    ctx->pc = 0x176A1Cu;
    {
        const bool branch_taken_0x176a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176A20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x176a1c) {
            ctx->pc = 0x176A40u;
            goto label_176a40;
        }
    }
    ctx->pc = 0x176A24u;
    // 0x176a24: 0x3c040024
    ctx->pc = 0x176a24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x176a28: 0x282d
    ctx->pc = 0x176a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a2c: 0x248487b0
    ctx->pc = 0x176a2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936496));
    // 0x176a30: 0xc050cfe
    ctx->pc = 0x176A30u;
    SET_GPR_U32(ctx, 31, 0x176A38u);
    ctx->pc = 0x176A34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A38u; }
        else if (ctx->pc != 0x176A38u) { ctx->pc = 0x176A38u; }
    }
    if (ctx->pc != 0x176A38u) { return; }
    ctx->pc = 0x176A38u;
    // 0x176a38: 0x8f828278
    ctx->pc = 0x176a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935160)));
    // 0x176a3c: 0x24420001
    ctx->pc = 0x176a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_176a40:
    // 0x176a40: 0x3c04002c
    ctx->pc = 0x176a40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x176a44: 0xdfbf0000
    ctx->pc = 0x176a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176a48: 0x2484b158
    ctx->pc = 0x176a48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947160));
    // 0x176a4c: 0xaf828278
    ctx->pc = 0x176a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935160), GPR_U32(ctx, 2));
    // 0x176a50: 0x805114a
    ctx->pc = 0x176A50u;
    ctx->pc = 0x176A54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x144528u;
    printf_0x144528(rdram, ctx, runtime); return;
    ctx->pc = 0x176A58u;
}
