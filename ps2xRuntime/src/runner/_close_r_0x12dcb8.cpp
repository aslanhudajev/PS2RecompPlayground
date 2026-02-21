#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _close_r
// Address: 0x12dcb8 - 0x12dd10
void _close_r_0x12dcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12dcb8u;

    // 0x12dcb8: 0x27bdffd0
    ctx->pc = 0x12dcb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12dcbc: 0xffb10010
    ctx->pc = 0x12dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12dcc0: 0xffb00000
    ctx->pc = 0x12dcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dcc4: 0x80882d
    ctx->pc = 0x12dcc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcc8: 0x3c100017
    ctx->pc = 0x12dcc8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x12dccc: 0xffbf0020
    ctx->pc = 0x12dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12dcd0: 0xa0202d
    ctx->pc = 0x12dcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcd4: 0xc043a38
    ctx->pc = 0x12DCD4u;
    SET_GPR_U32(ctx, 31, 0x12DCDCu);
    ctx->pc = 0x12DCD8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24544), GPR_U32(ctx, 0));
    ctx->pc = 0x10E8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        close_0x10e8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DCDCu; }
    }
    if (ctx->pc != 0x12DCDCu) { return; }
    ctx->pc = 0x12DCDCu;
    // 0x12dcdc: 0x40182d
    ctx->pc = 0x12dcdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dce0: 0x2402ffff
    ctx->pc = 0x12dce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12dce4: 0x14620005
    ctx->pc = 0x12DCE4u;
    {
        const bool branch_taken_0x12dce4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12DCE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12dce4) {
            ctx->pc = 0x12DCFCu;
            goto label_12dcfc;
        }
    }
    ctx->pc = 0x12DCECu;
    // 0x12dcec: 0x8e025fe0
    ctx->pc = 0x12dcecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24544)));
    // 0x12dcf0: 0x54400002
    ctx->pc = 0x12DCF0u;
    {
        const bool branch_taken_0x12dcf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12dcf0) {
            ctx->pc = 0x12DCF4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x12DCFCu;
            goto label_12dcfc;
        }
    }
    ctx->pc = 0x12DCF8u;
    // 0x12dcf8: 0xdfbf0020
    ctx->pc = 0x12dcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12dcfc:
    // 0x12dcfc: 0x60102d
    ctx->pc = 0x12dcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd00: 0xdfb10010
    ctx->pc = 0x12dd00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dd04: 0xdfb00000
    ctx->pc = 0x12dd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dd08: 0x3e00008
    ctx->pc = 0x12DD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DCFCu: goto label_12dcfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DD10u;
}
