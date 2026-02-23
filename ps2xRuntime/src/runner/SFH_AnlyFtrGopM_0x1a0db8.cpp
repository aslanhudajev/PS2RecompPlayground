#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyFtrGopM
// Address: 0x1a0db8 - 0x1a0e30
void SFH_AnlyFtrGopM_0x1a0db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyFtrGopM");


    ctx->pc = 0x1a0db8u;

    // 0x1a0db8: 0x27bdffc0
    ctx->pc = 0x1a0db8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0dbc: 0xffb10010
    ctx->pc = 0x1a0dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0dc0: 0xffb20020
    ctx->pc = 0x1a0dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0dc4: 0x30b100ff
    ctx->pc = 0x1a0dc4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0dc8: 0xffb00000
    ctx->pc = 0x1a0dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0dcc: 0xc0902d
    ctx->pc = 0x1a0dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0dd0: 0xffbf0030
    ctx->pc = 0x1a0dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0dd4: 0xc0681d0
    ctx->pc = 0x1A0DD4u;
    SET_GPR_U32(ctx, 31, 0x1A0DDCu);
    ctx->pc = 0x1A0DD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DDCu; }
        else if (ctx->pc != 0x1A0DDCu) { ctx->pc = 0x1A0DDCu; }
    }
    if (ctx->pc != 0x1A0DDCu) { return; }
    ctx->pc = 0x1A0DDCu;
    // 0x1a0ddc: 0x40802d
    ctx->pc = 0x1a0ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0de0: 0x12000005
    ctx->pc = 0x1A0DE0u;
    {
        const bool branch_taken_0x1a0de0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0DE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0de0) {
            ctx->pc = 0x1A0DF8u;
            goto label_1a0df8;
        }
    }
    ctx->pc = 0x1A0DE8u;
    // 0x1a0de8: 0xc0683b8
    ctx->pc = 0x1A0DE8u;
    SET_GPR_U32(ctx, 31, 0x1A0DF0u);
    ctx->pc = 0x1A0DECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0DF0u; }
        else if (ctx->pc != 0x1A0DF0u) { ctx->pc = 0x1A0DF0u; }
    }
    if (ctx->pc != 0x1A0DF0u) { return; }
    ctx->pc = 0x1A0DF0u;
    // 0x1a0df0: 0x54400003
    ctx->pc = 0x1A0DF0u;
    {
        const bool branch_taken_0x1a0df0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0df0) {
            ctx->pc = 0x1A0DF4u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
            ctx->pc = 0x1A0E00u;
            goto label_1a0e00;
        }
    }
    ctx->pc = 0x1A0DF8u;
label_1a0df8:
    // 0x1a0df8: 0x10000007
    ctx->pc = 0x1A0DF8u;
    {
        const bool branch_taken_0x1a0df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0DFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0df8) {
            ctx->pc = 0x1A0E18u;
            goto label_1a0e18;
        }
    }
    ctx->pc = 0x1A0E00u;
label_1a0e00:
    // 0x1a0e00: 0x28430040
    ctx->pc = 0x1a0e00u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 64));
    // 0x1a0e04: 0x14600003
    ctx->pc = 0x1A0E04u;
    {
        const bool branch_taken_0x1a0e04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A0E08u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1a0e04) {
            ctx->pc = 0x1A0E14u;
            goto label_1a0e14;
        }
    }
    ctx->pc = 0x1A0E0Cu;
    // 0x1a0e0c: 0x2402ffff
    ctx->pc = 0x1a0e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0e10: 0xae420000
    ctx->pc = 0x1a0e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1a0e14:
    // 0x1a0e14: 0x24020001
    ctx->pc = 0x1a0e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a0e18:
    // 0x1a0e18: 0xdfbf0030
    ctx->pc = 0x1a0e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0e1c: 0xdfb20020
    ctx->pc = 0x1a0e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e20: 0xdfb10010
    ctx->pc = 0x1a0e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e24: 0xdfb00000
    ctx->pc = 0x1a0e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e28: 0x3e00008
    ctx->pc = 0x1A0E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0DF8u: goto label_1a0df8;
            case 0x1A0E00u: goto label_1a0e00;
            case 0x1A0E14u: goto label_1a0e14;
            case 0x1A0E18u: goto label_1a0e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0E30u;
}
