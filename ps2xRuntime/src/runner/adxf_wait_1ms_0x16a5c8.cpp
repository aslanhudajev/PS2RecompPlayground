#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_wait_1ms
// Address: 0x16a5c8 - 0x16a5f4
void adxf_wait_1ms_0x16a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_wait_1ms");


    ctx->pc = 0x16a5c8u;

    // 0x16a5c8: 0x3402c350
    ctx->pc = 0x16a5c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 50000));
    // 0x16a5cc: 0x0
    ctx->pc = 0x16a5ccu;
    // NOP
label_16a5d0:
    // 0x16a5d0: 0x2442ffff
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16a5d4: 0x0
    ctx->pc = 0x16a5d4u;
    // NOP
    // 0x16a5d8: 0x0
    ctx->pc = 0x16a5d8u;
    // NOP
    // 0x16a5dc: 0x0
    ctx->pc = 0x16a5dcu;
    // NOP
    // 0x16a5e0: 0x0
    ctx->pc = 0x16a5e0u;
    // NOP
    // 0x16a5e4: 0x1440fffa
    ctx->pc = 0x16A5E4u;
    {
        const bool branch_taken_0x16a5e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a5e4) {
            ctx->pc = 0x16A5D0u;
            goto label_16a5d0;
        }
    }
    ctx->pc = 0x16A5ECu;
    // 0x16a5ec: 0x3e00008
    ctx->pc = 0x16A5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A5D0u: goto label_16a5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A5F4u;
}
