#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_SetupUsrVsyncThrd
// Address: 0x16ce58 - 0x16ced0
void adxm_SetupUsrVsyncThrd_0x16ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_SetupUsrVsyncThrd");


    ctx->pc = 0x16ce58u;

    // 0x16ce58: 0x8f8781ec
    ctx->pc = 0x16ce58u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935020)));
    // 0x16ce5c: 0x3c020017
    ctx->pc = 0x16ce5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x16ce60: 0x3c030023
    ctx->pc = 0x16ce60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16ce64: 0x27bdffc0
    ctx->pc = 0x16ce64u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ce68: 0x2442ca30
    ctx->pc = 0x16ce68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x16ce6c: 0x2463f6e0
    ctx->pc = 0x16ce6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964960));
    // 0x16ce70: 0x24051000
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16ce74: 0x3c06002e
    ctx->pc = 0x16ce74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x16ce78: 0x24c6d670
    ctx->pc = 0x16ce78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x16ce7c: 0xafa20004
    ctx->pc = 0x16ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16ce80: 0xafa30008
    ctx->pc = 0x16ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16ce84: 0xafa5000c
    ctx->pc = 0x16ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x16ce88: 0xafa70014
    ctx->pc = 0x16ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16ce8c: 0xafa60010
    ctx->pc = 0x16ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x16ce90: 0xffbf0030
    ctx->pc = 0x16ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16ce94: 0xc0551b8
    ctx->pc = 0x16CE94u;
    SET_GPR_U32(ctx, 31, 0x16CE9Cu);
    ctx->pc = 0x16CE98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1546E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x1546e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE9Cu; }
        else if (ctx->pc != 0x16CE9Cu) { ctx->pc = 0x16CE9Cu; }
    }
    if (ctx->pc != 0x16CE9Cu) { return; }
    ctx->pc = 0x16CE9Cu;
    // 0x16ce9c: 0xaf828174
    ctx->pc = 0x16ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934900), GPR_U32(ctx, 2));
    // 0x16cea0: 0x282d
    ctx->pc = 0x16cea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cea4: 0x8f828174
    ctx->pc = 0x16cea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x16cea8: 0x8f848174
    ctx->pc = 0x16cea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x16ceac: 0xc0551c0
    ctx->pc = 0x16CEACu;
    SET_GPR_U32(ctx, 31, 0x16CEB4u);
    ctx->pc = 0x154700u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEB4u; }
        else if (ctx->pc != 0x16CEB4u) { ctx->pc = 0x16CEB4u; }
    }
    if (ctx->pc != 0x16CEB4u) { return; }
    ctx->pc = 0x16CEB4u;
    // 0x16ceb4: 0x3c030023
    ctx->pc = 0x16ceb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16ceb8: 0x8f848174
    ctx->pc = 0x16ceb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x16cebc: 0xc0551dc
    ctx->pc = 0x16CEBCu;
    SET_GPR_U32(ctx, 31, 0x16CEC4u);
    ctx->pc = 0x16CEC0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294960840)));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEC4u; }
        else if (ctx->pc != 0x16CEC4u) { ctx->pc = 0x16CEC4u; }
    }
    if (ctx->pc != 0x16CEC4u) { return; }
    ctx->pc = 0x16CEC4u;
    // 0x16cec4: 0xdfbf0030
    ctx->pc = 0x16cec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cec8: 0x3e00008
    ctx->pc = 0x16CEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16CED0u;
}
