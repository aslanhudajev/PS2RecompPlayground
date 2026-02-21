#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerAttacking
// Address: 0x236ea0 - 0x236f0c
void PlayerAttacking_0x236ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236ea0u;

    // 0x236ea0: 0x24022b00
    ctx->pc = 0x236ea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x236ea4: 0x822018
    ctx->pc = 0x236ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236ea8: 0x3c020032
    ctx->pc = 0x236ea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x236eac: 0x24421bc0
    ctx->pc = 0x236eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x236eb0: 0x822021
    ctx->pc = 0x236eb0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x236eb4: 0x8c8208c8
    ctx->pc = 0x236eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2248)));
    // 0x236eb8: 0x2842000b
    ctx->pc = 0x236eb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x236ebc: 0x14400003
    ctx->pc = 0x236EBCu;
    {
        const bool branch_taken_0x236ebc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236EC0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
        if (branch_taken_0x236ebc) {
            ctx->pc = 0x236ECCu;
            goto label_236ecc;
        }
    }
    ctx->pc = 0x236EC4u;
label_236ec4:
    // 0x236ec4: 0x3e00008
    ctx->pc = 0x236EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236EC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236EC4u: goto label_236ec4;
            case 0x236ECCu: goto label_236ecc;
            case 0x236EF0u: goto label_236ef0;
            case 0x236F04u: goto label_236f04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236ECCu;
label_236ecc:
    // 0x236ecc: 0x10400008
    ctx->pc = 0x236ECCu;
    {
        const bool branch_taken_0x236ecc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x236ED0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x236ecc) {
            ctx->pc = 0x236EF0u;
            goto label_236ef0;
        }
    }
    ctx->pc = 0x236ED4u;
    // 0x236ed4: 0x8c8308c8
    ctx->pc = 0x236ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2248)));
    // 0x236ed8: 0x1062fffa
    ctx->pc = 0x236ED8u;
    {
        const bool branch_taken_0x236ed8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x236EDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x236ed8) {
            ctx->pc = 0x236EC4u;
            goto label_236ec4;
        }
    }
    ctx->pc = 0x236EE0u;
    // 0x236ee0: 0x1062fff8
    ctx->pc = 0x236EE0u;
    {
        const bool branch_taken_0x236ee0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x236EE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x236ee0) {
            ctx->pc = 0x236EC4u;
            goto label_236ec4;
        }
    }
    ctx->pc = 0x236EE8u;
    // 0x236ee8: 0x1062fff6
    ctx->pc = 0x236EE8u;
    {
        const bool branch_taken_0x236ee8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x236ee8) {
            ctx->pc = 0x236EC4u;
            goto label_236ec4;
        }
    }
    ctx->pc = 0x236EF0u;
label_236ef0:
    // 0x236ef0: 0x1ca00004
    ctx->pc = 0x236EF0u;
    {
        const bool branch_taken_0x236ef0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x236EF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x236ef0) {
            ctx->pc = 0x236F04u;
            goto label_236f04;
        }
    }
    ctx->pc = 0x236EF8u;
    // 0x236ef8: 0x8c8208c8
    ctx->pc = 0x236ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2248)));
    // 0x236efc: 0x28420002
    ctx->pc = 0x236efcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x236f00: 0x38420001
    ctx->pc = 0x236f00u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_236f04:
    // 0x236f04: 0x3e00008
    ctx->pc = 0x236F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236EC4u: goto label_236ec4;
            case 0x236ECCu: goto label_236ecc;
            case 0x236EF0u: goto label_236ef0;
            case 0x236F04u: goto label_236f04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236F0Cu;
}
