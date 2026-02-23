#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_Start
// Address: 0x1663d8 - 0x166418
void ADXAMP_Start_0x1663d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_Start");


    ctx->pc = 0x1663d8u;

    // 0x1663d8: 0x80820002
    ctx->pc = 0x1663d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1663dc: 0x1840000a
    ctx->pc = 0x1663DCu;
    {
        const bool branch_taken_0x1663dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1663E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1663dc) {
            ctx->pc = 0x166408u;
            goto label_166408;
        }
    }
    ctx->pc = 0x1663E4u;
    // 0x1663e4: 0x24860014
    ctx->pc = 0x1663e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 20));
label_1663e8:
    // 0x1663e8: 0x51880
    ctx->pc = 0x1663e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1663ec: 0xc31821
    ctx->pc = 0x1663ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1663f0: 0x24a50001
    ctx->pc = 0x1663f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1663f4: 0xac600000
    ctx->pc = 0x1663f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1663f8: 0x80820002
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1663fc: 0xa2102a
    ctx->pc = 0x1663fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x166400: 0x1440fff9
    ctx->pc = 0x166400u;
    {
        const bool branch_taken_0x166400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x166400) {
            ctx->pc = 0x1663E8u;
            goto label_1663e8;
        }
    }
    ctx->pc = 0x166408u;
label_166408:
    // 0x166408: 0x24020002
    ctx->pc = 0x166408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16640c: 0xac80002c
    ctx->pc = 0x16640cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x166410: 0x3e00008
    ctx->pc = 0x166410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166414u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1663E8u: goto label_1663e8;
            case 0x166408u: goto label_166408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166418u;
}
