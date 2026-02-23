#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_SetupSafeThrd
// Address: 0x16cdc0 - 0x16ce54
void adxm_SetupSafeThrd_0x16cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_SetupSafeThrd");


    ctx->pc = 0x16cdc0u;

    // 0x16cdc0: 0x8f8781ec
    ctx->pc = 0x16cdc0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935020)));
    // 0x16cdc4: 0x3c020017
    ctx->pc = 0x16cdc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x16cdc8: 0x3c030023
    ctx->pc = 0x16cdc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16cdcc: 0x27bdffc0
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cdd0: 0x2442c9e8
    ctx->pc = 0x16cdd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953448));
    // 0x16cdd4: 0x2463e6e0
    ctx->pc = 0x16cdd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960864));
    // 0x16cdd8: 0x24051000
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16cddc: 0x3c06002e
    ctx->pc = 0x16cddcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x16cde0: 0x24c6d670
    ctx->pc = 0x16cde0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x16cde4: 0xffbf0030
    ctx->pc = 0x16cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16cde8: 0x3a0202d
    ctx->pc = 0x16cde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdec: 0xafa20004
    ctx->pc = 0x16cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16cdf0: 0xafa30008
    ctx->pc = 0x16cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16cdf4: 0xafa5000c
    ctx->pc = 0x16cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x16cdf8: 0xafa70014
    ctx->pc = 0x16cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16cdfc: 0xc0551b8
    ctx->pc = 0x16CDFCu;
    SET_GPR_U32(ctx, 31, 0x16CE04u);
    ctx->pc = 0x16CE00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x1546E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x1546e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE04u; }
        else if (ctx->pc != 0x16CE04u) { ctx->pc = 0x16CE04u; }
    }
    if (ctx->pc != 0x16CE04u) { return; }
    ctx->pc = 0x16CE04u;
    // 0x16ce04: 0xaf828170
    ctx->pc = 0x16ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934896), GPR_U32(ctx, 2));
    // 0x16ce08: 0x282d
    ctx->pc = 0x16ce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce0c: 0x8f828170
    ctx->pc = 0x16ce0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16ce10: 0x8f848170
    ctx->pc = 0x16ce10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16ce14: 0xc0551c0
    ctx->pc = 0x16CE14u;
    SET_GPR_U32(ctx, 31, 0x16CE1Cu);
    ctx->pc = 0x154700u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE1Cu; }
        else if (ctx->pc != 0x16CE1Cu) { ctx->pc = 0x16CE1Cu; }
    }
    if (ctx->pc != 0x16CE1Cu) { return; }
    ctx->pc = 0x16CE1Cu;
    // 0x16ce1c: 0x8f838170
    ctx->pc = 0x16ce1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16ce20: 0x10600006
    ctx->pc = 0x16CE20u;
    {
        const bool branch_taken_0x16ce20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CE24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x16ce20) {
            ctx->pc = 0x16CE3Cu;
            goto label_16ce3c;
        }
    }
    ctx->pc = 0x16CE28u;
    // 0x16ce28: 0x8f848170
    ctx->pc = 0x16ce28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16ce2c: 0xc05b358
    ctx->pc = 0x16CE2Cu;
    SET_GPR_U32(ctx, 31, 0x16CE34u);
    ctx->pc = 0x16CD60u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SuspendThread_0x16cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE34u; }
        else if (ctx->pc != 0x16CE34u) { ctx->pc = 0x16CE34u; }
    }
    if (ctx->pc != 0x16CE34u) { return; }
    ctx->pc = 0x16CE34u;
    // 0x16ce34: 0x8f838170
    ctx->pc = 0x16ce34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16ce38: 0x3c020023
    ctx->pc = 0x16ce38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_16ce3c:
    // 0x16ce3c: 0x8f848170
    ctx->pc = 0x16ce3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16ce40: 0xc0551dc
    ctx->pc = 0x16CE40u;
    SET_GPR_U32(ctx, 31, 0x16CE48u);
    ctx->pc = 0x16CE44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294960836)));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE48u; }
        else if (ctx->pc != 0x16CE48u) { ctx->pc = 0x16CE48u; }
    }
    if (ctx->pc != 0x16CE48u) { return; }
    ctx->pc = 0x16CE48u;
    // 0x16ce48: 0xdfbf0030
    ctx->pc = 0x16ce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ce4c: 0x3e00008
    ctx->pc = 0x16CE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CE50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CE3Cu: goto label_16ce3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CE54u;
}
