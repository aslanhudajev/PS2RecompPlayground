#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_ITEM__13EventCtrlTaskFv
// Address: 0x1e39e0 - 0x1e3a64
void WAIT_ITEM__13EventCtrlTaskFv_0x1e39e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_ITEM__13EventCtrlTaskFv");


    ctx->pc = 0x1e39e0u;

    // 0x1e39e0: 0x80830004
    ctx->pc = 0x1e39e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e39e4: 0x24060001
    ctx->pc = 0x1e39e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e39e8: 0x10660004
    ctx->pc = 0x1E39E8u;
    {
        const bool branch_taken_0x1e39e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        if (branch_taken_0x1e39e8) {
            ctx->pc = 0x1E39FCu;
            goto label_1e39fc;
        }
    }
    ctx->pc = 0x1E39F0u;
    // 0x1e39f0: 0x24030001
    ctx->pc = 0x1e39f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e39f4: 0x10000019
    ctx->pc = 0x1E39F4u;
    {
        const bool branch_taken_0x1e39f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E39F8u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e39f4) {
            ctx->pc = 0x1E3A5Cu;
            goto label_1e3a5c;
        }
    }
    ctx->pc = 0x1E39FCu;
label_1e39fc:
    // 0x1e39fc: 0x8c85000c
    ctx->pc = 0x1e39fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3a00: 0x3c030050
    ctx->pc = 0x1e3a00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e3a04: 0x2463e400
    ctx->pc = 0x1e3a04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x1e3a08: 0x8ca50004
    ctx->pc = 0x1e3a08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e3a0c: 0x651821
    ctx->pc = 0x1e3a0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e3a10: 0x80630000
    ctx->pc = 0x1e3a10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3a14: 0x10600011
    ctx->pc = 0x1E3A14u;
    {
        const bool branch_taken_0x1e3a14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3a14) {
            ctx->pc = 0x1E3A5Cu;
            goto label_1e3a5c;
        }
    }
    ctx->pc = 0x1E3A1Cu;
    // 0x1e3a1c: 0x83838b2c
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1e3a20: 0x1060000e
    ctx->pc = 0x1E3A20u;
    {
        const bool branch_taken_0x1e3a20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3a20) {
            ctx->pc = 0x1E3A5Cu;
            goto label_1e3a5c;
        }
    }
    ctx->pc = 0x1E3A28u;
    // 0x1e3a28: 0x8f838c48
    ctx->pc = 0x1e3a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3a2c: 0xa06600d6
    ctx->pc = 0x1e3a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 214), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e3a30: 0x8f838c48
    ctx->pc = 0x1e3a30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3a34: 0x806300d5
    ctx->pc = 0x1e3a34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 213)));
    // 0x1e3a38: 0x14600004
    ctx->pc = 0x1E3A38u;
    {
        const bool branch_taken_0x1e3a38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3a38) {
            ctx->pc = 0x1E3A4Cu;
            goto label_1e3a4c;
        }
    }
    ctx->pc = 0x1E3A40u;
    // 0x1e3a40: 0x80830005
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1e3a44: 0x10600005
    ctx->pc = 0x1E3A44u;
    {
        const bool branch_taken_0x1e3a44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3a44) {
            ctx->pc = 0x1E3A5Cu;
            goto label_1e3a5c;
        }
    }
    ctx->pc = 0x1E3A4Cu;
label_1e3a4c:
    // 0x1e3a4c: 0xa0800004
    ctx->pc = 0x1e3a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3a50: 0x8c83000c
    ctx->pc = 0x1e3a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3a54: 0x24630008
    ctx->pc = 0x1e3a54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3a58: 0xac83000c
    ctx->pc = 0x1e3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1e3a5c:
    // 0x1e3a5c: 0x3e00008
    ctx->pc = 0x1E3A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E39FCu: goto label_1e39fc;
            case 0x1E3A4Cu: goto label_1e3a4c;
            case 0x1E3A5Cu: goto label_1e3a5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3A64u;
}
