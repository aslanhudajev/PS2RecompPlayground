#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BRANCHADR__13EventCtrlTaskFv
// Address: 0x1e4de0 - 0x1e4e4c
void BRANCHADR__13EventCtrlTaskFv_0x1e4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BRANCHADR__13EventCtrlTaskFv");


    ctx->pc = 0x1e4de0u;

    // 0x1e4de0: 0x8c83000c
    ctx->pc = 0x1e4de0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4de4: 0x70003e28
    ctx->pc = 0x1e4de4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4de8: 0x2408ffff
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4dec: 0x24630004
    ctx->pc = 0x1e4decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e4df0: 0xac83000c
    ctx->pc = 0x1e4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e4df4: 0x71001e28
    ctx->pc = 0x1e4df4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1e4df8: 0x71003628
    ctx->pc = 0x1e4df8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1e4dfc:
    // 0x1e4dfc: 0x8c85000c
    ctx->pc = 0x1e4dfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4e00: 0x8ca90000
    ctx->pc = 0x1e4e00u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4e04: 0x11260006
    ctx->pc = 0x1E4E04u;
    {
        const bool branch_taken_0x1e4e04 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 6));
        ctx->pc = 0x1E4E08u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1e4e04) {
            ctx->pc = 0x1E4E20u;
            goto label_1e4e20;
        }
    }
    ctx->pc = 0x1E4E0Cu;
    // 0x1e4e0c: 0x83858bb4
    ctx->pc = 0x1e4e0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937524)));
    // 0x1e4e10: 0x14a80003
    ctx->pc = 0x1E4E10u;
    {
        const bool branch_taken_0x1e4e10 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        if (branch_taken_0x1e4e10) {
            ctx->pc = 0x1E4E20u;
            goto label_1e4e20;
        }
    }
    ctx->pc = 0x1E4E18u;
    // 0x1e4e18: 0x10000009
    ctx->pc = 0x1E4E18u;
    {
        const bool branch_taken_0x1e4e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4E1Cu;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e4e18) {
            ctx->pc = 0x1E4E40u;
            goto label_1e4e40;
        }
    }
    ctx->pc = 0x1E4E20u;
label_1e4e20:
    // 0x1e4e20: 0x8c85000c
    ctx->pc = 0x1e4e20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4e24: 0x24a50004
    ctx->pc = 0x1e4e24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4e28: 0xac85000c
    ctx->pc = 0x1e4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1e4e2c: 0x8c85000c
    ctx->pc = 0x1e4e2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4e30: 0x8ca50000
    ctx->pc = 0x1e4e30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4e34: 0x14a3fff1
    ctx->pc = 0x1E4E34u;
    {
        const bool branch_taken_0x1e4e34 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e4e34) {
            ctx->pc = 0x1E4DFCu;
            goto label_1e4dfc;
        }
    }
    ctx->pc = 0x1E4E3Cu;
    // 0x1e4e3c: 0x0
    ctx->pc = 0x1e4e3cu;
    // NOP
label_1e4e40:
    // 0x1e4e40: 0xac87000c
    ctx->pc = 0x1e4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1e4e44: 0x3e00008
    ctx->pc = 0x1E4E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4E48u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4DFCu: goto label_1e4dfc;
            case 0x1E4E20u: goto label_1e4e20;
            case 0x1E4E40u: goto label_1e4e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4E4Cu;
}
