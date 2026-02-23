#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: returnBufBlock__14TexBufMgrClassFP10TexSurface
// Address: 0x219f00 - 0x219f1c
void returnBufBlock__14TexBufMgrClassFP10TexSurface_0x219f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("returnBufBlock__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x219f00u;

    // 0x219f00: 0x8c830008
    ctx->pc = 0x219f00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x219f04: 0x2463ffff
    ctx->pc = 0x219f04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x219f08: 0xac830008
    ctx->pc = 0x219f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x219f0c: 0x31880
    ctx->pc = 0x219f0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x219f10: 0x641821
    ctx->pc = 0x219f10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x219f14: 0x3e00008
    ctx->pc = 0x219F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F18u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 788), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219F1Cu;
}
