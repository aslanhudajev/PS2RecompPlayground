#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutWaitLoadTextureEnd
// Address: 0x1a9c10 - 0x1a9c34
void nlObjPutWaitLoadTextureEnd_0x1a9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutWaitLoadTextureEnd");


    ctx->pc = 0x1a9c10u;

label_1a9c10:
    // 0x1a9c10: 0x3c011001
    ctx->pc = 0x1a9c10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a9c14: 0x8c23a000
    ctx->pc = 0x1a9c14u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942720))); // MMIO: 0x1000a000
    // 0x1a9c18: 0x30630100
    ctx->pc = 0x1a9c18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1a9c1c: 0x0
    ctx->pc = 0x1a9c1cu;
    // NOP
    // 0x1a9c20: 0x0
    ctx->pc = 0x1a9c20u;
    // NOP
    // 0x1a9c24: 0x1460fffa
    ctx->pc = 0x1A9C24u;
    {
        const bool branch_taken_0x1a9c24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a9c24) {
            ctx->pc = 0x1A9C10u;
            goto label_1a9c10;
        }
    }
    ctx->pc = 0x1A9C2Cu;
    // 0x1a9c2c: 0x3e00008
    ctx->pc = 0x1A9C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9C10u: goto label_1a9c10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9C34u;
}
