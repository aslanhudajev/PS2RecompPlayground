#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_GetPtinfoSize
// Address: 0x16b460 - 0x16b47c
void ADXF_GetPtinfoSize_0x16b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_GetPtinfoSize");


    ctx->pc = 0x16b460u;

    // 0x16b460: 0x3c020023
    ctx->pc = 0x16b460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16b464: 0x42080
    ctx->pc = 0x16b464u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b468: 0x2442c918
    ctx->pc = 0x16b468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16b46c: 0x822021
    ctx->pc = 0x16b46cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16b470: 0x8c830000
    ctx->pc = 0x16b470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b474: 0x3e00008
    ctx->pc = 0x16B474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B478u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B47Cu;
}
