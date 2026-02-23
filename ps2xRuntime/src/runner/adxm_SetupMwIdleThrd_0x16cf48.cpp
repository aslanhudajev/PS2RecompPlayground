#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_SetupMwIdleThrd
// Address: 0x16cf48 - 0x16cfd0
void adxm_SetupMwIdleThrd_0x16cf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_SetupMwIdleThrd");


    ctx->pc = 0x16cf48u;

    // 0x16cf48: 0x8f8781ec
    ctx->pc = 0x16cf48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294935020)));
    // 0x16cf4c: 0x3c020017
    ctx->pc = 0x16cf4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x16cf50: 0x3c030023
    ctx->pc = 0x16cf50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16cf54: 0x27bdffc0
    ctx->pc = 0x16cf54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16cf58: 0x2442cb20
    ctx->pc = 0x16cf58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953760));
    // 0x16cf5c: 0x246316e0
    ctx->pc = 0x16cf5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5856));
    // 0x16cf60: 0x24052000
    ctx->pc = 0x16cf60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x16cf64: 0x3c06002e
    ctx->pc = 0x16cf64u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x16cf68: 0x24c6d670
    ctx->pc = 0x16cf68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x16cf6c: 0xffbf0030
    ctx->pc = 0x16cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16cf70: 0x3a0202d
    ctx->pc = 0x16cf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf74: 0xafa20004
    ctx->pc = 0x16cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16cf78: 0xafa30008
    ctx->pc = 0x16cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16cf7c: 0xafa5000c
    ctx->pc = 0x16cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x16cf80: 0xafa70014
    ctx->pc = 0x16cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16cf84: 0xc0551b8
    ctx->pc = 0x16CF84u;
    SET_GPR_U32(ctx, 31, 0x16CF8Cu);
    ctx->pc = 0x16CF88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x1546E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x1546e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF8Cu; }
        else if (ctx->pc != 0x16CF8Cu) { ctx->pc = 0x16CF8Cu; }
    }
    if (ctx->pc != 0x16CF8Cu) { return; }
    ctx->pc = 0x16CF8Cu;
    // 0x16cf8c: 0xaf828180
    ctx->pc = 0x16cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 2));
    // 0x16cf90: 0x282d
    ctx->pc = 0x16cf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf94: 0x8f828180
    ctx->pc = 0x16cf94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16cf98: 0x8f848180
    ctx->pc = 0x16cf98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16cf9c: 0xc0551c0
    ctx->pc = 0x16CF9Cu;
    SET_GPR_U32(ctx, 31, 0x16CFA4u);
    ctx->pc = 0x154700u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFA4u; }
        else if (ctx->pc != 0x16CFA4u) { ctx->pc = 0x16CFA4u; }
    }
    if (ctx->pc != 0x16CFA4u) { return; }
    ctx->pc = 0x16CFA4u;
    // 0x16cfa4: 0x3c030023
    ctx->pc = 0x16cfa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16cfa8: 0x8f848180
    ctx->pc = 0x16cfa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16cfac: 0xc0551dc
    ctx->pc = 0x16CFACu;
    SET_GPR_U32(ctx, 31, 0x16CFB4u);
    ctx->pc = 0x16CFB0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294960852)));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFB4u; }
        else if (ctx->pc != 0x16CFB4u) { ctx->pc = 0x16CFB4u; }
    }
    if (ctx->pc != 0x16CFB4u) { return; }
    ctx->pc = 0x16CFB4u;
    // 0x16cfb4: 0x8f848180
    ctx->pc = 0x16cfb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16cfb8: 0xc05b358
    ctx->pc = 0x16CFB8u;
    SET_GPR_U32(ctx, 31, 0x16CFC0u);
    ctx->pc = 0x16CD60u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SuspendThread_0x16cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CFC0u; }
        else if (ctx->pc != 0x16CFC0u) { ctx->pc = 0x16CFC0u; }
    }
    if (ctx->pc != 0x16CFC0u) { return; }
    ctx->pc = 0x16CFC0u;
    // 0x16cfc0: 0x8f838180
    ctx->pc = 0x16cfc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16cfc4: 0xdfbf0030
    ctx->pc = 0x16cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cfc8: 0x3e00008
    ctx->pc = 0x16CFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CFCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16CFD0u;
}
