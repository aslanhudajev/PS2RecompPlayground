#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: returnFreeBlock__14TexBufMgrClassFP10TexSurface
// Address: 0x219fa0 - 0x219fd0
void returnFreeBlock__14TexBufMgrClassFP10TexSurface_0x219fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("returnFreeBlock__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x219fa0u;

    // 0x219fa0: 0x27bdffe0
    ctx->pc = 0x219fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219fa4: 0x7fbf0010
    ctx->pc = 0x219fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x219fa8: 0x7fb00000
    ctx->pc = 0x219fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219fac: 0xc0867c0
    ctx->pc = 0x219FACu;
    SET_GPR_U32(ctx, 31, 0x219FB4u);
    ctx->pc = 0x219FB0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        returnBufBlock__14TexBufMgrClassFP10TexSurface_0x219f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FB4u; }
        else if (ctx->pc != 0x219FB4u) { ctx->pc = 0x219FB4u; }
    }
    if (ctx->pc != 0x219FB4u) { return; }
    ctx->pc = 0x219FB4u;
    // 0x219fb4: 0x8e03000c
    ctx->pc = 0x219fb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x219fb8: 0x2463ffff
    ctx->pc = 0x219fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x219fbc: 0xae03000c
    ctx->pc = 0x219fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x219fc0: 0x7bbf0010
    ctx->pc = 0x219fc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219fc4: 0x7bb00000
    ctx->pc = 0x219fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219fc8: 0x3e00008
    ctx->pc = 0x219FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219FD0u;
}
