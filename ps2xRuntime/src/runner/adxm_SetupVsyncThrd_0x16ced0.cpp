#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_SetupVsyncThrd
// Address: 0x16ced0 - 0x16cf48
void adxm_SetupVsyncThrd_0x16ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_SetupVsyncThrd");


    ctx->pc = 0x16ced0u;

    // 0x16ced0: 0x8f8781ec
    ctx->pc = 0x16ced0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935020)));
    // 0x16ced4: 0x3c020017
    ctx->pc = 0x16ced4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x16ced8: 0x3c030023
    ctx->pc = 0x16ced8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16cedc: 0x27bdffc0
    ctx->pc = 0x16cedcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cee0: 0x2442ca98
    ctx->pc = 0x16cee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953624));
    // 0x16cee4: 0x246306e0
    ctx->pc = 0x16cee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1760));
    // 0x16cee8: 0x24051000
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16ceec: 0x3c06002e
    ctx->pc = 0x16ceecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x16cef0: 0x24c6d670
    ctx->pc = 0x16cef0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x16cef4: 0xafa20004
    ctx->pc = 0x16cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16cef8: 0xafa30008
    ctx->pc = 0x16cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16cefc: 0xafa5000c
    ctx->pc = 0x16cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x16cf00: 0xafa70014
    ctx->pc = 0x16cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16cf04: 0xafa60010
    ctx->pc = 0x16cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x16cf08: 0xffbf0030
    ctx->pc = 0x16cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16cf0c: 0xc0551b8
    ctx->pc = 0x16CF0Cu;
    SET_GPR_U32(ctx, 31, 0x16CF14u);
    ctx->pc = 0x16CF10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1546E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x1546e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF14u; }
        else if (ctx->pc != 0x16CF14u) { ctx->pc = 0x16CF14u; }
    }
    if (ctx->pc != 0x16CF14u) { return; }
    ctx->pc = 0x16CF14u;
    // 0x16cf14: 0xaf828178
    ctx->pc = 0x16cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934904), GPR_U32(ctx, 2));
    // 0x16cf18: 0x282d
    ctx->pc = 0x16cf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf1c: 0x8f828178
    ctx->pc = 0x16cf1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16cf20: 0x8f848178
    ctx->pc = 0x16cf20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16cf24: 0xc0551c0
    ctx->pc = 0x16CF24u;
    SET_GPR_U32(ctx, 31, 0x16CF2Cu);
    ctx->pc = 0x154700u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF2Cu; }
        else if (ctx->pc != 0x16CF2Cu) { ctx->pc = 0x16CF2Cu; }
    }
    if (ctx->pc != 0x16CF2Cu) { return; }
    ctx->pc = 0x16CF2Cu;
    // 0x16cf2c: 0x3c030023
    ctx->pc = 0x16cf2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16cf30: 0x8f848178
    ctx->pc = 0x16cf30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16cf34: 0xc0551dc
    ctx->pc = 0x16CF34u;
    SET_GPR_U32(ctx, 31, 0x16CF3Cu);
    ctx->pc = 0x16CF38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294960844)));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF3Cu; }
        else if (ctx->pc != 0x16CF3Cu) { ctx->pc = 0x16CF3Cu; }
    }
    if (ctx->pc != 0x16CF3Cu) { return; }
    ctx->pc = 0x16CF3Cu;
    // 0x16cf3c: 0xdfbf0030
    ctx->pc = 0x16cf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cf40: 0x3e00008
    ctx->pc = 0x16CF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CF44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16CF48u;
}
