#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_wait
// Address: 0x1786f8 - 0x178724
void htci_wait_0x1786f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_wait");


    ctx->pc = 0x1786f8u;

    // 0x1786f8: 0x34028000
    ctx->pc = 0x1786f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1786fc: 0x0
    ctx->pc = 0x1786fcu;
    // NOP
label_178700:
    // 0x178700: 0x2442ffff
    ctx->pc = 0x178700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178704: 0x0
    ctx->pc = 0x178704u;
    // NOP
    // 0x178708: 0x0
    ctx->pc = 0x178708u;
    // NOP
    // 0x17870c: 0x0
    ctx->pc = 0x17870cu;
    // NOP
    // 0x178710: 0x0
    ctx->pc = 0x178710u;
    // NOP
    // 0x178714: 0x1440fffa
    ctx->pc = 0x178714u;
    {
        const bool branch_taken_0x178714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178714) {
            ctx->pc = 0x178700u;
            goto label_178700;
        }
    }
    ctx->pc = 0x17871Cu;
    // 0x17871c: 0x3e00008
    ctx->pc = 0x17871Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178700u: goto label_178700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178724u;
}
