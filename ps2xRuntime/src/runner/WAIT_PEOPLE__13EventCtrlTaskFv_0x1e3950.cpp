#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_PEOPLE__13EventCtrlTaskFv
// Address: 0x1e3950 - 0x1e39d8
void WAIT_PEOPLE__13EventCtrlTaskFv_0x1e3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_PEOPLE__13EventCtrlTaskFv");


    ctx->pc = 0x1e3950u;

    // 0x1e3950: 0x8c83000c
    ctx->pc = 0x1e3950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3954: 0x84630004
    ctx->pc = 0x1e3954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3958: 0xa7838d70
    ctx->pc = 0x1e3958u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937968), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e395c: 0x80830004
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e3960: 0x10600003
    ctx->pc = 0x1E3960u;
    {
        const bool branch_taken_0x1e3960 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3964u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e3960) {
            ctx->pc = 0x1E3970u;
            goto label_1e3970;
        }
    }
    ctx->pc = 0x1E3968u;
    // 0x1e3968: 0x10000003
    ctx->pc = 0x1E3968u;
    {
        const bool branch_taken_0x1e3968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E396Cu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937964)));
        if (branch_taken_0x1e3968) {
            ctx->pc = 0x1E3978u;
            goto label_1e3978;
        }
    }
    ctx->pc = 0x1E3970u;
label_1e3970:
    // 0x1e3970: 0x10000017
    ctx->pc = 0x1E3970u;
    {
        const bool branch_taken_0x1e3970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3974u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e3970) {
            ctx->pc = 0x1E39D0u;
            goto label_1e39d0;
        }
    }
    ctx->pc = 0x1E3978u;
label_1e3978:
    // 0x1e3978: 0x87838d70
    ctx->pc = 0x1e3978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1e397c: 0x65082a
    ctx->pc = 0x1e397cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1e3980: 0x14200013
    ctx->pc = 0x1E3980u;
    {
        const bool branch_taken_0x1e3980 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3980) {
            ctx->pc = 0x1E39D0u;
            goto label_1e39d0;
        }
    }
    ctx->pc = 0x1E3988u;
    // 0x1e3988: 0x83838b2c
    ctx->pc = 0x1e3988u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1e398c: 0x10600010
    ctx->pc = 0x1E398Cu;
    {
        const bool branch_taken_0x1e398c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e398c) {
            ctx->pc = 0x1E39D0u;
            goto label_1e39d0;
        }
    }
    ctx->pc = 0x1E3994u;
    // 0x1e3994: 0x8f838c48
    ctx->pc = 0x1e3994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3998: 0x24050001
    ctx->pc = 0x1e3998u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e399c: 0xa06500d6
    ctx->pc = 0x1e399cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 214), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e39a0: 0x8f838c48
    ctx->pc = 0x1e39a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e39a4: 0x806300d5
    ctx->pc = 0x1e39a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 213)));
    // 0x1e39a8: 0x14600004
    ctx->pc = 0x1E39A8u;
    {
        const bool branch_taken_0x1e39a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e39a8) {
            ctx->pc = 0x1E39BCu;
            goto label_1e39bc;
        }
    }
    ctx->pc = 0x1E39B0u;
    // 0x1e39b0: 0x80830005
    ctx->pc = 0x1e39b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1e39b4: 0x10600006
    ctx->pc = 0x1E39B4u;
    {
        const bool branch_taken_0x1e39b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e39b4) {
            ctx->pc = 0x1E39D0u;
            goto label_1e39d0;
        }
    }
    ctx->pc = 0x1E39BCu;
label_1e39bc:
    // 0x1e39bc: 0xa0800004
    ctx->pc = 0x1e39bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e39c0: 0xa7808d70
    ctx->pc = 0x1e39c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937968), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e39c4: 0x8c83000c
    ctx->pc = 0x1e39c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e39c8: 0x24630008
    ctx->pc = 0x1e39c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e39cc: 0xac83000c
    ctx->pc = 0x1e39ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1e39d0:
    // 0x1e39d0: 0x3e00008
    ctx->pc = 0x1E39D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3970u: goto label_1e3970;
            case 0x1E3978u: goto label_1e3978;
            case 0x1E39BCu: goto label_1e39bc;
            case 0x1E39D0u: goto label_1e39d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E39D8u;
}
