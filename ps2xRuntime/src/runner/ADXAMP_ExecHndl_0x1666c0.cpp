#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_ExecHndl
// Address: 0x1666c0 - 0x1666e0
void ADXAMP_ExecHndl_0x1666c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_ExecHndl");


    ctx->pc = 0x1666c0u;

    // 0x1666c0: 0x80820001
    ctx->pc = 0x1666c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1666c4: 0x24030002
    ctx->pc = 0x1666c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1666c8: 0x14430003
    ctx->pc = 0x1666C8u;
    {
        const bool branch_taken_0x1666c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1666c8) {
            ctx->pc = 0x1666D8u;
            goto label_1666d8;
        }
    }
    ctx->pc = 0x1666D0u;
    // 0x1666d0: 0x8059908
    ctx->pc = 0x1666D0u;
    ctx->pc = 0x166420u;
    adxamp_extract_0x166420(rdram, ctx, runtime); return;
    ctx->pc = 0x1666D8u;
label_1666d8:
    // 0x1666d8: 0x3e00008
    ctx->pc = 0x1666D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1666D8u: goto label_1666d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1666E0u;
}
