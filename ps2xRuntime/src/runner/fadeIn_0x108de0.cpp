#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fadeIn
// Address: 0x108de0 - 0x108e28
void fadeIn_0x108de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108de0u;

    // 0x108de0: 0x27bdffe0
    ctx->pc = 0x108de0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108de4: 0xffb00000
    ctx->pc = 0x108de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108de8: 0x80802d
    ctx->pc = 0x108de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dec: 0xffbf0010
    ctx->pc = 0x108decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108df0: 0xc041fd8
    ctx->pc = 0x108DF0u;
    SET_GPR_U32(ctx, 31, 0x108DF8u);
    ctx->pc = 0x108DF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    ctx->pc = 0x107F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        screenFade_0x107f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108DF8u; }
    }
    if (ctx->pc != 0x108DF8u) { return; }
    ctx->pc = 0x108DF8u;
    // 0x108df8: 0x8f83814c
    ctx->pc = 0x108df8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x108dfc: 0x28620080
    ctx->pc = 0x108dfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 128));
    // 0x108e00: 0x10400003
    ctx->pc = 0x108E00u;
    {
        const bool branch_taken_0x108e00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108E04u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        if (branch_taken_0x108e00) {
            ctx->pc = 0x108E10u;
            goto label_108e10;
        }
    }
    ctx->pc = 0x108E08u;
    // 0x108e08: 0x10000003
    ctx->pc = 0x108E08u;
    {
        const bool branch_taken_0x108e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
        if (branch_taken_0x108e08) {
            ctx->pc = 0x108E18u;
            goto label_108e18;
        }
    }
    ctx->pc = 0x108E10u;
label_108e10:
    // 0x108e10: 0x24020001
    ctx->pc = 0x108e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x108e14: 0xaf8280a4
    ctx->pc = 0x108e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 2));
label_108e18:
    // 0x108e18: 0xdfbf0010
    ctx->pc = 0x108e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108e1c: 0xdfb00000
    ctx->pc = 0x108e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108e20: 0x3e00008
    ctx->pc = 0x108E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108E10u: goto label_108e10;
            case 0x108E18u: goto label_108e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108E28u;
}
