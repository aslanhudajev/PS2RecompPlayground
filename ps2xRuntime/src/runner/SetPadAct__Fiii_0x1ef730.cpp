#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetPadAct__Fiii
// Address: 0x1ef730 - 0x1ef788
void SetPadAct__Fiii_0x1ef730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetPadAct__Fiii");


    ctx->pc = 0x1ef730u;

    // 0x1ef730: 0x41880
    ctx->pc = 0x1ef730u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ef734: 0x642021
    ctx->pc = 0x1ef734u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ef738: 0x41880
    ctx->pc = 0x1ef738u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ef73c: 0x832021
    ctx->pc = 0x1ef73cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ef740: 0x3c030051
    ctx->pc = 0x1ef740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1ef744: 0x24634f80
    ctx->pc = 0x1ef744u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20352));
    // 0x1ef748: 0x641821
    ctx->pc = 0x1ef748u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ef74c: 0xa32021
    ctx->pc = 0x1ef74cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ef750: 0x90830001
    ctx->pc = 0x1ef750u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1ef754: 0x10600007
    ctx->pc = 0x1EF754u;
    {
        const bool branch_taken_0x1ef754 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF758u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1ef754) {
            ctx->pc = 0x1EF774u;
            goto label_1ef774;
        }
    }
    ctx->pc = 0x1EF75Cu;
    // 0x1ef75c: 0x90830007
    ctx->pc = 0x1ef75cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1ef760: 0x66082a
    ctx->pc = 0x1ef760u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x1ef764: 0x10200006
    ctx->pc = 0x1EF764u;
    {
        const bool branch_taken_0x1ef764 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF768u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 7));
        if (branch_taken_0x1ef764) {
            ctx->pc = 0x1EF780u;
            goto label_1ef780;
        }
    }
    ctx->pc = 0x1EF76Cu;
    // 0x1ef76c: 0x10000004
    ctx->pc = 0x1EF76Cu;
    {
        const bool branch_taken_0x1ef76c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF770u;
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1ef76c) {
            ctx->pc = 0x1EF780u;
            goto label_1ef780;
        }
    }
    ctx->pc = 0x1EF774u;
label_1ef774:
    // 0x1ef774: 0xa0860007
    ctx->pc = 0x1ef774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ef778: 0x24030001
    ctx->pc = 0x1ef778u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef77c: 0xa0a30000
    ctx->pc = 0x1ef77cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1ef780:
    // 0x1ef780: 0x3e00008
    ctx->pc = 0x1EF780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF774u: goto label_1ef774;
            case 0x1EF780u: goto label_1ef780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF788u;
}
