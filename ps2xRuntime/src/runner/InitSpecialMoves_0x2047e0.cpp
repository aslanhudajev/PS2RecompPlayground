#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSpecialMoves
// Address: 0x2047e0 - 0x20482c
void InitSpecialMoves_0x2047e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2047e0u;

    // 0x2047e0: 0x282d
    ctx->pc = 0x2047e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2047e4: 0x3c02003c
    ctx->pc = 0x2047e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2047e8: 0x2447bde8
    ctx->pc = 0x2047e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294950376));
    // 0x2047ec: 0x24020068
    ctx->pc = 0x2047ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 104));
    // 0x2047f0: 0x822018
    ctx->pc = 0x2047f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2047f4: 0x3c02003c
    ctx->pc = 0x2047f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2047f8: 0x2446bdec
    ctx->pc = 0x2047f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294950380));
    // 0x2047fc: 0x510c0
    ctx->pc = 0x2047fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
label_204800:
    // 0x204800: 0x441021
    ctx->pc = 0x204800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204804: 0x471821
    ctx->pc = 0x204804u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x204808: 0xac600000
    ctx->pc = 0x204808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x20480c: 0x461021
    ctx->pc = 0x20480cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x204810: 0xac400000
    ctx->pc = 0x204810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x204814: 0x24a50001
    ctx->pc = 0x204814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x204818: 0x2ca2000d
    ctx->pc = 0x204818u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 13));
    // 0x20481c: 0x1440fff8
    ctx->pc = 0x20481Cu;
    {
        const bool branch_taken_0x20481c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x204820u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x20481c) {
            ctx->pc = 0x204800u;
            goto label_204800;
        }
    }
    ctx->pc = 0x204824u;
    // 0x204824: 0x3e00008
    ctx->pc = 0x204824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204800u: goto label_204800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20482Cu;
}
