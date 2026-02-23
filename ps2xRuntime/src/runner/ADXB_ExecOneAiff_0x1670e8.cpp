#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAiff
// Address: 0x1670e8 - 0x167108
void ADXB_ExecOneAiff_0x1670e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAiff");


    ctx->pc = 0x1670e8u;

    // 0x1670e8: 0x848200aa
    ctx->pc = 0x1670e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x1670ec: 0x24030001
    ctx->pc = 0x1670ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1670f0: 0x14430003
    ctx->pc = 0x1670F0u;
    {
        const bool branch_taken_0x1670f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1670f0) {
            ctx->pc = 0x167100u;
            goto label_167100;
        }
    }
    ctx->pc = 0x1670F8u;
    // 0x1670f8: 0x8059bdc
    ctx->pc = 0x1670F8u;
    ctx->pc = 0x166F70u;
    ADXB_ExecOneAiff8_0x166f70(rdram, ctx, runtime); return;
    ctx->pc = 0x167100u;
label_167100:
    // 0x167100: 0x8059b76
    ctx->pc = 0x167100u;
    ctx->pc = 0x166DD8u;
    ADXB_ExecOneAiff16_0x166dd8(rdram, ctx, runtime); return;
    ctx->pc = 0x167108u;
}
