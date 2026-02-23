#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chgCafsIdx__10CameraTaskFii
// Address: 0x1c9960 - 0x1c9980
void chgCafsIdx__10CameraTaskFii_0x1c9960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chgCafsIdx__10CameraTaskFii");


    ctx->pc = 0x1c9960u;

    // 0x1c9960: 0x518c0
    ctx->pc = 0x1c9960u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c9964: 0x651821
    ctx->pc = 0x1c9964u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c9968: 0x32180
    ctx->pc = 0x1c9968u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1c996c: 0x3c030030
    ctx->pc = 0x1c996cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1c9970: 0x24635c78
    ctx->pc = 0x1c9970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23672));
    // 0x1c9974: 0x641821
    ctx->pc = 0x1c9974u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c9978: 0x3e00008
    ctx->pc = 0x1C9978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C997Cu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9980u;
}
