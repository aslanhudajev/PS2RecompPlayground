#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_flyby
// Address: 0x282da8 - 0x282e28
void init_flyby_0x282da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282da8u;

    // 0x282da8: 0x27bdfff0
    ctx->pc = 0x282da8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282dac: 0xffbf0000
    ctx->pc = 0x282dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282db0: 0x3c020035
    ctx->pc = 0x282db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282db4: 0xac40a2e8
    ctx->pc = 0x282db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943464), GPR_U32(ctx, 0));
    // 0x282db8: 0x3c020035
    ctx->pc = 0x282db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282dbc: 0x34048008
    ctx->pc = 0x282dbcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32776));
    // 0x282dc0: 0xc0a0896
    ctx->pc = 0x282DC0u;
    SET_GPR_U32(ctx, 31, 0x282DC8u);
    ctx->pc = 0x282DC4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294941592)));
    ctx->pc = 0x282258u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_attract_mode_0x282258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DC8u; }
    }
    if (ctx->pc != 0x282DC8u) { return; }
    ctx->pc = 0x282DC8u;
    // 0x282dc8: 0xc089994
    ctx->pc = 0x282DC8u;
    SET_GPR_U32(ctx, 31, 0x282DD0u);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DD0u; }
    }
    if (ctx->pc != 0x282DD0u) { return; }
    ctx->pc = 0x282DD0u;
    // 0x282dd0: 0xc098b5c
    ctx->pc = 0x282DD0u;
    SET_GPR_U32(ctx, 31, 0x282DD8u);
    ctx->pc = 0x262D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GauntWorldInit_0x262d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DD8u; }
    }
    if (ctx->pc != 0x282DD8u) { return; }
    ctx->pc = 0x282DD8u;
    // 0x282dd8: 0xc099da2
    ctx->pc = 0x282DD8u;
    SET_GPR_U32(ctx, 31, 0x282DE0u);
    ctx->pc = 0x282DDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x267688u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCamera_0x267688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DE0u; }
    }
    if (ctx->pc != 0x282DE0u) { return; }
    ctx->pc = 0x282DE0u;
    // 0x282de0: 0xc0a0888
    ctx->pc = 0x282DE0u;
    SET_GPR_U32(ctx, 31, 0x282DE8u);
    ctx->pc = 0x282DE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x282220u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_logo_0x282220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DE8u; }
    }
    if (ctx->pc != 0x282DE8u) { return; }
    ctx->pc = 0x282DE8u;
    // 0x282de8: 0x3c020031
    ctx->pc = 0x282de8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282dec: 0xdc420e28
    ctx->pc = 0x282decu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x282df0: 0x30420004
    ctx->pc = 0x282df0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x282df4: 0x10400005
    ctx->pc = 0x282DF4u;
    {
        const bool branch_taken_0x282df4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x282DF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x282df4) {
            ctx->pc = 0x282E0Cu;
            goto label_282e0c;
        }
    }
    ctx->pc = 0x282DFCu;
    // 0x282dfc: 0xdc430e38
    ctx->pc = 0x282dfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3640)));
    // 0x282e00: 0x24040004
    ctx->pc = 0x282e00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x282e04: 0x641825
    ctx->pc = 0x282e04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282e08: 0xfc430e38
    ctx->pc = 0x282e08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 3640), GPR_U64(ctx, 3));
label_282e0c:
    // 0x282e0c: 0x3c020032
    ctx->pc = 0x282e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x282e10: 0xac40fd60
    ctx->pc = 0x282e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966624), GPR_U32(ctx, 0));
    // 0x282e14: 0x3c020035
    ctx->pc = 0x282e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282e18: 0xac40a2d8
    ctx->pc = 0x282e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943448), GPR_U32(ctx, 0));
    // 0x282e1c: 0xdfbf0000
    ctx->pc = 0x282e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282e20: 0x3e00008
    ctx->pc = 0x282E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282E0Cu: goto label_282e0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282E28u;
}
