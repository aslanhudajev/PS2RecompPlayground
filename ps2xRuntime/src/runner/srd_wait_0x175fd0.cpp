#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: srd_wait
// Address: 0x175fd0 - 0x175ffc
void srd_wait_0x175fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("srd_wait");


    ctx->pc = 0x175fd0u;

    // 0x175fd0: 0x34028000
    ctx->pc = 0x175fd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x175fd4: 0x0
    ctx->pc = 0x175fd4u;
    // NOP
label_175fd8:
    // 0x175fd8: 0x2442ffff
    ctx->pc = 0x175fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x175fdc: 0x0
    ctx->pc = 0x175fdcu;
    // NOP
    // 0x175fe0: 0x0
    ctx->pc = 0x175fe0u;
    // NOP
    // 0x175fe4: 0x0
    ctx->pc = 0x175fe4u;
    // NOP
    // 0x175fe8: 0x0
    ctx->pc = 0x175fe8u;
    // NOP
    // 0x175fec: 0x1440fffa
    ctx->pc = 0x175FECu;
    {
        const bool branch_taken_0x175fec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x175fec) {
            ctx->pc = 0x175FD8u;
            goto label_175fd8;
        }
    }
    ctx->pc = 0x175FF4u;
    // 0x175ff4: 0x3e00008
    ctx->pc = 0x175FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175FD8u: goto label_175fd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175FFCu;
}
