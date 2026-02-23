#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getFreeBlock__14TexBufMgrClassFv
// Address: 0x219f20 - 0x219f58
void getFreeBlock__14TexBufMgrClassFv_0x219f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getFreeBlock__14TexBufMgrClassFv");


    ctx->pc = 0x219f20u;

    // 0x219f20: 0x27bdffe0
    ctx->pc = 0x219f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219f24: 0x7fbf0010
    ctx->pc = 0x219f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x219f28: 0x7fb00000
    ctx->pc = 0x219f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219f2c: 0xc0867a8
    ctx->pc = 0x219F2Cu;
    SET_GPR_U32(ctx, 31, 0x219F34u);
    ctx->pc = 0x219F30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getBufBlock__14TexBufMgrClassFv_0x219ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219F34u; }
        else if (ctx->pc != 0x219F34u) { ctx->pc = 0x219F34u; }
    }
    if (ctx->pc != 0x219F34u) { return; }
    ctx->pc = 0x219F34u;
    // 0x219f34: 0x10400004
    ctx->pc = 0x219F34u;
    {
        const bool branch_taken_0x219f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x219f34) {
            ctx->pc = 0x219F48u;
            goto label_219f48;
        }
    }
    ctx->pc = 0x219F3Cu;
    // 0x219f3c: 0x8e03000c
    ctx->pc = 0x219f3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x219f40: 0x24630001
    ctx->pc = 0x219f40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x219f44: 0xae03000c
    ctx->pc = 0x219f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_219f48:
    // 0x219f48: 0x7bbf0010
    ctx->pc = 0x219f48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219f4c: 0x7bb00000
    ctx->pc = 0x219f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219f50: 0x3e00008
    ctx->pc = 0x219F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219F48u: goto label_219f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219F58u;
}
