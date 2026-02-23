#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_GetVerStr
// Address: 0x16e948 - 0x16e954
void ADXSJE_GetVerStr_0x16e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_GetVerStr");


    ctx->pc = 0x16e948u;

    // 0x16e948: 0x3c02002c
    ctx->pc = 0x16e948u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x16e94c: 0x3e00008
    ctx->pc = 0x16E94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E950u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943032));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E954u;
}
