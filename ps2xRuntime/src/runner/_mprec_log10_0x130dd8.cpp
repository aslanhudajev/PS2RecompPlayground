#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _mprec_log10
// Address: 0x130dd8 - 0x130e44
void _mprec_log10_0x130dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130dd8u;

    // 0x130dd8: 0x27bdffe0
    ctx->pc = 0x130dd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130ddc: 0xffb00000
    ctx->pc = 0x130ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130de0: 0x80802d
    ctx->pc = 0x130de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130de4: 0x3404ffc0
    ctx->pc = 0x130de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)65472);
    // 0x130de8: 0x423bc
    ctx->pc = 0x130de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x130dec: 0x2a020018
    ctx->pc = 0x130decu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 24));
    // 0x130df0: 0x10400007
    ctx->pc = 0x130DF0u;
    {
        const bool branch_taken_0x130df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130DF4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x130df0) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130DF8u;
    // 0x130df8: 0x3c020017
    ctx->pc = 0x130df8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x130dfc: 0x1018c0
    ctx->pc = 0x130dfcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x130e00: 0x244259a0
    ctx->pc = 0x130e00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22944));
    // 0x130e04: 0x621821
    ctx->pc = 0x130e04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130e08: 0x1000000a
    ctx->pc = 0x130E08u;
    {
        const bool branch_taken_0x130e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130E0Cu;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x130e08) {
            ctx->pc = 0x130E34u;
            goto label_130e34;
        }
    }
    ctx->pc = 0x130E10u;
label_130e10:
    // 0x130e10: 0x1a000008
    ctx->pc = 0x130E10u;
    {
        const bool branch_taken_0x130e10 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x130E14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130e10) {
            ctx->pc = 0x130E34u;
            goto label_130e34;
        }
    }
    ctx->pc = 0x130E18u;
label_130e18:
    // 0x130e18: 0x34058048
    ctx->pc = 0x130e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32840);
    // 0x130e1c: 0x52bfc
    ctx->pc = 0x130e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x130e20: 0xc04a338
    ctx->pc = 0x130E20u;
    SET_GPR_U32(ctx, 31, 0x130E28u);
    ctx->pc = 0x130E24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x128CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E28u; }
    }
    if (ctx->pc != 0x130E28u) { return; }
    ctx->pc = 0x130E28u;
    // 0x130e28: 0x1e00fffb
    ctx->pc = 0x130E28u;
    {
        const bool branch_taken_0x130e28 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x130E2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130e28) {
            ctx->pc = 0x130E18u;
            goto label_130e18;
        }
    }
    ctx->pc = 0x130E30u;
    // 0x130e30: 0x80102d
    ctx->pc = 0x130e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_130e34:
    // 0x130e34: 0xdfbf0010
    ctx->pc = 0x130e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130e38: 0xdfb00000
    ctx->pc = 0x130e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130e3c: 0x3e00008
    ctx->pc = 0x130E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130E10u: goto label_130e10;
            case 0x130E18u: goto label_130e18;
            case 0x130E34u: goto label_130e34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E44u;
}
