#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: voiceRequest__13SoundMgrClassFii
// Address: 0x217f80 - 0x217fe8
void voiceRequest__13SoundMgrClassFii_0x217f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("voiceRequest__13SoundMgrClassFii");


    ctx->pc = 0x217f80u;

    // 0x217f80: 0x30a3ffff
    ctx->pc = 0x217f80u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x217f84: 0x32840
    ctx->pc = 0x217f84u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 1));
    // 0x217f88: 0x3c030027
    ctx->pc = 0x217f88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x217f8c: 0x2463b9d0
    ctx->pc = 0x217f8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294949328));
    // 0x217f90: 0x651821
    ctx->pc = 0x217f90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x217f94: 0x8c850204
    ctx->pc = 0x217f94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x217f98: 0x84670000
    ctx->pc = 0x217f98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217f9c: 0x52900
    ctx->pc = 0x217f9cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x217fa0: 0x24030001
    ctx->pc = 0x217fa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217fa4: 0x852821
    ctx->pc = 0x217fa4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x217fa8: 0xa0a30100
    ctx->pc = 0x217fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x217fac: 0xaca60104
    ctx->pc = 0x217facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 6));
    // 0x217fb0: 0x8c830204
    ctx->pc = 0x217fb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x217fb4: 0x24630001
    ctx->pc = 0x217fb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x217fb8: 0x3063000f
    ctx->pc = 0x217fb8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x217fbc: 0xac830204
    ctx->pc = 0x217fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 3));
    // 0x217fc0: 0x8c830204
    ctx->pc = 0x217fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x217fc4: 0x31900
    ctx->pc = 0x217fc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x217fc8: 0x831821
    ctx->pc = 0x217fc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x217fcc: 0xa0600100
    ctx->pc = 0x217fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x217fd0: 0xac670104
    ctx->pc = 0x217fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 7));
    // 0x217fd4: 0x8c830204
    ctx->pc = 0x217fd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x217fd8: 0x24630001
    ctx->pc = 0x217fd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x217fdc: 0x3063000f
    ctx->pc = 0x217fdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x217fe0: 0x3e00008
    ctx->pc = 0x217FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217FE4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217FE8u;
}
