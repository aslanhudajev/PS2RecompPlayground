#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VSync2
// Address: 0x154da0 - 0x154e00
void VSync2_0x154da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VSync2");


    ctx->pc = 0x154da0u;

    // 0x154da0: 0x27bdffe0
    ctx->pc = 0x154da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154da4: 0xffbf0010
    ctx->pc = 0x154da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x154da8: 0x3a0202d
    ctx->pc = 0x154da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154dac: 0xafa00000
    ctx->pc = 0x154dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x154db0: 0xc055314
    ctx->pc = 0x154DB0u;
    SET_GPR_U32(ctx, 31, 0x154DB8u);
    ctx->pc = 0x154DB4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x154C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVSyncFlag_0x154c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DB8u; }
        else if (ctx->pc != 0x154DB8u) { ctx->pc = 0x154DB8u; }
    }
    if (ctx->pc != 0x154DB8u) { return; }
    ctx->pc = 0x154DB8u;
    // 0x154db8: 0x3c021000
    ctx->pc = 0x154db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x154dbc: 0x24030004
    ctx->pc = 0x154dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x154dc0: 0x3442f000
    ctx->pc = 0x154dc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x154dc4: 0xac430000
    ctx->pc = 0x154dc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_154dc8:
    // 0x154dc8: 0x3c021001
    ctx->pc = 0x154dc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4097 << 16));
    // 0x154dcc: 0x8c42f000
    ctx->pc = 0x154dccu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294963200))); // MMIO: 0x1000f000
    // 0x154dd0: 0x30420004
    ctx->pc = 0x154dd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x154dd4: 0x14400004
    ctx->pc = 0x154DD4u;
    {
        const bool branch_taken_0x154dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x154DD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x154dd4) {
            ctx->pc = 0x154DE8u;
            goto label_154de8;
        }
    }
    ctx->pc = 0x154DDCu;
    // 0x154ddc: 0x8fa20000
    ctx->pc = 0x154ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154de0: 0x1040fff9
    ctx->pc = 0x154DE0u;
    {
        const bool branch_taken_0x154de0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x154DE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x154de0) {
            ctx->pc = 0x154DC8u;
            goto label_154dc8;
        }
    }
    ctx->pc = 0x154DE8u;
label_154de8:
    // 0x154de8: 0xdfbf0010
    ctx->pc = 0x154de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154dec: 0x3c011001
    ctx->pc = 0x154decu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x154df0: 0xac22f000
    ctx->pc = 0x154df0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294963200), GPR_U32(ctx, 2)); // MMIO: 0x1000f000
    // 0x154df4: 0xdfa20008
    ctx->pc = 0x154df4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x154df8: 0x3e00008
    ctx->pc = 0x154DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154DFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154DC8u: goto label_154dc8;
            case 0x154DE8u: goto label_154de8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154E00u;
}
