#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getAllocBlock__14TexBufMgrClassFv
// Address: 0x219f60 - 0x219f98
void getAllocBlock__14TexBufMgrClassFv_0x219f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getAllocBlock__14TexBufMgrClassFv");


    ctx->pc = 0x219f60u;

    // 0x219f60: 0x27bdffe0
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219f64: 0x7fbf0010
    ctx->pc = 0x219f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x219f68: 0x7fb00000
    ctx->pc = 0x219f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219f6c: 0xc0867a8
    ctx->pc = 0x219F6Cu;
    SET_GPR_U32(ctx, 31, 0x219F74u);
    ctx->pc = 0x219F70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getBufBlock__14TexBufMgrClassFv_0x219ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F74u; }
        else if (ctx->pc != 0x219F74u) { ctx->pc = 0x219F74u; }
    }
    if (ctx->pc != 0x219F74u) { return; }
    ctx->pc = 0x219F74u;
    // 0x219f74: 0x10400004
    ctx->pc = 0x219F74u;
    {
        const bool branch_taken_0x219f74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x219f74) {
            ctx->pc = 0x219F88u;
            goto label_219f88;
        }
    }
    ctx->pc = 0x219F7Cu;
    // 0x219f7c: 0x8e030010
    ctx->pc = 0x219f7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x219f80: 0x24630001
    ctx->pc = 0x219f80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x219f84: 0xae030010
    ctx->pc = 0x219f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_219f88:
    // 0x219f88: 0x7bbf0010
    ctx->pc = 0x219f88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219f8c: 0x7bb00000
    ctx->pc = 0x219f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219f90: 0x3e00008
    ctx->pc = 0x219F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219F88u: goto label_219f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219F98u;
}
