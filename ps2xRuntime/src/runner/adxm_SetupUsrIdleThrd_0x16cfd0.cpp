#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_SetupUsrIdleThrd
// Address: 0x16cfd0 - 0x16d058
void adxm_SetupUsrIdleThrd_0x16cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_SetupUsrIdleThrd");


    ctx->pc = 0x16cfd0u;

    // 0x16cfd0: 0x8f8781ec
    ctx->pc = 0x16cfd0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935020)));
    // 0x16cfd4: 0x3c020017
    ctx->pc = 0x16cfd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x16cfd8: 0x3c030023
    ctx->pc = 0x16cfd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16cfdc: 0x27bdffc0
    ctx->pc = 0x16cfdcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cfe0: 0x2442cbd0
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953936));
    // 0x16cfe4: 0x246336e0
    ctx->pc = 0x16cfe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14048));
    // 0x16cfe8: 0x24052000
    ctx->pc = 0x16cfe8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x16cfec: 0x3c06002e
    ctx->pc = 0x16cfecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x16cff0: 0x24c6d670
    ctx->pc = 0x16cff0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x16cff4: 0xffbf0030
    ctx->pc = 0x16cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16cff8: 0x3a0202d
    ctx->pc = 0x16cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cffc: 0xafa20004
    ctx->pc = 0x16cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16d000: 0xafa30008
    ctx->pc = 0x16d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16d004: 0xafa5000c
    ctx->pc = 0x16d004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x16d008: 0xafa70014
    ctx->pc = 0x16d008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16d00c: 0xc0551b8
    ctx->pc = 0x16D00Cu;
    SET_GPR_U32(ctx, 31, 0x16D014u);
    ctx->pc = 0x16D010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x1546E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x1546e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D014u; }
        else if (ctx->pc != 0x16D014u) { ctx->pc = 0x16D014u; }
    }
    if (ctx->pc != 0x16D014u) { return; }
    ctx->pc = 0x16D014u;
    // 0x16d014: 0xaf828184
    ctx->pc = 0x16d014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934916), GPR_U32(ctx, 2));
    // 0x16d018: 0x282d
    ctx->pc = 0x16d018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d01c: 0x8f828184
    ctx->pc = 0x16d01cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d020: 0x8f848184
    ctx->pc = 0x16d020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d024: 0xc0551c0
    ctx->pc = 0x16D024u;
    SET_GPR_U32(ctx, 31, 0x16D02Cu);
    ctx->pc = 0x154700u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D02Cu; }
        else if (ctx->pc != 0x16D02Cu) { ctx->pc = 0x16D02Cu; }
    }
    if (ctx->pc != 0x16D02Cu) { return; }
    ctx->pc = 0x16D02Cu;
    // 0x16d02c: 0x3c030023
    ctx->pc = 0x16d02cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16d030: 0x8f848184
    ctx->pc = 0x16d030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d034: 0xc0551dc
    ctx->pc = 0x16D034u;
    SET_GPR_U32(ctx, 31, 0x16D03Cu);
    ctx->pc = 0x16D038u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294960856)));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D03Cu; }
        else if (ctx->pc != 0x16D03Cu) { ctx->pc = 0x16D03Cu; }
    }
    if (ctx->pc != 0x16D03Cu) { return; }
    ctx->pc = 0x16D03Cu;
    // 0x16d03c: 0x8f848184
    ctx->pc = 0x16d03cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d040: 0xc05b358
    ctx->pc = 0x16D040u;
    SET_GPR_U32(ctx, 31, 0x16D048u);
    ctx->pc = 0x16CD60u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SuspendThread_0x16cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D048u; }
        else if (ctx->pc != 0x16D048u) { ctx->pc = 0x16D048u; }
    }
    if (ctx->pc != 0x16D048u) { return; }
    ctx->pc = 0x16D048u;
    // 0x16d048: 0x8f838180
    ctx->pc = 0x16d048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16d04c: 0xdfbf0030
    ctx->pc = 0x16d04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d050: 0x3e00008
    ctx->pc = 0x16D050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D054u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D058u;
}
