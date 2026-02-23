#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: returnAllocBlock__14TexBufMgrClassFP10TexSurface
// Address: 0x219fd0 - 0x21a000
void returnAllocBlock__14TexBufMgrClassFP10TexSurface_0x219fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("returnAllocBlock__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x219fd0u;

    // 0x219fd0: 0x27bdffe0
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219fd4: 0x7fbf0010
    ctx->pc = 0x219fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x219fd8: 0x7fb00000
    ctx->pc = 0x219fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219fdc: 0xc0867c0
    ctx->pc = 0x219FDCu;
    SET_GPR_U32(ctx, 31, 0x219FE4u);
    ctx->pc = 0x219FE0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        returnBufBlock__14TexBufMgrClassFP10TexSurface_0x219f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219FE4u; }
        else if (ctx->pc != 0x219FE4u) { ctx->pc = 0x219FE4u; }
    }
    if (ctx->pc != 0x219FE4u) { return; }
    ctx->pc = 0x219FE4u;
    // 0x219fe4: 0x8e030010
    ctx->pc = 0x219fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x219fe8: 0x2463ffff
    ctx->pc = 0x219fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x219fec: 0xae030010
    ctx->pc = 0x219fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x219ff0: 0x7bbf0010
    ctx->pc = 0x219ff0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ff4: 0x7bb00000
    ctx->pc = 0x219ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ff8: 0x3e00008
    ctx->pc = 0x219FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219FFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A000u;
}
