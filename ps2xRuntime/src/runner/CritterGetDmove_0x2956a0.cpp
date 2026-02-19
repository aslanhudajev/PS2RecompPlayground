#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetDmove
// Address: 0x2956a0 - 0x2956f4
void CritterGetDmove_0x2956a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2956a0u;

    // 0x2956a0: 0x8485012a
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 298)));
    // 0x2956a4: 0x4a20011
    ctx->pc = 0x2956A4u;
    {
        const bool branch_taken_0x2956a4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2956a4) {
            ctx->pc = 0x2956A8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 294)));
            ctx->pc = 0x2956ECu;
            goto label_2956ec;
        }
    }
    ctx->pc = 0x2956ACu;
    // 0x2956ac: 0x9482012c
    ctx->pc = 0x2956acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x2956b0: 0x2c420008
    ctx->pc = 0x2956b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 8));
    // 0x2956b4: 0x1040000c
    ctx->pc = 0x2956B4u;
    {
        const bool branch_taken_0x2956b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2956B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x2956b4) {
            ctx->pc = 0x2956E8u;
            goto label_2956e8;
        }
    }
    ctx->pc = 0x2956BCu;
    // 0x2956bc: 0x8c820004
    ctx->pc = 0x2956bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2956c0: 0x8c420128
    ctx->pc = 0x2956c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x2956c4: 0xa31818
    ctx->pc = 0x2956c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2956c8: 0x621821
    ctx->pc = 0x2956c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2956cc: 0x8482012c
    ctx->pc = 0x2956ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x2956d0: 0x24420001
    ctx->pc = 0x2956d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2956d4: 0x21040
    ctx->pc = 0x2956d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2956d8: 0x621821
    ctx->pc = 0x2956d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2956dc: 0x84620020
    ctx->pc = 0x2956dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2956e0: 0x4410002
    ctx->pc = 0x2956E0u;
    {
        const bool branch_taken_0x2956e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2956e0) {
            ctx->pc = 0x2956ECu;
            goto label_2956ec;
        }
    }
    ctx->pc = 0x2956E8u;
label_2956e8:
    // 0x2956e8: 0x84820126
    ctx->pc = 0x2956e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 294)));
label_2956ec:
    // 0x2956ec: 0x3e00008
    ctx->pc = 0x2956ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2956E8u: goto label_2956e8;
            case 0x2956ECu: goto label_2956ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2956F4u;
}
