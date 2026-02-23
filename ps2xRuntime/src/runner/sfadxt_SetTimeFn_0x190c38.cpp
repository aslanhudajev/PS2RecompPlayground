#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_SetTimeFn
// Address: 0x190c38 - 0x190c8c
void sfadxt_SetTimeFn_0x190c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_SetTimeFn");


    ctx->pc = 0x190c38u;

    // 0x190c38: 0x27bdffd0
    ctx->pc = 0x190c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190c3c: 0xffb00010
    ctx->pc = 0x190c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x190c40: 0x80802d
    ctx->pc = 0x190c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c44: 0xffbf0020
    ctx->pc = 0x190c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190c48: 0xc064f3a
    ctx->pc = 0x190C48u;
    SET_GPR_U32(ctx, 31, 0x190C50u);
    ctx->pc = 0x190C4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C50u; }
        else if (ctx->pc != 0x190C50u) { ctx->pc = 0x190C50u; }
    }
    if (ctx->pc != 0x190C50u) { return; }
    ctx->pc = 0x190C50u;
    // 0x190c50: 0x200202d
    ctx->pc = 0x190c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c54: 0x2405000f
    ctx->pc = 0x190c54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x190c58: 0xc067464
    ctx->pc = 0x190C58u;
    SET_GPR_U32(ctx, 31, 0x190C60u);
    ctx->pc = 0x190C5Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C60u; }
        else if (ctx->pc != 0x190C60u) { ctx->pc = 0x190C60u; }
    }
    if (ctx->pc != 0x190C60u) { return; }
    ctx->pc = 0x190C60u;
    // 0x190c60: 0x3c050019
    ctx->pc = 0x190c60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)25 << 16));
    // 0x190c64: 0x200202d
    ctx->pc = 0x190c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c68: 0x24a50c90
    ctx->pc = 0x190c68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3216));
    // 0x190c6c: 0xc0678be
    ctx->pc = 0x190C6Cu;
    SET_GPR_U32(ctx, 31, 0x190C74u);
    ctx->pc = 0x190C70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19E2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetTimeFn_0x19e2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C74u; }
        else if (ctx->pc != 0x190C74u) { ctx->pc = 0x190C74u; }
    }
    if (ctx->pc != 0x190C74u) { return; }
    ctx->pc = 0x190C74u;
    // 0x190c74: 0xc064f44
    ctx->pc = 0x190C74u;
    SET_GPR_U32(ctx, 31, 0x190C7Cu);
    ctx->pc = 0x190C78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190C7Cu; }
        else if (ctx->pc != 0x190C7Cu) { ctx->pc = 0x190C7Cu; }
    }
    if (ctx->pc != 0x190C7Cu) { return; }
    ctx->pc = 0x190C7Cu;
    // 0x190c7c: 0xdfbf0020
    ctx->pc = 0x190c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190c80: 0xdfb00010
    ctx->pc = 0x190c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c84: 0x3e00008
    ctx->pc = 0x190C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190C8Cu;
}
